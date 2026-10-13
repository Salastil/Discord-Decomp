package io.sentry;

/* loaded from: classes3.dex */
public final class m1 implements u0 {
    public final Runtime a = Runtime.getRuntime();

    @Override // io.sentry.u0
    public final void a(a3 a3Var) {
        Runtime runtime = this.a;
        a3Var.f11008b = Long.valueOf(runtime.totalMemory() - runtime.freeMemory());
    }

    @Override // io.sentry.u0
    public final void c() {
    }
}
