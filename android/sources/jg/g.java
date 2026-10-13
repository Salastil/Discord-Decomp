package jg;

import bf.t;

/* loaded from: classes3.dex */
public class g {
    public final l a = new l();

    public final void a(Exception exc) {
        this.a.p(exc);
    }

    public final void b(Object obj) {
        this.a.q(obj);
    }

    public final boolean c(Exception exc) {
        l lVar = this.a;
        lVar.getClass();
        t.h(exc, "Exception must not be null");
        synchronized (lVar.a) {
            try {
                if (lVar.f12768c) {
                    return false;
                }
                lVar.f12768c = true;
                lVar.f12771f = exc;
                lVar.f12767b.f(lVar);
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void d(Object obj) {
        l lVar = this.a;
        synchronized (lVar.a) {
            try {
                if (lVar.f12768c) {
                    return;
                }
                lVar.f12768c = true;
                lVar.f12770e = obj;
                lVar.f12767b.f(lVar);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
