package o4;

import android.graphics.PointF;
import java.util.List;

/* loaded from: classes.dex */
public final class f extends k {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f15752i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ f(List list, int i5) {
        super(list);
        this.f15752i = i5;
    }

    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        Object obj;
        switch (this.f15752i) {
            case 0:
                return Integer.valueOf(k(aVar, f2));
            case 1:
                return Integer.valueOf(k(aVar, f2));
            default:
                Object obj2 = aVar.f20651b;
                e4.e eVar = this.f15748e;
                if (eVar == null) {
                    return (f2 != 1.0f || (obj = aVar.f20652c) == null) ? (q4.b) obj2 : (q4.b) obj;
                }
                float f10 = aVar.f20656g;
                Float f11 = aVar.f20657h;
                float floatValue = f11 == null ? Float.MAX_VALUE : f11.floatValue();
                q4.b bVar = (q4.b) obj2;
                Object obj3 = aVar.f20652c;
                return (q4.b) eVar.t(f10, floatValue, bVar, obj3 == null ? bVar : (q4.b) obj3, f2, c(), this.f15747d);
        }
    }

    public int k(y4.a aVar, float f2) {
        Float f10;
        Integer num;
        int i5;
        float f11;
        switch (this.f15752i) {
            case 0:
                Object obj = aVar.f20651b;
                Object obj2 = aVar.f20651b;
                if (obj == null || aVar.f20652c == null) {
                    throw new IllegalStateException("Missing values for keyframe.");
                }
                e4.e eVar = this.f15748e;
                return (eVar == null || (f10 = aVar.f20657h) == null || (num = (Integer) eVar.t(aVar.f20656g, f10.floatValue(), (Integer) obj2, (Integer) aVar.f20652c, f2, d(), this.f15747d)) == null) ? ta.a.u(((Integer) obj2).intValue(), ((Integer) aVar.f20652c).intValue(), x4.g.b(f2, 0.0f, 1.0f)) : num.intValue();
            default:
                Object obj3 = aVar.f20651b;
                Object obj4 = aVar.f20651b;
                if (obj3 == null) {
                    throw new IllegalStateException("Missing values for keyframe.");
                }
                Object obj5 = aVar.f20652c;
                if (obj5 == null) {
                    if (aVar.k == 784923401) {
                        aVar.k = ((Integer) obj3).intValue();
                    }
                    i5 = aVar.k;
                } else {
                    if (aVar.f20659l == 784923401) {
                        aVar.f20659l = ((Integer) obj5).intValue();
                    }
                    i5 = aVar.f20659l;
                }
                e4.e eVar2 = this.f15748e;
                if (eVar2 != null) {
                    f11 = f2;
                    Integer num2 = (Integer) eVar2.t(aVar.f20656g, aVar.f20657h.floatValue(), (Integer) obj4, Integer.valueOf(i5), f11, d(), this.f15747d);
                    if (num2 != null) {
                        return num2.intValue();
                    }
                } else {
                    f11 = f2;
                }
                if (aVar.k == 784923401) {
                    aVar.k = ((Integer) obj4).intValue();
                }
                int i6 = aVar.k;
                PointF pointF = x4.g.a;
                return (int) (((i5 - i6) * f11) + i6);
        }
    }
}
