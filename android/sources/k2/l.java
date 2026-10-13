package k2;

import java.util.concurrent.ThreadPoolExecutor;

/* loaded from: classes.dex */
public final class l extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ w3.q f13134d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ThreadPoolExecutor f13135e;

    public l(w3.q qVar, ThreadPoolExecutor threadPoolExecutor) {
        this.f13134d = qVar;
        this.f13135e = threadPoolExecutor;
    }

    @Override // w3.q
    public final void s(Throwable th2) {
        ThreadPoolExecutor threadPoolExecutor = this.f13135e;
        try {
            this.f13134d.s(th2);
        } finally {
            threadPoolExecutor.shutdown();
        }
    }

    @Override // w3.q
    public final void t(e4.i iVar) {
        ThreadPoolExecutor threadPoolExecutor = this.f13135e;
        try {
            this.f13134d.t(iVar);
        } finally {
            threadPoolExecutor.shutdown();
        }
    }
}
