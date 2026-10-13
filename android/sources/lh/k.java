package lh;

import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class k extends io.sentry.config.a {
    @Override // io.sentry.config.a
    public final void q(v vVar, float f2, float f10) {
        float f11 = f10 * f2;
        vVar.d(f11, 180.0f, 90.0f);
        float f12 = f11 * 2.0f;
        r rVar = new r(0.0f, 0.0f, f12, f12);
        rVar.f14036f = 180.0f;
        rVar.f14037g = 90.0f;
        ((ArrayList) vVar.f14045f).add(rVar);
        p pVar = new p(rVar);
        vVar.a(180.0f);
        ((ArrayList) vVar.f14046g).add(pVar);
        vVar.f14043d = 270.0f;
        float f13 = (0.0f + f12) * 0.5f;
        float f14 = (f12 - 0.0f) / 2.0f;
        double d6 = 270.0f;
        vVar.f14041b = (((float) Math.cos(Math.toRadians(d6))) * f14) + f13;
        vVar.f14042c = (f14 * ((float) Math.sin(Math.toRadians(d6)))) + f13;
    }
}
