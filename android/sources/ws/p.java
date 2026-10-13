package ws;

import com.facebook.react.uimanager.events.PointerEventHelper;
import java.io.Closeable;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.Socket;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class p implements Closeable {
    public static final a0 W;
    public final ss.b E;
    public final ss.b F;
    public final ss.b G;
    public final z H;
    public long I;
    public long J;
    public long K;
    public long L;
    public final a0 M;
    public a0 N;
    public long O;
    public long P;
    public long Q;
    public long R;
    public final Socket S;
    public final x T;
    public final bs.q U;
    public final LinkedHashSet V;

    /* renamed from: d, reason: collision with root package name */
    public final i f20113d;

    /* renamed from: e, reason: collision with root package name */
    public final LinkedHashMap f20114e;

    /* renamed from: i, reason: collision with root package name */
    public final String f20115i;

    /* renamed from: v, reason: collision with root package name */
    public int f20116v;

    /* renamed from: w, reason: collision with root package name */
    public int f20117w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f20118x;

    /* renamed from: y, reason: collision with root package name */
    public final ss.c f20119y;

    static {
        a0 a0Var = new a0();
        a0Var.c(7, 65535);
        a0Var.c(5, 16384);
        W = a0Var;
    }

    public p(androidx.appcompat.widget.w builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        this.f20113d = (i) builder.f1146x;
        this.f20114e = new LinkedHashMap();
        String str = (String) builder.f1143i;
        et.r rVar = null;
        if (str == null) {
            Intrinsics.throwUninitializedPropertyAccessException("connectionName");
            str = null;
        }
        this.f20115i = str;
        this.f20117w = 3;
        ss.c cVar = (ss.c) builder.f1141d;
        this.f20119y = cVar;
        this.E = cVar.e();
        this.F = cVar.e();
        this.G = cVar.e();
        this.H = z.a;
        a0 a0Var = new a0();
        a0Var.c(7, PointerEventHelper.X_FLAG_SUPPORTS_HOVER);
        this.M = a0Var;
        this.N = W;
        this.R = r0.a();
        Socket socket = (Socket) builder.f1142e;
        if (socket == null) {
            Intrinsics.throwUninitializedPropertyAccessException("socket");
            socket = null;
        }
        this.S = socket;
        et.q qVar = (et.q) builder.f1145w;
        if (qVar == null) {
            Intrinsics.throwUninitializedPropertyAccessException("sink");
            qVar = null;
        }
        this.T = new x(qVar);
        et.r rVar2 = (et.r) builder.f1144v;
        if (rVar2 != null) {
            rVar = rVar2;
        } else {
            Intrinsics.throwUninitializedPropertyAccessException("source");
        }
        this.U = new bs.q(this, new t(rVar));
        this.V = new LinkedHashSet();
    }

    public final void c(b connectionCode, b streamCode, IOException iOException) {
        int i5;
        Object[] objArr;
        Intrinsics.checkNotNullParameter(connectionCode, "connectionCode");
        Intrinsics.checkNotNullParameter(streamCode, "streamCode");
        byte[] bArr = qs.b.a;
        try {
            l(connectionCode);
        } catch (IOException unused) {
        }
        synchronized (this) {
            try {
                if (this.f20114e.isEmpty()) {
                    objArr = null;
                } else {
                    objArr = this.f20114e.values().toArray(new w[0]);
                    if (objArr == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
                    }
                    this.f20114e.clear();
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        w[] wVarArr = (w[]) objArr;
        if (wVarArr != null) {
            for (w wVar : wVarArr) {
                try {
                    wVar.c(streamCode, iOException);
                } catch (IOException unused2) {
                }
            }
        }
        try {
            this.T.close();
        } catch (IOException unused3) {
        }
        try {
            this.S.close();
        } catch (IOException unused4) {
        }
        this.E.f();
        this.F.f();
        this.G.f();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        c(b.NO_ERROR, b.CANCEL, null);
    }

    public final void f(IOException iOException) {
        b bVar = b.PROTOCOL_ERROR;
        c(bVar, bVar, iOException);
    }

    public final void flush() {
        this.T.flush();
    }

    public final synchronized w g(int i5) {
        return (w) this.f20114e.get(Integer.valueOf(i5));
    }

    public final synchronized w i(int i5) {
        w wVar;
        wVar = (w) this.f20114e.remove(Integer.valueOf(i5));
        notifyAll();
        return wVar;
    }

    public final void l(b statusCode) {
        Intrinsics.checkNotNullParameter(statusCode, "statusCode");
        synchronized (this.T) {
            Ref.IntRef intRef = new Ref.IntRef();
            synchronized (this) {
                if (this.f20118x) {
                    return;
                }
                this.f20118x = true;
                int i5 = this.f20116v;
                intRef.element = i5;
                Unit unit = Unit.a;
                this.T.i(i5, statusCode, qs.b.a);
            }
        }
    }

    public final synchronized void o(long j) {
        long j5 = this.O + j;
        this.O = j5;
        long j7 = j5 - this.P;
        if (j7 >= this.M.a() / 2) {
            t(0, j7);
            this.P += j7;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0035, code lost:
    
        r2 = java.lang.Math.min((int) java.lang.Math.min(r12, r6 - r4), r8.T.f20161i);
        r6 = r2;
        r8.Q += r6;
        r4 = kotlin.Unit.a;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void q(int i5, boolean z5, Buffer buffer, long j) {
        int min;
        long j5;
        if (j == 0) {
            this.T.f(z5, i5, buffer, 0);
            return;
        }
        while (j > 0) {
            synchronized (this) {
                while (true) {
                    try {
                        try {
                            long j7 = this.Q;
                            long j10 = this.R;
                            if (j7 < j10) {
                                break;
                            } else {
                                if (!this.f20114e.containsKey(Integer.valueOf(i5))) {
                                    throw new IOException("stream closed");
                                }
                                wait();
                            }
                        } catch (InterruptedException unused) {
                            Thread.currentThread().interrupt();
                            throw new InterruptedIOException();
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
            }
            j -= j5;
            this.T.f(z5 && j == 0, i5, buffer, min);
        }
    }

    public final void r(int i5, b errorCode) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        this.E.c(new n(this.f20115i + '[' + i5 + "] writeSynReset", this, i5, errorCode, 1), 0L);
    }

    public final void t(int i5, long j) {
        this.E.c(new o(this.f20115i + '[' + i5 + "] windowUpdate", this, i5, j), 0L);
    }
}
