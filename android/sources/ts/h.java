package ts;

import et.v;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.lang.ref.Reference;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Unit;
import kotlin.collections.h0;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;
import okhttp3.Dispatcher;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import ps.o;
import ys.n;

/* loaded from: classes3.dex */
public final class h implements Call {
    public e E;
    public k F;
    public boolean G;
    public hc.k H;
    public boolean I;
    public boolean J;
    public boolean K;
    public volatile boolean L;
    public volatile hc.k M;
    public volatile k N;

    /* renamed from: d, reason: collision with root package name */
    public final OkHttpClient f18726d;

    /* renamed from: e, reason: collision with root package name */
    public final Request f18727e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f18728i;

    /* renamed from: v, reason: collision with root package name */
    public final l f18729v;

    /* renamed from: w, reason: collision with root package name */
    public final v f18730w;

    /* renamed from: x, reason: collision with root package name */
    public final AtomicBoolean f18731x;

    /* renamed from: y, reason: collision with root package name */
    public Object f18732y;

    public h(OkHttpClient client, Request originalRequest, boolean z5) {
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(originalRequest, "originalRequest");
        this.f18726d = client;
        this.f18727e = originalRequest;
        this.f18728i = z5;
        this.f18729v = (l) client.f16047e.f18810e;
        client.f16050w.getClass();
        o this_asFactory = o.f16572d;
        Intrinsics.checkNotNullParameter(this_asFactory, "$this_asFactory");
        Intrinsics.checkNotNullParameter(this, "it");
        v vVar = new v(this);
        vVar.g(client.T, TimeUnit.MILLISECONDS);
        this.f18730w = vVar;
        this.f18731x = new AtomicBoolean();
        this.K = true;
    }

