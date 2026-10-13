package i1;

import java.util.concurrent.ThreadFactory;

/* loaded from: classes.dex */
public final class i implements ThreadFactory {
    public final /* synthetic */ int a;

    @Override // java.util.concurrent.ThreadFactory
    public final Thread newThread(Runnable runnable) {
        switch (this.a) {
            case 0:
                return new h(runnable);
            case 1:
                return new Thread(runnable, "UpdateListenerExecutor");
            default:
                return new Thread(runnable, "AssetPackBackgroundExecutor");
        }
    }
}
