package io.sentry;

/* loaded from: classes3.dex */
public final class t2 implements ISpan {
    public static final t2 a = new t2();

    @Override // io.sentry.ISpan
    public final l6 a() {
        return null;
    }

    @Override // io.sentry.ISpan
    public final ISpan c(String str, i4 i4Var, k1 k1Var) {
        return a;
    }

    @Override // io.sentry.ISpan
    public final void f(l6 l6Var) {
    }

    @Override // io.sentry.ISpan
    public final void g() {
    }

    @Override // io.sentry.ISpan
    public final String getDescription() {
        return null;
    }

    @Override // io.sentry.ISpan
    public final boolean isFinished() {
        return false;
    }

    @Override // io.sentry.ISpan
    public final void j(String str) {
    }

    @Override // io.sentry.ISpan
    public final ISpan l(String str) {
        return a;
    }

    @Override // io.sentry.ISpan
    public final i6 o() {
        return new i6(io.sentry.protocol.v.f11895e, k6.f11645e, "op", null);
    }

    @Override // io.sentry.ISpan
    public final i4 p() {
        return new d5();
    }

    @Override // io.sentry.ISpan
    public final void q(l6 l6Var, i4 i4Var) {
    }

    @Override // io.sentry.ISpan
    public final i4 s() {
        return new d5();
    }

    @Override // io.sentry.ISpan
    public final void e(Number number, String str) {
    }

    @Override // io.sentry.ISpan
    public final void h(Object obj, String str) {
    }

    @Override // io.sentry.ISpan
    public final void n(String str, Long l6, c2 c2Var) {
    }
}
