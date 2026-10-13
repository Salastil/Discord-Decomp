package o4;

import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.PointF;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class m extends k {

    /* renamed from: i, reason: collision with root package name */
    public final PointF f15766i;
    public final float[] j;
    public final float[] k;

    /* renamed from: l, reason: collision with root package name */
    public final PathMeasure f15767l;

    /* renamed from: m, reason: collision with root package name */
    public l f15768m;

    public m(ArrayList arrayList) {
        super(arrayList);
        this.f15766i = new PointF();
        this.j = new float[2];
        this.k = new float[2];
        this.f15767l = new PathMeasure();
    }

    @Override // o4.e
    public final Object f(y4.a aVar, float f2) {
        float f10;
        l lVar = (l) aVar;
        Path path = lVar.f15764q;
        e4.e eVar = this.f15748e;
        if (eVar == null || aVar.f20657h == null) {
            f10 = f2;
        } else {
            f10 = f2;
            PointF pointF = (PointF) eVar.t(lVar.f20656g, lVar.f20657h.floatValue(), (PointF) lVar.f20651b, (PointF) lVar.f20652c, d(), f10, this.f15747d);
            if (pointF != null) {
                return pointF;
            }
        }
        if (path == null) {
            return (PointF) aVar.f20651b;
        }
        l lVar2 = this.f15768m;
        PathMeasure pathMeasure = this.f15767l;
        if (lVar2 != lVar) {
            pathMeasure.setPath(path, false);
            this.f15768m = lVar;
        }
        float length = pathMeasure.getLength();
        float f11 = f10 * length;
        float[] fArr = this.j;
        float[] fArr2 = this.k;
        pathMeasure.getPosTan(f11, fArr, fArr2);
        float f12 = fArr[0];
        float f13 = fArr[1];
        PointF pointF2 = this.f15766i;
        pointF2.set(f12, f13);
        if (f11 < 0.0f) {
            pointF2.offset(fArr2[0] * f11, fArr2[1] * f11);
            return pointF2;
        }
        if (f11 > length) {
            float f14 = f11 - length;
            pointF2.offset(fArr2[0] * f14, fArr2[1] * f14);
        }
        return pointF2;
    }
}
