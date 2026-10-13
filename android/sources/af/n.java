package af;

import android.os.Handler;
import java.util.concurrent.Executor;
import java.util.concurrent.RejectedExecutionException;

/* loaded from: classes3.dex */
public final /* synthetic */ class n implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f577d;

    /* renamed from: e, reason: collision with root package name */
    public final Handler f578e;

    public /* synthetic */ n(Handler handler, int i5) {
        this.f577d = i5;
        this.f578e = handler;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f577d) {
            case 0:
                this.f578e.post(runnable);
                return;
            case 1:
                this.f578e.post(runnable);
                return;
            default:
                runnable.getClass();
                Handler handler = this.f578e;
                if (handler.post(runnable)) {
                    return;
                }
                throw new RejectedExecutionException(handler + " is shutting down");
        }
    }
}
