package v3;

import android.content.Context;
import androidx.work.WorkerParameters;
import com.google.common.util.concurrent.ListenableFuture;

/* loaded from: classes.dex */
public abstract class o {

    /* renamed from: d, reason: collision with root package name */
    public final Context f19206d;

    /* renamed from: e, reason: collision with root package name */
    public final WorkerParameters f19207e;

    /* renamed from: i, reason: collision with root package name */
    public volatile int f19208i = -256;

    /* renamed from: v, reason: collision with root package name */
    public boolean f19209v;

    public o(Context context, WorkerParameters workerParameters) {
        if (context == null) {
            throw new IllegalArgumentException("Application Context is null");
        }
        if (workerParameters == null) {
            throw new IllegalArgumentException("WorkerParameters is null");
        }
        this.f19206d = context;
        this.f19207e = workerParameters;
    }

    public ListenableFuture a() {
        g4.j jVar = new g4.j();
        jVar.k(new IllegalStateException("Expedited WorkRequests require a ListenableWorker to provide an implementation for `getForegroundInfoAsync()`"));
        return jVar;
    }

    public abstract g4.j d();

    public final void e(int i5) {
        this.f19208i = i5;
        c();
    }

    public void c() {
    }
}
