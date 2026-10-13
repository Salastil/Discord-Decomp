package io.sentry;

/* loaded from: classes3.dex */
public final class e4 implements j4 {
    public final j4 a;

    public e4() {
        if (io.sentry.util.h.a || !io.sentry.util.h.f12041b) {
            this.a = new t4(1);
        } else {
            this.a = new t4(0);
        }
    }

    @Override // io.sentry.j4
    public final i4 now() {
        return this.a.now();
    }
}
