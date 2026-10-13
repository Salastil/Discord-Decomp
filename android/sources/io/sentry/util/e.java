package io.sentry.util;

import io.sentry.r;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: b, reason: collision with root package name */
    public final d f12039b;
    public volatile Object a = null;

    /* renamed from: c, reason: collision with root package name */
    public final a f12040c = new a();

    public e(d dVar) {
        this.f12039b = dVar;
    }

    public final Object a() {
        if (this.a == null) {
            r a = this.f12040c.a();
            try {
                if (this.a == null) {
                    this.a = this.f12039b.b();
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
        return this.a;
    }

    public final void b(Object obj) {
        r a = this.f12040c.a();
        try {
            this.a = obj;
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
