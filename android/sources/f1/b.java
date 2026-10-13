package f1;

import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class b {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public bc.a f8306b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f8307c;

    public final void a() {
        synchronized (this) {
            try {
                if (this.a) {
                    return;
                }
                this.a = true;
                this.f8307c = true;
                bc.a aVar = this.f8306b;
                if (aVar != null) {
                    try {
                        Runnable runnable = (Runnable) aVar.f2769e;
                        Transition transition = (Transition) aVar.f2770i;
                        Runnable runnable2 = (Runnable) aVar.f2771v;
                        if (runnable == null) {
                            transition.cancel();
                            runnable2.run();
                        } else {
                            runnable.run();
                        }
                    } catch (Throwable th2) {
                        synchronized (this) {
                            this.f8307c = false;
                            notifyAll();
                            throw th2;
                        }
                    }
                }
                synchronized (this) {
                    this.f8307c = false;
                    notifyAll();
                }
            } finally {
            }
        }
    }
}
