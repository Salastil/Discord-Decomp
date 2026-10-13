package l4;

import android.util.Log;
import java.lang.Thread;
import java.util.concurrent.Callable;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes.dex */
public final class b0 extends FutureTask {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13706d = 0;

    /* renamed from: e, reason: collision with root package name */
    public Object f13707e;

    public /* synthetic */ b0(Callable callable) {
        super(callable);
    }

    @Override // java.util.concurrent.FutureTask
    public void done() {
        switch (this.f13706d) {
            case 0:
                try {
                    if (!isCancelled()) {
                        try {
                            ((c0) this.f13707e).d((a0) get());
                        } catch (InterruptedException | ExecutionException e9) {
                            ((c0) this.f13707e).d(new a0(e9));
                        }
                    }
                    return;
                } finally {
                    this.f13707e = null;
                }
            case 1:
            default:
                super.done();
                return;
            case 2:
                w2.a aVar = (w2.a) this.f13707e;
                AtomicBoolean atomicBoolean = aVar.f19624v;
                try {
                    Object obj = get();
                    if (atomicBoolean.get()) {
                        return;
                    }
                    aVar.a(obj);
                    return;
                } catch (InterruptedException e10) {
                    Log.w("AsyncTask", e10);
                    return;
                } catch (CancellationException unused) {
                    if (atomicBoolean.get()) {
                        return;
                    }
                    aVar.a(null);
                    return;
                } catch (ExecutionException e11) {
                    throw new RuntimeException("An error occurred while executing doInBackground()", e11.getCause());
                } catch (Throwable th2) {
                    throw new RuntimeException("An error occurred while executing doInBackground()", th2);
                }
        }
    }

    @Override // java.util.concurrent.FutureTask
    public void setException(Throwable th2) {
        switch (this.f13706d) {
            case 1:
                Thread.UncaughtExceptionHandler uncaughtExceptionHandler = ((qe.f) this.f13707e).f16881d.f16885d;
                if (uncaughtExceptionHandler != null) {
                    uncaughtExceptionHandler.uncaughtException(Thread.currentThread(), th2);
                } else if (Log.isLoggable("GAv4", 6)) {
                    String valueOf = String.valueOf(th2);
                    StringBuilder sb2 = new StringBuilder(valueOf.length() + 37);
                    sb2.append("MeasurementExecutor: job failed with ");
                    sb2.append(valueOf);
                    Log.e("GAv4", sb2.toString());
                }
                super.setException(th2);
                break;
            default:
                super.setException(th2);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(qe.f fVar, Runnable runnable, Object obj) {
        super(runnable, obj);
        this.f13707e = fVar;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(w2.a aVar, a5.u uVar) {
        super(uVar);
        this.f13707e = aVar;
    }
}
