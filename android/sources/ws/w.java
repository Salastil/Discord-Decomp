package ws;

import java.io.IOException;
import java.util.ArrayDeque;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Headers;

/* loaded from: classes3.dex */
public final class w {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final p f20147b;

    /* renamed from: c, reason: collision with root package name */
    public long f20148c;

    /* renamed from: d, reason: collision with root package name */
    public long f20149d;

    /* renamed from: e, reason: collision with root package name */
    public long f20150e;

    /* renamed from: f, reason: collision with root package name */
    public long f20151f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayDeque f20152g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f20153h;

    /* renamed from: i, reason: collision with root package name */
    public final v f20154i;
    public final u j;
    public final et.v k;

    /* renamed from: l, reason: collision with root package name */
    public final et.v f20155l;

    /* renamed from: m, reason: collision with root package name */
    public b f20156m;

    /* renamed from: n, reason: collision with root package name */
    public IOException f20157n;

    public w(int i5, p connection, boolean z5, boolean z6, Headers headers) {
        Intrinsics.checkNotNullParameter(connection, "connection");
        this.a = i5;
        this.f20147b = connection;
        this.f20151f = connection.N.a();
        ArrayDeque arrayDeque = new ArrayDeque();
        this.f20152g = arrayDeque;
        this.f20154i = new v(this, connection.M.a(), z6);
        this.j = new u(this, z5);
        this.k = new et.v(this);
        this.f20155l = new et.v(this);
        if (headers == null) {
            if (!h()) {
                throw new IllegalStateException("remotely-initiated streams should have headers");
            }
        } else {
            if (h()) {
                throw new IllegalStateException("locally-initiated streams shouldn't have headers yet");
            }
            arrayDeque.add(headers);
        }
    }

    public final void a() {
        boolean z5;
        boolean i5;
        byte[] bArr = qs.b.a;
        synchronized (this) {
            try {
                v vVar = this.f20154i;
                if (!vVar.f20142e && vVar.f20145w) {
                    u uVar = this.j;
                    if (!uVar.f20137d) {
                        if (uVar.f20139i) {
                        }
                    }
                    z5 = true;
                    i5 = i();
                    Unit unit = Unit.a;
                }
                z5 = false;
                i5 = i();
                Unit unit2 = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (z5) {
            c(b.CANCEL, null);
        } else {
            if (i5) {
                return;
            }
            this.f20147b.i(this.a);
        }
    }

    public final void b() {
        u uVar = this.j;
        if (uVar.f20139i) {
            throw new IOException("stream closed");
        }
        if (uVar.f20137d) {
            throw new IOException("stream finished");
        }
        if (this.f20156m != null) {
            IOException iOException = this.f20157n;
            if (iOException != null) {
                throw iOException;
            }
            b bVar = this.f20156m;
            Intrinsics.checkNotNull(bVar);
            throw new b0(bVar);
        }
    }

    public final void c(b statusCode, IOException iOException) {
        Intrinsics.checkNotNullParameter(statusCode, "rstStatusCode");
        if (d(statusCode, iOException)) {
            p pVar = this.f20147b;
            pVar.getClass();
            Intrinsics.checkNotNullParameter(statusCode, "statusCode");
            pVar.T.q(this.a, statusCode);
        }
    }

    public final boolean d(b bVar, IOException iOException) {
        byte[] bArr = qs.b.a;
        synchronized (this) {
            if (f() != null) {
                return false;
            }
            if (this.f20154i.f20142e && this.j.f20137d) {
                return false;
            }
            this.f20156m = bVar;
            this.f20157n = iOException;
            notifyAll();
            Unit unit = Unit.a;
            this.f20147b.i(this.a);
            return true;
        }
    }

    public final void e(b errorCode) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        if (d(errorCode, null)) {
            this.f20147b.r(this.a, errorCode);
        }
    }

    public final synchronized b f() {
        return this.f20156m;
    }

    public final u g() {
        synchronized (this) {
            try {
                if (!this.f20153h && !h()) {
                    throw new IllegalStateException("reply before requesting the sink");
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return this.j;
    }

    public final boolean h() {
        boolean z5 = (this.a & 1) == 1;
        this.f20147b.getClass();
        return true == z5;
    }

    public final synchronized boolean i() {
        try {
            if (this.f20156m != null) {
                return false;
            }
            v vVar = this.f20154i;
            if (!vVar.f20142e) {
                if (vVar.f20145w) {
                }
                return true;
            }
            u uVar = this.j;
            if (uVar.f20137d || uVar.f20139i) {
                if (this.f20153h) {
                    return false;
                }
            }
            return true;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0021 A[Catch: all -> 0x0016, TryCatch #0 {all -> 0x0016, blocks: (B:4:0x0008, B:8:0x0010, B:10:0x0021, B:11:0x0025, B:19:0x0018), top: B:3:0x0008 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void j(Headers headers, boolean z5) {
        boolean i5;
        Intrinsics.checkNotNullParameter(headers, "headers");
        byte[] bArr = qs.b.a;
        synchronized (this) {
            try {
                if (this.f20153h && z5) {
                    this.f20154i.getClass();
                    if (z5) {
                        this.f20154i.f20142e = true;
                    }
                    i5 = i();
                    notifyAll();
                    Unit unit = Unit.a;
                }
                this.f20153h = true;
                this.f20152g.add(headers);
                if (z5) {
                }
                i5 = i();
                notifyAll();
                Unit unit2 = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (i5) {
            return;
        }
        this.f20147b.i(this.a);
    }

    public final synchronized void k(b errorCode) {
        Intrinsics.checkNotNullParameter(errorCode, "errorCode");
        if (this.f20156m == null) {
            this.f20156m = errorCode;
            notifyAll();
        }
    }
}
