package androidx.recyclerview.widget;

import android.R;
import android.animation.LayoutTransition;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.Observable;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.PointF;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import android.os.Trace;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.Display;
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.animation.Interpolator;
import android.widget.EdgeEffect;
import android.widget.OverScroller;
import androidx.annotation.NonNull;
import androidx.collection.SimpleArrayMap;
import androidx.core.view.DifferentialMotionFlingController;
import androidx.core.view.DifferentialMotionFlingTarget;
import androidx.core.view.NestedScrollingChildHelper;
import androidx.core.view.ScrollingView;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.recyclerview.widget.GapWorker;
import androidx.recyclerview.widget.ViewBoundsCheck;
import androidx.recyclerview.widget.ViewInfoStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class RecyclerView extends ViewGroup implements ScrollingView, androidx.core.view.o {
    static final int DEFAULT_ORIENTATION = 1;
    static final boolean DISPATCH_TEMP_DETACH = false;
    private static final float FLING_DESTRETCH_FACTOR = 4.0f;
    static final long FOREVER_NS = Long.MAX_VALUE;
    public static final int HORIZONTAL = 0;
    private static final float INFLEXION = 0.35f;
    private static final int INVALID_POINTER = -1;
    public static final int INVALID_TYPE = -1;
    private static final Class<?>[] LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE;
    static final String LOW_RES_ROTARY_ENCODER_FEATURE = "android.hardware.rotaryencoder.lowres";
    static final int MAX_SCROLL_DURATION = 2000;
    public static final long NO_ID = -1;
    public static final int NO_POSITION = -1;
    private static final float SCROLL_FRICTION = 0.015f;
    public static final int SCROLL_STATE_DRAGGING = 1;
    public static final int SCROLL_STATE_IDLE = 0;
    public static final int SCROLL_STATE_SETTLING = 2;
    static final String TAG = "RecyclerView";
    public static final int TOUCH_SLOP_DEFAULT = 0;
    public static final int TOUCH_SLOP_PAGING = 1;
    static final String TRACE_CREATE_VIEW_TAG = "RV CreateView";
    private static final String TRACE_HANDLE_ADAPTER_UPDATES_TAG = "RV PartialInvalidate";
    private static final String TRACE_ON_DATA_SET_CHANGE_LAYOUT_TAG = "RV FullInvalidate";
    private static final String TRACE_ON_LAYOUT_TAG = "RV OnLayout";
    static final String TRACE_PREFETCH_TAG = "RV Prefetch";
    static final String TRACE_SCROLL_TAG = "RV Scroll";
    public static final int UNDEFINED_DURATION = Integer.MIN_VALUE;
    static final boolean VERBOSE_TRACING = false;
    public static final int VERTICAL = 1;
    static boolean sDebugAssertionsEnabled = false;
    static final StretchEdgeEffectFactory sDefaultEdgeEffectFactory;
    static final Interpolator sQuinticInterpolator;
    static boolean sVerboseLoggingEnabled = false;
    RecyclerViewAccessibilityDelegate mAccessibilityDelegate;
    private final AccessibilityManager mAccessibilityManager;
    Adapter mAdapter;
    AdapterHelper mAdapterHelper;
    boolean mAdapterUpdateDuringMeasure;
    private EdgeEffect mBottomGlow;
    private ChildDrawingOrderCallback mChildDrawingOrderCallback;
    ChildHelper mChildHelper;
    boolean mClipToPadding;
    boolean mDataSetHasChangedAfterLayout;
    DifferentialMotionFlingController mDifferentialMotionFlingController;
    private final DifferentialMotionFlingTarget mDifferentialMotionFlingTarget;
    boolean mDispatchItemsChangedEvent;
    private int mDispatchScrollCounter;
    private int mEatenAccessibilityChangeFlags;

    @NonNull
    private EdgeEffectFactory mEdgeEffectFactory;
    boolean mEnableFastScroller;
    boolean mFirstLayoutComplete;
    GapWorker mGapWorker;
    boolean mHasFixedSize;
    private boolean mIgnoreMotionEventTillDown;
    private int mInitialTouchX;
    private int mInitialTouchY;
    private int mInterceptRequestLayoutDepth;
    private OnItemTouchListener mInterceptingOnItemTouchListener;
    boolean mIsAttached;
    ItemAnimator mItemAnimator;
    private ItemAnimator.ItemAnimatorListener mItemAnimatorListener;
    private Runnable mItemAnimatorRunner;
    final ArrayList<ItemDecoration> mItemDecorations;
    boolean mItemsAddedOrRemoved;
    boolean mItemsChanged;
    private int mLastAutoMeasureNonExactMeasuredHeight;
    private int mLastAutoMeasureNonExactMeasuredWidth;
    private boolean mLastAutoMeasureSkippedDueToExact;
    private int mLastTouchX;
    private int mLastTouchY;
    LayoutManager mLayout;
    private int mLayoutOrScrollCounter;
    boolean mLayoutSuppressed;
    boolean mLayoutWasDefered;
    private EdgeEffect mLeftGlow;
    boolean mLowResRotaryEncoderFeature;
    private final int mMaxFlingVelocity;
    private final int mMinFlingVelocity;
    private final int[] mMinMaxLayoutPositions;
    private final int[] mNestedOffsets;
    private final RecyclerViewDataObserver mObserver;
    private List<OnChildAttachStateChangeListener> mOnChildAttachStateListeners;
    private OnFlingListener mOnFlingListener;
    private final ArrayList<OnItemTouchListener> mOnItemTouchListeners;
    final List<ViewHolder> mPendingAccessibilityImportanceChange;
    SavedState mPendingSavedState;
    private final float mPhysicalCoef;
    boolean mPostedAnimatorRunner;
    GapWorker.LayoutPrefetchRegistryImpl mPrefetchRegistry;
    private boolean mPreserveFocusAfterLayout;
    final Recycler mRecycler;
    RecyclerListener mRecyclerListener;
    final List<RecyclerListener> mRecyclerListeners;
    final int[] mReusableIntPair;
    private EdgeEffect mRightGlow;
    float mScaledHorizontalScrollFactor;
    float mScaledVerticalScrollFactor;
    private OnScrollListener mScrollListener;
    private List<OnScrollListener> mScrollListeners;
    private final int[] mScrollOffset;
    private int mScrollPointerId;
    private int mScrollState;
    private NestedScrollingChildHelper mScrollingChildHelper;
    final State mState;
    final Rect mTempRect;
    private final Rect mTempRect2;
    final RectF mTempRectF;
    private EdgeEffect mTopGlow;
    private int mTouchSlop;
    final Runnable mUpdateChildViewsRunnable;
    private VelocityTracker mVelocityTracker;
    final ViewFlinger mViewFlinger;
    private final ViewInfoStore.ProcessCallback mViewInfoProcessCallback;
    final ViewInfoStore mViewInfoStore;
    private static final int[] NESTED_SCROLLING_ATTRS = {R.attr.nestedScrollingEnabled};
    private static final float DECELERATION_RATE = (float) (Math.log(0.78d) / Math.log(0.9d));
    static final boolean FORCE_INVALIDATE_DISPLAY_LIST = false;
    static final boolean ALLOW_SIZE_IN_UNSPECIFIED_SPEC = true;
    static final boolean ALLOW_THREAD_GAP_WORK = true;

    public static class AdapterDataObservable extends Observable {
        public final boolean a() {
            return !((Observable) this).mObservers.isEmpty();
        }

        public final void b() {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).a();
            }
        }

        public final void c(int i5, int i6) {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).d(i5, i6);
            }
        }

        public final void d(int i5, int i6, Object obj) {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).b(i5, i6, obj);
            }
        }

        public final void e(int i5, int i6) {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).c(i5, i6);
            }
        }

        public final void f(int i5, int i6) {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).e(i5, i6);
            }
        }

        public final void g() {
            for (int size = ((Observable) this).mObservers.size() - 1; size >= 0; size--) {
                ((AdapterDataObserver) ((Observable) this).mObservers.get(size)).f();
            }
        }
    }

    public interface ChildDrawingOrderCallback {
        int onGetChildDrawingOrder(int i5, int i6);
    }

    public static class EdgeEffectFactory {
        public EdgeEffect a(RecyclerView recyclerView) {
            return new EdgeEffect(recyclerView.getContext());
        }
    }

    public static abstract class ItemAnimator {
        public static final int FLAG_APPEARED_IN_PRE_LAYOUT = 4096;
        public static final int FLAG_CHANGED = 2;
        public static final int FLAG_INVALIDATED = 4;
        public static final int FLAG_MOVED = 2048;
        public static final int FLAG_REMOVED = 8;
        private ItemAnimatorListener mListener = null;
        private ArrayList<ItemAnimatorFinishedListener> mFinishedListeners = new ArrayList<>();
        private long mAddDuration = 120;
        private long mRemoveDuration = 120;
        private long mMoveDuration = 250;
        private long mChangeDuration = 250;

        public interface ItemAnimatorFinishedListener {
            void a();
        }

        public interface ItemAnimatorListener {
            void a(ViewHolder viewHolder);
        }

        public static class ItemHolderInfo {
            public int a;

            /* renamed from: b, reason: collision with root package name */
            public int f2304b;
        }

        public static int buildAdapterChangeFlagsForAnimations(ViewHolder viewHolder) {
            int i5 = viewHolder.mFlags;
            int i6 = i5 & 14;
            if (viewHolder.isInvalid()) {
                return 4;
            }
            if ((i5 & 4) == 0) {
                int oldPosition = viewHolder.getOldPosition();
                int absoluteAdapterPosition = viewHolder.getAbsoluteAdapterPosition();
                if (oldPosition != -1 && absoluteAdapterPosition != -1 && oldPosition != absoluteAdapterPosition) {
                    return i6 | FLAG_MOVED;
                }
            }
            return i6;
        }

        public abstract boolean animateAppearance(ViewHolder viewHolder, ItemHolderInfo itemHolderInfo, ItemHolderInfo itemHolderInfo2);

        public abstract boolean animateChange(ViewHolder viewHolder, ViewHolder viewHolder2, ItemHolderInfo itemHolderInfo, ItemHolderInfo itemHolderInfo2);

        public abstract boolean animateDisappearance(ViewHolder viewHolder, ItemHolderInfo itemHolderInfo, ItemHolderInfo itemHolderInfo2);

        public abstract boolean animatePersistence(ViewHolder viewHolder, ItemHolderInfo itemHolderInfo, ItemHolderInfo itemHolderInfo2);

        public boolean canReuseUpdatedViewHolder(ViewHolder viewHolder) {
            return true;
        }

        public final void dispatchAnimationFinished(@NonNull ViewHolder viewHolder) {
            onAnimationFinished(viewHolder);
            ItemAnimatorListener itemAnimatorListener = this.mListener;
            if (itemAnimatorListener != null) {
                itemAnimatorListener.a(viewHolder);
            }
        }

        public final void dispatchAnimationStarted(@NonNull ViewHolder viewHolder) {
            onAnimationStarted(viewHolder);
        }

        public final void dispatchAnimationsFinished() {
            int size = this.mFinishedListeners.size();
            for (int i5 = 0; i5 < size; i5++) {
                this.mFinishedListeners.get(i5).a();
            }
            this.mFinishedListeners.clear();
        }

        public abstract void endAnimation(ViewHolder viewHolder);

        public abstract void endAnimations();

        public long getAddDuration() {
            return this.mAddDuration;
        }

        public long getChangeDuration() {
            return this.mChangeDuration;
        }

        public long getMoveDuration() {
            return this.mMoveDuration;
        }

        public long getRemoveDuration() {
            return this.mRemoveDuration;
        }

        public abstract boolean isRunning();

        public final boolean isRunning(ItemAnimatorFinishedListener itemAnimatorFinishedListener) {
            boolean isRunning = isRunning();
            if (itemAnimatorFinishedListener != null) {
                if (!isRunning) {
                    itemAnimatorFinishedListener.a();
                    return isRunning;
                }
                this.mFinishedListeners.add(itemAnimatorFinishedListener);
            }
            return isRunning;
        }

        @NonNull
        public ItemHolderInfo obtainHolderInfo() {
            return new ItemHolderInfo();
        }

        public void onAnimationFinished(ViewHolder viewHolder) {
        }

        public void onAnimationStarted(@NonNull ViewHolder viewHolder) {
        }

        @NonNull
        public ItemHolderInfo recordPostLayoutInformation(@NonNull State state, @NonNull ViewHolder viewHolder) {
            ItemHolderInfo obtainHolderInfo = obtainHolderInfo();
            obtainHolderInfo.getClass();
            View view = viewHolder.itemView;
            obtainHolderInfo.a = view.getLeft();
            obtainHolderInfo.f2304b = view.getTop();
            view.getRight();
            view.getBottom();
            return obtainHolderInfo;
        }

        @NonNull
        public ItemHolderInfo recordPreLayoutInformation(@NonNull State state, @NonNull ViewHolder viewHolder, int i5, @NonNull List<Object> list) {
            ItemHolderInfo obtainHolderInfo = obtainHolderInfo();
            obtainHolderInfo.getClass();
            View view = viewHolder.itemView;
            obtainHolderInfo.a = view.getLeft();
            obtainHolderInfo.f2304b = view.getTop();
            view.getRight();
            view.getBottom();
            return obtainHolderInfo;
        }

        public abstract void runPendingAnimations();

        public void setAddDuration(long j) {
            this.mAddDuration = j;
        }

        public void setChangeDuration(long j) {
            this.mChangeDuration = j;
        }

        public void setListener(ItemAnimatorListener itemAnimatorListener) {
            this.mListener = itemAnimatorListener;
        }

        public void setMoveDuration(long j) {
            this.mMoveDuration = j;
        }

        public void setRemoveDuration(long j) {
            this.mRemoveDuration = j;
        }

        public boolean canReuseUpdatedViewHolder(ViewHolder viewHolder, List list) {
            return canReuseUpdatedViewHolder(viewHolder);
        }
    }

    public static abstract class ItemDecoration {
        @Deprecated
        public void getItemOffsets(@NonNull Rect rect, int i5, @NonNull RecyclerView recyclerView) {
            rect.set(0, 0, 0, 0);
        }

        @Deprecated
        public void onDraw(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView) {
        }

        @Deprecated
        public void onDrawOver(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView) {
        }

        public void getItemOffsets(@NonNull Rect rect, @NonNull View view, @NonNull RecyclerView recyclerView, @NonNull State state) {
            getItemOffsets(rect, ((LayoutParams) view.getLayoutParams()).f2308d.getLayoutPosition(), recyclerView);
        }

        public void onDraw(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView, @NonNull State state) {
            onDraw(canvas, recyclerView);
        }

        public void onDrawOver(@NonNull Canvas canvas, @NonNull RecyclerView recyclerView, @NonNull State state) {
            onDrawOver(canvas, recyclerView);
        }
    }

    public static abstract class LayoutManager {
        boolean mAutoMeasure;
        ChildHelper mChildHelper;
        private int mHeight;
        private int mHeightMode;
        ViewBoundsCheck mHorizontalBoundCheck;
        private final ViewBoundsCheck.Callback mHorizontalBoundCheckCallback;
        boolean mIsAttachedToWindow;
        private boolean mItemPrefetchEnabled;
        private boolean mMeasurementCacheEnabled;
        int mPrefetchMaxCountObserved;
        boolean mPrefetchMaxObservedInInitialPrefetch;
        RecyclerView mRecyclerView;
        boolean mRequestedSimpleAnimations;
        SmoothScroller mSmoothScroller;
        ViewBoundsCheck mVerticalBoundCheck;
        private final ViewBoundsCheck.Callback mVerticalBoundCheckCallback;
        private int mWidth;
        private int mWidthMode;

        public interface LayoutPrefetchRegistry {
            void a(int i5, int i6);
        }

        public static class Properties {
            public int a;

            /* renamed from: b, reason: collision with root package name */
            public int f2305b;

            /* renamed from: c, reason: collision with root package name */
            public boolean f2306c;

            /* renamed from: d, reason: collision with root package name */
            public boolean f2307d;
        }

        public LayoutManager() {
            d1 d1Var = new d1(this);
            this.mHorizontalBoundCheckCallback = d1Var;
            e1 e1Var = new e1(this);
            this.mVerticalBoundCheckCallback = e1Var;
            this.mHorizontalBoundCheck = new ViewBoundsCheck(d1Var);
            this.mVerticalBoundCheck = new ViewBoundsCheck(e1Var);
            this.mRequestedSimpleAnimations = false;
            this.mIsAttachedToWindow = false;
            this.mAutoMeasure = false;
            this.mMeasurementCacheEnabled = true;
            this.mItemPrefetchEnabled = true;
        }

        public static boolean b(int i5, int i6, int i10) {
            int mode = View.MeasureSpec.getMode(i6);
            int size = View.MeasureSpec.getSize(i6);
            if (i10 > 0 && i5 != i10) {
                return false;
            }
            if (mode == Integer.MIN_VALUE) {
                return size >= i5;
            }
            if (mode != 0) {
                return mode == 1073741824 && size == i5;
            }
            return true;
        }

        public static int chooseSize(int i5, int i6, int i10) {
            int mode = View.MeasureSpec.getMode(i5);
            int size = View.MeasureSpec.getSize(i5);
            return mode != Integer.MIN_VALUE ? mode != 1073741824 ? Math.max(i6, i10) : size : Math.min(size, Math.max(i6, i10));
        }

        /* JADX WARN: Code restructure failed: missing block: B:3:0x000a, code lost:
        
            if (r3 >= 0) goto L5;
         */
        @Deprecated
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public static int getChildMeasureSpec(int i5, int i6, int i10, boolean z5) {
            int i11 = i5 - i6;
            int i12 = 0;
            int max = Math.max(0, i11);
            if (!z5) {
                if (i10 < 0) {
                    if (i10 == -1) {
                        i10 = max;
                    } else {
                        if (i10 == -2) {
                            i12 = Integer.MIN_VALUE;
                            i10 = max;
                        }
                        i10 = 0;
                    }
                }
                i12 = 1073741824;
            }
            return View.MeasureSpec.makeMeasureSpec(i10, i12);
        }

        public static Properties getProperties(@NonNull Context context, AttributeSet attributeSet, int i5, int i6) {
            Properties properties = new Properties();
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, z2.a.a, i5, i6);
            properties.a = obtainStyledAttributes.getInt(0, 1);
            properties.f2305b = obtainStyledAttributes.getInt(10, 1);
            properties.f2306c = obtainStyledAttributes.getBoolean(9, false);
            properties.f2307d = obtainStyledAttributes.getBoolean(11, false);
            obtainStyledAttributes.recycle();
            return properties;
        }

        public final void a(View view, int i5, boolean z5) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            if (z5 || childViewHolderInt.isRemoved()) {
                SimpleArrayMap simpleArrayMap = this.mRecyclerView.mViewInfoStore.a;
                u1 u1Var = (u1) simpleArrayMap.get(childViewHolderInt);
                if (u1Var == null) {
                    u1Var = u1.a();
                    simpleArrayMap.put(childViewHolderInt, u1Var);
                }
                u1Var.a |= 1;
            } else {
                this.mRecyclerView.mViewInfoStore.c(childViewHolderInt);
            }
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            if (childViewHolderInt.wasReturnedFromScrap() || childViewHolderInt.isScrap()) {
                if (childViewHolderInt.isScrap()) {
                    childViewHolderInt.unScrap();
                } else {
                    childViewHolderInt.clearReturnedFromScrapFlag();
                }
                this.mChildHelper.b(view, i5, view.getLayoutParams(), false);
            } else if (view.getParent() == this.mRecyclerView) {
                int j = this.mChildHelper.j(view);
                if (i5 == -1) {
                    i5 = this.mChildHelper.e();
                }
                if (j == -1) {
                    StringBuilder sb2 = new StringBuilder("Added View has RecyclerView as parent but view is not a real child. Unfiltered index:");
                    sb2.append(this.mRecyclerView.indexOfChild(view));
                    throw new IllegalStateException(a3.e.h(this.mRecyclerView, sb2));
                }
                if (j != i5) {
                    this.mRecyclerView.mLayout.moveView(j, i5);
                }
            } else {
                this.mChildHelper.a(view, i5, false);
                layoutParams.f2310i = true;
                SmoothScroller smoothScroller = this.mSmoothScroller;
                if (smoothScroller != null && smoothScroller.isRunning()) {
                    this.mSmoothScroller.onChildAttachedToWindow(view);
                }
            }
            if (layoutParams.f2311v) {
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d(RecyclerView.TAG, "consuming pending invalidate on child " + layoutParams.f2308d);
                }
                childViewHolderInt.itemView.invalidate();
                layoutParams.f2311v = false;
            }
        }

        @SuppressLint({"UnknownNullness"})
        public void addDisappearingView(View view) {
            addDisappearingView(view, -1);
        }

        @SuppressLint({"UnknownNullness"})
        public void addView(View view) {
            addView(view, -1);
        }

        public void assertInLayoutOrScroll(String str) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                recyclerView.assertInLayoutOrScroll(str);
            }
        }

        @SuppressLint({"UnknownNullness"})
        public void assertNotInLayoutOrScroll(String str) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                recyclerView.assertNotInLayoutOrScroll(str);
            }
        }

        public void attachView(@NonNull View view, int i5, LayoutParams layoutParams) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            if (childViewHolderInt.isRemoved()) {
                SimpleArrayMap simpleArrayMap = this.mRecyclerView.mViewInfoStore.a;
                u1 u1Var = (u1) simpleArrayMap.get(childViewHolderInt);
                if (u1Var == null) {
                    u1Var = u1.a();
                    simpleArrayMap.put(childViewHolderInt, u1Var);
                }
                u1Var.a |= 1;
            } else {
                this.mRecyclerView.mViewInfoStore.c(childViewHolderInt);
            }
            this.mChildHelper.b(view, i5, layoutParams, childViewHolderInt.isRemoved());
        }

        public final void c(Recycler recycler, int i5, View view) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            if (childViewHolderInt.shouldIgnore()) {
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d(RecyclerView.TAG, "ignoring view " + childViewHolderInt);
                    return;
                }
                return;
            }
            if (childViewHolderInt.isInvalid() && !childViewHolderInt.isRemoved() && !this.mRecyclerView.mAdapter.hasStableIds()) {
                removeViewAt(i5);
                recycler.k(childViewHolderInt);
            } else {
                detachViewAt(i5);
                recycler.l(view);
                this.mRecyclerView.mViewInfoStore.c(childViewHolderInt);
            }
        }

        public void calculateItemDecorationsForChild(@NonNull View view, @NonNull Rect rect) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null) {
                rect.set(0, 0, 0, 0);
            } else {
                rect.set(recyclerView.getItemDecorInsetsForChild(view));
            }
        }

        public boolean canScrollHorizontally() {
            return false;
        }

        public boolean canScrollVertically() {
            return false;
        }

        public boolean checkLayoutParams(LayoutParams layoutParams) {
            return layoutParams != null;
        }

        @SuppressLint({"UnknownNullness"})
        public void collectAdjacentPrefetchPositions(int i5, int i6, State state, LayoutPrefetchRegistry layoutPrefetchRegistry) {
        }

        @SuppressLint({"UnknownNullness"})
        public void collectInitialPrefetchPositions(int i5, LayoutPrefetchRegistry layoutPrefetchRegistry) {
        }

        public int computeHorizontalScrollExtent(@NonNull State state) {
            return 0;
        }

        public int computeHorizontalScrollOffset(@NonNull State state) {
            return 0;
        }

        public int computeHorizontalScrollRange(@NonNull State state) {
            return 0;
        }

        public int computeVerticalScrollExtent(@NonNull State state) {
            return 0;
        }

        public int computeVerticalScrollOffset(@NonNull State state) {
            return 0;
        }

        public int computeVerticalScrollRange(@NonNull State state) {
            return 0;
        }

        public void detachAndScrapAttachedViews(@NonNull Recycler recycler) {
            for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
                c(recycler, childCount, getChildAt(childCount));
            }
        }

        public void detachAndScrapView(@NonNull View view, @NonNull Recycler recycler) {
            c(recycler, this.mChildHelper.j(view), view);
        }

        public void detachAndScrapViewAt(int i5, @NonNull Recycler recycler) {
            c(recycler, i5, getChildAt(i5));
        }

        public void detachView(@NonNull View view) {
            int j = this.mChildHelper.j(view);
            if (j >= 0) {
                this.mChildHelper.c(j);
            }
        }

        public void detachViewAt(int i5) {
            getChildAt(i5);
            this.mChildHelper.c(i5);
        }

        public void dispatchAttachedToWindow(RecyclerView recyclerView) {
            this.mIsAttachedToWindow = true;
            onAttachedToWindow(recyclerView);
        }

        public void dispatchDetachedFromWindow(RecyclerView recyclerView, Recycler recycler) {
            this.mIsAttachedToWindow = false;
            onDetachedFromWindow(recyclerView, recycler);
        }

        @SuppressLint({"UnknownNullness"})
        public void endAnimation(View view) {
            ItemAnimator itemAnimator = this.mRecyclerView.mItemAnimator;
            if (itemAnimator != null) {
                itemAnimator.endAnimation(RecyclerView.getChildViewHolderInt(view));
            }
        }

        public View findContainingItemView(@NonNull View view) {
            View findContainingItemView;
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null || (findContainingItemView = recyclerView.findContainingItemView(view)) == null || this.mChildHelper.f2264c.contains(findContainingItemView)) {
                return null;
            }
            return findContainingItemView;
        }

        public View findViewByPosition(int i5) {
            int childCount = getChildCount();
            for (int i6 = 0; i6 < childCount; i6++) {
                View childAt = getChildAt(i6);
                ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(childAt);
                if (childViewHolderInt != null && childViewHolderInt.getLayoutPosition() == i5 && !childViewHolderInt.shouldIgnore() && (this.mRecyclerView.mState.f2332g || !childViewHolderInt.isRemoved())) {
                    return childAt;
                }
            }
            return null;
        }

        public abstract LayoutParams generateDefaultLayoutParams();

        @SuppressLint({"UnknownNullness"})
        public LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
            return layoutParams instanceof LayoutParams ? new LayoutParams((LayoutParams) layoutParams) : layoutParams instanceof ViewGroup.MarginLayoutParams ? new LayoutParams((ViewGroup.MarginLayoutParams) layoutParams) : new LayoutParams(layoutParams);
        }

        public int getBaseline() {
            return -1;
        }

        public int getBottomDecorationHeight(@NonNull View view) {
            return ((LayoutParams) view.getLayoutParams()).f2309e.bottom;
        }

        public View getChildAt(int i5) {
            ChildHelper childHelper = this.mChildHelper;
            if (childHelper != null) {
                return childHelper.d(i5);
            }
            return null;
        }

        public int getChildCount() {
            ChildHelper childHelper = this.mChildHelper;
            if (childHelper != null) {
                return childHelper.e();
            }
            return 0;
        }

        public boolean getClipToPadding() {
            RecyclerView recyclerView = this.mRecyclerView;
            return recyclerView != null && recyclerView.mClipToPadding;
        }

        public int getColumnCountForAccessibility(@NonNull Recycler recycler, @NonNull State state) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null || recyclerView.mAdapter == null || !canScrollHorizontally()) {
                return 1;
            }
            return this.mRecyclerView.mAdapter.getItemCount();
        }

        public int getDecoratedBottom(@NonNull View view) {
            return getBottomDecorationHeight(view) + view.getBottom();
        }

        public void getDecoratedBoundsWithMargins(@NonNull View view, @NonNull Rect rect) {
            RecyclerView.getDecoratedBoundsWithMarginsInt(view, rect);
        }

        public int getDecoratedLeft(@NonNull View view) {
            return view.getLeft() - getLeftDecorationWidth(view);
        }

        public int getDecoratedMeasuredHeight(@NonNull View view) {
            Rect rect = ((LayoutParams) view.getLayoutParams()).f2309e;
            return view.getMeasuredHeight() + rect.top + rect.bottom;
        }

        public int getDecoratedMeasuredWidth(@NonNull View view) {
            Rect rect = ((LayoutParams) view.getLayoutParams()).f2309e;
            return view.getMeasuredWidth() + rect.left + rect.right;
        }

        public int getDecoratedRight(@NonNull View view) {
            return getRightDecorationWidth(view) + view.getRight();
        }

        public int getDecoratedTop(@NonNull View view) {
            return view.getTop() - getTopDecorationHeight(view);
        }

        public View getFocusedChild() {
            View focusedChild;
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null || (focusedChild = recyclerView.getFocusedChild()) == null || this.mChildHelper.f2264c.contains(focusedChild)) {
                return null;
            }
            return focusedChild;
        }

        public int getHeight() {
            return this.mHeight;
        }

        public int getHeightMode() {
            return this.mHeightMode;
        }

        public int getItemCount() {
            RecyclerView recyclerView = this.mRecyclerView;
            Adapter adapter = recyclerView != null ? recyclerView.getAdapter() : null;
            if (adapter != null) {
                return adapter.getItemCount();
            }
            return 0;
        }

        public int getItemViewType(@NonNull View view) {
            return RecyclerView.getChildViewHolderInt(view).getItemViewType();
        }

        public int getLayoutDirection() {
            return this.mRecyclerView.getLayoutDirection();
        }

        public int getLeftDecorationWidth(@NonNull View view) {
            return ((LayoutParams) view.getLayoutParams()).f2309e.left;
        }

        public int getMinimumHeight() {
            RecyclerView recyclerView = this.mRecyclerView;
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return recyclerView.getMinimumHeight();
        }

        public int getMinimumWidth() {
            RecyclerView recyclerView = this.mRecyclerView;
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return recyclerView.getMinimumWidth();
        }

        public int getPaddingBottom() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                return recyclerView.getPaddingBottom();
            }
            return 0;
        }

        public int getPaddingEnd() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null) {
                return 0;
            }
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return recyclerView.getPaddingEnd();
        }

        public int getPaddingLeft() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                return recyclerView.getPaddingLeft();
            }
            return 0;
        }

        public int getPaddingRight() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                return recyclerView.getPaddingRight();
            }
            return 0;
        }

        public int getPaddingStart() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null) {
                return 0;
            }
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return recyclerView.getPaddingStart();
        }

        public int getPaddingTop() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                return recyclerView.getPaddingTop();
            }
            return 0;
        }

        public int getPosition(@NonNull View view) {
            return ((LayoutParams) view.getLayoutParams()).f2308d.getLayoutPosition();
        }

        public int getRightDecorationWidth(@NonNull View view) {
            return ((LayoutParams) view.getLayoutParams()).f2309e.right;
        }

        public int getRowCountForAccessibility(@NonNull Recycler recycler, @NonNull State state) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null || recyclerView.mAdapter == null || !canScrollVertically()) {
                return 1;
            }
            return this.mRecyclerView.mAdapter.getItemCount();
        }

        public int getSelectionModeForAccessibility(@NonNull Recycler recycler, @NonNull State state) {
            return 0;
        }

        public int getTopDecorationHeight(@NonNull View view) {
            return ((LayoutParams) view.getLayoutParams()).f2309e.top;
        }

        public void getTransformedBoundingBox(@NonNull View view, boolean z5, @NonNull Rect rect) {
            Matrix matrix;
            if (z5) {
                Rect rect2 = ((LayoutParams) view.getLayoutParams()).f2309e;
                rect.set(-rect2.left, -rect2.top, view.getWidth() + rect2.right, view.getHeight() + rect2.bottom);
            } else {
                rect.set(0, 0, view.getWidth(), view.getHeight());
            }
            if (this.mRecyclerView != null && (matrix = view.getMatrix()) != null && !matrix.isIdentity()) {
                RectF rectF = this.mRecyclerView.mTempRectF;
                rectF.set(rect);
                matrix.mapRect(rectF);
                rect.set((int) Math.floor(rectF.left), (int) Math.floor(rectF.top), (int) Math.ceil(rectF.right), (int) Math.ceil(rectF.bottom));
            }
            rect.offset(view.getLeft(), view.getTop());
        }

        public int getWidth() {
            return this.mWidth;
        }

        public int getWidthMode() {
            return this.mWidthMode;
        }

        public boolean hasFlexibleChildInBothOrientations() {
            int childCount = getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                ViewGroup.LayoutParams layoutParams = getChildAt(i5).getLayoutParams();
                if (layoutParams.width < 0 && layoutParams.height < 0) {
                    return true;
                }
            }
            return false;
        }

        public boolean hasFocus() {
            RecyclerView recyclerView = this.mRecyclerView;
            return recyclerView != null && recyclerView.hasFocus();
        }

        public void ignoreView(@NonNull View view) {
            ViewParent parent = view.getParent();
            RecyclerView recyclerView = this.mRecyclerView;
            if (parent != recyclerView || recyclerView.indexOfChild(view) == -1) {
                throw new IllegalArgumentException(a3.e.h(this.mRecyclerView, new StringBuilder("View should be fully attached to be ignored")));
            }
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            childViewHolderInt.addFlags(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            this.mRecyclerView.mViewInfoStore.d(childViewHolderInt);
        }

        public boolean isAttachedToWindow() {
            return this.mIsAttachedToWindow;
        }

        public boolean isAutoMeasureEnabled() {
            return this.mAutoMeasure;
        }

        public boolean isFocused() {
            RecyclerView recyclerView = this.mRecyclerView;
            return recyclerView != null && recyclerView.isFocused();
        }

        public final boolean isItemPrefetchEnabled() {
            return this.mItemPrefetchEnabled;
        }

        public boolean isLayoutHierarchical(@NonNull Recycler recycler, @NonNull State state) {
            return false;
        }

        public boolean isLayoutReversed() {
            return false;
        }

        public boolean isMeasurementCacheEnabled() {
            return this.mMeasurementCacheEnabled;
        }

        public boolean isSmoothScrolling() {
            SmoothScroller smoothScroller = this.mSmoothScroller;
            return smoothScroller != null && smoothScroller.isRunning();
        }

        public boolean isViewPartiallyVisible(@NonNull View view, boolean z5, boolean z6) {
            boolean z7 = this.mHorizontalBoundCheck.b(view) && this.mVerticalBoundCheck.b(view);
            return z5 ? z7 : !z7;
        }

        public void layoutDecorated(@NonNull View view, int i5, int i6, int i10, int i11) {
            Rect rect = ((LayoutParams) view.getLayoutParams()).f2309e;
            view.layout(i5 + rect.left, i6 + rect.top, i10 - rect.right, i11 - rect.bottom);
        }

        public void layoutDecoratedWithMargins(@NonNull View view, int i5, int i6, int i10, int i11) {
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            Rect rect = layoutParams.f2309e;
            view.layout(i5 + rect.left + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin, i6 + rect.top + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin, (i10 - rect.right) - ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, (i11 - rect.bottom) - ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin);
        }

        public void measureChild(@NonNull View view, int i5, int i6) {
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            Rect itemDecorInsetsForChild = this.mRecyclerView.getItemDecorInsetsForChild(view);
            int i10 = itemDecorInsetsForChild.left + itemDecorInsetsForChild.right + i5;
            int i11 = itemDecorInsetsForChild.top + itemDecorInsetsForChild.bottom + i6;
            int childMeasureSpec = getChildMeasureSpec(getWidth(), getWidthMode(), getPaddingRight() + getPaddingLeft() + i10, ((ViewGroup.MarginLayoutParams) layoutParams).width, canScrollHorizontally());
            int childMeasureSpec2 = getChildMeasureSpec(getHeight(), getHeightMode(), getPaddingBottom() + getPaddingTop() + i11, ((ViewGroup.MarginLayoutParams) layoutParams).height, canScrollVertically());
            if (shouldMeasureChild(view, childMeasureSpec, childMeasureSpec2, layoutParams)) {
                view.measure(childMeasureSpec, childMeasureSpec2);
            }
        }

        public void measureChildWithMargins(@NonNull View view, int i5, int i6) {
            LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
            Rect itemDecorInsetsForChild = this.mRecyclerView.getItemDecorInsetsForChild(view);
            int i10 = itemDecorInsetsForChild.left + itemDecorInsetsForChild.right + i5;
            int i11 = itemDecorInsetsForChild.top + itemDecorInsetsForChild.bottom + i6;
            int childMeasureSpec = getChildMeasureSpec(getWidth(), getWidthMode(), getPaddingRight() + getPaddingLeft() + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin + i10, ((ViewGroup.MarginLayoutParams) layoutParams).width, canScrollHorizontally());
            int childMeasureSpec2 = getChildMeasureSpec(getHeight(), getHeightMode(), getPaddingBottom() + getPaddingTop() + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin + i11, ((ViewGroup.MarginLayoutParams) layoutParams).height, canScrollVertically());
            if (shouldMeasureChild(view, childMeasureSpec, childMeasureSpec2, layoutParams)) {
                view.measure(childMeasureSpec, childMeasureSpec2);
            }
        }

        public void moveView(int i5, int i6) {
            View childAt = getChildAt(i5);
            if (childAt != null) {
                detachViewAt(i5);
                attachView(childAt, i6);
            } else {
                throw new IllegalArgumentException("Cannot move a child from non-existing index:" + i5 + this.mRecyclerView.toString());
            }
        }

        public void offsetChildrenHorizontal(int i5) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                recyclerView.offsetChildrenHorizontal(i5);
            }
        }

        public void offsetChildrenVertical(int i5) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                recyclerView.offsetChildrenVertical(i5);
            }
        }

        public void onAdapterChanged(Adapter adapter, Adapter adapter2) {
        }

        public boolean onAddFocusables(@NonNull RecyclerView recyclerView, @NonNull ArrayList<View> arrayList, int i5, int i6) {
            return false;
        }

        public void onAttachedToWindow(RecyclerView recyclerView) {
        }

        @Deprecated
        public void onDetachedFromWindow(RecyclerView recyclerView) {
        }

        public View onFocusSearchFailed(@NonNull View view, int i5, @NonNull Recycler recycler, @NonNull State state) {
            return null;
        }

        public void onInitializeAccessibilityEvent(@NonNull AccessibilityEvent accessibilityEvent) {
            RecyclerView recyclerView = this.mRecyclerView;
            onInitializeAccessibilityEvent(recyclerView.mRecycler, recyclerView.mState, accessibilityEvent);
        }

        public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            RecyclerView recyclerView = this.mRecyclerView;
            onInitializeAccessibilityNodeInfo(recyclerView.mRecycler, recyclerView.mState, accessibilityNodeInfoCompat);
        }

        public void onInitializeAccessibilityNodeInfoForItem(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            if (childViewHolderInt == null || childViewHolderInt.isRemoved()) {
                return;
            }
            ChildHelper childHelper = this.mChildHelper;
            if (childHelper.f2264c.contains(childViewHolderInt.itemView)) {
                return;
            }
            RecyclerView recyclerView = this.mRecyclerView;
            onInitializeAccessibilityNodeInfoForItem(recyclerView.mRecycler, recyclerView.mState, view, accessibilityNodeInfoCompat);
        }

        public View onInterceptFocusSearch(@NonNull View view, int i5) {
            return null;
        }

        public void onItemsAdded(@NonNull RecyclerView recyclerView, int i5, int i6) {
        }

        public void onItemsChanged(@NonNull RecyclerView recyclerView) {
        }

        public void onItemsMoved(@NonNull RecyclerView recyclerView, int i5, int i6, int i10) {
        }

        public void onItemsRemoved(@NonNull RecyclerView recyclerView, int i5, int i6) {
        }

        public void onItemsUpdated(@NonNull RecyclerView recyclerView, int i5, int i6) {
        }

        public void onLayoutChildren(Recycler recycler, State state) {
            Log.e(RecyclerView.TAG, "You must override onLayoutChildren(Recycler recycler, State state) ");
        }

        @SuppressLint({"UnknownNullness"})
        public void onLayoutCompleted(State state) {
        }

        public void onMeasure(@NonNull Recycler recycler, @NonNull State state, int i5, int i6) {
            this.mRecyclerView.defaultOnMeasure(i5, i6);
        }

        @Deprecated
        public boolean onRequestChildFocus(@NonNull RecyclerView recyclerView, @NonNull View view, View view2) {
            return isSmoothScrolling() || recyclerView.isComputingLayout();
        }

        @SuppressLint({"UnknownNullness"})
        public void onRestoreInstanceState(Parcelable parcelable) {
        }

        public Parcelable onSaveInstanceState() {
            return null;
        }

        public void onScrollStateChanged(int i5) {
        }

        public void onSmoothScrollerStopped(SmoothScroller smoothScroller) {
            if (this.mSmoothScroller == smoothScroller) {
                this.mSmoothScroller = null;
            }
        }

        public boolean performAccessibilityAction(int i5, Bundle bundle) {
            RecyclerView recyclerView = this.mRecyclerView;
            return performAccessibilityAction(recyclerView.mRecycler, recyclerView.mState, i5, bundle);
        }

        public boolean performAccessibilityActionForItem(@NonNull Recycler recycler, @NonNull State state, @NonNull View view, int i5, Bundle bundle) {
            return false;
        }

        public void postOnAnimation(Runnable runnable) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                recyclerView.postOnAnimation(runnable);
            }
        }

        public void removeAllViews() {
            for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
                this.mChildHelper.k(childCount);
            }
        }

        public void removeAndRecycleAllViews(@NonNull Recycler recycler) {
            for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
                if (!RecyclerView.getChildViewHolderInt(getChildAt(childCount)).shouldIgnore()) {
                    removeAndRecycleViewAt(childCount, recycler);
                }
            }
        }

        public void removeAndRecycleScrapInt(Recycler recycler) {
            ArrayList arrayList = recycler.a;
            int size = arrayList.size();
            for (int i5 = size - 1; i5 >= 0; i5--) {
                View view = ((ViewHolder) arrayList.get(i5)).itemView;
                ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
                if (!childViewHolderInt.shouldIgnore()) {
                    childViewHolderInt.setIsRecyclable(false);
                    if (childViewHolderInt.isTmpDetached()) {
                        this.mRecyclerView.removeDetachedView(view, false);
                    }
                    ItemAnimator itemAnimator = this.mRecyclerView.mItemAnimator;
                    if (itemAnimator != null) {
                        itemAnimator.endAnimation(childViewHolderInt);
                    }
                    childViewHolderInt.setIsRecyclable(true);
                    ViewHolder childViewHolderInt2 = RecyclerView.getChildViewHolderInt(view);
                    childViewHolderInt2.mScrapContainer = null;
                    childViewHolderInt2.mInChangeScrap = false;
                    childViewHolderInt2.clearReturnedFromScrapFlag();
                    recycler.k(childViewHolderInt2);
                }
            }
            arrayList.clear();
            ArrayList arrayList2 = recycler.f2312b;
            if (arrayList2 != null) {
                arrayList2.clear();
            }
            if (size > 0) {
                this.mRecyclerView.invalidate();
            }
        }

        public void removeAndRecycleView(@NonNull View view, @NonNull Recycler recycler) {
            removeView(view);
            recycler.j(view);
        }

        public void removeAndRecycleViewAt(int i5, @NonNull Recycler recycler) {
            View childAt = getChildAt(i5);
            removeViewAt(i5);
            recycler.j(childAt);
        }

        public boolean removeCallbacks(Runnable runnable) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                return recyclerView.removeCallbacks(runnable);
            }
            return false;
        }

        public void removeDetachedView(@NonNull View view) {
            this.mRecyclerView.removeDetachedView(view, false);
        }

        @SuppressLint({"UnknownNullness"})
        public void removeView(View view) {
            ChildHelper childHelper = this.mChildHelper;
            z0 z0Var = childHelper.a;
            int i5 = childHelper.f2265d;
            if (i5 == 1) {
                throw new IllegalStateException("Cannot call removeView(At) within removeView(At)");
            }
            if (i5 == 2) {
                throw new IllegalStateException("Cannot call removeView(At) within removeViewIfHidden");
            }
            try {
                childHelper.f2265d = 1;
                childHelper.f2266e = view;
                int indexOfChild = z0Var.a.indexOfChild(view);
                if (indexOfChild >= 0) {
                    if (childHelper.f2263b.K(indexOfChild)) {
                        childHelper.l(view);
                    }
                    z0Var.a(indexOfChild);
                }
                childHelper.f2265d = 0;
                childHelper.f2266e = null;
            } catch (Throwable th2) {
                childHelper.f2265d = 0;
                childHelper.f2266e = null;
                throw th2;
            }
        }

        public void removeViewAt(int i5) {
            if (getChildAt(i5) != null) {
                this.mChildHelper.k(i5);
            }
        }

        /* JADX WARN: Code restructure failed: missing block: B:18:0x00b3, code lost:
        
            if ((r5.bottom - r10) > r2) goto L28;
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public boolean requestChildRectangleOnScreen(@NonNull RecyclerView recyclerView, @NonNull View view, @NonNull Rect rect, boolean z5, boolean z6) {
            int paddingLeft = getPaddingLeft();
            int paddingTop = getPaddingTop();
            int width = getWidth() - getPaddingRight();
            int height = getHeight() - getPaddingBottom();
            int left = (view.getLeft() + rect.left) - view.getScrollX();
            int top = (view.getTop() + rect.top) - view.getScrollY();
            int width2 = rect.width() + left;
            int height2 = rect.height() + top;
            int i5 = left - paddingLeft;
            int min = Math.min(0, i5);
            int i6 = top - paddingTop;
            int min2 = Math.min(0, i6);
            int i10 = width2 - width;
            int max = Math.max(0, i10);
            int max2 = Math.max(0, height2 - height);
            if (getLayoutDirection() != 1) {
                if (min == 0) {
                    min = Math.min(i5, max);
                }
                max = min;
            } else if (max == 0) {
                max = Math.max(min, i10);
            }
            if (min2 == 0) {
                min2 = Math.min(i6, max2);
            }
            int[] iArr = {max, min2};
            int i11 = iArr[0];
            int i12 = iArr[1];
            if (z6) {
                View focusedChild = recyclerView.getFocusedChild();
                if (focusedChild != null) {
                    int paddingLeft2 = getPaddingLeft();
                    int paddingTop2 = getPaddingTop();
                    int width3 = getWidth() - getPaddingRight();
                    int height3 = getHeight() - getPaddingBottom();
                    Rect rect2 = this.mRecyclerView.mTempRect;
                    getDecoratedBoundsWithMargins(focusedChild, rect2);
                    if (rect2.left - i11 < width3) {
                        if (rect2.right - i11 > paddingLeft2) {
                            if (rect2.top - i12 < height3) {
                            }
                        }
                    }
                }
                return false;
            }
            if (i11 != 0 || i12 != 0) {
                if (z5) {
                    recyclerView.scrollBy(i11, i12);
                } else {
                    recyclerView.smoothScrollBy(i11, i12);
                }
                return true;
            }
            return false;
        }

        public void requestLayout() {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView != null) {
                recyclerView.requestLayout();
            }
        }

        public void requestSimpleAnimationsInNextLayout() {
            this.mRequestedSimpleAnimations = true;
        }

        @SuppressLint({"UnknownNullness"})
        public int scrollHorizontallyBy(int i5, Recycler recycler, State state) {
            return 0;
        }

        public void scrollToPosition(int i5) {
            if (RecyclerView.sVerboseLoggingEnabled) {
                Log.e(RecyclerView.TAG, "You MUST implement scrollToPosition. It will soon become abstract");
            }
        }

        @SuppressLint({"UnknownNullness"})
        public int scrollVerticallyBy(int i5, Recycler recycler, State state) {
            return 0;
        }

        @Deprecated
        public void setAutoMeasureEnabled(boolean z5) {
            this.mAutoMeasure = z5;
        }

        public void setExactMeasureSpecsFrom(RecyclerView recyclerView) {
            setMeasureSpecs(View.MeasureSpec.makeMeasureSpec(recyclerView.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(recyclerView.getHeight(), 1073741824));
        }

        public final void setItemPrefetchEnabled(boolean z5) {
            if (z5 != this.mItemPrefetchEnabled) {
                this.mItemPrefetchEnabled = z5;
                this.mPrefetchMaxCountObserved = 0;
                RecyclerView recyclerView = this.mRecyclerView;
                if (recyclerView != null) {
                    recyclerView.mRecycler.o();
                }
            }
        }

        public void setMeasureSpecs(int i5, int i6) {
            this.mWidth = View.MeasureSpec.getSize(i5);
            int mode = View.MeasureSpec.getMode(i5);
            this.mWidthMode = mode;
            if (mode == 0 && !RecyclerView.ALLOW_SIZE_IN_UNSPECIFIED_SPEC) {
                this.mWidth = 0;
            }
            this.mHeight = View.MeasureSpec.getSize(i6);
            int mode2 = View.MeasureSpec.getMode(i6);
            this.mHeightMode = mode2;
            if (mode2 != 0 || RecyclerView.ALLOW_SIZE_IN_UNSPECIFIED_SPEC) {
                return;
            }
            this.mHeight = 0;
        }

        public void setMeasuredDimension(Rect rect, int i5, int i6) {
            setMeasuredDimension(chooseSize(i5, getPaddingRight() + getPaddingLeft() + rect.width(), getMinimumWidth()), chooseSize(i6, getPaddingBottom() + getPaddingTop() + rect.height(), getMinimumHeight()));
        }

        public void setMeasuredDimensionFromChildren(int i5, int i6) {
            int childCount = getChildCount();
            if (childCount == 0) {
                this.mRecyclerView.defaultOnMeasure(i5, i6);
                return;
            }
            int i10 = Integer.MIN_VALUE;
            int i11 = Integer.MAX_VALUE;
            int i12 = Integer.MIN_VALUE;
            int i13 = Integer.MAX_VALUE;
            for (int i14 = 0; i14 < childCount; i14++) {
                View childAt = getChildAt(i14);
                Rect rect = this.mRecyclerView.mTempRect;
                getDecoratedBoundsWithMargins(childAt, rect);
                int i15 = rect.left;
                if (i15 < i13) {
                    i13 = i15;
                }
                int i16 = rect.right;
                if (i16 > i10) {
                    i10 = i16;
                }
                int i17 = rect.top;
                if (i17 < i11) {
                    i11 = i17;
                }
                int i18 = rect.bottom;
                if (i18 > i12) {
                    i12 = i18;
                }
            }
            this.mRecyclerView.mTempRect.set(i13, i11, i10, i12);
            setMeasuredDimension(this.mRecyclerView.mTempRect, i5, i6);
        }

        public void setMeasurementCacheEnabled(boolean z5) {
            this.mMeasurementCacheEnabled = z5;
        }

        public void setRecyclerView(RecyclerView recyclerView) {
            if (recyclerView == null) {
                this.mRecyclerView = null;
                this.mChildHelper = null;
                this.mWidth = 0;
                this.mHeight = 0;
            } else {
                this.mRecyclerView = recyclerView;
                this.mChildHelper = recyclerView.mChildHelper;
                this.mWidth = recyclerView.getWidth();
                this.mHeight = recyclerView.getHeight();
            }
            this.mWidthMode = 1073741824;
            this.mHeightMode = 1073741824;
        }

        public boolean shouldMeasureChild(View view, int i5, int i6, LayoutParams layoutParams) {
            return (!view.isLayoutRequested() && this.mMeasurementCacheEnabled && b(view.getWidth(), i5, ((ViewGroup.MarginLayoutParams) layoutParams).width) && b(view.getHeight(), i6, ((ViewGroup.MarginLayoutParams) layoutParams).height)) ? false : true;
        }

        public boolean shouldMeasureTwice() {
            return false;
        }

        public boolean shouldReMeasureChild(View view, int i5, int i6, LayoutParams layoutParams) {
            return (this.mMeasurementCacheEnabled && b(view.getMeasuredWidth(), i5, ((ViewGroup.MarginLayoutParams) layoutParams).width) && b(view.getMeasuredHeight(), i6, ((ViewGroup.MarginLayoutParams) layoutParams).height)) ? false : true;
        }

        @SuppressLint({"UnknownNullness"})
        public void smoothScrollToPosition(RecyclerView recyclerView, State state, int i5) {
            Log.e(RecyclerView.TAG, "You must override smoothScrollToPosition to support smooth scrolling");
        }

        @SuppressLint({"UnknownNullness"})
        public void startSmoothScroll(SmoothScroller smoothScroller) {
            SmoothScroller smoothScroller2 = this.mSmoothScroller;
            if (smoothScroller2 != null && smoothScroller != smoothScroller2 && smoothScroller2.isRunning()) {
                this.mSmoothScroller.stop();
            }
            this.mSmoothScroller = smoothScroller;
            smoothScroller.start(this.mRecyclerView, this);
        }

        public void stopIgnoringView(@NonNull View view) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            childViewHolderInt.stopIgnoring();
            childViewHolderInt.resetInternal();
            childViewHolderInt.addFlags(4);
        }

        public void stopSmoothScroller() {
            SmoothScroller smoothScroller = this.mSmoothScroller;
            if (smoothScroller != null) {
                smoothScroller.stop();
            }
        }

        public boolean supportsPredictiveItemAnimations() {
            return false;
        }

        @SuppressLint({"UnknownNullness"})
        public void addDisappearingView(View view, int i5) {
            a(view, i5, true);
        }

        @SuppressLint({"UnknownNullness"})
        public void addView(View view, int i5) {
            a(view, i5, false);
        }

        @SuppressLint({"UnknownNullness"})
        public void onDetachedFromWindow(RecyclerView recyclerView, Recycler recycler) {
            onDetachedFromWindow(recyclerView);
        }

        public void onInitializeAccessibilityEvent(@NonNull Recycler recycler, @NonNull State state, @NonNull AccessibilityEvent accessibilityEvent) {
            RecyclerView recyclerView = this.mRecyclerView;
            if (recyclerView == null || accessibilityEvent == null) {
                return;
            }
            boolean z5 = true;
            if (!recyclerView.canScrollVertically(1) && !this.mRecyclerView.canScrollVertically(-1) && !this.mRecyclerView.canScrollHorizontally(-1) && !this.mRecyclerView.canScrollHorizontally(1)) {
                z5 = false;
            }
            accessibilityEvent.setScrollable(z5);
            Adapter adapter = this.mRecyclerView.mAdapter;
            if (adapter != null) {
                accessibilityEvent.setItemCount(adapter.getItemCount());
            }
        }

        public void onInitializeAccessibilityNodeInfo(@NonNull Recycler recycler, @NonNull State state, @NonNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            if (this.mRecyclerView.canScrollVertically(-1) || this.mRecyclerView.canScrollHorizontally(-1)) {
                accessibilityNodeInfoCompat.a(8192);
                accessibilityNodeInfoCompat.y(true);
                accessibilityNodeInfoCompat.l(67108864, true);
            }
            if (this.mRecyclerView.canScrollVertically(1) || this.mRecyclerView.canScrollHorizontally(1)) {
                accessibilityNodeInfoCompat.a(ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                accessibilityNodeInfoCompat.y(true);
                accessibilityNodeInfoCompat.l(67108864, true);
            }
            accessibilityNodeInfoCompat.a.setCollectionInfo(AccessibilityNodeInfo.CollectionInfo.obtain(getRowCountForAccessibility(recycler, state), getColumnCountForAccessibility(recycler, state), isLayoutHierarchical(recycler, state), getSelectionModeForAccessibility(recycler, state)));
        }

        public void onItemsUpdated(@NonNull RecyclerView recyclerView, int i5, int i6, Object obj) {
            onItemsUpdated(recyclerView, i5, i6);
        }

        public boolean onRequestChildFocus(@NonNull RecyclerView recyclerView, @NonNull State state, @NonNull View view, View view2) {
            return onRequestChildFocus(recyclerView, view, view2);
        }

        public boolean performAccessibilityAction(@NonNull Recycler recycler, @NonNull State state, int i5, Bundle bundle) {
            int paddingTop;
            int paddingLeft;
            float f2;
            if (this.mRecyclerView == null) {
                return false;
            }
            int height = getHeight();
            int width = getWidth();
            Rect rect = new Rect();
            if (this.mRecyclerView.getMatrix().isIdentity() && this.mRecyclerView.getGlobalVisibleRect(rect)) {
                height = rect.height();
                width = rect.width();
            }
            if (i5 == 4096) {
                paddingTop = this.mRecyclerView.canScrollVertically(1) ? (height - getPaddingTop()) - getPaddingBottom() : 0;
                if (this.mRecyclerView.canScrollHorizontally(1)) {
                    paddingLeft = (width - getPaddingLeft()) - getPaddingRight();
                }
                paddingLeft = 0;
            } else if (i5 != 8192) {
                paddingTop = 0;
                paddingLeft = 0;
            } else {
                paddingTop = this.mRecyclerView.canScrollVertically(-1) ? -((height - getPaddingTop()) - getPaddingBottom()) : 0;
                if (this.mRecyclerView.canScrollHorizontally(-1)) {
                    paddingLeft = -((width - getPaddingLeft()) - getPaddingRight());
                }
                paddingLeft = 0;
            }
            if (paddingTop == 0 && paddingLeft == 0) {
                return false;
            }
            if (bundle != null) {
                f2 = bundle.getFloat("androidx.core.view.accessibility.action.ARGUMENT_SCROLL_AMOUNT_FLOAT", 1.0f);
                if (f2 < RecyclerView.DECELERATION_RATE) {
                    if (!RecyclerView.sDebugAssertionsEnabled) {
                        return false;
                    }
                    throw new IllegalArgumentException("attempting to use ACTION_ARGUMENT_SCROLL_AMOUNT_FLOAT with a negative value (" + f2 + ")");
                }
            } else {
                f2 = 1.0f;
            }
            if (Float.compare(f2, Float.POSITIVE_INFINITY) != 0) {
                if (Float.compare(1.0f, f2) != 0 && Float.compare(RecyclerView.DECELERATION_RATE, f2) != 0) {
                    paddingLeft = (int) (paddingLeft * f2);
                    paddingTop = (int) (paddingTop * f2);
                }
                this.mRecyclerView.smoothScrollBy(paddingLeft, paddingTop, null, Integer.MIN_VALUE, true);
                return true;
            }
            RecyclerView recyclerView = this.mRecyclerView;
            Adapter adapter = recyclerView.mAdapter;
            if (adapter == null) {
                return false;
            }
            if (i5 == 4096) {
                recyclerView.smoothScrollToPosition(adapter.getItemCount() - 1);
            } else if (i5 == 8192) {
                recyclerView.smoothScrollToPosition(0);
            }
            return true;
        }

        public boolean performAccessibilityActionForItem(@NonNull View view, int i5, Bundle bundle) {
            RecyclerView recyclerView = this.mRecyclerView;
            return performAccessibilityActionForItem(recyclerView.mRecycler, recyclerView.mState, view, i5, bundle);
        }

        /* JADX WARN: Code restructure failed: missing block: B:11:0x0018, code lost:
        
            if (r5 == 1073741824) goto L14;
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public static int getChildMeasureSpec(int i5, int i6, int i10, int i11, boolean z5) {
            int max = Math.max(0, i5 - i10);
            if (z5) {
                if (i11 < 0) {
                    if (i11 == -1) {
                        if (i6 != Integer.MIN_VALUE) {
                            if (i6 != 0) {
                            }
                        }
                        i11 = max;
                    }
                    i6 = 0;
                    i11 = 0;
                }
                i6 = 1073741824;
            } else {
                if (i11 < 0) {
                    if (i11 != -1) {
                        if (i11 == -2) {
                            if (i6 == Integer.MIN_VALUE || i6 == 1073741824) {
                                i11 = max;
                                i6 = Integer.MIN_VALUE;
                            } else {
                                i11 = max;
                                i6 = 0;
                            }
                        }
                        i6 = 0;
                        i11 = 0;
                    }
                    i11 = max;
                }
                i6 = 1073741824;
            }
            return View.MeasureSpec.makeMeasureSpec(i11, i6);
        }

        @SuppressLint({"UnknownNullness"})
        public LayoutParams generateLayoutParams(Context context, AttributeSet attributeSet) {
            return new LayoutParams(context, attributeSet);
        }

        public void onInitializeAccessibilityNodeInfoForItem(@NonNull Recycler recycler, @NonNull State state, @NonNull View view, @NonNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            accessibilityNodeInfoCompat.r(l1.d.a(canScrollVertically() ? getPosition(view) : 0, 1, canScrollHorizontally() ? getPosition(view) : 0, 1, false));
        }

        public void setMeasuredDimension(int i5, int i6) {
            this.mRecyclerView.setMeasuredDimension(i5, i6);
        }

        public void attachView(@NonNull View view, int i5) {
            attachView(view, i5, (LayoutParams) view.getLayoutParams());
        }

        public void attachView(@NonNull View view) {
            attachView(view, -1);
        }

        public boolean requestChildRectangleOnScreen(@NonNull RecyclerView recyclerView, @NonNull View view, @NonNull Rect rect, boolean z5) {
            return requestChildRectangleOnScreen(recyclerView, view, rect, z5, false);
        }
    }

    public interface OnChildAttachStateChangeListener {
        void onChildViewAttachedToWindow(View view);

        void onChildViewDetachedFromWindow(View view);
    }

    public static abstract class OnFlingListener {
        public abstract boolean onFling(int i5, int i6);
    }

    public interface OnItemTouchListener {
        boolean onInterceptTouchEvent(RecyclerView recyclerView, MotionEvent motionEvent);

        void onRequestDisallowInterceptTouchEvent(boolean z5);

        void onTouchEvent(RecyclerView recyclerView, MotionEvent motionEvent);
    }

    public static abstract class OnScrollListener {
        public void onScrollStateChanged(@NonNull RecyclerView recyclerView, int i5) {
        }

        public void onScrolled(RecyclerView recyclerView, int i5, int i6) {
        }
    }

    public static class RecycledViewPool {
        private static final int DEFAULT_MAX_SCRAP = 5;
        SparseArray<f1> mScrap = new SparseArray<>();
        int mAttachCountForClearing = 0;
        Set<Adapter> mAttachedAdaptersForPoolingContainer = Collections.newSetFromMap(new IdentityHashMap());

        public final f1 a(int i5) {
            f1 f1Var = this.mScrap.get(i5);
            if (f1Var != null) {
                return f1Var;
            }
            f1 f1Var2 = new f1();
            this.mScrap.put(i5, f1Var2);
            return f1Var2;
        }

        public void attach() {
            this.mAttachCountForClearing++;
        }

        public void attachForPoolingContainer(@NonNull Adapter adapter) {
            this.mAttachedAdaptersForPoolingContainer.add(adapter);
        }

        public void clear() {
            for (int i5 = 0; i5 < this.mScrap.size(); i5++) {
                f1 valueAt = this.mScrap.valueAt(i5);
                Iterator it = valueAt.a.iterator();
                while (it.hasNext()) {
                    ks.n.b(((ViewHolder) it.next()).itemView);
                }
                valueAt.a.clear();
            }
        }

        public void detach() {
            this.mAttachCountForClearing--;
        }

        public void detachForPoolingContainer(@NonNull Adapter adapter, boolean z5) {
            this.mAttachedAdaptersForPoolingContainer.remove(adapter);
            if (this.mAttachedAdaptersForPoolingContainer.size() != 0 || z5) {
                return;
            }
            for (int i5 = 0; i5 < this.mScrap.size(); i5++) {
                SparseArray<f1> sparseArray = this.mScrap;
                ArrayList arrayList = sparseArray.get(sparseArray.keyAt(i5)).a;
                for (int i6 = 0; i6 < arrayList.size(); i6++) {
                    ks.n.b(((ViewHolder) arrayList.get(i6)).itemView);
                }
            }
        }

        public void factorInBindTime(int i5, long j) {
            f1 a = a(i5);
            a.f2395d = runningAverage(a.f2395d, j);
        }

        public void factorInCreateTime(int i5, long j) {
            f1 a = a(i5);
            a.f2394c = runningAverage(a.f2394c, j);
        }

        public ViewHolder getRecycledView(int i5) {
            f1 f1Var = this.mScrap.get(i5);
            if (f1Var == null) {
                return null;
            }
            ArrayList arrayList = f1Var.a;
            if (arrayList.isEmpty()) {
                return null;
            }
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                if (!((ViewHolder) arrayList.get(size)).isAttachedToTransitionOverlay()) {
                    return (ViewHolder) arrayList.remove(size);
                }
            }
            return null;
        }

        public int getRecycledViewCount(int i5) {
            return a(i5).a.size();
        }

        public void onAdapterChanged(Adapter adapter, Adapter adapter2, boolean z5) {
            if (adapter != null) {
                detach();
            }
            if (!z5 && this.mAttachCountForClearing == 0) {
                clear();
            }
            if (adapter2 != null) {
                attach();
            }
        }

        public void putRecycledView(ViewHolder viewHolder) {
            int itemViewType = viewHolder.getItemViewType();
            ArrayList arrayList = a(itemViewType).a;
            if (this.mScrap.get(itemViewType).f2393b <= arrayList.size()) {
                ks.n.b(viewHolder.itemView);
            } else {
                if (RecyclerView.sDebugAssertionsEnabled && arrayList.contains(viewHolder)) {
                    throw new IllegalArgumentException("this scrap item already exists");
                }
                viewHolder.resetInternal();
                arrayList.add(viewHolder);
            }
        }

        public long runningAverage(long j, long j5) {
            if (j == 0) {
                return j5;
            }
            return (j5 / 4) + ((j / 4) * 3);
        }

        public void setMaxRecycledViews(int i5, int i6) {
            f1 a = a(i5);
            a.f2393b = i6;
            ArrayList arrayList = a.a;
            while (arrayList.size() > i6) {
                arrayList.remove(arrayList.size() - 1);
            }
        }

        public int size() {
            int i5 = 0;
            for (int i6 = 0; i6 < this.mScrap.size(); i6++) {
                ArrayList arrayList = this.mScrap.valueAt(i6).a;
                if (arrayList != null) {
                    i5 = arrayList.size() + i5;
                }
            }
            return i5;
        }

        public boolean willBindInTime(int i5, long j, long j5) {
            long j7 = a(i5).f2395d;
            return j7 == 0 || j + j7 < j5;
        }

        public boolean willCreateInTime(int i5, long j, long j5) {
            long j7 = a(i5).f2394c;
            return j7 == 0 || j + j7 < j5;
        }
    }

    public final class Recycler {
        public final ArrayList a;

        /* renamed from: b, reason: collision with root package name */
        public ArrayList f2312b;

        /* renamed from: c, reason: collision with root package name */
        public final ArrayList f2313c;

        /* renamed from: d, reason: collision with root package name */
        public final List f2314d;

        /* renamed from: e, reason: collision with root package name */
        public int f2315e;

        /* renamed from: f, reason: collision with root package name */
        public int f2316f;

        /* renamed from: g, reason: collision with root package name */
        public RecycledViewPool f2317g;

        /* renamed from: h, reason: collision with root package name */
        public ViewCacheExtension f2318h;

        public Recycler() {
            ArrayList arrayList = new ArrayList();
            this.a = arrayList;
            this.f2312b = null;
            this.f2313c = new ArrayList();
            this.f2314d = Collections.unmodifiableList(arrayList);
            this.f2315e = 2;
            this.f2316f = 2;
        }

        public static void f(ViewGroup viewGroup, boolean z5) {
            for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                View childAt = viewGroup.getChildAt(childCount);
                if (childAt instanceof ViewGroup) {
                    f((ViewGroup) childAt, true);
                }
            }
            if (z5) {
                if (viewGroup.getVisibility() == 4) {
                    viewGroup.setVisibility(0);
                    viewGroup.setVisibility(4);
                } else {
                    int visibility = viewGroup.getVisibility();
                    viewGroup.setVisibility(4);
                    viewGroup.setVisibility(visibility);
                }
            }
        }

        public final void a(ViewHolder viewHolder, boolean z5) {
            RecyclerView.clearNestedRecyclerViewIfNotNested(viewHolder);
            View view = viewHolder.itemView;
            RecyclerView recyclerView = RecyclerView.this;
            RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate = recyclerView.mAccessibilityDelegate;
            if (recyclerViewAccessibilityDelegate != null) {
                j1 j1Var = recyclerViewAccessibilityDelegate.f2345b;
                androidx.core.view.s0.p(view, j1Var != null ? (androidx.core.view.b) j1Var.f2408b.remove(view) : null);
            }
            if (z5) {
                RecyclerListener recyclerListener = recyclerView.mRecyclerListener;
                if (recyclerListener != null) {
                    recyclerListener.a();
                }
                int size = recyclerView.mRecyclerListeners.size();
                for (int i5 = 0; i5 < size; i5++) {
                    recyclerView.mRecyclerListeners.get(i5).a();
                }
                Adapter adapter = recyclerView.mAdapter;
                if (adapter != null) {
                    adapter.onViewRecycled(viewHolder);
                }
                if (recyclerView.mState != null) {
                    recyclerView.mViewInfoStore.d(viewHolder);
                }
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d(RecyclerView.TAG, "dispatchViewRecycled: " + viewHolder);
                }
            }
            viewHolder.mBindingAdapter = null;
            viewHolder.mOwnerRecyclerView = null;
            d().putRecycledView(viewHolder);
        }

        public final void b() {
            this.a.clear();
            h();
        }

        public final int c(int i5) {
            RecyclerView recyclerView = RecyclerView.this;
            if (i5 >= 0 && i5 < recyclerView.mState.b()) {
                return !recyclerView.mState.f2332g ? i5 : recyclerView.mAdapterHelper.f(i5, 0);
            }
            StringBuilder r5 = a3.e.r(i5, "invalid position ", ". State item count is ");
            r5.append(recyclerView.mState.b());
            r5.append(recyclerView.exceptionLabel());
            throw new IndexOutOfBoundsException(r5.toString());
        }

        public final RecycledViewPool d() {
            if (this.f2317g == null) {
                this.f2317g = new RecycledViewPool();
                g();
            }
            return this.f2317g;
        }

        public final View e(int i5) {
            return m(i5, Long.MAX_VALUE).itemView;
        }

        public final void g() {
            if (this.f2317g != null) {
                RecyclerView recyclerView = RecyclerView.this;
                if (recyclerView.mAdapter == null || !recyclerView.isAttachedToWindow()) {
                    return;
                }
                this.f2317g.attachForPoolingContainer(recyclerView.mAdapter);
            }
        }

        public final void h() {
            ArrayList arrayList = this.f2313c;
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                i(size);
            }
            arrayList.clear();
            if (RecyclerView.ALLOW_THREAD_GAP_WORK) {
                GapWorker.LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl = RecyclerView.this.mPrefetchRegistry;
                int[] iArr = layoutPrefetchRegistryImpl.f2279c;
                if (iArr != null) {
                    Arrays.fill(iArr, -1);
                }
                layoutPrefetchRegistryImpl.f2280d = 0;
            }
        }

        public final void i(int i5) {
            if (RecyclerView.sVerboseLoggingEnabled) {
                k0.d.q(i5, "Recycling cached view at index ", RecyclerView.TAG);
            }
            ArrayList arrayList = this.f2313c;
            ViewHolder viewHolder = (ViewHolder) arrayList.get(i5);
            if (RecyclerView.sVerboseLoggingEnabled) {
                Log.d(RecyclerView.TAG, "CachedViewHolder to be recycled: " + viewHolder);
            }
            a(viewHolder, true);
            arrayList.remove(i5);
        }

        public final void j(View view) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            boolean isTmpDetached = childViewHolderInt.isTmpDetached();
            RecyclerView recyclerView = RecyclerView.this;
            if (isTmpDetached) {
                recyclerView.removeDetachedView(view, false);
            }
            if (childViewHolderInt.isScrap()) {
                childViewHolderInt.unScrap();
            } else if (childViewHolderInt.wasReturnedFromScrap()) {
                childViewHolderInt.clearReturnedFromScrapFlag();
            }
            k(childViewHolderInt);
            if (recyclerView.mItemAnimator == null || childViewHolderInt.isRecyclable()) {
                return;
            }
            recyclerView.mItemAnimator.endAnimation(childViewHolderInt);
        }

        /* JADX WARN: Code restructure failed: missing block: B:68:0x00d5, code lost:
        
            r4 = r4 - 1;
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void k(ViewHolder viewHolder) {
            boolean z5;
            boolean isScrap = viewHolder.isScrap();
            boolean z6 = true;
            RecyclerView recyclerView = RecyclerView.this;
            if (isScrap || viewHolder.itemView.getParent() != null) {
                StringBuilder sb2 = new StringBuilder("Scrapped or attached views may not be recycled. isScrap:");
                sb2.append(viewHolder.isScrap());
                sb2.append(" isAttached:");
                sb2.append(viewHolder.itemView.getParent() != null);
                sb2.append(recyclerView.exceptionLabel());
                throw new IllegalArgumentException(sb2.toString());
            }
            if (viewHolder.isTmpDetached()) {
                StringBuilder sb3 = new StringBuilder("Tmp detached view should be removed from RecyclerView before it can be recycled: ");
                sb3.append(viewHolder);
                throw new IllegalArgumentException(a3.e.h(recyclerView, sb3));
            }
            if (viewHolder.shouldIgnore()) {
                throw new IllegalArgumentException(a3.e.h(recyclerView, new StringBuilder("Trying to recycle an ignored view holder. You should first call stopIgnoringView(view) before calling recycle.")));
            }
            boolean doesTransientStatePreventRecycling = viewHolder.doesTransientStatePreventRecycling();
            Adapter adapter = recyclerView.mAdapter;
            boolean z7 = adapter != null && doesTransientStatePreventRecycling && adapter.onFailedToRecycleView(viewHolder);
            boolean z8 = RecyclerView.sDebugAssertionsEnabled;
            ArrayList arrayList = this.f2313c;
            if (z8 && arrayList.contains(viewHolder)) {
                StringBuilder sb4 = new StringBuilder("cached view received recycle internal? ");
                sb4.append(viewHolder);
                throw new IllegalArgumentException(a3.e.h(recyclerView, sb4));
            }
            if (z7 || viewHolder.isRecyclable()) {
                if (this.f2316f <= 0 || viewHolder.hasAnyOfTheFlags(526)) {
                    z5 = false;
                } else {
                    int size = arrayList.size();
                    if (size >= this.f2316f && size > 0) {
                        i(0);
                        size--;
                    }
                    if (RecyclerView.ALLOW_THREAD_GAP_WORK && size > 0) {
                        GapWorker.LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl = recyclerView.mPrefetchRegistry;
                        int i5 = viewHolder.mPosition;
                        if (layoutPrefetchRegistryImpl.f2279c != null) {
                            int i6 = layoutPrefetchRegistryImpl.f2280d * 2;
                            for (int i10 = 0; i10 < i6; i10 += 2) {
                                if (layoutPrefetchRegistryImpl.f2279c[i10] == i5) {
                                    break;
                                }
                            }
                        }
                        int i11 = size - 1;
                        loop1: while (i11 >= 0) {
                            int i12 = ((ViewHolder) arrayList.get(i11)).mPosition;
                            GapWorker.LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl2 = recyclerView.mPrefetchRegistry;
                            if (layoutPrefetchRegistryImpl2.f2279c == null) {
                                break;
                            }
                            int i13 = layoutPrefetchRegistryImpl2.f2280d * 2;
                            for (int i14 = 0; i14 < i13; i14 += 2) {
                                if (layoutPrefetchRegistryImpl2.f2279c[i14] == i12) {
                                    break;
                                }
                            }
                            break loop1;
                        }
                        size = i11 + 1;
                    }
                    arrayList.add(size, viewHolder);
                    z5 = true;
                }
                if (z5) {
                    z6 = false;
                } else {
                    a(viewHolder, true);
                }
                r1 = z5;
            } else {
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d(RecyclerView.TAG, "trying to recycle a non-recycleable holder. Hopefully, it will re-visit here. We are still removing it from animation lists" + recyclerView.exceptionLabel());
                }
                z6 = false;
            }
            recyclerView.mViewInfoStore.d(viewHolder);
            if (r1 || z6 || !doesTransientStatePreventRecycling) {
                return;
            }
            ks.n.b(viewHolder.itemView);
            viewHolder.mBindingAdapter = null;
            viewHolder.mOwnerRecyclerView = null;
        }

        public final void l(View view) {
            ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
            boolean hasAnyOfTheFlags = childViewHolderInt.hasAnyOfTheFlags(12);
            RecyclerView recyclerView = RecyclerView.this;
            if (!hasAnyOfTheFlags && childViewHolderInt.isUpdated() && !recyclerView.canReuseUpdatedViewHolder(childViewHolderInt)) {
                if (this.f2312b == null) {
                    this.f2312b = new ArrayList();
                }
                childViewHolderInt.setScrapContainer(this, true);
                this.f2312b.add(childViewHolderInt);
                return;
            }
            if (childViewHolderInt.isInvalid() && !childViewHolderInt.isRemoved() && !recyclerView.mAdapter.hasStableIds()) {
                throw new IllegalArgumentException(a3.e.h(recyclerView, new StringBuilder("Called scrap view with an invalid view. Invalid views cannot be reused from scrap, they should rebound from recycler pool.")));
            }
            childViewHolderInt.setScrapContainer(this, false);
            this.a.add(childViewHolderInt);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Removed duplicated region for block: B:147:0x041c  */
        /* JADX WARN: Removed duplicated region for block: B:156:0x0511  */
        /* JADX WARN: Removed duplicated region for block: B:159:0x0536 A[ADDED_TO_REGION] */
        /* JADX WARN: Removed duplicated region for block: B:164:0x051d  */
        /* JADX WARN: Removed duplicated region for block: B:186:0x04a0  */
        /* JADX WARN: Removed duplicated region for block: B:189:0x04ba  */
        /* JADX WARN: Removed duplicated region for block: B:192:0x04d4  */
        /* JADX WARN: Removed duplicated region for block: B:206:0x0506  */
        /* JADX WARN: Removed duplicated region for block: B:209:0x04fe  */
        /* JADX WARN: Removed duplicated region for block: B:20:0x0085  */
        /* JADX WARN: Removed duplicated region for block: B:210:0x04b2  */
        /* JADX WARN: Removed duplicated region for block: B:233:0x03fe  */
        /* JADX WARN: Removed duplicated region for block: B:23:0x0091  */
        /* JADX WARN: Removed duplicated region for block: B:289:0x0253  */
        /* JADX WARN: Removed duplicated region for block: B:74:0x0257  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final ViewHolder m(int i5, long j) {
            ViewHolder viewHolder;
            int i6;
            int i10;
            long j5;
            long nanoTime;
            int i11;
            int i12;
            int i13;
            androidx.core.view.b e9;
            ViewGroup.LayoutParams layoutParams;
            LayoutParams layoutParams2;
            int i14;
            RecyclerView findNestedRecyclerView;
            ViewCacheExtension viewCacheExtension;
            View a;
            View view;
            int i15;
            int size;
            int f2;
            RecyclerView recyclerView = RecyclerView.this;
            if (i5 < 0 || i5 >= recyclerView.mState.b()) {
                StringBuilder q5 = a3.e.q(i5, "Invalid item position ", i5, "(", "). Item count:");
                q5.append(recyclerView.mState.b());
                q5.append(recyclerView.exceptionLabel());
                throw new IndexOutOfBoundsException(q5.toString());
            }
            if (recyclerView.mState.f2332g) {
                ArrayList arrayList = this.f2312b;
                if (arrayList != null && (size = arrayList.size()) != 0) {
                    int i16 = 0;
                    while (true) {
                        if (i16 < size) {
                            viewHolder = (ViewHolder) this.f2312b.get(i16);
                            if (!viewHolder.wasReturnedFromScrap() && viewHolder.getLayoutPosition() == i5) {
                                viewHolder.addFlags(32);
                                break;
                            }
                            i16++;
                        } else if (recyclerView.mAdapter.hasStableIds() && (f2 = recyclerView.mAdapterHelper.f(i5, 0)) > 0 && f2 < recyclerView.mAdapter.getItemCount()) {
                            long itemId = recyclerView.mAdapter.getItemId(f2);
                            for (int i17 = 0; i17 < size; i17++) {
                                ViewHolder viewHolder2 = (ViewHolder) this.f2312b.get(i17);
                                if (!viewHolder2.wasReturnedFromScrap() && viewHolder2.getItemId() == itemId) {
                                    viewHolder2.addFlags(32);
                                    viewHolder = viewHolder2;
                                    break;
                                }
                            }
                        }
                    }
                    if (viewHolder != null) {
                        i6 = 1;
                        ArrayList arrayList2 = this.a;
                        ArrayList arrayList3 = this.f2313c;
                        if (viewHolder != null) {
                            int size2 = arrayList2.size();
                            for (int i18 = 0; i18 < size2; i18++) {
                                ViewHolder viewHolder3 = (ViewHolder) arrayList2.get(i18);
                                if (!viewHolder3.wasReturnedFromScrap() && viewHolder3.getLayoutPosition() == i5 && !viewHolder3.isInvalid() && (recyclerView.mState.f2332g || !viewHolder3.isRemoved())) {
                                    viewHolder3.addFlags(32);
                                    viewHolder = viewHolder3;
                                    i10 = 1;
                                    break;
                                }
                            }
                            ArrayList arrayList4 = recyclerView.mChildHelper.f2264c;
                            int size3 = arrayList4.size();
                            int i19 = 0;
                            while (true) {
                                if (i19 >= size3) {
                                    i10 = 1;
                                    view = null;
                                    break;
                                }
                                view = (View) arrayList4.get(i19);
                                ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
                                i10 = 1;
                                if (childViewHolderInt.getLayoutPosition() == i5 && !childViewHolderInt.isInvalid() && !childViewHolderInt.isRemoved()) {
                                    break;
                                }
                                i19++;
                            }
                            if (view == null) {
                                int size4 = arrayList3.size();
                                int i20 = 0;
                                while (true) {
                                    if (i20 >= size4) {
                                        viewHolder = null;
                                        break;
                                    }
                                    ViewHolder viewHolder4 = (ViewHolder) arrayList3.get(i20);
                                    if (viewHolder4.isInvalid() || viewHolder4.getLayoutPosition() != i5 || viewHolder4.isAttachedToTransitionOverlay()) {
                                        i20++;
                                    } else {
                                        arrayList3.remove(i20);
                                        if (RecyclerView.sVerboseLoggingEnabled) {
                                            Log.d(RecyclerView.TAG, "getScrapOrHiddenOrCachedHolderForPosition(" + i5 + ") found match in cache: " + viewHolder4);
                                        }
                                        viewHolder = viewHolder4;
                                    }
                                }
                            } else {
                                ViewHolder childViewHolderInt2 = RecyclerView.getChildViewHolderInt(view);
                                ChildHelper childHelper = recyclerView.mChildHelper;
                                h hVar = childHelper.f2263b;
                                int indexOfChild = childHelper.a.a.indexOfChild(view);
                                if (indexOfChild < 0) {
                                    throw new IllegalArgumentException("view is not a child, cannot hide " + view);
                                }
                                if (!hVar.H(indexOfChild)) {
                                    throw new RuntimeException("trying to unhide a view that was not hidden" + view);
                                }
                                hVar.E(indexOfChild);
                                childHelper.l(view);
                                int j7 = recyclerView.mChildHelper.j(view);
                                if (j7 == -1) {
                                    StringBuilder sb2 = new StringBuilder("layout index should not be -1 after unhiding a view:");
                                    sb2.append(childViewHolderInt2);
                                    throw new IllegalStateException(a3.e.h(recyclerView, sb2));
                                }
                                recyclerView.mChildHelper.c(j7);
                                l(view);
                                childViewHolderInt2.addFlags(8224);
                                viewHolder = childViewHolderInt2;
                            }
                            if (viewHolder != null) {
                                if (!viewHolder.isRemoved()) {
                                    int i21 = viewHolder.mPosition;
                                    if (i21 < 0 || i21 >= recyclerView.mAdapter.getItemCount()) {
                                        StringBuilder sb3 = new StringBuilder("Inconsistency detected. Invalid view holder adapter position");
                                        sb3.append(viewHolder);
                                        throw new IndexOutOfBoundsException(a3.e.h(recyclerView, sb3));
                                    }
                                    i15 = ((recyclerView.mState.f2332g || recyclerView.mAdapter.getItemViewType(viewHolder.mPosition) == viewHolder.getItemViewType()) && (!recyclerView.mAdapter.hasStableIds() || viewHolder.getItemId() == recyclerView.mAdapter.getItemId(viewHolder.mPosition))) ? i10 : 0;
                                } else {
                                    if (RecyclerView.sDebugAssertionsEnabled && !recyclerView.mState.f2332g) {
                                        throw new IllegalStateException(a3.e.h(recyclerView, new StringBuilder("should not receive a removed view unless it is pre layout")));
                                    }
                                    i15 = recyclerView.mState.f2332g;
                                }
                                if (i15 == 0) {
                                    viewHolder.addFlags(4);
                                    if (viewHolder.isScrap()) {
                                        recyclerView.removeDetachedView(viewHolder.itemView, false);
                                        viewHolder.unScrap();
                                    } else if (viewHolder.wasReturnedFromScrap()) {
                                        viewHolder.clearReturnedFromScrapFlag();
                                    }
                                    k(viewHolder);
                                    viewHolder = null;
                                } else {
                                    i6 = i10;
                                }
                            }
                        } else {
                            i10 = 1;
                        }
                        if (viewHolder != null) {
                            int f10 = recyclerView.mAdapterHelper.f(i5, 0);
                            if (f10 < 0 || f10 >= recyclerView.mAdapter.getItemCount()) {
                                StringBuilder q6 = a3.e.q(i5, "Inconsistency detected. Invalid item position ", f10, "(offset:", ").state:");
                                q6.append(recyclerView.mState.b());
                                q6.append(recyclerView.exceptionLabel());
                                throw new IndexOutOfBoundsException(q6.toString());
                            }
                            int itemViewType = recyclerView.mAdapter.getItemViewType(f10);
                            if (recyclerView.mAdapter.hasStableIds()) {
                                long itemId2 = recyclerView.mAdapter.getItemId(f10);
                                int size5 = arrayList2.size() - 1;
                                while (true) {
                                    if (size5 >= 0) {
                                        ViewHolder viewHolder5 = (ViewHolder) arrayList2.get(size5);
                                        if (viewHolder5.getItemId() == itemId2 && !viewHolder5.wasReturnedFromScrap()) {
                                            j5 = Long.MAX_VALUE;
                                            if (itemViewType == viewHolder5.getItemViewType()) {
                                                viewHolder5.addFlags(32);
                                                if (viewHolder5.isRemoved() && !recyclerView.mState.f2332g) {
                                                    viewHolder5.setFlags(2, 14);
                                                }
                                                viewHolder = viewHolder5;
                                            } else {
                                                arrayList2.remove(size5);
                                                recyclerView.removeDetachedView(viewHolder5.itemView, false);
                                                ViewHolder childViewHolderInt3 = RecyclerView.getChildViewHolderInt(viewHolder5.itemView);
                                                childViewHolderInt3.mScrapContainer = null;
                                                childViewHolderInt3.mInChangeScrap = false;
                                                childViewHolderInt3.clearReturnedFromScrapFlag();
                                                k(childViewHolderInt3);
                                            }
                                        }
                                        size5--;
                                    } else {
                                        j5 = Long.MAX_VALUE;
                                        int size6 = arrayList3.size() - 1;
                                        while (true) {
                                            if (size6 < 0) {
                                                break;
                                            }
                                            ViewHolder viewHolder6 = (ViewHolder) arrayList3.get(size6);
                                            if (viewHolder6.getItemId() != itemId2 || viewHolder6.isAttachedToTransitionOverlay()) {
                                                size6--;
                                            } else if (itemViewType == viewHolder6.getItemViewType()) {
                                                arrayList3.remove(size6);
                                                viewHolder = viewHolder6;
                                            } else {
                                                i(size6);
                                            }
                                        }
                                        viewHolder = null;
                                    }
                                }
                                if (viewHolder != null) {
                                    viewHolder.mPosition = f10;
                                    i6 = i10;
                                }
                            } else {
                                j5 = Long.MAX_VALUE;
                            }
                            if (viewHolder == null && (viewCacheExtension = this.f2318h) != null && (a = viewCacheExtension.a()) != null) {
                                viewHolder = recyclerView.getChildViewHolder(a);
                                if (viewHolder == null) {
                                    throw new IllegalArgumentException(a3.e.h(recyclerView, new StringBuilder("getViewForPositionAndType returned a view which does not have a ViewHolder")));
                                }
                                if (viewHolder.shouldIgnore()) {
                                    throw new IllegalArgumentException(a3.e.h(recyclerView, new StringBuilder("getViewForPositionAndType returned a view that is ignored. You must call stopIgnoring before returning this view.")));
                                }
                            }
                            if (viewHolder == null) {
                                if (RecyclerView.sVerboseLoggingEnabled) {
                                    Log.d(RecyclerView.TAG, "tryGetViewHolderForPositionByDeadline(" + i5 + ") fetching from shared pool");
                                }
                                ViewHolder recycledView = d().getRecycledView(itemViewType);
                                if (recycledView != null) {
                                    recycledView.resetInternal();
                                    if (RecyclerView.FORCE_INVALIDATE_DISPLAY_LIST) {
                                        View view2 = recycledView.itemView;
                                        if (view2 instanceof ViewGroup) {
                                            f((ViewGroup) view2, false);
                                        }
                                    }
                                }
                                viewHolder = recycledView;
                            }
                            if (viewHolder == null) {
                                long nanoTime2 = recyclerView.getNanoTime();
                                if (j != j5) {
                                    i14 = itemViewType;
                                    if (!this.f2317g.willCreateInTime(itemViewType, nanoTime2, j)) {
                                        return null;
                                    }
                                } else {
                                    i14 = itemViewType;
                                }
                                viewHolder = recyclerView.mAdapter.createViewHolder(recyclerView, i14);
                                if (RecyclerView.ALLOW_THREAD_GAP_WORK && (findNestedRecyclerView = RecyclerView.findNestedRecyclerView(viewHolder.itemView)) != null) {
                                    viewHolder.mNestedRecyclerView = new WeakReference<>(findNestedRecyclerView);
                                }
                                this.f2317g.factorInCreateTime(i14, recyclerView.getNanoTime() - nanoTime2);
                                if (RecyclerView.sVerboseLoggingEnabled) {
                                    Log.d(RecyclerView.TAG, "tryGetViewHolderForPositionByDeadline created new ViewHolder");
                                }
                            }
                        } else {
                            j5 = Long.MAX_VALUE;
                        }
                        if (i6 != 0 && !recyclerView.mState.f2332g && viewHolder.hasAnyOfTheFlags(8192)) {
                            viewHolder.setFlags(0, 8192);
                            if (recyclerView.mState.j) {
                                recyclerView.recordAnimationInfoIfBouncedHiddenView(viewHolder, recyclerView.mItemAnimator.recordPreLayoutInformation(recyclerView.mState, viewHolder, ItemAnimator.buildAdapterChangeFlagsForAnimations(viewHolder) | ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, viewHolder.getUnmodifiedPayloads()));
                            }
                        }
                        if (!recyclerView.mState.f2332g && viewHolder.isBound()) {
                            viewHolder.mPreLayoutPosition = i5;
                        } else if (viewHolder.isBound() || viewHolder.needsUpdate() || viewHolder.isInvalid()) {
                            if (!RecyclerView.sDebugAssertionsEnabled && viewHolder.isRemoved()) {
                                StringBuilder sb4 = new StringBuilder("Removed holder should be bound and it should come here only in pre-layout. Holder: ");
                                sb4.append(viewHolder);
                                throw new IllegalStateException(a3.e.h(recyclerView, sb4));
                            }
                            int f11 = recyclerView.mAdapterHelper.f(i5, 0);
                            viewHolder.mBindingAdapter = null;
                            viewHolder.mOwnerRecyclerView = recyclerView;
                            int itemViewType2 = viewHolder.getItemViewType();
                            nanoTime = recyclerView.getNanoTime();
                            if (j != j5 || this.f2317g.willBindInTime(itemViewType2, nanoTime, j)) {
                                if (viewHolder.isTmpDetached()) {
                                    i11 = 0;
                                } else {
                                    recyclerView.attachViewToParent(viewHolder.itemView, recyclerView.getChildCount(), viewHolder.itemView.getLayoutParams());
                                    i11 = i10;
                                }
                                recyclerView.mAdapter.bindViewHolder(viewHolder, f11);
                                if (i11 != 0) {
                                    recyclerView.detachViewFromParent(viewHolder.itemView);
                                }
                                this.f2317g.factorInBindTime(viewHolder.getItemViewType(), recyclerView.getNanoTime() - nanoTime);
                                if (recyclerView.isAccessibilityEnabled()) {
                                    i12 = i10;
                                } else {
                                    View view3 = viewHolder.itemView;
                                    if (view3.getImportantForAccessibility() == 0) {
                                        i12 = i10;
                                        view3.setImportantForAccessibility(i12);
                                    } else {
                                        i12 = i10;
                                    }
                                    RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate = recyclerView.mAccessibilityDelegate;
                                    if (recyclerViewAccessibilityDelegate != null) {
                                        j1 j1Var = recyclerViewAccessibilityDelegate.f2345b;
                                        if (j1Var != null && (e9 = androidx.core.view.s0.e(view3)) != null && e9 != j1Var) {
                                            j1Var.f2408b.put(view3, e9);
                                        }
                                        androidx.core.view.s0.p(view3, j1Var);
                                    }
                                }
                                if (recyclerView.mState.f2332g) {
                                    viewHolder.mPreLayoutPosition = i5;
                                }
                                i13 = i12;
                                layoutParams = viewHolder.itemView.getLayoutParams();
                                if (layoutParams == null) {
                                    layoutParams2 = (LayoutParams) recyclerView.generateDefaultLayoutParams();
                                    viewHolder.itemView.setLayoutParams(layoutParams2);
                                } else if (recyclerView.checkLayoutParams(layoutParams)) {
                                    layoutParams2 = (LayoutParams) layoutParams;
                                } else {
                                    layoutParams2 = (LayoutParams) recyclerView.generateLayoutParams(layoutParams);
                                    viewHolder.itemView.setLayoutParams(layoutParams2);
                                }
                                layoutParams2.f2308d = viewHolder;
                                layoutParams2.f2311v = (i6 != 0 || i13 == 0) ? 0 : i12;
                                return viewHolder;
                            }
                        }
                        i13 = 0;
                        i12 = i10;
                        layoutParams = viewHolder.itemView.getLayoutParams();
                        if (layoutParams == null) {
                        }
                        layoutParams2.f2308d = viewHolder;
                        layoutParams2.f2311v = (i6 != 0 || i13 == 0) ? 0 : i12;
                        return viewHolder;
                    }
                }
                viewHolder = null;
                if (viewHolder != null) {
                }
            } else {
                viewHolder = null;
            }
            i6 = 0;
            ArrayList arrayList22 = this.a;
            ArrayList arrayList32 = this.f2313c;
            if (viewHolder != null) {
            }
            if (viewHolder != null) {
            }
            if (i6 != 0) {
                viewHolder.setFlags(0, 8192);
                if (recyclerView.mState.j) {
                }
            }
            if (!recyclerView.mState.f2332g) {
            }
            if (viewHolder.isBound()) {
            }
            if (!RecyclerView.sDebugAssertionsEnabled) {
            }
            int f112 = recyclerView.mAdapterHelper.f(i5, 0);
            viewHolder.mBindingAdapter = null;
            viewHolder.mOwnerRecyclerView = recyclerView;
            int itemViewType22 = viewHolder.getItemViewType();
            nanoTime = recyclerView.getNanoTime();
            if (j != j5) {
            }
            if (viewHolder.isTmpDetached()) {
            }
            recyclerView.mAdapter.bindViewHolder(viewHolder, f112);
            if (i11 != 0) {
            }
            this.f2317g.factorInBindTime(viewHolder.getItemViewType(), recyclerView.getNanoTime() - nanoTime);
            if (recyclerView.isAccessibilityEnabled()) {
            }
            if (recyclerView.mState.f2332g) {
            }
            i13 = i12;
            layoutParams = viewHolder.itemView.getLayoutParams();
            if (layoutParams == null) {
            }
            layoutParams2.f2308d = viewHolder;
            layoutParams2.f2311v = (i6 != 0 || i13 == 0) ? 0 : i12;
            return viewHolder;
        }

        public final void n(ViewHolder viewHolder) {
            if (viewHolder.mInChangeScrap) {
                this.f2312b.remove(viewHolder);
            } else {
                this.a.remove(viewHolder);
            }
            viewHolder.mScrapContainer = null;
            viewHolder.mInChangeScrap = false;
            viewHolder.clearReturnedFromScrapFlag();
        }

        public final void o() {
            LayoutManager layoutManager = RecyclerView.this.mLayout;
            this.f2316f = this.f2315e + (layoutManager != null ? layoutManager.mPrefetchMaxCountObserved : 0);
            ArrayList arrayList = this.f2313c;
            for (int size = arrayList.size() - 1; size >= 0 && arrayList.size() > this.f2316f; size--) {
                i(size);
            }
        }
    }

    public interface RecyclerListener {
        void a();
    }

    public class RecyclerViewDataObserver extends AdapterDataObserver {
        public RecyclerViewDataObserver() {
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void a() {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.assertNotInLayoutOrScroll(null);
            recyclerView.mState.f2331f = true;
            recyclerView.processDataSetCompletelyChanged(true);
            if (recyclerView.mAdapterHelper.g()) {
                return;
            }
            recyclerView.requestLayout();
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void b(int i5, int i6, Object obj) {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.assertNotInLayoutOrScroll(null);
            AdapterHelper adapterHelper = recyclerView.mAdapterHelper;
            ArrayList arrayList = adapterHelper.f2251b;
            if (i6 < 1) {
                return;
            }
            arrayList.add(adapterHelper.h(obj, 4, i5, i6));
            adapterHelper.f2255f |= 4;
            if (arrayList.size() == 1) {
                g();
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void c(int i5, int i6) {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.assertNotInLayoutOrScroll(null);
            AdapterHelper adapterHelper = recyclerView.mAdapterHelper;
            ArrayList arrayList = adapterHelper.f2251b;
            if (i6 < 1) {
                return;
            }
            arrayList.add(adapterHelper.h(null, 1, i5, i6));
            adapterHelper.f2255f |= 1;
            if (arrayList.size() == 1) {
                g();
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void d(int i5, int i6) {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.assertNotInLayoutOrScroll(null);
            AdapterHelper adapterHelper = recyclerView.mAdapterHelper;
            ArrayList arrayList = adapterHelper.f2251b;
            if (i5 == i6) {
                return;
            }
            arrayList.add(adapterHelper.h(null, 8, i5, i6));
            adapterHelper.f2255f |= 8;
            if (arrayList.size() == 1) {
                g();
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void e(int i5, int i6) {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.assertNotInLayoutOrScroll(null);
            AdapterHelper adapterHelper = recyclerView.mAdapterHelper;
            ArrayList arrayList = adapterHelper.f2251b;
            if (i6 < 1) {
                return;
            }
            arrayList.add(adapterHelper.h(null, 2, i5, i6));
            adapterHelper.f2255f |= 2;
            if (arrayList.size() == 1) {
                g();
            }
        }

        @Override // androidx.recyclerview.widget.RecyclerView.AdapterDataObserver
        public final void f() {
            Adapter adapter;
            RecyclerView recyclerView = RecyclerView.this;
            if (recyclerView.mPendingSavedState == null || (adapter = recyclerView.mAdapter) == null || !adapter.canRestoreState()) {
                return;
            }
            recyclerView.requestLayout();
        }

        public final void g() {
            RecyclerView recyclerView = RecyclerView.this;
            if (!recyclerView.mHasFixedSize || !recyclerView.mIsAttached) {
                recyclerView.mAdapterUpdateDuringMeasure = true;
                recyclerView.requestLayout();
            } else {
                Runnable runnable = recyclerView.mUpdateChildViewsRunnable;
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                recyclerView.postOnAnimation(runnable);
            }
        }
    }

    public static class SavedState extends d2.b {
        public static final Parcelable.Creator<SavedState> CREATOR = new g1();

        /* renamed from: i, reason: collision with root package name */
        public Parcelable f2320i;

        public SavedState(Parcel parcel, ClassLoader classLoader) {
            super(parcel, classLoader);
            this.f2320i = parcel.readParcelable(classLoader == null ? LayoutManager.class.getClassLoader() : classLoader);
        }

        @Override // d2.b, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            super.writeToParcel(parcel, i5);
            parcel.writeParcelable(this.f2320i, 0);
        }
    }

    public static abstract class SmoothScroller {
        private LayoutManager mLayoutManager;
        private boolean mPendingInitialRun;
        private RecyclerView mRecyclerView;
        private final Action mRecyclingAction;
        private boolean mRunning;
        private boolean mStarted;
        private int mTargetPosition = -1;
        private View mTargetView;

        public static class Action {
            public int a;

            /* renamed from: b, reason: collision with root package name */
            public int f2321b;

            /* renamed from: c, reason: collision with root package name */
            public int f2322c;

            /* renamed from: d, reason: collision with root package name */
            public int f2323d;

            /* renamed from: e, reason: collision with root package name */
            public Interpolator f2324e;

            /* renamed from: f, reason: collision with root package name */
            public boolean f2325f;

            /* renamed from: g, reason: collision with root package name */
            public int f2326g;

            public final void a(RecyclerView recyclerView) {
                int i5 = this.f2323d;
                if (i5 >= 0) {
                    this.f2323d = -1;
                    recyclerView.jumpToPositionForSmoothScroller(i5);
                    this.f2325f = false;
                    return;
                }
                if (!this.f2325f) {
                    this.f2326g = 0;
                    return;
                }
                Interpolator interpolator = this.f2324e;
                if (interpolator != null && this.f2322c < 1) {
                    throw new IllegalStateException("If you provide an interpolator, you must set a positive duration");
                }
                int i6 = this.f2322c;
                if (i6 < 1) {
                    throw new IllegalStateException("Scroll duration must be a positive number");
                }
                recyclerView.mViewFlinger.c(this.a, this.f2321b, interpolator, i6);
                int i10 = this.f2326g + 1;
                this.f2326g = i10;
                if (i10 > 10) {
                    Log.e(RecyclerView.TAG, "Smooth Scroll action is being updated too frequently. Make sure you are not changing it unless necessary");
                }
                this.f2325f = false;
            }
        }

        public SmoothScroller() {
            Action action = new Action();
            action.f2323d = -1;
            action.f2325f = false;
            action.f2326g = 0;
            action.a = 0;
            action.f2321b = 0;
            action.f2322c = Integer.MIN_VALUE;
            action.f2324e = null;
            this.mRecyclingAction = action;
        }

        public PointF computeScrollVectorForPosition(int i5) {
            Object layoutManager = getLayoutManager();
            if (layoutManager instanceof i1) {
                return ((i1) layoutManager).computeScrollVectorForPosition(i5);
            }
            Log.w(RecyclerView.TAG, "You should override computeScrollVectorForPosition when the LayoutManager does not implement " + i1.class.getCanonicalName());
            return null;
        }

        public View findViewByPosition(int i5) {
            return this.mRecyclerView.mLayout.findViewByPosition(i5);
        }

        public int getChildCount() {
            return this.mRecyclerView.mLayout.getChildCount();
        }

        public int getChildPosition(View view) {
            return this.mRecyclerView.getChildLayoutPosition(view);
        }

        public LayoutManager getLayoutManager() {
            return this.mLayoutManager;
        }

        public int getTargetPosition() {
            return this.mTargetPosition;
        }

        @Deprecated
        public void instantScrollToPosition(int i5) {
            this.mRecyclerView.scrollToPosition(i5);
        }

        public boolean isPendingInitialRun() {
            return this.mPendingInitialRun;
        }

        public boolean isRunning() {
            return this.mRunning;
        }

        public void normalize(@NonNull PointF pointF) {
            float f2 = pointF.x;
            float f10 = pointF.y;
            float sqrt = (float) Math.sqrt((f10 * f10) + (f2 * f2));
            pointF.x /= sqrt;
            pointF.y /= sqrt;
        }

        public void onAnimation(int i5, int i6) {
            PointF computeScrollVectorForPosition;
            RecyclerView recyclerView = this.mRecyclerView;
            if (this.mTargetPosition == -1 || recyclerView == null) {
                stop();
            }
            if (this.mPendingInitialRun && this.mTargetView == null && this.mLayoutManager != null && (computeScrollVectorForPosition = computeScrollVectorForPosition(this.mTargetPosition)) != null) {
                float f2 = computeScrollVectorForPosition.x;
                if (f2 != RecyclerView.DECELERATION_RATE || computeScrollVectorForPosition.y != RecyclerView.DECELERATION_RATE) {
                    recyclerView.scrollStep((int) Math.signum(f2), (int) Math.signum(computeScrollVectorForPosition.y), null);
                }
            }
            this.mPendingInitialRun = false;
            View view = this.mTargetView;
            if (view != null) {
                if (getChildPosition(view) == this.mTargetPosition) {
                    onTargetFound(this.mTargetView, recyclerView.mState, this.mRecyclingAction);
                    this.mRecyclingAction.a(recyclerView);
                    stop();
                } else {
                    Log.e(RecyclerView.TAG, "Passed over target position while smooth scrolling.");
                    this.mTargetView = null;
                }
            }
            if (this.mRunning) {
                onSeekTargetStep(i5, i6, recyclerView.mState, this.mRecyclingAction);
                Action action = this.mRecyclingAction;
                boolean z5 = action.f2323d >= 0;
                action.a(recyclerView);
                if (z5 && this.mRunning) {
                    this.mPendingInitialRun = true;
                    recyclerView.mViewFlinger.b();
                }
            }
        }

        public void onChildAttachedToWindow(View view) {
            if (getChildPosition(view) == getTargetPosition()) {
                this.mTargetView = view;
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d(RecyclerView.TAG, "smooth scroll target view has been attached");
                }
            }
        }

        public abstract void onSeekTargetStep(int i5, int i6, State state, Action action);

        public abstract void onStart();

        public abstract void onStop();

        public abstract void onTargetFound(View view, State state, Action action);

        public void setTargetPosition(int i5) {
            this.mTargetPosition = i5;
        }

        public void start(RecyclerView recyclerView, LayoutManager layoutManager) {
            ViewFlinger viewFlinger = recyclerView.mViewFlinger;
            RecyclerView.this.removeCallbacks(viewFlinger);
            viewFlinger.f2340i.abortAnimation();
            if (this.mStarted) {
                Log.w(RecyclerView.TAG, "An instance of " + getClass().getSimpleName() + " was started more than once. Each instance of" + getClass().getSimpleName() + " is intended to only be used once. You should create a new instance for each use.");
            }
            this.mRecyclerView = recyclerView;
            this.mLayoutManager = layoutManager;
            int i5 = this.mTargetPosition;
            if (i5 == -1) {
                throw new IllegalArgumentException("Invalid target position");
            }
            recyclerView.mState.a = i5;
            this.mRunning = true;
            this.mPendingInitialRun = true;
            this.mTargetView = findViewByPosition(getTargetPosition());
            onStart();
            this.mRecyclerView.mViewFlinger.b();
            this.mStarted = true;
        }

        public final void stop() {
            if (this.mRunning) {
                this.mRunning = false;
                onStop();
                this.mRecyclerView.mState.a = -1;
                this.mTargetView = null;
                this.mTargetPosition = -1;
                this.mPendingInitialRun = false;
                this.mLayoutManager.onSmoothScrollerStopped(this);
                this.mLayoutManager = null;
                this.mRecyclerView = null;
            }
        }
    }

    public static class State {
        public int a;

        /* renamed from: b, reason: collision with root package name */
        public int f2327b;

        /* renamed from: c, reason: collision with root package name */
        public int f2328c;

        /* renamed from: d, reason: collision with root package name */
        public int f2329d;

        /* renamed from: e, reason: collision with root package name */
        public int f2330e;

        /* renamed from: f, reason: collision with root package name */
        public boolean f2331f;

        /* renamed from: g, reason: collision with root package name */
        public boolean f2332g;

        /* renamed from: h, reason: collision with root package name */
        public boolean f2333h;

        /* renamed from: i, reason: collision with root package name */
        public boolean f2334i;
        public boolean j;
        public boolean k;

        /* renamed from: l, reason: collision with root package name */
        public int f2335l;

        /* renamed from: m, reason: collision with root package name */
        public long f2336m;

        /* renamed from: n, reason: collision with root package name */
        public int f2337n;

        public final void a(int i5) {
            if ((this.f2329d & i5) != 0) {
                return;
            }
            throw new IllegalStateException("Layout state should be one of " + Integer.toBinaryString(i5) + " but it is " + Integer.toBinaryString(this.f2329d));
        }

        public final int b() {
            return this.f2332g ? this.f2327b - this.f2328c : this.f2330e;
        }

        public final String toString() {
            return "State{mTargetPosition=" + this.a + ", mData=null, mItemCount=" + this.f2330e + ", mIsMeasuring=" + this.f2334i + ", mPreviousLayoutItemCount=" + this.f2327b + ", mDeletedInvisibleItemCountSincePreviousLayout=" + this.f2328c + ", mStructureChanged=" + this.f2331f + ", mInPreLayout=" + this.f2332g + ", mRunSimpleAnimations=" + this.j + ", mRunPredictiveAnimations=" + this.k + '}';
        }
    }

    public static class StretchEdgeEffectFactory extends EdgeEffectFactory {
        @Override // androidx.recyclerview.widget.RecyclerView.EdgeEffectFactory
        public final EdgeEffect a(RecyclerView recyclerView) {
            return new EdgeEffect(recyclerView.getContext());
        }
    }

    public static abstract class ViewCacheExtension {
        public abstract View a();
    }

    public class ViewFlinger implements Runnable {

        /* renamed from: d, reason: collision with root package name */
        public int f2338d;

        /* renamed from: e, reason: collision with root package name */
        public int f2339e;

        /* renamed from: i, reason: collision with root package name */
        public OverScroller f2340i;

        /* renamed from: v, reason: collision with root package name */
        public Interpolator f2341v;

        /* renamed from: w, reason: collision with root package name */
        public boolean f2342w;

        /* renamed from: x, reason: collision with root package name */
        public boolean f2343x;

        public ViewFlinger() {
            Interpolator interpolator = RecyclerView.sQuinticInterpolator;
            this.f2341v = interpolator;
            this.f2342w = false;
            this.f2343x = false;
            this.f2340i = new OverScroller(RecyclerView.this.getContext(), interpolator);
        }

        public final void a(int i5, int i6) {
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.setScrollState(2);
            this.f2339e = 0;
            this.f2338d = 0;
            Interpolator interpolator = this.f2341v;
            Interpolator interpolator2 = RecyclerView.sQuinticInterpolator;
            if (interpolator != interpolator2) {
                this.f2341v = interpolator2;
                this.f2340i = new OverScroller(recyclerView.getContext(), interpolator2);
            }
            this.f2340i.fling(0, 0, i5, i6, Integer.MIN_VALUE, Integer.MAX_VALUE, Integer.MIN_VALUE, Integer.MAX_VALUE);
            b();
        }

        public final void b() {
            if (this.f2342w) {
                this.f2343x = true;
                return;
            }
            RecyclerView recyclerView = RecyclerView.this;
            recyclerView.removeCallbacks(this);
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            recyclerView.postOnAnimation(this);
        }

        public final void c(int i5, int i6, Interpolator interpolator, int i10) {
            RecyclerView recyclerView = RecyclerView.this;
            if (i10 == Integer.MIN_VALUE) {
                int abs = Math.abs(i5);
                int abs2 = Math.abs(i6);
                boolean z5 = abs > abs2;
                int width = z5 ? recyclerView.getWidth() : recyclerView.getHeight();
                if (!z5) {
                    abs = abs2;
                }
                i10 = Math.min((int) (((abs / width) + 1.0f) * 300.0f), RecyclerView.MAX_SCROLL_DURATION);
            }
            int i11 = i10;
            if (interpolator == null) {
                interpolator = RecyclerView.sQuinticInterpolator;
            }
            if (this.f2341v != interpolator) {
                this.f2341v = interpolator;
                this.f2340i = new OverScroller(recyclerView.getContext(), interpolator);
            }
            this.f2339e = 0;
            this.f2338d = 0;
            recyclerView.setScrollState(2);
            this.f2340i.startScroll(0, 0, i5, i6, i11);
            b();
        }

        @Override // java.lang.Runnable
        public final void run() {
            int i5;
            int i6;
            int i10;
            int i11;
            RecyclerView recyclerView = RecyclerView.this;
            if (recyclerView.mLayout == null) {
                recyclerView.removeCallbacks(this);
                this.f2340i.abortAnimation();
                return;
            }
            this.f2343x = false;
            this.f2342w = true;
            recyclerView.consumePendingUpdateOperations();
            OverScroller overScroller = this.f2340i;
            if (overScroller.computeScrollOffset()) {
                int currX = overScroller.getCurrX();
                int currY = overScroller.getCurrY();
                int i12 = currX - this.f2338d;
                int i13 = currY - this.f2339e;
                this.f2338d = currX;
                this.f2339e = currY;
                int consumeFlingInHorizontalStretch = recyclerView.consumeFlingInHorizontalStretch(i12);
                int consumeFlingInVerticalStretch = recyclerView.consumeFlingInVerticalStretch(i13);
                int[] iArr = recyclerView.mReusableIntPair;
                iArr[0] = 0;
                iArr[1] = 0;
                if (recyclerView.dispatchNestedPreScroll(consumeFlingInHorizontalStretch, consumeFlingInVerticalStretch, iArr, null, 1)) {
                    int[] iArr2 = recyclerView.mReusableIntPair;
                    consumeFlingInHorizontalStretch -= iArr2[0];
                    consumeFlingInVerticalStretch -= iArr2[1];
                }
                if (recyclerView.getOverScrollMode() != 2) {
                    recyclerView.considerReleasingGlowsOnScroll(consumeFlingInHorizontalStretch, consumeFlingInVerticalStretch);
                }
                if (recyclerView.mAdapter != null) {
                    int[] iArr3 = recyclerView.mReusableIntPair;
                    iArr3[0] = 0;
                    iArr3[1] = 0;
                    recyclerView.scrollStep(consumeFlingInHorizontalStretch, consumeFlingInVerticalStretch, iArr3);
                    int[] iArr4 = recyclerView.mReusableIntPair;
                    int i14 = iArr4[0];
                    int i15 = iArr4[1];
                    int i16 = consumeFlingInHorizontalStretch - i14;
                    int i17 = consumeFlingInVerticalStretch - i15;
                    SmoothScroller smoothScroller = recyclerView.mLayout.mSmoothScroller;
                    if (smoothScroller != null && !smoothScroller.isPendingInitialRun() && smoothScroller.isRunning()) {
                        int b10 = recyclerView.mState.b();
                        if (b10 == 0) {
                            smoothScroller.stop();
                        } else if (smoothScroller.getTargetPosition() >= b10) {
                            smoothScroller.setTargetPosition(b10 - 1);
                            smoothScroller.onAnimation(i14, i15);
                        } else {
                            smoothScroller.onAnimation(i14, i15);
                        }
                    }
                    i5 = i16;
                    i10 = i14;
                    i6 = i17;
                    i11 = i15;
                } else {
                    i5 = consumeFlingInHorizontalStretch;
                    i6 = consumeFlingInVerticalStretch;
                    i10 = 0;
                    i11 = 0;
                }
                if (!recyclerView.mItemDecorations.isEmpty()) {
                    recyclerView.invalidate();
                }
                int[] iArr5 = recyclerView.mReusableIntPair;
                iArr5[0] = 0;
                iArr5[1] = 0;
                recyclerView.dispatchNestedScroll(i10, i11, i5, i6, null, 1, iArr5);
                int[] iArr6 = recyclerView.mReusableIntPair;
                int i18 = i5 - iArr6[0];
                int i19 = i6 - iArr6[1];
                if (i10 != 0 || i11 != 0) {
                    recyclerView.dispatchOnScrolled(i10, i11);
                }
                if (!recyclerView.awakenScrollBars()) {
                    recyclerView.invalidate();
                }
                boolean z5 = overScroller.isFinished() || (((overScroller.getCurrX() == overScroller.getFinalX()) || i18 != 0) && ((overScroller.getCurrY() == overScroller.getFinalY()) || i19 != 0));
                SmoothScroller smoothScroller2 = recyclerView.mLayout.mSmoothScroller;
                if ((smoothScroller2 == null || !smoothScroller2.isPendingInitialRun()) && z5) {
                    if (recyclerView.getOverScrollMode() != 2) {
                        int currVelocity = (int) overScroller.getCurrVelocity();
                        int i20 = i18 < 0 ? -currVelocity : i18 > 0 ? currVelocity : 0;
                        if (i19 < 0) {
                            currVelocity = -currVelocity;
                        } else if (i19 <= 0) {
                            currVelocity = 0;
                        }
                        recyclerView.absorbGlows(i20, currVelocity);
                    }
                    if (RecyclerView.ALLOW_THREAD_GAP_WORK) {
                        GapWorker.LayoutPrefetchRegistryImpl layoutPrefetchRegistryImpl = recyclerView.mPrefetchRegistry;
                        int[] iArr7 = layoutPrefetchRegistryImpl.f2279c;
                        if (iArr7 != null) {
                            Arrays.fill(iArr7, -1);
                        }
                        layoutPrefetchRegistryImpl.f2280d = 0;
                    }
                } else {
                    b();
                    GapWorker gapWorker = recyclerView.mGapWorker;
                    if (gapWorker != null) {
                        gapWorker.a(recyclerView, i10, i11);
                    }
                }
                if (Build.VERSION.SDK_INT >= 35) {
                    b1.a(recyclerView, Math.abs(overScroller.getCurrVelocity()));
                }
            }
            SmoothScroller smoothScroller3 = recyclerView.mLayout.mSmoothScroller;
            if (smoothScroller3 != null && smoothScroller3.isPendingInitialRun()) {
                smoothScroller3.onAnimation(0, 0);
            }
            this.f2342w = false;
            if (!this.f2343x) {
                recyclerView.setScrollState(0);
                recyclerView.stopNestedScroll(1);
            } else {
                recyclerView.removeCallbacks(this);
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                recyclerView.postOnAnimation(this);
            }
        }
    }

    public static abstract class ViewHolder {
        static final int FLAG_ADAPTER_FULLUPDATE = 1024;
        static final int FLAG_ADAPTER_POSITION_UNKNOWN = 512;
        static final int FLAG_APPEARED_IN_PRE_LAYOUT = 4096;
        static final int FLAG_BOUNCED_FROM_HIDDEN_LIST = 8192;
        static final int FLAG_BOUND = 1;
        static final int FLAG_IGNORE = 128;
        static final int FLAG_INVALID = 4;
        static final int FLAG_MOVED = 2048;
        static final int FLAG_NOT_RECYCLABLE = 16;
        static final int FLAG_REMOVED = 8;
        static final int FLAG_RETURNED_FROM_SCRAP = 32;
        static final int FLAG_TMP_DETACHED = 256;
        static final int FLAG_UPDATE = 2;
        private static final List<Object> FULLUPDATE_PAYLOADS = Collections.EMPTY_LIST;
        static final int PENDING_ACCESSIBILITY_STATE_NOT_SET = -1;

        @NonNull
        public final View itemView;
        Adapter mBindingAdapter;
        int mFlags;
        WeakReference<RecyclerView> mNestedRecyclerView;
        RecyclerView mOwnerRecyclerView;
        int mPosition = -1;
        int mOldPosition = -1;
        long mItemId = -1;
        int mItemViewType = -1;
        int mPreLayoutPosition = -1;
        ViewHolder mShadowedHolder = null;
        ViewHolder mShadowingHolder = null;
        List<Object> mPayloads = null;
        List<Object> mUnmodifiedPayloads = null;
        private int mIsRecyclableCount = 0;
        Recycler mScrapContainer = null;
        boolean mInChangeScrap = false;
        private int mWasImportantForAccessibilityBeforeHidden = 0;
        int mPendingAccessibilityState = -1;

        public ViewHolder(View view) {
            if (view == null) {
                throw new IllegalArgumentException("itemView may not be null");
            }
            this.itemView = view;
        }

        public void addChangePayload(Object obj) {
            if (obj == null) {
                addFlags(1024);
                return;
            }
            if ((1024 & this.mFlags) == 0) {
                if (this.mPayloads == null) {
                    ArrayList arrayList = new ArrayList();
                    this.mPayloads = arrayList;
                    this.mUnmodifiedPayloads = Collections.unmodifiableList(arrayList);
                }
                this.mPayloads.add(obj);
            }
        }

        public void addFlags(int i5) {
            this.mFlags = i5 | this.mFlags;
        }

        public void clearOldPosition() {
            this.mOldPosition = -1;
            this.mPreLayoutPosition = -1;
        }

        public void clearPayload() {
            List<Object> list = this.mPayloads;
            if (list != null) {
                list.clear();
            }
            this.mFlags &= -1025;
        }

        public void clearReturnedFromScrapFlag() {
            this.mFlags &= -33;
        }

        public void clearTmpDetachFlag() {
            this.mFlags &= -257;
        }

        public boolean doesTransientStatePreventRecycling() {
            if ((this.mFlags & 16) != 0) {
                return false;
            }
            View view = this.itemView;
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return view.hasTransientState();
        }

        public void flagRemovedAndOffsetPosition(int i5, int i6, boolean z5) {
            addFlags(8);
            offsetPosition(i6, z5);
            this.mPosition = i5;
        }

        public final int getAbsoluteAdapterPosition() {
            RecyclerView recyclerView = this.mOwnerRecyclerView;
            if (recyclerView == null) {
                return -1;
            }
            return recyclerView.getAdapterPositionInRecyclerView(this);
        }

        @Deprecated
        public final int getAdapterPosition() {
            return getBindingAdapterPosition();
        }

        public final Adapter getBindingAdapter() {
            return this.mBindingAdapter;
        }

        public final int getBindingAdapterPosition() {
            RecyclerView recyclerView;
            Adapter adapter;
            int adapterPositionInRecyclerView;
            if (this.mBindingAdapter == null || (recyclerView = this.mOwnerRecyclerView) == null || (adapter = recyclerView.getAdapter()) == null || (adapterPositionInRecyclerView = this.mOwnerRecyclerView.getAdapterPositionInRecyclerView(this)) == -1) {
                return -1;
            }
            return adapter.findRelativeAdapterPositionIn(this.mBindingAdapter, this, adapterPositionInRecyclerView);
        }

        public final long getItemId() {
            return this.mItemId;
        }

        public final int getItemViewType() {
            return this.mItemViewType;
        }

        public final int getLayoutPosition() {
            int i5 = this.mPreLayoutPosition;
            return i5 == -1 ? this.mPosition : i5;
        }

        public final int getOldPosition() {
            return this.mOldPosition;
        }

        @Deprecated
        public final int getPosition() {
            int i5 = this.mPreLayoutPosition;
            return i5 == -1 ? this.mPosition : i5;
        }

        public List<Object> getUnmodifiedPayloads() {
            if ((this.mFlags & 1024) != 0) {
                return FULLUPDATE_PAYLOADS;
            }
            List<Object> list = this.mPayloads;
            return (list == null || list.size() == 0) ? FULLUPDATE_PAYLOADS : this.mUnmodifiedPayloads;
        }

        public boolean hasAnyOfTheFlags(int i5) {
            return (i5 & this.mFlags) != 0;
        }

        public boolean isAdapterPositionUnknown() {
            return (this.mFlags & 512) != 0 || isInvalid();
        }

        public boolean isAttachedToTransitionOverlay() {
            return (this.itemView.getParent() == null || this.itemView.getParent() == this.mOwnerRecyclerView) ? false : true;
        }

        public boolean isBound() {
            return (this.mFlags & 1) != 0;
        }

        public boolean isInvalid() {
            return (this.mFlags & 4) != 0;
        }

        public final boolean isRecyclable() {
            if ((this.mFlags & 16) != 0) {
                return false;
            }
            View view = this.itemView;
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            return !view.hasTransientState();
        }

        public boolean isRemoved() {
            return (this.mFlags & 8) != 0;
        }

        public boolean isScrap() {
            return this.mScrapContainer != null;
        }

        public boolean isTmpDetached() {
            return (this.mFlags & 256) != 0;
        }

        public boolean isUpdated() {
            return (this.mFlags & 2) != 0;
        }

        public boolean needsUpdate() {
            return (this.mFlags & 2) != 0;
        }

        public void offsetPosition(int i5, boolean z5) {
            if (this.mOldPosition == -1) {
                this.mOldPosition = this.mPosition;
            }
            if (this.mPreLayoutPosition == -1) {
                this.mPreLayoutPosition = this.mPosition;
            }
            if (z5) {
                this.mPreLayoutPosition += i5;
            }
            this.mPosition += i5;
            if (this.itemView.getLayoutParams() != null) {
                ((LayoutParams) this.itemView.getLayoutParams()).f2310i = true;
            }
        }

        public void onEnteredHiddenState(RecyclerView recyclerView) {
            int i5 = this.mPendingAccessibilityState;
            if (i5 != -1) {
                this.mWasImportantForAccessibilityBeforeHidden = i5;
            } else {
                this.mWasImportantForAccessibilityBeforeHidden = this.itemView.getImportantForAccessibility();
            }
            recyclerView.setChildImportantForAccessibilityInternal(this, 4);
        }

        public void onLeftHiddenState(RecyclerView recyclerView) {
            recyclerView.setChildImportantForAccessibilityInternal(this, this.mWasImportantForAccessibilityBeforeHidden);
            this.mWasImportantForAccessibilityBeforeHidden = 0;
        }

        public void resetInternal() {
            if (RecyclerView.sDebugAssertionsEnabled && isTmpDetached()) {
                throw new IllegalStateException("Attempting to reset temp-detached ViewHolder: " + this + ". ViewHolders should be fully detached before resetting.");
            }
            this.mFlags = 0;
            this.mPosition = -1;
            this.mOldPosition = -1;
            this.mItemId = -1L;
            this.mPreLayoutPosition = -1;
            this.mIsRecyclableCount = 0;
            this.mShadowedHolder = null;
            this.mShadowingHolder = null;
            clearPayload();
            this.mWasImportantForAccessibilityBeforeHidden = 0;
            this.mPendingAccessibilityState = -1;
            RecyclerView.clearNestedRecyclerViewIfNotNested(this);
        }

        public void saveOldPosition() {
            if (this.mOldPosition == -1) {
                this.mOldPosition = this.mPosition;
            }
        }

        public void setFlags(int i5, int i6) {
            this.mFlags = (i5 & i6) | (this.mFlags & (~i6));
        }

        public final void setIsRecyclable(boolean z5) {
            int i5 = this.mIsRecyclableCount;
            int i6 = z5 ? i5 - 1 : i5 + 1;
            this.mIsRecyclableCount = i6;
            if (i6 < 0) {
                this.mIsRecyclableCount = 0;
                if (RecyclerView.sDebugAssertionsEnabled) {
                    throw new RuntimeException("isRecyclable decremented below 0: unmatched pair of setIsRecyable() calls for " + this);
                }
                Log.e("View", "isRecyclable decremented below 0: unmatched pair of setIsRecyable() calls for " + this);
            } else if (!z5 && i6 == 1) {
                this.mFlags |= 16;
            } else if (z5 && i6 == 0) {
                this.mFlags &= -17;
            }
            if (RecyclerView.sVerboseLoggingEnabled) {
                Log.d(RecyclerView.TAG, "setIsRecyclable val:" + z5 + ":" + this);
            }
        }

        public void setScrapContainer(Recycler recycler, boolean z5) {
            this.mScrapContainer = recycler;
            this.mInChangeScrap = z5;
        }

        public boolean shouldBeKeptAsChild() {
            return (this.mFlags & 16) != 0;
        }

        public boolean shouldIgnore() {
            return (this.mFlags & 128) != 0;
        }

        public void stopIgnoring() {
            this.mFlags &= -129;
        }

        public String toString() {
            StringBuilder p3 = k0.d.p(getClass().isAnonymousClass() ? "ViewHolder" : getClass().getSimpleName(), "{");
            p3.append(Integer.toHexString(hashCode()));
            p3.append(" position=");
            p3.append(this.mPosition);
            p3.append(" id=");
            p3.append(this.mItemId);
            p3.append(", oldPos=");
            p3.append(this.mOldPosition);
            p3.append(", pLpos:");
            p3.append(this.mPreLayoutPosition);
            StringBuilder sb2 = new StringBuilder(p3.toString());
            if (isScrap()) {
                sb2.append(" scrap ");
                sb2.append(this.mInChangeScrap ? "[changeScrap]" : "[attachedScrap]");
            }
            if (isInvalid()) {
                sb2.append(" invalid");
            }
            if (!isBound()) {
                sb2.append(" unbound");
            }
            if (needsUpdate()) {
                sb2.append(" update");
            }
            if (isRemoved()) {
                sb2.append(" removed");
            }
            if (shouldIgnore()) {
                sb2.append(" ignored");
            }
            if (isTmpDetached()) {
                sb2.append(" tmpDetached");
            }
            if (!isRecyclable()) {
                sb2.append(" not recyclable(" + this.mIsRecyclableCount + ")");
            }
            if (isAdapterPositionUnknown()) {
                sb2.append(" undefined adapter position");
            }
            if (this.itemView.getParent() == null) {
                sb2.append(" no parent");
            }
            sb2.append("}");
            return sb2.toString();
        }

        public void unScrap() {
            this.mScrapContainer.n(this);
        }

        public boolean wasReturnedFromScrap() {
            return (this.mFlags & 32) != 0;
        }
    }

    static {
        Class cls = Integer.TYPE;
        LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE = new Class[]{Context.class, AttributeSet.class, cls, cls};
        sQuinticInterpolator = new g0(2);
        sDefaultEdgeEffectFactory = new StretchEdgeEffectFactory();
    }

    public RecyclerView(@NonNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, com.discord.R.attr.recyclerViewStyle);
    }

    public static int c(int i5, EdgeEffect edgeEffect, EdgeEffect edgeEffect2, int i6) {
        if (i5 > 0 && edgeEffect != null && zo.c0.w(edgeEffect) != DECELERATION_RATE) {
            int round = Math.round(zo.c0.E(edgeEffect, ((-i5) * 4.0f) / i6, 0.5f) * ((-i6) / 4.0f));
            if (round != i5) {
                edgeEffect.finish();
            }
            return i5 - round;
        }
        if (i5 >= 0 || edgeEffect2 == null || zo.c0.w(edgeEffect2) == DECELERATION_RATE) {
            return i5;
        }
        float f2 = i6;
        int round2 = Math.round(zo.c0.E(edgeEffect2, (i5 * 4.0f) / f2, 0.5f) * (f2 / 4.0f));
        if (round2 != i5) {
            edgeEffect2.finish();
        }
        return i5 - round2;
    }

    public static void clearNestedRecyclerViewIfNotNested(@NonNull ViewHolder viewHolder) {
        WeakReference<RecyclerView> weakReference = viewHolder.mNestedRecyclerView;
        if (weakReference != null) {
            RecyclerView recyclerView = weakReference.get();
            while (recyclerView != null) {
                if (recyclerView == viewHolder.itemView) {
                    return;
                }
                Object parent = recyclerView.getParent();
                recyclerView = parent instanceof View ? (View) parent : null;
            }
            viewHolder.mNestedRecyclerView = null;
        }
    }

    public static RecyclerView findNestedRecyclerView(@NonNull View view) {
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        if (view instanceof RecyclerView) {
            return (RecyclerView) view;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        int childCount = viewGroup.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            RecyclerView findNestedRecyclerView = findNestedRecyclerView(viewGroup.getChildAt(i5));
            if (findNestedRecyclerView != null) {
                return findNestedRecyclerView;
            }
        }
        return null;
    }

    public static ViewHolder getChildViewHolderInt(View view) {
        if (view == null) {
            return null;
        }
        return ((LayoutParams) view.getLayoutParams()).f2308d;
    }

    public static void getDecoratedBoundsWithMarginsInt(View view, Rect rect) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        Rect rect2 = layoutParams.f2309e;
        rect.set((view.getLeft() - rect2.left) - ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin, (view.getTop() - rect2.top) - ((ViewGroup.MarginLayoutParams) layoutParams).topMargin, view.getRight() + rect2.right + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin, view.getBottom() + rect2.bottom + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin);
    }

    private NestedScrollingChildHelper getScrollingChildHelper() {
        if (this.mScrollingChildHelper == null) {
            this.mScrollingChildHelper = new NestedScrollingChildHelper(this);
        }
        return this.mScrollingChildHelper;
    }

    public static void setDebugAssertionsEnabled(boolean z5) {
        sDebugAssertionsEnabled = z5;
    }

    public static void setVerboseLoggingEnabled(boolean z5) {
        sVerboseLoggingEnabled = z5;
    }

    public final void a(ViewHolder viewHolder) {
        View view = viewHolder.itemView;
        boolean z5 = view.getParent() == this;
        this.mRecycler.n(getChildViewHolder(view));
        if (viewHolder.isTmpDetached()) {
            this.mChildHelper.b(view, -1, view.getLayoutParams(), true);
            return;
        }
        if (!z5) {
            this.mChildHelper.a(view, -1, true);
            return;
        }
        ChildHelper childHelper = this.mChildHelper;
        int indexOfChild = childHelper.a.a.indexOfChild(view);
        if (indexOfChild >= 0) {
            childHelper.f2263b.M(indexOfChild);
            childHelper.i(view);
        } else {
            throw new IllegalArgumentException("view is not a child, cannot hide " + view);
        }
    }

    public void absorbGlows(int i5, int i6) {
        if (i5 < 0) {
            ensureLeftGlow();
            if (this.mLeftGlow.isFinished()) {
                this.mLeftGlow.onAbsorb(-i5);
            }
        } else if (i5 > 0) {
            ensureRightGlow();
            if (this.mRightGlow.isFinished()) {
                this.mRightGlow.onAbsorb(i5);
            }
        }
        if (i6 < 0) {
            ensureTopGlow();
            if (this.mTopGlow.isFinished()) {
                this.mTopGlow.onAbsorb(-i6);
            }
        } else if (i6 > 0) {
            ensureBottomGlow();
            if (this.mBottomGlow.isFinished()) {
                this.mBottomGlow.onAbsorb(i6);
            }
        }
        if (i5 == 0 && i6 == 0) {
            return;
        }
        postInvalidateOnAnimation();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void addFocusables(ArrayList<View> arrayList, int i5, int i6) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null || !layoutManager.onAddFocusables(this, arrayList, i5, i6)) {
            super.addFocusables(arrayList, i5, i6);
        }
    }

    public void addItemDecoration(@NonNull ItemDecoration itemDecoration, int i5) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.assertNotInLayoutOrScroll("Cannot add item decoration during a scroll  or layout");
        }
        if (this.mItemDecorations.isEmpty()) {
            setWillNotDraw(false);
        }
        if (i5 < 0) {
            this.mItemDecorations.add(itemDecoration);
        } else {
            this.mItemDecorations.add(i5, itemDecoration);
        }
        markItemDecorInsetsDirty();
        requestLayout();
    }

    public void addOnChildAttachStateChangeListener(@NonNull OnChildAttachStateChangeListener onChildAttachStateChangeListener) {
        if (this.mOnChildAttachStateListeners == null) {
            this.mOnChildAttachStateListeners = new ArrayList();
        }
        this.mOnChildAttachStateListeners.add(onChildAttachStateChangeListener);
    }

    public void addOnItemTouchListener(@NonNull OnItemTouchListener onItemTouchListener) {
        this.mOnItemTouchListeners.add(onItemTouchListener);
    }

    public void addOnScrollListener(@NonNull OnScrollListener onScrollListener) {
        if (this.mScrollListeners == null) {
            this.mScrollListeners = new ArrayList();
        }
        this.mScrollListeners.add(onScrollListener);
    }

    public void addRecyclerListener(@NonNull RecyclerListener recyclerListener) {
        ta.a.h("'listener' arg cannot be null.", recyclerListener != null);
        this.mRecyclerListeners.add(recyclerListener);
    }

    public void animateAppearance(@NonNull ViewHolder viewHolder, ItemAnimator.ItemHolderInfo itemHolderInfo, @NonNull ItemAnimator.ItemHolderInfo itemHolderInfo2) {
        viewHolder.setIsRecyclable(false);
        if (this.mItemAnimator.animateAppearance(viewHolder, itemHolderInfo, itemHolderInfo2)) {
            postAnimationRunner();
        }
    }

    public void animateDisappearance(@NonNull ViewHolder viewHolder, @NonNull ItemAnimator.ItemHolderInfo itemHolderInfo, ItemAnimator.ItemHolderInfo itemHolderInfo2) {
        a(viewHolder);
        viewHolder.setIsRecyclable(false);
        if (this.mItemAnimator.animateDisappearance(viewHolder, itemHolderInfo, itemHolderInfo2)) {
            postAnimationRunner();
        }
    }

    public void assertInLayoutOrScroll(String str) {
        if (isComputingLayout()) {
            return;
        }
        if (str != null) {
            throw new IllegalStateException(a3.e.h(this, k0.d.o(str)));
        }
        throw new IllegalStateException(a3.e.h(this, new StringBuilder("Cannot call this method unless RecyclerView is computing a layout or scrolling")));
    }

    public void assertNotInLayoutOrScroll(String str) {
        if (isComputingLayout()) {
            if (str != null) {
                throw new IllegalStateException(str);
            }
            throw new IllegalStateException(a3.e.h(this, new StringBuilder("Cannot call this method while RecyclerView is computing a layout or scrolling")));
        }
        if (this.mDispatchScrollCounter > 0) {
            Log.w(TAG, "Cannot call this method in a scroll callback. Scroll callbacks mightbe run during a measure & layout pass where you cannot change theRecyclerView data. Any method call that might change the structureof the RecyclerView or the adapter contents should be postponed tothe next frame.", new IllegalStateException(a3.e.h(this, new StringBuilder(""))));
        }
    }

    public boolean canReuseUpdatedViewHolder(ViewHolder viewHolder) {
        ItemAnimator itemAnimator = this.mItemAnimator;
        return itemAnimator == null || itemAnimator.canReuseUpdatedViewHolder(viewHolder, viewHolder.getUnmodifiedPayloads());
    }

    @Override // android.view.ViewGroup
    public boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof LayoutParams) && this.mLayout.checkLayoutParams((LayoutParams) layoutParams);
    }

    public void clearOldPositions() {
        int h6 = this.mChildHelper.h();
        for (int i5 = 0; i5 < h6; i5++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i5));
            if (!childViewHolderInt.shouldIgnore()) {
                childViewHolderInt.clearOldPosition();
            }
        }
        Recycler recycler = this.mRecycler;
        ArrayList arrayList = recycler.a;
        ArrayList arrayList2 = recycler.f2313c;
        int size = arrayList2.size();
        for (int i6 = 0; i6 < size; i6++) {
            ((ViewHolder) arrayList2.get(i6)).clearOldPosition();
        }
        int size2 = arrayList.size();
        for (int i10 = 0; i10 < size2; i10++) {
            ((ViewHolder) arrayList.get(i10)).clearOldPosition();
        }
        ArrayList arrayList3 = recycler.f2312b;
        if (arrayList3 != null) {
            int size3 = arrayList3.size();
            for (int i11 = 0; i11 < size3; i11++) {
                ((ViewHolder) recycler.f2312b.get(i11)).clearOldPosition();
            }
        }
    }

    public void clearOnChildAttachStateChangeListeners() {
        List<OnChildAttachStateChangeListener> list = this.mOnChildAttachStateListeners;
        if (list != null) {
            list.clear();
        }
    }

    public void clearOnScrollListeners() {
        List<OnScrollListener> list = this.mScrollListeners;
        if (list != null) {
            list.clear();
        }
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollExtent() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollHorizontally()) {
            return this.mLayout.computeHorizontalScrollExtent(this.mState);
        }
        return 0;
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollOffset() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollHorizontally()) {
            return this.mLayout.computeHorizontalScrollOffset(this.mState);
        }
        return 0;
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollRange() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollHorizontally()) {
            return this.mLayout.computeHorizontalScrollRange(this.mState);
        }
        return 0;
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollExtent() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollVertically()) {
            return this.mLayout.computeVerticalScrollExtent(this.mState);
        }
        return 0;
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollOffset() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollVertically()) {
            return this.mLayout.computeVerticalScrollOffset(this.mState);
        }
        return 0;
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollRange() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null && layoutManager.canScrollVertically()) {
            return this.mLayout.computeVerticalScrollRange(this.mState);
        }
        return 0;
    }

    public void considerReleasingGlowsOnScroll(int i5, int i6) {
        boolean z5;
        EdgeEffect edgeEffect = this.mLeftGlow;
        if (edgeEffect == null || edgeEffect.isFinished() || i5 <= 0) {
            z5 = false;
        } else {
            this.mLeftGlow.onRelease();
            z5 = this.mLeftGlow.isFinished();
        }
        EdgeEffect edgeEffect2 = this.mRightGlow;
        if (edgeEffect2 != null && !edgeEffect2.isFinished() && i5 < 0) {
            this.mRightGlow.onRelease();
            z5 |= this.mRightGlow.isFinished();
        }
        EdgeEffect edgeEffect3 = this.mTopGlow;
        if (edgeEffect3 != null && !edgeEffect3.isFinished() && i6 > 0) {
            this.mTopGlow.onRelease();
            z5 |= this.mTopGlow.isFinished();
        }
        EdgeEffect edgeEffect4 = this.mBottomGlow;
        if (edgeEffect4 != null && !edgeEffect4.isFinished() && i6 < 0) {
            this.mBottomGlow.onRelease();
            z5 |= this.mBottomGlow.isFinished();
        }
        if (z5) {
            postInvalidateOnAnimation();
        }
    }

    public int consumeFlingInHorizontalStretch(int i5) {
        return c(i5, this.mLeftGlow, this.mRightGlow, getWidth());
    }

    public int consumeFlingInVerticalStretch(int i5) {
        return c(i5, this.mTopGlow, this.mBottomGlow, getHeight());
    }

    public void consumePendingUpdateOperations() {
        if (!this.mFirstLayoutComplete || this.mDataSetHasChangedAfterLayout) {
            Trace.beginSection(TRACE_ON_DATA_SET_CHANGE_LAYOUT_TAG);
            dispatchLayout();
            Trace.endSection();
            return;
        }
        if (this.mAdapterHelper.g()) {
            AdapterHelper adapterHelper = this.mAdapterHelper;
            int i5 = adapterHelper.f2255f;
            if ((i5 & 4) == 0 || (i5 & 11) != 0) {
                if (adapterHelper.g()) {
                    Trace.beginSection(TRACE_ON_DATA_SET_CHANGE_LAYOUT_TAG);
                    dispatchLayout();
                    Trace.endSection();
                    return;
                }
                return;
            }
            Trace.beginSection(TRACE_HANDLE_ADAPTER_UPDATES_TAG);
            startInterceptRequestLayout();
            onEnterLayoutOrScroll();
            this.mAdapterHelper.j();
            if (!this.mLayoutWasDefered) {
                int e9 = this.mChildHelper.e();
                int i6 = 0;
                while (true) {
                    if (i6 < e9) {
                        ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.d(i6));
                        if (childViewHolderInt != null && !childViewHolderInt.shouldIgnore() && childViewHolderInt.isUpdated()) {
                            dispatchLayout();
                            break;
                        }
                        i6++;
                    } else {
                        this.mAdapterHelper.b();
                        break;
                    }
                }
            }
            stopInterceptRequestLayout(true);
            onExitLayoutOrScroll();
            Trace.endSection();
        }
    }

    public final void d() {
        u1 u1Var;
        this.mState.a(1);
        fillRemainingScrollValues(this.mState);
        this.mState.f2334i = false;
        startInterceptRequestLayout();
        ViewInfoStore viewInfoStore = this.mViewInfoStore;
        viewInfoStore.a.clear();
        viewInfoStore.f2354b.a();
        onEnterLayoutOrScroll();
        k();
        View focusedChild = (this.mPreserveFocusAfterLayout && hasFocus() && this.mAdapter != null) ? getFocusedChild() : null;
        ViewHolder findContainingViewHolder = focusedChild != null ? findContainingViewHolder(focusedChild) : null;
        if (findContainingViewHolder == null) {
            State state = this.mState;
            state.f2336m = -1L;
            state.f2335l = -1;
            state.f2337n = -1;
        } else {
            this.mState.f2336m = this.mAdapter.hasStableIds() ? findContainingViewHolder.getItemId() : -1L;
            this.mState.f2335l = this.mDataSetHasChangedAfterLayout ? -1 : findContainingViewHolder.isRemoved() ? findContainingViewHolder.mOldPosition : findContainingViewHolder.getAbsoluteAdapterPosition();
            State state2 = this.mState;
            View view = findContainingViewHolder.itemView;
            int id2 = view.getId();
            while (!view.isFocused() && (view instanceof ViewGroup) && view.hasFocus()) {
                view = ((ViewGroup) view).getFocusedChild();
                if (view.getId() != -1) {
                    id2 = view.getId();
                }
            }
            state2.f2337n = id2;
        }
        State state3 = this.mState;
        state3.f2333h = state3.j && this.mItemsChanged;
        this.mItemsChanged = false;
        this.mItemsAddedOrRemoved = false;
        state3.f2332g = state3.k;
        state3.f2330e = this.mAdapter.getItemCount();
        g(this.mMinMaxLayoutPositions);
        if (this.mState.j) {
            int e9 = this.mChildHelper.e();
            for (int i5 = 0; i5 < e9; i5++) {
                ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.d(i5));
                if (!childViewHolderInt.shouldIgnore() && (!childViewHolderInt.isInvalid() || this.mAdapter.hasStableIds())) {
                    ItemAnimator.ItemHolderInfo recordPreLayoutInformation = this.mItemAnimator.recordPreLayoutInformation(this.mState, childViewHolderInt, ItemAnimator.buildAdapterChangeFlagsForAnimations(childViewHolderInt), childViewHolderInt.getUnmodifiedPayloads());
                    SimpleArrayMap simpleArrayMap = this.mViewInfoStore.a;
                    u1 u1Var2 = (u1) simpleArrayMap.get(childViewHolderInt);
                    if (u1Var2 == null) {
                        u1Var2 = u1.a();
                        simpleArrayMap.put(childViewHolderInt, u1Var2);
                    }
                    u1Var2.f2477b = recordPreLayoutInformation;
                    u1Var2.a |= 4;
                    if (this.mState.f2333h && childViewHolderInt.isUpdated() && !childViewHolderInt.isRemoved() && !childViewHolderInt.shouldIgnore() && !childViewHolderInt.isInvalid()) {
                        this.mViewInfoStore.f2354b.e(getChangedHolderKey(childViewHolderInt), childViewHolderInt);
                    }
                }
            }
        }
        if (this.mState.k) {
            saveOldPositions();
            State state4 = this.mState;
            boolean z5 = state4.f2331f;
            state4.f2331f = false;
            this.mLayout.onLayoutChildren(this.mRecycler, state4);
            this.mState.f2331f = z5;
            for (int i6 = 0; i6 < this.mChildHelper.e(); i6++) {
                ViewHolder childViewHolderInt2 = getChildViewHolderInt(this.mChildHelper.d(i6));
                if (!childViewHolderInt2.shouldIgnore() && ((u1Var = (u1) this.mViewInfoStore.a.get(childViewHolderInt2)) == null || (u1Var.a & 4) == 0)) {
                    int buildAdapterChangeFlagsForAnimations = ItemAnimator.buildAdapterChangeFlagsForAnimations(childViewHolderInt2);
                    boolean hasAnyOfTheFlags = childViewHolderInt2.hasAnyOfTheFlags(8192);
                    if (!hasAnyOfTheFlags) {
                        buildAdapterChangeFlagsForAnimations |= ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                    }
                    ItemAnimator.ItemHolderInfo recordPreLayoutInformation2 = this.mItemAnimator.recordPreLayoutInformation(this.mState, childViewHolderInt2, buildAdapterChangeFlagsForAnimations, childViewHolderInt2.getUnmodifiedPayloads());
                    if (hasAnyOfTheFlags) {
                        recordAnimationInfoIfBouncedHiddenView(childViewHolderInt2, recordPreLayoutInformation2);
                    } else {
                        SimpleArrayMap simpleArrayMap2 = this.mViewInfoStore.a;
                        u1 u1Var3 = (u1) simpleArrayMap2.get(childViewHolderInt2);
                        if (u1Var3 == null) {
                            u1Var3 = u1.a();
                            simpleArrayMap2.put(childViewHolderInt2, u1Var3);
                        }
                        u1Var3.a |= 2;
                        u1Var3.f2477b = recordPreLayoutInformation2;
                    }
                }
            }
            clearOldPositions();
        } else {
            clearOldPositions();
        }
        onExitLayoutOrScroll();
        stopInterceptRequestLayout(false);
        this.mState.f2329d = 2;
    }

    public void defaultOnMeasure(int i5, int i6) {
        int paddingRight = getPaddingRight() + getPaddingLeft();
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        setMeasuredDimension(LayoutManager.chooseSize(i5, paddingRight, getMinimumWidth()), LayoutManager.chooseSize(i6, getPaddingBottom() + getPaddingTop(), getMinimumHeight()));
    }

    public void dispatchChildAttached(View view) {
        ViewHolder childViewHolderInt = getChildViewHolderInt(view);
        onChildAttachedToWindow(view);
        Adapter adapter = this.mAdapter;
        if (adapter != null && childViewHolderInt != null) {
            adapter.onViewAttachedToWindow(childViewHolderInt);
        }
        List<OnChildAttachStateChangeListener> list = this.mOnChildAttachStateListeners;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.mOnChildAttachStateListeners.get(size).onChildViewAttachedToWindow(view);
            }
        }
    }

    public void dispatchChildDetached(View view) {
        ViewHolder childViewHolderInt = getChildViewHolderInt(view);
        onChildDetachedFromWindow(view);
        Adapter adapter = this.mAdapter;
        if (adapter != null && childViewHolderInt != null) {
            adapter.onViewDetachedFromWindow(childViewHolderInt);
        }
        List<OnChildAttachStateChangeListener> list = this.mOnChildAttachStateListeners;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.mOnChildAttachStateListeners.get(size).onChildViewDetachedFromWindow(view);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        if (super.dispatchKeyEvent(keyEvent)) {
            return true;
        }
        LayoutManager layoutManager = getLayoutManager();
        int i5 = 0;
        if (layoutManager == null) {
            return false;
        }
        if (layoutManager.canScrollVertically()) {
            int keyCode = keyEvent.getKeyCode();
            if (keyCode == 92 || keyCode == 93) {
                int measuredHeight = getMeasuredHeight();
                if (keyCode == 93) {
                    smoothScrollBy(0, measuredHeight, null, Integer.MIN_VALUE);
                } else {
                    smoothScrollBy(0, -measuredHeight, null, Integer.MIN_VALUE);
                }
                return true;
            }
            if (keyCode == 122 || keyCode == 123) {
                boolean isLayoutReversed = layoutManager.isLayoutReversed();
                if (keyCode == 122) {
                    if (isLayoutReversed) {
                        i5 = getAdapter().getItemCount();
                    }
                } else if (!isLayoutReversed) {
                    i5 = getAdapter().getItemCount();
                }
                smoothScrollToPosition(i5);
                return true;
            }
        } else if (layoutManager.canScrollHorizontally()) {
            int keyCode2 = keyEvent.getKeyCode();
            if (keyCode2 == 92 || keyCode2 == 93) {
                int measuredWidth = getMeasuredWidth();
                if (keyCode2 == 93) {
                    smoothScrollBy(measuredWidth, 0, null, Integer.MIN_VALUE);
                } else {
                    smoothScrollBy(-measuredWidth, 0, null, Integer.MIN_VALUE);
                }
                return true;
            }
            if (keyCode2 == 122 || keyCode2 == 123) {
                boolean isLayoutReversed2 = layoutManager.isLayoutReversed();
                if (keyCode2 == 122) {
                    if (isLayoutReversed2) {
                        i5 = getAdapter().getItemCount();
                    }
                } else if (!isLayoutReversed2) {
                    i5 = getAdapter().getItemCount();
                }
                smoothScrollToPosition(i5);
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:144:0x02e0, code lost:
    
        if (r15.mChildHelper.f2264c.contains(getFocusedChild()) == false) goto L189;
     */
    /* JADX WARN: Removed duplicated region for block: B:157:0x0361  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void dispatchLayout() {
        View findViewById;
        if (this.mAdapter == null) {
            Log.w(TAG, "No adapter attached; skipping layout");
            return;
        }
        if (this.mLayout == null) {
            Log.e(TAG, "No layout manager attached; skipping layout");
            return;
        }
        this.mState.f2334i = false;
        boolean z5 = this.mLastAutoMeasureSkippedDueToExact && !(this.mLastAutoMeasureNonExactMeasuredWidth == getWidth() && this.mLastAutoMeasureNonExactMeasuredHeight == getHeight());
        this.mLastAutoMeasureNonExactMeasuredWidth = 0;
        this.mLastAutoMeasureNonExactMeasuredHeight = 0;
        this.mLastAutoMeasureSkippedDueToExact = false;
        if (this.mState.f2329d == 1) {
            d();
            this.mLayout.setExactMeasureSpecsFrom(this);
            e();
        } else {
            AdapterHelper adapterHelper = this.mAdapterHelper;
            if ((adapterHelper.f2252c.isEmpty() || adapterHelper.f2251b.isEmpty()) && !z5 && this.mLayout.getWidth() == getWidth() && this.mLayout.getHeight() == getHeight()) {
                this.mLayout.setExactMeasureSpecsFrom(this);
            } else {
                this.mLayout.setExactMeasureSpecsFrom(this);
                e();
            }
        }
        this.mState.a(4);
        startInterceptRequestLayout();
        onEnterLayoutOrScroll();
        State state = this.mState;
        state.f2329d = 1;
        View view = null;
        if (state.j) {
            for (int e9 = this.mChildHelper.e() - 1; e9 >= 0; e9--) {
                ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.d(e9));
                if (!childViewHolderInt.shouldIgnore()) {
                    long changedHolderKey = getChangedHolderKey(childViewHolderInt);
                    ItemAnimator.ItemHolderInfo recordPostLayoutInformation = this.mItemAnimator.recordPostLayoutInformation(this.mState, childViewHolderInt);
                    ViewHolder viewHolder = (ViewHolder) this.mViewInfoStore.f2354b.b(changedHolderKey);
                    if (viewHolder == null || viewHolder.shouldIgnore()) {
                        this.mViewInfoStore.a(childViewHolderInt, recordPostLayoutInformation);
                    } else {
                        u1 u1Var = (u1) this.mViewInfoStore.a.get(viewHolder);
                        boolean z6 = (u1Var == null || (u1Var.a & 1) == 0) ? false : true;
                        u1 u1Var2 = (u1) this.mViewInfoStore.a.get(childViewHolderInt);
                        boolean z7 = (u1Var2 == null || (u1Var2.a & 1) == 0) ? false : true;
                        if (z6 && viewHolder == childViewHolderInt) {
                            this.mViewInfoStore.a(childViewHolderInt, recordPostLayoutInformation);
                        } else {
                            ItemAnimator.ItemHolderInfo b10 = this.mViewInfoStore.b(viewHolder, 4);
                            this.mViewInfoStore.a(childViewHolderInt, recordPostLayoutInformation);
                            ItemAnimator.ItemHolderInfo b11 = this.mViewInfoStore.b(childViewHolderInt, 8);
                            if (b10 == null) {
                                int e10 = this.mChildHelper.e();
                                for (int i5 = 0; i5 < e10; i5++) {
                                    ViewHolder childViewHolderInt2 = getChildViewHolderInt(this.mChildHelper.d(i5));
                                    if (childViewHolderInt2 != childViewHolderInt && getChangedHolderKey(childViewHolderInt2) == changedHolderKey) {
                                        Adapter adapter = this.mAdapter;
                                        if (adapter == null || !adapter.hasStableIds()) {
                                            StringBuilder sb2 = new StringBuilder("Two different ViewHolders have the same change ID. This might happen due to inconsistent Adapter update events or if the LayoutManager lays out the same View multiple times.\n ViewHolder 1:");
                                            sb2.append(childViewHolderInt2);
                                            sb2.append(" \n View Holder 2:");
                                            sb2.append(childViewHolderInt);
                                            throw new IllegalStateException(a3.e.h(this, sb2));
                                        }
                                        StringBuilder sb3 = new StringBuilder("Two different ViewHolders have the same stable ID. Stable IDs in your adapter MUST BE unique and SHOULD NOT change.\n ViewHolder 1:");
                                        sb3.append(childViewHolderInt2);
                                        sb3.append(" \n View Holder 2:");
                                        sb3.append(childViewHolderInt);
                                        throw new IllegalStateException(a3.e.h(this, sb3));
                                    }
                                }
                                Log.e(TAG, "Problem while matching changed view holders with the newones. The pre-layout information for the change holder " + viewHolder + " cannot be found but it is necessary for " + childViewHolderInt + exceptionLabel());
                            } else {
                                viewHolder.setIsRecyclable(false);
                                if (z6) {
                                    a(viewHolder);
                                }
                                if (viewHolder != childViewHolderInt) {
                                    if (z7) {
                                        a(childViewHolderInt);
                                    }
                                    viewHolder.mShadowedHolder = childViewHolderInt;
                                    a(viewHolder);
                                    this.mRecycler.n(viewHolder);
                                    childViewHolderInt.setIsRecyclable(false);
                                    childViewHolderInt.mShadowingHolder = viewHolder;
                                }
                                if (this.mItemAnimator.animateChange(viewHolder, childViewHolderInt, b10, b11)) {
                                    postAnimationRunner();
                                }
                            }
                        }
                    }
                }
            }
            ViewInfoStore viewInfoStore = this.mViewInfoStore;
            ViewInfoStore.ProcessCallback processCallback = this.mViewInfoProcessCallback;
            SimpleArrayMap simpleArrayMap = viewInfoStore.a;
            for (int i6 = simpleArrayMap.f1208i - 1; i6 >= 0; i6--) {
                ViewHolder viewHolder2 = (ViewHolder) simpleArrayMap.f(i6);
                u1 u1Var3 = (u1) simpleArrayMap.g(i6);
                int i10 = u1Var3.a;
                if ((i10 & 3) == 3) {
                    processCallback.a(viewHolder2);
                } else if ((i10 & 1) != 0) {
                    ItemAnimator.ItemHolderInfo itemHolderInfo = u1Var3.f2477b;
                    if (itemHolderInfo == null) {
                        processCallback.a(viewHolder2);
                    } else {
                        processCallback.c(viewHolder2, itemHolderInfo, u1Var3.f2478c);
                    }
                } else if ((i10 & 14) == 14) {
                    processCallback.b(viewHolder2, u1Var3.f2477b, u1Var3.f2478c);
                } else if ((i10 & 12) == 12) {
                    processCallback.d(viewHolder2, u1Var3.f2477b, u1Var3.f2478c);
                } else if ((i10 & 4) != 0) {
                    processCallback.c(viewHolder2, u1Var3.f2477b, null);
                } else if ((i10 & 8) != 0) {
                    processCallback.b(viewHolder2, u1Var3.f2477b, u1Var3.f2478c);
                }
                u1Var3.a = 0;
                u1Var3.f2477b = null;
                u1Var3.f2478c = null;
                u1.f2476d.release(u1Var3);
            }
        }
        this.mLayout.removeAndRecycleScrapInt(this.mRecycler);
        State state2 = this.mState;
        state2.f2327b = state2.f2330e;
        this.mDataSetHasChangedAfterLayout = false;
        this.mDispatchItemsChangedEvent = false;
        state2.j = false;
        state2.k = false;
        this.mLayout.mRequestedSimpleAnimations = false;
        ArrayList arrayList = this.mRecycler.f2312b;
        if (arrayList != null) {
            arrayList.clear();
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager.mPrefetchMaxObservedInInitialPrefetch) {
            layoutManager.mPrefetchMaxCountObserved = 0;
            layoutManager.mPrefetchMaxObservedInInitialPrefetch = false;
            this.mRecycler.o();
        }
        this.mLayout.onLayoutCompleted(this.mState);
        onExitLayoutOrScroll();
        stopInterceptRequestLayout(false);
        ViewInfoStore viewInfoStore2 = this.mViewInfoStore;
        viewInfoStore2.a.clear();
        viewInfoStore2.f2354b.a();
        int[] iArr = this.mMinMaxLayoutPositions;
        int i11 = iArr[0];
        int i12 = iArr[1];
        g(iArr);
        int[] iArr2 = this.mMinMaxLayoutPositions;
        if (iArr2[0] != i11 || iArr2[1] != i12) {
            dispatchOnScrolled(0, 0);
        }
        if (this.mPreserveFocusAfterLayout && this.mAdapter != null && hasFocus() && getDescendantFocusability() != 393216 && (getDescendantFocusability() != 131072 || !isFocused())) {
            if (!isFocused()) {
            }
            ViewHolder findViewHolderForItemId = (this.mState.f2336m == -1 || !this.mAdapter.hasStableIds()) ? null : findViewHolderForItemId(this.mState.f2336m);
            if (findViewHolderForItemId != null) {
                if (!this.mChildHelper.f2264c.contains(findViewHolderForItemId.itemView) && findViewHolderForItemId.itemView.hasFocusable()) {
                    view = findViewHolderForItemId.itemView;
                    if (view != null) {
                        int i13 = this.mState.f2337n;
                        if (i13 != -1 && (findViewById = view.findViewById(i13)) != null && findViewById.isFocusable()) {
                            view = findViewById;
                        }
                        view.requestFocus();
                    }
                }
            }
            if (this.mChildHelper.e() > 0) {
                State state3 = this.mState;
                int i14 = state3.f2335l;
                int i15 = i14 != -1 ? i14 : 0;
                int b12 = state3.b();
                for (int i16 = i15; i16 < b12; i16++) {
                    ViewHolder findViewHolderForAdapterPosition = findViewHolderForAdapterPosition(i16);
                    if (findViewHolderForAdapterPosition == null) {
                        break;
                    }
                    if (findViewHolderForAdapterPosition.itemView.hasFocusable()) {
                        view = findViewHolderForAdapterPosition.itemView;
                        break;
                    }
                }
                int min = Math.min(b12, i15) - 1;
                while (true) {
                    if (min < 0) {
                        break;
                    }
                    ViewHolder findViewHolderForAdapterPosition2 = findViewHolderForAdapterPosition(min);
                    if (findViewHolderForAdapterPosition2 == null) {
                        break;
                    }
                    if (findViewHolderForAdapterPosition2.itemView.hasFocusable()) {
                        view = findViewHolderForAdapterPosition2.itemView;
                        break;
                    }
                    min--;
                }
            }
            if (view != null) {
            }
        }
        State state4 = this.mState;
        state4.f2336m = -1L;
        state4.f2335l = -1;
        state4.f2337n = -1;
    }

    @Override // android.view.View
    public boolean dispatchNestedFling(float f2, float f10, boolean z5) {
        return getScrollingChildHelper().a(f2, f10, z5);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreFling(float f2, float f10) {
        return getScrollingChildHelper().b(f2, f10);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreScroll(int i5, int i6, int[] iArr, int[] iArr2) {
        return getScrollingChildHelper().c(i5, i6, iArr, iArr2, 0);
    }

    @Override // android.view.View
    public boolean dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr) {
        return getScrollingChildHelper().d(i5, i6, i10, i11, iArr, 0, null);
    }

    public void dispatchOnScrollStateChanged(int i5) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.onScrollStateChanged(i5);
        }
        onScrollStateChanged(i5);
        OnScrollListener onScrollListener = this.mScrollListener;
        if (onScrollListener != null) {
            onScrollListener.onScrollStateChanged(this, i5);
        }
        List<OnScrollListener> list = this.mScrollListeners;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.mScrollListeners.get(size).onScrollStateChanged(this, i5);
            }
        }
    }

    public void dispatchOnScrolled(int i5, int i6) {
        this.mDispatchScrollCounter++;
        int scrollX = getScrollX();
        int scrollY = getScrollY();
        onScrollChanged(scrollX, scrollY, scrollX - i5, scrollY - i6);
        onScrolled(i5, i6);
        OnScrollListener onScrollListener = this.mScrollListener;
        if (onScrollListener != null) {
            onScrollListener.onScrolled(this, i5, i6);
        }
        List<OnScrollListener> list = this.mScrollListeners;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.mScrollListeners.get(size).onScrolled(this, i5, i6);
            }
        }
        this.mDispatchScrollCounter--;
    }

    public void dispatchPendingImportantForAccessibilityChanges() {
        int i5;
        for (int size = this.mPendingAccessibilityImportanceChange.size() - 1; size >= 0; size--) {
            ViewHolder viewHolder = this.mPendingAccessibilityImportanceChange.get(size);
            if (viewHolder.itemView.getParent() == this && !viewHolder.shouldIgnore() && (i5 = viewHolder.mPendingAccessibilityState) != -1) {
                viewHolder.itemView.setImportantForAccessibility(i5);
                viewHolder.mPendingAccessibilityState = -1;
            }
        }
        this.mPendingAccessibilityImportanceChange.clear();
    }

    @Override // android.view.View
    public boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        onPopulateAccessibilityEvent(accessibilityEvent);
        return true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchRestoreInstanceState(SparseArray<Parcelable> sparseArray) {
        dispatchThawSelfOnly(sparseArray);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void dispatchSaveInstanceState(SparseArray<Parcelable> sparseArray) {
        dispatchFreezeSelfOnly(sparseArray);
    }

    @Override // android.view.View
    public void draw(@NonNull Canvas canvas) {
        boolean z5;
        super.draw(canvas);
        int size = this.mItemDecorations.size();
        boolean z6 = false;
        for (int i5 = 0; i5 < size; i5++) {
            this.mItemDecorations.get(i5).onDrawOver(canvas, this, this.mState);
        }
        EdgeEffect edgeEffect = this.mLeftGlow;
        if (edgeEffect == null || edgeEffect.isFinished()) {
            z5 = false;
        } else {
            int save = canvas.save();
            int paddingBottom = this.mClipToPadding ? getPaddingBottom() : 0;
            canvas.rotate(270.0f);
            canvas.translate((-getHeight()) + paddingBottom, DECELERATION_RATE);
            EdgeEffect edgeEffect2 = this.mLeftGlow;
            z5 = edgeEffect2 != null && edgeEffect2.draw(canvas);
            canvas.restoreToCount(save);
        }
        EdgeEffect edgeEffect3 = this.mTopGlow;
        if (edgeEffect3 != null && !edgeEffect3.isFinished()) {
            int save2 = canvas.save();
            if (this.mClipToPadding) {
                canvas.translate(getPaddingLeft(), getPaddingTop());
            }
            EdgeEffect edgeEffect4 = this.mTopGlow;
            z5 |= edgeEffect4 != null && edgeEffect4.draw(canvas);
            canvas.restoreToCount(save2);
        }
        EdgeEffect edgeEffect5 = this.mRightGlow;
        if (edgeEffect5 != null && !edgeEffect5.isFinished()) {
            int save3 = canvas.save();
            int width = getWidth();
            int paddingTop = this.mClipToPadding ? getPaddingTop() : 0;
            canvas.rotate(90.0f);
            canvas.translate(paddingTop, -width);
            EdgeEffect edgeEffect6 = this.mRightGlow;
            z5 |= edgeEffect6 != null && edgeEffect6.draw(canvas);
            canvas.restoreToCount(save3);
        }
        EdgeEffect edgeEffect7 = this.mBottomGlow;
        if (edgeEffect7 != null && !edgeEffect7.isFinished()) {
            int save4 = canvas.save();
            canvas.rotate(180.0f);
            if (this.mClipToPadding) {
                canvas.translate(getPaddingRight() + (-getWidth()), getPaddingBottom() + (-getHeight()));
            } else {
                canvas.translate(-getWidth(), -getHeight());
            }
            EdgeEffect edgeEffect8 = this.mBottomGlow;
            if (edgeEffect8 != null && edgeEffect8.draw(canvas)) {
                z6 = true;
            }
            z5 |= z6;
            canvas.restoreToCount(save4);
        }
        if ((z5 || this.mItemAnimator == null || this.mItemDecorations.size() <= 0 || !this.mItemAnimator.isRunning()) ? z5 : true) {
            postInvalidateOnAnimation();
        }
    }

    @Override // android.view.ViewGroup
    public boolean drawChild(@NonNull Canvas canvas, View view, long j) {
        return super.drawChild(canvas, view, j);
    }

    public final void e() {
        startInterceptRequestLayout();
        onEnterLayoutOrScroll();
        this.mState.a(6);
        this.mAdapterHelper.c();
        this.mState.f2330e = this.mAdapter.getItemCount();
        this.mState.f2328c = 0;
        if (this.mPendingSavedState != null && this.mAdapter.canRestoreState()) {
            Parcelable parcelable = this.mPendingSavedState.f2320i;
            if (parcelable != null) {
                this.mLayout.onRestoreInstanceState(parcelable);
            }
            this.mPendingSavedState = null;
        }
        State state = this.mState;
        state.f2332g = false;
        this.mLayout.onLayoutChildren(this.mRecycler, state);
        State state2 = this.mState;
        state2.f2331f = false;
        state2.j = state2.j && this.mItemAnimator != null;
        state2.f2329d = 4;
        onExitLayoutOrScroll();
        stopInterceptRequestLayout(false);
    }

    public void ensureBottomGlow() {
        if (this.mBottomGlow != null) {
            return;
        }
        EdgeEffect a = this.mEdgeEffectFactory.a(this);
        this.mBottomGlow = a;
        if (this.mClipToPadding) {
            a.setSize((getMeasuredWidth() - getPaddingLeft()) - getPaddingRight(), (getMeasuredHeight() - getPaddingTop()) - getPaddingBottom());
        } else {
            a.setSize(getMeasuredWidth(), getMeasuredHeight());
        }
    }

    public void ensureLeftGlow() {
        if (this.mLeftGlow != null) {
            return;
        }
        EdgeEffect a = this.mEdgeEffectFactory.a(this);
        this.mLeftGlow = a;
        if (this.mClipToPadding) {
            a.setSize((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom(), (getMeasuredWidth() - getPaddingLeft()) - getPaddingRight());
        } else {
            a.setSize(getMeasuredHeight(), getMeasuredWidth());
        }
    }

    public void ensureRightGlow() {
        if (this.mRightGlow != null) {
            return;
        }
        EdgeEffect a = this.mEdgeEffectFactory.a(this);
        this.mRightGlow = a;
        if (this.mClipToPadding) {
            a.setSize((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom(), (getMeasuredWidth() - getPaddingLeft()) - getPaddingRight());
        } else {
            a.setSize(getMeasuredHeight(), getMeasuredWidth());
        }
    }

    public void ensureTopGlow() {
        if (this.mTopGlow != null) {
            return;
        }
        EdgeEffect a = this.mEdgeEffectFactory.a(this);
        this.mTopGlow = a;
        if (this.mClipToPadding) {
            a.setSize((getMeasuredWidth() - getPaddingLeft()) - getPaddingRight(), (getMeasuredHeight() - getPaddingTop()) - getPaddingBottom());
        } else {
            a.setSize(getMeasuredWidth(), getMeasuredHeight());
        }
    }

    public String exceptionLabel() {
        return " " + super.toString() + ", adapter:" + this.mAdapter + ", layout:" + this.mLayout + ", context:" + getContext();
    }

    public final boolean f(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        int size = this.mOnItemTouchListeners.size();
        for (int i5 = 0; i5 < size; i5++) {
            OnItemTouchListener onItemTouchListener = this.mOnItemTouchListeners.get(i5);
            if (onItemTouchListener.onInterceptTouchEvent(this, motionEvent) && action != 3) {
                this.mInterceptingOnItemTouchListener = onItemTouchListener;
                return true;
            }
        }
        return false;
    }

    public final void fillRemainingScrollValues(State state) {
        if (getScrollState() != 2) {
            state.getClass();
            return;
        }
        OverScroller overScroller = this.mViewFlinger.f2340i;
        overScroller.getFinalX();
        overScroller.getCurrX();
        state.getClass();
        overScroller.getFinalY();
        overScroller.getCurrY();
    }

    public View findChildViewUnder(float f2, float f10) {
        for (int e9 = this.mChildHelper.e() - 1; e9 >= 0; e9--) {
            View d6 = this.mChildHelper.d(e9);
            float translationX = d6.getTranslationX();
            float translationY = d6.getTranslationY();
            if (f2 >= d6.getLeft() + translationX && f2 <= d6.getRight() + translationX && f10 >= d6.getTop() + translationY && f10 <= d6.getBottom() + translationY) {
                return d6;
            }
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0016, code lost:
    
        return r3;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public View findContainingItemView(@NonNull View view) {
        ViewParent parent = view.getParent();
        while (parent != null && parent != this && (parent instanceof View)) {
            view = parent;
            parent = view.getParent();
        }
        return null;
    }

    public ViewHolder findContainingViewHolder(@NonNull View view) {
        View findContainingItemView = findContainingItemView(view);
        if (findContainingItemView == null) {
            return null;
        }
        return getChildViewHolder(findContainingItemView);
    }

    public ViewHolder findViewHolderForAdapterPosition(int i5) {
        ViewHolder viewHolder = null;
        if (this.mDataSetHasChangedAfterLayout) {
            return null;
        }
        int h6 = this.mChildHelper.h();
        for (int i6 = 0; i6 < h6; i6++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i6));
            if (childViewHolderInt != null && !childViewHolderInt.isRemoved() && getAdapterPositionInRecyclerView(childViewHolderInt) == i5) {
                ChildHelper childHelper = this.mChildHelper;
                if (!childHelper.f2264c.contains(childViewHolderInt.itemView)) {
                    return childViewHolderInt;
                }
                viewHolder = childViewHolderInt;
            }
        }
        return viewHolder;
    }

    public ViewHolder findViewHolderForItemId(long j) {
        Adapter adapter = this.mAdapter;
        ViewHolder viewHolder = null;
        if (adapter != null && adapter.hasStableIds()) {
            int h6 = this.mChildHelper.h();
            for (int i5 = 0; i5 < h6; i5++) {
                ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i5));
                if (childViewHolderInt != null && !childViewHolderInt.isRemoved() && childViewHolderInt.getItemId() == j) {
                    ChildHelper childHelper = this.mChildHelper;
                    if (!childHelper.f2264c.contains(childViewHolderInt.itemView)) {
                        return childViewHolderInt;
                    }
                    viewHolder = childViewHolderInt;
                }
            }
        }
        return viewHolder;
    }

    public ViewHolder findViewHolderForLayoutPosition(int i5) {
        return findViewHolderForPosition(i5, false);
    }

    @Deprecated
    public ViewHolder findViewHolderForPosition(int i5) {
        return findViewHolderForPosition(i5, false);
    }

    public boolean fling(int i5, int i6) {
        return h(i5, i6, this.mMinFlingVelocity, this.mMaxFlingVelocity);
    }

    public boolean flingNoThresholdCheck(int i5, int i6) {
        return h(i5, i6, 0, Integer.MAX_VALUE);
    }

    /* JADX WARN: Code restructure failed: missing block: B:101:0x0189, code lost:
    
        if (r5 > 0) goto L139;
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x018c, code lost:
    
        if (r11 < 0) goto L139;
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x018f, code lost:
    
        if (r5 < 0) goto L139;
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x0197, code lost:
    
        if ((r5 * r6) <= 0) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x019f, code lost:
    
        if ((r5 * r6) >= 0) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x0170, code lost:
    
        if (r11 > 0) goto L139;
     */
    /* JADX WARN: Removed duplicated region for block: B:30:0x005f  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0074  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x006d  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0079  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x01a3 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x01a4  */
    @Override // android.view.ViewGroup, android.view.ViewParent
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public View focusSearch(View view, int i5) {
        View view2;
        int i6;
        char c6;
        boolean z5;
        View onInterceptFocusSearch = this.mLayout.onInterceptFocusSearch(view, i5);
        if (onInterceptFocusSearch != null) {
            return onInterceptFocusSearch;
        }
        boolean z6 = true;
        boolean z7 = (this.mAdapter == null || this.mLayout == null || isComputingLayout() || this.mLayoutSuppressed) ? false : true;
        FocusFinder focusFinder = FocusFinder.getInstance();
        if (z7 && (i5 == 2 || i5 == 1)) {
            if (this.mLayout.canScrollVertically()) {
                if (focusFinder.findNextFocus(this, view, i5 == 2 ? 130 : 33) == null) {
                    z5 = true;
                    if (!z5 && this.mLayout.canScrollHorizontally()) {
                        z5 = focusFinder.findNextFocus(this, view, !((this.mLayout.getLayoutDirection() != 1) ^ (i5 != 2)) ? 66 : 17) != null;
                    }
                    if (z5) {
                        consumePendingUpdateOperations();
                        if (findContainingItemView(view) == null) {
                            return null;
                        }
                        startInterceptRequestLayout();
                        this.mLayout.onFocusSearchFailed(view, i5, this.mRecycler, this.mState);
                        stopInterceptRequestLayout(false);
                    }
                    view2 = focusFinder.findNextFocus(this, view, i5);
                }
            }
            z5 = false;
            if (!z5) {
                if (focusFinder.findNextFocus(this, view, !((this.mLayout.getLayoutDirection() != 1) ^ (i5 != 2)) ? 66 : 17) != null) {
                }
            }
            if (z5) {
            }
            view2 = focusFinder.findNextFocus(this, view, i5);
        } else {
            View findNextFocus = focusFinder.findNextFocus(this, view, i5);
            if (findNextFocus == null && z7) {
                consumePendingUpdateOperations();
                if (findContainingItemView(view) == null) {
                    return null;
                }
                startInterceptRequestLayout();
                view2 = this.mLayout.onFocusSearchFailed(view, i5, this.mRecycler, this.mState);
                stopInterceptRequestLayout(false);
            } else {
                view2 = findNextFocus;
            }
        }
        if (view2 != null && !view2.hasFocusable()) {
            if (getFocusedChild() == null) {
                return super.focusSearch(view, i5);
            }
            o(view2, null);
            return view;
        }
        if (view2 != null && view2 != this && view2 != view) {
            if (findContainingItemView(view2) == null) {
                z6 = false;
            } else if (view != null && findContainingItemView(view) != null) {
                this.mTempRect.set(0, 0, view.getWidth(), view.getHeight());
                this.mTempRect2.set(0, 0, view2.getWidth(), view2.getHeight());
                offsetDescendantRectToMyCoords(view, this.mTempRect);
                offsetDescendantRectToMyCoords(view2, this.mTempRect2);
                int i10 = this.mLayout.getLayoutDirection() == 1 ? -1 : 1;
                Rect rect = this.mTempRect;
                int i11 = rect.left;
                Rect rect2 = this.mTempRect2;
                int i12 = rect2.left;
                if ((i11 < i12 || rect.right <= i12) && rect.right < rect2.right) {
                    i6 = 1;
                } else {
                    int i13 = rect.right;
                    int i14 = rect2.right;
                    i6 = ((i13 > i14 || i11 >= i14) && i11 > i12) ? -1 : 0;
                }
                int i15 = rect.top;
                int i16 = rect2.top;
                if ((i15 < i16 || rect.bottom <= i16) && rect.bottom < rect2.bottom) {
                    c6 = 1;
                } else {
                    int i17 = rect.bottom;
                    int i18 = rect2.bottom;
                    c6 = ((i17 > i18 || i15 >= i18) && i15 > i16) ? (char) 65535 : (char) 0;
                }
                if (i5 != 1) {
                    if (i5 != 2) {
                        if (i5 != 17) {
                            if (i5 != 33) {
                                if (i5 != 66) {
                                    if (i5 != 130) {
                                        StringBuilder sb2 = new StringBuilder("Invalid direction: ");
                                        sb2.append(i5);
                                        throw new IllegalArgumentException(a3.e.h(this, sb2));
                                    }
                                }
                            }
                        }
                    } else if (c6 <= 0) {
                        if (c6 == 0) {
                        }
                    }
                } else if (c6 >= 0) {
                    if (c6 == 0) {
                    }
                }
            }
            return !z6 ? view2 : super.focusSearch(view, i5);
        }
        z6 = false;
        if (!z6) {
        }
    }

    public final void g(int[] iArr) {
        int e9 = this.mChildHelper.e();
        if (e9 == 0) {
            iArr[0] = -1;
            iArr[1] = -1;
            return;
        }
        int i5 = Integer.MAX_VALUE;
        int i6 = Integer.MIN_VALUE;
        for (int i10 = 0; i10 < e9; i10++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.d(i10));
            if (!childViewHolderInt.shouldIgnore()) {
                int layoutPosition = childViewHolderInt.getLayoutPosition();
                if (layoutPosition < i5) {
                    i5 = layoutPosition;
                }
                if (layoutPosition > i6) {
                    i6 = layoutPosition;
                }
            }
        }
        iArr[0] = i5;
        iArr[1] = i6;
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateDefaultLayoutParams() {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            return layoutManager.generateDefaultLayoutParams();
        }
        throw new IllegalStateException(a3.e.h(this, new StringBuilder("RecyclerView has no LayoutManager")));
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            return layoutManager.generateLayoutParams(getContext(), attributeSet);
        }
        throw new IllegalStateException(a3.e.h(this, new StringBuilder("RecyclerView has no LayoutManager")));
    }

    @Override // android.view.ViewGroup, android.view.View
    public CharSequence getAccessibilityClassName() {
        return "androidx.recyclerview.widget.RecyclerView";
    }

    public Adapter getAdapter() {
        return this.mAdapter;
    }

    public int getAdapterPositionInRecyclerView(ViewHolder viewHolder) {
        if (viewHolder.hasAnyOfTheFlags(524) || !viewHolder.isBound()) {
            return -1;
        }
        AdapterHelper adapterHelper = this.mAdapterHelper;
        int i5 = viewHolder.mPosition;
        ArrayList arrayList = adapterHelper.f2251b;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            a aVar = (a) arrayList.get(i6);
            int i10 = aVar.a;
            if (i10 != 1) {
                if (i10 == 2) {
                    int i11 = aVar.f2355b;
                    if (i11 <= i5) {
                        int i12 = aVar.f2357d;
                        if (i11 + i12 > i5) {
                            return -1;
                        }
                        i5 -= i12;
                    } else {
                        continue;
                    }
                } else if (i10 == 8) {
                    int i13 = aVar.f2355b;
                    if (i13 == i5) {
                        i5 = aVar.f2357d;
                    } else {
                        if (i13 < i5) {
                            i5--;
                        }
                        if (aVar.f2357d <= i5) {
                            i5++;
                        }
                    }
                }
            } else if (aVar.f2355b <= i5) {
                i5 += aVar.f2357d;
            }
        }
        return i5;
    }

    @Override // android.view.View
    public int getBaseline() {
        LayoutManager layoutManager = this.mLayout;
        return layoutManager != null ? layoutManager.getBaseline() : super.getBaseline();
    }

    public long getChangedHolderKey(ViewHolder viewHolder) {
        return this.mAdapter.hasStableIds() ? viewHolder.getItemId() : viewHolder.mPosition;
    }

    public int getChildAdapterPosition(@NonNull View view) {
        ViewHolder childViewHolderInt = getChildViewHolderInt(view);
        if (childViewHolderInt != null) {
            return childViewHolderInt.getAbsoluteAdapterPosition();
        }
        return -1;
    }

    @Override // android.view.ViewGroup
    public int getChildDrawingOrder(int i5, int i6) {
        ChildDrawingOrderCallback childDrawingOrderCallback = this.mChildDrawingOrderCallback;
        return childDrawingOrderCallback == null ? super.getChildDrawingOrder(i5, i6) : childDrawingOrderCallback.onGetChildDrawingOrder(i5, i6);
    }

    public long getChildItemId(@NonNull View view) {
        ViewHolder childViewHolderInt;
        Adapter adapter = this.mAdapter;
        if (adapter == null || !adapter.hasStableIds() || (childViewHolderInt = getChildViewHolderInt(view)) == null) {
            return -1L;
        }
        return childViewHolderInt.getItemId();
    }

    public int getChildLayoutPosition(@NonNull View view) {
        ViewHolder childViewHolderInt = getChildViewHolderInt(view);
        if (childViewHolderInt != null) {
            return childViewHolderInt.getLayoutPosition();
        }
        return -1;
    }

    @Deprecated
    public int getChildPosition(@NonNull View view) {
        return getChildAdapterPosition(view);
    }

    public ViewHolder getChildViewHolder(@NonNull View view) {
        ViewParent parent = view.getParent();
        if (parent == null || parent == this) {
            return getChildViewHolderInt(view);
        }
        throw new IllegalArgumentException("View " + view + " is not a direct child of " + this);
    }

    @Override // android.view.ViewGroup
    public boolean getClipToPadding() {
        return this.mClipToPadding;
    }

    public RecyclerViewAccessibilityDelegate getCompatAccessibilityDelegate() {
        return this.mAccessibilityDelegate;
    }

    public void getDecoratedBoundsWithMargins(@NonNull View view, @NonNull Rect rect) {
        getDecoratedBoundsWithMarginsInt(view, rect);
    }

    @NonNull
    public EdgeEffectFactory getEdgeEffectFactory() {
        return this.mEdgeEffectFactory;
    }

    public ItemAnimator getItemAnimator() {
        return this.mItemAnimator;
    }

    public Rect getItemDecorInsetsForChild(View view) {
        LayoutParams layoutParams = (LayoutParams) view.getLayoutParams();
        boolean z5 = layoutParams.f2310i;
        Rect rect = layoutParams.f2309e;
        if (!z5 || (this.mState.f2332g && (layoutParams.f2308d.isUpdated() || layoutParams.f2308d.isInvalid()))) {
            return rect;
        }
        rect.set(0, 0, 0, 0);
        int size = this.mItemDecorations.size();
        for (int i5 = 0; i5 < size; i5++) {
            this.mTempRect.set(0, 0, 0, 0);
            this.mItemDecorations.get(i5).getItemOffsets(this.mTempRect, view, this, this.mState);
            int i6 = rect.left;
            Rect rect2 = this.mTempRect;
            rect.left = i6 + rect2.left;
            rect.top += rect2.top;
            rect.right += rect2.right;
            rect.bottom += rect2.bottom;
        }
        layoutParams.f2310i = false;
        return rect;
    }

    @NonNull
    public ItemDecoration getItemDecorationAt(int i5) {
        int itemDecorationCount = getItemDecorationCount();
        if (i5 >= 0 && i5 < itemDecorationCount) {
            return this.mItemDecorations.get(i5);
        }
        throw new IndexOutOfBoundsException(i5 + " is an invalid index for size " + itemDecorationCount);
    }

    public int getItemDecorationCount() {
        return this.mItemDecorations.size();
    }

    public LayoutManager getLayoutManager() {
        return this.mLayout;
    }

    public int getMaxFlingVelocity() {
        return this.mMaxFlingVelocity;
    }

    public int getMinFlingVelocity() {
        return this.mMinFlingVelocity;
    }

    public long getNanoTime() {
        if (ALLOW_THREAD_GAP_WORK) {
            return System.nanoTime();
        }
        return 0L;
    }

    public OnFlingListener getOnFlingListener() {
        return this.mOnFlingListener;
    }

    public boolean getPreserveFocusAfterLayout() {
        return this.mPreserveFocusAfterLayout;
    }

    @NonNull
    public RecycledViewPool getRecycledViewPool() {
        return this.mRecycler.d();
    }

    public int getScrollState() {
        return this.mScrollState;
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00bf A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00dc A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00eb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean h(int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        float f2;
        float f10;
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot fling without a LayoutManager set. Call setLayoutManager with a non-null argument.");
            return false;
        }
        if (!this.mLayoutSuppressed) {
            boolean canScrollHorizontally = layoutManager.canScrollHorizontally();
            boolean canScrollVertically = this.mLayout.canScrollVertically();
            if (!canScrollHorizontally || Math.abs(i5) < i10) {
                i5 = 0;
            }
            if (!canScrollVertically || Math.abs(i6) < i10) {
                i6 = 0;
            }
            if (i5 != 0 || i6 != 0) {
                if (i5 != 0) {
                    EdgeEffect edgeEffect = this.mLeftGlow;
                    if (edgeEffect == null || zo.c0.w(edgeEffect) == DECELERATION_RATE) {
                        EdgeEffect edgeEffect2 = this.mRightGlow;
                        if (edgeEffect2 != null && zo.c0.w(edgeEffect2) != DECELERATION_RATE) {
                            if (q(this.mRightGlow, i5, getWidth())) {
                                this.mRightGlow.onAbsorb(i5);
                                i5 = 0;
                            }
                            i12 = i5;
                            i5 = 0;
                        }
                    } else {
                        int i14 = -i5;
                        if (q(this.mLeftGlow, i14, getWidth())) {
                            this.mLeftGlow.onAbsorb(i14);
                            i5 = 0;
                        }
                        i12 = i5;
                        i5 = 0;
                    }
                    if (i6 != 0) {
                        EdgeEffect edgeEffect3 = this.mTopGlow;
                        if (edgeEffect3 == null || zo.c0.w(edgeEffect3) == DECELERATION_RATE) {
                            EdgeEffect edgeEffect4 = this.mBottomGlow;
                            if (edgeEffect4 != null && zo.c0.w(edgeEffect4) != DECELERATION_RATE) {
                                if (q(this.mBottomGlow, i6, getHeight())) {
                                    this.mBottomGlow.onAbsorb(i6);
                                    i6 = 0;
                                }
                                i13 = 0;
                            }
                        } else {
                            int i15 = -i6;
                            if (q(this.mTopGlow, i15, getHeight())) {
                                this.mTopGlow.onAbsorb(i15);
                                i6 = 0;
                            }
                            i13 = 0;
                        }
                        if (i12 == 0 || i6 != 0) {
                            int i16 = -i11;
                            i12 = Math.max(i16, Math.min(i12, i11));
                            i6 = Math.max(i16, Math.min(i6, i11));
                            r(1);
                            this.mViewFlinger.a(i12, i6);
                        }
                        if (i5 == 0 || i13 != 0) {
                            f2 = i5;
                            f10 = i13;
                            if (!dispatchNestedPreFling(f2, f10)) {
                                boolean z5 = canScrollHorizontally || canScrollVertically;
                                dispatchNestedFling(f2, f10, z5);
                                OnFlingListener onFlingListener = this.mOnFlingListener;
                                if (onFlingListener == null || !onFlingListener.onFling(i5, i13)) {
                                    if (z5) {
                                        r(1);
                                        int i17 = -i11;
                                        this.mViewFlinger.a(Math.max(i17, Math.min(i5, i11)), Math.max(i17, Math.min(i13, i11)));
                                        return true;
                                    }
                                }
                                return true;
                            }
                        } else if (i12 != 0 || i6 != 0) {
                            return true;
                        }
                    }
                    i13 = i6;
                    i6 = 0;
                    if (i12 == 0) {
                    }
                    int i162 = -i11;
                    i12 = Math.max(i162, Math.min(i12, i11));
                    i6 = Math.max(i162, Math.min(i6, i11));
                    r(1);
                    this.mViewFlinger.a(i12, i6);
                    if (i5 == 0) {
                    }
                    f2 = i5;
                    f10 = i13;
                    if (!dispatchNestedPreFling(f2, f10)) {
                    }
                }
                i12 = 0;
                if (i6 != 0) {
                }
                i13 = i6;
                i6 = 0;
                if (i12 == 0) {
                }
                int i1622 = -i11;
                i12 = Math.max(i1622, Math.min(i12, i11));
                i6 = Math.max(i1622, Math.min(i6, i11));
                r(1);
                this.mViewFlinger.a(i12, i6);
                if (i5 == 0) {
                }
                f2 = i5;
                f10 = i13;
                if (!dispatchNestedPreFling(f2, f10)) {
                }
            }
        }
        return false;
    }

    public boolean hasFixedSize() {
        return this.mHasFixedSize;
    }

    @Override // android.view.View
    public boolean hasNestedScrollingParent() {
        return getScrollingChildHelper().f(0);
    }

    public boolean hasPendingAdapterUpdates() {
        return !this.mFirstLayoutComplete || this.mDataSetHasChangedAfterLayout || this.mAdapterHelper.g();
    }

    public final void i(int i5, MotionEvent motionEvent, int i6) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot scroll without a LayoutManager set. Call setLayoutManager with a non-null argument.");
            return;
        }
        if (this.mLayoutSuppressed) {
            return;
        }
        int[] iArr = this.mReusableIntPair;
        iArr[0] = 0;
        iArr[1] = 0;
        boolean canScrollHorizontally = layoutManager.canScrollHorizontally();
        boolean canScrollVertically = this.mLayout.canScrollVertically();
        int i10 = canScrollVertically ? (canScrollHorizontally ? 1 : 0) | 2 : canScrollHorizontally ? 1 : 0;
        float height = motionEvent == null ? getHeight() / 2.0f : motionEvent.getY();
        float width = motionEvent == null ? getWidth() / 2.0f : motionEvent.getX();
        int m5 = i5 - m(height, i5);
        int n6 = i6 - n(width, i6);
        startNestedScroll(i10, 1);
        if (dispatchNestedPreScroll(canScrollHorizontally ? m5 : 0, canScrollVertically ? n6 : 0, this.mReusableIntPair, this.mScrollOffset, 1)) {
            int[] iArr2 = this.mReusableIntPair;
            m5 -= iArr2[0];
            n6 -= iArr2[1];
        }
        scrollByInternal(canScrollHorizontally ? m5 : 0, canScrollVertically ? n6 : 0, motionEvent, 1);
        GapWorker gapWorker = this.mGapWorker;
        if (gapWorker != null && (m5 != 0 || n6 != 0)) {
            gapWorker.a(this, m5, n6);
        }
        stopNestedScroll(1);
    }

    public void initAdapterManager() {
        this.mAdapterHelper = new AdapterHelper(new a1(this));
    }

    public void initFastScroller(StateListDrawable stateListDrawable, Drawable drawable, StateListDrawable stateListDrawable2, Drawable drawable2) {
        if (stateListDrawable == null || drawable == null || stateListDrawable2 == null || drawable2 == null) {
            throw new IllegalArgumentException(a3.e.h(this, new StringBuilder("Trying to set fast scroller without both required drawables.")));
        }
        Resources resources = getContext().getResources();
        new c0(this, stateListDrawable, drawable, stateListDrawable2, drawable2, resources.getDimensionPixelSize(com.discord.R.dimen.fastscroll_default_thickness), resources.getDimensionPixelSize(com.discord.R.dimen.fastscroll_minimum_range), resources.getDimensionPixelOffset(com.discord.R.dimen.fastscroll_margin));
    }

    public void invalidateGlows() {
        this.mBottomGlow = null;
        this.mTopGlow = null;
        this.mRightGlow = null;
        this.mLeftGlow = null;
    }

    public void invalidateItemDecorations() {
        if (this.mItemDecorations.size() == 0) {
            return;
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.assertNotInLayoutOrScroll("Cannot invalidate item decorations during a scroll or layout");
        }
        markItemDecorInsetsDirty();
        requestLayout();
    }

    public boolean isAccessibilityEnabled() {
        AccessibilityManager accessibilityManager = this.mAccessibilityManager;
        return accessibilityManager != null && accessibilityManager.isEnabled();
    }

    public boolean isAnimating() {
        ItemAnimator itemAnimator = this.mItemAnimator;
        return itemAnimator != null && itemAnimator.isRunning();
    }

    @Override // android.view.View
    public boolean isAttachedToWindow() {
        return this.mIsAttached;
    }

    public boolean isComputingLayout() {
        return this.mLayoutOrScrollCounter > 0;
    }

    @Deprecated
    public boolean isLayoutFrozen() {
        return isLayoutSuppressed();
    }

    @Override // android.view.ViewGroup
    public final boolean isLayoutSuppressed() {
        return this.mLayoutSuppressed;
    }

    @Override // android.view.View
    public boolean isNestedScrollingEnabled() {
        return getScrollingChildHelper().f1544d;
    }

    public final void j(MotionEvent motionEvent) {
        int actionIndex = motionEvent.getActionIndex();
        if (motionEvent.getPointerId(actionIndex) == this.mScrollPointerId) {
            int i5 = actionIndex == 0 ? 1 : 0;
            this.mScrollPointerId = motionEvent.getPointerId(i5);
            int x5 = (int) (motionEvent.getX(i5) + 0.5f);
            this.mLastTouchX = x5;
            this.mInitialTouchX = x5;
            int y5 = (int) (motionEvent.getY(i5) + 0.5f);
            this.mLastTouchY = y5;
            this.mInitialTouchY = y5;
        }
    }

    public void jumpToPositionForSmoothScroller(int i5) {
        if (this.mLayout == null) {
            return;
        }
        setScrollState(2);
        this.mLayout.scrollToPosition(i5);
        awakenScrollBars();
    }

    public final void k() {
        boolean z5;
        boolean z6 = false;
        if (this.mDataSetHasChangedAfterLayout) {
            AdapterHelper adapterHelper = this.mAdapterHelper;
            adapterHelper.k(adapterHelper.f2251b);
            adapterHelper.k(adapterHelper.f2252c);
            adapterHelper.f2255f = 0;
            if (this.mDispatchItemsChangedEvent) {
                this.mLayout.onItemsChanged(this);
            }
        }
        if (this.mItemAnimator == null || !this.mLayout.supportsPredictiveItemAnimations()) {
            this.mAdapterHelper.c();
        } else {
            this.mAdapterHelper.j();
        }
        boolean z7 = this.mItemsAddedOrRemoved || this.mItemsChanged;
        this.mState.j = this.mFirstLayoutComplete && this.mItemAnimator != null && ((z5 = this.mDataSetHasChangedAfterLayout) || z7 || this.mLayout.mRequestedSimpleAnimations) && (!z5 || this.mAdapter.hasStableIds());
        State state = this.mState;
        if (state.j && z7 && !this.mDataSetHasChangedAfterLayout && this.mItemAnimator != null && this.mLayout.supportsPredictiveItemAnimations()) {
            z6 = true;
        }
        state.k = z6;
    }

    public final void l() {
        boolean z5;
        EdgeEffect edgeEffect = this.mLeftGlow;
        if (edgeEffect != null) {
            edgeEffect.onRelease();
            z5 = this.mLeftGlow.isFinished();
        } else {
            z5 = false;
        }
        EdgeEffect edgeEffect2 = this.mTopGlow;
        if (edgeEffect2 != null) {
            edgeEffect2.onRelease();
            z5 |= this.mTopGlow.isFinished();
        }
        EdgeEffect edgeEffect3 = this.mRightGlow;
        if (edgeEffect3 != null) {
            edgeEffect3.onRelease();
            z5 |= this.mRightGlow.isFinished();
        }
        EdgeEffect edgeEffect4 = this.mBottomGlow;
        if (edgeEffect4 != null) {
            edgeEffect4.onRelease();
            z5 |= this.mBottomGlow.isFinished();
        }
        if (z5) {
            postInvalidateOnAnimation();
        }
    }

    public final int m(float f2, int i5) {
        float height = f2 / getHeight();
        float width = i5 / getWidth();
        EdgeEffect edgeEffect = this.mLeftGlow;
        float f10 = DECELERATION_RATE;
        if (edgeEffect == null || zo.c0.w(edgeEffect) == DECELERATION_RATE) {
            EdgeEffect edgeEffect2 = this.mRightGlow;
            if (edgeEffect2 != null && zo.c0.w(edgeEffect2) != DECELERATION_RATE) {
                if (canScrollHorizontally(1)) {
                    this.mRightGlow.onRelease();
                } else {
                    float E = zo.c0.E(this.mRightGlow, width, height);
                    if (zo.c0.w(this.mRightGlow) == DECELERATION_RATE) {
                        this.mRightGlow.onRelease();
                    }
                    f10 = E;
                }
                invalidate();
            }
        } else {
            if (canScrollHorizontally(-1)) {
                this.mLeftGlow.onRelease();
            } else {
                float f11 = -zo.c0.E(this.mLeftGlow, -width, 1.0f - height);
                if (zo.c0.w(this.mLeftGlow) == DECELERATION_RATE) {
                    this.mLeftGlow.onRelease();
                }
                f10 = f11;
            }
            invalidate();
        }
        return Math.round(f10 * getWidth());
    }

    public void markItemDecorInsetsDirty() {
        int h6 = this.mChildHelper.h();
        for (int i5 = 0; i5 < h6; i5++) {
            ((LayoutParams) this.mChildHelper.g(i5).getLayoutParams()).f2310i = true;
        }
        ArrayList arrayList = this.mRecycler.f2313c;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            LayoutParams layoutParams = (LayoutParams) ((ViewHolder) arrayList.get(i6)).itemView.getLayoutParams();
            if (layoutParams != null) {
                layoutParams.f2310i = true;
            }
        }
    }

    public void markKnownViewsInvalid() {
        int h6 = this.mChildHelper.h();
        for (int i5 = 0; i5 < h6; i5++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i5));
            if (childViewHolderInt != null && !childViewHolderInt.shouldIgnore()) {
                childViewHolderInt.addFlags(6);
            }
        }
        markItemDecorInsetsDirty();
        Recycler recycler = this.mRecycler;
        ArrayList arrayList = recycler.f2313c;
        int size = arrayList.size();
        for (int i6 = 0; i6 < size; i6++) {
            ViewHolder viewHolder = (ViewHolder) arrayList.get(i6);
            if (viewHolder != null) {
                viewHolder.addFlags(6);
                viewHolder.addChangePayload(null);
            }
        }
        Adapter adapter = RecyclerView.this.mAdapter;
        if (adapter == null || !adapter.hasStableIds()) {
            recycler.h();
        }
    }

    public final int n(float f2, int i5) {
        float width = f2 / getWidth();
        float height = i5 / getHeight();
        EdgeEffect edgeEffect = this.mTopGlow;
        float f10 = DECELERATION_RATE;
        if (edgeEffect == null || zo.c0.w(edgeEffect) == DECELERATION_RATE) {
            EdgeEffect edgeEffect2 = this.mBottomGlow;
            if (edgeEffect2 != null && zo.c0.w(edgeEffect2) != DECELERATION_RATE) {
                if (canScrollVertically(1)) {
                    this.mBottomGlow.onRelease();
                } else {
                    float E = zo.c0.E(this.mBottomGlow, height, 1.0f - width);
                    if (zo.c0.w(this.mBottomGlow) == DECELERATION_RATE) {
                        this.mBottomGlow.onRelease();
                    }
                    f10 = E;
                }
                invalidate();
            }
        } else {
            if (canScrollVertically(-1)) {
                this.mTopGlow.onRelease();
            } else {
                float f11 = -zo.c0.E(this.mTopGlow, -height, width);
                if (zo.c0.w(this.mTopGlow) == DECELERATION_RATE) {
                    this.mTopGlow.onRelease();
                }
                f10 = f11;
            }
            invalidate();
        }
        return Math.round(f10 * getHeight());
    }

    public void nestedScrollBy(int i5, int i6) {
        i(i5, null, i6);
    }

    public final void o(View view, View view2) {
        View view3 = view2 != null ? view2 : view;
        this.mTempRect.set(0, 0, view3.getWidth(), view3.getHeight());
        ViewGroup.LayoutParams layoutParams = view3.getLayoutParams();
        if (layoutParams instanceof LayoutParams) {
            LayoutParams layoutParams2 = (LayoutParams) layoutParams;
            if (!layoutParams2.f2310i) {
                Rect rect = layoutParams2.f2309e;
                Rect rect2 = this.mTempRect;
                rect2.left -= rect.left;
                rect2.right += rect.right;
                rect2.top -= rect.top;
                rect2.bottom += rect.bottom;
            }
        }
        if (view2 != null) {
            offsetDescendantRectToMyCoords(view2, this.mTempRect);
            offsetRectIntoDescendantCoords(view, this.mTempRect);
        }
        this.mLayout.requestChildRectangleOnScreen(this, view, this.mTempRect, !this.mFirstLayoutComplete, view2 == null);
    }

    public void offsetChildrenHorizontal(int i5) {
        int e9 = this.mChildHelper.e();
        for (int i6 = 0; i6 < e9; i6++) {
            this.mChildHelper.d(i6).offsetLeftAndRight(i5);
        }
    }

    public void offsetChildrenVertical(int i5) {
        int e9 = this.mChildHelper.e();
        for (int i6 = 0; i6 < e9; i6++) {
            this.mChildHelper.d(i6).offsetTopAndBottom(i5);
        }
    }

    public void offsetPositionRecordsForInsert(int i5, int i6) {
        int h6 = this.mChildHelper.h();
        for (int i10 = 0; i10 < h6; i10++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i10));
            if (childViewHolderInt != null && !childViewHolderInt.shouldIgnore() && childViewHolderInt.mPosition >= i5) {
                if (sVerboseLoggingEnabled) {
                    Log.d(TAG, "offsetPositionRecordsForInsert attached child " + i10 + " holder " + childViewHolderInt + " now at position " + (childViewHolderInt.mPosition + i6));
                }
                childViewHolderInt.offsetPosition(i6, false);
                this.mState.f2331f = true;
            }
        }
        ArrayList arrayList = this.mRecycler.f2313c;
        int size = arrayList.size();
        for (int i11 = 0; i11 < size; i11++) {
            ViewHolder viewHolder = (ViewHolder) arrayList.get(i11);
            if (viewHolder != null && viewHolder.mPosition >= i5) {
                if (sVerboseLoggingEnabled) {
                    Log.d(TAG, "offsetPositionRecordsForInsert cached " + i11 + " holder " + viewHolder + " now at position " + (viewHolder.mPosition + i6));
                }
                viewHolder.offsetPosition(i6, false);
            }
        }
        requestLayout();
    }

    public void offsetPositionRecordsForMove(int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int h6 = this.mChildHelper.h();
        int i17 = -1;
        if (i5 < i6) {
            i11 = i5;
            i10 = i6;
            i12 = -1;
        } else {
            i10 = i5;
            i11 = i6;
            i12 = 1;
        }
        for (int i18 = 0; i18 < h6; i18++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i18));
            if (childViewHolderInt != null && (i16 = childViewHolderInt.mPosition) >= i11 && i16 <= i10) {
                if (sVerboseLoggingEnabled) {
                    Log.d(TAG, "offsetPositionRecordsForMove attached child " + i18 + " holder " + childViewHolderInt);
                }
                if (childViewHolderInt.mPosition == i5) {
                    childViewHolderInt.offsetPosition(i6 - i5, false);
                } else {
                    childViewHolderInt.offsetPosition(i12, false);
                }
                this.mState.f2331f = true;
            }
        }
        ArrayList arrayList = this.mRecycler.f2313c;
        if (i5 < i6) {
            i14 = i5;
            i13 = i6;
        } else {
            i13 = i5;
            i17 = 1;
            i14 = i6;
        }
        int size = arrayList.size();
        for (int i19 = 0; i19 < size; i19++) {
            ViewHolder viewHolder = (ViewHolder) arrayList.get(i19);
            if (viewHolder != null && (i15 = viewHolder.mPosition) >= i14 && i15 <= i13) {
                if (i15 == i5) {
                    viewHolder.offsetPosition(i6 - i5, false);
                } else {
                    viewHolder.offsetPosition(i17, false);
                }
                if (sVerboseLoggingEnabled) {
                    Log.d(TAG, "offsetPositionRecordsForMove cached child " + i19 + " holder " + viewHolder);
                }
            }
        }
        requestLayout();
    }

    public void offsetPositionRecordsForRemove(int i5, int i6, boolean z5) {
        int i10 = i5 + i6;
        int h6 = this.mChildHelper.h();
        for (int i11 = 0; i11 < h6; i11++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i11));
            if (childViewHolderInt != null && !childViewHolderInt.shouldIgnore()) {
                int i12 = childViewHolderInt.mPosition;
                if (i12 >= i10) {
                    if (sVerboseLoggingEnabled) {
                        Log.d(TAG, "offsetPositionRecordsForRemove attached child " + i11 + " holder " + childViewHolderInt + " now at position " + (childViewHolderInt.mPosition - i6));
                    }
                    childViewHolderInt.offsetPosition(-i6, z5);
                    this.mState.f2331f = true;
                } else if (i12 >= i5) {
                    if (sVerboseLoggingEnabled) {
                        Log.d(TAG, "offsetPositionRecordsForRemove attached child " + i11 + " holder " + childViewHolderInt + " now REMOVED");
                    }
                    childViewHolderInt.flagRemovedAndOffsetPosition(i5 - 1, -i6, z5);
                    this.mState.f2331f = true;
                }
            }
        }
        Recycler recycler = this.mRecycler;
        ArrayList arrayList = recycler.f2313c;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            ViewHolder viewHolder = (ViewHolder) arrayList.get(size);
            if (viewHolder != null) {
                int i13 = viewHolder.mPosition;
                if (i13 >= i10) {
                    if (sVerboseLoggingEnabled) {
                        Log.d(TAG, "offsetPositionRecordsForRemove cached " + size + " holder " + viewHolder + " now at position " + (viewHolder.mPosition - i6));
                    }
                    viewHolder.offsetPosition(-i6, z5);
                } else if (i13 >= i5) {
                    viewHolder.addFlags(8);
                    recycler.i(size);
                }
            }
        }
        requestLayout();
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0052, code lost:
    
        if (r1 >= 30.0f) goto L22;
     */
    @Override // android.view.ViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onAttachedToWindow() {
        float f2;
        super.onAttachedToWindow();
        this.mLayoutOrScrollCounter = 0;
        this.mIsAttached = true;
        this.mFirstLayoutComplete = this.mFirstLayoutComplete && !isLayoutRequested();
        this.mRecycler.g();
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.dispatchAttachedToWindow(this);
        }
        this.mPostedAnimatorRunner = false;
        if (ALLOW_THREAD_GAP_WORK) {
            ThreadLocal threadLocal = GapWorker.f2272w;
            GapWorker gapWorker = (GapWorker) threadLocal.get();
            this.mGapWorker = gapWorker;
            if (gapWorker == null) {
                this.mGapWorker = new GapWorker();
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                Display display = getDisplay();
                if (!isInEditMode() && display != null) {
                    f2 = display.getRefreshRate();
                }
                f2 = 60.0f;
                GapWorker gapWorker2 = this.mGapWorker;
                gapWorker2.f2276i = (long) (1.0E9f / f2);
                threadLocal.set(gapWorker2);
            }
            ArrayList arrayList = this.mGapWorker.f2274d;
            if (sDebugAssertionsEnabled && arrayList.contains(this)) {
                throw new IllegalStateException("RecyclerView already present in worker list!");
            }
            arrayList.add(this);
        }
    }

    public void onChildAttachedToWindow(@NonNull View view) {
    }

    public void onChildDetachedFromWindow(@NonNull View view) {
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        GapWorker gapWorker;
        ArrayList arrayList;
        int f2;
        super.onDetachedFromWindow();
        ItemAnimator itemAnimator = this.mItemAnimator;
        if (itemAnimator != null) {
            itemAnimator.endAnimations();
        }
        stopScroll();
        this.mIsAttached = false;
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.dispatchDetachedFromWindow(this, this.mRecycler);
        }
        this.mPendingAccessibilityImportanceChange.clear();
        removeCallbacks(this.mItemAnimatorRunner);
        this.mViewInfoStore.getClass();
        while (u1.f2476d.acquire() != null) {
        }
        Recycler recycler = this.mRecycler;
        ArrayList arrayList2 = recycler.f2313c;
        for (int i5 = 0; i5 < arrayList2.size(); i5++) {
            ks.n.b(((ViewHolder) arrayList2.get(i5)).itemView);
        }
        Adapter adapter = RecyclerView.this.mAdapter;
        RecycledViewPool recycledViewPool = recycler.f2317g;
        if (recycledViewPool != null) {
            recycledViewPool.detachForPoolingContainer(adapter, false);
        }
        Intrinsics.checkNotNullParameter(this, "<this>");
        Iterator it = new androidx.core.view.v0(this).iterator();
        do {
            androidx.core.view.w0 w0Var = (androidx.core.view.w0) it;
            if (!w0Var.hasNext()) {
                if (!ALLOW_THREAD_GAP_WORK || (gapWorker = this.mGapWorker) == null) {
                    return;
                }
                boolean remove = gapWorker.f2274d.remove(this);
                if (sDebugAssertionsEnabled && !remove) {
                    throw new IllegalStateException("RecyclerView removal failed!");
                }
                this.mGapWorker = null;
                return;
            }
            View view = (View) w0Var.next();
            c2.a aVar = (c2.a) view.getTag(com.discord.R.id.pooling_container_listener_holder_tag);
            if (aVar == null) {
                aVar = new c2.a();
                view.setTag(com.discord.R.id.pooling_container_listener_holder_tag, aVar);
            }
            arrayList = aVar.a;
            f2 = kotlin.collections.c0.f(arrayList);
        } while (-1 >= f2);
        arrayList.get(f2).getClass();
        throw new ClassCastException();
    }

    @Override // android.view.View
    public void onDraw(@NonNull Canvas canvas) {
        super.onDraw(canvas);
        int size = this.mItemDecorations.size();
        for (int i5 = 0; i5 < size; i5++) {
            this.mItemDecorations.get(i5).onDraw(canvas, this, this.mState);
        }
    }

    public void onEnterLayoutOrScroll() {
        this.mLayoutOrScrollCounter++;
    }

    public void onExitLayoutOrScroll() {
        onExitLayoutOrScroll(true);
    }

    @Override // android.view.View
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        int i5;
        boolean z5;
        float f2;
        RecyclerView recyclerView;
        if (this.mLayout != null && !this.mLayoutSuppressed && motionEvent.getAction() == 8) {
            int source = motionEvent.getSource() & 2;
            float f10 = DECELERATION_RATE;
            if (source != 0) {
                float f11 = this.mLayout.canScrollVertically() ? -motionEvent.getAxisValue(9) : 0.0f;
                if (this.mLayout.canScrollHorizontally()) {
                    f10 = motionEvent.getAxisValue(10);
                }
                z5 = false;
                f2 = f10;
                f10 = f11;
                i5 = 0;
            } else if ((motionEvent.getSource() & 4194304) != 0) {
                i5 = 26;
                f2 = motionEvent.getAxisValue(26);
                if (this.mLayout.canScrollVertically()) {
                    float f12 = -f2;
                    f2 = 0.0f;
                    f10 = f12;
                } else if (!this.mLayout.canScrollHorizontally()) {
                    f2 = 0.0f;
                }
                z5 = this.mLowResRotaryEncoderFeature;
            } else {
                i5 = 0;
                z5 = false;
                f2 = 0.0f;
            }
            int i6 = (int) (f10 * this.mScaledVerticalScrollFactor);
            int i10 = (int) (f2 * this.mScaledHorizontalScrollFactor);
            if (z5) {
                OverScroller overScroller = this.mViewFlinger.f2340i;
                recyclerView = this;
                recyclerView.smoothScrollBy((overScroller.getFinalX() - overScroller.getCurrX()) + i10, (overScroller.getFinalY() - overScroller.getCurrY()) + i6, null, Integer.MIN_VALUE, true);
            } else {
                recyclerView = this;
                i(i10, motionEvent, i6);
            }
            if (i5 != 0 && !z5) {
                recyclerView.mDifferentialMotionFlingController.a(motionEvent, i5);
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        boolean z6;
        if (!this.mLayoutSuppressed) {
            this.mInterceptingOnItemTouchListener = null;
            if (f(motionEvent)) {
                VelocityTracker velocityTracker = this.mVelocityTracker;
                if (velocityTracker != null) {
                    velocityTracker.clear();
                }
                stopNestedScroll(0);
                l();
                setScrollState(0);
                return true;
            }
            LayoutManager layoutManager = this.mLayout;
            if (layoutManager != null) {
                boolean canScrollHorizontally = layoutManager.canScrollHorizontally();
                boolean canScrollVertically = this.mLayout.canScrollVertically();
                if (this.mVelocityTracker == null) {
                    this.mVelocityTracker = VelocityTracker.obtain();
                }
                this.mVelocityTracker.addMovement(motionEvent);
                int actionMasked = motionEvent.getActionMasked();
                int actionIndex = motionEvent.getActionIndex();
                if (actionMasked == 0) {
                    if (this.mIgnoreMotionEventTillDown) {
                        this.mIgnoreMotionEventTillDown = false;
                    }
                    this.mScrollPointerId = motionEvent.getPointerId(0);
                    int x5 = (int) (motionEvent.getX() + 0.5f);
                    this.mLastTouchX = x5;
                    this.mInitialTouchX = x5;
                    int y5 = (int) (motionEvent.getY() + 0.5f);
                    this.mLastTouchY = y5;
                    this.mInitialTouchY = y5;
                    EdgeEffect edgeEffect = this.mLeftGlow;
                    if (edgeEffect == null || zo.c0.w(edgeEffect) == DECELERATION_RATE || canScrollHorizontally(-1)) {
                        z5 = false;
                    } else {
                        zo.c0.E(this.mLeftGlow, DECELERATION_RATE, 1.0f - (motionEvent.getY() / getHeight()));
                        z5 = true;
                    }
                    EdgeEffect edgeEffect2 = this.mRightGlow;
                    if (edgeEffect2 != null && zo.c0.w(edgeEffect2) != DECELERATION_RATE && !canScrollHorizontally(1)) {
                        zo.c0.E(this.mRightGlow, DECELERATION_RATE, motionEvent.getY() / getHeight());
                        z5 = true;
                    }
                    EdgeEffect edgeEffect3 = this.mTopGlow;
                    if (edgeEffect3 != null && zo.c0.w(edgeEffect3) != DECELERATION_RATE && !canScrollVertically(-1)) {
                        zo.c0.E(this.mTopGlow, DECELERATION_RATE, motionEvent.getX() / getWidth());
                        z5 = true;
                    }
                    EdgeEffect edgeEffect4 = this.mBottomGlow;
                    if (edgeEffect4 != null && zo.c0.w(edgeEffect4) != DECELERATION_RATE && !canScrollVertically(1)) {
                        zo.c0.E(this.mBottomGlow, DECELERATION_RATE, 1.0f - (motionEvent.getX() / getWidth()));
                        z5 = true;
                    }
                    if (z5 || this.mScrollState == 2) {
                        getParent().requestDisallowInterceptTouchEvent(true);
                        setScrollState(1);
                        stopNestedScroll(1);
                    }
                    int[] iArr = this.mNestedOffsets;
                    iArr[1] = 0;
                    iArr[0] = 0;
                    r(0);
                } else if (actionMasked == 1) {
                    this.mVelocityTracker.clear();
                    stopNestedScroll(0);
                } else if (actionMasked == 2) {
                    int findPointerIndex = motionEvent.findPointerIndex(this.mScrollPointerId);
                    if (findPointerIndex < 0) {
                        Log.e(TAG, "Error processing scroll; pointer index for id " + this.mScrollPointerId + " not found. Did any MotionEvents get skipped?");
                        return false;
                    }
                    int x10 = (int) (motionEvent.getX(findPointerIndex) + 0.5f);
                    int y6 = (int) (motionEvent.getY(findPointerIndex) + 0.5f);
                    if (this.mScrollState != 1) {
                        int i5 = x10 - this.mInitialTouchX;
                        int i6 = y6 - this.mInitialTouchY;
                        if (!canScrollHorizontally || Math.abs(i5) <= this.mTouchSlop) {
                            z6 = false;
                        } else {
                            this.mLastTouchX = x10;
                            z6 = true;
                        }
                        if (canScrollVertically && Math.abs(i6) > this.mTouchSlop) {
                            this.mLastTouchY = y6;
                            z6 = true;
                        }
                        if (z6) {
                            setScrollState(1);
                        }
                    }
                } else if (actionMasked == 3) {
                    VelocityTracker velocityTracker2 = this.mVelocityTracker;
                    if (velocityTracker2 != null) {
                        velocityTracker2.clear();
                    }
                    stopNestedScroll(0);
                    l();
                    setScrollState(0);
                } else if (actionMasked == 5) {
                    this.mScrollPointerId = motionEvent.getPointerId(actionIndex);
                    int x11 = (int) (motionEvent.getX(actionIndex) + 0.5f);
                    this.mLastTouchX = x11;
                    this.mInitialTouchX = x11;
                    int y10 = (int) (motionEvent.getY(actionIndex) + 0.5f);
                    this.mLastTouchY = y10;
                    this.mInitialTouchY = y10;
                } else if (actionMasked == 6) {
                    j(motionEvent);
                }
                if (this.mScrollState == 1) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        Trace.beginSection(TRACE_ON_LAYOUT_TAG);
        dispatchLayout();
        Trace.endSection();
        this.mFirstLayoutComplete = true;
    }

    @Override // android.view.View
    public void onMeasure(int i5, int i6) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            defaultOnMeasure(i5, i6);
            return;
        }
        boolean z5 = false;
        if (layoutManager.isAutoMeasureEnabled()) {
            int mode = View.MeasureSpec.getMode(i5);
            int mode2 = View.MeasureSpec.getMode(i6);
            this.mLayout.onMeasure(this.mRecycler, this.mState, i5, i6);
            if (mode == 1073741824 && mode2 == 1073741824) {
                z5 = true;
            }
            this.mLastAutoMeasureSkippedDueToExact = z5;
            if (z5 || this.mAdapter == null) {
                return;
            }
            if (this.mState.f2329d == 1) {
                d();
            }
            this.mLayout.setMeasureSpecs(i5, i6);
            this.mState.f2334i = true;
            e();
            this.mLayout.setMeasuredDimensionFromChildren(i5, i6);
            if (this.mLayout.shouldMeasureTwice()) {
                this.mLayout.setMeasureSpecs(View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 1073741824));
                this.mState.f2334i = true;
                e();
                this.mLayout.setMeasuredDimensionFromChildren(i5, i6);
            }
            this.mLastAutoMeasureNonExactMeasuredWidth = getMeasuredWidth();
            this.mLastAutoMeasureNonExactMeasuredHeight = getMeasuredHeight();
            return;
        }
        if (this.mHasFixedSize) {
            this.mLayout.onMeasure(this.mRecycler, this.mState, i5, i6);
            return;
        }
        if (this.mAdapterUpdateDuringMeasure) {
            startInterceptRequestLayout();
            onEnterLayoutOrScroll();
            k();
            onExitLayoutOrScroll();
            State state = this.mState;
            if (state.k) {
                state.f2332g = true;
            } else {
                this.mAdapterHelper.c();
                this.mState.f2332g = false;
            }
            this.mAdapterUpdateDuringMeasure = false;
            stopInterceptRequestLayout(false);
        } else if (this.mState.k) {
            setMeasuredDimension(getMeasuredWidth(), getMeasuredHeight());
            return;
        }
        Adapter adapter = this.mAdapter;
        if (adapter != null) {
            this.mState.f2330e = adapter.getItemCount();
        } else {
            this.mState.f2330e = 0;
        }
        startInterceptRequestLayout();
        this.mLayout.onMeasure(this.mRecycler, this.mState, i5, i6);
        stopInterceptRequestLayout(false);
        this.mState.f2332g = false;
    }

    @Override // android.view.ViewGroup
    public boolean onRequestFocusInDescendants(int i5, Rect rect) {
        if (isComputingLayout()) {
            return false;
        }
        return super.onRequestFocusInDescendants(i5, rect);
    }

    @Override // android.view.View
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        this.mPendingSavedState = savedState;
        super.onRestoreInstanceState(savedState.f7399d);
        requestLayout();
    }

    @Override // android.view.View
    public Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        SavedState savedState2 = this.mPendingSavedState;
        if (savedState2 != null) {
            savedState.f2320i = savedState2.f2320i;
            return savedState;
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            savedState.f2320i = layoutManager.onSaveInstanceState();
            return savedState;
        }
        savedState.f2320i = null;
        return savedState;
    }

    public void onScrollStateChanged(int i5) {
    }

    public void onScrolled(int i5, int i6) {
    }

    @Override // android.view.View
    public void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        if (i5 == i10 && i6 == i11) {
            return;
        }
        invalidateGlows();
    }

    /* JADX WARN: Removed duplicated region for block: B:56:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x012c  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        boolean z6;
        if (!this.mLayoutSuppressed && !this.mIgnoreMotionEventTillDown) {
            OnItemTouchListener onItemTouchListener = this.mInterceptingOnItemTouchListener;
            if (onItemTouchListener == null) {
                z5 = motionEvent.getAction() == 0 ? false : f(motionEvent);
            } else {
                onItemTouchListener.onTouchEvent(this, motionEvent);
                int action = motionEvent.getAction();
                if (action == 3 || action == 1) {
                    this.mInterceptingOnItemTouchListener = null;
                }
                z5 = true;
            }
            if (z5) {
                VelocityTracker velocityTracker = this.mVelocityTracker;
                if (velocityTracker != null) {
                    velocityTracker.clear();
                }
                stopNestedScroll(0);
                l();
                setScrollState(0);
                return true;
            }
            LayoutManager layoutManager = this.mLayout;
            if (layoutManager != null) {
                boolean canScrollHorizontally = layoutManager.canScrollHorizontally();
                boolean canScrollVertically = this.mLayout.canScrollVertically();
                if (this.mVelocityTracker == null) {
                    this.mVelocityTracker = VelocityTracker.obtain();
                }
                int actionMasked = motionEvent.getActionMasked();
                int actionIndex = motionEvent.getActionIndex();
                if (actionMasked == 0) {
                    int[] iArr = this.mNestedOffsets;
                    iArr[1] = 0;
                    iArr[0] = 0;
                }
                MotionEvent obtain = MotionEvent.obtain(motionEvent);
                int[] iArr2 = this.mNestedOffsets;
                obtain.offsetLocation(iArr2[0], iArr2[1]);
                if (actionMasked == 0) {
                    this.mScrollPointerId = motionEvent.getPointerId(0);
                    int x5 = (int) (motionEvent.getX() + 0.5f);
                    this.mLastTouchX = x5;
                    this.mInitialTouchX = x5;
                    int y5 = (int) (motionEvent.getY() + 0.5f);
                    this.mLastTouchY = y5;
                    this.mInitialTouchY = y5;
                    r(0);
                } else {
                    if (actionMasked == 1) {
                        this.mVelocityTracker.addMovement(obtain);
                        this.mVelocityTracker.computeCurrentVelocity(1000, this.mMaxFlingVelocity);
                        float f2 = canScrollHorizontally ? -this.mVelocityTracker.getXVelocity(this.mScrollPointerId) : 0.0f;
                        float f10 = canScrollVertically ? -this.mVelocityTracker.getYVelocity(this.mScrollPointerId) : 0.0f;
                        if ((f2 == DECELERATION_RATE && f10 == DECELERATION_RATE) || !fling((int) f2, (int) f10)) {
                            setScrollState(0);
                        }
                        VelocityTracker velocityTracker2 = this.mVelocityTracker;
                        if (velocityTracker2 != null) {
                            velocityTracker2.clear();
                        }
                        stopNestedScroll(0);
                        l();
                        obtain.recycle();
                        return true;
                    }
                    if (actionMasked == 2) {
                        int findPointerIndex = motionEvent.findPointerIndex(this.mScrollPointerId);
                        if (findPointerIndex < 0) {
                            Log.e(TAG, "Error processing scroll; pointer index for id " + this.mScrollPointerId + " not found. Did any MotionEvents get skipped?");
                            return false;
                        }
                        int x10 = (int) (motionEvent.getX(findPointerIndex) + 0.5f);
                        int y6 = (int) (motionEvent.getY(findPointerIndex) + 0.5f);
                        int i5 = this.mLastTouchX - x10;
                        int i6 = this.mLastTouchY - y6;
                        if (this.mScrollState != 1) {
                            if (canScrollHorizontally) {
                                i5 = i5 > 0 ? Math.max(0, i5 - this.mTouchSlop) : Math.min(0, i5 + this.mTouchSlop);
                                if (i5 != 0) {
                                    z6 = true;
                                    if (canScrollVertically) {
                                        i6 = i6 > 0 ? Math.max(0, i6 - this.mTouchSlop) : Math.min(0, i6 + this.mTouchSlop);
                                        if (i6 != 0) {
                                            z6 = true;
                                        }
                                    }
                                    if (z6) {
                                        setScrollState(1);
                                    }
                                }
                            }
                            z6 = false;
                            if (canScrollVertically) {
                            }
                            if (z6) {
                            }
                        }
                        if (this.mScrollState == 1) {
                            int[] iArr3 = this.mReusableIntPair;
                            iArr3[0] = 0;
                            iArr3[1] = 0;
                            int m5 = i5 - m(motionEvent.getY(), i5);
                            int n6 = i6 - n(motionEvent.getX(), i6);
                            if (dispatchNestedPreScroll(canScrollHorizontally ? m5 : 0, canScrollVertically ? n6 : 0, this.mReusableIntPair, this.mScrollOffset, 0)) {
                                int[] iArr4 = this.mReusableIntPair;
                                m5 -= iArr4[0];
                                n6 -= iArr4[1];
                                int[] iArr5 = this.mNestedOffsets;
                                int i10 = iArr5[0];
                                int[] iArr6 = this.mScrollOffset;
                                iArr5[0] = i10 + iArr6[0];
                                iArr5[1] = iArr5[1] + iArr6[1];
                                getParent().requestDisallowInterceptTouchEvent(true);
                            }
                            int[] iArr7 = this.mScrollOffset;
                            this.mLastTouchX = x10 - iArr7[0];
                            this.mLastTouchY = y6 - iArr7[1];
                            if (scrollByInternal(canScrollHorizontally ? m5 : 0, canScrollVertically ? n6 : 0, motionEvent, 0)) {
                                getParent().requestDisallowInterceptTouchEvent(true);
                            }
                            GapWorker gapWorker = this.mGapWorker;
                            if (gapWorker != null && (m5 != 0 || n6 != 0)) {
                                gapWorker.a(this, m5, n6);
                            }
                        }
                    } else if (actionMasked == 3) {
                        VelocityTracker velocityTracker3 = this.mVelocityTracker;
                        if (velocityTracker3 != null) {
                            velocityTracker3.clear();
                        }
                        stopNestedScroll(0);
                        l();
                        setScrollState(0);
                    } else if (actionMasked == 5) {
                        this.mScrollPointerId = motionEvent.getPointerId(actionIndex);
                        int x11 = (int) (motionEvent.getX(actionIndex) + 0.5f);
                        this.mLastTouchX = x11;
                        this.mInitialTouchX = x11;
                        int y10 = (int) (motionEvent.getY(actionIndex) + 0.5f);
                        this.mLastTouchY = y10;
                        this.mInitialTouchY = y10;
                    } else if (actionMasked == 6) {
                        j(motionEvent);
                    }
                }
                this.mVelocityTracker.addMovement(obtain);
                obtain.recycle();
                return true;
            }
        }
        return false;
    }

    public final void p(Adapter adapter, boolean z5, boolean z6) {
        Adapter adapter2 = this.mAdapter;
        if (adapter2 != null) {
            adapter2.unregisterAdapterDataObserver(this.mObserver);
            this.mAdapter.onDetachedFromRecyclerView(this);
        }
        if (!z5 || z6) {
            removeAndRecycleViews();
        }
        AdapterHelper adapterHelper = this.mAdapterHelper;
        adapterHelper.k(adapterHelper.f2251b);
        adapterHelper.k(adapterHelper.f2252c);
        adapterHelper.f2255f = 0;
        Adapter adapter3 = this.mAdapter;
        this.mAdapter = adapter;
        if (adapter != null) {
            adapter.registerAdapterDataObserver(this.mObserver);
            adapter.onAttachedToRecyclerView(this);
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.onAdapterChanged(adapter3, this.mAdapter);
        }
        Recycler recycler = this.mRecycler;
        Adapter adapter4 = this.mAdapter;
        recycler.b();
        RecycledViewPool recycledViewPool = recycler.f2317g;
        if (recycledViewPool != null) {
            recycledViewPool.detachForPoolingContainer(adapter3, true);
        }
        recycler.d().onAdapterChanged(adapter3, adapter4, z5);
        recycler.g();
        this.mState.f2331f = true;
    }

    public void postAnimationRunner() {
        if (this.mPostedAnimatorRunner || !this.mIsAttached) {
            return;
        }
        Runnable runnable = this.mItemAnimatorRunner;
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        postOnAnimation(runnable);
        this.mPostedAnimatorRunner = true;
    }

    public void processDataSetCompletelyChanged(boolean z5) {
        this.mDispatchItemsChangedEvent = z5 | this.mDispatchItemsChangedEvent;
        this.mDataSetHasChangedAfterLayout = true;
        markKnownViewsInvalid();
    }

    public final boolean q(EdgeEffect edgeEffect, int i5, int i6) {
        if (i5 > 0) {
            return true;
        }
        float w5 = zo.c0.w(edgeEffect) * i6;
        double log = Math.log((Math.abs(-i5) * INFLEXION) / (this.mPhysicalCoef * SCROLL_FRICTION));
        double d6 = DECELERATION_RATE;
        return ((float) (Math.exp((d6 / (d6 - 1.0d)) * log) * ((double) (this.mPhysicalCoef * SCROLL_FRICTION)))) < w5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void r(int i5) {
        boolean canScrollHorizontally = this.mLayout.canScrollHorizontally();
        int i6 = canScrollHorizontally;
        if (this.mLayout.canScrollVertically()) {
            i6 = (canScrollHorizontally ? 1 : 0) | 2;
        }
        startNestedScroll(i6, i5);
    }

    public void recordAnimationInfoIfBouncedHiddenView(ViewHolder viewHolder, ItemAnimator.ItemHolderInfo itemHolderInfo) {
        viewHolder.setFlags(0, 8192);
        if (this.mState.f2333h && viewHolder.isUpdated() && !viewHolder.isRemoved() && !viewHolder.shouldIgnore()) {
            this.mViewInfoStore.f2354b.e(getChangedHolderKey(viewHolder), viewHolder);
        }
        SimpleArrayMap simpleArrayMap = this.mViewInfoStore.a;
        u1 u1Var = (u1) simpleArrayMap.get(viewHolder);
        if (u1Var == null) {
            u1Var = u1.a();
            simpleArrayMap.put(viewHolder, u1Var);
        }
        u1Var.f2477b = itemHolderInfo;
        u1Var.a |= 4;
    }

    public void removeAndRecycleViews() {
        ItemAnimator itemAnimator = this.mItemAnimator;
        if (itemAnimator != null) {
            itemAnimator.endAnimations();
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.removeAndRecycleAllViews(this.mRecycler);
            this.mLayout.removeAndRecycleScrapInt(this.mRecycler);
        }
        this.mRecycler.b();
    }

    public boolean removeAnimatingView(View view) {
        startInterceptRequestLayout();
        ChildHelper childHelper = this.mChildHelper;
        h hVar = childHelper.f2263b;
        z0 z0Var = childHelper.a;
        int i5 = childHelper.f2265d;
        boolean z5 = false;
        z5 = false;
        if (i5 == 1) {
            if (childHelper.f2266e != view) {
                throw new IllegalStateException("Cannot call removeViewIfHidden within removeView(At) for a different view");
            }
        } else {
            if (i5 == 2) {
                throw new IllegalStateException("Cannot call removeViewIfHidden within removeViewIfHidden");
            }
            try {
                childHelper.f2265d = 2;
                int indexOfChild = z0Var.a.indexOfChild(view);
                if (indexOfChild == -1) {
                    childHelper.l(view);
                } else if (hVar.H(indexOfChild)) {
                    hVar.K(indexOfChild);
                    childHelper.l(view);
                    z0Var.a(indexOfChild);
                }
                childHelper.f2265d = 0;
                z5 = true;
            } finally {
                childHelper.f2265d = 0;
            }
        }
        if (z5) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(view);
            this.mRecycler.n(childViewHolderInt);
            this.mRecycler.k(childViewHolderInt);
            if (sVerboseLoggingEnabled) {
                Log.d(TAG, "after removing animated view: " + view + ", " + this);
            }
        }
        stopInterceptRequestLayout(!z5);
        return z5;
    }

    @Override // android.view.ViewGroup
    public void removeDetachedView(View view, boolean z5) {
        ViewHolder childViewHolderInt = getChildViewHolderInt(view);
        if (childViewHolderInt != null) {
            if (childViewHolderInt.isTmpDetached()) {
                childViewHolderInt.clearTmpDetachFlag();
            } else if (!childViewHolderInt.shouldIgnore()) {
                StringBuilder sb2 = new StringBuilder("Called removeDetachedView with a view which is not flagged as tmp detached.");
                sb2.append(childViewHolderInt);
                throw new IllegalArgumentException(a3.e.h(this, sb2));
            }
        } else if (sDebugAssertionsEnabled) {
            StringBuilder sb3 = new StringBuilder("No ViewHolder found for child: ");
            sb3.append(view);
            throw new IllegalArgumentException(a3.e.h(this, sb3));
        }
        view.clearAnimation();
        dispatchChildDetached(view);
        super.removeDetachedView(view, z5);
    }

    public void removeItemDecoration(@NonNull ItemDecoration itemDecoration) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.assertNotInLayoutOrScroll("Cannot remove item decoration during a scroll  or layout");
        }
        this.mItemDecorations.remove(itemDecoration);
        if (this.mItemDecorations.isEmpty()) {
            setWillNotDraw(getOverScrollMode() == 2);
        }
        markItemDecorInsetsDirty();
        requestLayout();
    }

    public void removeItemDecorationAt(int i5) {
        int itemDecorationCount = getItemDecorationCount();
        if (i5 >= 0 && i5 < itemDecorationCount) {
            removeItemDecoration(getItemDecorationAt(i5));
            return;
        }
        throw new IndexOutOfBoundsException(i5 + " is an invalid index for size " + itemDecorationCount);
    }

    public void removeOnChildAttachStateChangeListener(@NonNull OnChildAttachStateChangeListener onChildAttachStateChangeListener) {
        List<OnChildAttachStateChangeListener> list = this.mOnChildAttachStateListeners;
        if (list == null) {
            return;
        }
        list.remove(onChildAttachStateChangeListener);
    }

    public void removeOnItemTouchListener(@NonNull OnItemTouchListener onItemTouchListener) {
        this.mOnItemTouchListeners.remove(onItemTouchListener);
        if (this.mInterceptingOnItemTouchListener == onItemTouchListener) {
            this.mInterceptingOnItemTouchListener = null;
        }
    }

    public void removeOnScrollListener(@NonNull OnScrollListener onScrollListener) {
        List<OnScrollListener> list = this.mScrollListeners;
        if (list != null) {
            list.remove(onScrollListener);
        }
    }

    public void removeRecyclerListener(@NonNull RecyclerListener recyclerListener) {
        this.mRecyclerListeners.remove(recyclerListener);
    }

    public void repositionShadowingViews() {
        ViewHolder viewHolder;
        int e9 = this.mChildHelper.e();
        for (int i5 = 0; i5 < e9; i5++) {
            View d6 = this.mChildHelper.d(i5);
            ViewHolder childViewHolder = getChildViewHolder(d6);
            if (childViewHolder != null && (viewHolder = childViewHolder.mShadowingHolder) != null) {
                View view = viewHolder.itemView;
                int left = d6.getLeft();
                int top = d6.getTop();
                if (left != view.getLeft() || top != view.getTop()) {
                    view.layout(left, top, view.getWidth() + left, view.getHeight() + top);
                }
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        if (!this.mLayout.onRequestChildFocus(this, this.mState, view, view2) && view2 != null) {
            o(view, view2);
        }
        super.requestChildFocus(view, view2);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z5) {
        return this.mLayout.requestChildRectangleOnScreen(this, view, rect, z5);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z5) {
        int size = this.mOnItemTouchListeners.size();
        for (int i5 = 0; i5 < size; i5++) {
            this.mOnItemTouchListeners.get(i5).onRequestDisallowInterceptTouchEvent(z5);
        }
        super.requestDisallowInterceptTouchEvent(z5);
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (this.mInterceptRequestLayoutDepth != 0 || this.mLayoutSuppressed) {
            this.mLayoutWasDefered = true;
        } else {
            super.requestLayout();
        }
    }

    public void saveOldPositions() {
        int h6 = this.mChildHelper.h();
        for (int i5 = 0; i5 < h6; i5++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i5));
            if (sDebugAssertionsEnabled && childViewHolderInt.mPosition == -1 && !childViewHolderInt.isRemoved()) {
                throw new IllegalStateException(a3.e.h(this, new StringBuilder("view holder cannot have position -1 unless it is removed")));
            }
            if (!childViewHolderInt.shouldIgnore()) {
                childViewHolderInt.saveOldPosition();
            }
        }
    }

    @Override // android.view.View
    public void scrollBy(int i5, int i6) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot scroll without a LayoutManager set. Call setLayoutManager with a non-null argument.");
            return;
        }
        if (this.mLayoutSuppressed) {
            return;
        }
        boolean canScrollHorizontally = layoutManager.canScrollHorizontally();
        boolean canScrollVertically = this.mLayout.canScrollVertically();
        if (canScrollHorizontally || canScrollVertically) {
            if (!canScrollHorizontally) {
                i5 = 0;
            }
            if (!canScrollVertically) {
                i6 = 0;
            }
            scrollByInternal(i5, i6, null, 0);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x00d6  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x010b  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x011c  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00ee  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean scrollByInternal(int i5, int i6, MotionEvent motionEvent, int i10) {
        int i11;
        int i12;
        int i13;
        int i14;
        boolean z5;
        boolean z6;
        boolean z7;
        consumePendingUpdateOperations();
        if (this.mAdapter != null) {
            int[] iArr = this.mReusableIntPair;
            iArr[0] = 0;
            iArr[1] = 0;
            scrollStep(i5, i6, iArr);
            int[] iArr2 = this.mReusableIntPair;
            int i15 = iArr2[0];
            int i16 = iArr2[1];
            i13 = i5 - i15;
            i14 = i6 - i16;
            i12 = i16;
            i11 = i15;
        } else {
            i11 = 0;
            i12 = 0;
            i13 = 0;
            i14 = 0;
        }
        if (!this.mItemDecorations.isEmpty()) {
            invalidate();
        }
        int[] iArr3 = this.mReusableIntPair;
        iArr3[0] = 0;
        iArr3[1] = 0;
        dispatchNestedScroll(i11, i12, i13, i14, this.mScrollOffset, i10, iArr3);
        int[] iArr4 = this.mReusableIntPair;
        int i17 = iArr4[0];
        int i18 = i13 - i17;
        int i19 = iArr4[1];
        int i20 = i14 - i19;
        boolean z8 = (i17 == 0 && i19 == 0) ? false : true;
        int i21 = this.mLastTouchX;
        int[] iArr5 = this.mScrollOffset;
        int i22 = iArr5[0];
        this.mLastTouchX = i21 - i22;
        int i23 = this.mLastTouchY;
        int i24 = iArr5[1];
        this.mLastTouchY = i23 - i24;
        int[] iArr6 = this.mNestedOffsets;
        iArr6[0] = iArr6[0] + i22;
        iArr6[1] = iArr6[1] + i24;
        if (getOverScrollMode() != 2) {
            if (motionEvent == null || tn.g.o(motionEvent, 8194)) {
                z5 = true;
                z6 = false;
            } else {
                float x5 = motionEvent.getX();
                float f2 = i18;
                float y5 = motionEvent.getY();
                float f10 = i20;
                if (f2 < DECELERATION_RATE) {
                    ensureLeftGlow();
                    z5 = true;
                    z6 = false;
                    zo.c0.E(this.mLeftGlow, (-f2) / getWidth(), 1.0f - (y5 / getHeight()));
                } else {
                    z5 = true;
                    z6 = false;
                    if (f2 > DECELERATION_RATE) {
                        ensureRightGlow();
                        zo.c0.E(this.mRightGlow, f2 / getWidth(), y5 / getHeight());
                    } else {
                        z7 = false;
                        if (f10 >= DECELERATION_RATE) {
                            ensureTopGlow();
                            zo.c0.E(this.mTopGlow, (-f10) / getHeight(), x5 / getWidth());
                        } else {
                            if (f10 > DECELERATION_RATE) {
                                ensureBottomGlow();
                                zo.c0.E(this.mBottomGlow, f10 / getHeight(), 1.0f - (x5 / getWidth()));
                            }
                            if (!z7 || f2 != DECELERATION_RATE || f10 != DECELERATION_RATE) {
                                postInvalidateOnAnimation();
                            }
                            if (Build.VERSION.SDK_INT >= 31 && tn.g.o(motionEvent, 4194304)) {
                                l();
                            }
                        }
                        z7 = z5;
                        if (!z7) {
                        }
                        postInvalidateOnAnimation();
                        if (Build.VERSION.SDK_INT >= 31) {
                            l();
                        }
                    }
                }
                z7 = z5;
                if (f10 >= DECELERATION_RATE) {
                }
                z7 = z5;
                if (!z7) {
                }
                postInvalidateOnAnimation();
                if (Build.VERSION.SDK_INT >= 31) {
                }
            }
            considerReleasingGlowsOnScroll(i5, i6);
        } else {
            z5 = true;
            z6 = false;
        }
        if (i11 != 0 || i12 != 0) {
            dispatchOnScrolled(i11, i12);
        }
        if (!awakenScrollBars()) {
            invalidate();
        }
        return (!z8 && i11 == 0 && i12 == 0) ? z6 : z5;
    }

    public void scrollStep(int i5, int i6, int[] iArr) {
        startInterceptRequestLayout();
        onEnterLayoutOrScroll();
        Trace.beginSection(TRACE_SCROLL_TAG);
        fillRemainingScrollValues(this.mState);
        int scrollHorizontallyBy = i5 != 0 ? this.mLayout.scrollHorizontallyBy(i5, this.mRecycler, this.mState) : 0;
        int scrollVerticallyBy = i6 != 0 ? this.mLayout.scrollVerticallyBy(i6, this.mRecycler, this.mState) : 0;
        Trace.endSection();
        repositionShadowingViews();
        onExitLayoutOrScroll();
        stopInterceptRequestLayout(false);
        if (iArr != null) {
            iArr[0] = scrollHorizontallyBy;
            iArr[1] = scrollVerticallyBy;
        }
    }

    @Override // android.view.View
    public void scrollTo(int i5, int i6) {
        Log.w(TAG, "RecyclerView does not support scrolling to an absolute position. Use scrollToPosition instead");
    }

    public void scrollToPosition(int i5) {
        if (this.mLayoutSuppressed) {
            return;
        }
        stopScroll();
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot scroll to position a LayoutManager set. Call setLayoutManager with a non-null argument.");
        } else {
            layoutManager.scrollToPosition(i5);
            awakenScrollBars();
        }
    }

    @Override // android.view.View, android.view.accessibility.AccessibilityEventSource
    public void sendAccessibilityEventUnchecked(AccessibilityEvent accessibilityEvent) {
        if (shouldDeferAccessibilityEvent(accessibilityEvent)) {
            return;
        }
        super.sendAccessibilityEventUnchecked(accessibilityEvent);
    }

    public void setAccessibilityDelegateCompat(RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate) {
        this.mAccessibilityDelegate = recyclerViewAccessibilityDelegate;
        androidx.core.view.s0.p(this, recyclerViewAccessibilityDelegate);
    }

    public void setAdapter(Adapter adapter) {
        setLayoutFrozen(false);
        p(adapter, false, true);
        processDataSetCompletelyChanged(false);
        requestLayout();
    }

    public void setChildDrawingOrderCallback(ChildDrawingOrderCallback childDrawingOrderCallback) {
        if (childDrawingOrderCallback == this.mChildDrawingOrderCallback) {
            return;
        }
        this.mChildDrawingOrderCallback = childDrawingOrderCallback;
        setChildrenDrawingOrderEnabled(childDrawingOrderCallback != null);
    }

    public boolean setChildImportantForAccessibilityInternal(ViewHolder viewHolder, int i5) {
        if (!isComputingLayout()) {
            viewHolder.itemView.setImportantForAccessibility(i5);
            return true;
        }
        viewHolder.mPendingAccessibilityState = i5;
        this.mPendingAccessibilityImportanceChange.add(viewHolder);
        return false;
    }

    @Override // android.view.ViewGroup
    public void setClipToPadding(boolean z5) {
        if (z5 != this.mClipToPadding) {
            invalidateGlows();
        }
        this.mClipToPadding = z5;
        super.setClipToPadding(z5);
        if (this.mFirstLayoutComplete) {
            requestLayout();
        }
    }

    public void setEdgeEffectFactory(@NonNull EdgeEffectFactory edgeEffectFactory) {
        edgeEffectFactory.getClass();
        this.mEdgeEffectFactory = edgeEffectFactory;
        invalidateGlows();
    }

    public void setHasFixedSize(boolean z5) {
        this.mHasFixedSize = z5;
    }

    public void setItemAnimator(ItemAnimator itemAnimator) {
        ItemAnimator itemAnimator2 = this.mItemAnimator;
        if (itemAnimator2 != null) {
            itemAnimator2.endAnimations();
            this.mItemAnimator.setListener(null);
        }
        this.mItemAnimator = itemAnimator;
        if (itemAnimator != null) {
            itemAnimator.setListener(this.mItemAnimatorListener);
        }
    }

    public void setItemViewCacheSize(int i5) {
        Recycler recycler = this.mRecycler;
        recycler.f2315e = i5;
        recycler.o();
    }

    @Deprecated
    public void setLayoutFrozen(boolean z5) {
        suppressLayout(z5);
    }

    public void setLayoutManager(LayoutManager layoutManager) {
        if (layoutManager == this.mLayout) {
            return;
        }
        stopScroll();
        if (this.mLayout != null) {
            ItemAnimator itemAnimator = this.mItemAnimator;
            if (itemAnimator != null) {
                itemAnimator.endAnimations();
            }
            this.mLayout.removeAndRecycleAllViews(this.mRecycler);
            this.mLayout.removeAndRecycleScrapInt(this.mRecycler);
            this.mRecycler.b();
            if (this.mIsAttached) {
                this.mLayout.dispatchDetachedFromWindow(this, this.mRecycler);
            }
            this.mLayout.setRecyclerView(null);
            this.mLayout = null;
        } else {
            this.mRecycler.b();
        }
        ChildHelper childHelper = this.mChildHelper;
        RecyclerView recyclerView = childHelper.a.a;
        childHelper.f2263b.L();
        ArrayList arrayList = childHelper.f2264c;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            ViewHolder childViewHolderInt = getChildViewHolderInt((View) arrayList.get(size));
            if (childViewHolderInt != null) {
                childViewHolderInt.onLeftHiddenState(recyclerView);
            }
            arrayList.remove(size);
        }
        int childCount = recyclerView.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = recyclerView.getChildAt(i5);
            recyclerView.dispatchChildDetached(childAt);
            childAt.clearAnimation();
        }
        recyclerView.removeAllViews();
        this.mLayout = layoutManager;
        if (layoutManager != null) {
            if (layoutManager.mRecyclerView != null) {
                StringBuilder sb2 = new StringBuilder("LayoutManager ");
                sb2.append(layoutManager);
                sb2.append(" is already attached to a RecyclerView:");
                throw new IllegalArgumentException(a3.e.h(layoutManager.mRecyclerView, sb2));
            }
            layoutManager.setRecyclerView(this);
            if (this.mIsAttached) {
                this.mLayout.dispatchAttachedToWindow(this);
            }
        }
        this.mRecycler.o();
        requestLayout();
    }

    @Override // android.view.ViewGroup
    @Deprecated
    public void setLayoutTransition(LayoutTransition layoutTransition) {
        if (layoutTransition != null) {
            throw new IllegalArgumentException("Providing a LayoutTransition into RecyclerView is not supported. Please use setItemAnimator() instead for animating changes to the items in this RecyclerView");
        }
        super.setLayoutTransition(null);
    }

    @Override // android.view.View
    public void setNestedScrollingEnabled(boolean z5) {
        NestedScrollingChildHelper scrollingChildHelper = getScrollingChildHelper();
        if (scrollingChildHelper.f1544d) {
            ViewGroup viewGroup = scrollingChildHelper.f1543c;
            WeakHashMap weakHashMap = androidx.core.view.s0.a;
            androidx.core.view.j0.o(viewGroup);
        }
        scrollingChildHelper.f1544d = z5;
    }

    public void setOnFlingListener(OnFlingListener onFlingListener) {
        this.mOnFlingListener = onFlingListener;
    }

    @Deprecated
    public void setOnScrollListener(OnScrollListener onScrollListener) {
        this.mScrollListener = onScrollListener;
    }

    public void setPreserveFocusAfterLayout(boolean z5) {
        this.mPreserveFocusAfterLayout = z5;
    }

    public void setRecycledViewPool(RecycledViewPool recycledViewPool) {
        Recycler recycler = this.mRecycler;
        RecyclerView recyclerView = RecyclerView.this;
        Adapter adapter = recyclerView.mAdapter;
        RecycledViewPool recycledViewPool2 = recycler.f2317g;
        if (recycledViewPool2 != null) {
            recycledViewPool2.detachForPoolingContainer(adapter, false);
        }
        RecycledViewPool recycledViewPool3 = recycler.f2317g;
        if (recycledViewPool3 != null) {
            recycledViewPool3.detach();
        }
        recycler.f2317g = recycledViewPool;
        if (recycledViewPool != null && recyclerView.getAdapter() != null) {
            recycler.f2317g.attach();
        }
        recycler.g();
    }

    @Deprecated
    public void setRecyclerListener(RecyclerListener recyclerListener) {
        this.mRecyclerListener = recyclerListener;
    }

    public void setScrollState(int i5) {
        if (i5 == this.mScrollState) {
            return;
        }
        if (sVerboseLoggingEnabled) {
            StringBuilder r5 = a3.e.r(i5, "setting scroll state to ", " from ");
            r5.append(this.mScrollState);
            Log.d(TAG, r5.toString(), new Exception());
        }
        this.mScrollState = i5;
        if (i5 != 2) {
            ViewFlinger viewFlinger = this.mViewFlinger;
            RecyclerView.this.removeCallbacks(viewFlinger);
            viewFlinger.f2340i.abortAnimation();
            LayoutManager layoutManager = this.mLayout;
            if (layoutManager != null) {
                layoutManager.stopSmoothScroller();
            }
        }
        dispatchOnScrollStateChanged(i5);
    }

    public void setScrollingTouchSlop(int i5) {
        ViewConfiguration viewConfiguration = ViewConfiguration.get(getContext());
        if (i5 != 0) {
            if (i5 == 1) {
                this.mTouchSlop = viewConfiguration.getScaledPagingTouchSlop();
                return;
            }
            Log.w(TAG, "setScrollingTouchSlop(): bad argument constant " + i5 + "; using default value");
        }
        this.mTouchSlop = viewConfiguration.getScaledTouchSlop();
    }

    public void setViewCacheExtension(ViewCacheExtension viewCacheExtension) {
        this.mRecycler.f2318h = viewCacheExtension;
    }

    public boolean shouldDeferAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        if (!isComputingLayout()) {
            return false;
        }
        int contentChangeTypes = accessibilityEvent != null ? accessibilityEvent.getContentChangeTypes() : 0;
        this.mEatenAccessibilityChangeFlags |= contentChangeTypes != 0 ? contentChangeTypes : 0;
        return true;
    }

    public void smoothScrollBy(int i5, int i6) {
        smoothScrollBy(i5, i6, null);
    }

    public void smoothScrollToPosition(int i5) {
        if (this.mLayoutSuppressed) {
            return;
        }
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot smooth scroll without a LayoutManager set. Call setLayoutManager with a non-null argument.");
        } else {
            layoutManager.smoothScrollToPosition(this, this.mState, i5);
        }
    }

    public void startInterceptRequestLayout() {
        int i5 = this.mInterceptRequestLayoutDepth + 1;
        this.mInterceptRequestLayoutDepth = i5;
        if (i5 != 1 || this.mLayoutSuppressed) {
            return;
        }
        this.mLayoutWasDefered = false;
    }

    @Override // android.view.View
    public boolean startNestedScroll(int i5) {
        return getScrollingChildHelper().g(i5, 0);
    }

    public void stopInterceptRequestLayout(boolean z5) {
        if (this.mInterceptRequestLayoutDepth < 1) {
            if (sDebugAssertionsEnabled) {
                throw new IllegalStateException(a3.e.h(this, new StringBuilder("stopInterceptRequestLayout was called more times than startInterceptRequestLayout.")));
            }
            this.mInterceptRequestLayoutDepth = 1;
        }
        if (!z5 && !this.mLayoutSuppressed) {
            this.mLayoutWasDefered = false;
        }
        if (this.mInterceptRequestLayoutDepth == 1) {
            if (z5 && this.mLayoutWasDefered && !this.mLayoutSuppressed && this.mLayout != null && this.mAdapter != null) {
                dispatchLayout();
            }
            if (!this.mLayoutSuppressed) {
                this.mLayoutWasDefered = false;
            }
        }
        this.mInterceptRequestLayoutDepth--;
    }

    @Override // android.view.View
    public void stopNestedScroll() {
        getScrollingChildHelper().h(0);
    }

    public void stopScroll() {
        setScrollState(0);
        ViewFlinger viewFlinger = this.mViewFlinger;
        RecyclerView.this.removeCallbacks(viewFlinger);
        viewFlinger.f2340i.abortAnimation();
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            layoutManager.stopSmoothScroller();
        }
    }

    @Override // android.view.ViewGroup
    public final void suppressLayout(boolean z5) {
        if (z5 != this.mLayoutSuppressed) {
            assertNotInLayoutOrScroll("Do not suppressLayout in layout or scroll");
            if (z5) {
                long uptimeMillis = SystemClock.uptimeMillis();
                onTouchEvent(MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, DECELERATION_RATE, DECELERATION_RATE, 0));
                this.mLayoutSuppressed = true;
                this.mIgnoreMotionEventTillDown = true;
                stopScroll();
                return;
            }
            this.mLayoutSuppressed = false;
            if (this.mLayoutWasDefered && this.mLayout != null && this.mAdapter != null) {
                requestLayout();
            }
            this.mLayoutWasDefered = false;
        }
    }

    public void swapAdapter(Adapter adapter, boolean z5) {
        setLayoutFrozen(false);
        p(adapter, true, z5);
        processDataSetCompletelyChanged(true);
        requestLayout();
    }

    public void viewRangeUpdate(int i5, int i6, Object obj) {
        int i10;
        int i11;
        int h6 = this.mChildHelper.h();
        int i12 = i6 + i5;
        for (int i13 = 0; i13 < h6; i13++) {
            View g6 = this.mChildHelper.g(i13);
            ViewHolder childViewHolderInt = getChildViewHolderInt(g6);
            if (childViewHolderInt != null && !childViewHolderInt.shouldIgnore() && (i11 = childViewHolderInt.mPosition) >= i5 && i11 < i12) {
                childViewHolderInt.addFlags(2);
                childViewHolderInt.addChangePayload(obj);
                ((LayoutParams) g6.getLayoutParams()).f2310i = true;
            }
        }
        Recycler recycler = this.mRecycler;
        ArrayList arrayList = recycler.f2313c;
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            ViewHolder viewHolder = (ViewHolder) arrayList.get(size);
            if (viewHolder != null && (i10 = viewHolder.mPosition) >= i5 && i10 < i12) {
                viewHolder.addFlags(2);
                recycler.i(size);
            }
        }
    }

    public static abstract class Adapter {
        private final AdapterDataObservable mObservable = new AdapterDataObservable();
        private boolean mHasStableIds = false;
        private StateRestorationPolicy mStateRestorationPolicy = StateRestorationPolicy.f2302d;

        /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
        /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
        public static final class StateRestorationPolicy {

            /* renamed from: d, reason: collision with root package name */
            public static final StateRestorationPolicy f2302d;

            /* renamed from: e, reason: collision with root package name */
            public static final /* synthetic */ StateRestorationPolicy[] f2303e;

            static {
                StateRestorationPolicy stateRestorationPolicy = new StateRestorationPolicy("ALLOW", 0);
                f2302d = stateRestorationPolicy;
                f2303e = new StateRestorationPolicy[]{stateRestorationPolicy, new StateRestorationPolicy("PREVENT_WHEN_EMPTY", 1), new StateRestorationPolicy("PREVENT", 2)};
            }

            public static StateRestorationPolicy valueOf(String str) {
                return (StateRestorationPolicy) Enum.valueOf(StateRestorationPolicy.class, str);
            }

            public static StateRestorationPolicy[] values() {
                return (StateRestorationPolicy[]) f2303e.clone();
            }
        }

        public final void bindViewHolder(@NonNull ViewHolder viewHolder, int i5) {
            boolean z5 = viewHolder.mBindingAdapter == null;
            if (z5) {
                viewHolder.mPosition = i5;
                if (hasStableIds()) {
                    viewHolder.mItemId = getItemId(i5);
                }
                viewHolder.setFlags(1, 519);
                if (f1.e.a()) {
                    Trace.beginSection(String.format("RV onBindViewHolder type=0x%X", Integer.valueOf(viewHolder.mItemViewType)));
                }
            }
            viewHolder.mBindingAdapter = this;
            if (RecyclerView.sDebugAssertionsEnabled) {
                if (viewHolder.itemView.getParent() == null && viewHolder.itemView.isAttachedToWindow() != viewHolder.isTmpDetached()) {
                    throw new IllegalStateException("Temp-detached state out of sync with reality. holder.isTmpDetached(): " + viewHolder.isTmpDetached() + ", attached to window: " + viewHolder.itemView.isAttachedToWindow() + ", holder: " + viewHolder);
                }
                if (viewHolder.itemView.getParent() == null && viewHolder.itemView.isAttachedToWindow()) {
                    throw new IllegalStateException("Attempting to bind attached holder with no parent (AKA temp detached): " + viewHolder);
                }
            }
            onBindViewHolder(viewHolder, i5, viewHolder.getUnmodifiedPayloads());
            if (z5) {
                viewHolder.clearPayload();
                ViewGroup.LayoutParams layoutParams = viewHolder.itemView.getLayoutParams();
                if (layoutParams instanceof LayoutParams) {
                    ((LayoutParams) layoutParams).f2310i = true;
                }
                Trace.endSection();
            }
        }

        public boolean canRestoreState() {
            int ordinal = this.mStateRestorationPolicy.ordinal();
            return ordinal != 1 ? ordinal != 2 : getItemCount() > 0;
        }

        @NonNull
        public final ViewHolder createViewHolder(@NonNull ViewGroup viewGroup, int i5) {
            try {
                if (f1.e.a()) {
                    Trace.beginSection(String.format("RV onCreateViewHolder type=0x%X", Integer.valueOf(i5)));
                }
                ViewHolder onCreateViewHolder = onCreateViewHolder(viewGroup, i5);
                if (onCreateViewHolder.itemView.getParent() != null) {
                    throw new IllegalStateException("ViewHolder views must not be attached when created. Ensure that you are not passing 'true' to the attachToRoot parameter of LayoutInflater.inflate(..., boolean attachToRoot)");
                }
                onCreateViewHolder.mItemViewType = i5;
                Trace.endSection();
                return onCreateViewHolder;
            } catch (Throwable th2) {
                Trace.endSection();
                throw th2;
            }
        }

        public int findRelativeAdapterPositionIn(@NonNull Adapter adapter, @NonNull ViewHolder viewHolder, int i5) {
            if (adapter == this) {
                return i5;
            }
            return -1;
        }

        public abstract int getItemCount();

        public long getItemId(int i5) {
            return -1L;
        }

        public int getItemViewType(int i5) {
            return 0;
        }

        @NonNull
        public final StateRestorationPolicy getStateRestorationPolicy() {
            return this.mStateRestorationPolicy;
        }

        public final boolean hasObservers() {
            return this.mObservable.a();
        }

        public final boolean hasStableIds() {
            return this.mHasStableIds;
        }

        public final void notifyDataSetChanged() {
            this.mObservable.b();
        }

        public final void notifyItemChanged(int i5) {
            this.mObservable.d(i5, 1, null);
        }

        public final void notifyItemInserted(int i5) {
            this.mObservable.e(i5, 1);
        }

        public final void notifyItemMoved(int i5, int i6) {
            this.mObservable.c(i5, i6);
        }

        public final void notifyItemRangeChanged(int i5, int i6) {
            this.mObservable.d(i5, i6, null);
        }

        public final void notifyItemRangeInserted(int i5, int i6) {
            this.mObservable.e(i5, i6);
        }

        public final void notifyItemRangeRemoved(int i5, int i6) {
            this.mObservable.f(i5, i6);
        }

        public final void notifyItemRemoved(int i5) {
            this.mObservable.f(i5, 1);
        }

        public void onAttachedToRecyclerView(@NonNull RecyclerView recyclerView) {
        }

        public abstract void onBindViewHolder(ViewHolder viewHolder, int i5);

        public void onBindViewHolder(@NonNull ViewHolder viewHolder, int i5, @NonNull List<Object> list) {
            onBindViewHolder(viewHolder, i5);
        }

        @NonNull
        public abstract ViewHolder onCreateViewHolder(@NonNull ViewGroup viewGroup, int i5);

        public void onDetachedFromRecyclerView(@NonNull RecyclerView recyclerView) {
        }

        public boolean onFailedToRecycleView(@NonNull ViewHolder viewHolder) {
            return false;
        }

        public void onViewAttachedToWindow(@NonNull ViewHolder viewHolder) {
        }

        public void onViewDetachedFromWindow(@NonNull ViewHolder viewHolder) {
        }

        public void onViewRecycled(@NonNull ViewHolder viewHolder) {
        }

        public void registerAdapterDataObserver(@NonNull AdapterDataObserver adapterDataObserver) {
            this.mObservable.registerObserver(adapterDataObserver);
        }

        public void setHasStableIds(boolean z5) {
            if (hasObservers()) {
                throw new IllegalStateException("Cannot change whether this adapter has stable IDs while the adapter has registered observers.");
            }
            this.mHasStableIds = z5;
        }

        public void setStateRestorationPolicy(@NonNull StateRestorationPolicy stateRestorationPolicy) {
            this.mStateRestorationPolicy = stateRestorationPolicy;
            this.mObservable.g();
        }

        public void unregisterAdapterDataObserver(@NonNull AdapterDataObserver adapterDataObserver) {
            this.mObservable.unregisterObserver(adapterDataObserver);
        }

        public final void notifyItemChanged(int i5, Object obj) {
            this.mObservable.d(i5, 1, obj);
        }

        public final void notifyItemRangeChanged(int i5, int i6, Object obj) {
            this.mObservable.d(i5, i6, obj);
        }
    }

    public RecyclerView(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        float a;
        Constructor constructor;
        this.mObserver = new RecyclerViewDataObserver();
        this.mRecycler = new Recycler();
        this.mViewInfoStore = new ViewInfoStore();
        this.mUpdateChildViewsRunnable = new v0(0, this);
        this.mTempRect = new Rect();
        this.mTempRect2 = new Rect();
        this.mTempRectF = new RectF();
        this.mRecyclerListeners = new ArrayList();
        this.mItemDecorations = new ArrayList<>();
        this.mOnItemTouchListeners = new ArrayList<>();
        this.mInterceptRequestLayoutDepth = 0;
        this.mDataSetHasChangedAfterLayout = false;
        this.mDispatchItemsChangedEvent = false;
        this.mLayoutOrScrollCounter = 0;
        this.mDispatchScrollCounter = 0;
        this.mEdgeEffectFactory = sDefaultEdgeEffectFactory;
        this.mItemAnimator = new r();
        this.mScrollState = 0;
        this.mScrollPointerId = -1;
        this.mScaledHorizontalScrollFactor = Float.MIN_VALUE;
        this.mScaledVerticalScrollFactor = Float.MIN_VALUE;
        this.mPreserveFocusAfterLayout = true;
        this.mViewFlinger = new ViewFlinger();
        Object[] objArr = null;
        this.mPrefetchRegistry = ALLOW_THREAD_GAP_WORK ? new GapWorker.LayoutPrefetchRegistryImpl() : null;
        State state = new State();
        state.a = -1;
        state.f2327b = 0;
        state.f2328c = 0;
        state.f2329d = 1;
        state.f2330e = 0;
        state.f2331f = false;
        state.f2332g = false;
        state.f2333h = false;
        state.f2334i = false;
        state.j = false;
        state.k = false;
        this.mState = state;
        this.mItemsAddedOrRemoved = false;
        this.mItemsChanged = false;
        this.mItemAnimatorListener = new c1(this);
        this.mPostedAnimatorRunner = false;
        this.mMinMaxLayoutPositions = new int[2];
        this.mScrollOffset = new int[2];
        this.mNestedOffsets = new int[2];
        this.mReusableIntPair = new int[2];
        this.mPendingAccessibilityImportanceChange = new ArrayList();
        this.mItemAnimatorRunner = new w0(this);
        this.mLastAutoMeasureNonExactMeasuredWidth = 0;
        this.mLastAutoMeasureNonExactMeasuredHeight = 0;
        this.mViewInfoProcessCallback = new x0(this);
        y0 y0Var = new y0(this);
        this.mDifferentialMotionFlingTarget = y0Var;
        this.mDifferentialMotionFlingController = new DifferentialMotionFlingController(getContext(), y0Var);
        setScrollContainer(true);
        setFocusableInTouchMode(true);
        ViewConfiguration viewConfiguration = ViewConfiguration.get(context);
        this.mTouchSlop = viewConfiguration.getScaledTouchSlop();
        int i6 = Build.VERSION.SDK_INT;
        if (i6 >= 26) {
            Method method = androidx.core.view.t0.a;
            a = jf.a.g(viewConfiguration);
        } else {
            a = androidx.core.view.t0.a(viewConfiguration, context);
        }
        this.mScaledHorizontalScrollFactor = a;
        this.mScaledVerticalScrollFactor = i6 >= 26 ? jf.a.h(viewConfiguration) : androidx.core.view.t0.a(viewConfiguration, context);
        this.mMinFlingVelocity = viewConfiguration.getScaledMinimumFlingVelocity();
        this.mMaxFlingVelocity = viewConfiguration.getScaledMaximumFlingVelocity();
        this.mPhysicalCoef = context.getResources().getDisplayMetrics().density * 160.0f * 386.0878f * 0.84f;
        setWillNotDraw(getOverScrollMode() == 2);
        this.mItemAnimator.setListener(this.mItemAnimatorListener);
        initAdapterManager();
        this.mChildHelper = new ChildHelper(new z0(this));
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        if ((i6 >= 26 ? androidx.core.view.l0.a(this) : 0) == 0 && i6 >= 26) {
            androidx.core.view.l0.b(this, 8);
        }
        if (getImportantForAccessibility() == 0) {
            setImportantForAccessibility(1);
        }
        this.mAccessibilityManager = (AccessibilityManager) getContext().getSystemService("accessibility");
        setAccessibilityDelegateCompat(new RecyclerViewAccessibilityDelegate(this));
        int[] iArr = z2.a.a;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr, i5, 0);
        androidx.core.view.s0.o(this, context, iArr, attributeSet, obtainStyledAttributes, i5, 0);
        String string = obtainStyledAttributes.getString(8);
        if (obtainStyledAttributes.getInt(2, -1) == -1) {
            setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.CONTROL);
        }
        this.mClipToPadding = obtainStyledAttributes.getBoolean(1, true);
        boolean z5 = obtainStyledAttributes.getBoolean(3, false);
        this.mEnableFastScroller = z5;
        if (z5) {
            initFastScroller((StateListDrawable) obtainStyledAttributes.getDrawable(6), obtainStyledAttributes.getDrawable(7), (StateListDrawable) obtainStyledAttributes.getDrawable(4), obtainStyledAttributes.getDrawable(5));
        }
        obtainStyledAttributes.recycle();
        this.mLowResRotaryEncoderFeature = context.getPackageManager().hasSystemFeature(LOW_RES_ROTARY_ENCODER_FEATURE);
        if (string != null) {
            String trim = string.trim();
            if (!trim.isEmpty()) {
                if (trim.charAt(0) == '.') {
                    trim = context.getPackageName() + trim;
                } else if (!trim.contains(".")) {
                    trim = RecyclerView.class.getPackage().getName() + '.' + trim;
                }
                try {
                    Class<? extends U> asSubclass = Class.forName(trim, false, isInEditMode() ? getClass().getClassLoader() : context.getClassLoader()).asSubclass(LayoutManager.class);
                    try {
                        constructor = asSubclass.getConstructor(LAYOUT_MANAGER_CONSTRUCTOR_SIGNATURE);
                        objArr = new Object[]{context, attributeSet, Integer.valueOf(i5), 0};
                    } catch (NoSuchMethodException e9) {
                        try {
                            constructor = asSubclass.getConstructor(null);
                        } catch (NoSuchMethodException e10) {
                            e10.initCause(e9);
                            throw new IllegalStateException(attributeSet.getPositionDescription() + ": Error creating LayoutManager " + trim, e10);
                        }
                    }
                    constructor.setAccessible(true);
                    setLayoutManager((LayoutManager) constructor.newInstance(objArr));
                } catch (ClassCastException e11) {
                    throw new IllegalStateException(attributeSet.getPositionDescription() + ": Class is not a LayoutManager " + trim, e11);
                } catch (ClassNotFoundException e12) {
                    throw new IllegalStateException(attributeSet.getPositionDescription() + ": Unable to find LayoutManager " + trim, e12);
                } catch (IllegalAccessException e13) {
                    throw new IllegalStateException(attributeSet.getPositionDescription() + ": Cannot access non-public constructor " + trim, e13);
                } catch (InstantiationException e14) {
                    throw new IllegalStateException(attributeSet.getPositionDescription() + ": Could not instantiate the LayoutManager: " + trim, e14);
                } catch (InvocationTargetException e15) {
                    throw new IllegalStateException(attributeSet.getPositionDescription() + ": Could not instantiate the LayoutManager: " + trim, e15);
                }
            }
        }
        int[] iArr2 = NESTED_SCROLLING_ATTRS;
        TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, iArr2, i5, 0);
        androidx.core.view.s0.o(this, context, iArr2, attributeSet, obtainStyledAttributes2, i5, 0);
        boolean z6 = obtainStyledAttributes2.getBoolean(0, true);
        obtainStyledAttributes2.recycle();
        setNestedScrollingEnabled(z6);
        Intrinsics.checkNotNullParameter(this, "<this>");
        setTag(com.discord.R.id.is_pooling_container_tag, Boolean.TRUE);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0038 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public ViewHolder findViewHolderForPosition(int i5, boolean z5) {
        ChildHelper childHelper;
        int h6 = this.mChildHelper.h();
        ViewHolder viewHolder = null;
        for (int i6 = 0; i6 < h6; i6++) {
            ViewHolder childViewHolderInt = getChildViewHolderInt(this.mChildHelper.g(i6));
            if (childViewHolderInt != null && !childViewHolderInt.isRemoved()) {
                if (z5) {
                    if (childViewHolderInt.mPosition != i5) {
                        continue;
                    }
                    childHelper = this.mChildHelper;
                    if (childHelper.f2264c.contains(childViewHolderInt.itemView)) {
                        return childViewHolderInt;
                    }
                    viewHolder = childViewHolderInt;
                } else {
                    if (childViewHolderInt.getLayoutPosition() != i5) {
                        continue;
                    }
                    childHelper = this.mChildHelper;
                    if (childHelper.f2264c.contains(childViewHolderInt.itemView)) {
                    }
                }
            }
        }
        return viewHolder;
    }

    public void onExitLayoutOrScroll(boolean z5) {
        int i5 = this.mLayoutOrScrollCounter - 1;
        this.mLayoutOrScrollCounter = i5;
        if (i5 < 1) {
            if (sDebugAssertionsEnabled && i5 < 0) {
                throw new IllegalStateException(a3.e.h(this, new StringBuilder("layout or scroll counter cannot go below zero.Some calls are not matching")));
            }
            this.mLayoutOrScrollCounter = 0;
            if (z5) {
                int i6 = this.mEatenAccessibilityChangeFlags;
                this.mEatenAccessibilityChangeFlags = 0;
                if (i6 != 0 && isAccessibilityEnabled()) {
                    AccessibilityEvent obtain = AccessibilityEvent.obtain();
                    obtain.setEventType(ItemAnimator.FLAG_MOVED);
                    obtain.setContentChangeTypes(i6);
                    sendAccessibilityEventUnchecked(obtain);
                }
                dispatchPendingImportantForAccessibilityChanges();
            }
        }
    }

    public void smoothScrollBy(int i5, int i6, Interpolator interpolator) {
        smoothScrollBy(i5, i6, interpolator, Integer.MIN_VALUE);
    }

    public boolean dispatchNestedPreScroll(int i5, int i6, int[] iArr, int[] iArr2, int i10) {
        return getScrollingChildHelper().c(i5, i6, iArr, iArr2, i10);
    }

    public boolean dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr, int i12) {
        return getScrollingChildHelper().d(i5, i6, i10, i11, iArr, i12, null);
    }

    public boolean hasNestedScrollingParent(int i5) {
        return getScrollingChildHelper().f(i5);
    }

    public void smoothScrollBy(int i5, int i6, Interpolator interpolator, int i10) {
        smoothScrollBy(i5, i6, interpolator, i10, false);
    }

    public boolean startNestedScroll(int i5, int i6) {
        return getScrollingChildHelper().g(i5, i6);
    }

    public void stopNestedScroll(int i5) {
        getScrollingChildHelper().h(i5);
    }

    public static class LayoutParams extends ViewGroup.MarginLayoutParams {

        /* renamed from: d, reason: collision with root package name */
        public ViewHolder f2308d;

        /* renamed from: e, reason: collision with root package name */
        public final Rect f2309e;

        /* renamed from: i, reason: collision with root package name */
        public boolean f2310i;

        /* renamed from: v, reason: collision with root package name */
        public boolean f2311v;

        public LayoutParams(Context context, AttributeSet attributeSet) {
            super(context, attributeSet);
            this.f2309e = new Rect();
            this.f2310i = true;
            this.f2311v = false;
        }

        public LayoutParams(int i5, int i6) {
            super(i5, i6);
            this.f2309e = new Rect();
            this.f2310i = true;
            this.f2311v = false;
        }

        public LayoutParams(ViewGroup.MarginLayoutParams marginLayoutParams) {
            super(marginLayoutParams);
            this.f2309e = new Rect();
            this.f2310i = true;
            this.f2311v = false;
        }

        public LayoutParams(ViewGroup.LayoutParams layoutParams) {
            super(layoutParams);
            this.f2309e = new Rect();
            this.f2310i = true;
            this.f2311v = false;
        }

        public LayoutParams(LayoutParams layoutParams) {
            super((ViewGroup.LayoutParams) layoutParams);
            this.f2309e = new Rect();
            this.f2310i = true;
            this.f2311v = false;
        }
    }

    public void smoothScrollBy(int i5, int i6, Interpolator interpolator, int i10, boolean z5) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager == null) {
            Log.e(TAG, "Cannot smooth scroll without a LayoutManager set. Call setLayoutManager with a non-null argument.");
            return;
        }
        if (this.mLayoutSuppressed) {
            return;
        }
        if (!layoutManager.canScrollHorizontally()) {
            i5 = 0;
        }
        if (!this.mLayout.canScrollVertically()) {
            i6 = 0;
        }
        if (i5 == 0 && i6 == 0) {
            return;
        }
        if (i10 != Integer.MIN_VALUE && i10 <= 0) {
            scrollBy(i5, i6);
            return;
        }
        if (z5) {
            int i11 = i5 != 0 ? 1 : 0;
            if (i6 != 0) {
                i11 |= 2;
            }
            startNestedScroll(i11, 1);
        }
        this.mViewFlinger.c(i5, i6, interpolator, i10);
    }

    public final void dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr, int i12, @NonNull int[] iArr2) {
        getScrollingChildHelper().d(i5, i6, i10, i11, iArr, i12, iArr2);
    }

    public void addItemDecoration(@NonNull ItemDecoration itemDecoration) {
        addItemDecoration(itemDecoration, -1);
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        LayoutManager layoutManager = this.mLayout;
        if (layoutManager != null) {
            return layoutManager.generateLayoutParams(layoutParams);
        }
        throw new IllegalStateException(a3.e.h(this, new StringBuilder("RecyclerView has no LayoutManager")));
    }

    public static abstract class AdapterDataObserver {
        public void a() {
        }

        public void b(int i5, int i6, Object obj) {
        }

        public void c(int i5, int i6) {
        }

        public void e(int i5, int i6) {
        }

        public void f() {
        }

        public void d(int i5, int i6) {
        }
    }
}
