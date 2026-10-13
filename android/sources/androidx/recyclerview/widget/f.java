package androidx.recyclerview.widget;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;

/* loaded from: classes.dex */
public final class f implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final Handler f2390d = new Handler(Looper.getMainLooper());

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        this.f2390d.post(runnable);
    }
}
