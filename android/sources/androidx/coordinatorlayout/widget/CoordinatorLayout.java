package androidx.coordinatorlayout.widget;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Parcelable;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.annotation.NonNull;
import androidx.collection.SimpleArrayMap;
import androidx.core.util.Pools$SimplePool;
import androidx.core.util.Pools$SynchronizedPool;
import androidx.core.view.NestedScrollingParentHelper;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.h0;
import androidx.core.view.j0;
import androidx.core.view.p;
import androidx.core.view.q;
import androidx.core.view.s0;
import bg.s;
import com.discord.R;
import e4.i;
import eightbitlab.com.blurview.b;
import i.m;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.WeakHashMap;
import ng.g;
import u0.a;
import v0.c;
import v0.d;
import v0.e;
import v0.f;

/* loaded from: classes.dex */
public class CoordinatorLayout extends ViewGroup implements p, q {
    public static final String P;
    public static final Class[] Q;
    public static final ThreadLocal R;
    public static final s S;
    public static final Pools$SynchronizedPool T;
    public final int[] E;
    public View F;
    public View G;
    public b H;
    public boolean I;
    public WindowInsetsCompat J;
    public boolean K;
    public Drawable L;
    public ViewGroup.OnHierarchyChangeListener M;
    public m N;
    public final NestedScrollingParentHelper O;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f1421d;

    /* renamed from: e, reason: collision with root package name */
    public final i f1422e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f1423i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f1424v;

    /* renamed from: w, reason: collision with root package name */
    public final int[] f1425w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f1426x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f1427y;

    static {
        Package r02 = CoordinatorLayout.class.getPackage();
        P = r02 != null ? r02.getName() : null;
        S = new s(12);
        Q = new Class[]{Context.class, AttributeSet.class};
        R = new ThreadLocal();
        T = new Pools$SynchronizedPool(12);
    }

