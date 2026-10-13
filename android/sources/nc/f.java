package nc;

import android.media.ResourceBusyException;
import android.media.UnsupportedSchemeException;
import android.os.Handler;
import android.os.Looper;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.google.android.exoplayer2.Format;
import fi.e1;
import fi.r0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class f implements r {

    /* renamed from: b, reason: collision with root package name */
    public final UUID f15009b;

    /* renamed from: c, reason: collision with root package name */
    public final n1.k f15010c;

    /* renamed from: d, reason: collision with root package name */
    public final d0 f15011d;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f15012e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f15013f;

    /* renamed from: g, reason: collision with root package name */
    public final int[] f15014g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f15015h;

    /* renamed from: i, reason: collision with root package name */
    public final e4.r f15016i;
    public final p9.d j;
    public final u4.b k;

    /* renamed from: l, reason: collision with root package name */
    public final long f15017l;

    /* renamed from: m, reason: collision with root package name */
    public final ArrayList f15018m;

    /* renamed from: n, reason: collision with root package name */
    public final Set f15019n;

    /* renamed from: o, reason: collision with root package name */
    public final Set f15020o;

    /* renamed from: p, reason: collision with root package name */
    public int f15021p;

    /* renamed from: q, reason: collision with root package name */
    public y f15022q;

    /* renamed from: r, reason: collision with root package name */
    public c f15023r;

    /* renamed from: s, reason: collision with root package name */
    public c f15024s;

    /* renamed from: t, reason: collision with root package name */
    public Looper f15025t;

    /* renamed from: u, reason: collision with root package name */
    public Handler f15026u;

    /* renamed from: v, reason: collision with root package name */
    public byte[] f15027v;

    /* renamed from: w, reason: collision with root package name */
    public ic.c0 f15028w;

    /* renamed from: x, reason: collision with root package name */
    public volatile cd.d f15029x;

    public f(UUID uuid, d0 d0Var, HashMap hashMap, boolean z5, int[] iArr, boolean z6, p9.d dVar) {
        uuid.getClass();
        ke.b.f("Use C.CLEARKEY_UUID instead", !hc.h.f9709b.equals(uuid));
        this.f15009b = uuid;
        this.f15010c = c0.f14998v;
        this.f15011d = d0Var;
        this.f15012e = hashMap;
        this.f15013f = z5;
        this.f15014g = iArr;
        this.f15015h = z6;
        this.j = dVar;
        this.f15016i = new e4.r(16);
        this.k = new u4.b(27, this);
        this.f15018m = new ArrayList();
        this.f15019n = Collections.newSetFromMap(new IdentityHashMap());
        this.f15020o = Collections.newSetFromMap(new IdentityHashMap());
        this.f15017l = LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES;
    }

    public static boolean g(c cVar) {
        cVar.m();
        if (cVar.f14988o != 1) {
            return false;
        }
        if (ke.d0.a >= 19) {
            j error = cVar.getError();
            error.getClass();
            if (!(error.getCause() instanceof ResourceBusyException)) {
                return false;
            }
        }
        return true;
    }

    public static ArrayList j(i iVar, UUID uuid, boolean z5) {
        ArrayList arrayList = new ArrayList(iVar.f15040v);
        for (int i5 = 0; i5 < iVar.f15040v; i5++) {
            h hVar = iVar.f15037d[i5];
            if ((hVar.a(uuid) || (hc.h.f9710c.equals(uuid) && hVar.a(hc.h.f9709b))) && (hVar.f15036w != null || z5)) {
                arrayList.add(hVar);
            }
        }
        return arrayList;
    }

    @Override // nc.r
    public final void a() {
        y jVar;
        l(true);
        int i5 = this.f15021p;
        this.f15021p = i5 + 1;
        if (i5 != 0) {
            return;
        }
        if (this.f15022q == null) {
            UUID uuid = this.f15009b;
            this.f15010c.getClass();
            try {
                try {
                    try {
                        jVar = new c0(uuid);
                    } catch (Exception e9) {
                        throw new h0(e9);
                    }
                } catch (UnsupportedSchemeException e10) {
                    throw new h0(e10);
                }
            } catch (h0 unused) {
                ke.b.r("FrameworkMediaDrm", "Failed to instantiate a FrameworkMediaDrm for uuid: " + uuid + ".");
                jVar = new io.sentry.hints.j(14);
            }
            this.f15022q = jVar;
            jVar.i(new ha.l(this));
            return;
        }
        if (this.f15017l == -9223372036854775807L) {
            return;
        }
        int i6 = 0;
        while (true) {
            ArrayList arrayList = this.f15018m;
            if (i6 >= arrayList.size()) {
                return;
            }
            ((c) arrayList.get(i6)).c(null);
            i6++;
        }
    }

    @Override // nc.r
    public final int b(Format format) {
        l(false);
        y yVar = this.f15022q;
        yVar.getClass();
        int x5 = yVar.x();
        i iVar = format.L;
        if (iVar == null) {
            int h6 = ke.o.h(format.I);
            int i5 = 0;
            while (true) {
                int[] iArr = this.f15014g;
                if (i5 >= iArr.length) {
                    i5 = -1;
                    break;
                }
                if (iArr[i5] == h6) {
                    break;
                }
                i5++;
            }
            if (i5 == -1) {
                return 0;
            }
        } else if (this.f15027v == null) {
            UUID uuid = this.f15009b;
            if (j(iVar, uuid, true).isEmpty()) {
                if (iVar.f15040v == 1 && iVar.f15037d[0].a(hc.h.f9709b)) {
                    ke.b.N("DefaultDrmSessionMgr", "DrmInitData only contains common PSSH SchemeData. Assuming support for: " + uuid);
                }
                return 1;
            }
            String str = iVar.f15039i;
            if (str != null && !"cenc".equals(str) && (!"cbcs".equals(str) ? "cbc1".equals(str) || "cens".equals(str) : ke.d0.a < 25)) {
                return 1;
            }
        }
        return x5;
    }

    @Override // nc.r
    public final void c(Looper looper, ic.c0 c0Var) {
        synchronized (this) {
            try {
                Looper looper2 = this.f15025t;
                if (looper2 == null) {
                    this.f15025t = looper;
                    this.f15026u = new Handler(looper);
                } else {
                    ke.b.k(looper2 == looper);
                    this.f15026u.getClass();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f15028w = c0Var;
    }

    @Override // nc.r
    public final k d(n nVar, Format format) {
        l(false);
        ke.b.k(this.f15021p > 0);
        ke.b.l(this.f15025t);
        return f(this.f15025t, nVar, format, true);
    }

    @Override // nc.r
    public final q e(n nVar, Format format) {
        ke.b.k(this.f15021p > 0);
        ke.b.l(this.f15025t);
        e eVar = new e(this, nVar);
        Handler handler = this.f15026u;
        handler.getClass();
        handler.post(new jc.b0(6, eVar, format));
        return eVar;
    }

    public final k f(Looper looper, n nVar, Format format, boolean z5) {
        ArrayList arrayList;
        if (this.f15029x == null) {
            this.f15029x = new cd.d(this, looper, 4);
        }
        i iVar = format.L;
        int i5 = 0;
        c cVar = null;
        if (iVar == null) {
            int h6 = ke.o.h(format.I);
            y yVar = this.f15022q;
            yVar.getClass();
            if (yVar.x() != 2 || !z.f15051d) {
                int[] iArr = this.f15014g;
                while (true) {
                    if (i5 >= iArr.length) {
                        i5 = -1;
                        break;
                    }
                    if (iArr[i5] == h6) {
                        break;
                    }
                    i5++;
                }
                if (i5 != -1 && yVar.x() != 1) {
                    c cVar2 = this.f15023r;
                    if (cVar2 == null) {
                        fi.c0 c0Var = fi.e0.f8656e;
                        c i6 = i(r0.f8704w, true, null, z5);
                        this.f15018m.add(i6);
                        this.f15023r = i6;
                    } else {
                        cVar2.c(null);
                    }
                    return this.f15023r;
                }
            }
            return null;
        }
        if (this.f15027v == null) {
            arrayList = j(iVar, this.f15009b, false);
            if (arrayList.isEmpty()) {
                d dVar = new d("Media does not support uuid: " + this.f15009b);
                ke.b.s("DefaultDrmSessionMgr", "DRM error", dVar);
                if (nVar != null) {
                    nVar.d(dVar);
                }
                return new v(new j(6003, dVar));
            }
        } else {
            arrayList = null;
        }
        if (this.f15013f) {
            Iterator it = this.f15018m.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                c cVar3 = (c) it.next();
                if (ke.d0.a(cVar3.a, arrayList)) {
                    cVar = cVar3;
                    break;
                }
            }
        } else {
            cVar = this.f15024s;
        }
        if (cVar != null) {
            cVar.c(nVar);
            return cVar;
        }
        c i10 = i(arrayList, false, nVar, z5);
        if (!this.f15013f) {
            this.f15024s = i10;
        }
        this.f15018m.add(i10);
        return i10;
    }

    public final c h(List list, boolean z5, n nVar) {
        this.f15022q.getClass();
        boolean z6 = this.f15015h | z5;
        y yVar = this.f15022q;
        byte[] bArr = this.f15027v;
        Looper looper = this.f15025t;
        looper.getClass();
        ic.c0 c0Var = this.f15028w;
        c0Var.getClass();
        c cVar = new c(this.f15009b, yVar, this.f15016i, this.k, list, z6, z5, bArr, this.f15012e, this.f15011d, looper, this.j, c0Var);
        cVar.c(nVar);
        if (this.f15017l != -9223372036854775807L) {
            cVar.c(null);
        }
        return cVar;
    }

    public final c i(List list, boolean z5, n nVar, boolean z6) {
        c h6 = h(list, z5, nVar);
        boolean g6 = g(h6);
        long j = this.f15017l;
        Set set = this.f15020o;
        if (g6 && !set.isEmpty()) {
            e1 it = fi.h0.m(set).iterator();
            while (it.hasNext()) {
                ((k) it.next()).d(null);
            }
            h6.d(nVar);
            if (j != -9223372036854775807L) {
                h6.d(null);
            }
            h6 = h(list, z5, nVar);
        }
        if (g(h6) && z6) {
            Set set2 = this.f15019n;
            if (!set2.isEmpty()) {
                e1 it2 = fi.h0.m(set2).iterator();
                while (it2.hasNext()) {
                    ((e) it2.next()).release();
                }
                if (!set.isEmpty()) {
                    e1 it3 = fi.h0.m(set).iterator();
                    while (it3.hasNext()) {
                        ((k) it3.next()).d(null);
                    }
                }
                h6.d(nVar);
                if (j != -9223372036854775807L) {
                    h6.d(null);
                }
                return h(list, z5, nVar);
            }
        }
        return h6;
    }

    public final void k() {
        if (this.f15022q != null && this.f15021p == 0 && this.f15018m.isEmpty() && this.f15019n.isEmpty()) {
            y yVar = this.f15022q;
            yVar.getClass();
            yVar.release();
            this.f15022q = null;
        }
    }

    public final void l(boolean z5) {
        if (z5 && this.f15025t == null) {
            ke.b.O("DefaultDrmSessionMgr", "DefaultDrmSessionManager accessed before setPlayer(), possibly on the wrong thread.", new IllegalStateException());
            return;
        }
        Thread currentThread = Thread.currentThread();
        Looper looper = this.f15025t;
        looper.getClass();
        if (currentThread != looper.getThread()) {
            ke.b.O("DefaultDrmSessionMgr", "DefaultDrmSessionManager accessed on the wrong thread.\nCurrent thread: " + Thread.currentThread().getName() + "\nExpected thread: " + this.f15025t.getThread().getName(), new IllegalStateException());
        }
    }

    @Override // nc.r
    public final void release() {
        l(true);
        int i5 = this.f15021p - 1;
        this.f15021p = i5;
        if (i5 != 0) {
            return;
        }
        if (this.f15017l != -9223372036854775807L) {
            ArrayList arrayList = new ArrayList(this.f15018m);
            for (int i6 = 0; i6 < arrayList.size(); i6++) {
                ((c) arrayList.get(i6)).d(null);
            }
        }
        e1 it = fi.h0.m(this.f15019n).iterator();
        while (it.hasNext()) {
            ((e) it.next()).release();
        }
        k();
    }
}
