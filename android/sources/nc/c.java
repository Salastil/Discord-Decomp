package nc;

import android.media.NotProvisionedException;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.SystemClock;
import android.util.Pair;
import com.google.android.exoplayer2.source.LoadEventInfo;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class c implements k {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final y f14977b;

    /* renamed from: c, reason: collision with root package name */
    public final e4.r f14978c;

    /* renamed from: d, reason: collision with root package name */
    public final u4.b f14979d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f14980e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f14981f;

    /* renamed from: g, reason: collision with root package name */
    public final HashMap f14982g;

    /* renamed from: h, reason: collision with root package name */
    public final ke.d f14983h;

    /* renamed from: i, reason: collision with root package name */
    public final p9.d f14984i;
    public final ic.c0 j;
    public final f0 k;

    /* renamed from: l, reason: collision with root package name */
    public final UUID f14985l;

    /* renamed from: m, reason: collision with root package name */
    public final Looper f14986m;

    /* renamed from: n, reason: collision with root package name */
    public final cd.d f14987n;

    /* renamed from: o, reason: collision with root package name */
    public int f14988o;

    /* renamed from: p, reason: collision with root package name */
    public int f14989p;

    /* renamed from: q, reason: collision with root package name */
    public HandlerThread f14990q;

    /* renamed from: r, reason: collision with root package name */
    public a f14991r;

    /* renamed from: s, reason: collision with root package name */
    public mc.b f14992s;

    /* renamed from: t, reason: collision with root package name */
    public j f14993t;

    /* renamed from: u, reason: collision with root package name */
    public byte[] f14994u;

    /* renamed from: v, reason: collision with root package name */
    public byte[] f14995v;

    /* renamed from: w, reason: collision with root package name */
    public w f14996w;

    /* renamed from: x, reason: collision with root package name */
    public x f14997x;

    public c(UUID uuid, y yVar, e4.r rVar, u4.b bVar, List list, boolean z5, boolean z6, byte[] bArr, HashMap hashMap, d0 d0Var, Looper looper, p9.d dVar, ic.c0 c0Var) {
        this.f14985l = uuid;
        this.f14978c = rVar;
        this.f14979d = bVar;
        this.f14977b = yVar;
        this.f14980e = z5;
        this.f14981f = z6;
        if (bArr != null) {
            this.f14995v = bArr;
            this.a = null;
        } else {
            list.getClass();
            this.a = Collections.unmodifiableList(list);
        }
        this.f14982g = hashMap;
        this.k = d0Var;
        this.f14983h = new ke.d();
        this.f14984i = dVar;
        this.j = c0Var;
        this.f14988o = 2;
        this.f14986m = looper;
        this.f14987n = new cd.d(this, looper, 3);
    }

    @Override // nc.k
    public final UUID a() {
        m();
        return this.f14985l;
    }

    @Override // nc.k
    public final boolean b() {
        m();
        return this.f14980e;
    }

    @Override // nc.k
    public final void c(n nVar) {
        m();
        if (this.f14989p < 0) {
            ke.b.r("DefaultDrmSession", "Session reference count less than zero: " + this.f14989p);
            this.f14989p = 0;
        }
        if (nVar != null) {
            ke.d dVar = this.f14983h;
            synchronized (dVar.f13290d) {
                try {
                    ArrayList arrayList = new ArrayList(dVar.f13293v);
                    arrayList.add(nVar);
                    dVar.f13293v = Collections.unmodifiableList(arrayList);
                    Integer num = (Integer) dVar.f13291e.get(nVar);
                    if (num == null) {
                        HashSet hashSet = new HashSet(dVar.f13292i);
                        hashSet.add(nVar);
                        dVar.f13292i = Collections.unmodifiableSet(hashSet);
                    }
                    dVar.f13291e.put(nVar, Integer.valueOf(num != null ? num.intValue() + 1 : 1));
                } finally {
                }
            }
        }
        int i5 = this.f14989p + 1;
        this.f14989p = i5;
        if (i5 == 1) {
            ke.b.k(this.f14988o == 2);
            HandlerThread handlerThread = new HandlerThread("ExoPlayer:DrmRequestHandler");
            this.f14990q = handlerThread;
            handlerThread.start();
            this.f14991r = new a(this, this.f14990q.getLooper());
            if (k()) {
                g(true);
            }
        } else if (nVar != null && h() && this.f14983h.a(nVar) == 1) {
            nVar.c(this.f14988o);
        }
        f fVar = (f) this.f14979d.f18810e;
        if (fVar.f15017l != -9223372036854775807L) {
            fVar.f15020o.remove(this);
            Handler handler = fVar.f15026u;
            handler.getClass();
            handler.removeCallbacksAndMessages(this);
        }
    }

    @Override // nc.k
    public final void d(n nVar) {
        m();
        int i5 = this.f14989p;
        if (i5 <= 0) {
            ke.b.r("DefaultDrmSession", "release() called on a session that's already fully released.");
            return;
        }
        int i6 = i5 - 1;
        this.f14989p = i6;
        if (i6 == 0) {
            this.f14988o = 0;
            cd.d dVar = this.f14987n;
            int i10 = ke.d0.a;
            dVar.removeCallbacksAndMessages(null);
            a aVar = this.f14991r;
            synchronized (aVar) {
                aVar.removeCallbacksAndMessages(null);
                aVar.a = true;
            }
            this.f14991r = null;
            this.f14990q.quit();
            this.f14990q = null;
            this.f14992s = null;
            this.f14993t = null;
            this.f14996w = null;
            this.f14997x = null;
            byte[] bArr = this.f14994u;
            if (bArr != null) {
                this.f14977b.q(bArr);
                this.f14994u = null;
            }
        }
        if (nVar != null) {
            ke.d dVar2 = this.f14983h;
            synchronized (dVar2.f13290d) {
                try {
                    Integer num = (Integer) dVar2.f13291e.get(nVar);
                    if (num != null) {
                        ArrayList arrayList = new ArrayList(dVar2.f13293v);
                        arrayList.remove(nVar);
                        dVar2.f13293v = Collections.unmodifiableList(arrayList);
                        if (num.intValue() == 1) {
                            dVar2.f13291e.remove(nVar);
                            HashSet hashSet = new HashSet(dVar2.f13292i);
                            hashSet.remove(nVar);
                            dVar2.f13292i = Collections.unmodifiableSet(hashSet);
                        } else {
                            dVar2.f13291e.put(nVar, Integer.valueOf(num.intValue() - 1));
                        }
                    }
                } finally {
                }
            }
            if (this.f14983h.a(nVar) == 0) {
                nVar.e();
            }
        }
        u4.b bVar = this.f14979d;
        int i11 = this.f14989p;
        f fVar = (f) bVar.f18810e;
        if (i11 == 1 && fVar.f15021p > 0 && fVar.f15017l != -9223372036854775807L) {
            fVar.f15020o.add(this);
            Handler handler = fVar.f15026u;
            handler.getClass();
            handler.postAtTime(new h1(27, this), this, SystemClock.uptimeMillis() + fVar.f15017l);
        } else if (i11 == 0) {
            fVar.f15018m.remove(this);
            if (fVar.f15023r == this) {
                fVar.f15023r = null;
            }
            if (fVar.f15024s == this) {
                fVar.f15024s = null;
            }
            e4.r rVar = fVar.f15016i;
            HashSet hashSet2 = (HashSet) rVar.f8000e;
            hashSet2.remove(this);
            if (((c) rVar.f8001i) == this) {
                rVar.f8001i = null;
                if (!hashSet2.isEmpty()) {
                    c cVar = (c) hashSet2.iterator().next();
                    rVar.f8001i = cVar;
                    x e9 = cVar.f14977b.e();
                    cVar.f14997x = e9;
                    a aVar2 = cVar.f14991r;
                    int i12 = ke.d0.a;
                    e9.getClass();
                    aVar2.getClass();
                    aVar2.obtainMessage(0, new b(LoadEventInfo.f5429c.getAndIncrement(), true, SystemClock.elapsedRealtime(), e9)).sendToTarget();
                }
            }
            if (fVar.f15017l != -9223372036854775807L) {
                Handler handler2 = fVar.f15026u;
                handler2.getClass();
                handler2.removeCallbacksAndMessages(this);
                fVar.f15020o.remove(this);
            }
        }
        fVar.k();
    }

    @Override // nc.k
    public final boolean e(String str) {
        m();
        byte[] bArr = this.f14994u;
        ke.b.l(bArr);
        return this.f14977b.o(bArr, str);
    }

    @Override // nc.k
    public final mc.b f() {
        m();
        return this.f14992s;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:40|(2:41|42)|(6:44|45|46|47|(1:49)|51)|54|45|46|47|(0)|51) */
    /* JADX WARN: Removed duplicated region for block: B:49:0x006b A[Catch: NumberFormatException -> 0x006f, TRY_LEAVE, TryCatch #2 {NumberFormatException -> 0x006f, blocks: (B:47:0x0063, B:49:0x006b), top: B:46:0x0063 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void g(boolean z5) {
        long min;
        long j;
        String str;
        String str2;
        Set set;
        if (this.f14981f) {
            return;
        }
        byte[] bArr = this.f14994u;
        int i5 = ke.d0.a;
        byte[] bArr2 = this.f14995v;
        if (bArr2 == null) {
            l(bArr, 1, z5);
            return;
        }
        if (this.f14988o != 4) {
            try {
                this.f14977b.p(bArr, bArr2);
            } catch (Exception e9) {
                i(1, e9);
                return;
            }
        }
        if (hc.h.f9711d.equals(this.f14985l)) {
            m();
            byte[] bArr3 = this.f14994u;
            Pair pair = null;
            Map b10 = bArr3 == null ? null : this.f14977b.b(bArr3);
            if (b10 != null) {
                long j5 = -9223372036854775807L;
                try {
                    str2 = (String) b10.get("LicenseDurationRemaining");
                } catch (NumberFormatException unused) {
                }
                if (str2 != null) {
                    j = Long.parseLong(str2);
                    Long valueOf = Long.valueOf(j);
                    str = (String) b10.get("PlaybackDurationRemaining");
                    if (str != null) {
                        j5 = Long.parseLong(str);
                    }
                    pair = new Pair(valueOf, Long.valueOf(j5));
                }
                j = -9223372036854775807L;
                Long valueOf2 = Long.valueOf(j);
                str = (String) b10.get("PlaybackDurationRemaining");
                if (str != null) {
                }
                pair = new Pair(valueOf2, Long.valueOf(j5));
            }
            pair.getClass();
            min = Math.min(((Long) pair.first).longValue(), ((Long) pair.second).longValue());
        } else {
            min = LongCompanionObject.MAX_VALUE;
        }
        if (min <= 60) {
            ke.b.q("DefaultDrmSession", "Offline license has expired or will expire soon. Remaining seconds: " + min);
            l(bArr, 2, z5);
            return;
        }
        if (min <= 0) {
            i(2, new e0());
            return;
        }
        this.f14988o = 4;
        ke.d dVar = this.f14983h;
        synchronized (dVar.f13290d) {
            set = dVar.f13292i;
        }
        Iterator it = set.iterator();
        while (it.hasNext()) {
            ((n) it.next()).b();
        }
    }

    @Override // nc.k
    public final j getError() {
        m();
        if (this.f14988o == 1) {
            return this.f14993t;
        }
        return null;
    }

    @Override // nc.k
    public final int getState() {
        m();
        return this.f14988o;
    }

    public final boolean h() {
        int i5 = this.f14988o;
        return i5 == 3 || i5 == 4;
    }

    public final void i(int i5, Exception exc) {
        int i6;
        Set set;
        int i10 = ke.d0.a;
        if (i10 < 21 || !t.a(exc)) {
            if (i10 < 23 || !u.a(exc)) {
                if (i10 < 18 || !s.b(exc)) {
                    if (i10 >= 18 && s.a(exc)) {
                        i6 = 6007;
                    } else if (exc instanceof h0) {
                        i6 = 6001;
                    } else if (exc instanceof d) {
                        i6 = 6003;
                    } else if (exc instanceof e0) {
                        i6 = 6008;
                    } else if (i5 != 1) {
                        if (i5 == 2) {
                            i6 = 6004;
                        } else if (i5 != 3) {
                            throw new IllegalArgumentException();
                        }
                    }
                }
                i6 = 6002;
            }
            i6 = 6006;
        } else {
            i6 = t.b(exc);
        }
        this.f14993t = new j(i6, exc);
        ke.b.s("DefaultDrmSession", "DRM session error", exc);
        ke.d dVar = this.f14983h;
        synchronized (dVar.f13290d) {
            set = dVar.f13292i;
        }
        Iterator it = set.iterator();
        while (it.hasNext()) {
            ((n) it.next()).d(exc);
        }
        if (this.f14988o != 4) {
            this.f14988o = 1;
        }
    }

    public final void j(Exception exc, boolean z5) {
        if (!(exc instanceof NotProvisionedException)) {
            i(z5 ? 1 : 2, exc);
            return;
        }
        e4.r rVar = this.f14978c;
        ((HashSet) rVar.f8000e).add(this);
        if (((c) rVar.f8001i) != null) {
            return;
        }
        rVar.f8001i = this;
        x e9 = this.f14977b.e();
        this.f14997x = e9;
        a aVar = this.f14991r;
        int i5 = ke.d0.a;
        e9.getClass();
        aVar.getClass();
        aVar.obtainMessage(0, new b(LoadEventInfo.f5429c.getAndIncrement(), true, SystemClock.elapsedRealtime(), e9)).sendToTarget();
    }

    public final boolean k() {
        Set set;
        if (h()) {
            return true;
        }
        try {
            byte[] m5 = this.f14977b.m();
            this.f14994u = m5;
            this.f14977b.g(m5, this.j);
            this.f14992s = this.f14977b.k(this.f14994u);
            this.f14988o = 3;
            ke.d dVar = this.f14983h;
            synchronized (dVar.f13290d) {
                set = dVar.f13292i;
            }
            Iterator it = set.iterator();
            while (it.hasNext()) {
                ((n) it.next()).c(3);
            }
            this.f14994u.getClass();
            return true;
        } catch (NotProvisionedException unused) {
            e4.r rVar = this.f14978c;
            ((HashSet) rVar.f8000e).add(this);
            if (((c) rVar.f8001i) == null) {
                rVar.f8001i = this;
                x e9 = this.f14977b.e();
                this.f14997x = e9;
                a aVar = this.f14991r;
                int i5 = ke.d0.a;
                e9.getClass();
                aVar.getClass();
                aVar.obtainMessage(0, new b(LoadEventInfo.f5429c.getAndIncrement(), true, SystemClock.elapsedRealtime(), e9)).sendToTarget();
            }
            return false;
        } catch (Exception e10) {
            i(1, e10);
            return false;
        }
    }

    public final void l(byte[] bArr, int i5, boolean z5) {
        try {
            w v5 = this.f14977b.v(bArr, this.a, i5, this.f14982g);
            this.f14996w = v5;
            a aVar = this.f14991r;
            int i6 = ke.d0.a;
            v5.getClass();
            aVar.getClass();
            aVar.obtainMessage(1, new b(LoadEventInfo.f5429c.getAndIncrement(), z5, SystemClock.elapsedRealtime(), v5)).sendToTarget();
        } catch (Exception e9) {
            j(e9, true);
        }
    }

    public final void m() {
        Thread currentThread = Thread.currentThread();
        Looper looper = this.f14986m;
        if (currentThread != looper.getThread()) {
            ke.b.O("DefaultDrmSession", "DefaultDrmSession accessed on the wrong thread.\nCurrent thread: " + Thread.currentThread().getName() + "\nExpected thread: " + looper.getThread().getName(), new IllegalStateException());
        }
    }
}
