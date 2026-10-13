package io.sentry;

/* loaded from: classes3.dex */
public final class s implements y0 {
    public static final ThreadLocal a = new ThreadLocal();

    @Override // io.sentry.y0
    public final b1 a(x0 x0Var) {
        x0 x0Var2 = get();
        a.set(x0Var);
        return new r(0, x0Var2);
    }

    @Override // io.sentry.y0
    public final void close() {
        a.remove();
    }

    @Override // io.sentry.y0
    public final x0 get() {
        return (x0) a.get();
    }
}
