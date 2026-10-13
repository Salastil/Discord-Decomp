package o4;

import android.graphics.PointF;
import java.util.List;

/* loaded from: classes.dex */
public final class j extends k {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f15763i;
    public final Object j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(List list, int i5) {
        super(list);
        this.f15763i = i5;
        switch (i5) {
            case 1:
                super(list);
                this.j = new PointF();
                break;
            case 2:
                super(list);
                this.j = new y4.b();
                break;
            default:
                int i6 = 0;
                for (int i10 = 0; i10 < list.size(); i10++) {
                    s4.c cVar = (s4.c) ((y4.a) list.get(i10)).f20651b;
                    if (cVar != null) {
                        i6 = Math.max(i6, cVar.f17753b.length);
                    }
                }
                this.j = new s4.c(new float[i6], new int[i6]);
                break;
        }
    }

    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        Object obj;
        float f10;
        switch (this.f15763i) {
            case 0:
                s4.c cVar = (s4.c) this.j;
                s4.c cVar2 = (s4.c) aVar.f20651b;
                s4.c cVar3 = (s4.c) aVar.f20652c;
                int[] iArr = cVar.f17753b;
                float[] fArr = cVar.a;
                boolean equals = cVar2.equals(cVar3);
                int[] iArr2 = cVar2.f17753b;
                if (equals) {
                    cVar.a(cVar2);
                } else if (f2 <= 0.0f) {
                    cVar.a(cVar2);
                } else if (f2 >= 1.0f) {
                    cVar.a(cVar3);
                } else {
                    int length = iArr2.length;
                    int[] iArr3 = cVar3.f17753b;
                    if (length != iArr3.length) {
                        StringBuilder sb2 = new StringBuilder("Cannot interpolate between gradients. Lengths vary (");
                        sb2.append(iArr2.length);
                        sb2.append(" vs ");
                        throw new IllegalArgumentException(k0.d.m(sb2, iArr3.length, ")"));
                    }
                    for (int i5 = 0; i5 < iArr2.length; i5++) {
                        fArr[i5] = x4.g.e(cVar2.a[i5], cVar3.a[i5], f2);
                        iArr[i5] = ta.a.u(iArr2[i5], iArr3[i5], f2);
                    }
                    for (int length2 = iArr2.length; length2 < fArr.length; length2++) {
                        fArr[length2] = fArr[iArr2.length - 1];
                        iArr[length2] = iArr[iArr2.length - 1];
                    }
                }
                return cVar;
            case 1:
                return k(aVar, f2, f2, f2);
            default:
                y4.b bVar = (y4.b) this.j;
                Object obj2 = aVar.f20651b;
                if (obj2 == null || (obj = aVar.f20652c) == null) {
                    throw new IllegalStateException("Missing values for keyframe.");
                }
                y4.b bVar2 = (y4.b) obj2;
                y4.b bVar3 = (y4.b) obj;
                e4.e eVar = this.f15748e;
                if (eVar != null) {
                    f10 = f2;
                    y4.b bVar4 = (y4.b) eVar.t(aVar.f20656g, aVar.f20657h.floatValue(), bVar2, bVar3, f10, d(), this.f15747d);
                    if (bVar4 != null) {
                        return bVar4;
                    }
                } else {
                    f10 = f2;
                }
                float e9 = x4.g.e(bVar2.a, bVar3.a, f10);
                float e10 = x4.g.e(bVar2.f20664b, bVar3.f20664b, f10);
                bVar.a = e9;
                bVar.f20664b = e10;
                return bVar;
        }
    }

    @Override // o4.e
    public /* bridge */ /* synthetic */ Object g(y4.a aVar, float f2, float f10, float f11) {
        switch (this.f15763i) {
            case 1:
                return k(aVar, f2, f10, f11);
            default:
                return super.g(aVar, f2, f10, f11);
        }
    }

    public PointF k(y4.a aVar, float f2, float f10, float f11) {
        Object obj;
        PointF pointF;
        PointF pointF2 = (PointF) this.j;
        Object obj2 = aVar.f20651b;
        if (obj2 == null || (obj = aVar.f20652c) == null) {
            throw new IllegalStateException("Missing values for keyframe.");
        }
        PointF pointF3 = (PointF) obj2;
        PointF pointF4 = (PointF) obj;
        e4.e eVar = this.f15748e;
        if (eVar != null && (pointF = (PointF) eVar.t(aVar.f20656g, aVar.f20657h.floatValue(), pointF3, pointF4, f2, d(), this.f15747d)) != null) {
            return pointF;
        }
        float f12 = pointF3.x;
        float c6 = k0.d.c(pointF4.x, f12, f10, f12);
        float f13 = pointF3.y;
        pointF2.set(c6, k0.d.c(pointF4.y, f13, f11, f13));
        return pointF2;
    }
}
