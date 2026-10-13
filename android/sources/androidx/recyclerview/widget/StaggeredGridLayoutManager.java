package androidx.recyclerview.widget;

import android.content.Context;
import android.graphics.PointF;
import android.graphics.Rect;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.BitSet;

/* loaded from: classes.dex */
public class StaggeredGridLayoutManager extends RecyclerView.LayoutManager implements i1 {
    public boolean E;
    public final BitSet G;
    public final d J;
    public final int K;
    public boolean L;
    public boolean M;
    public s1 N;
    public final Rect O;
    public final o1 P;
    public final boolean Q;
    public int[] R;
    public final v0 S;

    /* renamed from: d, reason: collision with root package name */
    public final int f2346d;

    /* renamed from: e, reason: collision with root package name */
    public final t1[] f2347e;

    /* renamed from: i, reason: collision with root package name */
    public final OrientationHelper f2348i;

    /* renamed from: v, reason: collision with root package name */
    public final OrientationHelper f2349v;

    /* renamed from: w, reason: collision with root package name */
    public final int f2350w;

    /* renamed from: x, reason: collision with root package name */
    public int f2351x;

    /* renamed from: y, reason: collision with root package name */
    public final k0 f2352y;
    public boolean F = false;
    public int H = -1;
    public int I = Integer.MIN_VALUE;

    public StaggeredGridLayoutManager(Context context, AttributeSet attributeSet, int i5, int i6) {
        this.f2346d = -1;
        this.E = false;
        d dVar = new d();
        this.J = dVar;
        this.K = 2;
        this.O = new Rect();
        this.P = new o1(this);
        this.Q = true;
        this.S = new v0(2, this);
        RecyclerView.LayoutManager.Properties properties = RecyclerView.LayoutManager.getProperties(context, attributeSet, i5, i6);
        int i10 = properties.a;
        if (i10 != 0 && i10 != 1) {
            throw new IllegalArgumentException("invalid orientation.");
        }
        assertNotInLayoutOrScroll(null);
        if (i10 != this.f2350w) {
            this.f2350w = i10;
            OrientationHelper orientationHelper = this.f2348i;
            this.f2348i = this.f2349v;
            this.f2349v = orientationHelper;
            requestLayout();
        }
        int i11 = properties.f2305b;
        assertNotInLayoutOrScroll(null);
        if (i11 != this.f2346d) {
            dVar.a();
            requestLayout();
            this.f2346d = i11;
            this.G = new BitSet(this.f2346d);
            this.f2347e = new t1[this.f2346d];
            for (int i12 = 0; i12 < this.f2346d; i12++) {
                this.f2347e[i12] = new t1(this, i12);
            }
            requestLayout();
        }
        boolean z5 = properties.f2306c;
        assertNotInLayoutOrScroll(null);
        s1 s1Var = this.N;
        if (s1Var != null && s1Var.E != z5) {
            s1Var.E = z5;
        }
        this.E = z5;
        requestLayout();
        k0 k0Var = new k0();
        k0Var.a = true;
        k0Var.f2415f = 0;
        k0Var.f2416g = 0;
        this.f2352y = k0Var;
        this.f2348i = OrientationHelper.a(this, this.f2350w);
        this.f2349v = OrientationHelper.a(this, 1 - this.f2350w);
    }

    public static int B(int i5, int i6, int i10) {
        int mode;
        return (!(i6 == 0 && i10 == 0) && ((mode = View.MeasureSpec.getMode(i5)) == Integer.MIN_VALUE || mode == 1073741824)) ? View.MeasureSpec.makeMeasureSpec(Math.max(0, (View.MeasureSpec.getSize(i5) - i6) - i10), mode) : i5;
    }

