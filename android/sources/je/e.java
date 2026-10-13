package je;

import android.net.Uri;
import com.google.android.exoplayer2.upstream.DataSource;
import com.google.android.exoplayer2.upstream.cache.SimpleCache;
import ie.t0;
import ie.u0;
import ie.z;
import java.io.InterruptedIOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class e implements DataSource {
    public Uri E;
    public ie.p F;
    public ie.p G;
    public DataSource H;
    public long I;
    public long J;
    public long K;
    public t L;
    public boolean M;
    public boolean N;
    public long O;

    /* renamed from: d, reason: collision with root package name */
    public final b f12724d;

    /* renamed from: e, reason: collision with root package name */
    public final z f12725e;

    /* renamed from: i, reason: collision with root package name */
    public final t0 f12726i;

    /* renamed from: v, reason: collision with root package name */
    public final DataSource f12727v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f12728w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f12729x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f12730y;

    public e(SimpleCache simpleCache, DataSource dataSource, z zVar, d dVar, int i5) {
        this.f12724d = simpleCache;
        this.f12725e = zVar;
        this.f12728w = (i5 & 1) != 0;
        this.f12729x = (i5 & 2) != 0;
        this.f12730y = (i5 & 4) != 0;
        if (dataSource != null) {
            this.f12727v = dataSource;
            this.f12726i = new t0(dataSource, dVar);
        } else {
            this.f12727v = com.google.android.exoplayer2.upstream.b.f5566d;
            this.f12726i = null;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void b() {
        b bVar = this.f12724d;
        DataSource dataSource = this.H;
        if (dataSource == null) {
            return;
        }
        try {
            dataSource.close();
        } finally {
            this.G = null;
            this.H = null;
            t tVar = this.L;
            if (tVar != null) {
                ((SimpleCache) bVar).j(tVar);
                this.L = null;
            }
        }
    }

    public final void c(ie.p pVar, boolean z5) {
        t m5;
        ie.p a;
        DataSource dataSource;
        String str = pVar.f10717h;
        int i5 = d0.a;
        if (this.N) {
            m5 = null;
        } else if (this.f12728w) {
            try {
                b bVar = this.f12724d;
                long j = this.J;
                long j5 = this.K;
                SimpleCache simpleCache = (SimpleCache) bVar;
                synchronized (simpleCache) {
                    simpleCache.d();
                    while (true) {
                        m5 = simpleCache.m(j, j5, str);
                        if (m5 != null) {
                            break;
                        } else {
                            simpleCache.wait();
                        }
                    }
                }
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
                throw new InterruptedIOException();
            }
        } else {
            m5 = ((SimpleCache) this.f12724d).m(this.J, this.K, str);
        }
        if (m5 == null) {
            dataSource = this.f12727v;
            ie.o a10 = pVar.a();
            a10.f10707f = this.J;
            a10.f10708g = this.K;
            a = a10.a();
        } else if (m5.f12737v) {
            Uri fromFile = Uri.fromFile(m5.f12738w);
            long j7 = m5.f12735e;
            long j10 = this.J - j7;
            long j11 = m5.f12736i - j10;
            long j12 = this.K;
            if (j12 != -1) {
                j11 = Math.min(j11, j12);
            }
            ie.o a11 = pVar.a();
            a11.a = fromFile;
            a11.f10703b = j7;
            a11.f10707f = j10;
            a11.f10708g = j11;
            a = a11.a();
            dataSource = this.f12725e;
        } else {
            long j13 = m5.f12736i;
            if (j13 == -1) {
                j13 = this.K;
            } else {
                long j14 = this.K;
                if (j14 != -1) {
                    j13 = Math.min(j13, j14);
                }
            }
            ie.o a12 = pVar.a();
            a12.f10707f = this.J;
            a12.f10708g = j13;
            a = a12.a();
            dataSource = this.f12726i;
            if (dataSource == null) {
                dataSource = this.f12727v;
                ((SimpleCache) this.f12724d).j(m5);
                m5 = null;
            }
        }
        this.O = (this.N || dataSource != this.f12727v) ? LongCompanionObject.MAX_VALUE : this.J + 102400;
        if (z5) {
            ke.b.k(this.H == this.f12727v);
            if (dataSource == this.f12727v) {
                return;
            }
            try {
                b();
            } catch (Throwable th2) {
                if (!m5.f12737v) {
                    ((SimpleCache) this.f12724d).j(m5);
                }
                throw th2;
            }
        }
        if (m5 != null && !m5.f12737v) {
            this.L = m5;
        }
        this.H = dataSource;
        this.G = a;
        this.I = 0L;
        long o6 = dataSource.o(a);
        g gVar = new g();
        if (a.f10716g == -1 && o6 != -1) {
            this.K = o6;
            gVar.a(Long.valueOf(this.J + o6), "exo_len");
        }
        if (!(this.H == this.f12725e)) {
            Uri x5 = dataSource.x();
            this.E = x5;
            Uri uri = pVar.a.equals(x5) ? null : this.E;
            if (uri == null) {
                ((ArrayList) gVar.f12733b).add("exo_redir");
                ((HashMap) gVar.a).remove("exo_redir");
            } else {
                gVar.a(uri.toString(), "exo_redir");
            }
        }
        if (this.H == this.f12726i) {
            ((SimpleCache) this.f12724d).c(str, gVar);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.F = null;
        this.E = null;
        this.J = 0L;
        try {
            b();
        } catch (Throwable th2) {
            if (this.H == this.f12725e || (th2 instanceof a)) {
                this.M = true;
            }
            throw th2;
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
        u0Var.getClass();
        this.f12725e.n(u0Var);
        this.f12727v.n(u0Var);
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x006c A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:3:0x0007, B:6:0x0010, B:7:0x0016, B:9:0x0038, B:14:0x004b, B:16:0x0056, B:20:0x0066, B:22:0x006c, B:25:0x0097, B:28:0x00a3, B:29:0x009f, B:30:0x00a5, B:37:0x00b5, B:39:0x00af, B:40:0x0072, B:42:0x0083, B:45:0x008b, B:46:0x0092, B:47:0x005b, B:52:0x0044), top: B:2:0x0007 }] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0097 A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:3:0x0007, B:6:0x0010, B:7:0x0016, B:9:0x0038, B:14:0x004b, B:16:0x0056, B:20:0x0066, B:22:0x006c, B:25:0x0097, B:28:0x00a3, B:29:0x009f, B:30:0x00a5, B:37:0x00b5, B:39:0x00af, B:40:0x0072, B:42:0x0083, B:45:0x008b, B:46:0x0092, B:47:0x005b, B:52:0x0044), top: B:2:0x0007 }] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00b4 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00b5 A[Catch: all -> 0x0070, TRY_LEAVE, TryCatch #0 {all -> 0x0070, blocks: (B:3:0x0007, B:6:0x0010, B:7:0x0016, B:9:0x0038, B:14:0x004b, B:16:0x0056, B:20:0x0066, B:22:0x006c, B:25:0x0097, B:28:0x00a3, B:29:0x009f, B:30:0x00a5, B:37:0x00b5, B:39:0x00af, B:40:0x0072, B:42:0x0083, B:45:0x008b, B:46:0x0092, B:47:0x005b, B:52:0x0044), top: B:2:0x0007 }] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0072 A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:3:0x0007, B:6:0x0010, B:7:0x0016, B:9:0x0038, B:14:0x004b, B:16:0x0056, B:20:0x0066, B:22:0x006c, B:25:0x0097, B:28:0x00a3, B:29:0x009f, B:30:0x00a5, B:37:0x00b5, B:39:0x00af, B:40:0x0072, B:42:0x0083, B:45:0x008b, B:46:0x0092, B:47:0x005b, B:52:0x0044), top: B:2:0x0007 }] */
    @Override // com.google.android.exoplayer2.upstream.DataSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long o(ie.p pVar) {
        boolean z5;
        long j;
        long j5;
        b bVar = this.f12724d;
        try {
            String str = pVar.f10717h;
            long j7 = pVar.f10715f;
            long j10 = pVar.f10716g;
            if (str == null) {
                str = pVar.a.toString();
            }
            ie.o a = pVar.a();
            a.f10709h = str;
            ie.p a10 = a.a();
            this.F = a10;
            Uri uri = a10.a;
            byte[] bArr = (byte[]) ((SimpleCache) bVar).g(str).f12750b.get("exo_redir");
            Uri uri2 = null;
            String str2 = bArr != null ? new String(bArr, ei.d.f8100c) : null;
            if (str2 != null) {
                uri2 = Uri.parse(str2);
            }
            if (uri2 != null) {
                uri = uri2;
            }
            this.E = uri;
            this.J = j7;
            if ((!this.f12729x || !this.M) && (!this.f12730y || j10 != -1)) {
                z5 = false;
                this.N = z5;
                if (z5) {
                    j = -1;
                    long a11 = n.a(((SimpleCache) bVar).g(str));
                    this.K = a11;
                    if (a11 != -1) {
                        long j11 = a11 - j7;
                        this.K = j11;
                        if (j11 < 0) {
                            throw new ie.m(2008);
                        }
                    }
                } else {
                    this.K = -1L;
                    j = -1;
                }
                if (j10 != j) {
                    long j12 = this.K;
                    this.K = j12 == j ? j10 : Math.min(j12, j10);
                }
                j5 = this.K;
                if (j5 <= 0 || j5 == j) {
                    c(a10, false);
                }
                return j10 == j ? j10 : this.K;
            }
            z5 = true;
            this.N = z5;
            if (z5) {
            }
            if (j10 != j) {
            }
            j5 = this.K;
            if (j5 <= 0) {
            }
            c(a10, false);
            if (j10 == j) {
            }
        } catch (Throwable th2) {
            if (this.H == this.f12725e || (th2 instanceof a)) {
                this.M = true;
            }
            throw th2;
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        int i10;
        long j;
        z zVar = this.f12725e;
        if (i6 == 0) {
            return 0;
        }
        if (this.K == 0) {
            return -1;
        }
        ie.p pVar = this.F;
        pVar.getClass();
        ie.p pVar2 = this.G;
        pVar2.getClass();
        try {
            if (this.J >= this.O) {
                c(pVar, true);
            }
            DataSource dataSource = this.H;
            dataSource.getClass();
            int read = dataSource.read(bArr, i5, i6);
            if (read != -1) {
                long j5 = read;
                this.J += j5;
                this.I += j5;
                long j7 = this.K;
                if (j7 == -1) {
                    return read;
                }
                this.K = j7 - j5;
                return read;
            }
            DataSource dataSource2 = this.H;
            if (!(dataSource2 == zVar)) {
                j = -1;
                long j10 = pVar2.f10716g;
                if (j10 != -1) {
                    i10 = read;
                    if (this.I < j10) {
                    }
                } else {
                    i10 = read;
                }
                String str = pVar.f10717h;
                int i11 = d0.a;
                this.K = 0L;
                if (!(dataSource2 == this.f12726i)) {
                    return i10;
                }
                g gVar = new g();
                gVar.a(Long.valueOf(this.J), "exo_len");
                ((SimpleCache) this.f12724d).c(str, gVar);
                return i10;
            }
            i10 = read;
            j = -1;
            long j11 = this.K;
            if (j11 <= 0 && j11 != j) {
                return i10;
            }
            b();
            c(pVar, false);
            return read(bArr, i5, i6);
        } catch (Throwable th2) {
            if (this.H == zVar || (th2 instanceof a)) {
                this.M = true;
            }
            throw th2;
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        return !(this.H == this.f12725e) ? this.f12727v.s() : Collections.EMPTY_MAP;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.E;
    }
}
