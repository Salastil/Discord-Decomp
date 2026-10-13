package androidx.drawerlayout.widget;

import a5.k0;
import android.R;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcelable;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowInsets;
import androidx.annotation.NonNull;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.customview.widget.ViewDragHelper;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.bridge.ReactContext;
import java.util.ArrayList;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class DrawerLayout extends ViewGroup {
    private static final String ACCESSIBILITY_CLASS_NAME = "androidx.drawerlayout.widget.DrawerLayout";
    private static final boolean ALLOW_EDGE_LOCK = false;
    static final boolean CAN_HIDE_DESCENDANTS;
    private static final boolean CHILDREN_DISALLOW_INTERCEPT = true;
    private static final int DEFAULT_SCRIM_COLOR = -1728053248;
    public static final int LOCK_MODE_LOCKED_CLOSED = 1;
    public static final int LOCK_MODE_LOCKED_OPEN = 2;
    public static final int LOCK_MODE_UNDEFINED = 3;
    public static final int LOCK_MODE_UNLOCKED = 0;
    private static final int MIN_DRAWER_MARGIN = 64;
    private static final int MIN_FLING_VELOCITY = 400;
    private static final int PEEK_DELAY = 160;
    private static final boolean SET_DRAWER_SHADOW_FROM_ELEVATION;
    public static final int STATE_DRAGGING = 1;
    public static final int STATE_IDLE = 0;
    public static final int STATE_SETTLING = 2;
    private static final String TAG = "DrawerLayout";
    private static final float TOUCH_SLOP_SENSITIVITY = 1.0f;
    private static boolean sEdgeSizeUsingSystemGestureInsets;
    private final AccessibilityViewCommand mActionDismiss;
    private final ChildAccessibilityDelegate mChildAccessibilityDelegate;
    private Rect mChildHitRect;
    private Matrix mChildInvertedMatrix;
    private boolean mChildrenCanceledTouch;
    private boolean mDrawStatusBarBackground;
    private float mDrawerElevation;
    private int mDrawerState;
    private boolean mFirstLayout;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private Object mLastInsets;
    private final ViewDragCallback mLeftCallback;
    private final ViewDragHelper mLeftDragger;
    private DrawerListener mListener;
    private List<DrawerListener> mListeners;
    private int mLockModeEnd;
    private int mLockModeLeft;
    private int mLockModeRight;
    private int mLockModeStart;
    private int mMinDrawerMargin;
    private final ArrayList<View> mNonDrawerViews;
    private final ViewDragCallback mRightCallback;
    private final ViewDragHelper mRightDragger;
    private int mScrimColor;
    private float mScrimOpacity;
    private Paint mScrimPaint;
    private Drawable mShadowEnd;
    private Drawable mShadowLeft;
    private Drawable mShadowLeftResolved;
    private Drawable mShadowRight;
    private Drawable mShadowRightResolved;
    private Drawable mShadowStart;
    private Drawable mStatusBarBackground;
    private CharSequence mTitleLeft;
    private CharSequence mTitleRight;
    private static final int[] THEME_ATTRS = {R.attr.colorPrimaryDark};
    static final int[] LAYOUT_ATTRS = {R.attr.layout_gravity};

    public static final class ChildAccessibilityDelegate extends androidx.core.view.b {
        @Override // androidx.core.view.b
        public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
            super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
            if (DrawerLayout.includeChildForAccessibility(view)) {
                return;
            }
            accessibilityNodeInfoCompat.a.setParent(null);
        }
    }

    public interface DrawerListener {
        void onDrawerClosed(View view);

        void onDrawerOpened(View view);

        void onDrawerSlide(View view, float f2);

        void onDrawerStateChanged(int i5);
    }

    public class ViewDragCallback extends k0 {

        /* renamed from: b, reason: collision with root package name */
        public final int f1852b;

        /* renamed from: c, reason: collision with root package name */
        public ViewDragHelper f1853c;

        /* renamed from: d, reason: collision with root package name */
        public final f f1854d = new f(this);

        public ViewDragCallback(int i5) {
            this.f1852b = i5;
        }

        @Override // a5.k0
        public final void G(int i5, int i6) {
            int i10 = i5 & 1;
            DrawerLayout drawerLayout = DrawerLayout.this;
            View findDrawerWithGravity = i10 == 1 ? drawerLayout.findDrawerWithGravity(3) : drawerLayout.findDrawerWithGravity(5);
            if (findDrawerWithGravity == null || drawerLayout.getDrawerLockMode(findDrawerWithGravity) != 0) {
                return;
            }
            this.f1853c.b(i6, findDrawerWithGravity);
        }

        @Override // a5.k0
        public final void H() {
            DrawerLayout.this.postDelayed(this.f1854d, 160L);
        }

        @Override // a5.k0
        public final void J(int i5, View view) {
            ((d) view.getLayoutParams()).f1859c = false;
            int i6 = this.f1852b == 3 ? 5 : 3;
            DrawerLayout drawerLayout = DrawerLayout.this;
            View findDrawerWithGravity = drawerLayout.findDrawerWithGravity(i6);
            if (findDrawerWithGravity != null) {
                drawerLayout.closeDrawer(findDrawerWithGravity);
            }
        }

        @Override // a5.k0
        public final void K(int i5) {
            DrawerLayout.this.updateDrawerState(i5, this.f1853c.f1710t);
        }

        @Override // a5.k0
        public final void L(View view, int i5, int i6) {
            int width = view.getWidth();
            DrawerLayout drawerLayout = DrawerLayout.this;
            float width2 = (drawerLayout.checkDrawerViewAbsoluteGravity(view, 3) ? i5 + width : drawerLayout.getWidth() - i5) / width;
            drawerLayout.setDrawerViewOffset(view, width2);
            view.setVisibility(width2 == 0.0f ? 4 : 0);
            drawerLayout.invalidate();
        }

        @Override // a5.k0
        public final void M(float f2, float f10, View view) {
            int i5;
            DrawerLayout drawerLayout = DrawerLayout.this;
            float drawerViewOffset = drawerLayout.getDrawerViewOffset(view);
            int width = view.getWidth();
            if (drawerLayout.checkDrawerViewAbsoluteGravity(view, 3)) {
                i5 = (f2 > 0.0f || (f2 == 0.0f && drawerViewOffset > 0.5f)) ? 0 : -width;
            } else {
                int width2 = drawerLayout.getWidth();
                if (f2 < 0.0f || (f2 == 0.0f && drawerViewOffset > 0.5f)) {
                    width2 -= width;
                }
                i5 = width2;
            }
            this.f1853c.q(i5, view.getTop());
            drawerLayout.invalidate();
        }

        @Override // a5.k0
        public final boolean V(int i5, View view) {
            DrawerLayout drawerLayout = DrawerLayout.this;
            return drawerLayout.isDrawerView(view) && drawerLayout.checkDrawerViewAbsoluteGravity(view, this.f1852b) && drawerLayout.getDrawerLockMode(view) == 0;
        }

        @Override // a5.k0
        public final int m(int i5, View view) {
            DrawerLayout drawerLayout = DrawerLayout.this;
            if (drawerLayout.checkDrawerViewAbsoluteGravity(view, 3)) {
                return Math.max(-view.getWidth(), Math.min(i5, 0));
            }
            int width = drawerLayout.getWidth();
            return Math.max(width - view.getWidth(), Math.min(i5, width));
        }

        @Override // a5.k0
        public final int n(int i5, View view) {
            return view.getTop();
        }

        @Override // a5.k0
        public final int z(View view) {
            if (DrawerLayout.this.isDrawerView(view)) {
                return view.getWidth();
            }
            return 0;
        }
    }

    static {
        int i5 = Build.VERSION.SDK_INT;
        CAN_HIDE_DESCENDANTS = true;
        SET_DRAWER_SHADOW_FROM_ELEVATION = true;
        sEdgeSizeUsingSystemGestureInsets = i5 >= 29;
    }

    public DrawerLayout(ReactContext reactContext) {
        super(reactContext, null, com.discord.R.attr.drawerLayoutStyle);
        this.mChildAccessibilityDelegate = new ChildAccessibilityDelegate();
        this.mScrimColor = DEFAULT_SCRIM_COLOR;
        this.mScrimPaint = new Paint();
        this.mFirstLayout = true;
        this.mLockModeLeft = 3;
        this.mLockModeRight = 3;
        this.mLockModeStart = 3;
        this.mLockModeEnd = 3;
        this.mShadowStart = null;
        this.mShadowEnd = null;
        this.mShadowLeft = null;
        this.mShadowRight = null;
        this.mActionDismiss = new a(this);
        setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.CONTROL);
        float f2 = getResources().getDisplayMetrics().density;
        this.mMinDrawerMargin = (int) ((64.0f * f2) + 0.5f);
        float f10 = f2 * 400.0f;
        ViewDragCallback viewDragCallback = new ViewDragCallback(3);
        this.mLeftCallback = viewDragCallback;
        ViewDragCallback viewDragCallback2 = new ViewDragCallback(5);
        this.mRightCallback = viewDragCallback2;
        ViewDragHelper viewDragHelper = new ViewDragHelper(getContext(), this, viewDragCallback);
        viewDragHelper.f1694b = (int) (viewDragHelper.f1694b * 1.0f);
        this.mLeftDragger = viewDragHelper;
        viewDragHelper.f1707q = 1;
        viewDragHelper.f1704n = f10;
        viewDragCallback.f1853c = viewDragHelper;
        ViewDragHelper viewDragHelper2 = new ViewDragHelper(getContext(), this, viewDragCallback2);
        viewDragHelper2.f1694b = (int) (1.0f * viewDragHelper2.f1694b);
        this.mRightDragger = viewDragHelper2;
        viewDragHelper2.f1707q = 2;
        viewDragHelper2.f1704n = f10;
        viewDragCallback2.f1853c = viewDragHelper2;
        setFocusableInTouchMode(true);
        WeakHashMap weakHashMap = s0.a;
        setImportantForAccessibility(1);
        s0.p(this, new c(this));
        setMotionEventSplittingEnabled(false);
        if (getFitsSystemWindows()) {
            setOnApplyWindowInsetsListener(new b());
            setSystemUiVisibility(1280);
            TypedArray obtainStyledAttributes = reactContext.obtainStyledAttributes(THEME_ATTRS);
            try {
                this.mStatusBarBackground = obtainStyledAttributes.getDrawable(0);
            } finally {
                obtainStyledAttributes.recycle();
            }
        }
        TypedArray obtainStyledAttributes2 = reactContext.obtainStyledAttributes(null, i2.a.a, com.discord.R.attr.drawerLayoutStyle, 0);
        try {
            if (obtainStyledAttributes2.hasValue(0)) {
                this.mDrawerElevation = obtainStyledAttributes2.getDimension(0, 0.0f);
            } else {
                this.mDrawerElevation = getResources().getDimension(com.discord.R.dimen.def_drawer_elevation);
            }
            obtainStyledAttributes2.recycle();
            this.mNonDrawerViews = new ArrayList<>();
        } catch (Throwable th2) {
            obtainStyledAttributes2.recycle();
            throw th2;
        }
    }

    public static String gravityToString(int i5) {
        return (i5 & 3) == 3 ? "LEFT" : (i5 & 5) == 5 ? "RIGHT" : Integer.toHexString(i5);
    }

    public static boolean includeChildForAccessibility(View view) {
        WeakHashMap weakHashMap = s0.a;
        return (view.getImportantForAccessibility() == 4 || view.getImportantForAccessibility() == 2) ? false : true;
    }

    public final void a() {
        Drawable drawable;
        Drawable drawable2;
        if (SET_DRAWER_SHADOW_FROM_ELEVATION) {
            return;
        }
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        if (layoutDirection == 0) {
            Drawable drawable3 = this.mShadowStart;
            if (drawable3 != null) {
                if (drawable3.isAutoMirrored()) {
                    drawable3.setLayoutDirection(layoutDirection);
                }
                drawable = this.mShadowStart;
            }
            drawable = this.mShadowLeft;
        } else {
            Drawable drawable4 = this.mShadowEnd;
            if (drawable4 != null) {
                if (drawable4.isAutoMirrored()) {
                    drawable4.setLayoutDirection(layoutDirection);
                }
                drawable = this.mShadowEnd;
            }
            drawable = this.mShadowLeft;
        }
        this.mShadowLeftResolved = drawable;
        int layoutDirection2 = getLayoutDirection();
        if (layoutDirection2 == 0) {
            Drawable drawable5 = this.mShadowEnd;
            if (drawable5 != null) {
                if (drawable5.isAutoMirrored()) {
                    drawable5.setLayoutDirection(layoutDirection2);
                }
                drawable2 = this.mShadowEnd;
            }
            drawable2 = this.mShadowRight;
        } else {
            Drawable drawable6 = this.mShadowStart;
            if (drawable6 != null) {
                if (drawable6.isAutoMirrored()) {
                    drawable6.setLayoutDirection(layoutDirection2);
                }
                drawable2 = this.mShadowStart;
            }
            drawable2 = this.mShadowRight;
        }
        this.mShadowRightResolved = drawable2;
    }

    public void addDrawerListener(@NonNull DrawerListener drawerListener) {
        if (drawerListener == null) {
            return;
        }
        if (this.mListeners == null) {
            this.mListeners = new ArrayList();
        }
        this.mListeners.add(drawerListener);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void addFocusables(ArrayList<View> arrayList, int i5, int i6) {
        if (getDescendantFocusability() == 393216) {
            return;
        }
        int childCount = getChildCount();
        boolean z5 = false;
        for (int i10 = 0; i10 < childCount; i10++) {
            View childAt = getChildAt(i10);
            if (!isDrawerView(childAt)) {
                this.mNonDrawerViews.add(childAt);
            } else if (isDrawerOpen(childAt)) {
                childAt.addFocusables(arrayList, i5, i6);
                z5 = true;
            }
        }
        if (!z5) {
            int size = this.mNonDrawerViews.size();
            for (int i11 = 0; i11 < size; i11++) {
                View view = this.mNonDrawerViews.get(i11);
                if (view.getVisibility() == 0) {
                    view.addFocusables(arrayList, i5, i6);
                }
            }
        }
        this.mNonDrawerViews.clear();
    }

    @Override // android.view.ViewGroup
    public void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        super.addView(view, i5, layoutParams);
        if (findOpenDrawer() != null || isDrawerView(view)) {
            WeakHashMap weakHashMap = s0.a;
            view.setImportantForAccessibility(4);
        } else {
            WeakHashMap weakHashMap2 = s0.a;
            view.setImportantForAccessibility(1);
        }
        if (CAN_HIDE_DESCENDANTS) {
            return;
        }
        s0.p(view, this.mChildAccessibilityDelegate);
    }

    public final void b(View view) {
        androidx.core.view.accessibility.a aVar = androidx.core.view.accessibility.a.f1559m;
        s0.m(aVar.a(), view);
        s0.j(0, view);
        if (!isDrawerOpen(view) || getDrawerLockMode(view) == 2) {
            return;
        }
        s0.n(view, aVar, null, this.mActionDismiss);
    }

    public final void c(View view, boolean z5) {
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if ((z5 || isDrawerView(childAt)) && !(z5 && childAt == view)) {
                WeakHashMap weakHashMap = s0.a;
                childAt.setImportantForAccessibility(4);
            } else {
                WeakHashMap weakHashMap2 = s0.a;
                childAt.setImportantForAccessibility(1);
            }
        }
    }

    public void cancelChildViewTouch() {
        if (this.mChildrenCanceledTouch) {
            return;
        }
        long uptimeMillis = SystemClock.uptimeMillis();
        MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            getChildAt(i5).dispatchTouchEvent(obtain);
        }
        obtain.recycle();
        this.mChildrenCanceledTouch = true;
    }

    public boolean checkDrawerViewAbsoluteGravity(View view, int i5) {
        return (getDrawerViewAbsoluteGravity(view) & i5) == i5;
    }

    @Override // android.view.ViewGroup
    public boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof d) && super.checkLayoutParams(layoutParams);
    }

    public void close() {
        closeDrawer(8388611);
    }

    public void closeDrawer(@NonNull View view) {
        closeDrawer(view, true);
    }

    public void closeDrawers() {
        closeDrawers(false);
    }

    @Override // android.view.View
    public void computeScroll() {
        int childCount = getChildCount();
        float f2 = 0.0f;
        for (int i5 = 0; i5 < childCount; i5++) {
            f2 = Math.max(f2, ((d) getChildAt(i5).getLayoutParams()).f1858b);
        }
        this.mScrimOpacity = f2;
        boolean g6 = this.mLeftDragger.g();
        boolean g10 = this.mRightDragger.g();
        if (g6 || g10) {
            WeakHashMap weakHashMap = s0.a;
            postInvalidateOnAnimation();
        }
    }

    @Override // android.view.View
    public boolean dispatchGenericMotionEvent(MotionEvent motionEvent) {
        boolean dispatchGenericMotionEvent;
        if ((motionEvent.getSource() & 2) == 0 || motionEvent.getAction() == 10 || this.mScrimOpacity <= 0.0f) {
            return super.dispatchGenericMotionEvent(motionEvent);
        }
        int childCount = getChildCount();
        if (childCount == 0) {
            return false;
        }
        float x5 = motionEvent.getX();
        float y5 = motionEvent.getY();
        for (int i5 = childCount - 1; i5 >= 0; i5--) {
            View childAt = getChildAt(i5);
            if (this.mChildHitRect == null) {
                this.mChildHitRect = new Rect();
            }
            childAt.getHitRect(this.mChildHitRect);
            if (this.mChildHitRect.contains((int) x5, (int) y5) && !isContentView(childAt)) {
                if (childAt.getMatrix().isIdentity()) {
                    float scrollX = getScrollX() - childAt.getLeft();
                    float scrollY = getScrollY() - childAt.getTop();
                    motionEvent.offsetLocation(scrollX, scrollY);
                    dispatchGenericMotionEvent = childAt.dispatchGenericMotionEvent(motionEvent);
                    motionEvent.offsetLocation(-scrollX, -scrollY);
                } else {
                    float scrollX2 = getScrollX() - childAt.getLeft();
                    float scrollY2 = getScrollY() - childAt.getTop();
                    MotionEvent obtain = MotionEvent.obtain(motionEvent);
                    obtain.offsetLocation(scrollX2, scrollY2);
                    Matrix matrix = childAt.getMatrix();
                    if (!matrix.isIdentity()) {
                        if (this.mChildInvertedMatrix == null) {
                            this.mChildInvertedMatrix = new Matrix();
                        }
                        matrix.invert(this.mChildInvertedMatrix);
                        obtain.transform(this.mChildInvertedMatrix);
                    }
                    dispatchGenericMotionEvent = childAt.dispatchGenericMotionEvent(obtain);
                    obtain.recycle();
                }
                if (dispatchGenericMotionEvent) {
                    return true;
                }
            }
        }
        return false;
    }

    public void dispatchOnDrawerClosed(View view) {
        View rootView;
        d dVar = (d) view.getLayoutParams();
        if ((dVar.f1860d & 1) == 1) {
            dVar.f1860d = 0;
            List<DrawerListener> list = this.mListeners;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.mListeners.get(size).onDrawerClosed(view);
                }
            }
            c(view, false);
            b(view);
            if (!hasWindowFocus() || (rootView = getRootView()) == null) {
                return;
            }
            rootView.sendAccessibilityEvent(32);
        }
    }

    public void dispatchOnDrawerOpened(View view) {
        d dVar = (d) view.getLayoutParams();
        if ((dVar.f1860d & 1) == 0) {
            dVar.f1860d = 1;
            List<DrawerListener> list = this.mListeners;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.mListeners.get(size).onDrawerOpened(view);
                }
            }
            c(view, true);
            b(view);
            if (hasWindowFocus()) {
                sendAccessibilityEvent(32);
            }
        }
    }

    public void dispatchOnDrawerSlide(View view, float f2) {
        List<DrawerListener> list = this.mListeners;
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                this.mListeners.get(size).onDrawerSlide(view, f2);
            }
        }
    }

    @Override // android.view.ViewGroup
    public boolean drawChild(Canvas canvas, View view, long j) {
        Drawable background;
        int height = getHeight();
        boolean isContentView = isContentView(view);
        int width = getWidth();
        int save = canvas.save();
        int i5 = 0;
        if (isContentView) {
            int childCount = getChildCount();
            int i6 = 0;
            for (int i10 = 0; i10 < childCount; i10++) {
                View childAt = getChildAt(i10);
                if (childAt != view && childAt.getVisibility() == 0 && (background = childAt.getBackground()) != null && background.getOpacity() == -1 && isDrawerView(childAt) && childAt.getHeight() >= height) {
                    if (checkDrawerViewAbsoluteGravity(childAt, 3)) {
                        int right = childAt.getRight();
                        if (right > i6) {
                            i6 = right;
                        }
                    } else {
                        int left = childAt.getLeft();
                        if (left < width) {
                            width = left;
                        }
                    }
                }
            }
            canvas.clipRect(i6, 0, width, getHeight());
            i5 = i6;
        }
        boolean drawChild = super.drawChild(canvas, view, j);
        canvas.restoreToCount(save);
        float f2 = this.mScrimOpacity;
        if (f2 > 0.0f && isContentView) {
            this.mScrimPaint.setColor((this.mScrimColor & 16777215) | (((int) ((((-16777216) & r0) >>> 24) * f2)) << 24));
            canvas.drawRect(i5, 0.0f, width, getHeight(), this.mScrimPaint);
            return drawChild;
        }
        if (this.mShadowLeftResolved != null && checkDrawerViewAbsoluteGravity(view, 3)) {
            int intrinsicWidth = this.mShadowLeftResolved.getIntrinsicWidth();
            int right2 = view.getRight();
            float max = Math.max(0.0f, Math.min(right2 / this.mLeftDragger.f1705o, 1.0f));
            this.mShadowLeftResolved.setBounds(right2, view.getTop(), intrinsicWidth + right2, view.getBottom());
            this.mShadowLeftResolved.setAlpha((int) (max * 255.0f));
            this.mShadowLeftResolved.draw(canvas);
            return drawChild;
        }
        if (this.mShadowRightResolved != null && checkDrawerViewAbsoluteGravity(view, 5)) {
            int intrinsicWidth2 = this.mShadowRightResolved.getIntrinsicWidth();
            int left2 = view.getLeft();
            float max2 = Math.max(0.0f, Math.min((getWidth() - left2) / this.mRightDragger.f1705o, 1.0f));
            this.mShadowRightResolved.setBounds(left2 - intrinsicWidth2, view.getTop(), left2, view.getBottom());
            this.mShadowRightResolved.setAlpha((int) (max2 * 255.0f));
            this.mShadowRightResolved.draw(canvas);
        }
        return drawChild;
    }

    public View findDrawerWithGravity(int i5) {
        WeakHashMap weakHashMap = s0.a;
        int absoluteGravity = Gravity.getAbsoluteGravity(i5, getLayoutDirection()) & 7;
        int childCount = getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = getChildAt(i6);
            if ((getDrawerViewAbsoluteGravity(childAt) & 7) == absoluteGravity) {
                return childAt;
            }
        }
        return null;
    }

    public View findOpenDrawer() {
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if ((((d) childAt.getLayoutParams()).f1860d & 1) == 1) {
                return childAt;
            }
        }
        return null;
    }

    public View findVisibleDrawer() {
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if (isDrawerView(childAt) && isDrawerVisible(childAt)) {
                return childAt;
            }
        }
        return null;
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateDefaultLayoutParams() {
        d dVar = new d(-1, -1);
        dVar.a = 0;
        return dVar;
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof d) {
            d dVar = (d) layoutParams;
            d dVar2 = new d(dVar);
            dVar2.a = 0;
            dVar2.a = dVar.a;
            return dVar2;
        }
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            d dVar3 = new d((ViewGroup.MarginLayoutParams) layoutParams);
            dVar3.a = 0;
            return dVar3;
        }
        d dVar4 = new d(layoutParams);
        dVar4.a = 0;
        return dVar4;
    }

    public float getDrawerElevation() {
        if (SET_DRAWER_SHADOW_FROM_ELEVATION) {
            return this.mDrawerElevation;
        }
        return 0.0f;
    }

    public int getDrawerLockMode(int i5) {
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        if (i5 == 3) {
            int i6 = this.mLockModeLeft;
            if (i6 != 3) {
                return i6;
            }
            int i10 = layoutDirection == 0 ? this.mLockModeStart : this.mLockModeEnd;
            if (i10 != 3) {
                return i10;
            }
            return 0;
        }
        if (i5 == 5) {
            int i11 = this.mLockModeRight;
            if (i11 != 3) {
                return i11;
            }
            int i12 = layoutDirection == 0 ? this.mLockModeEnd : this.mLockModeStart;
            if (i12 != 3) {
                return i12;
            }
            return 0;
        }
        if (i5 == 8388611) {
            int i13 = this.mLockModeStart;
            if (i13 != 3) {
                return i13;
            }
            int i14 = layoutDirection == 0 ? this.mLockModeLeft : this.mLockModeRight;
            if (i14 != 3) {
                return i14;
            }
            return 0;
        }
        if (i5 != 8388613) {
            return 0;
        }
        int i15 = this.mLockModeEnd;
        if (i15 != 3) {
            return i15;
        }
        int i16 = layoutDirection == 0 ? this.mLockModeRight : this.mLockModeLeft;
        if (i16 != 3) {
            return i16;
        }
        return 0;
    }

    public CharSequence getDrawerTitle(int i5) {
        WeakHashMap weakHashMap = s0.a;
        int absoluteGravity = Gravity.getAbsoluteGravity(i5, getLayoutDirection());
        if (absoluteGravity == 3) {
            return this.mTitleLeft;
        }
        if (absoluteGravity == 5) {
            return this.mTitleRight;
        }
        return null;
    }

    public int getDrawerViewAbsoluteGravity(View view) {
        int i5 = ((d) view.getLayoutParams()).a;
        WeakHashMap weakHashMap = s0.a;
        return Gravity.getAbsoluteGravity(i5, getLayoutDirection());
    }

    public float getDrawerViewOffset(View view) {
        return ((d) view.getLayoutParams()).f1858b;
    }

    public Drawable getStatusBarBackgroundDrawable() {
        return this.mStatusBarBackground;
    }

    public boolean isContentView(View view) {
        return ((d) view.getLayoutParams()).a == 0;
    }

    public boolean isDrawerOpen(@NonNull View view) {
        if (isDrawerView(view)) {
            return (((d) view.getLayoutParams()).f1860d & 1) == 1;
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    public boolean isDrawerView(View view) {
        int i5 = ((d) view.getLayoutParams()).a;
        WeakHashMap weakHashMap = s0.a;
        int absoluteGravity = Gravity.getAbsoluteGravity(i5, view.getLayoutDirection());
        return ((absoluteGravity & 3) == 0 && (absoluteGravity & 5) == 0) ? false : true;
    }

    public boolean isDrawerVisible(@NonNull View view) {
        if (isDrawerView(view)) {
            return ((d) view.getLayoutParams()).f1858b > 0.0f;
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    public boolean isOpen() {
        return isDrawerOpen(8388611);
    }

    public void moveDrawerToOffset(View view, float f2) {
        float drawerViewOffset = getDrawerViewOffset(view);
        float width = view.getWidth();
        int i5 = ((int) (width * f2)) - ((int) (drawerViewOffset * width));
        if (!checkDrawerViewAbsoluteGravity(view, 3)) {
            i5 = -i5;
        }
        view.offsetLeftAndRight(i5);
        setDrawerViewOffset(view, f2);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mFirstLayout = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.mFirstLayout = true;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (!this.mDrawStatusBarBackground || this.mStatusBarBackground == null) {
            return;
        }
        Object obj = this.mLastInsets;
        int systemWindowInsetTop = obj != null ? ((WindowInsets) obj).getSystemWindowInsetTop() : 0;
        if (systemWindowInsetTop > 0) {
            this.mStatusBarBackground.setBounds(0, 0, getWidth(), systemWindowInsetTop);
            this.mStatusBarBackground.draw(canvas);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x001b, code lost:
    
        if (r0 != 3) goto L23;
     */
    @Override // android.view.ViewGroup
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        View h6;
        int actionMasked = motionEvent.getActionMasked();
        boolean r5 = this.mLeftDragger.r(motionEvent) | this.mRightDragger.r(motionEvent);
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked == 2) {
                    ViewDragHelper viewDragHelper = this.mLeftDragger;
                    int length = viewDragHelper.f1696d.length;
                    int i5 = 0;
                    while (true) {
                        if (i5 >= length) {
                            break;
                        }
                        if ((viewDragHelper.k & (1 << i5)) != 0) {
                            float f2 = viewDragHelper.f1698f[i5] - viewDragHelper.f1696d[i5];
                            float f10 = viewDragHelper.f1699g[i5] - viewDragHelper.f1697e[i5];
                            float f11 = (f10 * f10) + (f2 * f2);
                            int i6 = viewDragHelper.f1694b;
                            if (f11 > i6 * i6) {
                                ViewDragCallback viewDragCallback = this.mLeftCallback;
                                DrawerLayout.this.removeCallbacks(viewDragCallback.f1854d);
                                ViewDragCallback viewDragCallback2 = this.mRightCallback;
                                DrawerLayout.this.removeCallbacks(viewDragCallback2.f1854d);
                                break;
                            }
                        }
                        i5++;
                    }
                }
                z5 = false;
            }
            closeDrawers(true);
            this.mChildrenCanceledTouch = false;
            z5 = false;
        } else {
            float x5 = motionEvent.getX();
            float y5 = motionEvent.getY();
            this.mInitialMotionX = x5;
            this.mInitialMotionY = y5;
            z5 = this.mScrimOpacity > 0.0f && (h6 = this.mLeftDragger.h((int) x5, (int) y5)) != null && isContentView(h6);
            this.mChildrenCanceledTouch = false;
        }
        if (!r5 && !z5) {
            int childCount = getChildCount();
            int i10 = 0;
            while (true) {
                if (i10 >= childCount) {
                    if (this.mChildrenCanceledTouch) {
                        break;
                    }
                    return false;
                }
                if (((d) getChildAt(i10).getLayoutParams()).f1859c) {
                    break;
                }
                i10++;
            }
        }
        return true;
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i5, KeyEvent keyEvent) {
        if (i5 != 4 || findVisibleDrawer() == null) {
            return super.onKeyDown(i5, keyEvent);
        }
        keyEvent.startTracking();
        return true;
    }

    @Override // android.view.View, android.view.KeyEvent.Callback
    public boolean onKeyUp(int i5, KeyEvent keyEvent) {
        if (i5 != 4) {
            return super.onKeyUp(i5, keyEvent);
        }
        View findVisibleDrawer = findVisibleDrawer();
        if (findVisibleDrawer != null && getDrawerLockMode(findVisibleDrawer) == 0) {
            closeDrawers();
        }
        return findVisibleDrawer != null;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        WindowInsets rootWindowInsets;
        float f2;
        int i12;
        boolean z6 = true;
        this.mInLayout = true;
        int i13 = i10 - i5;
        int childCount = getChildCount();
        int i14 = 0;
        while (i14 < childCount) {
            View childAt = getChildAt(i14);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (isContentView(childAt)) {
                    int i15 = ((ViewGroup.MarginLayoutParams) dVar).leftMargin;
                    childAt.layout(i15, ((ViewGroup.MarginLayoutParams) dVar).topMargin, childAt.getMeasuredWidth() + i15, childAt.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) dVar).topMargin);
                } else {
                    int measuredWidth = childAt.getMeasuredWidth();
                    int measuredHeight = childAt.getMeasuredHeight();
                    if (checkDrawerViewAbsoluteGravity(childAt, 3)) {
                        float f10 = measuredWidth;
                        i12 = (-measuredWidth) + ((int) (dVar.f1858b * f10));
                        f2 = (measuredWidth + i12) / f10;
                    } else {
                        float f11 = measuredWidth;
                        f2 = (i13 - r11) / f11;
                        i12 = i13 - ((int) (dVar.f1858b * f11));
                    }
                    boolean z7 = f2 != dVar.f1858b ? z6 : false;
                    int i16 = dVar.a & 112;
                    if (i16 == 16) {
                        int i17 = i11 - i6;
                        int i18 = (i17 - measuredHeight) / 2;
                        int i19 = ((ViewGroup.MarginLayoutParams) dVar).topMargin;
                        if (i18 < i19) {
                            i18 = i19;
                        } else {
                            int i20 = i18 + measuredHeight;
                            int i21 = ((ViewGroup.MarginLayoutParams) dVar).bottomMargin;
                            if (i20 > i17 - i21) {
                                i18 = (i17 - i21) - measuredHeight;
                            }
                        }
                        childAt.layout(i12, i18, measuredWidth + i12, measuredHeight + i18);
                    } else if (i16 != 80) {
                        int i22 = ((ViewGroup.MarginLayoutParams) dVar).topMargin;
                        childAt.layout(i12, i22, measuredWidth + i12, measuredHeight + i22);
                    } else {
                        int i23 = i11 - i6;
                        childAt.layout(i12, (i23 - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin) - childAt.getMeasuredHeight(), measuredWidth + i12, i23 - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin);
                    }
                    if (z7) {
                        setDrawerViewOffset(childAt, f2);
                    }
                    int i24 = dVar.f1858b > 0.0f ? 0 : 4;
                    if (childAt.getVisibility() != i24) {
                        childAt.setVisibility(i24);
                    }
                }
            }
            i14++;
            z6 = true;
        }
        if (sEdgeSizeUsingSystemGestureInsets && (rootWindowInsets = getRootWindowInsets()) != null) {
            Insets j = WindowInsetsCompat.g(null, rootWindowInsets).a.j();
            ViewDragHelper viewDragHelper = this.mLeftDragger;
            viewDragHelper.f1705o = Math.max(viewDragHelper.f1706p, j.a);
            ViewDragHelper viewDragHelper2 = this.mRightDragger;
            viewDragHelper2.f1705o = Math.max(viewDragHelper2.f1706p, j.f1513c);
        }
        this.mInLayout = false;
        this.mFirstLayout = false;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0048  */
    @Override // android.view.View
    @SuppressLint({"WrongConstant"})
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onMeasure(int i5, int i6) {
        boolean z5;
        int childCount;
        int i10;
        int mode = View.MeasureSpec.getMode(i5);
        int mode2 = View.MeasureSpec.getMode(i6);
        int size = View.MeasureSpec.getSize(i5);
        int size2 = View.MeasureSpec.getSize(i6);
        if (mode != 1073741824 || mode2 != 1073741824) {
            if (!isInEditMode()) {
                throw new IllegalArgumentException("DrawerLayout must be measured with MeasureSpec.EXACTLY.");
            }
            if (mode == 0) {
                size = 300;
            }
            if (mode2 == 0) {
                size2 = 300;
            }
        }
        setMeasuredDimension(size, size2);
        if (this.mLastInsets != null) {
            WeakHashMap weakHashMap = s0.a;
            if (getFitsSystemWindows()) {
                z5 = true;
                WeakHashMap weakHashMap2 = s0.a;
                int layoutDirection = getLayoutDirection();
                childCount = getChildCount();
                boolean z6 = false;
                boolean z7 = false;
                for (i10 = 0; i10 < childCount; i10++) {
                    View childAt = getChildAt(i10);
                    if (childAt.getVisibility() != 8) {
                        d dVar = (d) childAt.getLayoutParams();
                        if (z5) {
                            int absoluteGravity = Gravity.getAbsoluteGravity(dVar.a, layoutDirection);
                            if (childAt.getFitsSystemWindows()) {
                                WindowInsets windowInsets = (WindowInsets) this.mLastInsets;
                                if (absoluteGravity == 3) {
                                    windowInsets = windowInsets.replaceSystemWindowInsets(windowInsets.getSystemWindowInsetLeft(), windowInsets.getSystemWindowInsetTop(), 0, windowInsets.getSystemWindowInsetBottom());
                                } else if (absoluteGravity == 5) {
                                    windowInsets = windowInsets.replaceSystemWindowInsets(0, windowInsets.getSystemWindowInsetTop(), windowInsets.getSystemWindowInsetRight(), windowInsets.getSystemWindowInsetBottom());
                                }
                                childAt.dispatchApplyWindowInsets(windowInsets);
                            } else {
                                WindowInsets windowInsets2 = (WindowInsets) this.mLastInsets;
                                if (absoluteGravity == 3) {
                                    windowInsets2 = windowInsets2.replaceSystemWindowInsets(windowInsets2.getSystemWindowInsetLeft(), windowInsets2.getSystemWindowInsetTop(), 0, windowInsets2.getSystemWindowInsetBottom());
                                } else if (absoluteGravity == 5) {
                                    windowInsets2 = windowInsets2.replaceSystemWindowInsets(0, windowInsets2.getSystemWindowInsetTop(), windowInsets2.getSystemWindowInsetRight(), windowInsets2.getSystemWindowInsetBottom());
                                }
                                ((ViewGroup.MarginLayoutParams) dVar).leftMargin = windowInsets2.getSystemWindowInsetLeft();
                                ((ViewGroup.MarginLayoutParams) dVar).topMargin = windowInsets2.getSystemWindowInsetTop();
                                ((ViewGroup.MarginLayoutParams) dVar).rightMargin = windowInsets2.getSystemWindowInsetRight();
                                ((ViewGroup.MarginLayoutParams) dVar).bottomMargin = windowInsets2.getSystemWindowInsetBottom();
                            }
                        }
                        if (isContentView(childAt)) {
                            childAt.measure(View.MeasureSpec.makeMeasureSpec((size - ((ViewGroup.MarginLayoutParams) dVar).leftMargin) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin, 1073741824), View.MeasureSpec.makeMeasureSpec((size2 - ((ViewGroup.MarginLayoutParams) dVar).topMargin) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin, 1073741824));
                        } else {
                            if (!isDrawerView(childAt)) {
                                throw new IllegalStateException("Child " + childAt + " at index " + i10 + " does not have a valid layout_gravity - must be Gravity.LEFT, Gravity.RIGHT or Gravity.NO_GRAVITY");
                            }
                            if (SET_DRAWER_SHADOW_FROM_ELEVATION) {
                                float e9 = j0.e(childAt);
                                float f2 = this.mDrawerElevation;
                                if (e9 != f2) {
                                    j0.k(childAt, f2);
                                }
                            }
                            int drawerViewAbsoluteGravity = getDrawerViewAbsoluteGravity(childAt) & 7;
                            boolean z8 = drawerViewAbsoluteGravity == 3;
                            if ((z8 && z6) || (!z8 && z7)) {
                                throw new IllegalStateException("Child drawer has absolute gravity " + gravityToString(drawerViewAbsoluteGravity) + " but this DrawerLayout already has a drawer view along that edge");
                            }
                            if (z8) {
                                z6 = true;
                            } else {
                                z7 = true;
                            }
                            childAt.measure(ViewGroup.getChildMeasureSpec(i5, this.mMinDrawerMargin + ((ViewGroup.MarginLayoutParams) dVar).leftMargin + ((ViewGroup.MarginLayoutParams) dVar).rightMargin, ((ViewGroup.MarginLayoutParams) dVar).width), ViewGroup.getChildMeasureSpec(i6, ((ViewGroup.MarginLayoutParams) dVar).topMargin + ((ViewGroup.MarginLayoutParams) dVar).bottomMargin, ((ViewGroup.MarginLayoutParams) dVar).height));
                        }
                    }
                }
            }
        }
        z5 = false;
        WeakHashMap weakHashMap22 = s0.a;
        int layoutDirection2 = getLayoutDirection();
        childCount = getChildCount();
        boolean z62 = false;
        boolean z72 = false;
        while (i10 < childCount) {
        }
    }

    @Override // android.view.View
    public void onRestoreInstanceState(Parcelable parcelable) {
        View findDrawerWithGravity;
        if (!(parcelable instanceof e)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        e eVar = (e) parcelable;
        super.onRestoreInstanceState(eVar.f7399d);
        int i5 = eVar.f1861i;
        if (i5 != 0 && (findDrawerWithGravity = findDrawerWithGravity(i5)) != null) {
            openDrawer(findDrawerWithGravity);
        }
        int i6 = eVar.f1862v;
        if (i6 != 3) {
            setDrawerLockMode(i6, 3);
        }
        int i10 = eVar.f1863w;
        if (i10 != 3) {
            setDrawerLockMode(i10, 5);
        }
        int i11 = eVar.f1864x;
        if (i11 != 3) {
            setDrawerLockMode(i11, 8388611);
        }
        int i12 = eVar.f1865y;
        if (i12 != 3) {
            setDrawerLockMode(i12, 8388613);
        }
    }

    @Override // android.view.View
    public void onRtlPropertiesChanged(int i5) {
        a();
    }

    @Override // android.view.View
    public Parcelable onSaveInstanceState() {
        e eVar = new e(super.onSaveInstanceState());
        eVar.f1861i = 0;
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            d dVar = (d) getChildAt(i5).getLayoutParams();
            int i6 = dVar.f1860d;
            boolean z5 = i6 == 1;
            boolean z6 = i6 == 2;
            if (z5 || z6) {
                eVar.f1861i = dVar.a;
                break;
            }
        }
        eVar.f1862v = this.mLockModeLeft;
        eVar.f1863w = this.mLockModeRight;
        eVar.f1864x = this.mLockModeStart;
        eVar.f1865y = this.mLockModeEnd;
        return eVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0056, code lost:
    
        if (getDrawerLockMode(r7) != 2) goto L20;
     */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        this.mLeftDragger.k(motionEvent);
        this.mRightDragger.k(motionEvent);
        int action = motionEvent.getAction() & 255;
        boolean z5 = false;
        if (action == 0) {
            float x5 = motionEvent.getX();
            float y5 = motionEvent.getY();
            this.mInitialMotionX = x5;
            this.mInitialMotionY = y5;
            this.mChildrenCanceledTouch = false;
        } else if (action == 1) {
            float x10 = motionEvent.getX();
            float y6 = motionEvent.getY();
            View h6 = this.mLeftDragger.h((int) x10, (int) y6);
            if (h6 != null && isContentView(h6)) {
                float f2 = x10 - this.mInitialMotionX;
                float f10 = y6 - this.mInitialMotionY;
                int i5 = this.mLeftDragger.f1694b;
                if ((f10 * f10) + (f2 * f2) < i5 * i5) {
                    View findOpenDrawer = findOpenDrawer();
                    if (findOpenDrawer != null) {
                    }
                }
            }
            z5 = true;
            closeDrawers(z5);
        } else if (action == 3) {
            closeDrawers(true);
            this.mChildrenCanceledTouch = false;
        }
        return true;
    }

    public void open() {
        openDrawer(8388611);
    }

    public void openDrawer(@NonNull View view) {
        openDrawer(view, true);
    }

    public void removeDrawerListener(@NonNull DrawerListener drawerListener) {
        List<DrawerListener> list;
        if (drawerListener == null || (list = this.mListeners) == null) {
            return;
        }
        list.remove(drawerListener);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public void requestDisallowInterceptTouchEvent(boolean z5) {
        super.requestDisallowInterceptTouchEvent(z5);
        if (z5) {
            closeDrawers(true);
        }
    }

    @Override // android.view.View, android.view.ViewParent
    public void requestLayout() {
        if (this.mInLayout) {
            return;
        }
        super.requestLayout();
    }

    public void setChildInsets(Object obj, boolean z5) {
        this.mLastInsets = obj;
        this.mDrawStatusBarBackground = z5;
        setWillNotDraw(!z5 && getBackground() == null);
        requestLayout();
    }

    public void setDrawerElevation(float f2) {
        this.mDrawerElevation = f2;
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (isDrawerView(childAt)) {
                float f10 = this.mDrawerElevation;
                WeakHashMap weakHashMap = s0.a;
                j0.k(childAt, f10);
            }
        }
    }

    @Deprecated
    public void setDrawerListener(DrawerListener drawerListener) {
        DrawerListener drawerListener2 = this.mListener;
        if (drawerListener2 != null) {
            removeDrawerListener(drawerListener2);
        }
        if (drawerListener != null) {
            addDrawerListener(drawerListener);
        }
        this.mListener = drawerListener;
    }

    public void setDrawerLockMode(int i5) {
        setDrawerLockMode(i5, 3);
        setDrawerLockMode(i5, 5);
    }

    public void setDrawerShadow(Drawable drawable, int i5) {
        if (SET_DRAWER_SHADOW_FROM_ELEVATION) {
            return;
        }
        if ((i5 & 8388611) == 8388611) {
            this.mShadowStart = drawable;
        } else if ((i5 & 8388613) == 8388613) {
            this.mShadowEnd = drawable;
        } else if ((i5 & 3) == 3) {
            this.mShadowLeft = drawable;
        } else if ((i5 & 5) != 5) {
            return;
        } else {
            this.mShadowRight = drawable;
        }
        a();
        invalidate();
    }

    public void setDrawerTitle(int i5, CharSequence charSequence) {
        WeakHashMap weakHashMap = s0.a;
        int absoluteGravity = Gravity.getAbsoluteGravity(i5, getLayoutDirection());
        if (absoluteGravity == 3) {
            this.mTitleLeft = charSequence;
        } else if (absoluteGravity == 5) {
            this.mTitleRight = charSequence;
        }
    }

    public void setDrawerViewOffset(View view, float f2) {
        d dVar = (d) view.getLayoutParams();
        if (f2 == dVar.f1858b) {
            return;
        }
        dVar.f1858b = f2;
        dispatchOnDrawerSlide(view, f2);
    }

    public void setScrimColor(int i5) {
        this.mScrimColor = i5;
        invalidate();
    }

    public void setStatusBarBackground(Drawable drawable) {
        this.mStatusBarBackground = drawable;
        invalidate();
    }

    public void setStatusBarBackgroundColor(int i5) {
        this.mStatusBarBackground = new ColorDrawable(i5);
        invalidate();
    }

    public void updateDrawerState(int i5, View view) {
        int i6;
        int i10 = this.mLeftDragger.a;
        int i11 = this.mRightDragger.a;
        if (i10 == 1 || i11 == 1) {
            i6 = 1;
        } else {
            i6 = 2;
            if (i10 != 2 && i11 != 2) {
                i6 = 0;
            }
        }
        if (view != null && i5 == 0) {
            float f2 = ((d) view.getLayoutParams()).f1858b;
            if (f2 == 0.0f) {
                dispatchOnDrawerClosed(view);
            } else if (f2 == 1.0f) {
                dispatchOnDrawerOpened(view);
            }
        }
        if (i6 != this.mDrawerState) {
            this.mDrawerState = i6;
            List<DrawerListener> list = this.mListeners;
            if (list != null) {
                for (int size = list.size() - 1; size >= 0; size--) {
                    this.mListeners.get(size).onDrawerStateChanged(i6);
                }
            }
        }
    }

    public void closeDrawer(@NonNull View view, boolean z5) {
        if (!isDrawerView(view)) {
            throw new IllegalArgumentException("View " + view + " is not a sliding drawer");
        }
        d dVar = (d) view.getLayoutParams();
        if (this.mFirstLayout) {
            dVar.f1858b = 0.0f;
            dVar.f1860d = 0;
        } else if (z5) {
            dVar.f1860d |= 4;
            if (checkDrawerViewAbsoluteGravity(view, 3)) {
                this.mLeftDragger.s(view, -view.getWidth(), view.getTop());
            } else {
                this.mRightDragger.s(view, getWidth(), view.getTop());
            }
        } else {
            moveDrawerToOffset(view, 0.0f);
            updateDrawerState(0, view);
            view.setVisibility(4);
        }
        invalidate();
    }

    public void closeDrawers(boolean z5) {
        int childCount = getChildCount();
        boolean z6 = false;
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            d dVar = (d) childAt.getLayoutParams();
            if (isDrawerView(childAt) && (!z5 || dVar.f1859c)) {
                z6 |= checkDrawerViewAbsoluteGravity(childAt, 3) ? this.mLeftDragger.s(childAt, -childAt.getWidth(), childAt.getTop()) : this.mRightDragger.s(childAt, getWidth(), childAt.getTop());
                dVar.f1859c = false;
            }
        }
        ViewDragCallback viewDragCallback = this.mLeftCallback;
        DrawerLayout.this.removeCallbacks(viewDragCallback.f1854d);
        ViewDragCallback viewDragCallback2 = this.mRightCallback;
        DrawerLayout.this.removeCallbacks(viewDragCallback2.f1854d);
        if (z6) {
            invalidate();
        }
    }

    public void openDrawer(@NonNull View view, boolean z5) {
        if (!isDrawerView(view)) {
            throw new IllegalArgumentException("View " + view + " is not a sliding drawer");
        }
        d dVar = (d) view.getLayoutParams();
        if (this.mFirstLayout) {
            dVar.f1858b = 1.0f;
            dVar.f1860d = 1;
            c(view, true);
            b(view);
        } else if (z5) {
            dVar.f1860d |= 2;
            if (checkDrawerViewAbsoluteGravity(view, 3)) {
                this.mLeftDragger.s(view, 0, view.getTop());
            } else {
                this.mRightDragger.s(view, getWidth() - view.getWidth(), view.getTop());
            }
        } else {
            moveDrawerToOffset(view, 1.0f);
            updateDrawerState(0, view);
            view.setVisibility(0);
        }
        invalidate();
    }

    public void setDrawerLockMode(int i5, int i6) {
        View findDrawerWithGravity;
        WeakHashMap weakHashMap = s0.a;
        int absoluteGravity = Gravity.getAbsoluteGravity(i6, getLayoutDirection());
        if (i6 == 3) {
            this.mLockModeLeft = i5;
        } else if (i6 == 5) {
            this.mLockModeRight = i5;
        } else if (i6 == 8388611) {
            this.mLockModeStart = i5;
        } else if (i6 == 8388613) {
            this.mLockModeEnd = i5;
        }
        if (i5 != 0) {
            (absoluteGravity == 3 ? this.mLeftDragger : this.mRightDragger).a();
        }
        if (i5 != 1) {
            if (i5 == 2 && (findDrawerWithGravity = findDrawerWithGravity(absoluteGravity)) != null) {
                openDrawer(findDrawerWithGravity);
                return;
            }
            return;
        }
        View findDrawerWithGravity2 = findDrawerWithGravity(absoluteGravity);
        if (findDrawerWithGravity2 != null) {
            closeDrawer(findDrawerWithGravity2);
        }
    }

    public void setStatusBarBackground(int i5) {
        this.mStatusBarBackground = i5 != 0 ? getContext().getDrawable(i5) : null;
        invalidate();
    }

    public boolean isDrawerVisible(int i5) {
        View findDrawerWithGravity = findDrawerWithGravity(i5);
        if (findDrawerWithGravity != null) {
            return isDrawerVisible(findDrawerWithGravity);
        }
        return false;
    }

    public boolean isDrawerOpen(int i5) {
        View findDrawerWithGravity = findDrawerWithGravity(i5);
        if (findDrawerWithGravity != null) {
            return isDrawerOpen(findDrawerWithGravity);
        }
        return false;
    }

    public void setDrawerShadow(int i5, int i6) {
        setDrawerShadow(getContext().getDrawable(i5), i6);
    }

    public int getDrawerLockMode(@NonNull View view) {
        if (isDrawerView(view)) {
            return getDrawerLockMode(((d) view.getLayoutParams()).a);
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer");
    }

    @Override // android.view.ViewGroup
    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        d dVar = new d(context, attributeSet);
        dVar.a = 0;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, LAYOUT_ATTRS);
        dVar.a = obtainStyledAttributes.getInt(0, 0);
        obtainStyledAttributes.recycle();
        return dVar;
    }

    public void setDrawerLockMode(int i5, @NonNull View view) {
        if (isDrawerView(view)) {
            setDrawerLockMode(i5, ((d) view.getLayoutParams()).a);
            return;
        }
        throw new IllegalArgumentException("View " + view + " is not a drawer with appropriate layout_gravity");
    }

    public void closeDrawer(int i5) {
        closeDrawer(i5, true);
    }

    public void closeDrawer(int i5, boolean z5) {
        View findDrawerWithGravity = findDrawerWithGravity(i5);
        if (findDrawerWithGravity != null) {
            closeDrawer(findDrawerWithGravity, z5);
        } else {
            throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(i5));
        }
    }

    public void openDrawer(int i5) {
        openDrawer(i5, true);
    }

    public void openDrawer(int i5, boolean z5) {
        View findDrawerWithGravity = findDrawerWithGravity(i5);
        if (findDrawerWithGravity != null) {
            openDrawer(findDrawerWithGravity, z5);
        } else {
            throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(i5));
        }
    }
}
