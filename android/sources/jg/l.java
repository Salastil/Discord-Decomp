package jg;

import bf.t;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import hc.h0;
import java.io.IOException;
import java.util.concurrent.CancellationException;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class l extends Task {
    public final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public final hc.b f12767b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f12768c;

    /* renamed from: d, reason: collision with root package name */
    public volatile boolean f12769d;

    /* renamed from: e, reason: collision with root package name */
    public Object f12770e;

    /* renamed from: f, reason: collision with root package name */
    public Exception f12771f;

    public l() {
        hc.b bVar = new hc.b();
        bVar.a = new Object();
        this.f12767b = bVar;
    }

    @Override // com.google.android.gms.tasks.Task
    public final void a(Executor executor, b bVar) {
        this.f12767b.e(new j(executor, bVar));
        t();
    }

    @Override // com.google.android.gms.tasks.Task
    public final Task addOnCompleteListener(OnCompleteListener onCompleteListener) {
        this.f12767b.e(new j(h.a, onCompleteListener));
        t();
        return this;
    }

    @Override // com.google.android.gms.tasks.Task
    public final void b(Executor executor, OnCompleteListener onCompleteListener) {
        this.f12767b.e(new j(executor, onCompleteListener));
        t();
    }

    @Override // com.google.android.gms.tasks.Task
    public final l c(Executor executor, c cVar) {
        this.f12767b.e(new j(executor, cVar));
        t();
        return this;
    }

    @Override // com.google.android.gms.tasks.Task
    public final l d(Executor executor, d dVar) {
        this.f12767b.e(new j(executor, dVar));
        t();
        return this;
    }

    @Override // com.google.android.gms.tasks.Task
    public final l e(d dVar) {
        d(h.a, dVar);
        return this;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Task f(Executor executor, a aVar) {
        l lVar = new l();
        this.f12767b.e(new i(executor, aVar, lVar, 0));
        t();
        return lVar;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Task g(Executor executor, a aVar) {
        l lVar = new l();
        this.f12767b.e(new i(executor, aVar, lVar, 1));
        t();
        return lVar;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Exception h() {
        Exception exc;
        synchronized (this.a) {
            exc = this.f12771f;
        }
        return exc;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Object i() {
        Object obj;
        synchronized (this.a) {
            try {
                t.i("Task is not yet complete", this.f12768c);
                if (this.f12769d) {
                    throw new CancellationException("Task is already canceled.");
                }
                Exception exc = this.f12771f;
                if (exc != null) {
                    throw new e(exc);
                }
                obj = this.f12770e;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return obj;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Object j() {
        Object obj;
        synchronized (this.a) {
            try {
                t.i("Task is not yet complete", this.f12768c);
                if (this.f12769d) {
                    throw new CancellationException("Task is already canceled.");
                }
                if (IOException.class.isInstance(this.f12771f)) {
                    throw ((Throwable) IOException.class.cast(this.f12771f));
                }
                Exception exc = this.f12771f;
                if (exc != null) {
                    throw new e(exc);
                }
                obj = this.f12770e;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return obj;
    }

    @Override // com.google.android.gms.tasks.Task
    public final boolean k() {
        return this.f12769d;
    }

    @Override // com.google.android.gms.tasks.Task
    public final boolean l() {
        boolean z5;
        synchronized (this.a) {
            z5 = this.f12768c;
        }
        return z5;
    }

    @Override // com.google.android.gms.tasks.Task
    public final boolean m() {
        boolean z5;
        synchronized (this.a) {
            try {
                z5 = false;
                if (this.f12768c && !this.f12769d && this.f12771f == null) {
                    z5 = true;
                }
            } finally {
            }
        }
        return z5;
    }

    @Override // com.google.android.gms.tasks.Task
    public final Task n(Executor executor, f fVar) {
        l lVar = new l();
        this.f12767b.e(new j(executor, fVar, lVar));
        t();
        return lVar;
    }

    public final l o(c cVar) {
        c(h.a, cVar);
        return this;
    }

    public final void p(Exception exc) {
        t.h(exc, "Exception must not be null");
        synchronized (this.a) {
            s();
            this.f12768c = true;
            this.f12771f = exc;
        }
        this.f12767b.f(this);
    }

    public final void q(Object obj) {
        synchronized (this.a) {
            s();
            this.f12768c = true;
            this.f12770e = obj;
        }
        this.f12767b.f(this);
    }

    public final void r() {
        synchronized (this.a) {
            try {
                if (this.f12768c) {
                    return;
                }
                this.f12768c = true;
                this.f12769d = true;
                this.f12767b.f(this);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void s() {
        if (this.f12768c) {
            int i5 = h0.f9713d;
            if (!l()) {
                throw new IllegalStateException("DuplicateTaskCompletionException can only be created from completed Task.");
            }
            Exception h6 = h();
        }
    }

    public final void t() {
        synchronized (this.a) {
            try {
                if (this.f12768c) {
                    this.f12767b.f(this);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
