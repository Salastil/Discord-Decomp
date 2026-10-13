package q4;

import android.graphics.PointF;

/* loaded from: classes.dex */
public final class a {
    public final PointF a;

    /* renamed from: b, reason: collision with root package name */
    public final PointF f16661b;

    /* renamed from: c, reason: collision with root package name */
    public final PointF f16662c;

    public a() {
        this.a = new PointF();
        this.f16661b = new PointF();
        this.f16662c = new PointF();
    }

    public final String toString() {
        PointF pointF = this.f16662c;
        Float valueOf = Float.valueOf(pointF.x);
        Float valueOf2 = Float.valueOf(pointF.y);
        PointF pointF2 = this.a;
        Float valueOf3 = Float.valueOf(pointF2.x);
        Float valueOf4 = Float.valueOf(pointF2.y);
        PointF pointF3 = this.f16661b;
        return String.format("v=%.2f,%.2f cp1=%.2f,%.2f cp2=%.2f,%.2f", valueOf, valueOf2, valueOf3, valueOf4, Float.valueOf(pointF3.x), Float.valueOf(pointF3.y));
    }

    public a(PointF pointF, PointF pointF2, PointF pointF3) {
        this.a = pointF;
        this.f16661b = pointF2;
        this.f16662c = pointF3;
    }
}
