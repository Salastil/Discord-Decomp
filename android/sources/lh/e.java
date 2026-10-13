package lh;

/* loaded from: classes3.dex */
public final class e extends io.sentry.config.a {
    @Override // io.sentry.config.a
    public final void q(v vVar, float f2, float f10) {
        float f11 = f10 * f2;
        vVar.d(f11, 180.0f, 90.0f);
        double d6 = f11;
        vVar.c((float) (Math.sin(Math.toRadians(90.0f)) * d6), (float) (Math.sin(Math.toRadians(0.0f)) * d6));
    }
}