    public static final String a(h hVar) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(hVar.L ? "canceled " : "");
        sb2.append(hVar.f18728i ? "web socket" : "call");
        sb2.append(" to ");
        sb2.append(hVar.f18727e.a.f());
        return sb2.toString();
    }

    public final void b(k connection) {
        Intrinsics.checkNotNullParameter(connection, "connection");
        byte[] bArr = qs.b.a;
        if (this.F != null) {
            throw new IllegalStateException("Check failed.");
        }
        this.F = connection;
        connection.f18750p.add(new g(this, this.f18732y));
    }

    public final IOException c(IOException iOException) {
        IOException ioe;
        Socket k;
        byte[] bArr = qs.b.a;
        k connection = this.F;
        if (connection != null) {
            synchronized (connection) {
                k = k();
            }
            if (this.F == null) {
                if (k != null) {
                    qs.b.d(k);
                }
                Intrinsics.checkNotNullParameter(this, "call");
                Intrinsics.checkNotNullParameter(connection, "connection");
            } else if (k != null) {
                throw new IllegalStateException("Check failed.");
            }
        }
        if (!this.G && this.f18730w.j()) {
            ioe = new InterruptedIOException("timeout");
            if (iOException != null) {
                ioe.initCause(iOException);
            }
        } else {
            ioe = iOException;
        }
        if (iOException == null) {
            Intrinsics.checkNotNullParameter(this, "call");
            return ioe;
        }
        Intrinsics.checkNotNull(ioe);
        Intrinsics.checkNotNullParameter(this, "call");
        Intrinsics.checkNotNullParameter(ioe, "ioe");
        return ioe;
    }

    @Override // okhttp3.Call
    public final void cancel() {
        Socket socket;
        if (this.L) {
            return;
        }
        this.L = true;
        hc.k kVar = this.M;
        if (kVar != null) {
            ((us.d) kVar.f9764w).cancel();
        }
        k kVar2 = this.N;
        if (kVar2 != null && (socket = kVar2.f18739c) != null) {
            qs.b.d(socket);
        }
        Intrinsics.checkNotNullParameter(this, "call");
    }

    public final Object clone() {
        return new h(this.f18726d, this.f18727e, this.f18728i);
    }

    public final void d(ps.h responseCallback) {
        f other;
        Intrinsics.checkNotNullParameter(responseCallback, "responseCallback");
        if (!this.f18731x.compareAndSet(false, true)) {
            throw new IllegalStateException("Already Executed");
        }
        n nVar = n.a;
        this.f18732y = n.a.g();
        Intrinsics.checkNotNullParameter(this, "call");
        Dispatcher dispatcher = this.f18726d.f16046d;
        f call = new f(this, responseCallback);
        dispatcher.getClass();
        Intrinsics.checkNotNullParameter(call, "call");
        synchronized (dispatcher) {
            dispatcher.f16028d.add(call);
            if (!this.f18728i) {
                String str = this.f18727e.a.f16034d;
                Iterator it = dispatcher.f16029e.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        Iterator it2 = dispatcher.f16028d.iterator();
                        while (true) {
                            if (!it2.hasNext()) {
                                other = null;
                                break;
                            } else {
                                other = (f) it2.next();
                                if (Intrinsics.areEqual(other.f18725i.f18727e.a.f16034d, str)) {
                                    break;
                                }
                            }
                        }
                    } else {
                        other = (f) it.next();
                        if (Intrinsics.areEqual(other.f18725i.f18727e.a.f16034d, str)) {
                            break;
                        }
                    }
                }
                if (other != null) {
                    Intrinsics.checkNotNullParameter(other, "other");
                    call.f18724e = other.f18724e;
                }
            }
            Unit unit = Unit.a;
        }
        dispatcher.e();
    }

    public final Response e() {
        if (!this.f18731x.compareAndSet(false, true)) {
            throw new IllegalStateException("Already Executed");
        }
        this.f18730w.i();
        n nVar = n.a;
        this.f18732y = n.a.g();
        Intrinsics.checkNotNullParameter(this, "call");
        try {
            Dispatcher dispatcher = this.f18726d.f16046d;
            synchronized (dispatcher) {
                Intrinsics.checkNotNullParameter(this, "call");
                dispatcher.f16030f.add(this);
            }
            return g();
        } finally {
            Dispatcher dispatcher2 = this.f18726d.f16046d;
            dispatcher2.getClass();
            Intrinsics.checkNotNullParameter(this, "call");
            dispatcher2.c(dispatcher2.f16030f, this);
        }
    }

    public final void f(boolean z5) {
        hc.k kVar;
        synchronized (this) {
            if (!this.K) {
                throw new IllegalStateException("released");
            }
            Unit unit = Unit.a;
        }
        if (z5 && (kVar = this.M) != null) {
            ((us.d) kVar.f9764w).cancel();
            ((h) kVar.f9762i).h(kVar, true, true, null);
        }
        this.H = null;
    }

    public final Response g() {
        ArrayList arrayList = new ArrayList();
        h0.o(arrayList, this.f18726d.f16048i);
        arrayList.add(new us.a(this.f18726d));
        arrayList.add(new us.a(this.f18726d.G));
        arrayList.add(new rs.b(this.f18726d.H));
        arrayList.add(a.a);
        if (!this.f18728i) {
            h0.o(arrayList, this.f18726d.f16049v);
        }
        arrayList.add(new us.b(this.f18728i));
        Request request = this.f18727e;
        OkHttpClient okHttpClient = this.f18726d;
        try {
            try {
                Response a = new us.f(this, arrayList, 0, null, request, okHttpClient.U, okHttpClient.V, okHttpClient.W).a(this.f18727e);
                if (this.L) {
                    qs.b.c(a);
                    throw new IOException("Canceled");
                }
                j(null);
                return a;
            } catch (IOException e9) {
                IOException j = j(e9);
                if (j == null) {
                    throw new NullPointerException("null cannot be cast to non-null type kotlin.Throwable");
                }
                throw j;
            }
        } catch (Throwable th2) {
            if (0 == 0) {
                j(null);
            }
            throw th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0022 A[Catch: all -> 0x0018, TryCatch #1 {all -> 0x0018, blocks: (B:49:0x0013, B:10:0x0022, B:12:0x0026, B:13:0x0028, B:15:0x002c, B:19:0x0035, B:21:0x0039, B:25:0x0042, B:7:0x001c), top: B:48:0x0013 }] */
    /* JADX WARN: Removed duplicated region for block: B:12:0x0026 A[Catch: all -> 0x0018, TryCatch #1 {all -> 0x0018, blocks: (B:49:0x0013, B:10:0x0022, B:12:0x0026, B:13:0x0028, B:15:0x002c, B:19:0x0035, B:21:0x0039, B:25:0x0042, B:7:0x001c), top: B:48:0x0013 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final IOException h(hc.k exchange, boolean z5, boolean z6, IOException iOException) {
        boolean z7;
        boolean z8;
        boolean z10;
        Intrinsics.checkNotNullParameter(exchange, "exchange");
        if (Intrinsics.areEqual(exchange, this.M)) {
            synchronized (this) {
                z7 = false;
                if (z5) {
                    try {
                        if (!this.I) {
                        }
                        if (z5) {
                            this.I = false;
                        }
                        if (z6) {
                            this.J = false;
                        }
                        z10 = this.I;
                        boolean z11 = z10 && !this.J;
                        if (!z10 && !this.J && !this.K) {
                            z7 = true;
                        }
                        z8 = z7;
                        z7 = z11;
                        Unit unit = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                if (!z6 || !this.J) {
                    z8 = false;
                    Unit unit2 = Unit.a;
                }
                if (z5) {
                }
                if (z6) {
                }
                z10 = this.I;
                if (z10) {
                }
                if (!z10) {
                    z7 = true;
                }
                z8 = z7;
                z7 = z11;
                Unit unit22 = Unit.a;
            }
            if (z7) {
                this.M = null;
                k kVar = this.F;
                if (kVar != null) {
                    synchronized (kVar) {
                        kVar.f18747m++;
                    }
                }
            }
            if (z8) {
                return c(iOException);
            }
        }
        return iOException;
    }

    @Override // okhttp3.Call
    public final Request i() {
        return this.f18727e;
    }

    public final IOException j(IOException iOException) {
        boolean z5;
        synchronized (this) {
            try {
                z5 = false;
                if (this.K) {
                    this.K = false;
                    if (!this.I && !this.J) {
                        z5 = true;
                    }
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return z5 ? c(iOException) : iOException;
    }

    public final Socket k() {
        k connection = this.F;
        Intrinsics.checkNotNull(connection);
        byte[] bArr = qs.b.a;
        ArrayList arrayList = connection.f18750p;
        Iterator it = arrayList.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            if (Intrinsics.areEqual(((Reference) it.next()).get(), this)) {
                break;
            }
            i5++;
        }
        if (i5 == -1) {
            throw new IllegalStateException("Check failed.");
        }
        arrayList.remove(i5);
        this.F = null;
        if (!arrayList.isEmpty()) {
            return null;
        }
        connection.f18751q = System.nanoTime();
        l lVar = this.f18729v;
        ConcurrentLinkedQueue concurrentLinkedQueue = lVar.f18754d;
        ss.b bVar = lVar.f18752b;
        Intrinsics.checkNotNullParameter(connection, "connection");
        byte[] bArr2 = qs.b.a;
        if (!connection.j) {
            bVar.c(lVar.f18753c, 0L);
            return null;
        }
        connection.j = true;
        concurrentLinkedQueue.remove(connection);
        if (concurrentLinkedQueue.isEmpty()) {
            bVar.a();
        }
        Socket socket = connection.f18740d;
        Intrinsics.checkNotNull(socket);
        return socket;
    }

    @Override // okhttp3.Call
    public final boolean x() {
        return this.L;
    }
}
