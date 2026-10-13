package oe;

import com.google.android.flexbox.FlexboxLayoutManager;

/* loaded from: classes3.dex */
public final class d {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f15839b;

    /* renamed from: c, reason: collision with root package name */
    public int f15840c;

    /* renamed from: d, reason: collision with root package name */
    public int f15841d = 0;

    /* renamed from: e, reason: collision with root package name */
    public boolean f15842e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f15843f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f15844g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ FlexboxLayoutManager f15845h;

    public d(FlexboxLayoutManager flexboxLayoutManager) {
        this.f15845h = flexboxLayoutManager;
    }

    public static void a(d dVar) {
        FlexboxLayoutManager flexboxLayoutManager = dVar.f15845h;
        if (flexboxLayoutManager.isMainAxisDirectionHorizontal() || !flexboxLayoutManager.f5611w) {
            dVar.f15840c = dVar.f15842e ? flexboxLayoutManager.J.g() : flexboxLayoutManager.J.k();
        } else {
            dVar.f15840c = dVar.f15842e ? flexboxLayoutManager.J.g() : flexboxLayoutManager.getWidth() - flexboxLayoutManager.J.k();
        }
    }

    public static void b(d dVar) {
        dVar.a = -1;
        dVar.f15839b = -1;
        dVar.f15840c = Integer.MIN_VALUE;
        dVar.f15843f = false;
        dVar.f15844g = false;
        FlexboxLayoutManager flexboxLayoutManager = dVar.f15845h;
        if (flexboxLayoutManager.isMainAxisDirectionHorizontal()) {
            int i5 = flexboxLayoutManager.f5608e;
            if (i5 == 0) {
                dVar.f15842e = flexboxLayoutManager.f5607d == 1;
                return;
            } else {
                dVar.f15842e = i5 == 2;
                return;
            }
        }
        int i6 = flexboxLayoutManager.f5608e;
        if (i6 == 0) {
            dVar.f15842e = flexboxLayoutManager.f5607d == 3;
        } else {
            dVar.f15842e = i6 == 2;
        }
    }

    public final String toString() {
        return "AnchorInfo{mPosition=" + this.a + ", mFlexLinePosition=" + this.f15839b + ", mCoordinate=" + this.f15840c + ", mPerpendicularCoordinate=" + this.f15841d + ", mLayoutFromEnd=" + this.f15842e + ", mValid=" + this.f15843f + ", mAssignedFromSavedState=" + this.f15844g + '}';
    }
}
