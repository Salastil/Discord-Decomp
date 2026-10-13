package f4;

import java.util.ArrayDeque;
import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final class l implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8346d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8347e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayDeque f8348i;

    /* renamed from: v, reason: collision with root package name */
    public Runnable f8349v;

    /* renamed from: w, reason: collision with root package name */
    public final Executor f8350w;

    public l(Executor executor) {
        this.f8346d = 0;
        this.f8350w = executor;
        this.f8348i = new ArrayDeque();
        this.f8347e = new Object();
    }

    public final void a() {
        switch (this.f8346d) {
            case 0:
                Runnable runnable = (Runnable) this.f8348i.poll();
                this.f8349v = runnable;
                if (runnable != null) {
                    this.f8350w.execute(runnable);
                    return;
                }
                return;
            default:
                synchronized (this.f8347e) {
                    try {
                        Runnable runnable2 = (Runnable) this.f8348i.poll();
                        this.f8349v = runnable2;
                        if (runnable2 != null) {
                            ((n) this.f8350w).execute(runnable2);
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return;
        }
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f8346d) {
            case 0:
                synchronized (this.f8347e) {
                    try {
                        this.f8348i.add(new ii.o(10, this, runnable));
                        if (this.f8349v == null) {
                            a();
                        }
                    } finally {
                    }
                }
                return;
            default:
                synchronized (this.f8347e) {
                    try {
                        this.f8348i.add(new com.mkuczera.haptic.a(7, this, runnable));
                        if (this.f8349v == null) {
                            a();
                        }
                    } finally {
                    }
                }
                return;
        }
    }

    public l(n nVar) {
        this.f8346d = 1;
        this.f8347e = new Object();
        this.f8348i = new ArrayDeque();
        this.f8350w = nVar;
    }
}