    public final void A(t1 t1Var, int i5, int i6) {
        int i10 = t1Var.f2465d;
        int i11 = t1Var.f2466e;
        if (i5 != -1) {
            int i12 = t1Var.f2464c;
            if (i12 == Integer.MIN_VALUE) {
                t1Var.a();
                i12 = t1Var.f2464c;
            }
            if (i12 - i10 >= i6) {
                this.G.set(i11, false);
                return;
            }
            return;
        }
        int i13 = t1Var.f2463b;
        if (i13 == Integer.MIN_VALUE) {
            View view = (View) t1Var.a.get(0);
            p1 p1Var = (p1) view.getLayoutParams();
            t1Var.f2463b = t1Var.f2467f.f2348i.e(view);
            p1Var.getClass();
            i13 = t1Var.f2463b;
        }
        if (i13 + i10 <= i6) {
            this.G.set(i11, false);
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void assertNotInLayoutOrScroll(String str) {
        if (this.N == null) {
            super.assertNotInLayoutOrScroll(str);
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollHorizontally() {
        return this.f2350w == 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollVertically() {
        return this.f2350w == 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean checkLayoutParams(RecyclerView.LayoutParams layoutParams) {
        return layoutParams instanceof p1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void collectAdjacentPrefetchPositions(int i5, int i6, RecyclerView.State state, RecyclerView.LayoutManager.LayoutPrefetchRegistry layoutPrefetchRegistry) {
        k0 k0Var;
        int f2;
        int i10;
        if (this.f2350w != 0) {
            i5 = i6;
        }
        if (getChildCount() == 0 || i5 == 0) {
            return;
        }
        t(i5, state);
        int[] iArr = this.R;
        if (iArr == null || iArr.length < this.f2346d) {
            this.R = new int[this.f2346d];
        }
        int i11 = 0;
        int i12 = 0;
        while (true) {
            int i13 = this.f2346d;
            k0Var = this.f2352y;
            if (i11 >= i13) {
                break;
            }
            if (k0Var.f2413d == -1) {
                f2 = k0Var.f2415f;
                i10 = this.f2347e[i11].h(f2);
            } else {
                f2 = this.f2347e[i11].f(k0Var.f2416g);
                i10 = k0Var.f2416g;
            }
            int i14 = f2 - i10;
            if (i14 >= 0) {
                this.R[i12] = i14;
                i12++;
            }
            i11++;
        }
        Arrays.sort(this.R, 0, i12);
        for (int i15 = 0; i15 < i12; i15++) {
            int i16 = k0Var.f2412c;
            if (i16 < 0 || i16 >= state.b()) {
                return;
            }
            layoutPrefetchRegistry.a(k0Var.f2412c, this.R[i15]);
            k0Var.f2412c += k0Var.f2413d;
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollExtent(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        boolean z5 = !this.Q;
        return k1.a(state, this.f2348i, h(z5), g(z5), this, this.Q);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollRange(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        boolean z5 = !this.Q;
        return k1.c(state, this.f2348i, h(z5), g(z5), this, this.Q);
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x0019, code lost:
    
        if ((r4 < k()) != r3.F) goto L13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x000a, code lost:
    
        if (r3.F != false) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:5:0x000c, code lost:
    
        r1 = 1;
     */
    @Override // androidx.recyclerview.widget.i1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final PointF computeScrollVectorForPosition(int i5) {
        int i6 = -1;
        if (getChildCount() == 0) {
        }
        PointF pointF = new PointF();
        if (i6 == 0) {
            return null;
        }
        if (this.f2350w == 0) {
            pointF.x = i6;
            pointF.y = 0.0f;
            return pointF;
        }
        pointF.x = 0.0f;
        pointF.y = i6;
        return pointF;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollExtent(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        boolean z5 = !this.Q;
        return k1.a(state, this.f2348i, h(z5), g(z5), this, this.Q);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollOffset(RecyclerView.State state) {
        return e(state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollRange(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        boolean z5 = !this.Q;
        return k1.c(state, this.f2348i, h(z5), g(z5), this, this.Q);
    }

    public final boolean d() {
        int k;
        if (getChildCount() != 0 && this.K != 0 && isAttachedToWindow()) {
            if (this.F) {
                k = l();
                k();
            } else {
                k = k();
                l();
            }
            if (k == 0 && p() != null) {
                this.J.a();
                requestSimpleAnimationsInNextLayout();
                requestLayout();
                return true;
            }
        }
        return false;
    }

    public final int e(RecyclerView.State state) {
        if (getChildCount() == 0) {
            return 0;
        }
        boolean z5 = !this.Q;
        return k1.b(state, this.f2348i, h(z5), g(z5), this, this.Q, this.F);
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x0282, code lost:
    
        r0.u(r21, r10);
     */
    /* JADX WARN: Type inference failed for: r3v20 */
    /* JADX WARN: Type inference failed for: r3v6 */
    /* JADX WARN: Type inference failed for: r3v7, types: [boolean, int] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int f(RecyclerView.Recycler recycler, k0 k0Var, RecyclerView.State state) {
        t1 t1Var;
        ?? r32;
        int h6;
        int c6;
        int k;
        int c8;
        int i5;
        int i6;
        StaggeredGridLayoutManager staggeredGridLayoutManager = this;
        int i10 = 0;
        int i11 = 1;
        staggeredGridLayoutManager.G.set(0, staggeredGridLayoutManager.f2346d, true);
        k0 k0Var2 = staggeredGridLayoutManager.f2352y;
        int i12 = k0Var2.f2418i ? k0Var.f2414e == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE : k0Var.f2414e == 1 ? k0Var.f2416g + k0Var.f2411b : k0Var.f2415f - k0Var.f2411b;
        int i13 = k0Var.f2414e;
        for (int i14 = 0; i14 < staggeredGridLayoutManager.f2346d; i14++) {
            if (!staggeredGridLayoutManager.f2347e[i14].a.isEmpty()) {
                staggeredGridLayoutManager.A(staggeredGridLayoutManager.f2347e[i14], i13, i12);
            }
        }
        int g6 = staggeredGridLayoutManager.F ? staggeredGridLayoutManager.f2348i.g() : staggeredGridLayoutManager.f2348i.k();
        boolean z5 = false;
        while (true) {
            int i15 = k0Var.f2412c;
            int i16 = -1;
            if (i15 < 0 || i15 >= state.b() || (!k0Var2.f2418i && staggeredGridLayoutManager.G.isEmpty())) {
                break;
            }
            View e9 = recycler.e(k0Var.f2412c);
            k0Var.f2412c += k0Var.f2413d;
            p1 p1Var = (p1) e9.getLayoutParams();
            int layoutPosition = p1Var.f2308d.getLayoutPosition();
            d dVar = staggeredGridLayoutManager.J;
            int[] iArr = (int[]) dVar.a;
            int i17 = (iArr == null || layoutPosition >= iArr.length) ? -1 : iArr[layoutPosition];
            if (i17 == -1) {
                if (staggeredGridLayoutManager.s(k0Var.f2414e)) {
                    i5 = staggeredGridLayoutManager.f2346d - i11;
                    i6 = -1;
                } else {
                    i16 = staggeredGridLayoutManager.f2346d;
                    i5 = i10;
                    i6 = i11;
                }
                t1 t1Var2 = null;
                if (k0Var.f2414e == i11) {
                    int k5 = staggeredGridLayoutManager.f2348i.k();
                    int i18 = Integer.MAX_VALUE;
                    while (i5 != i16) {
                        t1 t1Var3 = staggeredGridLayoutManager.f2347e[i5];
                        int i19 = i6;
                        int f2 = t1Var3.f(k5);
                        if (f2 < i18) {
                            t1Var2 = t1Var3;
                            i18 = f2;
                        }
                        i5 += i19;
                        i6 = i19;
                    }
                } else {
                    int i20 = i6;
                    int g10 = staggeredGridLayoutManager.f2348i.g();
                    int i21 = Integer.MIN_VALUE;
                    while (i5 != i16) {
                        t1 t1Var4 = staggeredGridLayoutManager.f2347e[i5];
                        int h7 = t1Var4.h(g10);
                        if (h7 > i21) {
                            t1Var2 = t1Var4;
                            i21 = h7;
                        }
                        i5 += i20;
                    }
                }
                t1Var = t1Var2;
                dVar.b(layoutPosition);
                ((int[]) dVar.a)[layoutPosition] = t1Var.f2466e;
            } else {
                t1Var = staggeredGridLayoutManager.f2347e[i17];
            }
            t1 t1Var5 = t1Var;
            p1Var.f2444w = t1Var5;
            if (k0Var.f2414e == 1) {
                staggeredGridLayoutManager.addView(e9);
                r32 = 0;
            } else {
                r32 = 0;
                staggeredGridLayoutManager.addView(e9, 0);
            }
            if (staggeredGridLayoutManager.f2350w == 1) {
                staggeredGridLayoutManager.q(e9, RecyclerView.LayoutManager.getChildMeasureSpec(staggeredGridLayoutManager.f2351x, staggeredGridLayoutManager.getWidthMode(), r32, ((ViewGroup.MarginLayoutParams) p1Var).width, r32), RecyclerView.LayoutManager.getChildMeasureSpec(staggeredGridLayoutManager.getHeight(), staggeredGridLayoutManager.getHeightMode(), staggeredGridLayoutManager.getPaddingBottom() + staggeredGridLayoutManager.getPaddingTop(), ((ViewGroup.MarginLayoutParams) p1Var).height, true));
            } else {
                staggeredGridLayoutManager.q(e9, RecyclerView.LayoutManager.getChildMeasureSpec(staggeredGridLayoutManager.getWidth(), staggeredGridLayoutManager.getWidthMode(), staggeredGridLayoutManager.getPaddingRight() + staggeredGridLayoutManager.getPaddingLeft(), ((ViewGroup.MarginLayoutParams) p1Var).width, true), RecyclerView.LayoutManager.getChildMeasureSpec(staggeredGridLayoutManager.f2351x, staggeredGridLayoutManager.getHeightMode(), 0, ((ViewGroup.MarginLayoutParams) p1Var).height, false));
            }
            if (k0Var.f2414e == 1) {
                c6 = t1Var5.f(g6);
                h6 = staggeredGridLayoutManager.f2348i.c(e9) + c6;
            } else {
                h6 = t1Var5.h(g6);
                c6 = h6 - staggeredGridLayoutManager.f2348i.c(e9);
            }
            if (k0Var.f2414e == 1) {
                t1 t1Var6 = p1Var.f2444w;
                t1Var6.getClass();
                p1 p1Var2 = (p1) e9.getLayoutParams();
                p1Var2.f2444w = t1Var6;
                ArrayList arrayList = t1Var6.a;
                arrayList.add(e9);
                t1Var6.f2464c = Integer.MIN_VALUE;
                if (arrayList.size() == 1) {
                    t1Var6.f2463b = Integer.MIN_VALUE;
                }
                if (p1Var2.f2308d.isRemoved() || p1Var2.f2308d.isUpdated()) {
                    t1Var6.f2465d = t1Var6.f2467f.f2348i.c(e9) + t1Var6.f2465d;
                }
            } else {
                t1 t1Var7 = p1Var.f2444w;
                t1Var7.getClass();
                p1 p1Var3 = (p1) e9.getLayoutParams();
                p1Var3.f2444w = t1Var7;
                ArrayList arrayList2 = t1Var7.a;
                arrayList2.add(0, e9);
                t1Var7.f2463b = Integer.MIN_VALUE;
                if (arrayList2.size() == 1) {
                    t1Var7.f2464c = Integer.MIN_VALUE;
                }
                if (p1Var3.f2308d.isRemoved() || p1Var3.f2308d.isUpdated()) {
                    t1Var7.f2465d = t1Var7.f2467f.f2348i.c(e9) + t1Var7.f2465d;
                }
            }
            if (staggeredGridLayoutManager.isLayoutRTL() && staggeredGridLayoutManager.f2350w == 1) {
                c8 = staggeredGridLayoutManager.f2349v.g() - (((staggeredGridLayoutManager.f2346d - 1) - t1Var5.f2466e) * staggeredGridLayoutManager.f2351x);
                k = c8 - staggeredGridLayoutManager.f2349v.c(e9);
            } else {
                k = staggeredGridLayoutManager.f2349v.k() + (t1Var5.f2466e * staggeredGridLayoutManager.f2351x);
                c8 = staggeredGridLayoutManager.f2349v.c(e9) + k;
            }
            int i22 = k;
            int i23 = c8;
            if (staggeredGridLayoutManager.f2350w == 1) {
                staggeredGridLayoutManager.layoutDecoratedWithMargins(e9, i22, c6, i23, h6);
                staggeredGridLayoutManager = this;
            } else {
                staggeredGridLayoutManager.layoutDecoratedWithMargins(e9, c6, i22, h6, i23);
            }
            staggeredGridLayoutManager.A(t1Var5, k0Var2.f2414e, i12);
            staggeredGridLayoutManager.u(recycler, k0Var2);
            if (k0Var2.f2417h && e9.hasFocusable()) {
                staggeredGridLayoutManager.G.set(t1Var5.f2466e, false);
            }
            z5 = true;
            i11 = 1;
            i10 = 0;
        }
        int k7 = k0Var2.f2414e == -1 ? staggeredGridLayoutManager.f2348i.k() - staggeredGridLayoutManager.n(staggeredGridLayoutManager.f2348i.k()) : staggeredGridLayoutManager.m(staggeredGridLayoutManager.f2348i.g()) - staggeredGridLayoutManager.f2348i.g();
        if (k7 > 0) {
            return Math.min(k0Var.f2411b, k7);
        }
        return 0;
    }

    public final View g(boolean z5) {
        int k = this.f2348i.k();
        int g6 = this.f2348i.g();
        View view = null;
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = getChildAt(childCount);
            int e9 = this.f2348i.e(childAt);
            int b10 = this.f2348i.b(childAt);
            if (b10 > k && e9 < g6) {
                if (b10 <= g6 || !z5) {
                    return childAt;
                }
                if (view == null) {
                    view = childAt;
                }
            }
        }
        return view;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return this.f2350w == 0 ? new p1(-2, -1) : new p1(-1, -2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateLayoutParams(Context context, AttributeSet attributeSet) {
        return new p1(context, attributeSet);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int getColumnCountForAccessibility(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.f2350w == 1) {
            return Math.min(this.f2346d, state.b());
        }
        return -1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int getRowCountForAccessibility(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (this.f2350w == 0) {
            return Math.min(this.f2346d, state.b());
        }
        return -1;
    }

    public final View h(boolean z5) {
        int k = this.f2348i.k();
        int g6 = this.f2348i.g();
        int childCount = getChildCount();
        View view = null;
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = getChildAt(i5);
            int e9 = this.f2348i.e(childAt);
            if (this.f2348i.b(childAt) > k && e9 < g6) {
                if (e9 >= k || !z5) {
                    return childAt;
                }
                if (view == null) {
                    view = childAt;
                }
            }
        }
        return view;
    }

    public final void i(RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int g6;
        int m5 = m(Integer.MIN_VALUE);
        if (m5 != Integer.MIN_VALUE && (g6 = this.f2348i.g() - m5) > 0) {
            int i5 = g6 - (-scrollBy(-g6, recycler, state));
            if (!z5 || i5 <= 0) {
                return;
            }
            this.f2348i.p(i5);
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean isAutoMeasureEnabled() {
        return this.K != 0;
    }

    public final boolean isLayoutRTL() {
        return getLayoutDirection() == 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean isLayoutReversed() {
        return this.E;
    }

    public final void j(RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        int k;
        int n6 = n(Integer.MAX_VALUE);
        if (n6 != Integer.MAX_VALUE && (k = n6 - this.f2348i.k()) > 0) {
            int scrollBy = k - scrollBy(k, recycler, state);
            if (!z5 || scrollBy <= 0) {
                return;
            }
            this.f2348i.p(-scrollBy);
        }
    }

    public final int k() {
        if (getChildCount() == 0) {
            return 0;
        }
        return getPosition(getChildAt(0));
    }

    public final int l() {
        int childCount = getChildCount();
        if (childCount == 0) {
            return 0;
        }
        return getPosition(getChildAt(childCount - 1));
    }

    public final int m(int i5) {
        int f2 = this.f2347e[0].f(i5);
        for (int i6 = 1; i6 < this.f2346d; i6++) {
            int f10 = this.f2347e[i6].f(i5);
            if (f10 > f2) {
                f2 = f10;
            }
        }
        return f2;
    }

    public final int n(int i5) {
        int h6 = this.f2347e[0].h(i5);
        for (int i6 = 1; i6 < this.f2346d; i6++) {
            int h7 = this.f2347e[i6].h(i5);
            if (h7 < h6) {
                h6 = h7;
            }
        }
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00b5  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:56:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00c6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void o(int i5, int i6, int i10) {
        int i11;
        int i12;
        d dVar;
        int[] iArr;
        ArrayList arrayList;
        r1 r1Var;
        int i13;
        int l6 = this.F ? l() : k();
        if (i10 != 8) {
            i11 = i5 + i6;
        } else {
            if (i5 >= i6) {
                i11 = i5 + 1;
                i12 = i6;
                dVar = this.J;
                iArr = (int[]) dVar.a;
                if (iArr != null && i12 < iArr.length) {
                    arrayList = (ArrayList) dVar.f2384b;
                    if (arrayList != null) {
                        if (arrayList != null) {
                            for (int size = arrayList.size() - 1; size >= 0; size--) {
                                r1Var = (r1) ((ArrayList) dVar.f2384b).get(size);
                                if (r1Var.f2449d == i12) {
                                    break;
                                }
                            }
                        }
                        r1Var = null;
                        if (r1Var != null) {
                            ((ArrayList) dVar.f2384b).remove(r1Var);
                        }
                        int size2 = ((ArrayList) dVar.f2384b).size();
                        int i14 = 0;
                        while (true) {
                            if (i14 >= size2) {
                                i14 = -1;
                                break;
                            } else if (((r1) ((ArrayList) dVar.f2384b).get(i14)).f2449d >= i12) {
                                break;
                            } else {
                                i14++;
                            }
                        }
                        if (i14 != -1) {
                            r1 r1Var2 = (r1) ((ArrayList) dVar.f2384b).get(i14);
                            ((ArrayList) dVar.f2384b).remove(i14);
                            i13 = r1Var2.f2449d;
                            if (i13 == -1) {
                                int[] iArr2 = (int[]) dVar.a;
                                Arrays.fill(iArr2, i12, iArr2.length, -1);
                                int length = ((int[]) dVar.a).length;
                            } else {
                                Arrays.fill((int[]) dVar.a, i12, Math.min(i13 + 1, ((int[]) dVar.a).length), -1);
                            }
                        }
                    }
                    i13 = -1;
                    if (i13 == -1) {
                    }
                }
                if (i10 != 1) {
                    dVar.c(i5, i6);
                } else if (i10 == 2) {
                    dVar.d(i5, i6);
                } else if (i10 == 8) {
                    dVar.d(i5, 1);
                    dVar.c(i6, 1);
                }
                if (i11 > l6) {
                    return;
                }
                if (i12 <= (this.F ? k() : l())) {
                    requestLayout();
                    return;
                }
                return;
            }
            i11 = i6 + 1;
        }
        i12 = i5;
        dVar = this.J;
        iArr = (int[]) dVar.a;
        if (iArr != null) {
            arrayList = (ArrayList) dVar.f2384b;
            if (arrayList != null) {
            }
            i13 = -1;
            if (i13 == -1) {
            }
        }
        if (i10 != 1) {
        }
        if (i11 > l6) {
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void offsetChildrenHorizontal(int i5) {
        super.offsetChildrenHorizontal(i5);
        for (int i6 = 0; i6 < this.f2346d; i6++) {
            t1 t1Var = this.f2347e[i6];
            int i10 = t1Var.f2463b;
            if (i10 != Integer.MIN_VALUE) {
                t1Var.f2463b = i10 + i5;
            }
            int i11 = t1Var.f2464c;
            if (i11 != Integer.MIN_VALUE) {
                t1Var.f2464c = i11 + i5;
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void offsetChildrenVertical(int i5) {
        super.offsetChildrenVertical(i5);
        for (int i6 = 0; i6 < this.f2346d; i6++) {
            t1 t1Var = this.f2347e[i6];
            int i10 = t1Var.f2463b;
            if (i10 != Integer.MIN_VALUE) {
                t1Var.f2463b = i10 + i5;
            }
            int i11 = t1Var.f2464c;
            if (i11 != Integer.MIN_VALUE) {
                t1Var.f2464c = i11 + i5;
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onAdapterChanged(RecyclerView.Adapter adapter, RecyclerView.Adapter adapter2) {
        this.J.a();
        for (int i5 = 0; i5 < this.f2346d; i5++) {
            this.f2347e[i5].b();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onDetachedFromWindow(RecyclerView recyclerView, RecyclerView.Recycler recycler) {
        super.onDetachedFromWindow(recyclerView, recycler);
        removeCallbacks(this.S);
        for (int i5 = 0; i5 < this.f2346d; i5++) {
            this.f2347e[i5].b();
        }
        recyclerView.requestLayout();
    }

    /* JADX WARN: Code restructure failed: missing block: B:110:0x003a, code lost:
    
        if (r8.f2350w == 1) goto L29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0040, code lost:
    
        if (r8.f2350w == 0) goto L29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:117:0x004c, code lost:
    
        if (isLayoutRTL() == false) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:121:0x0058, code lost:
    
        if (isLayoutRTL() == false) goto L29;
     */
    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final View onFocusSearchFailed(View view, int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        View findContainingItemView;
        int i6;
        if (getChildCount() == 0 || (findContainingItemView = findContainingItemView(view)) == null) {
            return null;
        }
        x();
        if (i5 == 1) {
            if (this.f2350w != 1) {
            }
            i6 = -1;
        } else if (i5 == 2) {
            if (this.f2350w != 1) {
            }
            i6 = 1;
        } else if (i5 != 17) {
            if (i5 != 33) {
                if (i5 == 66) {
                }
            }
            i6 = Integer.MIN_VALUE;
        }
        if (i6 == Integer.MIN_VALUE) {
            return null;
        }
        p1 p1Var = (p1) findContainingItemView.getLayoutParams();
        p1Var.getClass();
        t1 t1Var = p1Var.f2444w;
        int l6 = i6 == 1 ? l() : k();
        z(l6, state);
        y(i6);
        k0 k0Var = this.f2352y;
        k0Var.f2412c = k0Var.f2413d + l6;
        k0Var.f2411b = (int) (this.f2348i.l() * 0.33333334f);
        k0Var.f2417h = true;
        k0Var.a = false;
        f(recycler, k0Var, state);
        this.L = this.F;
        View g6 = t1Var.g(l6, i6);
        if (g6 != null && g6 != findContainingItemView) {
            return g6;
        }
        if (s(i6)) {
            for (int i10 = this.f2346d - 1; i10 >= 0; i10--) {
                View g10 = this.f2347e[i10].g(l6, i6);
                if (g10 != null && g10 != findContainingItemView) {
                    return g10;
                }
            }
        } else {
            for (int i11 = 0; i11 < this.f2346d; i11++) {
                View g11 = this.f2347e[i11].g(l6, i6);
                if (g11 != null && g11 != findContainingItemView) {
                    return g11;
                }
            }
        }
        boolean z5 = (this.E ^ true) == (i6 == -1);
        View findViewByPosition = findViewByPosition(z5 ? t1Var.c() : t1Var.d());
        if (findViewByPosition != null && findViewByPosition != findContainingItemView) {
            return findViewByPosition;
        }
        if (s(i6)) {
            for (int i12 = this.f2346d - 1; i12 >= 0; i12--) {
                if (i12 != t1Var.f2466e) {
                    View findViewByPosition2 = findViewByPosition(z5 ? this.f2347e[i12].c() : this.f2347e[i12].d());
                    if (findViewByPosition2 != null && findViewByPosition2 != findContainingItemView) {
                        return findViewByPosition2;
                    }
                }
            }
        } else {
            for (int i13 = 0; i13 < this.f2346d; i13++) {
                View findViewByPosition3 = findViewByPosition(z5 ? this.f2347e[i13].c() : this.f2347e[i13].d());
                if (findViewByPosition3 != null && findViewByPosition3 != findContainingItemView) {
                    return findViewByPosition3;
                }
            }
        }
        return null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        if (getChildCount() > 0) {
            View h6 = h(false);
            View g6 = g(false);
            if (h6 == null || g6 == null) {
                return;
            }
            int position = getPosition(h6);
            int position2 = getPosition(g6);
            if (position < position2) {
                accessibilityEvent.setFromIndex(position);
                accessibilityEvent.setToIndex(position2);
            } else {
                accessibilityEvent.setFromIndex(position2);
                accessibilityEvent.setToIndex(position);
            }
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onInitializeAccessibilityNodeInfo(RecyclerView.Recycler recycler, RecyclerView.State state, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(recycler, state, accessibilityNodeInfoCompat);
        accessibilityNodeInfoCompat.o("androidx.recyclerview.widget.StaggeredGridLayoutManager");
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onInitializeAccessibilityNodeInfoForItem(RecyclerView.Recycler recycler, RecyclerView.State state, View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        if (!(layoutParams instanceof p1)) {
            super.onInitializeAccessibilityNodeInfoForItem(view, accessibilityNodeInfoCompat);
            return;
        }
        p1 p1Var = (p1) layoutParams;
        if (this.f2350w == 0) {
            t1 t1Var = p1Var.f2444w;
            accessibilityNodeInfoCompat.r(l1.d.a(t1Var == null ? -1 : t1Var.f2466e, 1, -1, -1, false));
        } else {
            t1 t1Var2 = p1Var.f2444w;
            accessibilityNodeInfoCompat.r(l1.d.a(-1, -1, t1Var2 == null ? -1 : t1Var2.f2466e, 1, false));
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsAdded(RecyclerView recyclerView, int i5, int i6) {
        o(i5, i6, 1);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsChanged(RecyclerView recyclerView) {
        this.J.a();
        requestLayout();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsMoved(RecyclerView recyclerView, int i5, int i6, int i10) {
        o(i5, i6, 8);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsRemoved(RecyclerView recyclerView, int i5, int i6) {
        o(i5, i6, 2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsUpdated(RecyclerView recyclerView, int i5, int i6, Object obj) {
        o(i5, i6, 4);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutChildren(RecyclerView.Recycler recycler, RecyclerView.State state) {
        r(recycler, state, true);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutCompleted(RecyclerView.State state) {
        super.onLayoutCompleted(state);
        this.H = -1;
        this.I = Integer.MIN_VALUE;
        this.N = null;
        this.P.a();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (parcelable instanceof s1) {
            s1 s1Var = (s1) parcelable;
            this.N = s1Var;
            if (this.H != -1) {
                s1Var.f2454d = -1;
                s1Var.f2455e = -1;
                s1Var.f2457v = null;
                s1Var.f2456i = 0;
                s1Var.f2458w = 0;
                s1Var.f2459x = null;
                s1Var.f2460y = null;
            }
            requestLayout();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final Parcelable onSaveInstanceState() {
        int h6;
        int k;
        int[] iArr;
        s1 s1Var = this.N;
        if (s1Var != null) {
            s1 s1Var2 = new s1();
            s1Var2.f2456i = s1Var.f2456i;
            s1Var2.f2454d = s1Var.f2454d;
            s1Var2.f2455e = s1Var.f2455e;
            s1Var2.f2457v = s1Var.f2457v;
            s1Var2.f2458w = s1Var.f2458w;
            s1Var2.f2459x = s1Var.f2459x;
            s1Var2.E = s1Var.E;
            s1Var2.F = s1Var.F;
            s1Var2.G = s1Var.G;
            s1Var2.f2460y = s1Var.f2460y;
            return s1Var2;
        }
        s1 s1Var3 = new s1();
        s1Var3.E = this.E;
        s1Var3.F = this.L;
        s1Var3.G = this.M;
        d dVar = this.J;
        if (dVar == null || (iArr = (int[]) dVar.a) == null) {
            s1Var3.f2458w = 0;
        } else {
            s1Var3.f2459x = iArr;
            s1Var3.f2458w = iArr.length;
            s1Var3.f2460y = (ArrayList) dVar.f2384b;
        }
        if (getChildCount() <= 0) {
            s1Var3.f2454d = -1;
            s1Var3.f2455e = -1;
            s1Var3.f2456i = 0;
            return s1Var3;
        }
        s1Var3.f2454d = this.L ? l() : k();
        View g6 = this.F ? g(true) : h(true);
        s1Var3.f2455e = g6 != null ? getPosition(g6) : -1;
        int i5 = this.f2346d;
        s1Var3.f2456i = i5;
        s1Var3.f2457v = new int[i5];
        for (int i6 = 0; i6 < this.f2346d; i6++) {
            if (this.L) {
                h6 = this.f2347e[i6].f(Integer.MIN_VALUE);
                if (h6 != Integer.MIN_VALUE) {
                    k = this.f2348i.g();
                    h6 -= k;
                    s1Var3.f2457v[i6] = h6;
                } else {
                    s1Var3.f2457v[i6] = h6;
                }
            } else {
                h6 = this.f2347e[i6].h(Integer.MIN_VALUE);
                if (h6 != Integer.MIN_VALUE) {
                    k = this.f2348i.k();
                    h6 -= k;
                    s1Var3.f2457v[i6] = h6;
                } else {
                    s1Var3.f2457v[i6] = h6;
                }
            }
        }
        return s1Var3;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onScrollStateChanged(int i5) {
        if (i5 == 0) {
            d();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x00ee  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00f3  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00f8 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x002c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00f5  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00f0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final View p() {
        int childCount = getChildCount();
        int i5 = childCount - 1;
        BitSet bitSet = new BitSet(this.f2346d);
        bitSet.set(0, this.f2346d, true);
        char c6 = (this.f2350w == 1 && isLayoutRTL()) ? (char) 1 : (char) 65535;
        if (this.F) {
            childCount = -1;
        } else {
            i5 = 0;
        }
        int i6 = i5 < childCount ? 1 : -1;
        while (i5 != childCount) {
            View childAt = getChildAt(i5);
            p1 p1Var = (p1) childAt.getLayoutParams();
            if (bitSet.get(p1Var.f2444w.f2466e)) {
                t1 t1Var = p1Var.f2444w;
                if (this.F) {
                    int i10 = t1Var.f2464c;
                    if (i10 == Integer.MIN_VALUE) {
                        t1Var.a();
                        i10 = t1Var.f2464c;
                    }
                    if (i10 < this.f2348i.g()) {
                        ((p1) ((View) k0.d.f(1, t1Var.a)).getLayoutParams()).getClass();
                        return childAt;
                    }
                } else {
                    int i11 = t1Var.f2463b;
                    ArrayList arrayList = t1Var.a;
                    if (i11 == Integer.MIN_VALUE) {
                        View view = (View) arrayList.get(0);
                        p1 p1Var2 = (p1) view.getLayoutParams();
                        t1Var.f2463b = t1Var.f2467f.f2348i.e(view);
                        p1Var2.getClass();
                        i11 = t1Var.f2463b;
                    }
                    if (i11 > this.f2348i.k()) {
                        ((p1) ((View) arrayList.get(0)).getLayoutParams()).getClass();
                        return childAt;
                    }
                }
                bitSet.clear(p1Var.f2444w.f2466e);
            }
            i5 += i6;
            if (i5 != childCount) {
                View childAt2 = getChildAt(i5);
                if (this.F) {
                    int b10 = this.f2348i.b(childAt);
                    int b11 = this.f2348i.b(childAt2);
                    if (b10 < b11) {
                        return childAt;
                    }
                    if (b10 == b11) {
                        if ((p1Var.f2444w.f2466e - ((p1) childAt2.getLayoutParams()).f2444w.f2466e >= 0) == (c6 >= 0)) {
                            return childAt;
                        }
                    } else {
                        continue;
                    }
                } else {
                    int e9 = this.f2348i.e(childAt);
                    int e10 = this.f2348i.e(childAt2);
                    if (e9 > e10) {
                        return childAt;
                    }
                    if (e9 == e10) {
                        if ((p1Var.f2444w.f2466e - ((p1) childAt2.getLayoutParams()).f2444w.f2466e >= 0) == (c6 >= 0)) {
                        }
                    } else {
                        continue;
                    }
                }
            }
        }
        return null;
    }

    public final void q(View view, int i5, int i6) {
        Rect rect = this.O;
        calculateItemDecorationsForChild(view, rect);
        p1 p1Var = (p1) view.getLayoutParams();
        int B = B(i5, ((ViewGroup.MarginLayoutParams) p1Var).leftMargin + rect.left, ((ViewGroup.MarginLayoutParams) p1Var).rightMargin + rect.right);
        int B2 = B(i6, ((ViewGroup.MarginLayoutParams) p1Var).topMargin + rect.top, ((ViewGroup.MarginLayoutParams) p1Var).bottomMargin + rect.bottom);
        if (shouldMeasureChild(view, B, B2, p1Var)) {
            view.measure(B, B2);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x01aa, code lost:
    
        r11 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x01a6, code lost:
    
        if ((r11 < k()) != r16.F) goto L108;
     */
    /* JADX WARN: Code restructure failed: missing block: B:258:0x0410, code lost:
    
        if (d() != false) goto L252;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0198, code lost:
    
        if (r16.F != false) goto L109;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x01a8, code lost:
    
        r11 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void r(RecyclerView.Recycler recycler, RecyclerView.State state, boolean z5) {
        s1 s1Var;
        int i5;
        int i6;
        boolean z6;
        s1 s1Var2 = this.N;
        o1 o1Var = this.P;
        if (!(s1Var2 == null && this.H == -1) && state.b() == 0) {
            removeAndRecycleAllViews(recycler);
            o1Var.a();
            return;
        }
        boolean z7 = o1Var.f2438e;
        StaggeredGridLayoutManager staggeredGridLayoutManager = o1Var.f2440g;
        boolean z8 = true;
        boolean z10 = (z7 && this.H == -1 && this.N == null) ? false : true;
        d dVar = this.J;
        if (z10) {
            o1Var.a();
            s1 s1Var3 = this.N;
            if (s1Var3 != null) {
                int i10 = s1Var3.f2456i;
                if (i10 > 0) {
                    if (i10 == this.f2346d) {
                        for (int i11 = 0; i11 < this.f2346d; i11++) {
                            this.f2347e[i11].b();
                            s1 s1Var4 = this.N;
                            int i12 = s1Var4.f2457v[i11];
                            if (i12 != Integer.MIN_VALUE) {
                                i12 += s1Var4.F ? this.f2348i.g() : this.f2348i.k();
                            }
                            t1 t1Var = this.f2347e[i11];
                            t1Var.f2463b = i12;
                            t1Var.f2464c = i12;
                        }
                    } else {
                        s1Var3.f2457v = null;
                        s1Var3.f2456i = 0;
                        s1Var3.f2458w = 0;
                        s1Var3.f2459x = null;
                        s1Var3.f2460y = null;
                        s1Var3.f2454d = s1Var3.f2455e;
                    }
                }
                s1 s1Var5 = this.N;
                this.M = s1Var5.G;
                boolean z11 = s1Var5.E;
                assertNotInLayoutOrScroll(null);
                s1 s1Var6 = this.N;
                if (s1Var6 != null && s1Var6.E != z11) {
                    s1Var6.E = z11;
                }
                this.E = z11;
                requestLayout();
                x();
                s1 s1Var7 = this.N;
                int i13 = s1Var7.f2454d;
                if (i13 != -1) {
                    this.H = i13;
                    o1Var.f2436c = s1Var7.F;
                } else {
                    o1Var.f2436c = this.F;
                }
                if (s1Var7.f2458w > 1) {
                    dVar.a = s1Var7.f2459x;
                    dVar.f2384b = s1Var7.f2460y;
                }
            } else {
                x();
                o1Var.f2436c = this.F;
            }
            if (!state.f2332g && (i6 = this.H) != -1) {
                if (i6 < 0 || i6 >= state.b()) {
                    this.H = -1;
                    this.I = Integer.MIN_VALUE;
                } else {
                    s1 s1Var8 = this.N;
                    if (s1Var8 == null || s1Var8.f2454d == -1 || s1Var8.f2456i < 1) {
                        View findViewByPosition = findViewByPosition(this.H);
                        if (findViewByPosition != null) {
                            o1Var.a = this.F ? l() : k();
                            if (this.I != Integer.MIN_VALUE) {
                                if (o1Var.f2436c) {
                                    o1Var.f2435b = (this.f2348i.g() - this.I) - this.f2348i.b(findViewByPosition);
                                } else {
                                    o1Var.f2435b = (this.f2348i.k() + this.I) - this.f2348i.e(findViewByPosition);
                                }
                            } else if (this.f2348i.c(findViewByPosition) > this.f2348i.l()) {
                                o1Var.f2435b = o1Var.f2436c ? this.f2348i.g() : this.f2348i.k();
                            } else {
                                int e9 = this.f2348i.e(findViewByPosition) - this.f2348i.k();
                                if (e9 < 0) {
                                    o1Var.f2435b = -e9;
                                } else {
                                    int g6 = this.f2348i.g() - this.f2348i.b(findViewByPosition);
                                    if (g6 < 0) {
                                        o1Var.f2435b = g6;
                                    } else {
                                        o1Var.f2435b = Integer.MIN_VALUE;
                                    }
                                }
                            }
                        } else {
                            int i14 = this.H;
                            o1Var.a = i14;
                            int i15 = this.I;
                            if (i15 == Integer.MIN_VALUE) {
                                if (getChildCount() == 0) {
                                }
                                o1Var.f2436c = z6;
                                o1Var.f2435b = z6 ? staggeredGridLayoutManager.f2348i.g() : staggeredGridLayoutManager.f2348i.k();
                            } else if (o1Var.f2436c) {
                                o1Var.f2435b = staggeredGridLayoutManager.f2348i.g() - i15;
                            } else {
                                o1Var.f2435b = staggeredGridLayoutManager.f2348i.k() + i15;
                            }
                            o1Var.f2437d = true;
                        }
                    } else {
                        o1Var.f2435b = Integer.MIN_VALUE;
                        o1Var.a = this.H;
                    }
                    o1Var.f2438e = true;
                }
            }
            if (this.L) {
                int b10 = state.b();
                for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
                    i5 = getPosition(getChildAt(childCount));
                    if (i5 >= 0 && i5 < b10) {
                        break;
                    }
                }
                i5 = 0;
                o1Var.a = i5;
                o1Var.f2435b = Integer.MIN_VALUE;
                o1Var.f2438e = true;
            } else {
                int b11 = state.b();
                int childCount2 = getChildCount();
                for (int i16 = 0; i16 < childCount2; i16++) {
                    int position = getPosition(getChildAt(i16));
                    if (position >= 0 && position < b11) {
                        i5 = position;
                        break;
                    }
                }
                i5 = 0;
                o1Var.a = i5;
                o1Var.f2435b = Integer.MIN_VALUE;
                o1Var.f2438e = true;
            }
        }
        if (this.N == null && this.H == -1 && (o1Var.f2436c != this.L || isLayoutRTL() != this.M)) {
            dVar.a();
            o1Var.f2437d = true;
        }
        if (getChildCount() > 0 && ((s1Var = this.N) == null || s1Var.f2456i < 1)) {
            if (o1Var.f2437d) {
                for (int i17 = 0; i17 < this.f2346d; i17++) {
                    this.f2347e[i17].b();
                    int i18 = o1Var.f2435b;
                    if (i18 != Integer.MIN_VALUE) {
                        t1 t1Var2 = this.f2347e[i17];
                        t1Var2.f2463b = i18;
                        t1Var2.f2464c = i18;
                    }
                }
            } else if (z10 || o1Var.f2439f == null) {
                for (int i19 = 0; i19 < this.f2346d; i19++) {
                    t1 t1Var3 = this.f2347e[i19];
                    boolean z12 = this.F;
                    int i20 = o1Var.f2435b;
                    StaggeredGridLayoutManager staggeredGridLayoutManager2 = t1Var3.f2467f;
                    int f2 = z12 ? t1Var3.f(Integer.MIN_VALUE) : t1Var3.h(Integer.MIN_VALUE);
                    t1Var3.b();
                    if (f2 != Integer.MIN_VALUE && ((!z12 || f2 >= staggeredGridLayoutManager2.f2348i.g()) && (z12 || f2 <= staggeredGridLayoutManager2.f2348i.k()))) {
                        if (i20 != Integer.MIN_VALUE) {
                            f2 += i20;
                        }
                        t1Var3.f2464c = f2;
                        t1Var3.f2463b = f2;
                    }
                }
                t1[] t1VarArr = this.f2347e;
                int length = t1VarArr.length;
                int[] iArr = o1Var.f2439f;
                if (iArr == null || iArr.length < length) {
                    o1Var.f2439f = new int[staggeredGridLayoutManager.f2347e.length];
                }
                for (int i21 = 0; i21 < length; i21++) {
                    o1Var.f2439f[i21] = t1VarArr[i21].h(Integer.MIN_VALUE);
                }
            } else {
                for (int i22 = 0; i22 < this.f2346d; i22++) {
                    t1 t1Var4 = this.f2347e[i22];
                    t1Var4.b();
                    int i23 = o1Var.f2439f[i22];
                    t1Var4.f2463b = i23;
                    t1Var4.f2464c = i23;
                }
            }
        }
        detachAndScrapAttachedViews(recycler);
        k0 k0Var = this.f2352y;
        k0Var.a = false;
        int l6 = this.f2349v.l();
        this.f2351x = l6 / this.f2346d;
        View.MeasureSpec.makeMeasureSpec(l6, this.f2349v.i());
        z(o1Var.a, state);
        if (o1Var.f2436c) {
            y(-1);
            f(recycler, k0Var, state);
            y(1);
            k0Var.f2412c = o1Var.a + k0Var.f2413d;
            f(recycler, k0Var, state);
        } else {
            y(1);
            f(recycler, k0Var, state);
            y(-1);
            k0Var.f2412c = o1Var.a + k0Var.f2413d;
            f(recycler, k0Var, state);
        }
        if (this.f2349v.i() != 1073741824) {
            int childCount3 = getChildCount();
            float f10 = 0.0f;
            for (int i24 = 0; i24 < childCount3; i24++) {
                View childAt = getChildAt(i24);
                float c6 = this.f2349v.c(childAt);
                if (c6 >= f10) {
                    ((p1) childAt.getLayoutParams()).getClass();
                    f10 = Math.max(f10, c6);
                }
            }
            int i25 = this.f2351x;
            int round = Math.round(f10 * this.f2346d);
            if (this.f2349v.i() == Integer.MIN_VALUE) {
                round = Math.min(round, this.f2349v.l());
            }
            this.f2351x = round / this.f2346d;
            View.MeasureSpec.makeMeasureSpec(round, this.f2349v.i());
            if (this.f2351x != i25) {
                for (int i26 = 0; i26 < childCount3; i26++) {
                    View childAt2 = getChildAt(i26);
                    p1 p1Var = (p1) childAt2.getLayoutParams();
                    p1Var.getClass();
                    if (isLayoutRTL() && this.f2350w == 1) {
                        int i27 = -((this.f2346d - 1) - p1Var.f2444w.f2466e);
                        childAt2.offsetLeftAndRight((this.f2351x * i27) - (i27 * i25));
                    } else {
                        int i28 = p1Var.f2444w.f2466e;
                        int i29 = this.f2351x * i28;
                        int i30 = i28 * i25;
                        if (this.f2350w == 1) {
                            childAt2.offsetLeftAndRight(i29 - i30);
                        } else {
                            childAt2.offsetTopAndBottom(i29 - i30);
                        }
                    }
                }
            }
        }
        if (getChildCount() > 0) {
            if (this.F) {
                i(recycler, state, true);
                j(recycler, state, false);
            } else {
                j(recycler, state, true);
                i(recycler, state, false);
            }
        }
        if (z5 && !state.f2332g && this.K != 0 && getChildCount() > 0 && p() != null) {
            removeCallbacks(this.S);
        }
        z8 = false;
        if (state.f2332g) {
            o1Var.a();
        }
        this.L = o1Var.f2436c;
        this.M = isLayoutRTL();
        if (z8) {
            o1Var.a();
            r(recycler, state, false);
        }
    }

    public final boolean s(int i5) {
        if (this.f2350w == 0) {
            return (i5 == -1) != this.F;
        }
        return ((i5 == -1) == this.F) == isLayoutRTL();
    }

    public final int scrollBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (getChildCount() == 0 || i5 == 0) {
            return 0;
        }
        t(i5, state);
        k0 k0Var = this.f2352y;
        int f2 = f(recycler, k0Var, state);
        if (k0Var.f2411b >= f2) {
            i5 = i5 < 0 ? -f2 : f2;
        }
        this.f2348i.p(-i5);
        this.L = this.F;
        k0Var.f2411b = 0;
        u(recycler, k0Var);
        return i5;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollHorizontallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        return scrollBy(i5, recycler, state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void scrollToPosition(int i5) {
        s1 s1Var = this.N;
        if (s1Var != null && s1Var.f2454d != i5) {
            s1Var.f2457v = null;
            s1Var.f2456i = 0;
            s1Var.f2454d = -1;
            s1Var.f2455e = -1;
        }
        this.H = i5;
        this.I = Integer.MIN_VALUE;
        requestLayout();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollVerticallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        return scrollBy(i5, recycler, state);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void setMeasuredDimension(Rect rect, int i5, int i6) {
        int chooseSize;
        int chooseSize2;
        int paddingRight = getPaddingRight() + getPaddingLeft();
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        if (this.f2350w == 1) {
            chooseSize2 = RecyclerView.LayoutManager.chooseSize(i6, rect.height() + paddingBottom, getMinimumHeight());
            chooseSize = RecyclerView.LayoutManager.chooseSize(i5, (this.f2351x * this.f2346d) + paddingRight, getMinimumWidth());
        } else {
            chooseSize = RecyclerView.LayoutManager.chooseSize(i5, rect.width() + paddingRight, getMinimumWidth());
            chooseSize2 = RecyclerView.LayoutManager.chooseSize(i6, (this.f2351x * this.f2346d) + paddingBottom, getMinimumHeight());
        }
        setMeasuredDimension(chooseSize, chooseSize2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void smoothScrollToPosition(RecyclerView recyclerView, RecyclerView.State state, int i5) {
        m0 m0Var = new m0(recyclerView.getContext());
        m0Var.setTargetPosition(i5);
        startSmoothScroll(m0Var);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean supportsPredictiveItemAnimations() {
        return this.N == null;
    }

    public final void t(int i5, RecyclerView.State state) {
        int k;
        int i6;
        if (i5 > 0) {
            k = l();
            i6 = 1;
        } else {
            k = k();
            i6 = -1;
        }
        k0 k0Var = this.f2352y;
        k0Var.a = true;
        z(k, state);
        y(i6);
        k0Var.f2412c = k + k0Var.f2413d;
        k0Var.f2411b = Math.abs(i5);
    }

    public final void u(RecyclerView.Recycler recycler, k0 k0Var) {
        if (!k0Var.a || k0Var.f2418i) {
            return;
        }
        if (k0Var.f2411b == 0) {
            if (k0Var.f2414e == -1) {
                v(k0Var.f2416g, recycler);
                return;
            } else {
                w(k0Var.f2415f, recycler);
                return;
            }
        }
        int i5 = 1;
        if (k0Var.f2414e == -1) {
            int i6 = k0Var.f2415f;
            int h6 = this.f2347e[0].h(i6);
            while (i5 < this.f2346d) {
                int h7 = this.f2347e[i5].h(i6);
                if (h7 > h6) {
                    h6 = h7;
                }
                i5++;
            }
            int i10 = i6 - h6;
            v(i10 < 0 ? k0Var.f2416g : k0Var.f2416g - Math.min(i10, k0Var.f2411b), recycler);
            return;
        }
        int i11 = k0Var.f2416g;
        int f2 = this.f2347e[0].f(i11);
        while (i5 < this.f2346d) {
            int f10 = this.f2347e[i5].f(i11);
            if (f10 < f2) {
                f2 = f10;
            }
            i5++;
        }
        int i12 = f2 - k0Var.f2416g;
        w(i12 < 0 ? k0Var.f2415f : Math.min(i12, k0Var.f2411b) + k0Var.f2415f, recycler);
    }

    public final void v(int i5, RecyclerView.Recycler recycler) {
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = getChildAt(childCount);
            if (this.f2348i.e(childAt) < i5 || this.f2348i.o(childAt) < i5) {
                return;
            }
            p1 p1Var = (p1) childAt.getLayoutParams();
            p1Var.getClass();
            if (p1Var.f2444w.a.size() == 1) {
                return;
            }
            t1 t1Var = p1Var.f2444w;
            ArrayList arrayList = t1Var.a;
            int size = arrayList.size();
            View view = (View) arrayList.remove(size - 1);
            p1 p1Var2 = (p1) view.getLayoutParams();
            p1Var2.f2444w = null;
            if (p1Var2.f2308d.isRemoved() || p1Var2.f2308d.isUpdated()) {
                t1Var.f2465d -= t1Var.f2467f.f2348i.c(view);
            }
            if (size == 1) {
                t1Var.f2463b = Integer.MIN_VALUE;
            }
            t1Var.f2464c = Integer.MIN_VALUE;
            removeAndRecycleView(childAt, recycler);
        }
    }

    public final void w(int i5, RecyclerView.Recycler recycler) {
        while (getChildCount() > 0) {
            View childAt = getChildAt(0);
            if (this.f2348i.b(childAt) > i5 || this.f2348i.n(childAt) > i5) {
                return;
            }
            p1 p1Var = (p1) childAt.getLayoutParams();
            p1Var.getClass();
            if (p1Var.f2444w.a.size() == 1) {
                return;
            }
            t1 t1Var = p1Var.f2444w;
            ArrayList arrayList = t1Var.a;
            View view = (View) arrayList.remove(0);
            p1 p1Var2 = (p1) view.getLayoutParams();
            p1Var2.f2444w = null;
            if (arrayList.size() == 0) {
                t1Var.f2464c = Integer.MIN_VALUE;
            }
            if (p1Var2.f2308d.isRemoved() || p1Var2.f2308d.isUpdated()) {
                t1Var.f2465d -= t1Var.f2467f.f2348i.c(view);
            }
            t1Var.f2463b = Integer.MIN_VALUE;
            removeAndRecycleView(childAt, recycler);
        }
    }

    public final void x() {
        if (this.f2350w == 1 || !isLayoutRTL()) {
            this.F = this.E;
        } else {
            this.F = !this.E;
        }
    }

    public final void y(int i5) {
        k0 k0Var = this.f2352y;
        k0Var.f2414e = i5;
        k0Var.f2413d = this.F != (i5 == -1) ? -1 : 1;
    }

    public final void z(int i5, RecyclerView.State state) {
        int i6;
        int i10;
        int i11;
        k0 k0Var = this.f2352y;
        boolean z5 = false;
        k0Var.f2411b = 0;
        k0Var.f2412c = i5;
        if (!isSmoothScrolling() || (i11 = state.a) == -1) {
            i6 = 0;
            i10 = 0;
        } else {
            if (this.F == (i11 < i5)) {
                i6 = this.f2348i.l();
                i10 = 0;
            } else {
                i10 = this.f2348i.l();
                i6 = 0;
            }
        }
        if (getClipToPadding()) {
            k0Var.f2415f = this.f2348i.k() - i10;
            k0Var.f2416g = this.f2348i.g() + i6;
        } else {
            k0Var.f2416g = this.f2348i.f() + i6;
            k0Var.f2415f = -i10;
        }
        k0Var.f2417h = false;
        k0Var.a = true;
        if (this.f2348i.i() == 0 && this.f2348i.f() == 0) {
            z5 = true;
        }
        k0Var.f2418i = z5;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            return new p1((ViewGroup.MarginLayoutParams) layoutParams);
        }
        return new p1(layoutParams);
    }
}
