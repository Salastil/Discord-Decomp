package io.sentry;

/* loaded from: classes3.dex */
public final class h4 {

    /* renamed from: d, reason: collision with root package name */
    public static final h4 f11586d = new h4();
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public Boolean f11587b;

    /* renamed from: c, reason: collision with root package name */
    public final io.sentry.util.a f11588c = new io.sentry.util.a();

    public final void a(boolean z5) {
        r a = this.f11588c.a();
        try {
            if (!this.a) {
                this.f11587b = Boolean.valueOf(z5);
                this.a = true;
            }
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
