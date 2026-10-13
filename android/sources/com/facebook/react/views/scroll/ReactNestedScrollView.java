package com.facebook.react.views.scroll;

import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Point;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Trace;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.OverScroller;
import androidx.annotation.NonNull;
import androidx.core.view.s0;
import androidx.core.widget.NestedScrollView;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.R;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.uimanager.BackgroundStyleApplicator;
import com.facebook.react.uimanager.LengthPercentage;
import com.facebook.react.uimanager.LengthPercentageType;
import com.facebook.react.uimanager.MeasureSpecAssertions;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.ReactClippingViewGroup;
import com.facebook.react.uimanager.ReactClippingViewGroupHelper;
import com.facebook.react.uimanager.ReactOverflowViewWithInset;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.NativeGestureUtil;
import com.facebook.react.uimanager.style.BorderRadiusProp;
import com.facebook.react.uimanager.style.BorderStyle;
import com.facebook.react.uimanager.style.LogicalEdge;
import com.facebook.react.uimanager.style.Overflow;
import com.facebook.react.views.scroll.MaintainVisibleScrollPositionHelper;
import com.facebook.react.views.scroll.ReactScrollViewHelper;
import io.sentry.config.a;
import java.lang.reflect.Field;
import java.util.List;
import java.util.Set;
import java.util.WeakHashMap;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
class ReactNestedScrollView extends NestedScrollView implements ReactClippingViewGroup, ViewGroup.OnHierarchyChangeListener, View.OnLayoutChangeListener, ReactAccessibleScrollView, ReactOverflowViewWithInset, ReactScrollViewHelper.HasScrollState, ReactScrollViewHelper.HasStateWrapper, ReactScrollViewHelper.HasFlingAnimator, ReactScrollViewHelper.HasScrollEventThrottle, ReactScrollViewHelper.HasSmoothScroll, VirtualViewContainer {
    private static final int UNSET_CONTENT_OFFSET = -1;
    private static Field sScrollerField = null;
    private static boolean sTriedToGetScrollerField = false;
    private final ValueAnimator DEFAULT_FLING_ANIMATOR;
    private boolean mActivelyScrolling;
    private Rect mClippingRect;
    private View mContentView;
    private ReadableMap mCurrentContentOffset;
    private boolean mDisableIntervalMomentum;
    private boolean mDragging;
    private boolean mEmittedOverScrollSinceScrollBegin;
    private Drawable mEndBackground;
    private int mEndFillColor;
    private int mFadingEdgeLengthEnd;
    private int mFadingEdgeLengthStart;
    private final FpsListener mFpsListener;
    private long mLastScrollDispatchTime;
    private MaintainVisibleScrollPositionHelper mMaintainVisibleContentPositionHelper;
    private final OnScrollDispatchHelper mOnScrollDispatchHelper;
    private Overflow mOverflow;
    private Rect mOverflowInset;
    private boolean mPagingEnabled;
    private int mPendingContentOffsetX;
    private int mPendingContentOffsetY;
    private PointerEvents mPointerEvents;
    private Runnable mPostTouchRunnable;
    private ReactScrollViewHelper.ReactScrollViewScrollState mReactScrollViewScrollState;
    private boolean mRemoveClippedSubviews;
    private boolean mScrollEnabled;
    private int mScrollEventThrottle;
    private String mScrollPerfTag;
    private final OverScroller mScroller;
    private boolean mScrollsChildToFocus;
    private boolean mSendMomentumEvents;
    private int mSnapInterval;
    private List<Integer> mSnapOffsets;
    private int mSnapToAlignment;
    private boolean mSnapToEnd;
    private boolean mSnapToStart;
    private StateWrapper mStateWrapper;
    private final Rect mTempRect;
    private final VelocityHelper mVelocityHelper;
    private VirtualViewContainerState mVirtualViewContainerState;

    /* renamed from: com.facebook.react.views.scroll.ReactNestedScrollView$3, reason: invalid class name */
    public static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$facebook$react$uimanager$style$Overflow;

