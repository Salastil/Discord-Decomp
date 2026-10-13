package androidx.core.widget;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.FocusFinder;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.accessibility.AccessibilityEvent;
import android.view.animation.AnimationUtils;
import android.widget.EdgeEffect;
import android.widget.FrameLayout;
import android.widget.OverScroller;
import android.widget.ScrollView;
import androidx.core.view.DifferentialMotionFlingController;
import androidx.core.view.DifferentialMotionFlingTarget;
import androidx.core.view.NestedScrollingChildHelper;
import androidx.core.view.NestedScrollingParentHelper;
import androidx.core.view.ScrollFeedbackProviderCompat;
import androidx.core.view.ScrollingView;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.j0;
import androidx.core.view.o;
import androidx.core.view.q;
import androidx.core.view.s0;
import androidx.recyclerview.widget.h0;
import com.discord.key_commands.KeyCommandDescriptor;
import java.util.ArrayList;
import java.util.WeakHashMap;
import zo.c0;

/* loaded from: classes.dex */
public class NestedScrollView extends FrameLayout implements q, o, ScrollingView {
    static final int ANIMATED_SCROLL_GAP = 250;
    private static final int DEFAULT_SMOOTH_SCROLL_DURATION = 250;
    private static final float FLING_DESTRETCH_FACTOR = 4.0f;
    private static final float INFLEXION = 0.35f;
    private static final int INVALID_POINTER = -1;
    static final float MAX_SCROLL_FACTOR = 0.5f;
    private static final float SCROLL_FRICTION = 0.015f;
    private static final String TAG = "NestedScrollView";
    private int mActivePointerId;
    private final NestedScrollingChildHelper mChildHelper;
    private View mChildToScrollTo;
    DifferentialMotionFlingController mDifferentialMotionFlingController;
    final DifferentialMotionFlingTargetImpl mDifferentialMotionFlingTarget;
    public EdgeEffect mEdgeGlowBottom;
    public EdgeEffect mEdgeGlowTop;
    private boolean mFillViewport;
    private boolean mIsBeingDragged;
    private boolean mIsLaidOut;
    private boolean mIsLayoutDirty;
    private int mLastMotionY;
    private long mLastScroll;
    private int mLastScrollerY;
    private int mMaximumVelocity;
    private int mMinimumVelocity;
    private int mNestedYOffset;
    private OnScrollChangeListener mOnScrollChangeListener;
    private final NestedScrollingParentHelper mParentHelper;
    private final float mPhysicalCoeff;
    private SavedState mSavedState;
    private final int[] mScrollConsumed;
    ScrollFeedbackProviderCompat mScrollFeedbackProvider;
    private final int[] mScrollOffset;
    private OverScroller mScroller;
    private boolean mSmoothScrollingEnabled;
    private final Rect mTempRect;
    private int mTouchSlop;
    private VelocityTracker mVelocityTracker;
    private float mVerticalScrollFactor;
    private static final float DECELERATION_RATE = (float) (Math.log(0.78d) / Math.log(0.9d));
    private static final AccessibilityDelegate ACCESSIBILITY_DELEGATE = new AccessibilityDelegate();
    private static final int[] SCROLLVIEW_STYLEABLE = {R.attr.fillViewport};

    public static class AccessibilityDelegate extends androidx.core.view.b {
        @Override // androidx.core.view.b
        public final void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
            super.onInitializeAccessibilityEvent(view, accessibilityEvent);
            NestedScrollView nestedScrollView = (NestedScrollView) view;
            accessibilityEvent.setClassName(ScrollView.class.getName());
            accessibilityEvent.setScrollable(nestedScrollView.getScrollRange() > 0);
            accessibilityEvent.setScrollX(nestedScrollView.getScrollX());
            accessibilityEvent.setScrollY(nestedScrollView.getScrollY());
            accessibilityEvent.setMaxScrollX(nestedScrollView.getScrollX());
            accessibilityEvent.setMaxScrollY(nestedScrollView.getScrollRange());
        }

