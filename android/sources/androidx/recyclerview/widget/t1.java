package androidx.recyclerview.widget;

import android.view.View;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class t1 {
    public final ArrayList a = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public int f2463b = Integer.MIN_VALUE;

    /* renamed from: c, reason: collision with root package name */
    public int f2464c = Integer.MIN_VALUE;

    /* renamed from: d, reason: collision with root package name */
    public int f2465d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final int f2466e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ StaggeredGridLayoutManager f2467f;

    public t1(StaggeredGridLayoutManager staggeredGridLayoutManager, int i5) {
        this.f2467f = staggeredGridLayoutManager;
        this.f2466e = i5;
    }

    public final void a() {
        View view = (View) k0.d.f(1, this.a);
        p1 p1Var = (p1) view.getLayoutParams();
        this.f2464c = this.f2467f.f2348i.b(view);
        p1Var.getClass();
    }

    public final void b() {
        this.a.clear();
        this.f2463b = Integer.MIN_VALUE;
        this.f2464c = Integer.MIN_VALUE;
        this.f2465d = 0;
    }

    public final int c() {
        return this.f2467f.E ? e(r1.size() - 1, -1) : e(0, this.a.size());
    }

    public final int d() {
        return this.f2467f.E ? e(0, this.a.size()) : e(r1.size() - 1, -1);
    }

    public final int e(int i5, int i6) {
        StaggeredGridLayoutManager staggeredGridLayoutManager = this.f2467f;
        int k = staggeredGridLayoutManager.f2348i.k();
        int g6 = staggeredGridLayoutManager.f2348i.g();
        int i10 = i6 > i5 ? 1 : -1;
        while (i5 != i6) {
            View view = (View) this.a.get(i5);
            int e9 = staggeredGridLayoutManager.f2348i.e(view);
            int b10 = staggeredGridLayoutManager.f2348i.b(view);
            boolean z5 = e9 <= g6;
            boolean z6 = b10 >= k;
            if (z5 && z6 && (e9 < k || b10 > g6)) {
                return staggeredGridLayoutManager.getPosition(view);
            }
            i5 += i10;
        }
        return -1;
    }

    public final int f(int i5) {
        int i6 = this.f2464c;
        if (i6 != Integer.MIN_VALUE) {
            return i6;
        }
        if (this.a.size() == 0) {
            return i5;
        }
        a();
        return this.f2464c;
    }

    public final View g(int i5, int i6) {
        StaggeredGridLayoutManager staggeredGridLayoutManager = this.f2467f;
        ArrayList arrayList = this.a;
        View view = null;
        if (i6 != -1) {
            int size = arrayList.size() - 1;
            while (size >= 0) {
                View view2 = (View) arrayList.get(size);
                if ((staggeredGridLayoutManager.E && staggeredGridLayoutManager.getPosition(view2) >= i5) || ((!staggeredGridLayoutManager.E && staggeredGridLayoutManager.getPosition(view2) <= i5) || !view2.hasFocusable())) {
                    break;
                }
                size--;
                view = view2;
            }
            return view;
        }
        int size2 = arrayList.size();
        int i10 = 0;
        while (i10 < size2) {
            View view3 = (View) arrayList.get(i10);
            if ((staggeredGridLayoutManager.E && staggeredGridLayoutManager.getPosition(view3) <= i5) || ((!staggeredGridLayoutManager.E && staggeredGridLayoutManager.getPosition(view3) >= i5) || !view3.hasFocusable())) {
                break;
            }
            i10++;
            view = view3;
        }
        return view;
    }

    public final int h(int i5) {
        int i6 = this.f2463b;
        if (i6 != Integer.MIN_VALUE) {
            return i6;
        }
        ArrayList arrayList = this.a;
        if (arrayList.size() == 0) {
            return i5;
        }
        View view = (View) arrayList.get(0);
        p1 p1Var = (p1) view.getLayoutParams();
        this.f2463b = this.f2467f.f2348i.e(view);
        p1Var.getClass();
        return this.f2463b;
    }
}
