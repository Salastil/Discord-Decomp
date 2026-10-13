package td;

import a5.a0;
import android.net.Uri;
import android.os.SystemClock;
import bg.y0;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.e0;
import hc.g1;
import ie.f0;
import ie.h0;
import ie.k0;
import ie.n0;
import ie.s0;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import jc.b0;
import ke.d0;

/* loaded from: classes3.dex */
public final class b implements f0 {
    public long E;
    public boolean F;
    public IOException G;
    public final /* synthetic */ c H;

    /* renamed from: d, reason: collision with root package name */
    public final Uri f18268d;

    /* renamed from: e, reason: collision with root package name */
    public final k0 f18269e = new k0("DefaultHlsPlaylistTracker:MediaPlaylist");

    /* renamed from: i, reason: collision with root package name */
    public final DataSource f18270i;

    /* renamed from: v, reason: collision with root package name */
    public i f18271v;

    /* renamed from: w, reason: collision with root package name */
    public long f18272w;

    /* renamed from: x, reason: collision with root package name */
    public long f18273x;

    /* renamed from: y, reason: collision with root package name */
    public long f18274y;

    public b(c cVar, Uri uri) {
        this.H = cVar;
        this.f18268d = uri;
        this.f18270i = cVar.f18275d.a.createDataSource();
    }

    public static boolean a(b bVar, long j) {
        bVar.E = SystemClock.elapsedRealtime() + j;
        Uri uri = bVar.f18268d;
        c cVar = bVar.H;
        if (!uri.equals(cVar.H)) {
            return false;
        }
        List list = cVar.G.f18321e;
        int size = list.size();
        long elapsedRealtime = SystemClock.elapsedRealtime();
        for (int i5 = 0; i5 < size; i5++) {
            b bVar2 = (b) cVar.f18278v.get(((k) list.get(i5)).a);
            bVar2.getClass();
            if (elapsedRealtime > bVar2.E) {
                Uri uri2 = bVar2.f18268d;
                cVar.H = uri2;
                bVar2.c(cVar.b(uri2));
                return false;
            }
        }
        return true;
    }