        @Override // androidx.core.view.b
        public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            int scrollRange;
            super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
            NestedScrollView nestedScrollView = (NestedScrollView) view;
            accessibilityNodeInfoCompat.o(ScrollView.class.getName());
            if (!nestedScrollView.isEnabled() || (scrollRange = nestedScrollView.getScrollRange()) <= 0) {
                return;
            }
            accessibilityNodeInfoCompat.y(true);
            if (nestedScrollView.getScrollY() > 0) {
                accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.j);
                accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1561o);
            }
            if (nestedScrollView.getScrollY() < scrollRange) {
                accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1557i);
                accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1562p);
            }
        }

        @Override // androidx.core.view.b
        public final boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
            if (super.performAccessibilityAction(view, i5, bundle)) {
                return true;
            }
            NestedScrollView nestedScrollView = (NestedScrollView) view;
            if (!nestedScrollView.isEnabled()) {
                return false;
            }
            int height = nestedScrollView.getHeight();
            Rect rect = new Rect();
            if (nestedScrollView.getMatrix().isIdentity() && nestedScrollView.getGlobalVisibleRect(rect)) {
                height = rect.height();
            }
            if (i5 != 4096) {
                if (i5 == 8192 || i5 == 16908344) {
                    int max = Math.max(nestedScrollView.getScrollY() - ((height - nestedScrollView.getPaddingBottom()) - nestedScrollView.getPaddingTop()), 0);
                    if (max == nestedScrollView.getScrollY()) {
                        return false;
                    }
                    nestedScrollView.smoothScrollTo(0, max, true);
                    return true;
                }
                if (i5 != 16908346) {
                    return false;
                }
            }
            int min = Math.min(nestedScrollView.getScrollY() + ((height - nestedScrollView.getPaddingBottom()) - nestedScrollView.getPaddingTop()), nestedScrollView.getScrollRange());
            if (min == nestedScrollView.getScrollY()) {
                return false;
            }
            nestedScrollView.smoothScrollTo(0, min, true);
            return true;
        }
    }

    public class DifferentialMotionFlingTargetImpl implements DifferentialMotionFlingTarget {
        public DifferentialMotionFlingTargetImpl() {
        }

        @Override // androidx.core.view.DifferentialMotionFlingTarget
        public final boolean a(float f2) {
            if (f2 == NestedScrollView.DECELERATION_RATE) {
                return false;
            }
            c();
            NestedScrollView.this.fling((int) f2);
            return true;
        }

        @Override // androidx.core.view.DifferentialMotionFlingTarget
        public final float b() {
            return -NestedScrollView.this.getVerticalScrollFactorCompat();
        }

        @Override // androidx.core.view.DifferentialMotionFlingTarget
        public final void c() {
            NestedScrollView.this.mScroller.abortAnimation();
        }
    }

    public interface OnScrollChangeListener {
        void a(NestedScrollView nestedScrollView);
    }

    public static class SavedState extends View.BaseSavedState {
        public static final Parcelable.Creator<SavedState> CREATOR = new f();

        /* renamed from: d, reason: collision with root package name */
        public int f1666d;

        public final String toString() {
            StringBuilder sb2 = new StringBuilder("HorizontalScrollView.SavedState{");
            sb2.append(Integer.toHexString(System.identityHashCode(this)));
            sb2.append(" scrollPosition=");
            return k0.d.m(sb2, this.f1666d, "}");
        }

        @Override // android.view.View.BaseSavedState, android.view.AbsSavedState, android.os.Parcelable
        public final void writeToParcel(Parcel parcel, int i5) {
            super.writeToParcel(parcel, i5);
            parcel.writeInt(this.f1666d);
        }
    }

    public NestedScrollView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, com.discord.R.attr.nestedScrollViewStyle);
        this.mTempRect = new Rect();
        this.mIsLayoutDirty = true;
        this.mIsLaidOut = false;
        this.mChildToScrollTo = null;
        this.mIsBeingDragged = false;
        this.mSmoothScrollingEnabled = true;
        this.mActivePointerId = -1;
        this.mScrollOffset = new int[2];
        this.mScrollConsumed = new int[2];
        DifferentialMotionFlingTargetImpl differentialMotionFlingTargetImpl = new DifferentialMotionFlingTargetImpl();
        this.mDifferentialMotionFlingTarget = differentialMotionFlingTargetImpl;
        this.mDifferentialMotionFlingController = new DifferentialMotionFlingController(getContext(), differentialMotionFlingTargetImpl);
        int i5 = Build.VERSION.SDK_INT;
        this.mEdgeGlowTop = i5 >= 31 ? c.a(context, attributeSet) : new EdgeEffect(context);
        this.mEdgeGlowBottom = i5 >= 31 ? c.a(context, attributeSet) : new EdgeEffect(context);
        this.mPhysicalCoeff = context.getResources().getDisplayMetrics().density * 160.0f * 386.0878f * 0.84f;
        this.mScroller = new OverScroller(getContext());
        setFocusable(true);
        setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.CONTROL);
        setWillNotDraw(false);
        ViewConfiguration viewConfiguration = ViewConfiguration.get(getContext());
        this.mTouchSlop = viewConfiguration.getScaledTouchSlop();
        this.mMinimumVelocity = viewConfiguration.getScaledMinimumFlingVelocity();
        this.mMaximumVelocity = viewConfiguration.getScaledMaximumFlingVelocity();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, SCROLLVIEW_STYLEABLE, com.discord.R.attr.nestedScrollViewStyle, 0);
        setFillViewport(obtainStyledAttributes.getBoolean(0, false));
        obtainStyledAttributes.recycle();
        this.mParentHelper = new NestedScrollingParentHelper();
        this.mChildHelper = new NestedScrollingChildHelper(this);
        setNestedScrollingEnabled(true);
        s0.p(this, ACCESSIBILITY_DELEGATE);
    }

    public static boolean a(View view, NestedScrollView nestedScrollView) {
        if (view == nestedScrollView) {
            return true;
        }
        Object parent = view.getParent();
        return (parent instanceof ViewGroup) && a((View) parent, nestedScrollView);
    }

    private ScrollFeedbackProviderCompat getScrollFeedbackProvider() {
        if (this.mScrollFeedbackProvider == null) {
            this.mScrollFeedbackProvider = new ScrollFeedbackProviderCompat(this);
        }
        return this.mScrollFeedbackProvider;
    }

    @Override // android.view.ViewGroup
    public void addView(View view) {
        if (getChildCount() > 0) {
            throw new IllegalStateException("ScrollView can host only one direct child");
        }
        super.addView(view);
    }

    public boolean arrowScroll(int i5) {
        View findFocus = findFocus();
        if (findFocus == this) {
            findFocus = null;
        }
        View view = findFocus;
        View findNextFocus = FocusFinder.getInstance().findNextFocus(this, view, i5);
        int maxScrollAmount = getMaxScrollAmount();
        if (findNextFocus == null || !b(findNextFocus, maxScrollAmount, getHeight())) {
            if (i5 == 33 && getScrollY() < maxScrollAmount) {
                maxScrollAmount = getScrollY();
            } else if (i5 == 130 && getChildCount() > 0) {
                View childAt = getChildAt(0);
                maxScrollAmount = Math.min((childAt.getBottom() + ((FrameLayout.LayoutParams) childAt.getLayoutParams()).bottomMargin) - ((getHeight() + getScrollY()) - getPaddingBottom()), maxScrollAmount);
            }
            if (maxScrollAmount == 0) {
                return false;
            }
            if (i5 != 130) {
                maxScrollAmount = -maxScrollAmount;
            }
            scrollBy(maxScrollAmount, -1, null, 0, 1, true);
        } else {
            findNextFocus.getDrawingRect(this.mTempRect);
            offsetDescendantRectToMyCoords(findNextFocus, this.mTempRect);
            scrollBy(computeScrollDeltaToGetChildRectOnScreen(this.mTempRect), -1, null, 0, 1, true);
            findNextFocus.requestFocus(i5);
        }
        if (view != null && view.isFocused() && !b(view, 0, getHeight())) {
            int descendantFocusability = getDescendantFocusability();
            setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.SHIFT);
            requestFocus();
            setDescendantFocusability(descendantFocusability);
        }
        return true;
    }

    public final boolean b(View view, int i5, int i6) {
        view.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(view, this.mTempRect);
        return this.mTempRect.bottom + i5 >= getScrollY() && this.mTempRect.top - i5 <= getScrollY() + i6;
    }

    public final void c(int i5, int i6, int[] iArr) {
        int scrollY = getScrollY();
        scrollBy(0, i5);
        int scrollY2 = getScrollY() - scrollY;
        if (iArr != null) {
            iArr[1] = iArr[1] + scrollY2;
        }
        this.mChildHelper.d(0, scrollY2, 0, i5 - scrollY2, null, i6, iArr);
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollExtent() {
        return super.computeHorizontalScrollExtent();
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollOffset() {
        return super.computeHorizontalScrollOffset();
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeHorizontalScrollRange() {
        return super.computeHorizontalScrollRange();
    }

    @Override // android.view.View
    public void computeScroll() {
        int i5;
        if (this.mScroller.isFinished()) {
            return;
        }
        this.mScroller.computeScrollOffset();
        int currY = this.mScroller.getCurrY();
        int consumeFlingInVerticalStretch = consumeFlingInVerticalStretch(currY - this.mLastScrollerY);
        this.mLastScrollerY = currY;
        int[] iArr = this.mScrollConsumed;
        iArr[1] = 0;
        dispatchNestedPreScroll(0, consumeFlingInVerticalStretch, iArr, null, 1);
        int i6 = consumeFlingInVerticalStretch - this.mScrollConsumed[1];
        int scrollRange = getScrollRange();
        if (Build.VERSION.SDK_INT >= 35) {
            e.a(this, Math.abs(this.mScroller.getCurrVelocity()));
        }
        if (i6 != 0) {
            int scrollY = getScrollY();
            overScrollByCompat(0, i6, getScrollX(), scrollY, 0, scrollRange, 0, 0, false);
            i5 = scrollRange;
            int scrollY2 = getScrollY() - scrollY;
            int i10 = i6 - scrollY2;
            int[] iArr2 = this.mScrollConsumed;
            iArr2[1] = 0;
            dispatchNestedScroll(0, scrollY2, 0, i10, this.mScrollOffset, 1, iArr2);
            i6 = i10 - this.mScrollConsumed[1];
        } else {
            i5 = scrollRange;
        }
        if (i6 != 0) {
            int overScrollMode = getOverScrollMode();
            if (overScrollMode == 0 || (overScrollMode == 1 && i5 > 0)) {
                if (i6 < 0) {
                    if (this.mEdgeGlowTop.isFinished()) {
                        this.mEdgeGlowTop.onAbsorb((int) this.mScroller.getCurrVelocity());
                    }
                } else if (this.mEdgeGlowBottom.isFinished()) {
                    this.mEdgeGlowBottom.onAbsorb((int) this.mScroller.getCurrVelocity());
                }
            }
            this.mScroller.abortAnimation();
            stopNestedScroll(1);
        }
        if (this.mScroller.isFinished()) {
            stopNestedScroll(1);
        } else {
            postInvalidateOnAnimation();
        }
    }

    public int computeScrollDeltaToGetChildRectOnScreen(Rect rect) {
        if (getChildCount() == 0) {
            return 0;
        }
        int height = getHeight();
        int scrollY = getScrollY();
        int i5 = scrollY + height;
        int verticalFadingEdgeLength = getVerticalFadingEdgeLength();
        if (rect.top > 0) {
            scrollY += verticalFadingEdgeLength;
        }
        View childAt = getChildAt(0);
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
        int i6 = rect.bottom < (childAt.getHeight() + layoutParams.topMargin) + layoutParams.bottomMargin ? i5 - verticalFadingEdgeLength : i5;
        int i10 = rect.bottom;
        if (i10 > i6 && rect.top > scrollY) {
            return Math.min(rect.height() > height ? rect.top - scrollY : rect.bottom - i6, (childAt.getBottom() + layoutParams.bottomMargin) - i5);
        }
        if (rect.top >= scrollY || i10 >= i6) {
            return 0;
        }
        return Math.max(rect.height() > height ? 0 - (i6 - rect.bottom) : 0 - (scrollY - rect.top), -getScrollY());
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollExtent() {
        return super.computeVerticalScrollExtent();
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollOffset() {
        return Math.max(0, super.computeVerticalScrollOffset());
    }

    @Override // android.view.View, androidx.core.view.ScrollingView
    public int computeVerticalScrollRange() {
        int childCount = getChildCount();
        int height = (getHeight() - getPaddingBottom()) - getPaddingTop();
        if (childCount == 0) {
            return height;
        }
        View childAt = getChildAt(0);
        int bottom = childAt.getBottom() + ((FrameLayout.LayoutParams) childAt.getLayoutParams()).bottomMargin;
        int scrollY = getScrollY();
        int max = Math.max(0, bottom - height);
        return scrollY < 0 ? bottom - scrollY : scrollY > max ? (scrollY - max) + bottom : bottom;
    }

    public int consumeFlingInVerticalStretch(int i5) {
        int height = getHeight();
        if (i5 > 0 && c0.w(this.mEdgeGlowTop) != DECELERATION_RATE) {
            int round = Math.round(c0.E(this.mEdgeGlowTop, ((-i5) * 4.0f) / height, MAX_SCROLL_FACTOR) * ((-height) / 4.0f));
            if (round != i5) {
                this.mEdgeGlowTop.finish();
            }
            return i5 - round;
        }
        if (i5 >= 0 || c0.w(this.mEdgeGlowBottom) == DECELERATION_RATE) {
            return i5;
        }
        float f2 = height;
        int round2 = Math.round(c0.E(this.mEdgeGlowBottom, (i5 * 4.0f) / f2, MAX_SCROLL_FACTOR) * (f2 / 4.0f));
        if (round2 != i5) {
            this.mEdgeGlowBottom.finish();
        }
        return i5 - round2;
    }

    public final void d(MotionEvent motionEvent) {
        int actionIndex = motionEvent.getActionIndex();
        if (motionEvent.getPointerId(actionIndex) == this.mActivePointerId) {
            int i5 = actionIndex == 0 ? 1 : 0;
            this.mLastMotionY = (int) motionEvent.getY(i5);
            this.mActivePointerId = motionEvent.getPointerId(i5);
            VelocityTracker velocityTracker = this.mVelocityTracker;
            if (velocityTracker != null) {
                velocityTracker.clear();
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return super.dispatchKeyEvent(keyEvent) || executeKeyEvent(keyEvent);
    }

    @Override // android.view.View
    public boolean dispatchNestedFling(float f2, float f10, boolean z5) {
        return this.mChildHelper.a(f2, f10, z5);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreFling(float f2, float f10) {
        return this.mChildHelper.b(f2, f10);
    }

    public boolean dispatchNestedPreScroll(int i5, int i6, int[] iArr, int[] iArr2, int i10) {
        return this.mChildHelper.c(i5, i6, iArr, iArr2, i10);
    }

    public void dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr, int i12, int[] iArr2) {
        this.mChildHelper.d(i5, i6, i10, i11, iArr, i12, iArr2);
    }

    @Override // android.view.View
    public void draw(Canvas canvas) {
        int i5;
        super.draw(canvas);
        int scrollY = getScrollY();
        int i6 = 0;
        if (!this.mEdgeGlowTop.isFinished()) {
            int save = canvas.save();
            int width = getWidth();
            int height = getHeight();
            int min = Math.min(0, scrollY);
            if (getClipToPadding()) {
                width -= getPaddingRight() + getPaddingLeft();
                i5 = getPaddingLeft();
            } else {
                i5 = 0;
            }
            if (getClipToPadding()) {
                height -= getPaddingBottom() + getPaddingTop();
                min += getPaddingTop();
            }
            canvas.translate(i5, min);
            this.mEdgeGlowTop.setSize(width, height);
            if (this.mEdgeGlowTop.draw(canvas)) {
                postInvalidateOnAnimation();
            }
            canvas.restoreToCount(save);
        }
        if (this.mEdgeGlowBottom.isFinished()) {
            return;
        }
        int save2 = canvas.save();
        int width2 = getWidth();
        int height2 = getHeight();
        int max = Math.max(getScrollRange(), scrollY) + height2;
        if (getClipToPadding()) {
            width2 -= getPaddingRight() + getPaddingLeft();
            i6 = getPaddingLeft();
        }
        if (getClipToPadding()) {
            height2 -= getPaddingBottom() + getPaddingTop();
            max -= getPaddingBottom();
        }
        canvas.translate(i6 - width2, max);
        canvas.rotate(180.0f, width2, DECELERATION_RATE);
        this.mEdgeGlowBottom.setSize(width2, height2);
        if (this.mEdgeGlowBottom.draw(canvas)) {
            postInvalidateOnAnimation();
        }
        canvas.restoreToCount(save2);
    }

    public final boolean e(int i5, int i6, int i10) {
        boolean z5;
        int height = getHeight();
        int scrollY = getScrollY();
        int i11 = height + scrollY;
        boolean z6 = i5 == 33;
        ArrayList<View> focusables = getFocusables(2);
        int size = focusables.size();
        View view = null;
        boolean z7 = false;
        for (int i12 = 0; i12 < size; i12++) {
            View view2 = focusables.get(i12);
            int top = view2.getTop();
            int bottom = view2.getBottom();
            if (i6 < bottom && top < i10) {
                boolean z8 = i6 < top && bottom < i10;
                if (view == null) {
                    view = view2;
                    z7 = z8;
                } else {
                    boolean z10 = (z6 && top < view.getTop()) || (!z6 && bottom > view.getBottom());
                    if (z7) {
                        if (z8) {
                            if (!z10) {
                            }
                            view = view2;
                        }
                    } else if (z8) {
                        view = view2;
                        z7 = true;
                    } else {
                        if (!z10) {
                        }
                        view = view2;
                    }
                }
            }
        }
        View view3 = view == null ? this : view;
        if (i6 < scrollY || i10 > i11) {
            scrollBy(z6 ? i6 - scrollY : i10 - i11, -1, null, 0, 1, true);
            z5 = true;
        } else {
            z5 = false;
        }
        if (view3 != findFocus()) {
            view3.requestFocus(i5);
        }
        return z5;
    }

    public boolean executeKeyEvent(KeyEvent keyEvent) {
        this.mTempRect.setEmpty();
        if (getChildCount() > 0) {
            View childAt = getChildAt(0);
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
            if (childAt.getHeight() + layoutParams.topMargin + layoutParams.bottomMargin > (getHeight() - getPaddingTop()) - getPaddingBottom()) {
                if (keyEvent.getAction() == 0) {
                    int keyCode = keyEvent.getKeyCode();
                    if (keyCode == 19) {
                        return keyEvent.isAltPressed() ? fullScroll(33) : arrowScroll(33);
                    }
                    if (keyCode == 20) {
                        return keyEvent.isAltPressed() ? fullScroll(130) : arrowScroll(130);
                    }
                    if (keyCode == 62) {
                        pageScroll(keyEvent.isShiftPressed() ? 33 : 130);
                        return false;
                    }
                    if (keyCode == 92) {
                        return fullScroll(33);
                    }
                    if (keyCode == 93) {
                        return fullScroll(130);
                    }
                    if (keyCode == 122) {
                        pageScroll(33);
                        return false;
                    }
                    if (keyCode == 123) {
                        pageScroll(130);
                        return false;
                    }
                }
                return false;
            }
        }
        if (isFocused() && keyEvent.getKeyCode() != 4) {
            View findFocus = findFocus();
            if (findFocus == this) {
                findFocus = null;
            }
            View findNextFocus = FocusFinder.getInstance().findNextFocus(this, findFocus, 130);
            if (findNextFocus != null && findNextFocus != this && findNextFocus.requestFocus(130)) {
                return true;
            }
        }
        return false;
    }

    public final boolean f(EdgeEffect edgeEffect, int i5) {
        if (i5 > 0) {
            return true;
        }
        float w5 = c0.w(edgeEffect) * getHeight();
        double log = Math.log((Math.abs(-i5) * INFLEXION) / (this.mPhysicalCoeff * SCROLL_FRICTION));
        double d6 = DECELERATION_RATE;
        return ((float) (Math.exp((d6 / (d6 - 1.0d)) * log) * ((double) (this.mPhysicalCoeff * SCROLL_FRICTION)))) < w5;
    }

    public void fling(int i5) {
        if (getChildCount() > 0) {
            this.mScroller.fling(getScrollX(), getScrollY(), 0, i5, 0, 0, Integer.MIN_VALUE, Integer.MAX_VALUE, 0, 0);
            startNestedScroll(2, 1);
            this.mLastScrollerY = getScrollY();
            postInvalidateOnAnimation();
            if (Build.VERSION.SDK_INT >= 35) {
                e.a(this, Math.abs(this.mScroller.getCurrVelocity()));
            }
        }
    }

    public boolean fullScroll(int i5) {
        int childCount;
        boolean z5 = i5 == 130;
        int height = getHeight();
        Rect rect = this.mTempRect;
        rect.top = 0;
        rect.bottom = height;
        if (z5 && (childCount = getChildCount()) > 0) {
            View childAt = getChildAt(childCount - 1);
            this.mTempRect.bottom = getPaddingBottom() + childAt.getBottom() + ((FrameLayout.LayoutParams) childAt.getLayoutParams()).bottomMargin;
            Rect rect2 = this.mTempRect;
            rect2.top = rect2.bottom - height;
        }
        Rect rect3 = this.mTempRect;
        return e(i5, rect3.top, rect3.bottom);
    }

    public final void g(int i5, int i6, int i10, boolean z5) {
        if (getChildCount() == 0) {
            return;
        }
        if (AnimationUtils.currentAnimationTimeMillis() - this.mLastScroll > 250) {
            View childAt = getChildAt(0);
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
            int height = childAt.getHeight() + layoutParams.topMargin + layoutParams.bottomMargin;
            int height2 = (getHeight() - getPaddingTop()) - getPaddingBottom();
            int scrollY = getScrollY();
            this.mScroller.startScroll(getScrollX(), scrollY, 0, Math.max(0, Math.min(i6 + scrollY, Math.max(0, height - height2))) - scrollY, i10);
            if (z5) {
                startNestedScroll(2, 1);
            } else {
                stopNestedScroll(1);
            }
            this.mLastScrollerY = getScrollY();
            postInvalidateOnAnimation();
        } else {
            if (!this.mScroller.isFinished()) {
                this.mScroller.abortAnimation();
                stopNestedScroll(1);
            }
            scrollBy(i5, i6);
        }
        this.mLastScroll = AnimationUtils.currentAnimationTimeMillis();
    }

    @Override // android.view.View
    public float getBottomFadingEdgeStrength() {
        if (getChildCount() == 0) {
            return DECELERATION_RATE;
        }
        View childAt = getChildAt(0);
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
        int verticalFadingEdgeLength = getVerticalFadingEdgeLength();
        int bottom = ((childAt.getBottom() + layoutParams.bottomMargin) - getScrollY()) - (getHeight() - getPaddingBottom());
        if (bottom < verticalFadingEdgeLength) {
            return bottom / verticalFadingEdgeLength;
        }
        return 1.0f;
    }

    public int getMaxScrollAmount() {
        return (int) (getHeight() * MAX_SCROLL_FACTOR);
    }

    @Override // android.view.ViewGroup
    public int getNestedScrollAxes() {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.mParentHelper;
        return nestedScrollingParentHelper.f1546b | nestedScrollingParentHelper.a;
    }

    public int getScrollRange() {
        if (getChildCount() <= 0) {
            return 0;
        }
        View childAt = getChildAt(0);
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
        return Math.max(0, ((childAt.getHeight() + layoutParams.topMargin) + layoutParams.bottomMargin) - ((getHeight() - getPaddingTop()) - getPaddingBottom()));
    }

    @Override // android.view.View
    public float getTopFadingEdgeStrength() {
        if (getChildCount() == 0) {
            return DECELERATION_RATE;
        }
        int verticalFadingEdgeLength = getVerticalFadingEdgeLength();
        int scrollY = getScrollY();
        if (scrollY < verticalFadingEdgeLength) {
            return scrollY / verticalFadingEdgeLength;
        }
        return 1.0f;
    }

    public float getVerticalScrollFactorCompat() {
        if (this.mVerticalScrollFactor == DECELERATION_RATE) {
            TypedValue typedValue = new TypedValue();
            Context context = getContext();
            if (!context.getTheme().resolveAttribute(R.attr.listPreferredItemHeight, typedValue, true)) {
                throw new IllegalStateException("Expected theme to define listPreferredItemHeight.");
            }
            this.mVerticalScrollFactor = typedValue.getDimension(context.getResources().getDisplayMetrics());
        }
        return this.mVerticalScrollFactor;
    }

    public final boolean h(MotionEvent motionEvent) {
        boolean z5;
        if (c0.w(this.mEdgeGlowTop) != DECELERATION_RATE) {
            c0.E(this.mEdgeGlowTop, DECELERATION_RATE, motionEvent.getX() / getWidth());
            z5 = true;
        } else {
            z5 = false;
        }
        if (c0.w(this.mEdgeGlowBottom) == DECELERATION_RATE) {
            return z5;
        }
        c0.E(this.mEdgeGlowBottom, DECELERATION_RATE, 1.0f - (motionEvent.getX() / getWidth()));
        return true;
    }

    public boolean hasNestedScrollingParent(int i5) {
        return this.mChildHelper.f(i5);
    }

    public boolean isFillViewport() {
        return this.mFillViewport;
    }

    @Override // android.view.View
    public boolean isNestedScrollingEnabled() {
        return this.mChildHelper.f1544d;
    }

    public boolean isSmoothScrollingEnabled() {
        return this.mSmoothScrollingEnabled;
    }

    @Override // android.view.ViewGroup
    public void measureChild(View view, int i5, int i6) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        view.measure(ViewGroup.getChildMeasureSpec(i5, getPaddingRight() + getPaddingLeft(), layoutParams.width), View.MeasureSpec.makeMeasureSpec(0, 0));
    }

    @Override // android.view.ViewGroup
    public void measureChildWithMargins(View view, int i5, int i6, int i10, int i11) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        view.measure(ViewGroup.getChildMeasureSpec(i5, getPaddingRight() + getPaddingLeft() + marginLayoutParams.leftMargin + marginLayoutParams.rightMargin + i6, marginLayoutParams.width), View.MeasureSpec.makeMeasureSpec(marginLayoutParams.topMargin + marginLayoutParams.bottomMargin, 0));
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mIsLaidOut = false;
    }

    @Override // android.view.View
    public boolean onGenericMotionEvent(MotionEvent motionEvent) {
        int i5;
        int i6;
        float f2;
        if (motionEvent.getAction() == 8 && !this.mIsBeingDragged) {
            if (tn.g.o(motionEvent, 2)) {
                f2 = motionEvent.getAxisValue(9);
                i5 = 9;
                i6 = (int) motionEvent.getX();
            } else if (tn.g.o(motionEvent, 4194304)) {
                float axisValue = motionEvent.getAxisValue(26);
                i6 = getWidth() / 2;
                i5 = 26;
                f2 = axisValue;
            } else {
                i5 = 0;
                i6 = 0;
                f2 = 0.0f;
            }
            if (f2 != DECELERATION_RATE) {
                scrollBy(-((int) (getVerticalScrollFactorCompat() * f2)), i5, motionEvent, i6, 1, tn.g.o(motionEvent, 8194));
                if (i5 == 0) {
                    return true;
                }
                this.mDifferentialMotionFlingController.a(motionEvent, i5);
                return true;
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        boolean z5 = true;
        if (action == 2 && this.mIsBeingDragged) {
            return true;
        }
        int i5 = action & 255;
        if (i5 != 0) {
            if (i5 != 1) {
                if (i5 == 2) {
                    int i6 = this.mActivePointerId;
                    if (i6 != -1) {
                        int findPointerIndex = motionEvent.findPointerIndex(i6);
                        if (findPointerIndex == -1) {
                            Log.e(TAG, "Invalid pointerId=" + i6 + " in onInterceptTouchEvent");
                        } else {
                            int y5 = (int) motionEvent.getY(findPointerIndex);
                            if (Math.abs(y5 - this.mLastMotionY) > this.mTouchSlop && (2 & getNestedScrollAxes()) == 0) {
                                this.mIsBeingDragged = true;
                                this.mLastMotionY = y5;
                                if (this.mVelocityTracker == null) {
                                    this.mVelocityTracker = VelocityTracker.obtain();
                                }
                                this.mVelocityTracker.addMovement(motionEvent);
                                this.mNestedYOffset = 0;
                                ViewParent parent = getParent();
                                if (parent != null) {
                                    parent.requestDisallowInterceptTouchEvent(true);
                                }
                            }
                        }
                    }
                } else if (i5 != 3) {
                    if (i5 == 6) {
                        d(motionEvent);
                    }
                }
            }
            this.mIsBeingDragged = false;
            this.mActivePointerId = -1;
            VelocityTracker velocityTracker = this.mVelocityTracker;
            if (velocityTracker != null) {
                velocityTracker.recycle();
                this.mVelocityTracker = null;
            }
            if (this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange())) {
                postInvalidateOnAnimation();
            }
            stopNestedScroll(0);
        } else {
            int y6 = (int) motionEvent.getY();
            int x5 = (int) motionEvent.getX();
            if (getChildCount() > 0) {
                int scrollY = getScrollY();
                View childAt = getChildAt(0);
                if (y6 >= childAt.getTop() - scrollY && y6 < childAt.getBottom() - scrollY && x5 >= childAt.getLeft() && x5 < childAt.getRight()) {
                    this.mLastMotionY = y6;
                    this.mActivePointerId = motionEvent.getPointerId(0);
                    VelocityTracker velocityTracker2 = this.mVelocityTracker;
                    if (velocityTracker2 == null) {
                        this.mVelocityTracker = VelocityTracker.obtain();
                    } else {
                        velocityTracker2.clear();
                    }
                    this.mVelocityTracker.addMovement(motionEvent);
                    this.mScroller.computeScrollOffset();
                    if (!h(motionEvent) && this.mScroller.isFinished()) {
                        z5 = false;
                    }
                    this.mIsBeingDragged = z5;
                    startNestedScroll(2, 0);
                }
            }
            if (!h(motionEvent) && this.mScroller.isFinished()) {
                z5 = false;
            }
            this.mIsBeingDragged = z5;
            VelocityTracker velocityTracker3 = this.mVelocityTracker;
            if (velocityTracker3 != null) {
                velocityTracker3.recycle();
                this.mVelocityTracker = null;
            }
        }
        return this.mIsBeingDragged;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        super.onLayout(z5, i5, i6, i10, i11);
        int i13 = 0;
        this.mIsLayoutDirty = false;
        View view = this.mChildToScrollTo;
        if (view != null && a(view, this)) {
            View view2 = this.mChildToScrollTo;
            view2.getDrawingRect(this.mTempRect);
            offsetDescendantRectToMyCoords(view2, this.mTempRect);
            int computeScrollDeltaToGetChildRectOnScreen = computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
            if (computeScrollDeltaToGetChildRectOnScreen != 0) {
                scrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
            }
        }
        this.mChildToScrollTo = null;
        if (!this.mIsLaidOut) {
            if (this.mSavedState != null) {
                scrollTo(getScrollX(), this.mSavedState.f1666d);
                this.mSavedState = null;
            }
            if (getChildCount() > 0) {
                View childAt = getChildAt(0);
                FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
                i12 = childAt.getMeasuredHeight() + layoutParams.topMargin + layoutParams.bottomMargin;
            } else {
                i12 = 0;
            }
            int paddingTop = ((i11 - i6) - getPaddingTop()) - getPaddingBottom();
            int scrollY = getScrollY();
            if (paddingTop < i12 && scrollY >= 0) {
                i13 = paddingTop + scrollY > i12 ? i12 - paddingTop : scrollY;
            }
            if (i13 != scrollY) {
                scrollTo(getScrollX(), i13);
            }
        }
        scrollTo(getScrollX(), getScrollY());
        this.mIsLaidOut = true;
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        if (this.mFillViewport && View.MeasureSpec.getMode(i6) != 0 && getChildCount() > 0) {
            View childAt = getChildAt(0);
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
            int measuredHeight = childAt.getMeasuredHeight();
            int measuredHeight2 = (((getMeasuredHeight() - getPaddingTop()) - getPaddingBottom()) - layoutParams.topMargin) - layoutParams.bottomMargin;
            if (measuredHeight < measuredHeight2) {
                childAt.measure(ViewGroup.getChildMeasureSpec(i5, getPaddingRight() + getPaddingLeft() + layoutParams.leftMargin + layoutParams.rightMargin, layoutParams.width), View.MeasureSpec.makeMeasureSpec(measuredHeight2, 1073741824));
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean onNestedFling(View view, float f2, float f10, boolean z5) {
        if (z5) {
            return false;
        }
        dispatchNestedFling(DECELERATION_RATE, f10, true);
        fling((int) f10);
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean onNestedPreFling(View view, float f2, float f10) {
        return dispatchNestedPreFling(f2, f10);
    }

    @Override // androidx.core.view.p
    public void onNestedPreScroll(View view, int i5, int i6, int[] iArr, int i10) {
        dispatchNestedPreScroll(i5, i6, iArr, null, i10);
    }

    @Override // androidx.core.view.q
    public void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12, int[] iArr) {
        c(i11, i12, iArr);
    }

    @Override // androidx.core.view.p
    public void onNestedScrollAccepted(View view, View view2, int i5, int i6) {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.mParentHelper;
        if (i6 == 1) {
            nestedScrollingParentHelper.f1546b = i5;
        } else {
            nestedScrollingParentHelper.a = i5;
        }
        startNestedScroll(2, i6);
    }

    @Override // android.view.View
    public void onOverScrolled(int i5, int i6, boolean z5, boolean z6) {
        super.scrollTo(i5, i6);
    }

    @Override // android.view.ViewGroup
    public boolean onRequestFocusInDescendants(int i5, Rect rect) {
        if (i5 == 2) {
            i5 = 130;
        } else if (i5 == 1) {
            i5 = 33;
        }
        View findNextFocus = rect == null ? FocusFinder.getInstance().findNextFocus(this, null, i5) : FocusFinder.getInstance().findNextFocusFromRect(this, rect, i5);
        if (findNextFocus != null && b(findNextFocus, 0, getHeight())) {
            return findNextFocus.requestFocus(i5, rect);
        }
        return false;
    }

    @Override // android.view.View
    public void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof SavedState)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        SavedState savedState = (SavedState) parcelable;
        super.onRestoreInstanceState(savedState.getSuperState());
        this.mSavedState = savedState;
        requestLayout();
    }

    @Override // android.view.View
    public Parcelable onSaveInstanceState() {
        SavedState savedState = new SavedState(super.onSaveInstanceState());
        savedState.f1666d = getScrollY();
        return savedState;
    }

    @Override // android.view.View
    public void onScrollChanged(int i5, int i6, int i10, int i11) {
        super.onScrollChanged(i5, i6, i10, i11);
        OnScrollChangeListener onScrollChangeListener = this.mOnScrollChangeListener;
        if (onScrollChangeListener != null) {
            onScrollChangeListener.a(this);
        }
    }

    @Override // android.view.View
    public void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        View findFocus = findFocus();
        if (findFocus == null || this == findFocus || !b(findFocus, 0, i11)) {
            return;
        }
        findFocus.getDrawingRect(this.mTempRect);
        offsetDescendantRectToMyCoords(findFocus, this.mTempRect);
        int computeScrollDeltaToGetChildRectOnScreen = computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
        if (computeScrollDeltaToGetChildRectOnScreen != 0) {
            if (this.mSmoothScrollingEnabled) {
                smoothScrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
            } else {
                scrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
            }
        }
    }

    @Override // androidx.core.view.p
    public boolean onStartNestedScroll(View view, View view2, int i5, int i6) {
        return (i5 & 2) != 0;
    }

    @Override // androidx.core.view.p
    public void onStopNestedScroll(View view, int i5) {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.mParentHelper;
        if (i5 == 1) {
            nestedScrollingParentHelper.f1546b = 0;
        } else {
            nestedScrollingParentHelper.a = 0;
        }
        stopNestedScroll(i5);
    }

    /* JADX WARN: Removed duplicated region for block: B:48:0x012b  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0148  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x014c  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0153  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        ViewParent parent;
        float E;
        int round;
        int i5;
        ViewParent parent2;
        if (this.mVelocityTracker == null) {
            this.mVelocityTracker = VelocityTracker.obtain();
        }
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            this.mNestedYOffset = 0;
        }
        MotionEvent obtain = MotionEvent.obtain(motionEvent);
        float f2 = this.mNestedYOffset;
        float f10 = DECELERATION_RATE;
        obtain.offsetLocation(DECELERATION_RATE, f2);
        if (actionMasked != 0) {
            if (actionMasked == 1) {
                VelocityTracker velocityTracker = this.mVelocityTracker;
                velocityTracker.computeCurrentVelocity(1000, this.mMaximumVelocity);
                int yVelocity = (int) velocityTracker.getYVelocity(this.mActivePointerId);
                if (Math.abs(yVelocity) >= this.mMinimumVelocity) {
                    if (c0.w(this.mEdgeGlowTop) != DECELERATION_RATE) {
                        if (f(this.mEdgeGlowTop, yVelocity)) {
                            this.mEdgeGlowTop.onAbsorb(yVelocity);
                        } else {
                            fling(-yVelocity);
                        }
                    } else if (c0.w(this.mEdgeGlowBottom) != DECELERATION_RATE) {
                        int i6 = -yVelocity;
                        if (f(this.mEdgeGlowBottom, i6)) {
                            this.mEdgeGlowBottom.onAbsorb(i6);
                        } else {
                            fling(i6);
                        }
                    } else {
                        int i10 = -yVelocity;
                        float f11 = i10;
                        if (!dispatchNestedPreFling(DECELERATION_RATE, f11)) {
                            dispatchNestedFling(DECELERATION_RATE, f11, true);
                            fling(i10);
                        }
                    }
                } else if (this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange())) {
                    postInvalidateOnAnimation();
                }
                this.mActivePointerId = -1;
                this.mIsBeingDragged = false;
                VelocityTracker velocityTracker2 = this.mVelocityTracker;
                if (velocityTracker2 != null) {
                    velocityTracker2.recycle();
                    this.mVelocityTracker = null;
                }
                stopNestedScroll(0);
                this.mEdgeGlowTop.onRelease();
                this.mEdgeGlowBottom.onRelease();
            } else if (actionMasked == 2) {
                int findPointerIndex = motionEvent.findPointerIndex(this.mActivePointerId);
                if (findPointerIndex == -1) {
                    Log.e(TAG, "Invalid pointerId=" + this.mActivePointerId + " in onTouchEvent");
                } else {
                    int y5 = (int) motionEvent.getY(findPointerIndex);
                    int i11 = this.mLastMotionY - y5;
                    float x5 = motionEvent.getX(findPointerIndex) / getWidth();
                    float height = i11 / getHeight();
                    if (c0.w(this.mEdgeGlowTop) != DECELERATION_RATE) {
                        E = -c0.E(this.mEdgeGlowTop, -height, x5);
                        if (c0.w(this.mEdgeGlowTop) == DECELERATION_RATE) {
                            this.mEdgeGlowTop.onRelease();
                        }
                    } else {
                        if (c0.w(this.mEdgeGlowBottom) != DECELERATION_RATE) {
                            E = c0.E(this.mEdgeGlowBottom, height, 1.0f - x5);
                            if (c0.w(this.mEdgeGlowBottom) == DECELERATION_RATE) {
                                this.mEdgeGlowBottom.onRelease();
                            }
                        }
                        round = Math.round(f10 * getHeight());
                        if (round != 0) {
                            invalidate();
                        }
                        i5 = i11 - round;
                        if (!this.mIsBeingDragged && Math.abs(i5) > this.mTouchSlop) {
                            parent2 = getParent();
                            if (parent2 != null) {
                                parent2.requestDisallowInterceptTouchEvent(true);
                            }
                            this.mIsBeingDragged = true;
                            i5 = i5 <= 0 ? i5 - this.mTouchSlop : i5 + this.mTouchSlop;
                        }
                        if (this.mIsBeingDragged) {
                            int scrollBy = scrollBy(i5, 1, motionEvent, (int) motionEvent.getX(findPointerIndex), 0, false);
                            this.mLastMotionY = y5 - scrollBy;
                            this.mNestedYOffset += scrollBy;
                        }
                    }
                    f10 = E;
                    round = Math.round(f10 * getHeight());
                    if (round != 0) {
                    }
                    i5 = i11 - round;
                    if (!this.mIsBeingDragged) {
                        parent2 = getParent();
                        if (parent2 != null) {
                        }
                        this.mIsBeingDragged = true;
                        if (i5 <= 0) {
                        }
                    }
                    if (this.mIsBeingDragged) {
                    }
                }
            } else if (actionMasked == 3) {
                if (this.mIsBeingDragged && getChildCount() > 0 && this.mScroller.springBack(getScrollX(), getScrollY(), 0, 0, 0, getScrollRange())) {
                    postInvalidateOnAnimation();
                }
                this.mActivePointerId = -1;
                this.mIsBeingDragged = false;
                VelocityTracker velocityTracker3 = this.mVelocityTracker;
                if (velocityTracker3 != null) {
                    velocityTracker3.recycle();
                    this.mVelocityTracker = null;
                }
                stopNestedScroll(0);
                this.mEdgeGlowTop.onRelease();
                this.mEdgeGlowBottom.onRelease();
            } else if (actionMasked == 5) {
                int actionIndex = motionEvent.getActionIndex();
                this.mLastMotionY = (int) motionEvent.getY(actionIndex);
                this.mActivePointerId = motionEvent.getPointerId(actionIndex);
            } else if (actionMasked == 6) {
                d(motionEvent);
                this.mLastMotionY = (int) motionEvent.getY(motionEvent.findPointerIndex(this.mActivePointerId));
            }
        } else {
            if (getChildCount() == 0) {
                return false;
            }
            if (this.mIsBeingDragged && (parent = getParent()) != null) {
                parent.requestDisallowInterceptTouchEvent(true);
            }
            if (!this.mScroller.isFinished()) {
                this.mScroller.abortAnimation();
                stopNestedScroll(1);
            }
            int y6 = (int) motionEvent.getY();
            int pointerId = motionEvent.getPointerId(0);
            this.mLastMotionY = y6;
            this.mActivePointerId = pointerId;
            startNestedScroll(2, 0);
        }
        VelocityTracker velocityTracker4 = this.mVelocityTracker;
        if (velocityTracker4 != null) {
            velocityTracker4.addMovement(obtain);
        }
        obtain.recycle();
        return true;
    }

    public boolean overScrollByCompat(int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15, boolean z5) {
        boolean z6;
        boolean z7;
        int i16;
        int overScrollMode = getOverScrollMode();
        boolean z8 = computeHorizontalScrollRange() > computeHorizontalScrollExtent();
        boolean z10 = computeVerticalScrollRange() > computeVerticalScrollExtent();
        boolean z11 = overScrollMode == 0 || (overScrollMode == 1 && z8);
        boolean z12 = overScrollMode == 0 || (overScrollMode == 1 && z10);
        int i17 = i10 + i5;
        int i18 = !z11 ? 0 : i14;
        int i19 = i11 + i6;
        int i20 = !z12 ? 0 : i15;
        int i21 = -i18;
        int i22 = i18 + i12;
        int i23 = -i20;
        int i24 = i20 + i13;
        if (i17 > i22) {
            i17 = i22;
            z6 = true;
        } else if (i17 < i21) {
            z6 = true;
            i17 = i21;
        } else {
            z6 = false;
        }
        if (i19 > i24) {
            i19 = i24;
            z7 = true;
        } else if (i19 < i23) {
            z7 = true;
            i19 = i23;
        } else {
            z7 = false;
        }
        if (!z7 || hasNestedScrollingParent(1)) {
            i16 = i17;
        } else {
            int i25 = i17;
            this.mScroller.springBack(i25, i19, 0, 0, 0, getScrollRange());
            i16 = i25;
        }
        onOverScrolled(i16, i19, z6, z7);
        return z6 || z7;
    }

    public boolean pageScroll(int i5) {
        boolean z5 = i5 == 130;
        int height = getHeight();
        if (z5) {
            this.mTempRect.top = getScrollY() + height;
            int childCount = getChildCount();
            if (childCount > 0) {
                View childAt = getChildAt(childCount - 1);
                int paddingBottom = getPaddingBottom() + childAt.getBottom() + ((FrameLayout.LayoutParams) childAt.getLayoutParams()).bottomMargin;
                Rect rect = this.mTempRect;
                if (rect.top + height > paddingBottom) {
                    rect.top = paddingBottom - height;
                }
            }
        } else {
            this.mTempRect.top = getScrollY() - height;
            Rect rect2 = this.mTempRect;
            if (rect2.top < 0) {
                rect2.top = 0;
            }
        }
        Rect rect3 = this.mTempRect;
        int i6 = rect3.top;
        int i10 = height + i6;
        rect3.bottom = i10;
        return e(i5, i6, i10);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestChildFocus(View view, View view2) {
        if (this.mIsLayoutDirty) {
            this.mChildToScrollTo = view2;
        } else {
            view2.getDrawingRect(this.mTempRect);
            offsetDescendantRectToMyCoords(view2, this.mTempRect);
            int computeScrollDeltaToGetChildRectOnScreen = computeScrollDeltaToGetChildRectOnScreen(this.mTempRect);
            if (computeScrollDeltaToGetChildRectOnScreen != 0) {
                scrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
            }
        }
        super.requestChildFocus(view, view2);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z5) {
        rect.offset(view.getLeft() - view.getScrollX(), view.getTop() - view.getScrollY());
        int computeScrollDeltaToGetChildRectOnScreen = computeScrollDeltaToGetChildRectOnScreen(rect);
        boolean z6 = computeScrollDeltaToGetChildRectOnScreen != 0;
        if (z6) {
            if (z5) {
                scrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
                return z6;
            }
            smoothScrollBy(0, computeScrollDeltaToGetChildRectOnScreen);
        }
        return z6;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z5) {
        VelocityTracker velocityTracker;
        if (z5 && (velocityTracker = this.mVelocityTracker) != null) {
            velocityTracker.recycle();
            this.mVelocityTracker = null;
        }
        super.requestDisallowInterceptTouchEvent(z5);
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        this.mIsLayoutDirty = true;
        super.requestLayout();
    }

    public int scrollBy(int i5, int i6, MotionEvent motionEvent, int i10, int i11, boolean z5) {
        int i12;
        int i13;
        VelocityTracker velocityTracker;
        if (i11 == 1) {
            startNestedScroll(2, i11);
        }
        boolean z6 = false;
        if (dispatchNestedPreScroll(0, i5, this.mScrollConsumed, this.mScrollOffset, i11)) {
            int i14 = i5 - this.mScrollConsumed[1];
            i13 = this.mScrollOffset[1];
            i12 = i14;
        } else {
            i12 = i5;
            i13 = 0;
        }
        int scrollY = getScrollY();
        int scrollRange = getScrollRange();
        int overScrollMode = getOverScrollMode();
        boolean z7 = (overScrollMode == 0 || (overScrollMode == 1 && getScrollRange() > 0)) && !z5;
        int i15 = i12;
        boolean z8 = overScrollByCompat(0, i12, 0, scrollY, 0, scrollRange, 0, 0, true) && !hasNestedScrollingParent(i11);
        int scrollY2 = getScrollY() - scrollY;
        if (motionEvent != null && scrollY2 != 0) {
            getScrollFeedbackProvider().a.onScrollProgress(motionEvent.getDeviceId(), motionEvent.getSource(), i6, scrollY2);
        }
        int[] iArr = this.mScrollConsumed;
        iArr[1] = 0;
        dispatchNestedScroll(0, scrollY2, 0, i15 - scrollY2, this.mScrollOffset, i11, iArr);
        int i16 = i13 + this.mScrollOffset[1];
        int i17 = i15 - this.mScrollConsumed[1];
        int i18 = scrollY + i17;
        if (i18 < 0) {
            if (z7) {
                c0.E(this.mEdgeGlowTop, (-i17) / getHeight(), i10 / getWidth());
                if (motionEvent != null) {
                    getScrollFeedbackProvider().a.onScrollLimit(motionEvent.getDeviceId(), motionEvent.getSource(), i6, true);
                }
                if (!this.mEdgeGlowBottom.isFinished()) {
                    this.mEdgeGlowBottom.onRelease();
                }
            }
        } else if (i18 > scrollRange && z7) {
            c0.E(this.mEdgeGlowBottom, i17 / getHeight(), 1.0f - (i10 / getWidth()));
            if (motionEvent != null) {
                getScrollFeedbackProvider().a.onScrollLimit(motionEvent.getDeviceId(), motionEvent.getSource(), i6, false);
            }
            if (!this.mEdgeGlowTop.isFinished()) {
                this.mEdgeGlowTop.onRelease();
            }
        }
        if (this.mEdgeGlowTop.isFinished() && this.mEdgeGlowBottom.isFinished()) {
            z6 = z8;
        } else {
            postInvalidateOnAnimation();
        }
        if (z6 && i11 == 0 && (velocityTracker = this.mVelocityTracker) != null) {
            velocityTracker.clear();
        }
        if (i11 == 1) {
            stopNestedScroll(i11);
            this.mEdgeGlowTop.onRelease();
            this.mEdgeGlowBottom.onRelease();
        }
        return i16;
    }

    @Override // android.view.View
    public void scrollTo(int i5, int i6) {
        if (getChildCount() > 0) {
            View childAt = getChildAt(0);
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) childAt.getLayoutParams();
            int width = (getWidth() - getPaddingLeft()) - getPaddingRight();
            int width2 = childAt.getWidth() + layoutParams.leftMargin + layoutParams.rightMargin;
            int height = (getHeight() - getPaddingTop()) - getPaddingBottom();
            int height2 = childAt.getHeight() + layoutParams.topMargin + layoutParams.bottomMargin;
            if (width >= width2 || i5 < 0) {
                i5 = 0;
            } else if (width + i5 > width2) {
                i5 = width2 - width;
            }
            if (height >= height2 || i6 < 0) {
                i6 = 0;
            } else if (height + i6 > height2) {
                i6 = height2 - height;
            }
            if (i5 == getScrollX() && i6 == getScrollY()) {
                return;
            }
            super.scrollTo(i5, i6);
        }
    }

    public void setFillViewport(boolean z5) {
        if (z5 != this.mFillViewport) {
            this.mFillViewport = z5;
            requestLayout();
        }
    }

    @Override // android.view.View
    public void setNestedScrollingEnabled(boolean z5) {
        NestedScrollingChildHelper nestedScrollingChildHelper = this.mChildHelper;
        if (nestedScrollingChildHelper.f1544d) {
            ViewGroup viewGroup = nestedScrollingChildHelper.f1543c;
            WeakHashMap weakHashMap = s0.a;
            j0.o(viewGroup);
        }
        nestedScrollingChildHelper.f1544d = z5;
    }

    public void setOnScrollChangeListener(OnScrollChangeListener onScrollChangeListener) {
        this.mOnScrollChangeListener = onScrollChangeListener;
    }

    public void setSmoothScrollingEnabled(boolean z5) {
        this.mSmoothScrollingEnabled = z5;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public boolean shouldDelayChildPressedState() {
        return true;
    }

    public final void smoothScrollBy(int i5, int i6) {
        g(i5, i6, h0.DEFAULT_SWIPE_ANIMATION_DURATION, false);
    }

    public final void smoothScrollTo(int i5, int i6) {
        smoothScrollTo(i5, i6, h0.DEFAULT_SWIPE_ANIMATION_DURATION, false);
    }

    public boolean startNestedScroll(int i5, int i6) {
        return this.mChildHelper.g(i5, i6);
    }

    public void stopNestedScroll(int i5) {
        this.mChildHelper.h(i5);
    }

    @Override // android.view.View
    public boolean dispatchNestedPreScroll(int i5, int i6, int[] iArr, int[] iArr2) {
        return dispatchNestedPreScroll(i5, i6, iArr, iArr2, 0);
    }

    @Override // android.view.View
    public boolean hasNestedScrollingParent() {
        return hasNestedScrollingParent(0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void onNestedPreScroll(View view, int i5, int i6, int[] iArr) {
        onNestedPreScroll(view, i5, i6, iArr, 0);
    }

    @Override // androidx.core.view.p
    public void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12) {
        c(i11, i12, null);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public boolean onStartNestedScroll(View view, View view2, int i5) {
        return onStartNestedScroll(view, view2, i5, 0);
    }

    public final void smoothScrollBy(int i5, int i6, int i10) {
        g(i5, i6, i10, false);
    }

    public final void smoothScrollTo(int i5, int i6, int i10) {
        smoothScrollTo(i5, i6, i10, false);
    }

    @Override // android.view.View
    public boolean startNestedScroll(int i5) {
        return startNestedScroll(i5, 0);
    }

    @Override // android.view.View
    public void stopNestedScroll() {
        stopNestedScroll(0);
    }

    public boolean dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr, int i12) {
        return this.mChildHelper.d(i5, i6, i10, i11, iArr, i12, null);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void onNestedScroll(View view, int i5, int i6, int i10, int i11) {
        c(i11, 0, null);
    }

    public void smoothScrollTo(int i5, int i6, boolean z5) {
        smoothScrollTo(i5, i6, h0.DEFAULT_SWIPE_ANIMATION_DURATION, z5);
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i5) {
        if (getChildCount() <= 0) {
            super.addView(view, i5);
            return;
        }
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    public void smoothScrollTo(int i5, int i6, int i10, boolean z5) {
        g(i5 - getScrollX(), i6 - getScrollY(), i10, z5);
    }

    @Override // android.view.View
    public boolean dispatchNestedScroll(int i5, int i6, int i10, int i11, int[] iArr) {
        return this.mChildHelper.d(i5, i6, i10, i11, iArr, 0, null);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void onNestedScrollAccepted(View view, View view2, int i5) {
        onNestedScrollAccepted(view, view2, i5, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void onStopNestedScroll(View view) {
        onStopNestedScroll(view, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public void addView(View view, ViewGroup.LayoutParams layoutParams) {
        if (getChildCount() <= 0) {
            super.addView(view, layoutParams);
            return;
        }
        throw new IllegalStateException("ScrollView can host only one direct child");
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        if (getChildCount() <= 0) {
            super.addView(view, i5, layoutParams);
            return;
        }
        throw new IllegalStateException("ScrollView can host only one direct child");
    }
}
