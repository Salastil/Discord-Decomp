package ie;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import java.io.IOException;
import java.util.concurrent.ExecutorService;

/* loaded from: classes3.dex */
public final class g0 extends Handler implements Runnable {
    public boolean E;
    public volatile boolean F;
    public final /* synthetic */ k0 G;

    /* renamed from: d, reason: collision with root package name */
    public final int f10667d;

    /* renamed from: e, reason: collision with root package name */
    public final h0 f10668e;

    /* renamed from: i, reason: collision with root package name */
    public final long f10669i;

    /* renamed from: v, reason: collision with root package name */
    public f0 f10670v;

    /* renamed from: w, reason: collision with root package name */
    public IOException f10671w;

    /* renamed from: x, reason: collision with root package name */
    public int f10672x;

    /* renamed from: y, reason: collision with root package name */
    public Thread f10673y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g0(k0 k0Var, Looper looper, h0 h0Var, f0 f0Var, int i5, long j) {
        super(looper);
        this.G = k0Var;
        this.f10668e = h0Var;
        this.f10670v = f0Var;
        this.f10667d = i5;
        this.f10669i = j;
    }

    public final void a(boolean z5) {
        this.F = z5;
        this.f10671w = null;
        if (hasMessages(0)) {
            this.E = true;
            removeMessages(0);
            if (!z5) {
                sendEmptyMessage(1);
            }
        } else {
            synchronized (this) {
                try {
                    this.E = true;
                    this.f10668e.z();
                    Thread thread = this.f10673y;
                    if (thread != null) {
                        thread.interrupt();
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        if (z5) {
            this.G.f10685e = null;
            long elapsedRealtime = SystemClock.elapsedRealtime();
            f0 f0Var = this.f10670v;
            f0Var.getClass();
            f0Var.z(this.f10668e, elapsedRealtime, elapsedRealtime - this.f10669i, true);
            this.f10670v = null;
        }
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        if (this.F) {
            return;
        }
        int i5 = message.what;
        if (i5 == 0) {
            this.f10671w = null;
            k0 k0Var = this.G;
            ExecutorService executorService = k0Var.f10684d;
            g0 g0Var = k0Var.f10685e;
            g0Var.getClass();
            executorService.execute(g0Var);
            return;
        }
        if (i5 == 3) {
            throw ((Error) message.obj);
        }
        this.G.f10685e = null;
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long j = elapsedRealtime - this.f10669i;
        f0 f0Var = this.f10670v;
        f0Var.getClass();
        if (this.E) {
            f0Var.z(this.f10668e, elapsedRealtime, j, false);
            return;
        }
        int i6 = message.what;
        if (i6 == 1) {
            try {
                f0Var.v(this.f10668e, elapsedRealtime, j);
                return;
            } catch (RuntimeException e9) {
                ke.b.s("LoadTask", "Unexpected exception handling load completed", e9);
                this.G.f10686i = new j0(e9);
                return;
            }
        }
        if (i6 != 2) {
            return;
        }
        IOException iOException = (IOException) message.obj;
        this.f10671w = iOException;
        int i10 = this.f10672x + 1;
        this.f10672x = i10;
        bd.f l6 = f0Var.l(this.f10668e, elapsedRealtime, j, iOException, i10);
        int i11 = l6.a;
        if (i11 == 3) {
            this.G.f10686i = this.f10671w;
            return;
        }
        if (i11 != 2) {
            if (i11 == 1) {
                this.f10672x = 1;
            }
            long j5 = l6.f2806b;
            if (j5 == -9223372036854775807L) {
                j5 = Math.min((this.f10672x - 1) * 1000, 5000);
            }
            k0 k0Var2 = this.G;
            ke.b.k(k0Var2.f10685e == null);
            k0Var2.f10685e = this;
            if (j5 > 0) {
                sendEmptyMessageDelayed(0, j5);
            } else {
                this.f10671w = null;
                k0Var2.f10684d.execute(this);
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z5;
        try {
            synchronized (this) {
                z5 = this.E;
                this.f10673y = Thread.currentThread();
            }
            if (!z5) {
                ke.b.c("load:".concat(this.f10668e.getClass().getSimpleName()));
                try {
                    this.f10668e.n();
                    ke.b.t();
                } catch (Throwable th2) {
                    ke.b.t();
                    throw th2;
                }
            }
            synchronized (this) {
                this.f10673y = null;
                Thread.interrupted();
            }
            if (this.F) {
                return;
            }
            sendEmptyMessage(1);
        } catch (IOException e9) {
            if (this.F) {
                return;
            }
            obtainMessage(2, e9).sendToTarget();
        } catch (Exception e10) {
            if (this.F) {
                return;
            }
            ke.b.s("LoadTask", "Unexpected exception loading stream", e10);
            obtainMessage(2, new j0(e10)).sendToTarget();
        } catch (OutOfMemoryError e11) {
            if (this.F) {
                return;
            }
            ke.b.s("LoadTask", "OutOfMemory error loading stream", e11);
            obtainMessage(2, new j0(e11)).sendToTarget();
        } catch (Error e12) {
            if (!this.F) {
                ke.b.s("LoadTask", "Unexpected error loading stream", e12);
                obtainMessage(3, e12).sendToTarget();
            }
            throw e12;
        }
    }
}
