package th;

import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.locks.ReentrantLock;

/* loaded from: classes3.dex */
public final class n0 {
    public static final a5.m k = new a5.m("ExtractorLooper", 3);
    public final v0 a;

    /* renamed from: b, reason: collision with root package name */
    public final e0 f18519b;

    /* renamed from: c, reason: collision with root package name */
    public final q1 f18520c;

    /* renamed from: d, reason: collision with root package name */
    public final b1 f18521d;

    /* renamed from: e, reason: collision with root package name */
    public final d1 f18522e;

    /* renamed from: f, reason: collision with root package name */
    public final k1 f18523f;

    /* renamed from: g, reason: collision with root package name */
    public final m1 f18524g;

    /* renamed from: h, reason: collision with root package name */
    public final w0 f18525h;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicBoolean f18526i = new AtomicBoolean(false);
    public final uh.f j;

    public n0(v0 v0Var, uh.f fVar, e0 e0Var, q1 q1Var, b1 b1Var, d1 d1Var, k1 k1Var, m1 m1Var, w0 w0Var) {
        this.a = v0Var;
        this.j = fVar;
        this.f18519b = e0Var;
        this.f18520c = q1Var;
        this.f18521d = b1Var;
        this.f18522e = d1Var;
        this.f18523f = k1Var;
        this.f18524g = m1Var;
        this.f18525h = w0Var;
    }

    public final void a() {
        ij.j jVar;
        uh.f fVar = this.j;
        a5.m mVar = k;
        mVar.a("Run extractor loop", new Object[0]);
        AtomicBoolean atomicBoolean = this.f18526i;
        if (!atomicBoolean.compareAndSet(false, true)) {
            mVar.g("runLoop already looping; return", new Object[0]);
            return;
        }
        while (true) {
            try {
                jVar = this.f18525h.a();
            } catch (l0 e9) {
                mVar.b("Error while getting next extraction task: %s", e9.getMessage());
                int i5 = e9.f18498d;
                if (i5 >= 0) {
                    ((u1) fVar.a()).b(i5);
                    b(i5, e9);
                }
                jVar = null;
            }
            if (jVar == null) {
                atomicBoolean.set(false);
                return;
            }
            try {
                if (jVar instanceof d0) {
                    this.f18519b.a((d0) jVar);
                } else if (jVar instanceof p1) {
                    this.f18520c.a((p1) jVar);
                } else if (jVar instanceof a1) {
                    this.f18521d.a((a1) jVar);
                } else if (jVar instanceof c1) {
                    this.f18522e.a((c1) jVar);
                } else if (jVar instanceof j1) {
                    this.f18523f.a((j1) jVar);
                } else if (jVar instanceof l1) {
                    this.f18524g.a((l1) jVar);
                } else {
                    mVar.b("Unknown task type: %s", jVar.getClass().getName());
                }
            } catch (Exception e10) {
                mVar.b("Error during extraction task: %s", e10.getMessage());
                ((u1) fVar.a()).b(jVar.a);
                b(jVar.a, e10);
            }
        }
    }

    public final void b(int i5, Exception exc) {
        v0 v0Var = this.a;
        try {
            ReentrantLock reentrantLock = v0Var.f18601d;
            try {
                reentrantLock.lock();
                v0Var.a(i5).f18571c.f18561d = 5;
                reentrantLock.unlock();
                v0Var.b(new a5.a0(i5, 17, v0Var));
            } catch (Throwable th2) {
                reentrantLock.unlock();
                throw th2;
            }
        } catch (l0 unused) {
            k.b("Error during error handling: %s", exc.getMessage());
        }
    }
}