    public CoordinatorLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.coordinatorLayoutStyle);
        this.f1421d = new ArrayList();
        this.f1422e = new i(15);
        this.f1423i = new ArrayList();
        this.f1424v = new int[2];
        this.f1425w = new int[2];
        this.O = new NestedScrollingParentHelper();
        int[] iArr = a.a;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr, R.attr.coordinatorLayoutStyle, 0);
        s0.o(this, context, iArr, attributeSet, obtainStyledAttributes, R.attr.coordinatorLayoutStyle, 0);
        int resourceId = obtainStyledAttributes.getResourceId(0, 0);
        if (resourceId != 0) {
            Resources resources = context.getResources();
            int[] intArray = resources.getIntArray(resourceId);
            this.E = intArray;
            float f2 = resources.getDisplayMetrics().density;
            int length = intArray.length;
            for (int i5 = 0; i5 < length; i5++) {
                this.E[i5] = (int) (r1[i5] * f2);
            }
        }
        this.L = obtainStyledAttributes.getDrawable(1);
        obtainStyledAttributes.recycle();
        s();
        super.setOnHierarchyChangeListener(new com.reactnativecommunity.webview.b(this, 1));
        WeakHashMap weakHashMap = s0.a;
        if (getImportantForAccessibility() == 0) {
            setImportantForAccessibility(1);
        }
    }

    public static Rect a() {
        Rect rect = (Rect) T.acquire();
        return rect == null ? new Rect() : rect;
    }

    public static void f(int i5, Rect rect, Rect rect2, d dVar, int i6, int i10) {
        int i11 = dVar.f19134c;
        if (i11 == 0) {
            i11 = 17;
        }
        int absoluteGravity = Gravity.getAbsoluteGravity(i11, i5);
        int i12 = dVar.f19135d;
        if ((i12 & 7) == 0) {
            i12 |= 8388611;
        }
        if ((i12 & 112) == 0) {
            i12 |= 48;
        }
        int absoluteGravity2 = Gravity.getAbsoluteGravity(i12, i5);
        int i13 = absoluteGravity & 7;
        int i14 = absoluteGravity & 112;
        int i15 = absoluteGravity2 & 7;
        int i16 = absoluteGravity2 & 112;
        int width = i15 != 1 ? i15 != 5 ? rect.left : rect.right : rect.left + (rect.width() / 2);
        int height = i16 != 16 ? i16 != 80 ? rect.top : rect.bottom : rect.top + (rect.height() / 2);
        if (i13 == 1) {
            width -= i6 / 2;
        } else if (i13 != 5) {
            width -= i6;
        }
        if (i14 == 16) {
            height -= i10 / 2;
        } else if (i14 != 80) {
            height -= i10;
        }
        rect2.set(width, height, i6 + width, i10 + height);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static d h(View view) {
        d dVar = (d) view.getLayoutParams();
        if (!dVar.f19133b) {
            if (view instanceof v0.a) {
                v0.b behavior = ((g) ((v0.a) view)).getBehavior();
                if (behavior == null) {
                    Log.e("CoordinatorLayout", "Attached behavior class is null");
                }
                dVar.b(behavior);
                dVar.f19133b = true;
                return dVar;
            }
            c cVar = null;
            for (Class<?> cls = view.getClass(); cls != null; cls = cls.getSuperclass()) {
                cVar = (c) cls.getAnnotation(c.class);
                if (cVar != null) {
                    break;
                }
            }
            if (cVar != null) {
                try {
                    dVar.b((v0.b) cVar.value().getDeclaredConstructor(null).newInstance(null));
                } catch (Exception e9) {
                    Log.e("CoordinatorLayout", "Default behavior class " + cVar.value().getName() + " could not be instantiated. Did you forget a default constructor?", e9);
                }
            }
            dVar.f19133b = true;
        }
        return dVar;
    }

    public static void q(int i5, View view) {
        d dVar = (d) view.getLayoutParams();
        int i6 = dVar.f19140i;
        if (i6 != i5) {
            WeakHashMap weakHashMap = s0.a;
            view.offsetLeftAndRight(i5 - i6);
            dVar.f19140i = i5;
        }
    }

    public static void r(int i5, View view) {
        d dVar = (d) view.getLayoutParams();
        int i6 = dVar.j;
        if (i6 != i5) {
            WeakHashMap weakHashMap = s0.a;
            view.offsetTopAndBottom(i5 - i6);
            dVar.j = i5;
        }
    }

    public final void b(d dVar, Rect rect, int i5, int i6) {
        int width = getWidth();
        int height = getHeight();
        int max = Math.max(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar).leftMargin, Math.min(rect.left, ((width - getPaddingRight()) - i5) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin));
        int max2 = Math.max(getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar).topMargin, Math.min(rect.top, ((height - getPaddingBottom()) - i6) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin));
        rect.set(max, max2, i5 + max, i6 + max2);
    }

    public final void c(View view, Rect rect, boolean z5) {
        if (view.isLayoutRequested() || view.getVisibility() == 8) {
            rect.setEmpty();
        } else if (z5) {
            e(view, rect);
        } else {
            rect.set(view.getLeft(), view.getTop(), view.getRight(), view.getBottom());
        }
    }

    @Override // android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return (layoutParams instanceof d) && super.checkLayoutParams(layoutParams);
    }

    public final List d(View view) {
        SimpleArrayMap simpleArrayMap = (SimpleArrayMap) this.f1422e.f7953e;
        int i5 = simpleArrayMap.f1208i;
        ArrayList arrayList = null;
        for (int i6 = 0; i6 < i5; i6++) {
            ArrayList arrayList2 = (ArrayList) simpleArrayMap.i(i6);
            if (arrayList2 != null && arrayList2.contains(view)) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(simpleArrayMap.f(i6));
            }
        }
        return arrayList == null ? Collections.EMPTY_LIST : arrayList;
    }

    @Override // android.view.ViewGroup
    public final boolean drawChild(Canvas canvas, View view, long j) {
        v0.b bVar = ((d) view.getLayoutParams()).a;
        if (bVar != null) {
            bVar.getClass();
        }
        return super.drawChild(canvas, view, j);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        Drawable drawable = this.L;
        if ((drawable == null || !drawable.isStateful()) ? false : drawable.setState(drawableState)) {
            invalidate();
        }
    }

    public final void e(View view, Rect rect) {
        ThreadLocal threadLocal = f.a;
        rect.set(0, 0, view.getWidth(), view.getHeight());
        ThreadLocal threadLocal2 = f.a;
        Matrix matrix = (Matrix) threadLocal2.get();
        if (matrix == null) {
            matrix = new Matrix();
            threadLocal2.set(matrix);
        } else {
            matrix.reset();
        }
        f.a(this, view, matrix);
        ThreadLocal threadLocal3 = f.f19147b;
        RectF rectF = (RectF) threadLocal3.get();
        if (rectF == null) {
            rectF = new RectF();
            threadLocal3.set(rectF);
        }
        rectF.set(rect);
        matrix.mapRect(rectF);
        rect.set((int) (rectF.left + 0.5f), (int) (rectF.top + 0.5f), (int) (rectF.right + 0.5f), (int) (rectF.bottom + 0.5f));
    }

    public final int g(int i5) {
        int[] iArr = this.E;
        if (iArr == null) {
            Log.e("CoordinatorLayout", "No keylines defined for " + this + " - attempted index lookup " + i5);
            return 0;
        }
        if (i5 >= 0 && i5 < iArr.length) {
            return iArr[i5];
        }
        Log.e("CoordinatorLayout", "Keyline index " + i5 + " out of range for " + this);
        return 0;
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new d(-2, -2);
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new d(getContext(), attributeSet);
    }

    public final List<View> getDependencySortedChildren() {
        o();
        return Collections.unmodifiableList(this.f1421d);
    }

    public final WindowInsetsCompat getLastWindowInsets() {
        return this.J;
    }

    @Override // android.view.ViewGroup
    public int getNestedScrollAxes() {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.O;
        return nestedScrollingParentHelper.f1546b | nestedScrollingParentHelper.a;
    }

    public Drawable getStatusBarBackground() {
        return this.L;
    }

    @Override // android.view.View
    public int getSuggestedMinimumHeight() {
        return Math.max(super.getSuggestedMinimumHeight(), getPaddingBottom() + getPaddingTop());
    }

    @Override // android.view.View
    public int getSuggestedMinimumWidth() {
        return Math.max(super.getSuggestedMinimumWidth(), getPaddingRight() + getPaddingLeft());
    }

    public final boolean i(View view, int i5, int i6) {
        Pools$SynchronizedPool pools$SynchronizedPool = T;
        Rect a = a();
        e(view, a);
        try {
            return a.contains(i5, i6);
        } finally {
            a.setEmpty();
            pools$SynchronizedPool.release(a);
        }
    }

    public final void j(int i5) {
        int i6;
        Rect rect;
        int i10;
        ArrayList arrayList;
        boolean z5;
        boolean z6;
        boolean z7;
        int width;
        int i11;
        int i12;
        int i13;
        int height;
        int i14;
        int i15;
        int i16;
        ArrayList arrayList2;
        d dVar;
        int i17;
        int i18;
        Rect rect2;
        int i19;
        View view;
        v0.b bVar;
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        ArrayList arrayList3 = this.f1421d;
        int size = arrayList3.size();
        Rect a = a();
        Rect a10 = a();
        Rect a11 = a();
        int i20 = 0;
        while (true) {
            Pools$SynchronizedPool pools$SynchronizedPool = T;
            if (i20 >= size) {
                Rect rect3 = a11;
                a.setEmpty();
                pools$SynchronizedPool.release(a);
                a10.setEmpty();
                pools$SynchronizedPool.release(a10);
                rect3.setEmpty();
                pools$SynchronizedPool.release(rect3);
                return;
            }
            View view2 = (View) arrayList3.get(i20);
            d dVar2 = (d) view2.getLayoutParams();
            if (i5 != 0 || view2.getVisibility() != 8) {
                int i21 = 0;
                while (i21 < i20) {
                    if (dVar2.f19141l == ((View) arrayList3.get(i21))) {
                        d dVar3 = (d) view2.getLayoutParams();
                        if (dVar3.k != null) {
                            Rect a12 = a();
                            Rect a13 = a();
                            d dVar4 = dVar2;
                            Rect a14 = a();
                            e(dVar3.k, a12);
                            c(view2, a13, false);
                            int measuredWidth = view2.getMeasuredWidth();
                            View view3 = view2;
                            int measuredHeight = view3.getMeasuredHeight();
                            arrayList2 = arrayList3;
                            dVar = dVar4;
                            i17 = i21;
                            layoutDirection = layoutDirection;
                            i19 = i20;
                            view = view3;
                            f(layoutDirection, a12, a14, dVar3, measuredWidth, measuredHeight);
                            i18 = size;
                            rect2 = a11;
                            boolean z8 = (a14.left == a13.left && a14.top == a13.top) ? false : true;
                            b(dVar3, a14, measuredWidth, measuredHeight);
                            int i22 = a14.left - a13.left;
                            int i23 = a14.top - a13.top;
                            if (i22 != 0) {
                                WeakHashMap weakHashMap2 = s0.a;
                                view.offsetLeftAndRight(i22);
                            }
                            if (i23 != 0) {
                                WeakHashMap weakHashMap3 = s0.a;
                                view.offsetTopAndBottom(i23);
                            }
                            if (z8 && (bVar = dVar3.a) != null) {
                                bVar.h(this, view, dVar3.k);
                            }
                            a12.setEmpty();
                            pools$SynchronizedPool.release(a12);
                            a13.setEmpty();
                            pools$SynchronizedPool.release(a13);
                            a14.setEmpty();
                            pools$SynchronizedPool.release(a14);
                            i21 = i17 + 1;
                            dVar2 = dVar;
                            view2 = view;
                            arrayList3 = arrayList2;
                            size = i18;
                            i20 = i19;
                            a11 = rect2;
                        }
                    }
                    arrayList2 = arrayList3;
                    dVar = dVar2;
                    i17 = i21;
                    i18 = size;
                    rect2 = a11;
                    i19 = i20;
                    view = view2;
                    i21 = i17 + 1;
                    dVar2 = dVar;
                    view2 = view;
                    arrayList3 = arrayList2;
                    size = i18;
                    i20 = i19;
                    a11 = rect2;
                }
                ArrayList arrayList4 = arrayList3;
                d dVar5 = dVar2;
                int i24 = size;
                Rect rect4 = a11;
                i6 = i20;
                View view4 = view2;
                c(view4, a10, true);
                if (dVar5.f19138g != 0 && !a10.isEmpty()) {
                    int absoluteGravity = Gravity.getAbsoluteGravity(dVar5.f19138g, layoutDirection);
                    int i25 = absoluteGravity & 112;
                    if (i25 == 48) {
                        a.top = Math.max(a.top, a10.bottom);
                    } else if (i25 == 80) {
                        a.bottom = Math.max(a.bottom, getHeight() - a10.top);
                    }
                    int i26 = absoluteGravity & 7;
                    if (i26 == 3) {
                        a.left = Math.max(a.left, a10.right);
                    } else if (i26 == 5) {
                        a.right = Math.max(a.right, getWidth() - a10.left);
                    }
                }
                if (dVar5.f19139h != 0 && view4.getVisibility() == 0) {
                    WeakHashMap weakHashMap4 = s0.a;
                    if (view4.isLaidOut() && view4.getWidth() > 0 && view4.getHeight() > 0) {
                        d dVar6 = (d) view4.getLayoutParams();
                        v0.b bVar2 = dVar6.a;
                        Rect a15 = a();
                        Rect a16 = a();
                        a16.set(view4.getLeft(), view4.getTop(), view4.getRight(), view4.getBottom());
                        if (bVar2 == null || !bVar2.e(view4)) {
                            a15.set(a16);
                        } else if (!a16.contains(a15)) {
                            throw new IllegalArgumentException("Rect should be within the child's bounds. Rect:" + a15.toShortString() + " | Bounds:" + a16.toShortString());
                        }
                        a16.setEmpty();
                        pools$SynchronizedPool.release(a16);
                        if (a15.isEmpty()) {
                            a15.setEmpty();
                            pools$SynchronizedPool.release(a15);
                        } else {
                            int absoluteGravity2 = Gravity.getAbsoluteGravity(dVar6.f19139h, layoutDirection);
                            if ((absoluteGravity2 & 48) != 48 || (i15 = (a15.top - ((ViewGroup.MarginLayoutParams) dVar6).topMargin) - dVar6.j) >= (i16 = a.top)) {
                                z6 = false;
                            } else {
                                r(i16 - i15, view4);
                                z6 = true;
                            }
                            if ((absoluteGravity2 & 80) == 80 && (height = ((getHeight() - a15.bottom) - ((ViewGroup.MarginLayoutParams) dVar6).bottomMargin) + dVar6.j) < (i14 = a.bottom)) {
                                r(height - i14, view4);
                                z6 = true;
                            }
                            if (!z6) {
                                r(0, view4);
                            }
                            if ((absoluteGravity2 & 3) != 3 || (i12 = (a15.left - ((ViewGroup.MarginLayoutParams) dVar6).leftMargin) - dVar6.f19140i) >= (i13 = a.left)) {
                                z7 = false;
                            } else {
                                q(i13 - i12, view4);
                                z7 = true;
                            }
                            if ((absoluteGravity2 & 5) == 5 && (width = ((getWidth() - a15.right) - ((ViewGroup.MarginLayoutParams) dVar6).rightMargin) + dVar6.f19140i) < (i11 = a.right)) {
                                q(width - i11, view4);
                                z7 = true;
                            }
                            if (!z7) {
                                q(0, view4);
                            }
                            a15.setEmpty();
                            pools$SynchronizedPool.release(a15);
                        }
                    }
                }
                if (i5 != 2) {
                    rect = rect4;
                    rect.set(((d) view4.getLayoutParams()).f19145p);
                    if (rect.equals(a10)) {
                        arrayList = arrayList4;
                        i10 = i24;
                    } else {
                        ((d) view4.getLayoutParams()).f19145p.set(a10);
                    }
                } else {
                    rect = rect4;
                }
                int i27 = i6 + 1;
                i10 = i24;
                while (true) {
                    arrayList = arrayList4;
                    if (i27 >= i10) {
                        break;
                    }
                    View view5 = (View) arrayList.get(i27);
                    d dVar7 = (d) view5.getLayoutParams();
                    v0.b bVar3 = dVar7.a;
                    if (bVar3 != null && bVar3.f(view5, view4)) {
                        if (i5 == 0 && dVar7.f19144o) {
                            dVar7.f19144o = false;
                        } else {
                            if (i5 != 2) {
                                z5 = bVar3.h(this, view5, view4);
                            } else {
                                bVar3.i(this, view4);
                                z5 = true;
                            }
                            if (i5 == 1) {
                                dVar7.f19144o = z5;
                            }
                        }
                    }
                    i27++;
                    arrayList4 = arrayList;
                }
            } else {
                arrayList = arrayList3;
                i10 = size;
                rect = a11;
                i6 = i20;
            }
            i20 = i6 + 1;
            a11 = rect;
            size = i10;
            arrayList3 = arrayList;
        }
    }

    public final void k(int i5, View view) {
        Rect a;
        Rect a10;
        d dVar = (d) view.getLayoutParams();
        View view2 = dVar.k;
        if (view2 == null && dVar.f19137f != -1) {
            throw new IllegalStateException("An anchor may not be changed after CoordinatorLayout measurement begins before layout is complete.");
        }
        Pools$SynchronizedPool pools$SynchronizedPool = T;
        if (view2 != null) {
            a = a();
            a10 = a();
            try {
                e(view2, a);
                d dVar2 = (d) view.getLayoutParams();
                int measuredWidth = view.getMeasuredWidth();
                int measuredHeight = view.getMeasuredHeight();
                f(i5, a, a10, dVar2, measuredWidth, measuredHeight);
                b(dVar2, a10, measuredWidth, measuredHeight);
                view.layout(a10.left, a10.top, a10.right, a10.bottom);
                return;
            } finally {
                a.setEmpty();
                pools$SynchronizedPool.release(a);
                a10.setEmpty();
                pools$SynchronizedPool.release(a10);
            }
        }
        int i6 = dVar.f19136e;
        if (i6 < 0) {
            d dVar3 = (d) view.getLayoutParams();
            a = a();
            a.set(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar3).leftMargin, getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar3).topMargin, (getWidth() - getPaddingRight()) - ((ViewGroup.MarginLayoutParams) dVar3).rightMargin, (getHeight() - getPaddingBottom()) - ((ViewGroup.MarginLayoutParams) dVar3).bottomMargin);
            if (this.J != null) {
                WeakHashMap weakHashMap = s0.a;
                if (getFitsSystemWindows() && !view.getFitsSystemWindows()) {
                    a.left = this.J.b() + a.left;
                    a.top = this.J.d() + a.top;
                    a.right -= this.J.c();
                    a.bottom -= this.J.a();
                }
            }
            a10 = a();
            int i10 = dVar3.f19134c;
            if ((i10 & 7) == 0) {
                i10 |= 8388611;
            }
            if ((i10 & 112) == 0) {
                i10 |= 48;
            }
            Gravity.apply(i10, view.getMeasuredWidth(), view.getMeasuredHeight(), a, a10, i5);
            view.layout(a10.left, a10.top, a10.right, a10.bottom);
            return;
        }
        d dVar4 = (d) view.getLayoutParams();
        int i11 = dVar4.f19134c;
        if (i11 == 0) {
            i11 = 8388661;
        }
        int absoluteGravity = Gravity.getAbsoluteGravity(i11, i5);
        int i12 = absoluteGravity & 7;
        int i13 = absoluteGravity & 112;
        int width = getWidth();
        int height = getHeight();
        int measuredWidth2 = view.getMeasuredWidth();
        int measuredHeight2 = view.getMeasuredHeight();
        if (i5 == 1) {
            i6 = width - i6;
        }
        int g6 = g(i6) - measuredWidth2;
        if (i12 == 1) {
            g6 += measuredWidth2 / 2;
        } else if (i12 == 5) {
            g6 += measuredWidth2;
        }
        int i14 = i13 != 16 ? i13 != 80 ? 0 : measuredHeight2 : measuredHeight2 / 2;
        int max = Math.max(getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar4).leftMargin, Math.min(g6, ((width - getPaddingRight()) - measuredWidth2) - ((ViewGroup.MarginLayoutParams) dVar4).rightMargin));
        int max2 = Math.max(getPaddingTop() + ((ViewGroup.MarginLayoutParams) dVar4).topMargin, Math.min(i14, ((height - getPaddingBottom()) - measuredHeight2) - ((ViewGroup.MarginLayoutParams) dVar4).bottomMargin));
        view.layout(max, max2, measuredWidth2 + max, measuredHeight2 + max2);
    }

    public final void l(int i5, int i6, int i10, View view) {
        measureChildWithMargins(view, i5, i6, i10, 0);
    }

    public final boolean m(v0.b bVar, View view, MotionEvent motionEvent, int i5) {
        if (i5 == 0) {
            return bVar.k(this, view, motionEvent);
        }
        if (i5 == 1) {
            return bVar.v(this, view, motionEvent);
        }
        throw new IllegalArgumentException();
    }

    public final boolean n(MotionEvent motionEvent, int i5) {
        int actionMasked = motionEvent.getActionMasked();
        ArrayList arrayList = this.f1423i;
        arrayList.clear();
        boolean isChildrenDrawingOrderEnabled = isChildrenDrawingOrderEnabled();
        int childCount = getChildCount();
        for (int i6 = childCount - 1; i6 >= 0; i6--) {
            arrayList.add(getChildAt(isChildrenDrawingOrderEnabled ? getChildDrawingOrder(childCount, i6) : i6));
        }
        s sVar = S;
        if (sVar != null) {
            Collections.sort(arrayList, sVar);
        }
        int size = arrayList.size();
        MotionEvent motionEvent2 = null;
        boolean z5 = false;
        for (int i10 = 0; i10 < size; i10++) {
            View view = (View) arrayList.get(i10);
            v0.b bVar = ((d) view.getLayoutParams()).a;
            if (z5 && actionMasked != 0) {
                if (bVar != null) {
                    if (motionEvent2 == null) {
                        motionEvent2 = MotionEvent.obtain(motionEvent);
                        motionEvent2.setAction(3);
                    }
                    m(bVar, view, motionEvent2, i5);
                }
            } else if (!z5 && bVar != null && (z5 = m(bVar, view, motionEvent, i5))) {
                this.F = view;
                if (actionMasked != 3 && actionMasked != 1) {
                    for (int i11 = 0; i11 < i10; i11++) {
                        View view2 = (View) arrayList.get(i11);
                        v0.b bVar2 = ((d) view2.getLayoutParams()).a;
                        if (bVar2 != null) {
                            if (motionEvent2 == null) {
                                motionEvent2 = MotionEvent.obtain(motionEvent);
                                motionEvent2.setAction(3);
                            }
                            m(bVar2, view2, motionEvent2, i5);
                        }
                    }
                }
            }
        }
        arrayList.clear();
        if (motionEvent2 != null) {
            motionEvent2.recycle();
        }
        return z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:26:0x00f9, code lost:
    
        if ((android.view.Gravity.getAbsoluteGravity(r8.f19139h, r12) & r13) == r13) goto L72;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void o() {
        ArrayList arrayList = this.f1421d;
        arrayList.clear();
        i iVar = this.f1422e;
        SimpleArrayMap simpleArrayMap = (SimpleArrayMap) iVar.f7953e;
        Pools$SimplePool pools$SimplePool = (Pools$SimplePool) iVar.f7952d;
        SimpleArrayMap simpleArrayMap2 = (SimpleArrayMap) iVar.f7953e;
        int i5 = simpleArrayMap.f1208i;
        for (int i6 = 0; i6 < i5; i6++) {
            ArrayList arrayList2 = (ArrayList) simpleArrayMap.i(i6);
            if (arrayList2 != null) {
                arrayList2.clear();
                pools$SimplePool.release(arrayList2);
            }
        }
        simpleArrayMap.clear();
        int childCount = getChildCount();
        for (int i10 = 0; i10 < childCount; i10++) {
            View childAt = getChildAt(i10);
            d h6 = h(childAt);
            int i11 = h6.f19137f;
            if (i11 == -1) {
                h6.f19141l = null;
                h6.k = null;
            } else {
                View view = h6.k;
                if (view != null && view.getId() == i11) {
                    View view2 = h6.k;
                    for (ViewParent parent = view2.getParent(); parent != this; parent = parent.getParent()) {
                        if (parent == null || parent == childAt) {
                            h6.f19141l = null;
                            h6.k = null;
                        } else {
                            if (parent instanceof View) {
                                view2 = parent;
                            }
                        }
                    }
                    h6.f19141l = view2;
                }
                View findViewById = findViewById(i11);
                h6.k = findViewById;
                if (findViewById == null) {
                    if (!isInEditMode()) {
                        throw new IllegalStateException("Could not find CoordinatorLayout descendant view with id " + getResources().getResourceName(i11) + " to anchor view " + childAt);
                    }
                    h6.f19141l = null;
                    h6.k = null;
                } else if (findViewById != this) {
                    for (ViewParent parent2 = findViewById.getParent(); parent2 != this && parent2 != null; parent2 = parent2.getParent()) {
                        if (parent2 != childAt) {
                            if (parent2 instanceof View) {
                                findViewById = parent2;
                            }
                        } else {
                            if (!isInEditMode()) {
                                throw new IllegalStateException("Anchor must not be a descendant of the anchored view");
                            }
                            h6.f19141l = null;
                            h6.k = null;
                        }
                    }
                    h6.f19141l = findViewById;
                } else {
                    if (!isInEditMode()) {
                        throw new IllegalStateException("View can not be anchored to the the parent CoordinatorLayout");
                    }
                    h6.f19141l = null;
                    h6.k = null;
                }
            }
            if (!simpleArrayMap2.containsKey(childAt)) {
                simpleArrayMap2.put(childAt, null);
            }
            for (int i12 = 0; i12 < childCount; i12++) {
                if (i12 != i10) {
                    View childAt2 = getChildAt(i12);
                    if (childAt2 != h6.f19141l) {
                        WeakHashMap weakHashMap = s0.a;
                        int layoutDirection = getLayoutDirection();
                        int absoluteGravity = Gravity.getAbsoluteGravity(((d) childAt2.getLayoutParams()).f19138g, layoutDirection);
                        if (absoluteGravity != 0) {
                        }
                        v0.b bVar = h6.a;
                        if (bVar == null) {
                            continue;
                        } else if (!bVar.f(childAt, childAt2)) {
                            continue;
                        }
                    }
                    if (!simpleArrayMap2.containsKey(childAt2) && !simpleArrayMap2.containsKey(childAt2)) {
                        simpleArrayMap2.put(childAt2, null);
                    }
                    if (!simpleArrayMap2.containsKey(childAt2) || !simpleArrayMap2.containsKey(childAt)) {
                        throw new IllegalArgumentException("All nodes must be present in the graph before being added as an edge");
                    }
                    ArrayList arrayList3 = (ArrayList) simpleArrayMap2.get(childAt2);
                    if (arrayList3 == null) {
                        arrayList3 = (ArrayList) pools$SimplePool.acquire();
                        if (arrayList3 == null) {
                            arrayList3 = new ArrayList();
                        }
                        simpleArrayMap2.put(childAt2, arrayList3);
                    }
                    arrayList3.add(childAt);
                }
            }
        }
        ArrayList arrayList4 = (ArrayList) iVar.f7954i;
        arrayList4.clear();
        HashSet hashSet = (HashSet) iVar.f7955v;
        hashSet.clear();
        int i13 = simpleArrayMap2.f1208i;
        for (int i14 = 0; i14 < i13; i14++) {
            iVar.n(simpleArrayMap2.f(i14), arrayList4, hashSet);
        }
        arrayList.addAll(arrayList4);
        Collections.reverse(arrayList);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        p();
        if (this.I) {
            if (this.H == null) {
                this.H = new b(1, this);
            }
            getViewTreeObserver().addOnPreDrawListener(this.H);
        }
        if (this.J == null) {
            WeakHashMap weakHashMap = s0.a;
            if (getFitsSystemWindows()) {
                h0.c(this);
            }
        }
        this.f1427y = true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        p();
        if (this.I && this.H != null) {
            getViewTreeObserver().removeOnPreDrawListener(this.H);
        }
        View view = this.G;
        if (view != null) {
            onStopNestedScroll(view, 0);
        }
        this.f1427y = false;
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (!this.K || this.L == null) {
            return;
        }
        WindowInsetsCompat windowInsetsCompat = this.J;
        int d6 = windowInsetsCompat != null ? windowInsetsCompat.d() : 0;
        if (d6 > 0) {
            this.L.setBounds(0, 0, getWidth(), d6);
            this.L.draw(canvas);
        }
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            p();
        }
        boolean n6 = n(motionEvent, 0);
        if (actionMasked != 1 && actionMasked != 3) {
            return n6;
        }
        this.F = null;
        p();
        return n6;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        v0.b bVar;
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = getLayoutDirection();
        ArrayList arrayList = this.f1421d;
        int size = arrayList.size();
        for (int i12 = 0; i12 < size; i12++) {
            View view = (View) arrayList.get(i12);
            if (view.getVisibility() != 8 && ((bVar = ((d) view.getLayoutParams()).a) == null || !bVar.l(this, view, layoutDirection))) {
                k(layoutDirection, view);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:60:0x0169  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x018b  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onMeasure(int i5, int i6) {
        boolean z5;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        v0.b bVar;
        int i16;
        int i17;
        boolean z6;
        int i18;
        int i19;
        ArrayList arrayList;
        int i20;
        int i21;
        View view;
        int i22;
        int max;
        CoordinatorLayout coordinatorLayout = this;
        coordinatorLayout.o();
        int childCount = coordinatorLayout.getChildCount();
        int i23 = 0;
        loop0: while (true) {
            if (i23 >= childCount) {
                z5 = false;
                break;
            }
            View childAt = coordinatorLayout.getChildAt(i23);
            SimpleArrayMap simpleArrayMap = (SimpleArrayMap) coordinatorLayout.f1422e.f7953e;
            int i24 = simpleArrayMap.f1208i;
            for (int i25 = 0; i25 < i24; i25++) {
                ArrayList arrayList2 = (ArrayList) simpleArrayMap.i(i25);
                if (arrayList2 != null && arrayList2.contains(childAt)) {
                    z5 = true;
                    break loop0;
                }
            }
            i23++;
        }
        if (z5 != coordinatorLayout.I) {
            if (z5) {
                if (coordinatorLayout.f1427y) {
                    if (coordinatorLayout.H == null) {
                        coordinatorLayout.H = new b(1, coordinatorLayout);
                    }
                    coordinatorLayout.getViewTreeObserver().addOnPreDrawListener(coordinatorLayout.H);
                }
                coordinatorLayout.I = true;
            } else {
                if (coordinatorLayout.f1427y && coordinatorLayout.H != null) {
                    coordinatorLayout.getViewTreeObserver().removeOnPreDrawListener(coordinatorLayout.H);
                }
                coordinatorLayout.I = false;
            }
        }
        int paddingLeft = coordinatorLayout.getPaddingLeft();
        int paddingTop = coordinatorLayout.getPaddingTop();
        int paddingRight = coordinatorLayout.getPaddingRight();
        int paddingBottom = coordinatorLayout.getPaddingBottom();
        WeakHashMap weakHashMap = s0.a;
        int layoutDirection = coordinatorLayout.getLayoutDirection();
        boolean z7 = layoutDirection == 1;
        int mode = View.MeasureSpec.getMode(i5);
        int size = View.MeasureSpec.getSize(i5);
        int mode2 = View.MeasureSpec.getMode(i6);
        int size2 = View.MeasureSpec.getSize(i6);
        int i26 = paddingLeft + paddingRight;
        int i27 = paddingTop + paddingBottom;
        int suggestedMinimumWidth = coordinatorLayout.getSuggestedMinimumWidth();
        int suggestedMinimumHeight = coordinatorLayout.getSuggestedMinimumHeight();
        boolean z8 = coordinatorLayout.J != null && coordinatorLayout.getFitsSystemWindows();
        ArrayList arrayList3 = coordinatorLayout.f1421d;
        int size3 = arrayList3.size();
        int i28 = 0;
        int i29 = 0;
        while (i28 < size3) {
            View view2 = (View) arrayList3.get(i28);
            int i30 = suggestedMinimumWidth;
            if (view2.getVisibility() == 8) {
                arrayList = arrayList3;
                i13 = size3;
                i22 = i28;
                i16 = paddingLeft;
                suggestedMinimumWidth = i30;
                z6 = false;
                i18 = paddingRight;
            } else {
                d dVar = (d) view2.getLayoutParams();
                int i31 = dVar.f19136e;
                if (i31 < 0 || mode == 0) {
                    i10 = suggestedMinimumHeight;
                } else {
                    int g6 = coordinatorLayout.g(i31);
                    int i32 = dVar.f19134c;
                    if (i32 == 0) {
                        i32 = 8388661;
                    }
                    int absoluteGravity = Gravity.getAbsoluteGravity(i32, layoutDirection) & 7;
                    i10 = suggestedMinimumHeight;
                    if ((absoluteGravity == 3 && !z7) || (absoluteGravity == 5 && z7)) {
                        max = Math.max(0, (size - paddingRight) - g6);
                    } else if ((absoluteGravity == 5 && !z7) || (absoluteGravity == 3 && z7)) {
                        max = Math.max(0, g6 - paddingLeft);
                    }
                    int i33 = size3;
                    i12 = max;
                    i11 = i33;
                    if (z8 || view2.getFitsSystemWindows()) {
                        i13 = i11;
                        i14 = i5;
                        i15 = i6;
                    } else {
                        i13 = i11;
                        int c6 = coordinatorLayout.J.c() + coordinatorLayout.J.b();
                        int a = coordinatorLayout.J.a() + coordinatorLayout.J.d();
                        i14 = View.MeasureSpec.makeMeasureSpec(size - c6, mode);
                        i15 = View.MeasureSpec.makeMeasureSpec(size2 - a, mode2);
                    }
                    bVar = dVar.a;
                    if (bVar == null) {
                        z6 = false;
                        i16 = paddingLeft;
                        i17 = i30;
                        i18 = paddingRight;
                        i19 = i10;
                        arrayList = arrayList3;
                        int i34 = i14;
                        i22 = i28;
                        int i35 = i15;
                        boolean m5 = bVar.m(this, view2, i34, i12, i35);
                        view = view2;
                        i14 = i34;
                        i20 = i12;
                        i21 = i35;
                        if (m5) {
                            coordinatorLayout = this;
                            int max2 = Math.max(i17, view.getMeasuredWidth() + i26 + ((ViewGroup.MarginLayoutParams) dVar).leftMargin + ((ViewGroup.MarginLayoutParams) dVar).rightMargin);
                            int max3 = Math.max(i19, view.getMeasuredHeight() + i27 + ((ViewGroup.MarginLayoutParams) dVar).topMargin + ((ViewGroup.MarginLayoutParams) dVar).bottomMargin);
                            i29 = View.combineMeasuredStates(i29, view.getMeasuredState());
                            suggestedMinimumWidth = max2;
                            suggestedMinimumHeight = max3;
                        }
                    } else {
                        i16 = paddingLeft;
                        i17 = i30;
                        z6 = false;
                        i18 = paddingRight;
                        i19 = i10;
                        arrayList = arrayList3;
                        i20 = i12;
                        i21 = i15;
                        view = view2;
                        i22 = i28;
                    }
                    coordinatorLayout = this;
                    coordinatorLayout.measureChildWithMargins(view, i14, i20, i21, 0);
                    int max22 = Math.max(i17, view.getMeasuredWidth() + i26 + ((ViewGroup.MarginLayoutParams) dVar).leftMargin + ((ViewGroup.MarginLayoutParams) dVar).rightMargin);
                    int max32 = Math.max(i19, view.getMeasuredHeight() + i27 + ((ViewGroup.MarginLayoutParams) dVar).topMargin + ((ViewGroup.MarginLayoutParams) dVar).bottomMargin);
                    i29 = View.combineMeasuredStates(i29, view.getMeasuredState());
                    suggestedMinimumWidth = max22;
                    suggestedMinimumHeight = max32;
                }
                i11 = size3;
                i12 = 0;
                if (z8) {
                }
                i13 = i11;
                i14 = i5;
                i15 = i6;
                bVar = dVar.a;
                if (bVar == null) {
                }
                coordinatorLayout = this;
                coordinatorLayout.measureChildWithMargins(view, i14, i20, i21, 0);
                int max222 = Math.max(i17, view.getMeasuredWidth() + i26 + ((ViewGroup.MarginLayoutParams) dVar).leftMargin + ((ViewGroup.MarginLayoutParams) dVar).rightMargin);
                int max322 = Math.max(i19, view.getMeasuredHeight() + i27 + ((ViewGroup.MarginLayoutParams) dVar).topMargin + ((ViewGroup.MarginLayoutParams) dVar).bottomMargin);
                i29 = View.combineMeasuredStates(i29, view.getMeasuredState());
                suggestedMinimumWidth = max222;
                suggestedMinimumHeight = max322;
            }
            i28 = i22 + 1;
            paddingLeft = i16;
            paddingRight = i18;
            size3 = i13;
            arrayList3 = arrayList;
        }
        int i36 = i29;
        coordinatorLayout.setMeasuredDimension(View.resolveSizeAndState(suggestedMinimumWidth, i5, (-16777216) & i36), View.resolveSizeAndState(suggestedMinimumHeight, i6, i36 << 16));
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onNestedFling(View view, float f2, float f10, boolean z5) {
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(0)) {
                    v0.b bVar = dVar.a;
                }
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onNestedPreFling(View view, float f2, float f10) {
        v0.b bVar;
        int childCount = getChildCount();
        boolean z5 = false;
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(0) && (bVar = dVar.a) != null) {
                    z5 |= bVar.n(view);
                }
            }
        }
        return z5;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedPreScroll(View view, int i5, int i6, int[] iArr) {
        onNestedPreScroll(view, i5, i6, iArr, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11) {
        onNestedScroll(view, i5, i6, i10, i11, 0);
    }

    @Override // androidx.core.view.p
    public final void onNestedScrollAccepted(View view, View view2, int i5, int i6) {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.O;
        if (i6 == 1) {
            nestedScrollingParentHelper.f1546b = i5;
        } else {
            nestedScrollingParentHelper.a = i5;
        }
        this.G = view2;
        int childCount = getChildCount();
        for (int i10 = 0; i10 < childCount; i10++) {
            ((d) getChildAt(i10).getLayoutParams()).getClass();
        }
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        Parcelable parcelable2;
        if (!(parcelable instanceof e)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        e eVar = (e) parcelable;
        super.onRestoreInstanceState(eVar.f7399d);
        SparseArray sparseArray = eVar.f19146i;
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            int id2 = childAt.getId();
            v0.b bVar = h(childAt).a;
            if (id2 != -1 && bVar != null && (parcelable2 = (Parcelable) sparseArray.get(id2)) != null) {
                bVar.r(childAt, parcelable2);
            }
        }
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        Parcelable s2;
        e eVar = new e(super.onSaveInstanceState());
        SparseArray sparseArray = new SparseArray();
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            int id2 = childAt.getId();
            v0.b bVar = ((d) childAt.getLayoutParams()).a;
            if (id2 != -1 && bVar != null && (s2 = bVar.s(childAt)) != null) {
                sparseArray.append(id2, s2);
            }
        }
        eVar.f19146i = sparseArray;
        return eVar;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onStartNestedScroll(View view, View view2, int i5) {
        return onStartNestedScroll(view, view2, i5, 0);
    }

    @Override // androidx.core.view.p
    public final void onStopNestedScroll(View view, int i5) {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.O;
        if (i5 == 1) {
            nestedScrollingParentHelper.f1546b = 0;
        } else {
            nestedScrollingParentHelper.a = 0;
        }
        int childCount = getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = getChildAt(i6);
            d dVar = (d) childAt.getLayoutParams();
            if (dVar.a(i5)) {
                v0.b bVar = dVar.a;
                if (bVar != null) {
                    bVar.u(this, childAt, view, i5);
                }
                if (i5 == 0) {
                    dVar.f19142m = false;
                } else if (i5 == 1) {
                    dVar.f19143n = false;
                }
                dVar.f19144o = false;
            }
        }
        this.G = null;
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        boolean n6;
        int actionMasked = motionEvent.getActionMasked();
        View view = this.F;
        boolean z5 = false;
        if (view != null) {
            v0.b bVar = ((d) view.getLayoutParams()).a;
            n6 = bVar != null ? bVar.v(this, this.F, motionEvent) : false;
        } else {
            n6 = n(motionEvent, 1);
            if (actionMasked != 0 && n6) {
                z5 = true;
            }
        }
        if (this.F == null || actionMasked == 3) {
            n6 |= super.onTouchEvent(motionEvent);
        } else if (z5) {
            MotionEvent obtain = MotionEvent.obtain(motionEvent);
            obtain.setAction(3);
            super.onTouchEvent(obtain);
            obtain.recycle();
        }
        if (actionMasked != 1 && actionMasked != 3) {
            return n6;
        }
        this.F = null;
        p();
        return n6;
    }

    public final void p() {
        View view = this.F;
        if (view != null) {
            v0.b bVar = ((d) view.getLayoutParams()).a;
            if (bVar != null) {
                long uptimeMillis = SystemClock.uptimeMillis();
                MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                bVar.v(this, this.F, obtain);
                obtain.recycle();
            }
            this.F = null;
        }
        int childCount = getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            ((d) getChildAt(i5).getLayoutParams()).getClass();
        }
        this.f1426x = false;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean requestChildRectangleOnScreen(View view, Rect rect, boolean z5) {
        v0.b bVar = ((d) view.getLayoutParams()).a;
        if (bVar == null || !bVar.q(this, view, rect, z5)) {
            return super.requestChildRectangleOnScreen(view, rect, z5);
        }
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void requestDisallowInterceptTouchEvent(boolean z5) {
        super.requestDisallowInterceptTouchEvent(z5);
        if (!z5 || this.f1426x) {
            return;
        }
        if (this.F == null) {
            int childCount = getChildCount();
            MotionEvent motionEvent = null;
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = getChildAt(i5);
                v0.b bVar = ((d) childAt.getLayoutParams()).a;
                if (bVar != null) {
                    if (motionEvent == null) {
                        long uptimeMillis = SystemClock.uptimeMillis();
                        motionEvent = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                    }
                    bVar.k(this, childAt, motionEvent);
                }
            }
            if (motionEvent != null) {
                motionEvent.recycle();
            }
        }
        p();
        this.f1426x = true;
    }

    public final void s() {
        WeakHashMap weakHashMap = s0.a;
        if (!getFitsSystemWindows()) {
            j0.m(this, null);
            return;
        }
        if (this.N == null) {
            this.N = new m(5, this);
        }
        j0.m(this, this.N);
        setSystemUiVisibility(1280);
    }

    @Override // android.view.View
    public void setFitsSystemWindows(boolean z5) {
        super.setFitsSystemWindows(z5);
        s();
    }

    @Override // android.view.ViewGroup
    public void setOnHierarchyChangeListener(ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener) {
        this.M = onHierarchyChangeListener;
    }

    public void setStatusBarBackground(Drawable drawable) {
        Drawable drawable2 = this.L;
        if (drawable2 != drawable) {
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            Drawable mutate = drawable != null ? drawable.mutate() : null;
            this.L = mutate;
            if (mutate != null) {
                if (mutate.isStateful()) {
                    this.L.setState(getDrawableState());
                }
                Drawable drawable3 = this.L;
                WeakHashMap weakHashMap = s0.a;
                drawable3.setLayoutDirection(getLayoutDirection());
                this.L.setVisible(getVisibility() == 0, false);
                this.L.setCallback(this);
            }
            WeakHashMap weakHashMap2 = s0.a;
            postInvalidateOnAnimation();
        }
    }

    public void setStatusBarBackgroundColor(int i5) {
        setStatusBarBackground(new ColorDrawable(i5));
    }

    public void setStatusBarBackgroundResource(int i5) {
        setStatusBarBackground(i5 != 0 ? getContext().getDrawable(i5) : null);
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        super.setVisibility(i5);
        boolean z5 = i5 == 0;
        Drawable drawable = this.L;
        if (drawable == null || drawable.isVisible() == z5) {
            return;
        }
        this.L.setVisible(z5, false);
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.L;
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof d ? new d((d) layoutParams) : layoutParams instanceof ViewGroup.MarginLayoutParams ? new d((ViewGroup.MarginLayoutParams) layoutParams) : new d(layoutParams);
    }

    @Override // androidx.core.view.p
    public final void onNestedPreScroll(View view, int i5, int i6, int[] iArr, int i10) {
        v0.b bVar;
        int childCount = getChildCount();
        boolean z5 = false;
        int i11 = 0;
        int i12 = 0;
        for (int i13 = 0; i13 < childCount; i13++) {
            View childAt = getChildAt(i13);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(i10) && (bVar = dVar.a) != null) {
                    int[] iArr2 = this.f1424v;
                    iArr2[0] = 0;
                    iArr2[1] = 0;
                    bVar.o(this, childAt, view, i5, i6, iArr2, i10);
                    i11 = i5 > 0 ? Math.max(i11, iArr2[0]) : Math.min(i11, iArr2[0]);
                    i12 = i6 > 0 ? Math.max(i12, iArr2[1]) : Math.min(i12, iArr2[1]);
                    z5 = true;
                }
            }
        }
        iArr[0] = i11;
        iArr[1] = i12;
        if (z5) {
            j(1);
        }
    }

    @Override // androidx.core.view.p
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12) {
        onNestedScroll(view, i5, i6, i10, i11, 0, this.f1425w);
    }

    @Override // androidx.core.view.p
    public final boolean onStartNestedScroll(View view, View view2, int i5, int i6) {
        View view3;
        int i10;
        int i11;
        int childCount = getChildCount();
        int i12 = 0;
        boolean z5 = false;
        while (i12 < childCount) {
            View childAt = getChildAt(i12);
            if (childAt.getVisibility() == 8) {
                view3 = view;
                i10 = i5;
                i11 = i6;
            } else {
                d dVar = (d) childAt.getLayoutParams();
                v0.b bVar = dVar.a;
                if (bVar != null) {
                    view3 = view;
                    i10 = i5;
                    i11 = i6;
                    boolean t5 = bVar.t(this, childAt, view3, i10, i11);
                    z5 |= t5;
                    if (i11 == 0) {
                        dVar.f19142m = t5;
                    } else if (i11 == 1) {
                        dVar.f19143n = t5;
                    }
                } else {
                    view3 = view;
                    i10 = i5;
                    i11 = i6;
                    if (i11 == 0) {
                        dVar.f19142m = false;
                    } else if (i11 == 1) {
                        dVar.f19143n = false;
                    }
                }
            }
            i12++;
            view = view3;
            i5 = i10;
            i6 = i11;
        }
        return z5;
    }

    @Override // androidx.core.view.q
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12, int[] iArr) {
        v0.b bVar;
        int childCount = getChildCount();
        int i13 = 0;
        int i14 = 0;
        boolean z5 = false;
        for (int i15 = 0; i15 < childCount; i15++) {
            View childAt = getChildAt(i15);
            if (childAt.getVisibility() != 8) {
                d dVar = (d) childAt.getLayoutParams();
                if (dVar.a(i12) && (bVar = dVar.a) != null) {
                    int[] iArr2 = this.f1424v;
                    iArr2[0] = 0;
                    iArr2[1] = 0;
                    bVar.p(this, childAt, i6, i10, i11, iArr2);
                    if (i10 > 0) {
                        i13 = Math.max(i13, iArr2[0]);
                    } else {
                        i13 = Math.min(i13, iArr2[0]);
                    }
                    if (i11 > 0) {
                        i14 = Math.max(i14, iArr2[1]);
                    } else {
                        i14 = Math.min(i14, iArr2[1]);
                    }
                    z5 = true;
                }
            }
        }
        iArr[0] = iArr[0] + i13;
        iArr[1] = iArr[1] + i14;
        if (z5) {
            j(1);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedScrollAccepted(View view, View view2, int i5) {
        onNestedScrollAccepted(view, view2, i5, 0);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onStopNestedScroll(View view) {
        onStopNestedScroll(view, 0);
    }
}
