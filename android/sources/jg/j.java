package jg;

import com.google.android.gms.internal.play_billing.v0;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import ii.o;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class j implements k, d, c, b {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12763d;

    /* renamed from: e, reason: collision with root package name */
    public final Executor f12764e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f12765i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f12766v;

    public j(Executor executor, OnCompleteListener onCompleteListener) {
        this.f12763d = 1;
        this.f12765i = new Object();
        this.f12764e = executor;
        this.f12766v = onCompleteListener;
    }

    @Override // jg.b
    public void E() {
        ((l) this.f12766v).r();
    }

    @Override // jg.k
    public final void a(Task task) {
        switch (this.f12763d) {
            case 0:
                if (task.k()) {
                    synchronized (this.f12765i) {
                    }
                    this.f12764e.execute(new a3.h(25, this));
                    return;
                }
                return;
            case 1:
                synchronized (this.f12765i) {
                    try {
                        if (((OnCompleteListener) this.f12766v) == null) {
                            return;
                        }
                        this.f12764e.execute(new o(this, task, 14, false));
                        return;
                    } finally {
                    }
                }
            case 2:
                if (task.m() || task.k()) {
                    return;
                }
                synchronized (this.f12765i) {
                }
                this.f12764e.execute(new v0(this, task, 15, false));
                return;
            case 3:
                if (task.m()) {
                    synchronized (this.f12765i) {
                    }
                    this.f12764e.execute(new o(this, task, 15, false));
                    return;
                }
                return;
            default:
                this.f12764e.execute(new v0(this, task, 16, false));
                return;
        }
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        ((l) this.f12766v).p(exc);
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        ((l) this.f12766v).q(obj);
    }

    public j(Executor executor, b bVar) {
        this.f12763d = 0;
        this.f12765i = new Object();
        this.f12764e = executor;
        this.f12766v = bVar;
    }

    public j(Executor executor, c cVar) {
        this.f12763d = 2;
        this.f12765i = new Object();
        this.f12764e = executor;
        this.f12766v = cVar;
    }

    public j(Executor executor, d dVar) {
        this.f12763d = 3;
        this.f12765i = new Object();
        this.f12764e = executor;
        this.f12766v = dVar;
    }

    public j(Executor executor, f fVar, l lVar) {
        this.f12763d = 4;
        this.f12764e = executor;
        this.f12765i = fVar;
        this.f12766v = lVar;
    }
}
