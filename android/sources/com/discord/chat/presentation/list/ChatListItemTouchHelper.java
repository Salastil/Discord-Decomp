package com.discord.chat.presentation.list;

import android.animation.Animator;
import android.animation.ValueAnimator;
import android.content.res.Resources;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.util.Pair;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.animation.AccelerateDecelerateInterpolator;
import androidx.annotation.NonNull;
import androidx.core.view.GestureDetectorCompat;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.h0;
import com.discord.R;
import java.util.ArrayList;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class ChatListItemTouchHelper extends RecyclerView.ItemDecoration implements RecyclerView.OnChildAttachStateChangeListener {
    static final int ACTION_MODE_DRAG_MASK = 16711680;
    private static final int ACTION_MODE_IDLE_MASK = 255;
    static final int ACTION_MODE_SWIPE_MASK = 65280;
    public static final int ACTION_STATE_DRAG = 2;
    public static final int ACTION_STATE_IDLE = 0;
    public static final int ACTION_STATE_SWIPE = 1;
    private static final int ACTIVE_POINTER_ID_NONE = -1;
    public static final int ANIMATION_TYPE_DRAG = 8;
    public static final int ANIMATION_TYPE_SWIPE_CANCEL = 4;
    public static final int ANIMATION_TYPE_SWIPE_CANCEL_SPRINGY = 8;
    public static final int ANIMATION_TYPE_SWIPE_SUCCESS = 2;
    private static final boolean DEBUG = false;
    static final int DIRECTION_FLAG_COUNT = 8;
    public static final int DOWN = 2;
    public static final int END = 32;
    public static final int LEFT = 4;
    private static final int PIXELS_PER_SECOND = 1000;
    public static final int RIGHT = 8;
    public static final int START = 16;
    private static final String TAG = "ItemTouchHelper";
    public static final int UP = 1;

    @NonNull
    ChatListCallback mCallback;
    private List<Integer> mDistances;
    private long mDragScrollStartTimeInMs;
    float mDx;
    float mDy;
    GestureDetectorCompat mGestureDetector;
    float mInitialTouchX;
    float mInitialTouchY;
    private ItemTouchHelperGestureListener mItemTouchHelperGestureListener;
    private float mMaxSwipeVelocity;
    RecyclerView mRecyclerView;
    int mSelectedFlags;
    private float mSelectedStartX;
    private float mSelectedStartY;
    private int mSlop;
    private List<RecyclerView.ViewHolder> mSwapTargets;
    private float mSwipeEscapeVelocity;
    private Rect mTmpRect;
    VelocityTracker mVelocityTracker;
    final List<View> mPendingCleanup = new ArrayList();
    private final float[] mTmpPosition = new float[2];
    RecyclerView.ViewHolder mSelected = null;
    int mActivePointerId = -1;
    private int mActionState = 0;
    List<RecoverAnimation> mRecoverAnimations = new ArrayList();
    final Runnable mScrollRunnable = new Runnable() { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.1
        @Override // java.lang.Runnable
        public void run() {
            ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
            if (chatListItemTouchHelper.mSelected == null || !chatListItemTouchHelper.scrollIfNecessary()) {
                return;
            }
            ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
            RecyclerView.ViewHolder viewHolder = chatListItemTouchHelper2.mSelected;
            if (viewHolder != null) {
                chatListItemTouchHelper2.moveIfNecessary(viewHolder);
            }
            ChatListItemTouchHelper chatListItemTouchHelper3 = ChatListItemTouchHelper.this;
            chatListItemTouchHelper3.mRecyclerView.removeCallbacks(chatListItemTouchHelper3.mScrollRunnable);
            RecyclerView recyclerView = ChatListItemTouchHelper.this.mRecyclerView;
            WeakHashMap weakHashMap = s0.a;
            recyclerView.postOnAnimation(this);
        }
    };
    private RecyclerView.ChildDrawingOrderCallback mChildDrawingOrderCallback = null;
    View mOverdrawChild = null;
    int mOverdrawChildPosition = -1;
    private final RecyclerView.OnItemTouchListener mOnItemTouchListener = new RecyclerView.OnItemTouchListener() { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.2
        @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
        public boolean onInterceptTouchEvent(@NonNull RecyclerView recyclerView, @NonNull MotionEvent motionEvent) {
            int findPointerIndex;
            RecoverAnimation findAnimation;
            ChatListItemTouchHelper.this.mGestureDetector.a.onTouchEvent(motionEvent);
            int actionMasked = motionEvent.getActionMasked();
            if (actionMasked == 0) {
                ChatListItemTouchHelper.this.mActivePointerId = motionEvent.getPointerId(0);
                ChatListItemTouchHelper.this.mInitialTouchX = motionEvent.getX();
                ChatListItemTouchHelper.this.mInitialTouchY = motionEvent.getY();
                ChatListItemTouchHelper.this.obtainVelocityTracker();
                ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
                if (chatListItemTouchHelper.mSelected == null && (findAnimation = chatListItemTouchHelper.findAnimation(motionEvent)) != null) {
                    ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
                    chatListItemTouchHelper2.mInitialTouchX -= findAnimation.mX;
                    chatListItemTouchHelper2.mInitialTouchY -= findAnimation.mY;
                    chatListItemTouchHelper2.endRecoverAnimation(findAnimation.mViewHolder, true);
                    if (ChatListItemTouchHelper.this.mPendingCleanup.remove(findAnimation.mViewHolder.itemView)) {
                        ChatListItemTouchHelper chatListItemTouchHelper3 = ChatListItemTouchHelper.this;
                        chatListItemTouchHelper3.mCallback.clearView(chatListItemTouchHelper3.mRecyclerView, findAnimation.mViewHolder);
                    }
                    ChatListItemTouchHelper.this.select(findAnimation.mViewHolder, findAnimation.mActionState);
                    ChatListItemTouchHelper chatListItemTouchHelper4 = ChatListItemTouchHelper.this;
                    chatListItemTouchHelper4.updateDxDy(motionEvent, chatListItemTouchHelper4.mSelectedFlags, 0);
                }
            } else if (actionMasked == 3 || actionMasked == 1) {
                ChatListItemTouchHelper chatListItemTouchHelper5 = ChatListItemTouchHelper.this;
                chatListItemTouchHelper5.mCallback.onReleased(recyclerView, chatListItemTouchHelper5.mSelected);
                ChatListItemTouchHelper chatListItemTouchHelper6 = ChatListItemTouchHelper.this;
                chatListItemTouchHelper6.mActivePointerId = -1;
                chatListItemTouchHelper6.select(null, 0);
            } else {
                int i5 = ChatListItemTouchHelper.this.mActivePointerId;
                if (i5 != -1 && (findPointerIndex = motionEvent.findPointerIndex(i5)) >= 0) {
                    ChatListItemTouchHelper.this.checkSelectForSwipe(actionMasked, motionEvent, findPointerIndex);
                }
            }
            VelocityTracker velocityTracker = ChatListItemTouchHelper.this.mVelocityTracker;
            if (velocityTracker != null) {
                velocityTracker.addMovement(motionEvent);
            }
            return ChatListItemTouchHelper.this.mSelected != null;
        }

        @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
        public void onRequestDisallowInterceptTouchEvent(boolean z5) {
            if (z5) {
                ChatListItemTouchHelper.this.select(null, 0);
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.OnItemTouchListener
        public void onTouchEvent(@NonNull RecyclerView recyclerView, @NonNull MotionEvent motionEvent) {
            ChatListItemTouchHelper.this.mGestureDetector.a.onTouchEvent(motionEvent);
            VelocityTracker velocityTracker = ChatListItemTouchHelper.this.mVelocityTracker;
            if (velocityTracker != null) {
                velocityTracker.addMovement(motionEvent);
            }
            if (ChatListItemTouchHelper.this.mActivePointerId == -1) {
                return;
            }
            int actionMasked = motionEvent.getActionMasked();
            int findPointerIndex = motionEvent.findPointerIndex(ChatListItemTouchHelper.this.mActivePointerId);
            if (findPointerIndex >= 0) {
                ChatListItemTouchHelper.this.checkSelectForSwipe(actionMasked, motionEvent, findPointerIndex);
            }
            ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
            RecyclerView.ViewHolder viewHolder = chatListItemTouchHelper.mSelected;
            if (viewHolder == null) {
                return;
            }
            if (actionMasked != 1) {
                if (actionMasked == 2) {
                    if (findPointerIndex >= 0) {
                        chatListItemTouchHelper.updateDxDy(motionEvent, chatListItemTouchHelper.mSelectedFlags, findPointerIndex);
                        ChatListItemTouchHelper.this.moveIfNecessary(viewHolder);
                        ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
                        chatListItemTouchHelper2.mRecyclerView.removeCallbacks(chatListItemTouchHelper2.mScrollRunnable);
                        ChatListItemTouchHelper.this.mScrollRunnable.run();
                        ChatListItemTouchHelper.this.mRecyclerView.invalidate();
                        return;
                    }
                    return;
                }
                if (actionMasked != 3) {
                    if (actionMasked != 6) {
                        return;
                    }
                    int actionIndex = motionEvent.getActionIndex();
                    int pointerId = motionEvent.getPointerId(actionIndex);
                    ChatListItemTouchHelper chatListItemTouchHelper3 = ChatListItemTouchHelper.this;
                    if (pointerId == chatListItemTouchHelper3.mActivePointerId) {
                        chatListItemTouchHelper3.mActivePointerId = motionEvent.getPointerId(actionIndex == 0 ? 1 : 0);
                        ChatListItemTouchHelper chatListItemTouchHelper4 = ChatListItemTouchHelper.this;
                        chatListItemTouchHelper4.updateDxDy(motionEvent, chatListItemTouchHelper4.mSelectedFlags, actionIndex);
                        return;
                    }
                    return;
                }
                VelocityTracker velocityTracker2 = chatListItemTouchHelper.mVelocityTracker;
                if (velocityTracker2 != null) {
                    velocityTracker2.clear();
                }
            }
            ChatListItemTouchHelper chatListItemTouchHelper5 = ChatListItemTouchHelper.this;
            chatListItemTouchHelper5.mCallback.onReleased(recyclerView, chatListItemTouchHelper5.mSelected);
            ChatListItemTouchHelper.this.select(null, 0);
            ChatListItemTouchHelper.this.mActivePointerId = -1;
        }
    };

    public class ItemTouchHelperGestureListener extends GestureDetector.SimpleOnGestureListener {
        private boolean mShouldReactToLongPress = true;

        public ItemTouchHelperGestureListener() {
        }

        public void doNotReactToLongPress() {
            this.mShouldReactToLongPress = false;
        }

        @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
        public boolean onDown(MotionEvent motionEvent) {
            return true;
        }

        @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
        public void onLongPress(MotionEvent motionEvent) {
            View findChildView;
            RecyclerView.ViewHolder childViewHolder;
            if (!this.mShouldReactToLongPress || (findChildView = ChatListItemTouchHelper.this.findChildView(motionEvent)) == null || (childViewHolder = ChatListItemTouchHelper.this.mRecyclerView.getChildViewHolder(findChildView)) == null) {
                return;
            }
            ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
            if (chatListItemTouchHelper.mCallback.hasDragFlag(chatListItemTouchHelper.mRecyclerView, childViewHolder)) {
                int pointerId = motionEvent.getPointerId(0);
                int i5 = ChatListItemTouchHelper.this.mActivePointerId;
                if (pointerId == i5) {
                    int findPointerIndex = motionEvent.findPointerIndex(i5);
                    float x5 = motionEvent.getX(findPointerIndex);
                    float y5 = motionEvent.getY(findPointerIndex);
                    ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
                    chatListItemTouchHelper2.mInitialTouchX = x5;
                    chatListItemTouchHelper2.mInitialTouchY = y5;
                    chatListItemTouchHelper2.mDy = 0.0f;
                    chatListItemTouchHelper2.mDx = 0.0f;
                    if (chatListItemTouchHelper2.mCallback.isLongPressDragEnabled()) {
                        ChatListItemTouchHelper.this.select(childViewHolder, 2);
                    }
                }
            }
        }
    }

    public static class RecoverAnimation implements Animator.AnimatorListener {
        final int mActionState;
        final int mAnimationType;
        private float mFraction;
        boolean mIsPendingCleanup;
        final float mStartDx;
        final float mStartDy;
        final float mTargetX;
        final float mTargetY;
        final ValueAnimator mValueAnimator;
        final RecyclerView.ViewHolder mViewHolder;
        float mX;
        float mY;
        boolean mOverridden = false;
        boolean mEnded = false;

        public RecoverAnimation(RecyclerView.ViewHolder viewHolder, int i5, int i6, float f2, float f10, float f11, float f12) {
            this.mActionState = i6;
            this.mAnimationType = i5;
            this.mViewHolder = viewHolder;
            this.mStartDx = f2;
            this.mStartDy = f10;
            this.mTargetX = f11;
            this.mTargetY = f12;
            ValueAnimator ofFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
            this.mValueAnimator = ofFloat;
            ofFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.RecoverAnimation.1
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                public void onAnimationUpdate(ValueAnimator valueAnimator) {
                    RecoverAnimation.this.setFraction(valueAnimator.getAnimatedFraction());
                }
            });
            ofFloat.setTarget(viewHolder.itemView);
            if (i5 == 8) {
                ofFloat.setInterpolator(new AccelerateDecelerateInterpolator());
            }
            ofFloat.addListener(this);
            setFraction(0.0f);
        }

        public void cancel() {
            this.mValueAnimator.cancel();
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationCancel(Animator animator) {
            setFraction(1.0f);
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationEnd(Animator animator) {
            if (!this.mEnded) {
                this.mViewHolder.setIsRecyclable(true);
            }
            this.mEnded = true;
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationRepeat(Animator animator) {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationStart(Animator animator) {
        }

        public void setDuration(long j) {
            this.mValueAnimator.setDuration(j);
        }

        public void setFraction(float f2) {
            this.mFraction = f2;
        }

        public void start() {
            this.mViewHolder.setIsRecyclable(false);
            this.mValueAnimator.start();
        }

        public void update() {
            float f2 = this.mStartDx;
            float f10 = this.mTargetX;
            if (f2 == f10) {
                this.mX = this.mViewHolder.itemView.getTranslationX();
            } else {
                this.mX = k0.d.c(f10, f2, this.mFraction, f2);
            }
            float f11 = this.mStartDy;
            float f12 = this.mTargetY;
            if (f11 == f12) {
                this.mY = this.mViewHolder.itemView.getTranslationY();
            } else {
                this.mY = k0.d.c(f12, f11, this.mFraction, f11);
            }
        }
    }

    public ChatListItemTouchHelper(@NonNull ChatListCallback chatListCallback) {
        this.mCallback = chatListCallback;
    }

    private void addChildDrawingOrderCallback() {
        if (this.mChildDrawingOrderCallback == null) {
            this.mChildDrawingOrderCallback = new RecyclerView.ChildDrawingOrderCallback() { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.5
                @Override // androidx.recyclerview.widget.RecyclerView.ChildDrawingOrderCallback
                public int onGetChildDrawingOrder(int i5, int i6) {
                    ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
                    View view = chatListItemTouchHelper.mOverdrawChild;
                    if (view != null) {
                        int i10 = chatListItemTouchHelper.mOverdrawChildPosition;
                        if (i10 == -1) {
                            i10 = chatListItemTouchHelper.mRecyclerView.indexOfChild(view);
                            ChatListItemTouchHelper.this.mOverdrawChildPosition = i10;
                        }
                        if (i6 == i5 - 1) {
                            return i10;
                        }
                        if (i6 >= i10) {
                            return i6 + 1;
                        }
                    }
                    return i6;
                }
            };
        }
        this.mRecyclerView.setChildDrawingOrderCallback(this.mChildDrawingOrderCallback);
    }

    private int checkHorizontalSwipe(RecyclerView.ViewHolder viewHolder, int i5) {
        if ((i5 & 12) == 0) {
            return 0;
        }
        int i6 = this.mDx > 0.0f ? 8 : 4;
        VelocityTracker velocityTracker = this.mVelocityTracker;
        if (velocityTracker != null && this.mActivePointerId > -1) {
            velocityTracker.computeCurrentVelocity(1000, this.mCallback.getSwipeVelocityThreshold(this.mMaxSwipeVelocity));
            float xVelocity = this.mVelocityTracker.getXVelocity(this.mActivePointerId);
            float yVelocity = this.mVelocityTracker.getYVelocity(this.mActivePointerId);
            int i10 = xVelocity > 0.0f ? 8 : 4;
            float abs = Math.abs(xVelocity);
            if ((i10 & i5) != 0 && i6 == i10 && abs >= this.mCallback.getSwipeEscapeVelocity(this.mSwipeEscapeVelocity) && abs > Math.abs(yVelocity)) {
                return i10;
            }
        }
        float swipeThreshold = this.mCallback.getSwipeThreshold(viewHolder) * this.mRecyclerView.getWidth();
        if ((i5 & i6) == 0 || Math.abs(this.mDx) <= swipeThreshold) {
            return 0;
        }
        return i6;
    }

    private int checkVerticalSwipe(RecyclerView.ViewHolder viewHolder, int i5) {
        if ((i5 & 3) == 0) {
            return 0;
        }
        int i6 = this.mDy > 0.0f ? 2 : 1;
        VelocityTracker velocityTracker = this.mVelocityTracker;
        if (velocityTracker != null && this.mActivePointerId > -1) {
            velocityTracker.computeCurrentVelocity(1000, this.mCallback.getSwipeVelocityThreshold(this.mMaxSwipeVelocity));
            float xVelocity = this.mVelocityTracker.getXVelocity(this.mActivePointerId);
            float yVelocity = this.mVelocityTracker.getYVelocity(this.mActivePointerId);
            int i10 = yVelocity > 0.0f ? 2 : 1;
            float abs = Math.abs(yVelocity);
            if ((i10 & i5) != 0 && i10 == i6 && abs >= this.mCallback.getSwipeEscapeVelocity(this.mSwipeEscapeVelocity) && abs > Math.abs(xVelocity)) {
                return i10;
            }
        }
        float swipeThreshold = this.mCallback.getSwipeThreshold(viewHolder) * this.mRecyclerView.getHeight();
        if ((i5 & i6) == 0 || Math.abs(this.mDy) <= swipeThreshold) {
            return 0;
        }
        return i6;
    }

    private void destroyCallbacks() {
        this.mRecyclerView.removeItemDecoration(this);
        this.mRecyclerView.removeOnItemTouchListener(this.mOnItemTouchListener);
        this.mRecyclerView.removeOnChildAttachStateChangeListener(this);
        for (int size = this.mRecoverAnimations.size() - 1; size >= 0; size--) {
            RecoverAnimation recoverAnimation = this.mRecoverAnimations.get(0);
            recoverAnimation.cancel();
            this.mCallback.clearView(this.mRecyclerView, recoverAnimation.mViewHolder);
        }
        this.mRecoverAnimations.clear();
        this.mOverdrawChild = null;
        this.mOverdrawChildPosition = -1;
        releaseVelocityTracker();
        stopGestureDetection();
    }

    private List<RecyclerView.ViewHolder> findSwapTargets(RecyclerView.ViewHolder viewHolder) {
        RecyclerView.ViewHolder viewHolder2 = viewHolder;
        List<RecyclerView.ViewHolder> list = this.mSwapTargets;
        if (list == null) {
            this.mSwapTargets = new ArrayList();
            this.mDistances = new ArrayList();
        } else {
            list.clear();
            this.mDistances.clear();
        }
        int boundingBoxMargin = this.mCallback.getBoundingBoxMargin();
        int round = Math.round(this.mSelectedStartX + this.mDx) - boundingBoxMargin;
        int round2 = Math.round(this.mSelectedStartY + this.mDy) - boundingBoxMargin;
        int i5 = boundingBoxMargin * 2;
        int width = viewHolder2.itemView.getWidth() + round + i5;
        int height = viewHolder2.itemView.getHeight() + round2 + i5;
        int i6 = (round + width) / 2;
        int i10 = (round2 + height) / 2;
        RecyclerView.LayoutManager layoutManager = this.mRecyclerView.getLayoutManager();
        int childCount = layoutManager.getChildCount();
        int i11 = 0;
        while (i11 < childCount) {
            View childAt = layoutManager.getChildAt(i11);
            if (childAt != viewHolder2.itemView && childAt.getBottom() >= round2 && childAt.getTop() <= height && childAt.getRight() >= round && childAt.getLeft() <= width) {
                RecyclerView.ViewHolder childViewHolder = this.mRecyclerView.getChildViewHolder(childAt);
                if (this.mCallback.canDropOver(this.mRecyclerView, this.mSelected, childViewHolder)) {
                    int abs = Math.abs(i6 - ((childAt.getRight() + childAt.getLeft()) / 2));
                    int abs2 = Math.abs(i10 - ((childAt.getBottom() + childAt.getTop()) / 2));
                    int i12 = (abs2 * abs2) + (abs * abs);
                    int size = this.mSwapTargets.size();
                    int i13 = 0;
                    for (int i14 = 0; i14 < size && i12 > this.mDistances.get(i14).intValue(); i14++) {
                        i13++;
                    }
                    this.mSwapTargets.add(i13, childViewHolder);
                    this.mDistances.add(i13, Integer.valueOf(i12));
                }
            }
            i11++;
            viewHolder2 = viewHolder;
        }
        return this.mSwapTargets;
    }

    private RecyclerView.ViewHolder findSwipedView(MotionEvent motionEvent) {
        View findChildView;
        RecyclerView.LayoutManager layoutManager = this.mRecyclerView.getLayoutManager();
        int i5 = this.mActivePointerId;
        if (i5 == -1) {
            return null;
        }
        int findPointerIndex = motionEvent.findPointerIndex(i5);
        float x5 = motionEvent.getX(findPointerIndex) - this.mInitialTouchX;
        float y5 = motionEvent.getY(findPointerIndex) - this.mInitialTouchY;
        float abs = Math.abs(x5);
        float abs2 = Math.abs(y5);
        int i6 = this.mSlop;
        if (abs < i6 && abs2 < i6) {
            return null;
        }
        if (abs > abs2 && layoutManager.canScrollHorizontally()) {
            return null;
        }
        if ((abs2 <= abs || !layoutManager.canScrollVertically()) && (findChildView = findChildView(motionEvent)) != null) {
            return this.mRecyclerView.getChildViewHolder(findChildView);
        }
        return null;
    }

    private void getSelectedDxDy(float[] fArr) {
        if ((this.mSelectedFlags & 12) != 0) {
            fArr[0] = (this.mSelectedStartX + this.mDx) - this.mSelected.itemView.getLeft();
        } else {
            fArr[0] = this.mSelected.itemView.getTranslationX();
        }
        if ((this.mSelectedFlags & 3) != 0) {
            fArr[1] = (this.mSelectedStartY + this.mDy) - this.mSelected.itemView.getTop();
        } else {
            fArr[1] = this.mSelected.itemView.getTranslationY();
        }
    }

    private static boolean hitTest(View view, float f2, float f10, float f11, float f12) {
        return f2 >= f11 && f2 <= f11 + ((float) view.getWidth()) && f10 >= f12 && f10 <= f12 + ((float) view.getHeight());
    }

    private void releaseVelocityTracker() {
        VelocityTracker velocityTracker = this.mVelocityTracker;
        if (velocityTracker != null) {
            velocityTracker.recycle();
            this.mVelocityTracker = null;
        }
    }

    private void setupCallbacks() {
        this.mSlop = ViewConfiguration.get(this.mRecyclerView.getContext()).getScaledTouchSlop();
        this.mRecyclerView.addItemDecoration(this);
        this.mRecyclerView.addOnItemTouchListener(this.mOnItemTouchListener);
        this.mRecyclerView.addOnChildAttachStateChangeListener(this);
        startGestureDetection();
    }

    private void startGestureDetection() {
        this.mItemTouchHelperGestureListener = new ItemTouchHelperGestureListener();
        this.mGestureDetector = new GestureDetectorCompat(this.mRecyclerView.getContext(), this.mItemTouchHelperGestureListener);
    }

    private void stopGestureDetection() {
        ItemTouchHelperGestureListener itemTouchHelperGestureListener = this.mItemTouchHelperGestureListener;
        if (itemTouchHelperGestureListener != null) {
            itemTouchHelperGestureListener.doNotReactToLongPress();
            this.mItemTouchHelperGestureListener = null;
        }
        if (this.mGestureDetector != null) {
            this.mGestureDetector = null;
        }
    }

    private int swipeIfNecessary(RecyclerView.ViewHolder viewHolder) {
        if (this.mActionState == 2) {
            return 0;
        }
        int movementFlags = this.mCallback.getMovementFlags(this.mRecyclerView, viewHolder);
        ChatListCallback chatListCallback = this.mCallback;
        RecyclerView recyclerView = this.mRecyclerView;
        WeakHashMap weakHashMap = s0.a;
        int convertToAbsoluteDirection = (chatListCallback.convertToAbsoluteDirection(movementFlags, recyclerView.getLayoutDirection()) & ACTION_MODE_SWIPE_MASK) >> 8;
        if (convertToAbsoluteDirection == 0) {
            return 0;
        }
        int i5 = (movementFlags & ACTION_MODE_SWIPE_MASK) >> 8;
        if (Math.abs(this.mDx) > Math.abs(this.mDy)) {
            int checkHorizontalSwipe = checkHorizontalSwipe(viewHolder, convertToAbsoluteDirection);
            if (checkHorizontalSwipe > 0) {
                return (i5 & checkHorizontalSwipe) == 0 ? h0.convertToRelativeDirection(checkHorizontalSwipe, this.mRecyclerView.getLayoutDirection()) : checkHorizontalSwipe;
            }
            int checkVerticalSwipe = checkVerticalSwipe(viewHolder, convertToAbsoluteDirection);
            if (checkVerticalSwipe > 0) {
                return checkVerticalSwipe;
            }
        } else {
            int checkVerticalSwipe2 = checkVerticalSwipe(viewHolder, convertToAbsoluteDirection);
            if (checkVerticalSwipe2 > 0) {
                return checkVerticalSwipe2;
            }
            int checkHorizontalSwipe2 = checkHorizontalSwipe(viewHolder, convertToAbsoluteDirection);
            if (checkHorizontalSwipe2 > 0) {
                return (i5 & checkHorizontalSwipe2) == 0 ? h0.convertToRelativeDirection(checkHorizontalSwipe2, this.mRecyclerView.getLayoutDirection()) : checkHorizontalSwipe2;
            }
        }
        return 0;
    }

    public void attachToRecyclerView(RecyclerView recyclerView) {
        RecyclerView recyclerView2 = this.mRecyclerView;
        if (recyclerView2 == recyclerView) {
            return;
        }
        if (recyclerView2 != null) {
            destroyCallbacks();
        }
        this.mRecyclerView = recyclerView;
        if (recyclerView != null) {
            Resources resources = recyclerView.getResources();
            this.mSwipeEscapeVelocity = resources.getDimension(R.dimen.item_touch_helper_swipe_escape_velocity);
            this.mMaxSwipeVelocity = resources.getDimension(R.dimen.item_touch_helper_swipe_escape_max_velocity);
            setupCallbacks();
        }
    }

    public void checkSelectForSwipe(int i5, MotionEvent motionEvent, int i6) {
        RecyclerView.ViewHolder findSwipedView;
        int absoluteMovementFlags;
        if (this.mSelected != null || i5 != 2 || this.mActionState == 2 || !this.mCallback.isItemViewSwipeEnabled() || this.mRecyclerView.getScrollState() == 1 || (findSwipedView = findSwipedView(motionEvent)) == null || (absoluteMovementFlags = (this.mCallback.getAbsoluteMovementFlags(this.mRecyclerView, findSwipedView) & ACTION_MODE_SWIPE_MASK) >> 8) == 0) {
            return;
        }
        float x5 = motionEvent.getX(i6);
        float y5 = motionEvent.getY(i6);
        float f2 = x5 - this.mInitialTouchX;
        float f10 = y5 - this.mInitialTouchY;
        float abs = Math.abs(f2);
        float abs2 = Math.abs(f10);
        int i10 = this.mSlop;
        if (abs >= i10 || abs2 >= i10) {
            if (abs > abs2) {
                if (f2 < 0.0f && (absoluteMovementFlags & 4) == 0) {
                    return;
                }
                if (f2 > 0.0f && (absoluteMovementFlags & 8) == 0) {
                    return;
                }
            } else {
                if (f10 < 0.0f && (absoluteMovementFlags & 1) == 0) {
                    return;
                }
                if (f10 > 0.0f && (absoluteMovementFlags & 2) == 0) {
                    return;
                }
            }
            this.mDy = 0.0f;
            this.mDx = 0.0f;
            this.mActivePointerId = motionEvent.getPointerId(0);
            select(findSwipedView, 1);
        }
    }

    public void endRecoverAnimation(RecyclerView.ViewHolder viewHolder, boolean z5) {
        for (int size = this.mRecoverAnimations.size() - 1; size >= 0; size--) {
            RecoverAnimation recoverAnimation = this.mRecoverAnimations.get(size);
            if (recoverAnimation.mViewHolder == viewHolder) {
                recoverAnimation.mOverridden |= z5;
                if (!recoverAnimation.mEnded) {
                    recoverAnimation.cancel();
                }
                this.mRecoverAnimations.remove(size);
                return;
            }
        }
    }

    public RecoverAnimation findAnimation(MotionEvent motionEvent) {
        if (this.mRecoverAnimations.isEmpty()) {
            return null;
        }
        View findChildView = findChildView(motionEvent);
        for (int size = this.mRecoverAnimations.size() - 1; size >= 0; size--) {
            RecoverAnimation recoverAnimation = this.mRecoverAnimations.get(size);
            if (recoverAnimation.mViewHolder.itemView == findChildView) {
                return recoverAnimation;
            }
        }
        return null;
    }

    public View findChildView(MotionEvent motionEvent) {
        float x5 = motionEvent.getX();
        float y5 = motionEvent.getY();
        RecyclerView.ViewHolder viewHolder = this.mSelected;
        if (viewHolder != null) {
            View view = viewHolder.itemView;
            if (hitTest(view, x5, y5, this.mSelectedStartX + this.mDx, this.mSelectedStartY + this.mDy)) {
                return view;
            }
        }
        for (int size = this.mRecoverAnimations.size() - 1; size >= 0; size--) {
            RecoverAnimation recoverAnimation = this.mRecoverAnimations.get(size);
            View view2 = recoverAnimation.mViewHolder.itemView;
            if (hitTest(view2, x5, y5, recoverAnimation.mX, recoverAnimation.mY)) {
                return view2;
            }
        }
        return this.mRecyclerView.findChildViewUnder(x5, y5);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public void getItemOffsets(Rect rect, View view, RecyclerView recyclerView, RecyclerView.State state) {
        rect.setEmpty();
    }

    public boolean hasRunningRecoverAnim() {
        int size = this.mRecoverAnimations.size();
        for (int i5 = 0; i5 < size; i5++) {
            if (!this.mRecoverAnimations.get(i5).mEnded) {
                return true;
            }
        }
        return false;
    }

    public void moveIfNecessary(RecyclerView.ViewHolder viewHolder) {
        if (!this.mRecyclerView.isLayoutRequested() && this.mActionState == 2) {
            float moveThreshold = this.mCallback.getMoveThreshold(viewHolder);
            int i5 = (int) (this.mSelectedStartX + this.mDx);
            int i6 = (int) (this.mSelectedStartY + this.mDy);
            if (Math.abs(i6 - viewHolder.itemView.getTop()) >= viewHolder.itemView.getHeight() * moveThreshold || Math.abs(i5 - viewHolder.itemView.getLeft()) >= viewHolder.itemView.getWidth() * moveThreshold) {
                List<RecyclerView.ViewHolder> findSwapTargets = findSwapTargets(viewHolder);
                if (findSwapTargets.size() == 0) {
                    return;
                }
                RecyclerView.ViewHolder chooseDropTarget = this.mCallback.chooseDropTarget(viewHolder, findSwapTargets, i5, i6);
                if (chooseDropTarget == null) {
                    this.mSwapTargets.clear();
                    this.mDistances.clear();
                    return;
                }
                int absoluteAdapterPosition = chooseDropTarget.getAbsoluteAdapterPosition();
                int absoluteAdapterPosition2 = viewHolder.getAbsoluteAdapterPosition();
                if (this.mCallback.onMove(this.mRecyclerView, viewHolder, chooseDropTarget)) {
                    this.mCallback.onMoved(this.mRecyclerView, viewHolder, absoluteAdapterPosition2, chooseDropTarget, absoluteAdapterPosition, i5, i6);
                }
            }
        }
    }

    public void obtainVelocityTracker() {
        VelocityTracker velocityTracker = this.mVelocityTracker;
        if (velocityTracker != null) {
            velocityTracker.recycle();
        }
        this.mVelocityTracker = VelocityTracker.obtain();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnChildAttachStateChangeListener
    public void onChildViewAttachedToWindow(@NonNull View view) {
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnChildAttachStateChangeListener
    public void onChildViewDetachedFromWindow(@NonNull View view) {
        removeChildDrawingOrderCallbackIfNecessary(view);
        RecyclerView.ViewHolder childViewHolder = this.mRecyclerView.getChildViewHolder(view);
        if (childViewHolder == null) {
            return;
        }
        RecyclerView.ViewHolder viewHolder = this.mSelected;
        if (viewHolder != null && childViewHolder == viewHolder) {
            select(null, 0);
            return;
        }
        endRecoverAnimation(childViewHolder, false);
        if (this.mPendingCleanup.remove(childViewHolder.itemView)) {
            this.mCallback.clearView(this.mRecyclerView, childViewHolder);
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public void onDraw(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        float f2;
        float f10;
        this.mOverdrawChildPosition = -1;
        if (this.mSelected != null) {
            getSelectedDxDy(this.mTmpPosition);
            float[] fArr = this.mTmpPosition;
            float f11 = fArr[0];
            f10 = fArr[1];
            f2 = f11;
        } else {
            f2 = 0.0f;
            f10 = 0.0f;
        }
        this.mCallback.onDraw(canvas, recyclerView, this.mSelected, this.mRecoverAnimations, this.mActionState, f2, f10);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public void onDrawOver(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        float f2;
        float f10;
        if (this.mSelected != null) {
            getSelectedDxDy(this.mTmpPosition);
            float[] fArr = this.mTmpPosition;
            float f11 = fArr[0];
            f10 = fArr[1];
            f2 = f11;
        } else {
            f2 = 0.0f;
            f10 = 0.0f;
        }
        this.mCallback.onDrawOver(canvas, recyclerView, this.mSelected, this.mRecoverAnimations, this.mActionState, f2, f10);
    }

    public void postDispatchSwipe(final RecoverAnimation recoverAnimation, final int i5) {
        this.mRecyclerView.post(new Runnable() { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.4
            @Override // java.lang.Runnable
            public void run() {
                RecyclerView recyclerView = ChatListItemTouchHelper.this.mRecyclerView;
                if (recyclerView == null || !recyclerView.isAttachedToWindow()) {
                    return;
                }
                RecoverAnimation recoverAnimation2 = recoverAnimation;
                if (recoverAnimation2.mOverridden || recoverAnimation2.mViewHolder.getAbsoluteAdapterPosition() == -1) {
                    return;
                }
                RecyclerView.ItemAnimator itemAnimator = ChatListItemTouchHelper.this.mRecyclerView.getItemAnimator();
                if ((itemAnimator == null || !itemAnimator.isRunning(null)) && !ChatListItemTouchHelper.this.hasRunningRecoverAnim()) {
                    ChatListItemTouchHelper.this.mCallback.onSwiped(recoverAnimation.mViewHolder, i5);
                } else {
                    ChatListItemTouchHelper.this.mRecyclerView.post(this);
                }
            }
        });
    }

    public void removeChildDrawingOrderCallbackIfNecessary(View view) {
        if (view == this.mOverdrawChild) {
            this.mOverdrawChild = null;
            if (this.mChildDrawingOrderCallback != null) {
                this.mRecyclerView.setChildDrawingOrderCallback(null);
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x009c, code lost:
    
        if (r6 < 0) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x00bf, code lost:
    
        if (r6 > 0) goto L38;
     */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00de  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00f6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean scrollIfNecessary() {
        int i5;
        int i6;
        int i10;
        if (this.mSelected == null) {
            this.mDragScrollStartTimeInMs = Long.MIN_VALUE;
            return false;
        }
        long currentTimeMillis = System.currentTimeMillis();
        long j = this.mDragScrollStartTimeInMs;
        long j5 = j == Long.MIN_VALUE ? 0L : currentTimeMillis - j;
        RecyclerView.LayoutManager layoutManager = this.mRecyclerView.getLayoutManager();
        if (this.mTmpRect == null) {
            this.mTmpRect = new Rect();
        }
        layoutManager.calculateItemDecorationsForChild(this.mSelected.itemView, this.mTmpRect);
        if (layoutManager.canScrollHorizontally()) {
            int i11 = (int) (this.mSelectedStartX + this.mDx);
            int paddingLeft = (i11 - this.mTmpRect.left) - this.mRecyclerView.getPaddingLeft();
            float f2 = this.mDx;
            if ((f2 < 0.0f && paddingLeft < 0) || (f2 > 0.0f && (paddingLeft = ((this.mSelected.itemView.getWidth() + i11) + this.mTmpRect.right) - (this.mRecyclerView.getWidth() - this.mRecyclerView.getPaddingRight())) > 0)) {
                i5 = paddingLeft;
                if (layoutManager.canScrollVertically()) {
                    int i12 = (int) (this.mSelectedStartY + this.mDy);
                    i6 = (i12 - this.mTmpRect.top) - this.mRecyclerView.getPaddingTop();
                    float f10 = this.mDy;
                    if (f10 < 0.0f) {
                    }
                    if (f10 > 0.0f) {
                        i6 = ((this.mSelected.itemView.getHeight() + i12) + this.mTmpRect.bottom) - (this.mRecyclerView.getHeight() - this.mRecyclerView.getPaddingBottom());
                    }
                }
                i6 = 0;
                if (i5 != 0) {
                    i5 = this.mCallback.interpolateOutOfBoundsScroll(this.mRecyclerView, this.mSelected.itemView.getWidth(), i5, this.mRecyclerView.getWidth(), j5);
                }
                i10 = i5;
                if (i6 == 0) {
                    i6 = this.mCallback.interpolateOutOfBoundsScroll(this.mRecyclerView, this.mSelected.itemView.getHeight(), i6, this.mRecyclerView.getHeight(), j5);
                }
                if (i10 != 0 && i6 == 0) {
                    this.mDragScrollStartTimeInMs = Long.MIN_VALUE;
                    return false;
                }
                if (this.mDragScrollStartTimeInMs == Long.MIN_VALUE) {
                    this.mDragScrollStartTimeInMs = currentTimeMillis;
                }
                this.mRecyclerView.scrollBy(i10, i6);
                return true;
            }
        }
        i5 = 0;
        if (layoutManager.canScrollVertically()) {
        }
        i6 = 0;
        if (i5 != 0) {
        }
        i10 = i5;
        if (i6 == 0) {
        }
        if (i10 != 0) {
        }
        if (this.mDragScrollStartTimeInMs == Long.MIN_VALUE) {
        }
        this.mRecyclerView.scrollBy(i10, i6);
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:45:0x009f, code lost:
    
        if (r19.mCallback.getShouldTriggerReply() != false) goto L36;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void select(RecyclerView.ViewHolder viewHolder, int i5) {
        int i6;
        boolean z5;
        float f2;
        float signum;
        if (viewHolder == this.mSelected && i5 == this.mActionState) {
            return;
        }
        this.mDragScrollStartTimeInMs = Long.MIN_VALUE;
        int i10 = this.mActionState;
        endRecoverAnimation(viewHolder, true);
        this.mActionState = i5;
        if (i5 == 2) {
            if (viewHolder == null) {
                throw new IllegalArgumentException("Must pass a ViewHolder when dragging");
            }
            this.mOverdrawChild = viewHolder.itemView;
            addChildDrawingOrderCallback();
        }
        int i11 = (1 << ((i5 * 8) + 8)) - 1;
        final RecyclerView.ViewHolder viewHolder2 = this.mSelected;
        boolean z6 = false;
        if (viewHolder2 != null) {
            if (viewHolder2.itemView.getParent() != null) {
                final int swipeIfNecessary = (this.mCallback.shouldReturnToOriginalPosition() || i10 == 2) ? 0 : swipeIfNecessary(viewHolder2);
                releaseVelocityTracker();
                int i12 = 4;
                if (swipeIfNecessary == 1 || swipeIfNecessary == 2) {
                    f2 = 0.0f;
                    signum = Math.signum(this.mDy) * this.mRecyclerView.getHeight();
                } else if (swipeIfNecessary == 4 || swipeIfNecessary == 8 || swipeIfNecessary == 16 || swipeIfNecessary == 32) {
                    signum = 0.0f;
                    f2 = Math.signum(this.mDx) * this.mRecyclerView.getWidth();
                } else {
                    f2 = 0.0f;
                    signum = 0.0f;
                }
                if (i10 != 2) {
                    if (swipeIfNecessary > 0) {
                        i12 = 2;
                    }
                    getSelectedDxDy(this.mTmpPosition);
                    float[] fArr = this.mTmpPosition;
                    float f10 = fArr[0];
                    float f11 = fArr[1];
                    i6 = 0;
                    RecoverAnimation recoverAnimation = new RecoverAnimation(viewHolder2, i12, i10, f10, f11, f2, signum) { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.3
                        @Override // com.discord.chat.presentation.list.ChatListItemTouchHelper.RecoverAnimation, android.animation.Animator.AnimatorListener
                        public void onAnimationEnd(Animator animator) {
                            super.onAnimationEnd(animator);
                            if (this.mOverridden) {
                                return;
                            }
                            if (swipeIfNecessary <= 0) {
                                ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
                                chatListItemTouchHelper.mCallback.clearView(chatListItemTouchHelper.mRecyclerView, viewHolder2);
                            } else {
                                ChatListItemTouchHelper.this.mPendingCleanup.add(viewHolder2.itemView);
                                this.mIsPendingCleanup = true;
                                int i13 = swipeIfNecessary;
                                if (i13 > 0) {
                                    ChatListItemTouchHelper.this.postDispatchSwipe(this, i13);
                                }
                            }
                            ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
                            View view = chatListItemTouchHelper2.mOverdrawChild;
                            View view2 = viewHolder2.itemView;
                            if (view == view2) {
                                chatListItemTouchHelper2.removeChildDrawingOrderCallbackIfNecessary(view2);
                            }
                        }
                    };
                    recoverAnimation.setDuration(this.mCallback.getAnimationDuration(this.mRecyclerView, i12, f2 - f10, signum - f11));
                    this.mRecoverAnimations.add(recoverAnimation);
                    recoverAnimation.start();
                    z5 = true;
                }
                i12 = 8;
                getSelectedDxDy(this.mTmpPosition);
                float[] fArr2 = this.mTmpPosition;
                float f102 = fArr2[0];
                float f112 = fArr2[1];
                i6 = 0;
                RecoverAnimation recoverAnimation2 = new RecoverAnimation(viewHolder2, i12, i10, f102, f112, f2, signum) { // from class: com.discord.chat.presentation.list.ChatListItemTouchHelper.3
                    @Override // com.discord.chat.presentation.list.ChatListItemTouchHelper.RecoverAnimation, android.animation.Animator.AnimatorListener
                    public void onAnimationEnd(Animator animator) {
                        super.onAnimationEnd(animator);
                        if (this.mOverridden) {
                            return;
                        }
                        if (swipeIfNecessary <= 0) {
                            ChatListItemTouchHelper chatListItemTouchHelper = ChatListItemTouchHelper.this;
                            chatListItemTouchHelper.mCallback.clearView(chatListItemTouchHelper.mRecyclerView, viewHolder2);
                        } else {
                            ChatListItemTouchHelper.this.mPendingCleanup.add(viewHolder2.itemView);
                            this.mIsPendingCleanup = true;
                            int i13 = swipeIfNecessary;
                            if (i13 > 0) {
                                ChatListItemTouchHelper.this.postDispatchSwipe(this, i13);
                            }
                        }
                        ChatListItemTouchHelper chatListItemTouchHelper2 = ChatListItemTouchHelper.this;
                        View view = chatListItemTouchHelper2.mOverdrawChild;
                        View view2 = viewHolder2.itemView;
                        if (view == view2) {
                            chatListItemTouchHelper2.removeChildDrawingOrderCallbackIfNecessary(view2);
                        }
                    }
                };
                recoverAnimation2.setDuration(this.mCallback.getAnimationDuration(this.mRecyclerView, i12, f2 - f102, signum - f112));
                this.mRecoverAnimations.add(recoverAnimation2);
                recoverAnimation2.start();
                z5 = true;
            } else {
                i6 = 0;
                removeChildDrawingOrderCallbackIfNecessary(viewHolder2.itemView);
                this.mCallback.clearView(this.mRecyclerView, viewHolder2);
                z5 = false;
            }
            this.mSelected = null;
            z6 = z5;
        } else {
            i6 = 0;
        }
        if (viewHolder != null) {
            this.mSelectedFlags = (this.mCallback.getAbsoluteMovementFlags(this.mRecyclerView, viewHolder) & i11) >> (this.mActionState * 8);
            this.mSelectedStartX = viewHolder.itemView.getLeft();
            this.mSelectedStartY = viewHolder.itemView.getTop();
            this.mSelected = viewHolder;
            if (i5 == 2) {
                viewHolder.itemView.performHapticFeedback(i6);
            }
        }
        if (!z6) {
            this.mRecyclerView.getLayoutManager().requestSimpleAnimationsInNextLayout();
        }
        this.mCallback.onSelectedChanged(this.mSelected, this.mActionState);
        this.mRecyclerView.invalidate();
    }

    public void startDrag(@NonNull RecyclerView.ViewHolder viewHolder) {
        if (this.mCallback.hasDragFlag(this.mRecyclerView, viewHolder) && viewHolder.itemView.getParent() == this.mRecyclerView) {
            obtainVelocityTracker();
            this.mDy = 0.0f;
            this.mDx = 0.0f;
            select(viewHolder, 2);
        }
    }

    public void updateDxDy(MotionEvent motionEvent, int i5, int i6) {
        Pair effectiveDxDy = this.mCallback.getEffectiveDxDy(motionEvent.getX(i6) - this.mInitialTouchX, motionEvent.getY(i6) - this.mInitialTouchY);
        this.mDx = ((Float) effectiveDxDy.first).floatValue();
        this.mDy = ((Float) effectiveDxDy.second).floatValue();
        if ((i5 & 4) == 0) {
            this.mDx = Math.max(0.0f, this.mDx);
        }
        if ((i5 & 8) == 0) {
            this.mDx = Math.min(0.0f, this.mDx);
        }
        if ((i5 & 1) == 0) {
            this.mDy = Math.max(0.0f, this.mDy);
        }
        if ((i5 & 2) == 0) {
            this.mDy = Math.min(0.0f, this.mDy);
        }
    }
}