    public final void b(Uri uri) {
        c cVar = this.H;
        n0 n0Var = new n0(this.f18270i, uri, 4, cVar.f18276e.k(cVar.G, this.f18271v));
        p9.d dVar = cVar.f18277i;
        int i5 = n0Var.f10699i;
        this.f18269e.f(n0Var, this, dVar.k(i5));
        cVar.f18280x.r(new LoadEventInfo(n0Var.f10698e), i5, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }

    public final void c(Uri uri) {
        this.E = 0L;
        if (this.F) {
            return;
        }
        k0 k0Var = this.f18269e;
        if (k0Var.d() || k0Var.c()) {
            return;
        }
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long j = this.f18274y;
        if (elapsedRealtime >= j) {
            b(uri);
        } else {
            this.F = true;
            this.H.E.postDelayed(new b0(19, this, uri), j - elapsedRealtime);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x01b1  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0249  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0274  */
    /* JADX WARN: Removed duplicated region for block: B:64:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:65:0x01e6  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0119  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0121  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0057  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(i iVar) {
        boolean z5;
        CopyOnWriteArrayList copyOnWriteArrayList;
        boolean z6;
        long j;
        long j5;
        long j7;
        int i5;
        e0 e0Var;
        i iVar2;
        y0 y0Var;
        long j10;
        y0 y0Var2;
        boolean z7;
        h hVar;
        i iVar3;
        int size;
        int size2;
        int size3;
        i iVar4 = this.f18271v;
        long elapsedRealtime = SystemClock.elapsedRealtime();
        this.f18272w = elapsedRealtime;
        c cVar = this.H;
        CopyOnWriteArrayList copyOnWriteArrayList2 = cVar.f18279w;
        if (iVar4 != null) {
            long j11 = iVar.k;
            long j12 = iVar4.k;
            if (j11 <= j12 && (j11 < j12 || ((size = iVar.f18307r.size() - iVar4.f18307r.size()) == 0 ? !((size2 = iVar.f18308s.size()) > (size3 = iVar4.f18308s.size()) || (size2 == size3 && iVar.f18304o && !iVar4.f18304o)) : size <= 0))) {
                z5 = false;
                e0 e0Var2 = iVar.f18307r;
                long j13 = iVar.k;
                long j14 = 0;
                if (z5) {
                    if (!iVar.f18304o) {
                        copyOnWriteArrayList = copyOnWriteArrayList2;
                        z6 = true;
                        iVar2 = iVar4;
                        j10 = j13;
                    } else if (iVar4.f18304o) {
                        iVar2 = iVar4;
                        copyOnWriteArrayList = copyOnWriteArrayList2;
                        j10 = j13;
                        y0Var = null;
                        z6 = true;
                    } else {
                        z6 = true;
                        copyOnWriteArrayList = copyOnWriteArrayList2;
                        j10 = j13;
                        iVar2 = new i(iVar4.f18295d, iVar4.a, iVar4.f18328b, iVar4.f18296e, iVar4.f18298g, iVar4.f18299h, iVar4.f18300i, iVar4.j, iVar4.k, iVar4.f18301l, iVar4.f18302m, iVar4.f18303n, iVar4.f18329c, true, iVar4.f18305p, iVar4.f18306q, iVar4.f18307r, iVar4.f18308s, iVar4.f18311v, iVar4.f18309t);
                    }
                    y0Var = null;
                } else {
                    copyOnWriteArrayList = copyOnWriteArrayList2;
                    z6 = true;
                    if (iVar.f18305p) {
                        j = iVar.f18299h;
                    } else {
                        i iVar5 = cVar.I;
                        j = iVar5 != null ? iVar5.f18299h : 0L;
                        if (iVar4 != null) {
                            long j15 = iVar4.f18299h;
                            long j16 = iVar4.k;
                            e0 e0Var3 = iVar4.f18307r;
                            j5 = j;
                            int size4 = e0Var3.size();
                            int i6 = (int) (j13 - j16);
                            f fVar = i6 < e0Var3.size() ? (f) e0Var3.get(i6) : null;
                            if (fVar != null) {
                                j7 = fVar.f18288w;
                            } else {
                                if (size4 == j13 - j16) {
                                    j7 = iVar4.f18310u;
                                }
                                if (iVar.f18300i) {
                                    i iVar6 = cVar.I;
                                    int i10 = iVar6 != null ? iVar6.j : 0;
                                    if (iVar4 != null) {
                                        int i11 = (int) (j13 - iVar4.k);
                                        e0 e0Var4 = iVar4.f18307r;
                                        f fVar2 = i11 < e0Var4.size() ? (f) e0Var4.get(i11) : null;
                                        if (fVar2 != null) {
                                            i10 = (iVar4.j + fVar2.f18287v) - ((f) e0Var2.get(0)).f18287v;
                                            i5 = i10;
                                            e0Var = e0Var2;
                                        }
                                    }
                                    i5 = i10;
                                    e0Var = e0Var2;
                                } else {
                                    i5 = iVar.j;
                                    e0Var = e0Var2;
                                }
                                y0Var = null;
                                j10 = j13;
                                iVar2 = new i(iVar.f18295d, iVar.a, iVar.f18328b, iVar.f18296e, iVar.f18298g, j5, true, i5, iVar.k, iVar.f18301l, iVar.f18302m, iVar.f18303n, iVar.f18329c, iVar.f18304o, iVar.f18305p, iVar.f18306q, e0Var, iVar.f18308s, iVar.f18311v, iVar.f18309t);
                            }
                            j = j15 + j7;
                        }
                    }
                    j5 = j;
                    if (iVar.f18300i) {
                    }
                    y0Var = null;
                    j10 = j13;
                    iVar2 = new i(iVar.f18295d, iVar.a, iVar.f18328b, iVar.f18296e, iVar.f18298g, j5, true, i5, iVar.k, iVar.f18301l, iVar.f18302m, iVar.f18303n, iVar.f18329c, iVar.f18304o, iVar.f18305p, iVar.f18306q, e0Var, iVar.f18308s, iVar.f18311v, iVar.f18309t);
                }
                this.f18271v = iVar2;
                Uri uri = this.f18268d;
                if (iVar2 == iVar4) {
                    this.G = y0Var;
                    this.f18273x = elapsedRealtime;
                    if (uri.equals(cVar.H)) {
                        if (cVar.I == null) {
                            cVar.J = !iVar2.f18304o;
                            cVar.K = iVar2.f18299h;
                        }
                        cVar.I = iVar2;
                        cVar.F.u(iVar2);
                    }
                    Iterator it = copyOnWriteArrayList.iterator();
                    while (it.hasNext()) {
                        ((q) it.next()).b();
                    }
                } else if (!iVar2.f18304o) {
                    long size5 = j10 + iVar.f18307r.size();
                    i iVar7 = this.f18271v;
                    if (size5 < iVar7.k) {
                        y0Var2 = new y0();
                        z7 = z6;
                    } else {
                        y0Var2 = ((double) (elapsedRealtime - this.f18273x)) > ((double) d0.U(iVar7.f18302m)) * 3.5d ? new y0() : y0Var;
                        z7 = false;
                    }
                    if (y0Var2 != null) {
                        this.G = y0Var2;
                        a0 a0Var = new a0(z6 ? 1 : 0, 7, y0Var2);
                        Iterator it2 = copyOnWriteArrayList.iterator();
                        while (it2.hasNext()) {
                            ((q) it2.next()).c(uri, a0Var, z7);
                        }
                    }
                }
                i iVar8 = this.f18271v;
                hVar = iVar8.f18311v;
                long j17 = iVar8.f18302m;
                if (!hVar.f18294e) {
                    if (iVar8 == iVar4) {
                        j17 /= 2;
                    }
                    j14 = j17;
                }
                this.f18274y = d0.U(j14) + elapsedRealtime;
                if (this.f18271v.f18303n == -9223372036854775807L || uri.equals(cVar.H)) {
                    iVar3 = this.f18271v;
                    if (iVar3.f18304o) {
                        h hVar2 = iVar3.f18311v;
                        if (hVar2.a != -9223372036854775807L || hVar2.f18294e) {
                            Uri.Builder buildUpon = uri.buildUpon();
                            i iVar9 = this.f18271v;
                            if (iVar9.f18311v.f18294e) {
                                buildUpon.appendQueryParameter("_HLS_msn", String.valueOf(iVar9.k + iVar9.f18307r.size()));
                                i iVar10 = this.f18271v;
                                if (iVar10.f18303n != -9223372036854775807L) {
                                    e0 e0Var5 = iVar10.f18308s;
                                    int size6 = e0Var5.size();
                                    if (!e0Var5.isEmpty() && ((d) fi.p.i(e0Var5)).J) {
                                        size6--;
                                    }
                                    buildUpon.appendQueryParameter("_HLS_part", String.valueOf(size6));
                                }
                            }
                            h hVar3 = this.f18271v.f18311v;
                            if (hVar3.a != -9223372036854775807L) {
                                buildUpon.appendQueryParameter("_HLS_skip", hVar3.f18291b ? "v2" : "YES");
                            }
                            uri = buildUpon.build();
                        }
                        c(uri);
                        return;
                    }
                    return;
                }
                return;
            }
        } else {
            iVar.getClass();
        }
        z5 = true;
        e0 e0Var22 = iVar.f18307r;
        long j132 = iVar.k;
        long j142 = 0;
        if (z5) {
        }
        this.f18271v = iVar2;
        Uri uri2 = this.f18268d;
        if (iVar2 == iVar4) {
        }
        i iVar82 = this.f18271v;
        hVar = iVar82.f18311v;
        long j172 = iVar82.f18302m;
        if (!hVar.f18294e) {
        }
        this.f18274y = d0.U(j142) + elapsedRealtime;
        if (this.f18271v.f18303n == -9223372036854775807L) {
        }
        iVar3 = this.f18271v;
        if (iVar3.f18304o) {
        }
    }

    @Override // ie.f0
    public final bd.f l(h0 h0Var, long j, long j5, IOException iOException, int i5) {
        n0 n0Var = (n0) h0Var;
        long j7 = n0Var.f10697d;
        int i6 = n0Var.f10699i;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        boolean z5 = uri.getQueryParameter("_HLS_msn") != null;
        boolean z6 = iOException instanceof n;
        bd.f fVar = k0.f10682w;
        Uri uri2 = this.f18268d;
        c cVar = this.H;
        if (z5 || z6) {
            int i10 = iOException instanceof ie.d0 ? ((ie.d0) iOException).f10662v : Integer.MAX_VALUE;
            if (z6 || i10 == 400 || i10 == 503) {
                this.f18274y = SystemClock.elapsedRealtime();
                c(uri2);
                a1.d dVar = cVar.f18280x;
                int i11 = d0.a;
                dVar.p(loadEventInfo, i6, iOException, true);
                return fVar;
            }
        }
        a0 a0Var = new a0(i5, 7, iOException);
        Iterator it = cVar.f18279w.iterator();
        boolean z7 = false;
        while (it.hasNext()) {
            z7 |= !((q) it.next()).c(uri2, a0Var, false);
        }
        p9.d dVar2 = cVar.f18277i;
        if (z7) {
            dVar2.getClass();
            long m5 = p9.d.m(a0Var);
            fVar = m5 != -9223372036854775807L ? new bd.f(0, m5, false) : k0.f10683x;
        }
        boolean a = fVar.a();
        cVar.f18280x.p(loadEventInfo, i6, iOException, !a);
        if (!a) {
            dVar2.getClass();
        }
        return fVar;
    }

    @Override // ie.f0
    public final void v(h0 h0Var, long j, long j5) {
        n0 n0Var = (n0) h0Var;
        m mVar = (m) n0Var.f10702x;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        if (mVar instanceof i) {
            d((i) mVar);
            this.H.f18280x.l(loadEventInfo, 4);
        } else {
            g1 b10 = g1.b("Loaded playlist has unexpected type.", null);
            this.G = b10;
            this.H.f18280x.p(loadEventInfo, 4, b10, true);
        }
        this.H.f18277i.getClass();
    }

    @Override // ie.f0
    public final void z(h0 h0Var, long j, long j5, boolean z5) {
        n0 n0Var = (n0) h0Var;
        long j7 = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        c cVar = this.H;
        cVar.f18277i.getClass();
        cVar.f18280x.j(loadEventInfo, 4, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }
}
