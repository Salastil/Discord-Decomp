package androidx.work;

import android.content.Context;
import androidx.annotation.NonNull;
import com.google.common.util.concurrent.ListenableFuture;
import g4.j;
import sg.d;
import v3.g;
import v3.n;
import v3.o;

/* loaded from: classes.dex */
public abstract class Worker extends o {

    /* renamed from: w, reason: collision with root package name */
    public j f2564w;

    public Worker(@NonNull Context context, @NonNull WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    @Override // v3.o
    public final ListenableFuture a() {
        j jVar = new j();
        this.f19207e.f2566c.execute(new ii.o(this, jVar, 22, false));
        return jVar;
    }

    @Override // v3.o
    public final j d() {
        this.f2564w = new j();
        this.f19207e.f2566c.execute(new d(3, this));
        return this.f2564w;
    }

    public abstract n f();

    public g g() {
        throw new IllegalStateException("Expedited WorkRequests require a Worker to provide an implementation for \n `getForegroundInfo()`");
    }
}
