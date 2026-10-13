package g4;

import com.google.common.util.concurrent.ListenableFuture;

/* loaded from: classes.dex */
public final class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final j f9102d;

    /* renamed from: e, reason: collision with root package name */
    public final ListenableFuture f9103e;

    public e(j jVar, ListenableFuture listenableFuture) {
        this.f9102d = jVar;
        this.f9103e = listenableFuture;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.f9102d.f9110d != this) {
            return;
        }
        if (h.f9108x.n(this.f9102d, this, h.g(this.f9103e))) {
            h.d(this.f9102d);
        }
    }
}
