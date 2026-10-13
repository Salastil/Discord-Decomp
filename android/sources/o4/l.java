package o4;

import af.h0;
import android.graphics.Path;
import android.graphics.PointF;

/* loaded from: classes.dex */
public final class l extends y4.a {

    /* renamed from: q, reason: collision with root package name */
    public Path f15764q;

    /* renamed from: r, reason: collision with root package name */
    public final y4.a f15765r;

    public l(l4.i iVar, y4.a aVar) {
        super(iVar, (PointF) aVar.f20651b, (PointF) aVar.f20652c, aVar.f20653d, aVar.f20654e, aVar.f20655f, aVar.f20656g, aVar.f20657h);
        this.f15765r = aVar;
        d();
    }

    public final void d() {
        Object obj;
        Object obj2 = this.f20652c;
        Object obj3 = this.f20651b;
        boolean z5 = (obj2 == null || obj3 == null || !((PointF) obj3).equals(((PointF) obj2).x, ((PointF) obj2).y)) ? false : true;
        if (obj3 == null || (obj = this.f20652c) == null || z5) {
            return;
        }
        PointF pointF = (PointF) obj3;
        PointF pointF2 = (PointF) obj;
        y4.a aVar = this.f15765r;
        PointF pointF3 = aVar.f20662o;
        PointF pointF4 = aVar.f20663p;
        h0 h0Var = x4.h.a;
        Path path = new Path();
        path.moveTo(pointF.x, pointF.y);
        if (pointF3 == null || pointF4 == null || (pointF3.length() == 0.0f && pointF4.length() == 0.0f)) {
            path.lineTo(pointF2.x, pointF2.y);
        } else {
            float f2 = pointF3.x + pointF.x;
            float f10 = pointF.y + pointF3.y;
            float f11 = pointF2.x;
            float f12 = f11 + pointF4.x;
            float f13 = pointF2.y;
            path.cubicTo(f2, f10, f12, f13 + pointF4.y, f11, f13);
        }
        this.f15764q = path;
    }
}
