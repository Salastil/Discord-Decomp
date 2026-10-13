package j4;

import ai.k;
import com.google.android.gms.internal.play_billing.v0;
import f4.n;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.Callable;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import ve.i;

/* loaded from: classes.dex */
public final class e {

    /* renamed from: g, reason: collision with root package name */
    public static final ExecutorService f12415g;

    /* renamed from: h, reason: collision with root package name */
    public static final h4.a f12416h;

    /* renamed from: i, reason: collision with root package name */
    public static final e f12417i;
    public static final e j;

    /* renamed from: b, reason: collision with root package name */
    public boolean f12418b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f12419c;

    /* renamed from: d, reason: collision with root package name */
    public Object f12420d;

    /* renamed from: e, reason: collision with root package name */
    public Exception f12421e;
    public final Object a = new Object();

    /* renamed from: f, reason: collision with root package name */
    public ArrayList f12422f = new ArrayList();

    static {
        b bVar = b.f12411c;
        f12415g = bVar.a;
        f12416h = bVar.f12412b;
        n nVar = a.f12408b.a;
        new e((Boolean) null);
        f12417i = new e(Boolean.TRUE);
        j = new e(Boolean.FALSE);
        new e(0);
    }

    public e() {
    }

    public static e a(Callable callable, Executor executor) {
        i iVar = new i(20);
        try {
            executor.execute(new v0(13, iVar, callable));
        } catch (Exception e9) {
            iVar.q(new k(e9));
        }
        return (e) iVar.f19405d;
    }

    public static e b(Exception exc) {
        e eVar = new e();
        synchronized (eVar.a) {
            try {
                if (eVar.f12418b) {
                    throw new IllegalStateException("Cannot set the error on a completed task.");
                }
                eVar.f12418b = true;
                eVar.f12421e = exc;
                eVar.a.notifyAll();
                eVar.e();
                return eVar;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final Exception c() {
        Exception exc;
        synchronized (this.a) {
            exc = this.f12421e;
        }
        return exc;
    }

    public final boolean d() {
        boolean z5;
        synchronized (this.a) {
            z5 = c() != null;
        }
        return z5;
    }

    public final void e() {
        synchronized (this.a) {
            Iterator it = this.f12422f.iterator();
            while (it.hasNext()) {
                try {
                    ((c) it.next()).a(this);
                } catch (RuntimeException e9) {
                    throw e9;
                } catch (Exception e10) {
                    throw new RuntimeException(e10);
                }
            }
            this.f12422f = null;
        }
    }

    public final boolean f() {
        synchronized (this.a) {
            try {
                if (this.f12418b) {
                    return false;
                }
                this.f12418b = true;
                this.f12419c = true;
                this.a.notifyAll();
                e();
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean g(Object obj) {
        synchronized (this.a) {
            try {
                if (this.f12418b) {
                    return false;
                }
                this.f12418b = true;
                this.f12420d = obj;
                this.a.notifyAll();
                e();
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public e(Boolean bool) {
        g(bool);
    }

    public e(int i5) {
        f();
    }
}
