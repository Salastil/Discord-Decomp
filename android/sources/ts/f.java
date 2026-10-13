package ts;

import java.io.IOException;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.OkHttpClient;
import ys.n;

/* loaded from: classes3.dex */
public final class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final ps.h f18723d;

    /* renamed from: e, reason: collision with root package name */
    public volatile AtomicInteger f18724e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f18725i;

    public f(h this$0, ps.h responseCallback) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(responseCallback, "responseCallback");
        this.f18725i = this$0;
        this.f18723d = responseCallback;
        this.f18724e = new AtomicInteger(0);
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z5;
        Throwable th2;
        IOException e9;
        OkHttpClient okHttpClient;
        String stringPlus = Intrinsics.stringPlus("OkHttp ", this.f18725i.f18727e.a.f());
        h hVar = this.f18725i;
        Thread currentThread = Thread.currentThread();
        String name = currentThread.getName();
        currentThread.setName(stringPlus);
        try {
            hVar.f18730w.i();
            try {
                try {
                    z5 = true;
                    try {
                        this.f18723d.onResponse(hVar, hVar.g());
                        okHttpClient = hVar.f18726d;
                    } catch (IOException e10) {
                        e9 = e10;
                        if (z5) {
                            n nVar = n.a;
                            n nVar2 = n.a;
                            String stringPlus2 = Intrinsics.stringPlus("Callback failure for ", h.a(hVar));
                            nVar2.getClass();
                            n.i(4, stringPlus2, e9);
                        } else {
                            this.f18723d.onFailure(hVar, e9);
                        }
                        okHttpClient = hVar.f18726d;
                        okHttpClient.f16046d.d(this);
                    } catch (Throwable th3) {
                        th2 = th3;
                        hVar.cancel();
                        if (!z5) {
                            IOException iOException = new IOException(Intrinsics.stringPlus("canceled due to ", th2));
                            fo.f.a(iOException, th2);
                            this.f18723d.onFailure(hVar, iOException);
                        }
                        throw th2;
                    }
                } catch (Throwable th4) {
                    hVar.f18726d.f16046d.d(this);
                    throw th4;
                }
            } catch (IOException e11) {
                z5 = false;
                e9 = e11;
            } catch (Throwable th5) {
                z5 = false;
                th2 = th5;
            }
            okHttpClient.f16046d.d(this);
        } finally {
            currentThread.setName(name);
        }
    }
}
