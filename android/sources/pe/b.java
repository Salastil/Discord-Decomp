package pe;

import java.lang.ref.WeakReference;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class b extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f16386d;

    /* renamed from: e, reason: collision with root package name */
    public final long f16387e;

    /* renamed from: i, reason: collision with root package name */
    public final CountDownLatch f16388i = new CountDownLatch(1);

    /* renamed from: v, reason: collision with root package name */
    public boolean f16389v = false;

    public b(a aVar, long j) {
        this.f16386d = new WeakReference(aVar);
        this.f16387e = j;
        start();
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        a aVar;
        WeakReference weakReference = this.f16386d;
        try {
            if (this.f16388i.await(this.f16387e, TimeUnit.MILLISECONDS) || (aVar = (a) weakReference.get()) == null) {
                return;
            }
            aVar.b();
            this.f16389v = true;
        } catch (InterruptedException unused) {
            a aVar2 = (a) weakReference.get();
            if (aVar2 != null) {
                aVar2.b();
                this.f16389v = true;
            }
        }
    }
}