        static {
            int[] iArr = new int[Overflow.values().length];
            $SwitchMap$com$facebook$react$uimanager$style$Overflow = iArr;
            try {
                iArr[Overflow.HIDDEN.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$facebook$react$uimanager$style$Overflow[Overflow.SCROLL.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$facebook$react$uimanager$style$Overflow[Overflow.VISIBLE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public ReactNestedScrollView(Context context) {
        this(context, null);
    }

    private void cancelPostTouchScrolling() {
        Runnable runnable = this.mPostTouchRunnable;
        if (runnable != null) {
            removeCallbacks(runnable);
            this.mPostTouchRunnable = null;
            getFlingAnimator().cancel();
        }
    }

    private int correctFlingVelocityY(int i5) {
        if (Build.VERSION.SDK_INT != 28) {
            return i5;
        }
        float signum = Math.signum(this.mOnScrollDispatchHelper.getYFlingVelocity());
        if (signum == 0.0f) {
            signum = Math.signum(i5);
        }
        return (int) (Math.abs(i5) * signum);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void disableFpsListener() {
        if (isScrollPerfLoggingEnabled()) {
            a.f(this.mFpsListener);
            a.f(this.mScrollPerfTag);
            this.mFpsListener.disable(this.mScrollPerfTag);
        }
    }

    private void enableFpsListener() {
        if (isScrollPerfLoggingEnabled()) {
            a.f(this.mFpsListener);
            a.f(this.mScrollPerfTag);
            this.mFpsListener.enable(this.mScrollPerfTag);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x018e, code lost:
    
        if (getScrollY() <= r7) goto L84;
     */
    /* JADX WARN: Removed duplicated region for block: B:50:0x01bf  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void flingAndSnap(int i5) {
        int floor;
        int min;
        int i6;
        int i10;
        int i11;
        int top;
        int top2;
        int height;
        int i12;
        int min2;
        OverScroller overScroller;
        if (getChildCount() <= 0) {
            return;
        }
        if (this.mSnapInterval == 0 && this.mSnapOffsets == null && this.mSnapToAlignment == 0) {
            smoothScrollAndSnap(i5);
            return;
        }
        boolean z5 = getFlingAnimator() != this.DEFAULT_FLING_ANIMATOR;
        int maxScrollY = getMaxScrollY();
        int predictFinalScrollPosition = predictFinalScrollPosition(i5);
        if (this.mDisableIntervalMomentum) {
            predictFinalScrollPosition = getScrollY();
        }
        int height2 = (getHeight() - getPaddingBottom()) - getPaddingTop();
        List<Integer> list = this.mSnapOffsets;
        int i13 = 2;
        if (list != null) {
            i10 = list.get(0).intValue();
            i6 = ((Integer) d.g(1, this.mSnapOffsets)).intValue();
            min = maxScrollY;
            floor = 0;
            for (int i14 = 0; i14 < this.mSnapOffsets.size(); i14++) {
                int intValue = this.mSnapOffsets.get(i14).intValue();
                if (intValue <= predictFinalScrollPosition && predictFinalScrollPosition - intValue < predictFinalScrollPosition - floor) {
                    floor = intValue;
                }
                if (intValue >= predictFinalScrollPosition && intValue - predictFinalScrollPosition < min - predictFinalScrollPosition) {
                    min = intValue;
                }
            }
        } else {
            int i15 = this.mSnapToAlignment;
            if (i15 != 0) {
                int i16 = this.mSnapInterval;
                if (i16 > 0) {
                    double d6 = predictFinalScrollPosition / i16;
                    double floor2 = Math.floor(d6);
                    int i17 = this.mSnapInterval;
                    int max = Math.max(getItemStartOffset(i15, (int) (floor2 * i17), i17, height2), 0);
                    int i18 = this.mSnapToAlignment;
                    double ceil = Math.ceil(d6);
                    int i19 = this.mSnapInterval;
                    min = Math.min(getItemStartOffset(i18, (int) (ceil * i19), i19, height2), maxScrollY);
                    i6 = maxScrollY;
                    floor = max;
                    i10 = 0;
                } else {
                    ViewGroup viewGroup = (ViewGroup) getContentView();
                    int i20 = maxScrollY;
                    int i21 = i20;
                    int i22 = 0;
                    int i23 = 0;
                    int i24 = 0;
                    while (i22 < viewGroup.getChildCount()) {
                        View childAt = viewGroup.getChildAt(i22);
                        int i25 = this.mSnapToAlignment;
                        if (i25 != 1) {
                            if (i25 != i13) {
                                i11 = i13;
                                if (i25 != 3) {
                                    throw new IllegalStateException("Invalid SnapToAlignment value: " + this.mSnapToAlignment);
                                }
                                top2 = childAt.getTop();
                                height = height2 - childAt.getHeight();
                            } else {
                                i11 = i13;
                                top2 = childAt.getTop();
                                height = (height2 - childAt.getHeight()) / 2;
                            }
                            top = top2 - height;
                        } else {
                            i11 = i13;
                            top = childAt.getTop();
                        }
                        if (top <= predictFinalScrollPosition && predictFinalScrollPosition - top < predictFinalScrollPosition - i23) {
                            i23 = top;
                        }
                        if (top >= predictFinalScrollPosition && top - predictFinalScrollPosition < i21 - predictFinalScrollPosition) {
                            i21 = top;
                        }
                        i20 = Math.min(i20, top);
                        i24 = Math.max(i24, top);
                        i22++;
                        i13 = i11;
                    }
                    floor = Math.max(i23, i20);
                    min = Math.min(i21, i24);
                }
            } else {
                double snapInterval = getSnapInterval();
                double d7 = predictFinalScrollPosition / snapInterval;
                floor = (int) (Math.floor(d7) * snapInterval);
                min = Math.min((int) (Math.ceil(d7) * snapInterval), maxScrollY);
            }
            i6 = maxScrollY;
            i10 = 0;
        }
        int i26 = predictFinalScrollPosition - floor;
        int i27 = min - predictFinalScrollPosition;
        int i28 = Math.abs(i26) < Math.abs(i27) ? floor : min;
        if (!this.mSnapToEnd && predictFinalScrollPosition >= i6) {
            if (getScrollY() < i6) {
                i12 = i5;
                i10 = i6;
                min2 = Math.min(Math.max(0, i10), maxScrollY);
                if (z5) {
                }
                reactSmoothScrollTo(getScrollX(), min2);
            }
            i10 = predictFinalScrollPosition;
        } else if (this.mSnapToStart || predictFinalScrollPosition > i10) {
            if (i5 > 0) {
                i12 = !z5 ? i5 + ((int) (i27 * 10.0d)) : i5;
                i10 = min;
            } else if (i5 < 0) {
                i12 = !z5 ? i5 - ((int) (i26 * 10.0d)) : i5;
                i10 = floor;
            } else {
                i12 = i5;
                i10 = i28;
            }
            min2 = Math.min(Math.max(0, i10), maxScrollY);
            if (!z5 || (overScroller = this.mScroller) == null) {
                reactSmoothScrollTo(getScrollX(), min2);
            }
            this.mActivelyScrolling = true;
            int scrollX = getScrollX();
            int scrollY = getScrollY();
            if (i12 == 0) {
                i12 = min2 - getScrollY();
            }
            overScroller.fling(scrollX, scrollY, 0, i12, 0, 0, min2, min2, 0, (min2 == 0 || min2 == maxScrollY) ? height2 / 2 : 0);
            postInvalidateOnAnimation();
            return;
        }
        i12 = i5;
        min2 = Math.min(Math.max(0, i10), maxScrollY);
        if (z5) {
        }
        reactSmoothScrollTo(getScrollX(), min2);
    }

    private View getContentView() {
        return getChildAt(0);
    }

    private int getItemStartOffset(int i5, int i6, int i10, int i11) {
        int i12;
        if (i5 == 1) {
            return i6;
        }
        if (i5 == 2) {
            i12 = (i11 - i10) / 2;
        } else {
            if (i5 != 3) {
                throw new IllegalStateException("Invalid SnapToAlignment value: " + this.mSnapToAlignment);
            }
            i12 = i11 - i10;
        }
        return i6 - i12;
    }

    private int getMaxScrollY() {
        View view = this.mContentView;
        return Math.max(0, (view == null ? 0 : view.getHeight()) - ((getHeight() - getPaddingBottom()) - getPaddingTop()));
    }

    private int getScrollDelta(View view) {
        view.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(view, this.mTempRect);
        return computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
    }

    private int getSnapInterval() {
        int i5 = this.mSnapInterval;
        return i5 != 0 ? i5 : getHeight();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handlePostTouchScrolling(int i5, int i6) {
        if (this.mPostTouchRunnable != null) {
            return;
        }
        if (this.mSendMomentumEvents) {
            enableFpsListener();
            ReactScrollViewHelper.emitScrollMomentumBeginEvent(this, i5, i6);
        }
        this.mActivelyScrolling = false;
        Runnable runnable = new Runnable() { // from class: com.facebook.react.views.scroll.ReactNestedScrollView.2
            private boolean mSnappingToPage = false;
            private int mStableFrames = 0;

            @Override // java.lang.Runnable
            public void run() {
                if (ReactNestedScrollView.this.mActivelyScrolling) {
                    ReactNestedScrollView.this.mActivelyScrolling = false;
                    this.mStableFrames = 0;
                    ReactNestedScrollView.this.postOnAnimationDelayed(this, 20L);
                    return;
                }
                ReactScrollViewHelper.updateFabricScrollState(ReactNestedScrollView.this);
                int i10 = this.mStableFrames + 1;
                this.mStableFrames = i10;
                if (i10 >= 3) {
                    ReactNestedScrollView.this.mPostTouchRunnable = null;
                    if (ReactNestedScrollView.this.mSendMomentumEvents) {
                        ReactScrollViewHelper.emitScrollMomentumEndEvent(ReactNestedScrollView.this);
                    }
                    ReactScrollViewHelper.notifyUserDrivenScrollEnded_internal(ReactNestedScrollView.this);
                    ReactNestedScrollView.this.disableFpsListener();
                    return;
                }
                if (ReactNestedScrollView.this.mPagingEnabled && !this.mSnappingToPage) {
                    this.mSnappingToPage = true;
                    ReactNestedScrollView.this.flingAndSnap(0);
                }
                ReactNestedScrollView.this.postOnAnimationDelayed(this, 20L);
            }
        };
        this.mPostTouchRunnable = runnable;
        postOnAnimationDelayed(runnable, 20L);
    }

    private void initView() {
        this.mOverflowInset = new Rect();
        this.mVirtualViewContainerState = null;
        this.mActivelyScrolling = false;
        this.mClippingRect = null;
        this.mOverflow = ReactNativeFeatureFlags.enablePropsUpdateReconciliationAndroid() ? Overflow.VISIBLE : Overflow.SCROLL;
        this.mDragging = false;
        this.mPagingEnabled = false;
        this.mPostTouchRunnable = null;
        this.mRemoveClippedSubviews = false;
        this.mScrollEnabled = true;
        this.mSendMomentumEvents = false;
        this.mScrollPerfTag = null;
        this.mEndBackground = null;
        this.mEndFillColor = 0;
        this.mDisableIntervalMomentum = false;
        this.mSnapInterval = 0;
        this.mSnapOffsets = null;
        this.mSnapToStart = true;
        this.mSnapToEnd = true;
        this.mSnapToAlignment = 0;
        this.mContentView = null;
        this.mCurrentContentOffset = null;
        this.mPendingContentOffsetX = -1;
        this.mPendingContentOffsetY = -1;
        this.mStateWrapper = null;
        this.mReactScrollViewScrollState = new ReactScrollViewHelper.ReactScrollViewScrollState();
        this.mPointerEvents = PointerEvents.AUTO;
        this.mLastScrollDispatchTime = 0L;
        this.mScrollEventThrottle = 0;
        this.mMaintainVisibleContentPositionHelper = null;
        this.mFadingEdgeLengthStart = 0;
        this.mFadingEdgeLengthEnd = 0;
        this.mEmittedOverScrollSinceScrollBegin = false;
        this.mScrollsChildToFocus = true;
    }

    private boolean isContentReady() {
        View contentView = getContentView();
        return (contentView == null || contentView.getWidth() == 0 || contentView.getHeight() == 0) ? false : true;
    }

    private boolean isScrollPerfLoggingEnabled() {
        String str;
        return (this.mFpsListener == null || (str = this.mScrollPerfTag) == null || str.isEmpty()) ? false : true;
    }

    private int predictFinalScrollPosition(int i5) {
        return getFlingAnimator() == this.DEFAULT_FLING_ANIMATOR ? ReactScrollViewHelper.predictFinalScrollPosition(this, 0, i5, 0, getMaxScrollY()).y : ReactScrollViewHelper.getNextFlingStartValue(this, getScrollY(), getReactScrollViewScrollState().getFinalAnimatedPositionScroll().y, i5) + getFlingExtrapolatedDistance(i5);
    }

    private void recreateFlingAnimation(int i5) {
        if (getFlingAnimator().isRunning()) {
            getFlingAnimator().cancel();
        }
        OverScroller overScroller = this.mScroller;
        if (overScroller == null || overScroller.isFinished()) {
            return;
        }
        int currY = this.mScroller.getCurrY();
        boolean computeScrollOffset = this.mScroller.computeScrollOffset();
        this.mScroller.forceFinished(true);
        if (!computeScrollOffset) {
            scrollTo(getScrollX(), (this.mScroller.getCurrY() - currY) + i5);
            return;
        }
        this.mScroller.fling(getScrollX(), i5, 0, (int) (this.mScroller.getCurrVelocity() * Math.signum(this.mScroller.getFinalY() - this.mScroller.getStartY())), 0, 0, 0, Integer.MAX_VALUE);
    }

    private void scrollToChild(View view) {
        View view2 = null;
        for (View view3 = view; view3 != null && view3 != this; view3 = (View) view3.getParent()) {
            if (view3 instanceof ReactNestedScrollView) {
                view2 = view3;
            }
        }
        if (view2 != null) {
            view = view2;
        }
        Rect rect = new Rect();
        view.getDrawingRect(rect);
        offsetDescendantRectToMyCoords(view, rect);
        int computeScrollDeltaToGetChildRectOnScreen = computeScrollDeltaToGetChildRectOnScreen(rect);
        if (computeScrollDeltaToGetChildRectOnScreen != 0) {
            scrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
        }
    }

    private void setPendingContentOffsets(int i5, int i6) {
        if (isContentReady()) {
            this.mPendingContentOffsetX = -1;
            this.mPendingContentOffsetY = -1;
        } else {
            this.mPendingContentOffsetX = i5;
            this.mPendingContentOffsetY = i6;
        }
    }

    private void smoothScrollAndSnap(int i5) {
        double snapInterval = getSnapInterval();
        double nextFlingStartValue = ReactScrollViewHelper.getNextFlingStartValue(this, getScrollY(), getReactScrollViewScrollState().getFinalAnimatedPositionScroll().y, i5);
        double predictFinalScrollPosition = predictFinalScrollPosition(i5);
        double d6 = nextFlingStartValue / snapInterval;
        int floor = (int) Math.floor(d6);
        int ceil = (int) Math.ceil(d6);
        int round = (int) Math.round(d6);
        int round2 = (int) Math.round(predictFinalScrollPosition / snapInterval);
        if (i5 > 0 && ceil == floor) {
            ceil++;
        } else if (i5 < 0 && floor == ceil) {
            floor--;
        }
        if (i5 > 0 && round < ceil && round2 > floor) {
            round = ceil;
        } else if (i5 < 0 && round > floor && round2 < ceil) {
            round = floor;
        }
        double d7 = round * snapInterval;
        if (d7 != nextFlingStartValue) {
            this.mActivelyScrolling = true;
            reactSmoothScrollTo(getScrollX(), (int) d7);
        }
    }

    private void updateScrollAwayState(int i5, int i6) {
        getReactScrollViewScrollState().setScrollAwayPaddingTop(i5);
        getReactScrollViewScrollState().setScrollAwayPaddingBottom(i6);
        ReactScrollViewHelper.forceUpdateState(this);
    }

    private void updateView() {
    }

    public void abortAnimation() {
        OverScroller overScroller = this.mScroller;
        if (overScroller == null || overScroller.isFinished()) {
            return;
        }
        this.mScroller.abortAnimation();
    }

    @Override // android.view.View
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        if (!this.mScrollEnabled || !PointerEvents.canChildrenBeTouchTarget(this.mPointerEvents)) {
            return false;
        }
        if (motionEvent.getActionMasked() == 8) {
            final float axisValue = motionEvent.getAxisValue(9);
            if (axisValue != 0.0f) {
                enableFpsListener();
                boolean dispatchGenericMotionEvent = super.dispatchGenericMotionEvent(motionEvent);
                if (!dispatchGenericMotionEvent || (!this.mPagingEnabled && this.mSnapInterval == 0 && this.mSnapOffsets == null && this.mSnapToAlignment == 0)) {
                    handlePostTouchScrolling(0, 0);
                    return dispatchGenericMotionEvent;
                }
                Runnable runnable = this.mPostTouchRunnable;
                if (runnable != null) {
                    removeCallbacks(runnable);
                    this.mPostTouchRunnable = null;
                }
                Runnable runnable2 = new Runnable() { // from class: com.facebook.react.views.scroll.ReactNestedScrollView.1
                    @Override // java.lang.Runnable
                    public void run() {
                        ReactNestedScrollView.this.mPostTouchRunnable = null;
                        int i5 = (int) (-Math.signum(axisValue));
                        if (ReactNestedScrollView.this.mDisableIntervalMomentum) {
                            i5 = 0;
                        }
                        ReactNestedScrollView.this.flingAndSnap(i5);
                        ReactNestedScrollView.this.handlePostTouchScrolling(0, i5);
                    }
                };
                this.mPostTouchRunnable = runnable2;
                postOnAnimationDelayed(runnable2, 20L);
                return dispatchGenericMotionEvent;
            }
        }
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public void draw(Canvas canvas) {
        if (this.mEndFillColor != 0) {
            View contentView = getContentView();
            if (this.mEndBackground != null && contentView != null && contentView.getBottom() < getHeight()) {
                this.mEndBackground.setBounds(0, contentView.getBottom(), getWidth(), getHeight());
                this.mEndBackground.draw(canvas);
            }
        }
        super.draw(canvas);
    }

    @Override // androidx.core.widget.NestedScrollView
    public boolean executeKeyEvent(KeyEvent keyEvent) {
        int keyCode = keyEvent.getKeyCode();
        if (this.mScrollEnabled || !(keyCode == 19 || keyCode == 20)) {
            return super.executeKeyEvent(keyEvent);
        }
        return false;
    }

    public void flashScrollIndicators() {
        awakenScrollBars();
    }

    @Override // androidx.core.widget.NestedScrollView
    public void fling(int i5) {
        int correctFlingVelocityY = correctFlingVelocityY(i5);
        if (this.mPagingEnabled) {
            flingAndSnap(correctFlingVelocityY);
        } else if (this.mScroller != null) {
            this.mScroller.fling(getScrollX(), getScrollY(), 0, correctFlingVelocityY, 0, 0, 0, Integer.MAX_VALUE, 0, ((getHeight() - getPaddingBottom()) - getPaddingTop()) / 2);
            WeakHashMap weakHashMap = s0.a;
            postInvalidateOnAnimation();
        } else {
            super.fling(correctFlingVelocityY);
        }
        handlePostTouchScrolling(0, correctFlingVelocityY);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public View focusSearch(View view, int i5) {
        View focusSearch = super.focusSearch(view, i5);
        if (ReactNativeFeatureFlags.enableCustomFocusSearchOnClippedElementsAndroid()) {
            if (focusSearch != null && findViewById(focusSearch.getId()) != null) {
                return focusSearch;
            }
            View findNextFocusableView = ReactScrollViewHelper.findNextFocusableView(this, view, i5);
            if (findNextFocusableView != null) {
                return findNextFocusableView;
            }
        }
        return focusSearch;
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public float getBottomFadingEdgeStrength() {
        return this.mFadingEdgeLengthEnd / Math.max(this.mFadingEdgeLengthStart, this.mFadingEdgeLengthEnd);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean getChildVisibleRect(View view, Rect rect, Point point) {
        return super.getChildVisibleRect(view, rect, point);
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void getClippingRect(Rect rect) {
        Rect rect2 = this.mClippingRect;
        a.f(rect2);
        rect.set(rect2);
    }

    public int getFadingEdgeLengthEnd() {
        return this.mFadingEdgeLengthEnd;
    }

    public int getFadingEdgeLengthStart() {
        return this.mFadingEdgeLengthStart;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasFlingAnimator
    @NonNull
    public ValueAnimator getFlingAnimator() {
        return this.DEFAULT_FLING_ANIMATOR;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasFlingAnimator
    public int getFlingExtrapolatedDistance(int i5) {
        return ReactScrollViewHelper.predictFinalScrollPosition(this, 0, i5, 0, getMaxScrollY()).y;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollEventThrottle
    public long getLastScrollDispatchTime() {
        return this.mLastScrollDispatchTime;
    }

    public OverScroller getOverScrollerFromParent() {
        if (!sTriedToGetScrollerField) {
            sTriedToGetScrollerField = true;
            try {
                Field declaredField = NestedScrollView.class.getDeclaredField("mScroller");
                sScrollerField = declaredField;
                declaredField.setAccessible(true);
            } catch (NoSuchFieldException unused) {
                p8.a.v(ReactConstants.TAG, "Failed to get mScroller field for NestedScrollView! This app will exhibit the bounce-back scrolling bug :(");
            }
        }
        Field field = sScrollerField;
        OverScroller overScroller = null;
        if (field != null) {
            try {
                Object obj = field.get(this);
                if (obj instanceof OverScroller) {
                    overScroller = (OverScroller) obj;
                } else {
                    p8.a.v(ReactConstants.TAG, "Failed to cast mScroller field in NestedScrollView (probably due to OEM changes to AOSP)! This app will exhibit the bounce-back scrolling bug :(");
                }
            } catch (IllegalAccessException e9) {
                throw new RuntimeException("Failed to get mScroller from NestedScrollView!", e9);
            }
        }
        return overScroller;
    }

    @Override // com.facebook.react.uimanager.ReactOverflowView
    public String getOverflow() {
        int i5 = AnonymousClass3.$SwitchMap$com$facebook$react$uimanager$style$Overflow[this.mOverflow.ordinal()];
        if (i5 == 1) {
            return ViewProps.HIDDEN;
        }
        if (i5 == 2) {
            return ViewProps.SCROLL;
        }
        if (i5 != 3) {
            return null;
        }
        return ViewProps.VISIBLE;
    }

    @Override // com.facebook.react.uimanager.ReactOverflowViewWithInset
    public Rect getOverflowInset() {
        return this.mOverflowInset;
    }

    public PointerEvents getPointerEvents() {
        return this.mPointerEvents;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollState
    public ReactScrollViewHelper.ReactScrollViewScrollState getReactScrollViewScrollState() {
        return this.mReactScrollViewScrollState;
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public boolean getRemoveClippedSubviews() {
        return this.mRemoveClippedSubviews;
    }

    @Override // com.facebook.react.views.scroll.ReactAccessibleScrollView
    public boolean getScrollEnabled() {
        return this.mScrollEnabled;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollEventThrottle
    public int getScrollEventThrottle() {
        return this.mScrollEventThrottle;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasStateWrapper
    public StateWrapper getStateWrapper() {
        return this.mStateWrapper;
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public float getTopFadingEdgeStrength() {
        return this.mFadingEdgeLengthStart / Math.max(this.mFadingEdgeLengthStart, this.mFadingEdgeLengthEnd);
    }

    @Override // com.facebook.react.views.scroll.VirtualViewContainer
    public VirtualViewContainerState getVirtualViewContainerState() {
        if (this.mVirtualViewContainerState == null) {
            this.mVirtualViewContainerState = VirtualViewContainerState.create(this);
        }
        return this.mVirtualViewContainerState;
    }

    public void handleInterceptedTouchEvent(MotionEvent motionEvent) {
        if (!ReactNativeFeatureFlags.shouldTriggerResponderTransferOnScrollAndroid()) {
            NativeGestureUtil.notifyNativeGestureStarted(this, motionEvent);
        }
        ReactScrollViewHelper.emitScrollBeginDragEvent(this);
        this.mDragging = true;
        this.mEmittedOverScrollSinceScrollBegin = false;
        enableFpsListener();
        getFlingAnimator().cancel();
    }

    @Override // com.facebook.react.views.scroll.ReactAccessibleScrollView
    public boolean isPartiallyScrolledInView(View view) {
        int scrollDelta = getScrollDelta(view);
        view.getDrawingRect(this.mTempRect);
        return scrollDelta != 0 && Math.abs(scrollDelta) < this.mTempRect.width();
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.mRemoveClippedSubviews) {
            updateClippingRect();
        }
        MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper = this.mMaintainVisibleContentPositionHelper;
        if (maintainVisibleScrollPositionHelper != null) {
            maintainVisibleScrollPositionHelper.start();
        }
    }

    @Override // android.view.ViewGroup.OnHierarchyChangeListener
    public void onChildViewAdded(View view, View view2) {
        this.mContentView = view2;
        view2.addOnLayoutChangeListener(this);
    }

    @Override // android.view.ViewGroup.OnHierarchyChangeListener
    public void onChildViewRemoved(View view, View view2) {
        View view3 = this.mContentView;
        if (view3 != null) {
            view3.removeOnLayoutChangeListener(this);
            this.mContentView = null;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper = this.mMaintainVisibleContentPositionHelper;
        if (maintainVisibleScrollPositionHelper != null) {
            maintainVisibleScrollPositionHelper.stop();
        }
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        if (this.mOverflow != Overflow.VISIBLE) {
            BackgroundStyleApplicator.clipToPaddingBox(this, canvas);
        }
        super.onDraw(canvas);
    }

    @Override // android.view.View
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        String str = (String) getTag(R.id.react_test_id);
        if (str != null) {
            accessibilityNodeInfo.setViewIdResourceName(str);
        }
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (this.mScrollEnabled) {
            if (!PointerEvents.canChildrenBeTouchTarget(this.mPointerEvents)) {
                return true;
            }
            try {
                if (super.onInterceptTouchEvent(motionEvent)) {
                    handleInterceptedTouchEvent(motionEvent);
                    return true;
                }
            } catch (IllegalArgumentException e9) {
                p8.a.w(ReactConstants.TAG, "Error intercepting touch event.", e9);
                return false;
            }
        }
        return false;
    }

    @Override // androidx.core.widget.NestedScrollView, android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        if (isContentReady()) {
            int i12 = this.mPendingContentOffsetX;
            if (i12 == -1) {
                i12 = getScrollX();
            }
            int i13 = this.mPendingContentOffsetY;
            if (i13 == -1) {
                i13 = getScrollY();
            }
            scrollTo(i12, i13);
        }
        ReactScrollViewHelper.emitLayoutEvent(this);
        VirtualViewContainerState virtualViewContainerState = this.mVirtualViewContainerState;
        if (virtualViewContainerState != null) {
            virtualViewContainerState.updateState();
        }
    }

    @Override // android.view.View.OnLayoutChangeListener
    public void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        if (this.mContentView == null) {
            return;
        }
        if (isShown() && isContentReady()) {
            int scrollY = getScrollY();
            int maxScrollY = getMaxScrollY();
            if (scrollY > maxScrollY) {
                scrollTo(getScrollX(), maxScrollY);
            }
        }
        ReactScrollViewHelper.emitLayoutChangeEvent(this);
    }

    @Override // androidx.core.widget.NestedScrollView, android.widget.FrameLayout, android.view.View
    public void onMeasure(int i5, int i6) {
        MeasureSpecAssertions.assertExplicitMeasureSpec(i5, i6);
        setMeasuredDimension(View.MeasureSpec.getSize(i5), View.MeasureSpec.getSize(i6));
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public void onOverScrolled(int i5, int i6, boolean z5, boolean z6) {
        int maxScrollY;
        OverScroller overScroller = this.mScroller;
        if (overScroller != null && this.mContentView != null && !overScroller.isFinished() && this.mScroller.getCurrY() != this.mScroller.getFinalY() && i6 >= (maxScrollY = getMaxScrollY())) {
            this.mScroller.abortAnimation();
            i6 = maxScrollY;
        }
        if (ReactNativeFeatureFlags.shouldTriggerResponderTransferOnScrollAndroid() && z6 && !this.mEmittedOverScrollSinceScrollBegin) {
            ReactScrollViewHelper.emitScrollEvent(this, 0.0f, 0.0f, false);
            this.mEmittedOverScrollSinceScrollBegin = true;
        }
        super.onOverScrolled(i5, i6, z5, z6);
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public void onScrollChanged(int i5, int i6, int i10, int i11) {
        Intrinsics.checkNotNullParameter("ReactNestedScrollView.onScrollChanged", "sectionName");
        c.e("ReactNestedScrollView.onScrollChanged");
        try {
            super.onScrollChanged(i5, i6, i10, i11);
            this.mActivelyScrolling = true;
            if (this.mOnScrollDispatchHelper.onScrollChanged(i5, i6)) {
                if (this.mRemoveClippedSubviews) {
                    updateClippingRect();
                }
                ReactScrollViewHelper.updateStateOnScrollChanged(this, this.mOnScrollDispatchHelper.getXFlingVelocity(), this.mOnScrollDispatchHelper.getYFlingVelocity(), false);
                VirtualViewContainerState virtualViewContainerState = this.mVirtualViewContainerState;
                if (virtualViewContainerState != null) {
                    virtualViewContainerState.updateState();
                }
            }
            Trace.endSection();
        } catch (Throwable th2) {
            Trace.endSection();
            throw th2;
        }
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        if (this.mRemoveClippedSubviews) {
            updateClippingRect();
        }
        VirtualViewContainerState virtualViewContainerState = this.mVirtualViewContainerState;
        if (virtualViewContainerState != null) {
            virtualViewContainerState.updateState();
        }
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (!this.mScrollEnabled || !PointerEvents.canBeTouchTarget(this.mPointerEvents)) {
            return false;
        }
        this.mVelocityHelper.calculateVelocity(motionEvent);
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 1 && this.mDragging) {
            ReactScrollViewHelper.updateFabricScrollState(this);
            float xVelocity = this.mVelocityHelper.getXVelocity();
            float yVelocity = this.mVelocityHelper.getYVelocity();
            ReactScrollViewHelper.emitScrollEndDragEvent(this, xVelocity, yVelocity);
            if (!ReactNativeFeatureFlags.shouldTriggerResponderTransferOnScrollAndroid()) {
                NativeGestureUtil.notifyNativeGestureEnded(this, motionEvent);
            }
            this.mDragging = false;
            handlePostTouchScrolling(Math.round(xVelocity), Math.round(yVelocity));
        }
        if (actionMasked == 0) {
            cancelPostTouchScrolling();
        }
        return super.onTouchEvent(motionEvent);
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasSmoothScroll
    public void reactSmoothScrollTo(int i5, int i6) {
        ReactScrollViewHelper.smoothScrollTo(this, i5, i6);
        setPendingContentOffsets(i5, i6);
    }

    public void recycleView() {
        initView();
        if (getParent() != null) {
            ((ViewGroup) getParent()).removeView(this);
        }
        updateView();
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        if (view2 != null && this.mScrollsChildToFocus) {
            scrollToChild(view2);
        }
        requestChildFocusWithoutScroll(view, view2);
    }

    public void requestChildFocusWithoutScroll(View view, View view2) {
        super.requestChildFocus(view, view2);
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.ViewGroup, android.view.ViewParent
    public boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z5) {
        if (this.mScrollsChildToFocus) {
            return super.requestChildRectangleOnScreen(view, rect, z5);
        }
        return false;
    }

    @Override // androidx.core.widget.NestedScrollView, android.view.View
    public void scrollTo(int i5, int i6) {
        super.scrollTo(i5, i6);
        ReactScrollViewHelper.updateFabricScrollState(this);
        setPendingContentOffsets(i5, i6);
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasSmoothScroll
    public void scrollToPreservingMomentum(int i5, int i6) {
        scrollTo(i5, i6);
        recreateFlingAnimation(i6);
    }

    @Override // android.view.View
    public void setBackgroundColor(int i5) {
        BackgroundStyleApplicator.setBackgroundColor(this, Integer.valueOf(i5));
    }

    public void setBorderColor(int i5, Integer num) {
        BackgroundStyleApplicator.setBorderColor(this, LogicalEdge.values()[i5], num);
    }

    public void setBorderRadius(float f2) {
        setBorderRadius(f2, BorderRadiusProp.BORDER_RADIUS.ordinal());
    }

    public void setBorderStyle(String str) {
        BackgroundStyleApplicator.setBorderStyle(this, str == null ? null : BorderStyle.fromString(str));
    }

    public void setBorderWidth(int i5, float f2) {
        BackgroundStyleApplicator.setBorderWidth(this, LogicalEdge.values()[i5], Float.valueOf(PixelUtil.toDIPFromPixel(f2)));
    }

    public void setContentOffset(ReadableMap readableMap) {
        ReadableMap readableMap2 = this.mCurrentContentOffset;
        if (readableMap2 == null || !readableMap2.equals(readableMap)) {
            this.mCurrentContentOffset = readableMap;
            if (readableMap != null) {
                scrollTo((int) PixelUtil.toPixelFromDIP(readableMap.hasKey("x") ? readableMap.getDouble("x") : 0.0d), (int) PixelUtil.toPixelFromDIP(readableMap.hasKey("y") ? readableMap.getDouble("y") : 0.0d));
            } else {
                scrollTo(0, 0);
            }
        }
    }

    public void setDecelerationRate(float f2) {
        getReactScrollViewScrollState().setDecelerationRate(f2);
        OverScroller overScroller = this.mScroller;
        if (overScroller != null) {
            overScroller.setFriction(1.0f - f2);
        }
    }

    public void setDisableIntervalMomentum(boolean z5) {
        this.mDisableIntervalMomentum = z5;
    }

    public void setEndFillColor(int i5) {
        if (i5 != this.mEndFillColor) {
            this.mEndFillColor = i5;
            this.mEndBackground = new ColorDrawable(this.mEndFillColor);
        }
    }

    public void setFadingEdgeLengthEnd(int i5) {
        this.mFadingEdgeLengthEnd = i5;
        invalidate();
    }

    public void setFadingEdgeLengthStart(int i5) {
        this.mFadingEdgeLengthStart = i5;
        invalidate();
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollEventThrottle
    public void setLastScrollDispatchTime(long j) {
        this.mLastScrollDispatchTime = j;
    }

    public void setMaintainVisibleContentPosition(MaintainVisibleScrollPositionHelper.Config config) {
        MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper;
        if (config != null && this.mMaintainVisibleContentPositionHelper == null) {
            MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper2 = new MaintainVisibleScrollPositionHelper(this, false);
            this.mMaintainVisibleContentPositionHelper = maintainVisibleScrollPositionHelper2;
            maintainVisibleScrollPositionHelper2.start();
        } else if (config == null && (maintainVisibleScrollPositionHelper = this.mMaintainVisibleContentPositionHelper) != null) {
            maintainVisibleScrollPositionHelper.stop();
            this.mMaintainVisibleContentPositionHelper = null;
        }
        MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper3 = this.mMaintainVisibleContentPositionHelper;
        if (maintainVisibleScrollPositionHelper3 != null) {
            maintainVisibleScrollPositionHelper3.setConfig(config);
        }
    }

    public void setOverflow(String str) {
        if (str == null) {
            this.mOverflow = Overflow.SCROLL;
        } else {
            Overflow fromString = Overflow.fromString(str);
            if (fromString == null) {
                fromString = ReactNativeFeatureFlags.enablePropsUpdateReconciliationAndroid() ? Overflow.VISIBLE : Overflow.SCROLL;
            }
            this.mOverflow = fromString;
        }
        invalidate();
    }

    @Override // com.facebook.react.uimanager.ReactOverflowViewWithInset
    public void setOverflowInset(int i5, int i6, int i10, int i11) {
        this.mOverflowInset.set(i5, i6, i10, i11);
    }

    public void setPagingEnabled(boolean z5) {
        this.mPagingEnabled = z5;
    }

    public void setPointerEvents(PointerEvents pointerEvents) {
        this.mPointerEvents = pointerEvents;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollState
    public void setReactScrollViewScrollState(ReactScrollViewHelper.ReactScrollViewScrollState reactScrollViewScrollState) {
        this.mReactScrollViewScrollState = reactScrollViewScrollState;
        if (ReactNativeFeatureFlags.enableViewCulling() || ReactNativeFeatureFlags.useTraitHiddenOnAndroid()) {
            setScrollAwayPaddingEnabledUnstable(reactScrollViewScrollState.getScrollAwayPaddingTop(), reactScrollViewScrollState.getScrollAwayPaddingBottom(), false);
            Point lastStateUpdateScroll = reactScrollViewScrollState.getLastStateUpdateScroll();
            scrollTo(lastStateUpdateScroll.x, lastStateUpdateScroll.y);
        }
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void setRemoveClippedSubviews(boolean z5) {
        if (ReactNativeFeatureFlags.disableSubviewClippingAndroid()) {
            return;
        }
        if (z5 && this.mClippingRect == null) {
            this.mClippingRect = new Rect();
        }
        this.mRemoveClippedSubviews = z5;
        updateClippingRect();
    }

    public void setScrollAwayPaddingEnabledUnstable(int i5, int i6) {
        setScrollAwayPaddingEnabledUnstable(i5, i6, true);
    }

    public void setScrollEnabled(boolean z5) {
        this.mScrollEnabled = z5;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollEventThrottle
    public void setScrollEventThrottle(int i5) {
        this.mScrollEventThrottle = i5;
    }

    public void setScrollPerfTag(String str) {
        this.mScrollPerfTag = str;
    }

    public void setScrollsChildToFocus(boolean z5) {
        this.mScrollsChildToFocus = z5;
    }

    public void setSendMomentumEvents(boolean z5) {
        this.mSendMomentumEvents = z5;
    }

    public void setSnapInterval(int i5) {
        this.mSnapInterval = i5;
    }

    public void setSnapOffsets(List<Integer> list) {
        this.mSnapOffsets = list;
    }

    public void setSnapToAlignment(int i5) {
        this.mSnapToAlignment = i5;
    }

    public void setSnapToEnd(boolean z5) {
        this.mSnapToEnd = z5;
    }

    public void setSnapToStart(boolean z5) {
        this.mSnapToStart = z5;
    }

    public void setStateWrapper(StateWrapper stateWrapper) {
        this.mStateWrapper = stateWrapper;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasFlingAnimator
    public void startFlingAnimator(int i5, int i6) {
        this.DEFAULT_FLING_ANIMATOR.cancel();
        int defaultScrollAnimationDuration = ReactScrollViewHelper.getDefaultScrollAnimationDuration(getContext());
        this.DEFAULT_FLING_ANIMATOR.setDuration(defaultScrollAnimationDuration).setIntValues(i5, i6);
        this.DEFAULT_FLING_ANIMATOR.start();
        if (this.mSendMomentumEvents) {
            ReactScrollViewHelper.emitScrollMomentumBeginEvent(this, 0, defaultScrollAnimationDuration > 0 ? (i6 - i5) / defaultScrollAnimationDuration : 0);
            ReactScrollViewHelper.dispatchMomentumEndOnAnimationEnd(this);
        }
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void updateClippingRect() {
        updateClippingRect(null);
    }

    public ReactNestedScrollView(Context context, FpsListener fpsListener) {
        super(context, null);
        this.mOnScrollDispatchHelper = new OnScrollDispatchHelper();
        this.mVelocityHelper = new VelocityHelper();
        this.mTempRect = new Rect();
        this.DEFAULT_FLING_ANIMATOR = ObjectAnimator.ofInt(this, "scrollY", 0, 0);
        this.mScrollsChildToFocus = true;
        this.mFpsListener = fpsListener;
        this.mScroller = getOverScrollerFromParent();
        setOnHierarchyChangeListener(this);
        setScrollBarStyle(33554432);
        setClipChildren(false);
        s0.p(this, new ReactScrollViewAccessibilityDelegate());
        initView();
    }

    public void setBorderRadius(float f2, int i5) {
        BackgroundStyleApplicator.setBorderRadius(this, BorderRadiusProp.values()[i5], Float.isNaN(f2) ? null : new LengthPercentage(PixelUtil.toDIPFromPixel(f2), LengthPercentageType.POINT));
    }

    public void setScrollAwayPaddingEnabledUnstable(int i5, int i6, boolean z5) {
        int childCount = getChildCount();
        a.e(childCount <= 1, "React Native NestedScrollView should not have more than one child, it should have exactly 1 child; a content View");
        if (childCount > 0) {
            for (int i10 = 0; i10 < childCount; i10++) {
                getChildAt(i10).setTranslationY(i5);
            }
            setPadding(0, 0, 0, i5 + i6);
        }
        if (z5) {
            updateScrollAwayState(i5, i6);
        }
        setRemoveClippedSubviews(this.mRemoveClippedSubviews);
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void updateClippingRect(Set<Integer> set) {
        if (this.mRemoveClippedSubviews) {
            Intrinsics.checkNotNullParameter("ReactNestedScrollView.updateClippingRect", "sectionName");
            Trace.beginSection(c.Y("ReactNestedScrollView.updateClippingRect"));
            try {
                a.f(this.mClippingRect);
                ReactClippingViewGroupHelper.calculateClippingRect(this, this.mClippingRect);
                KeyEvent.Callback contentView = getContentView();
                if (contentView instanceof ReactClippingViewGroup) {
                    ((ReactClippingViewGroup) contentView).updateClippingRect(set);
                }
            } finally {
                Trace.endSection();
            }
        }
    }
}
