package io.sentry;

/* loaded from: classes3.dex */
public final class a6 implements b0 {

    /* renamed from: d, reason: collision with root package name */
    public final String f11014d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11015e;

    public a6() {
        String property = System.getProperty("java.version");
        String property2 = System.getProperty("java.vendor");
        this.f11014d = property;
        this.f11015e = property2;
    }

    public final void a(f4 f4Var) {
        io.sentry.protocol.c cVar = f4Var.f11544e;
        if (cVar.h() == null) {
            cVar.u(new io.sentry.protocol.x());
        }
        io.sentry.protocol.x h6 = cVar.h();
        if (h6 != null && h6.f11900d == null && h6.f11901e == null) {
            h6.f11900d = this.f11015e;
            h6.f11901e = this.f11014d;
        }
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        a(sentryEvent);
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        a(d0Var);
        return d0Var;
    }
}
