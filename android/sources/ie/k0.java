package ie;

import android.os.Looper;
import android.os.SystemClock;
import java.io.IOException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public final class k0 implements l0 {

    /* renamed from: v, reason: collision with root package name */
    public static final bd.f f10681v = new bd.f(0, -9223372036854775807L, false);

    /* renamed from: w, reason: collision with root package name */
    public static final bd.f f10682w = new bd.f(2, -9223372036854775807L, false);

    /* renamed from: x, reason: collision with root package name */
    public static final bd.f f10683x = new bd.f(3, -9223372036854775807L, false);

    /* renamed from: d, reason: collision with root package name */
    public final ExecutorService f10684d;

    /* renamed from: e, reason: collision with root package name */
    public g0 f10685e;

    /* renamed from: i, reason: collision with root package name */
    public IOException f10686i;

    public k0(String str) {
        String concat = "ExoPlayer:Loader:".concat(str);
        int i5 = ke.d0.a;
        this.f10684d = Executors.newSingleThreadExecutor(new k2.a(concat, 1));
    }

    public final void a() {
        g0 g0Var = this.f10685e;
        ke.b.l(g0Var);
        g0Var.a(false);
    }

    @Override // ie.l0
    public final void b() {
        IOException iOException = this.f10686i;
        if (iOException != null) {
            throw iOException;
        }
        g0 g0Var = this.f10685e;
        if (g0Var != null) {
            int i5 = g0Var.f10667d;
            IOException iOException2 = g0Var.f10671w;
            if (iOException2 != null && g0Var.f10672x > i5) {
                throw iOException2;
            }
        }
    }

    public final boolean c() {
        return this.f10686i != null;
    }

    public final boolean d() {
        return this.f10685e != null;
    }

    public final void e(i0 i0Var) {
        g0 g0Var = this.f10685e;
        if (g0Var != null) {
            g0Var.a(true);
        }
        ExecutorService executorService = this.f10684d;
        if (i0Var != null) {
            executorService.execute(new a3.h(20, i0Var));
        }
        executorService.shutdown();
    }

    public final long f(h0 h0Var, f0 f0Var, int i5) {
        Looper myLooper = Looper.myLooper();
        ke.b.l(myLooper);
        this.f10686i = null;
        long elapsedRealtime = SystemClock.elapsedRealtime();
        g0 g0Var = new g0(this, myLooper, h0Var, f0Var, i5, elapsedRealtime);
        ke.b.k(this.f10685e == null);
        this.f10685e = g0Var;
        g0Var.f10671w = null;
        this.f10684d.execute(g0Var);
        return elapsedRealtime;
    }
}
