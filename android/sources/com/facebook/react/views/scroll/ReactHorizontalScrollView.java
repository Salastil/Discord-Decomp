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
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.HorizontalScrollView;
import android.widget.OverScroller;
import androidx.core.view.j0;
import androidx.core.view.s0;
import com.facebook.imagepipeline.nativecode.c;
import com.facebook.react.R;
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
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.WeakHashMap;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class ReactHorizontalScrollView extends HorizontalScrollView implements ReactClippingViewGroup, ViewGroup.OnHierarchyChangeListener, View.OnLayoutChangeListener, ReactAccessibleScrollView, ReactOverflowViewWithInset, ReactScrollViewHelper.HasScrollState, ReactScrollViewHelper.HasStateWrapper, ReactScrollViewHelper.HasFlingAnimator, ReactScrollViewHelper.HasScrollEventThrottle, ReactScrollViewHelper.HasSmoothScroll, VirtualViewContainer {
    private static final boolean DEBUG_MODE = false;
    private static final int NO_SCROLL_POSITION = Integer.MIN_VALUE;
    private static final String TAG = "ReactHorizontalScrollView";
    private static final int UNSET_CONTENT_OFFSET = -1;
    private static Field sScrollerField = null;
    private static boolean sTriedToGetScrollerField = false;
    private final ValueAnimator DEFAULT_FLING_ANIMATOR;
    private boolean mActivelyScrolling;
    private Rect mClippingRect;
    private View mContentView;
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
    private boolean mPagedArrowScrolling;
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
    private int mScrollXAfterMeasure;
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

    /* renamed from: com.facebook.react.views.scroll.ReactHorizontalScrollView$3, reason: invalid class name */
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

    public ReactHorizontalScrollView(Context context) {
        this(context, null);
    }

    private void adjustPositionForContentChangeRTL(int i5, int i6, int i10, int i11) {
        if (getFlingAnimator().isRunning()) {
            getFlingAnimator().end();
        }
        int i12 = i6 - i5;
        int scrollX = i12 - (i11 - getScrollX());
        scrollTo(scrollX, getScrollY());
        recreateFlingAnimation(scrollX, i12 - getWidth());
    }

    private void cancelPostTouchScrolling() {
        Runnable runnable = this.mPostTouchRunnable;
        if (runnable != null) {
            removeCallbacks(runnable);
            this.mPostTouchRunnable = null;
            getFlingAnimator().cancel();
        }
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

    private static HorizontalScrollView findDeepestScrollViewForMotionEvent(View view, MotionEvent motionEvent) {
        return findDeepestScrollViewForMotionEvent(view, motionEvent, true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void flingAndSnap(int i5) {
        int i6;
        int min;
        int i10;
        int i11;
        int i12;
        OverScroller overScroller;
        if (DEBUG_MODE) {
            p8.a.l(TAG, "smoothScrollAndSnap[%d] velocityX %d", Integer.valueOf(getId()), Integer.valueOf(i5));
        }
        if (getChildCount() <= 0) {
            return;
        }
        if (this.mSnapInterval == 0 && this.mSnapOffsets == null && this.mSnapToAlignment == 0) {
            smoothScrollAndSnap(i5);
            return;
        }
        boolean z5 = getFlingAnimator() != this.DEFAULT_FLING_ANIMATOR;
        int max = Math.max(0, computeHorizontalScrollRange() - getWidth());
        int predictFinalScrollPosition = predictFinalScrollPosition(i5);
        if (this.mDisableIntervalMomentum) {
            predictFinalScrollPosition = getScrollX();
        }
        int width = getWidth();
        WeakHashMap weakHashMap = s0.a;
        int paddingStart = (width - getPaddingStart()) - getPaddingEnd();
        if (getLayoutDirection() == 1) {
            predictFinalScrollPosition = max - predictFinalScrollPosition;
            i6 = -i5;
        } else {
            i6 = i5;
        }
        List<Integer> list = this.mSnapOffsets;
        if (list == null || list.isEmpty()) {
            int i13 = this.mSnapToAlignment;
            if (i13 != 0) {
                int i14 = this.mSnapInterval;
                if (i14 > 0) {
                    double d6 = predictFinalScrollPosition / i14;
                    double floor = Math.floor(d6);
                    int i15 = this.mSnapInterval;
                    int max2 = Math.max(getItemStartOffset(i13, (int) (floor * i15), i15, paddingStart), 0);
                    int i16 = this.mSnapToAlignment;
                    double ceil = Math.ceil(d6);
                    int i17 = this.mSnapInterval;
                    min = Math.min(getItemStartOffset(i16, (int) (ceil * i17), i17, paddingStart), max);
                    i10 = max;
                    i11 = max2;
                    i12 = 0;
                } else {
                    ViewGroup viewGroup = (ViewGroup) getContentView();
                    int i18 = max;
                    int i19 = i18;
                    int i20 = 0;
                    int i21 = 0;
                    for (int i22 = 0; i22 < viewGroup.getChildCount(); i22++) {
                        View childAt = viewGroup.getChildAt(i22);
                        int itemStartOffset = getItemStartOffset(this.mSnapToAlignment, childAt.getLeft(), childAt.getWidth(), paddingStart);
                        if (itemStartOffset <= predictFinalScrollPosition && predictFinalScrollPosition - itemStartOffset < predictFinalScrollPosition - i20) {
                            i20 = itemStartOffset;
                        }
                        if (itemStartOffset >= predictFinalScrollPosition && itemStartOffset - predictFinalScrollPosition < i19 - predictFinalScrollPosition) {
                            i19 = itemStartOffset;
                        }
                        i18 = Math.min(i18, itemStartOffset);
                        i21 = Math.max(i21, itemStartOffset);
                    }
                    i11 = Math.max(i20, i18);
                    min = Math.min(i19, i21);
                    i10 = max;
                }
            } else {
                double snapInterval = getSnapInterval();
                double d7 = predictFinalScrollPosition / snapInterval;
                int floor2 = (int) (Math.floor(d7) * snapInterval);
                min = Math.min((int) (Math.ceil(d7) * snapInterval), max);
                i10 = max;
                i11 = floor2;
            }
            i12 = 0;
        } else {
            i12 = this.mSnapOffsets.get(0).intValue();
            i10 = ((Integer) d.g(1, this.mSnapOffsets)).intValue();
            min = max;
            i11 = 0;
            for (int i23 = 0; i23 < this.mSnapOffsets.size(); i23++) {
                int intValue = this.mSnapOffsets.get(i23).intValue();
                if (intValue <= predictFinalScrollPosition && predictFinalScrollPosition - intValue < predictFinalScrollPosition - i11) {
                    i11 = intValue;
                }
                if (intValue >= predictFinalScrollPosition && intValue - predictFinalScrollPosition < min - predictFinalScrollPosition) {
                    min = intValue;
                }
            }
        }
        int i24 = predictFinalScrollPosition - i11;
        int i25 = min - predictFinalScrollPosition;
        int i26 = Math.abs(i24) < Math.abs(i25) ? i11 : min;
        int scrollX = getScrollX();
        if (getLayoutDirection() == 1) {
            scrollX = max - scrollX;
        }
        if (this.mSnapToEnd || predictFinalScrollPosition < i10) {
            if (this.mSnapToStart || predictFinalScrollPosition > i12) {
                if (i6 > 0) {
                    if (!z5) {
                        i6 += (int) (i25 * 10.0d);
                    }
                    predictFinalScrollPosition = min;
                } else if (i6 < 0) {
                    if (!z5) {
                        i6 -= (int) (i24 * 10.0d);
                    }
                    predictFinalScrollPosition = i11;
                } else {
                    predictFinalScrollPosition = i26;
                }
            } else if (scrollX > i12) {
                predictFinalScrollPosition = i12;
            }
        } else if (scrollX < i10) {
            predictFinalScrollPosition = i10;
        }
        int min2 = Math.min(Math.max(0, predictFinalScrollPosition), max);
        if (getLayoutDirection() == 1) {
            min2 = max - min2;
            i6 = -i6;
        }
        int i27 = min2;
        if (z5 || (overScroller = this.mScroller) == null) {
            reactSmoothScrollTo(i27, getScrollY());
            return;
        }
        this.mActivelyScrolling = true;
        int scrollX2 = getScrollX();
        int scrollY = getScrollY();
        if (i6 == 0) {
            i6 = i27 - getScrollX();
        }
        overScroller.fling(scrollX2, scrollY, i6, 0, i27, i27, 0, 0, (i27 == 0 || i27 == max) ? paddingStart / 2 : 0, 0);
        postInvalidateOnAnimation();
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

    private OverScroller getOverScrollerFromParent() {
        if (!sTriedToGetScrollerField) {
            sTriedToGetScrollerField = true;
            try {
                Field declaredField = HorizontalScrollView.class.getDeclaredField("mScroller");
                sScrollerField = declaredField;
                declaredField.setAccessible(true);
            } catch (NoSuchFieldException unused) {
                p8.a.v(TAG, "Failed to get mScroller field for HorizontalScrollView! This app will exhibit the bounce-back scrolling bug :(");
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
                    p8.a.v(TAG, "Failed to cast mScroller field in HorizontalScrollView (probably due to OEM changes to AOSP)! This app will exhibit the bounce-back scrolling bug :(");
                }
            } catch (IllegalAccessException e9) {
                throw new RuntimeException("Failed to get mScroller from HorizontalScrollView!", e9);
            }
        }
        return overScroller;
    }

    private int getScrollDelta(View view) {
        view.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(view, this.mTempRect);
        return computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
    }

    private int getSnapInterval() {
        int i5 = this.mSnapInterval;
        return i5 != 0 ? i5 : getWidth();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handlePostTouchScrolling(int i5, int i6) {
        if (DEBUG_MODE) {
            p8.a.m(TAG, "handlePostTouchScrolling[%d] velocityX %d velocityY %d", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6));
        }
        if (this.mPostTouchRunnable != null) {
            return;
        }
        if (this.mSendMomentumEvents) {
            ReactScrollViewHelper.emitScrollMomentumBeginEvent(this, i5, i6);
        }
        this.mActivelyScrolling = false;
        Runnable runnable = new Runnable() { // from class: com.facebook.react.views.scroll.ReactHorizontalScrollView.2
            private boolean mSnappingToPage = false;
            private int mStableFrames = 0;

            @Override // java.lang.Runnable
            public void run() {
                if (ReactHorizontalScrollView.this.mActivelyScrolling) {
                    ReactHorizontalScrollView.this.mActivelyScrolling = false;
                    this.mStableFrames = 0;
                    ReactHorizontalScrollView.this.postOnAnimationDelayed(this, 20L);
                    return;
                }
                ReactScrollViewHelper.updateFabricScrollState(ReactHorizontalScrollView.this);
                int i10 = this.mStableFrames + 1;
                this.mStableFrames = i10;
                if (i10 >= 3) {
                    ReactHorizontalScrollView.this.mPostTouchRunnable = null;
                    if (ReactHorizontalScrollView.this.mSendMomentumEvents) {
                        ReactScrollViewHelper.emitScrollMomentumEndEvent(ReactHorizontalScrollView.this);
                    }
                    ReactScrollViewHelper.notifyUserDrivenScrollEnded_internal(ReactHorizontalScrollView.this);
                    ReactHorizontalScrollView.this.disableFpsListener();
                    return;
                }
                if (ReactHorizontalScrollView.this.mPagingEnabled && !this.mSnappingToPage) {
                    this.mSnappingToPage = true;
                    ReactHorizontalScrollView.this.flingAndSnap(0);
                }
                ReactHorizontalScrollView.this.postOnAnimationDelayed(this, 20L);
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
        this.mPagedArrowScrolling = false;
        this.mPendingContentOffsetX = -1;
        this.mPendingContentOffsetY = -1;
        this.mStateWrapper = null;
        this.mReactScrollViewScrollState = new ReactScrollViewHelper.ReactScrollViewScrollState();
        this.mPointerEvents = PointerEvents.AUTO;
        this.mLastScrollDispatchTime = 0L;
        this.mScrollEventThrottle = 0;
        this.mContentView = null;
        this.mMaintainVisibleContentPositionHelper = null;
        this.mFadingEdgeLengthStart = 0;
        this.mFadingEdgeLengthEnd = 0;
        this.mScrollsChildToFocus = true;
    }

    private boolean isContentReady() {
        View contentView = getContentView();
        return (contentView == null || contentView.getWidth() == 0 || contentView.getHeight() == 0) ? false : true;
    }

    private boolean isDescendantOf(View view, View view2) {
        if (view2 != null && view != null) {
            for (ViewParent parent = view2.getParent(); parent != null && parent.getParent() != null; parent = parent.getParent()) {
                if (parent == view) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean isMostlyScrolledInView(View view) {
        int scrollDelta = getScrollDelta(view);
        view.getDrawingRect(this.mTempRect);
        return scrollDelta != 0 && Math.abs(scrollDelta) < this.mTempRect.width() / 2;
    }

    private boolean isScrollPerfLoggingEnabled() {
        String str;
        return (this.mFpsListener == null || (str = this.mScrollPerfTag) == null || str.isEmpty()) ? false : true;
    }

    private boolean isScrolledInView(View view) {
        return getScrollDelta(view) == 0;
    }

    private int predictFinalScrollPosition(int i5) {
        int max = Math.max(0, computeHorizontalScrollRange() - getWidth());
        if (getFlingAnimator() == this.DEFAULT_FLING_ANIMATOR) {
            return ReactScrollViewHelper.predictFinalScrollPosition(this, i5, 0, max, 0).x;
        }
        return getFlingExtrapolatedDistance(i5) + ReactScrollViewHelper.getNextFlingStartValue(this, getScrollX(), getReactScrollViewScrollState().getFinalAnimatedPositionScroll().x, i5);
    }

    private void recreateFlingAnimation(int i5, int i6) {
        if (getFlingAnimator().isRunning()) {
            getFlingAnimator().cancel();
        }
        OverScroller overScroller = this.mScroller;
        if (overScroller == null || overScroller.isFinished()) {
            return;
        }
        int currX = this.mScroller.getCurrX();
        boolean computeScrollOffset = this.mScroller.computeScrollOffset();
        this.mScroller.forceFinished(true);
        if (!computeScrollOffset) {
            scrollTo((this.mScroller.getCurrX() - currX) + i5, getScrollY());
            return;
        }
        this.mScroller.fling(i5, getScrollY(), (int) (this.mScroller.getCurrVelocity() * Math.signum(this.mScroller.getFinalX() - this.mScroller.getStartX())), 0, 0, i6, 0, 0);
    }

    private void scrollToChild(View view) {
        int scrollDelta = getScrollDelta(view);
        if (scrollDelta != 0) {
            scrollBy(scrollDelta, 0);
        }
    }

    private void setPendingContentOffsets(int i5, int i6) {
        if (DEBUG_MODE) {
            p8.a.m(TAG, "setPendingContentOffsets[%d] x %d y %d", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6));
        }
        if (isContentReady()) {
            this.mPendingContentOffsetX = -1;
            this.mPendingContentOffsetY = -1;
        } else {
            this.mPendingContentOffsetX = i5;
            this.mPendingContentOffsetY = i6;
        }
    }

    private void smoothScrollAndSnap(int i5) {
        if (DEBUG_MODE) {
            p8.a.l(TAG, "smoothScrollAndSnap[%d] velocity %d", Integer.valueOf(getId()), Integer.valueOf(i5));
        }
        double snapInterval = getSnapInterval();
        double nextFlingStartValue = ReactScrollViewHelper.getNextFlingStartValue(this, getScrollX(), getReactScrollViewScrollState().getFinalAnimatedPositionScroll().x, i5);
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
            reactSmoothScrollTo((int) d7, getScrollY());
        }
    }

    private void smoothScrollToNextPage(int i5) {
        if (DEBUG_MODE) {
            p8.a.l(TAG, "smoothScrollToNextPage[%d] direction %d", Integer.valueOf(getId()), Integer.valueOf(i5));
        }
        int width = getWidth();
        int scrollX = getScrollX();
        int i6 = scrollX / width;
        if (scrollX % width != 0) {
            i6++;
        }
        int i10 = i5 == 17 ? i6 - 1 : i6 + 1;
        if (i10 < 0) {
            i10 = 0;
        }
        reactSmoothScrollTo(i10 * width, getScrollY());
        handlePostTouchScrolling(0, 0);
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

    @Override // android.view.ViewGroup, android.view.View
    public void addFocusables(ArrayList<View> arrayList, int i5, int i6) {
        if (!this.mPagingEnabled || this.mPagedArrowScrolling) {
            super.addFocusables(arrayList, i5, i6);
            return;
        }
        ArrayList<View> arrayList2 = new ArrayList<>();
        super.addFocusables(arrayList2, i5, i6);
        Iterator<View> it = arrayList2.iterator();
        while (it.hasNext()) {
            View next = it.next();
            if (isScrolledInView(next) || isPartiallyScrolledInView(next) || next.isFocused()) {
                arrayList.add(next);
            }
        }
    }

    @Override // android.widget.HorizontalScrollView
    public boolean arrowScroll(int i5) {
        if (!this.mPagingEnabled) {
            return super.arrowScroll(i5);
        }
        boolean z5 = true;
        this.mPagedArrowScrolling = true;
        if (getChildCount() > 0) {
            View findNextFocus = FocusFinder.getInstance().findNextFocus(this, findFocus(), i5);
            if (isDescendantOf(getContentView(), findNextFocus)) {
                if (!isScrolledInView(findNextFocus) && !isMostlyScrolledInView(findNextFocus)) {
                    smoothScrollToNextPage(i5);
                }
                findNextFocus.requestFocus();
            } else {
                smoothScrollToNextPage(i5);
            }
        } else {
            z5 = false;
        }
        this.mPagedArrowScrolling = false;
        return z5;
    }

    @Override // android.view.View
    public boolean canScrollHorizontally(int i5) {
        return this.mScrollEnabled && super.canScrollHorizontally(i5);
    }

    @Override // android.view.View
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        if (!this.mScrollEnabled || !PointerEvents.canChildrenBeTouchTarget(this.mPointerEvents)) {
            return false;
        }
        if (motionEvent.getActionMasked() == 8) {
            final float axisValue = motionEvent.getAxisValue(10);
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
                Runnable runnable2 = new Runnable() { // from class: com.facebook.react.views.scroll.ReactHorizontalScrollView.1
                    @Override // java.lang.Runnable
                    public void run() {
                        ReactHorizontalScrollView.this.mPostTouchRunnable = null;
                        int signum = (int) Math.signum(axisValue);
                        if (ReactHorizontalScrollView.this.mDisableIntervalMomentum) {
                            signum = 0;
                        }
                        ReactHorizontalScrollView.this.flingAndSnap(signum);
                        ReactHorizontalScrollView.this.handlePostTouchScrolling(signum, 0);
                    }
                };
                this.mPostTouchRunnable = runnable2;
                postOnAnimationDelayed(runnable2, 20L);
                return dispatchGenericMotionEvent;
            }
        }
        return super.dispatchGenericMotionEvent(motionEvent);
    }

    @Override // android.widget.HorizontalScrollView, android.view.View
    public void draw(Canvas canvas) {
        if (this.mEndFillColor != 0) {
            View contentView = getContentView();
            if (this.mEndBackground != null && contentView != null && contentView.getRight() < getWidth()) {
                this.mEndBackground.setBounds(contentView.getRight(), 0, getWidth(), getHeight());
                this.mEndBackground.draw(canvas);
            }
        }
        super.draw(canvas);
    }

    @Override // android.widget.HorizontalScrollView
    public boolean executeKeyEvent(KeyEvent keyEvent) {
        int keyCode = keyEvent.getKeyCode();
        if (this.mScrollEnabled || !(keyCode == 21 || keyCode == 22)) {
            return super.executeKeyEvent(keyEvent);
        }
        return false;
    }

    public void flashScrollIndicators() {
        awakenScrollBars();
    }

    @Override // android.widget.HorizontalScrollView
    public void fling(int i5) {
        if (DEBUG_MODE) {
            p8.a.l(TAG, "fling[%d] velocityX %d", Integer.valueOf(getId()), Integer.valueOf(i5));
        }
        if (Build.VERSION.SDK_INT == 28) {
            i5 = (int) (Math.signum(this.mOnScrollDispatchHelper.getXFlingVelocity()) * Math.abs(i5));
        }
        int i6 = i5;
        if (this.mPagingEnabled) {
            flingAndSnap(i6);
        } else if (this.mScroller != null) {
            int width = getWidth();
            WeakHashMap weakHashMap = s0.a;
            this.mScroller.fling(getScrollX(), getScrollY(), i6, 0, 0, Integer.MAX_VALUE, 0, 0, ((width - getPaddingStart()) - getPaddingEnd()) / 2, 0);
            postInvalidateOnAnimation();
        } else {
            super.fling(i6);
        }
        handlePostTouchScrolling(i6, 0);
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
    public ValueAnimator getFlingAnimator() {
        return this.DEFAULT_FLING_ANIMATOR;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasFlingAnimator
    public int getFlingExtrapolatedDistance(int i5) {
        return ReactScrollViewHelper.predictFinalScrollPosition(this, i5, 0, Math.max(0, computeHorizontalScrollRange() - getWidth()), 0).x;
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasScrollEventThrottle
    public long getLastScrollDispatchTime() {
        return this.mLastScrollDispatchTime;
    }

    @Override // android.widget.HorizontalScrollView, android.view.View
    public float getLeftFadingEdgeStrength() {
        return (getLayoutDirection() == 1 ? this.mFadingEdgeLengthEnd : this.mFadingEdgeLengthStart) / Math.max(this.mFadingEdgeLengthStart, this.mFadingEdgeLengthEnd);
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

    @Override // android.widget.HorizontalScrollView, android.view.View
    public float getRightFadingEdgeStrength() {
        return (getLayoutDirection() == 1 ? this.mFadingEdgeLengthStart : this.mFadingEdgeLengthEnd) / Math.max(this.mFadingEdgeLengthStart, this.mFadingEdgeLengthEnd);
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

    @Override // android.view.ViewGroup, android.view.View
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
        }
        this.mContentView = null;
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

    @Override // android.widget.HorizontalScrollView, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (this.mScrollEnabled && (motionEvent.getAction() != 0 || findDeepestScrollViewForMotionEvent(this, motionEvent) == null)) {
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

    @Override // android.widget.HorizontalScrollView, android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        OverScroller overScroller;
        boolean z6 = DEBUG_MODE;
        if (z6) {
            p8.a.n(TAG, "onLayout[%d] l %d t %d r %d b %d", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i10), Integer.valueOf(i11));
        }
        int i12 = this.mScrollXAfterMeasure;
        if (i12 != Integer.MIN_VALUE && (overScroller = this.mScroller) != null && i12 != overScroller.getFinalX() && !this.mScroller.isFinished()) {
            if (z6) {
                p8.a.l(TAG, "onLayout[%d] scroll hack enabled: reset to previous scrollX position of %d", Integer.valueOf(getId()), Integer.valueOf(this.mScrollXAfterMeasure));
            }
            OverScroller overScroller2 = this.mScroller;
            overScroller2.startScroll(this.mScrollXAfterMeasure, overScroller2.getFinalY(), 0, 0);
            this.mScroller.forceFinished(true);
            this.mScrollXAfterMeasure = Integer.MIN_VALUE;
        }
        if (isContentReady()) {
            int i13 = this.mPendingContentOffsetX;
            if (i13 == -1) {
                i13 = getScrollX();
            }
            int i14 = this.mPendingContentOffsetY;
            if (i14 == -1) {
                i14 = getScrollY();
            }
            scrollTo(i13, i14);
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
        if (view.getLayoutDirection() == 1) {
            adjustPositionForContentChangeRTL(i5, i10, i12, i14);
        }
        ReactScrollViewHelper.emitLayoutChangeEvent(this);
    }

    @Override // android.widget.HorizontalScrollView, android.widget.FrameLayout, android.view.View
    public void onMeasure(int i5, int i6) {
        OverScroller overScroller;
        MeasureSpecAssertions.assertExplicitMeasureSpec(i5, i6);
        int size = View.MeasureSpec.getSize(i5);
        int size2 = View.MeasureSpec.getSize(i6);
        if (DEBUG_MODE) {
            p8.a.m(TAG, "onMeasure[%d] measured width: %d measured height: %d", Integer.valueOf(getId()), Integer.valueOf(size), Integer.valueOf(size2));
        }
        boolean z5 = getMeasuredHeight() != size2;
        setMeasuredDimension(size, size2);
        if (!z5 || (overScroller = this.mScroller) == null) {
            return;
        }
        this.mScrollXAfterMeasure = overScroller.getCurrX();
    }

    @Override // android.widget.HorizontalScrollView, android.view.View
    public void onOverScrolled(int i5, int i6, boolean z5, boolean z6) {
        int max;
        if (DEBUG_MODE) {
            p8.a.n(TAG, "onOverScrolled[%d] scrollX %d scrollY %d clampedX %b clampedY %b", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6), Boolean.valueOf(z5), Boolean.valueOf(z6));
        }
        OverScroller overScroller = this.mScroller;
        if (overScroller != null && !overScroller.isFinished() && this.mScroller.getCurrX() != this.mScroller.getFinalX() && i5 >= (max = Math.max(computeHorizontalScrollRange() - getWidth(), 0))) {
            this.mScroller.abortAnimation();
            i5 = max;
        }
        if (ReactNativeFeatureFlags.shouldTriggerResponderTransferOnScrollAndroid() && z5 && !this.mEmittedOverScrollSinceScrollBegin) {
            ReactScrollViewHelper.emitScrollEvent(this, 0.0f, 0.0f, false);
            this.mEmittedOverScrollSinceScrollBegin = true;
        }
        super.onOverScrolled(i5, i6, z5, z6);
    }

    @Override // android.view.View
    public void onScrollChanged(int i5, int i6, int i10, int i11) {
        if (DEBUG_MODE) {
            p8.a.n(TAG, "onScrollChanged[%d] x %d y %d oldx %d oldy %d", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i10), Integer.valueOf(i11));
        }
        Intrinsics.checkNotNullParameter("ReactHorizontalScrollView.onScrollChanged", "sectionName");
        c.e("ReactHorizontalScrollView.onScrollChanged");
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

    @Override // android.widget.HorizontalScrollView, android.view.View
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

    @Override // android.widget.HorizontalScrollView, android.view.View
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

    @Override // android.widget.HorizontalScrollView
    public boolean pageScroll(int i5) {
        boolean pageScroll = super.pageScroll(i5);
        if (this.mPagingEnabled && pageScroll) {
            handlePostTouchScrolling(0, 0);
        }
        return pageScroll;
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

    @Override // android.widget.HorizontalScrollView, android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        if (view2 != null && !this.mPagingEnabled && this.mScrollsChildToFocus) {
            scrollToChild(view2);
        }
        requestChildFocusWithoutScroll(view, view2);
    }

    public void requestChildFocusWithoutScroll(View view, View view2) {
        super.requestChildFocus(view, view2);
    }

    @Override // android.widget.HorizontalScrollView, android.view.ViewGroup, android.view.ViewParent
    public boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z5) {
        if (this.mScrollsChildToFocus) {
            return super.requestChildRectangleOnScreen(view, rect, z5);
        }
        return false;
    }

    public void restoreScrollTo(int i5, int i6) {
        scrollTo(i5, i6);
    }

    @Override // android.widget.HorizontalScrollView, android.view.View
    public void scrollTo(int i5, int i6) {
        if (DEBUG_MODE) {
            p8.a.m(TAG, "scrollTo[%d] x %d y %d", Integer.valueOf(getId()), Integer.valueOf(i5), Integer.valueOf(i6));
        }
        super.scrollTo(i5, i6);
        ReactScrollViewHelper.updateFabricScrollState(this);
        setPendingContentOffsets(i5, i6);
    }

    @Override // com.facebook.react.views.scroll.ReactScrollViewHelper.HasSmoothScroll
    public void scrollToPreservingMomentum(int i5, int i6) {
        scrollTo(i5, i6);
        recreateFlingAnimation(i5, Integer.MAX_VALUE);
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
            MaintainVisibleScrollPositionHelper maintainVisibleScrollPositionHelper2 = new MaintainVisibleScrollPositionHelper(this, true);
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
            Point lastStateUpdateScroll = reactScrollViewScrollState.getLastStateUpdateScroll();
            restoreScrollTo(lastStateUpdateScroll.x, lastStateUpdateScroll.y);
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
            ReactScrollViewHelper.emitScrollMomentumBeginEvent(this, defaultScrollAnimationDuration > 0 ? (i6 - i5) / defaultScrollAnimationDuration : 0, 0);
            ReactScrollViewHelper.dispatchMomentumEndOnAnimationEnd(this);
        }
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void updateClippingRect() {
        updateClippingRect(null);
    }

    public ReactHorizontalScrollView(Context context, FpsListener fpsListener) {
        super(context);
        this.mScrollXAfterMeasure = Integer.MIN_VALUE;
        this.mOnScrollDispatchHelper = new OnScrollDispatchHelper();
        this.mVelocityHelper = new VelocityHelper();
        this.mTempRect = new Rect();
        this.DEFAULT_FLING_ANIMATOR = ObjectAnimator.ofInt(this, "scrollX", 0, 0);
        this.mOverflowInset = new Rect();
        this.mOverflow = Overflow.SCROLL;
        this.mPagingEnabled = false;
        this.mScrollEnabled = true;
        this.mEndFillColor = 0;
        this.mDisableIntervalMomentum = false;
        this.mSnapInterval = 0;
        this.mSnapToStart = true;
        this.mSnapToEnd = true;
        this.mSnapToAlignment = 0;
        this.mPagedArrowScrolling = false;
        this.mPendingContentOffsetX = -1;
        this.mPendingContentOffsetY = -1;
        this.mStateWrapper = null;
        this.mPointerEvents = PointerEvents.AUTO;
        this.mLastScrollDispatchTime = 0L;
        this.mScrollEventThrottle = 0;
        this.mFadingEdgeLengthStart = 0;
        this.mFadingEdgeLengthEnd = 0;
        this.mEmittedOverScrollSinceScrollBegin = false;
        this.mScrollsChildToFocus = true;
        this.mFpsListener = fpsListener;
        s0.p(this, new ReactScrollViewAccessibilityDelegate());
        this.mScroller = getOverScrollerFromParent();
        setOnHierarchyChangeListener(this);
        setClipChildren(false);
        initView();
    }

    private static HorizontalScrollView findDeepestScrollViewForMotionEvent(View view, MotionEvent motionEvent, boolean z5) {
        if (view == null) {
            return null;
        }
        Rect rect = new Rect();
        view.getGlobalVisibleRect(rect);
        if (!rect.contains((int) motionEvent.getRawX(), (int) motionEvent.getRawY())) {
            return null;
        }
        if (!z5 && (view instanceof HorizontalScrollView)) {
            WeakHashMap weakHashMap = s0.a;
            if (j0.h(view) && (view instanceof ReactHorizontalScrollView) && ((ReactHorizontalScrollView) view).mScrollEnabled) {
                return (HorizontalScrollView) view;
            }
        }
        if (view instanceof ViewGroup) {
            int i5 = 0;
            while (true) {
                ViewGroup viewGroup = (ViewGroup) view;
                if (i5 >= viewGroup.getChildCount()) {
                    break;
                }
                HorizontalScrollView findDeepestScrollViewForMotionEvent = findDeepestScrollViewForMotionEvent(viewGroup.getChildAt(i5), motionEvent, false);
                if (findDeepestScrollViewForMotionEvent != null) {
                    return findDeepestScrollViewForMotionEvent;
                }
                i5++;
            }
        }
        return null;
    }

    public void setBorderRadius(float f2, int i5) {
        BackgroundStyleApplicator.setBorderRadius(this, BorderRadiusProp.values()[i5], Float.isNaN(f2) ? null : new LengthPercentage(PixelUtil.toDIPFromPixel(f2), LengthPercentageType.POINT));
    }

    @Override // com.facebook.react.uimanager.ReactClippingViewGroup
    public void updateClippingRect(Set<Integer> set) {
        if (this.mRemoveClippedSubviews) {
            Intrinsics.checkNotNullParameter("ReactHorizontalScrollView.updateClippingRect", "sectionName");
            Trace.beginSection(c.Y("ReactHorizontalScrollView.updateClippingRect"));
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
