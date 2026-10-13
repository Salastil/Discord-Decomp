package f4;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final class n implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8355d;

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        switch (this.f8355d) {
            case 0:
                runnable.run();
                break;
            case 1:
                new Thread(runnable).start();
                break;
            case 2:
                new Handler(Looper.getMainLooper()).post(runnable);
                break;
            case 3:
                runnable.run();
                break;
            default:
                runnable.run();
                break;
        }
    }
}
