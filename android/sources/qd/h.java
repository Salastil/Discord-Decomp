package qd;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.util.SparseArray;
import bg.y0;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.upstream.DataSource;
import hc.e0;
import hc.o0;
import hc.p0;
import ic.c0;
import ie.k0;
import ie.l0;
import ie.m0;
import ie.n0;
import ie.s0;
import ie.u0;
import java.math.RoundingMode;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;
import nc.r;
import nd.s;
import qa.t;

/* loaded from: classes3.dex */
public final class h extends nd.a {
    public final MediaItem E;
    public final boolean F;
    public final DataSource.Factory G;
    public final j H;
    public final j8.b I;
    public final r J;
    public final p9.d K;
    public final e4.i L;
    public final long M;
    public final long N;
    public final a1.d O;
    public final m0 P;
    public final t Q;
    public final Object R;
    public final SparseArray S;
    public final d T;
    public final d U;
    public final f V;
    public final l0 W;
    public DataSource X;
    public k0 Y;
    public u0 Z;
    public y0 a0;

    /* renamed from: b0, reason: collision with root package name */
    public Handler f16833b0;

    /* renamed from: c0, reason: collision with root package name */
    public o0 f16834c0;

    /* renamed from: d0, reason: collision with root package name */
    public Uri f16835d0;

    /* renamed from: e0, reason: collision with root package name */
    public final Uri f16836e0;

    /* renamed from: f0, reason: collision with root package name */
    public rd.c f16837f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f16838g0;
    public long h0;

    /* renamed from: i0, reason: collision with root package name */
    public long f16839i0;

    /* renamed from: j0, reason: collision with root package name */
    public long f16840j0;

    /* renamed from: k0, reason: collision with root package name */
    public int f16841k0;

    /* renamed from: l0, reason: collision with root package name */
    public long f16842l0;

    /* renamed from: m0, reason: collision with root package name */
    public int f16843m0;

    static {
        e0.a("goog.exo.dash");
    }

    /* JADX WARN: Type inference failed for: r2v11, types: [qd.d] */
    /* JADX WARN: Type inference failed for: r2v12, types: [qd.d] */
    public h(MediaItem mediaItem, DataSource.Factory factory, m0 m0Var, j jVar, j8.b bVar, r rVar, p9.d dVar, long j, long j5) {
        this.E = mediaItem;
        this.f16834c0 = mediaItem.f5237v;
        p0 p0Var = mediaItem.f5235e;
        p0Var.getClass();
        Uri uri = p0Var.f9833d;
        this.f16835d0 = uri;
        this.f16836e0 = uri;
        this.f16837f0 = null;
        this.G = factory;
        this.P = m0Var;
        this.H = jVar;
        this.J = rVar;
        this.K = dVar;
        this.M = j;
        this.N = j5;
        this.I = bVar;
        this.L = new e4.i(11);
        this.F = false;
        this.O = a(null);
        this.R = new Object();
        this.S = new SparseArray();
        this.V = new f(0, this);
        this.f16842l0 = -9223372036854775807L;
        this.f16840j0 = -9223372036854775807L;
        this.Q = new t(1, this);
        this.W = new u4.c(this);
        final int i5 = 0;
        this.T = new Runnable(this) { // from class: qd.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ h f16823e;

            {
                this.f16823e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i5) {
                    case 0:
                        this.f16823e.y();
                        break;
                    default:
                        this.f16823e.x(false);
                        break;
                }
            }
        };
        final int i6 = 1;
        this.U = new Runnable(this) { // from class: qd.d

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ h f16823e;

            {
                this.f16823e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                switch (i6) {
                    case 0:
                        this.f16823e.y();
                        break;
                    default:
                        this.f16823e.x(false);
                        break;
                }
            }
        };
    }

    public static boolean t(rd.h hVar) {
        List list = hVar.f17242c;
        for (int i5 = 0; i5 < list.size(); i5++) {
            int i6 = ((rd.a) list.get(i5)).f17206b;
            if (i6 == 1 || i6 == 2) {
                return true;
            }
        }
        return false;
    }

    @Override // nd.a
    public final nd.q b(s sVar, ie.q qVar, long j) {
        int intValue = ((Integer) sVar.a).intValue() - this.f16843m0;
        a1.d a = a(sVar);
        nc.n nVar = new nc.n(this.f15057v.f15047c, 0, sVar);
        int i5 = this.f16843m0 + intValue;
        rd.c cVar = this.f16837f0;
        u0 u0Var = this.Z;
        long j5 = this.f16840j0;
        c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        c cVar2 = new c(i5, cVar, this.L, intValue, this.H, u0Var, this.J, nVar, this.K, a, j5, this.W, qVar, this.I, this.V, c0Var);
        this.S.put(i5, cVar2);
        return cVar2;
    }

    @Override // nd.a
    public final MediaItem h() {
        return this.E;
    }

    @Override // nd.a
    public final void j() {
        this.W.b();
    }

    @Override // nd.a
    public final void m(u0 u0Var) {
        this.Z = u0Var;
        Looper myLooper = Looper.myLooper();
        c0 c0Var = this.f15060y;
        ke.b.l(c0Var);
        r rVar = this.J;
        rVar.c(myLooper, c0Var);
        rVar.a();
        if (this.F) {
            x(false);
            return;
        }
        this.X = this.G.createDataSource();
        this.Y = new k0("DashMediaSource");
        this.f16833b0 = d0.m(null);
        y();
    }

    @Override // nd.a
    public final void o(nd.q qVar) {
        c cVar = (c) qVar;
        q qVar2 = cVar.J;
        qVar2.F = true;
        qVar2.f16876v.removeCallbacksAndMessages(null);
        for (pd.h hVar : cVar.O) {
            hVar.y(cVar);
        }
        cVar.N = null;
        this.S.remove(cVar.f16815d);
    }

    @Override // nd.a
    public final void q() {
        this.f16838g0 = false;
        this.X = null;
        k0 k0Var = this.Y;
        if (k0Var != null) {
            k0Var.e(null);
            this.Y = null;
        }
        this.h0 = 0L;
        this.f16839i0 = 0L;
        this.f16837f0 = this.F ? this.f16837f0 : null;
        this.f16835d0 = this.f16836e0;
        this.a0 = null;
        Handler handler = this.f16833b0;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.f16833b0 = null;
        }
        this.f16840j0 = -9223372036854775807L;
        this.f16841k0 = 0;
        this.f16842l0 = -9223372036854775807L;
        this.S.clear();
        e4.i iVar = this.L;
        ((HashMap) iVar.f7952d).clear();
        ((HashMap) iVar.f7953e).clear();
        ((HashMap) iVar.f7954i).clear();
        this.J.release();
    }

    public final void u() {
        boolean z5;
        k0 k0Var = this.Y;
        gj.c cVar = new gj.c(28, this);
        synchronized (ke.b.f13283i) {
            z5 = ke.b.j;
        }
        if (z5) {
            cVar.R();
            return;
        }
        if (k0Var == null) {
            k0Var = new k0("SntpClient");
        }
        k0Var.f(new io.sentry.hints.j(12), new ha.l(cVar), 1);
    }

    public final void w(n0 n0Var) {
        long j = n0Var.f10697d;
        s0 s0Var = n0Var.f10700v;
        Uri uri = s0Var.f10756i;
        LoadEventInfo loadEventInfo = new LoadEventInfo(s0Var.f10755e, s0Var.f10757v);
        this.K.getClass();
        this.O.j(loadEventInfo, n0Var.f10699i, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:231:0x049d, code lost:
    
        if (r8 > r21) goto L237;
     */
    /* JADX WARN: Code restructure failed: missing block: B:232:0x04a0, code lost:
    
        if (r11 > 0) goto L237;
     */
    /* JADX WARN: Code restructure failed: missing block: B:233:0x04a3, code lost:
    
        if (r11 < 0) goto L237;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x0174, code lost:
    
        r11 = r18;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:102:0x01da  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x023e  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x0258  */
    /* JADX WARN: Removed duplicated region for block: B:189:0x0395  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x03b9  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x03d8  */
    /* JADX WARN: Removed duplicated region for block: B:257:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:258:0x03be  */
    /* JADX WARN: Removed duplicated region for block: B:259:0x039a  */
    /* JADX WARN: Removed duplicated region for block: B:275:0x039d  */
    /* JADX WARN: Removed duplicated region for block: B:277:0x01d7 A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r10v18 */
    /* JADX WARN: Type inference failed for: r10v19, types: [int] */
    /* JADX WARN: Type inference failed for: r10v21 */
    /* JADX WARN: Type inference failed for: r15v4 */
    /* JADX WARN: Type inference failed for: r15v5, types: [int] */
    /* JADX WARN: Type inference failed for: r15v7 */
    /* JADX WARN: Type inference failed for: r5v29, types: [ge.p] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void x(boolean z5) {
        long j;
        long j5;
        long j7;
        boolean z6;
        rd.c cVar;
        long j10;
        long j11;
        long j12;
        i c6;
        long j13;
        long j14;
        float f2;
        float f10;
        boolean z7;
        i c8;
        boolean z8;
        boolean z10 = false;
        int i5 = 0;
        while (true) {
            SparseArray sparseArray = this.S;
            if (i5 >= sparseArray.size()) {
                break;
            }
            int keyAt = sparseArray.keyAt(i5);
            if (keyAt >= this.f16843m0) {
                c cVar2 = (c) sparseArray.valueAt(i5);
                rd.c cVar3 = this.f16837f0;
                int i6 = keyAt - this.f16843m0;
                cVar2.R = cVar3;
                cVar2.S = i6;
                q qVar = cVar2.J;
                qVar.E = z10;
                qVar.f16878x = cVar3;
                Iterator it = qVar.f16877w.entrySet().iterator();
                while (it.hasNext()) {
                    if (((Long) ((Map.Entry) it.next()).getKey()).longValue() < qVar.f16878x.f17220h) {
                        it.remove();
                    }
                }
                pd.h[] hVarArr = cVar2.O;
                if (hVarArr != null) {
                    int length = hVarArr.length;
                    for (?? r10 = z10; r10 < length; r10++) {
                        m mVar = (m) hVarArr[r10].f16376w;
                        k[] kVarArr = mVar.f16857h;
                        try {
                            mVar.j = cVar3;
                            mVar.k = i6;
                            long d6 = cVar3.d(i6);
                            ArrayList h6 = mVar.h();
                            for (?? r15 = z10; r15 < kVarArr.length; r15++) {
                                try {
                                    kVarArr[r15] = kVarArr[r15].a(d6, (rd.m) h6.get(mVar.f16858i.h(r15)));
                                } catch (nd.b e9) {
                                    e = e9;
                                    mVar.f16859l = e;
                                    z10 = false;
                                }
                            }
                        } catch (nd.b e10) {
                            e = e10;
                        }
                        z10 = false;
                    }
                    z8 = true;
                    cVar2.N.c(cVar2);
                } else {
                    z8 = true;
                }
                cVar2.T = cVar3.b(i6).f17243d;
                for (n nVar : cVar2.P) {
                    Iterator it2 = cVar2.T.iterator();
                    while (true) {
                        if (it2.hasNext()) {
                            rd.g gVar = (rd.g) it2.next();
                            if (gVar.a().equals(nVar.f16865w.a())) {
                                nVar.a(gVar, (cVar3.f17216d && i6 == cVar3.f17223m.size() + (-1)) ? z8 : false);
                            }
                        }
                    }
                }
            }
            i5++;
            z10 = false;
        }
        int i10 = 1;
        rd.h b10 = this.f16837f0.b(0);
        int size = this.f16837f0.f17223m.size() - 1;
        rd.h b11 = this.f16837f0.b(size);
        long d7 = this.f16837f0.d(size);
        long I = d0.I(d0.v(this.f16840j0));
        long d8 = this.f16837f0.d(0);
        long j15 = b10.f17241b;
        List list = b10.f17242c;
        long I2 = d0.I(j15);
        boolean t5 = t(b10);
        long j16 = I2;
        int i11 = 0;
        while (true) {
            long j17 = I2;
            if (i11 >= list.size()) {
                j = 0;
                j5 = j16;
                break;
            }
            rd.a aVar = (rd.a) list.get(i11);
            j = 0;
            List list2 = aVar.f17207c;
            int i12 = aVar.f17206b;
            boolean z11 = (i12 == i10 || i12 == 2) ? false : true;
            if ((!t5 || !z11) && !list2.isEmpty()) {
                i c10 = ((rd.m) list2.get(0)).c();
                if (c10 != null && c10.B(d8, I) != 0) {
                    j16 = Math.max(j16, c10.b(c10.f(d8, I)) + j17);
                }
            }
            i11++;
            I2 = j17;
            i10 = 1;
        }
        long j18 = b11.f17241b;
        List list3 = b11.f17242c;
        long I3 = d0.I(j18);
        boolean t10 = t(b11);
        long j19 = LongCompanionObject.MAX_VALUE;
        int i13 = 0;
        while (true) {
            if (i13 >= list3.size()) {
                j7 = j19;
                break;
            }
            rd.a aVar2 = (rd.a) list3.get(i13);
            boolean z12 = t10;
            List list4 = aVar2.f17207c;
            int i14 = aVar2.f17206b;
            long j20 = I3;
            if (i14 != 1 && i14 != 2) {
                z7 = true;
                if ((z12 || !z7) && !list4.isEmpty()) {
                    c8 = ((rd.m) list4.get(0)).c();
                    if (c8 != null) {
                        j7 = j20 + d7;
                        break;
                    }
                    long B = c8.B(d7, I);
                    if (B == j) {
                        j7 = j20;
                        break;
                    } else {
                        long f11 = (c8.f(d7, I) + B) - 1;
                        j19 = Math.min(j19, c8.e(f11, d7) + c8.b(f11) + j20);
                    }
                }
                i13++;
                t10 = z12;
                I3 = j20;
            }
            z7 = false;
            if (z12) {
            }
            c8 = ((rd.m) list4.get(0)).c();
            if (c8 != null) {
            }
        }
        if (this.f16837f0.f17216d) {
            for (int i15 = 0; i15 < list3.size(); i15++) {
                i c11 = ((rd.m) ((rd.a) list3.get(i15)).f17207c.get(0)).c();
                if (c11 != null && !c11.v()) {
                }
            }
            z6 = true;
            if (z6) {
                long j21 = this.f16837f0.f17218f;
                if (j21 != -9223372036854775807L) {
                    j5 = Math.max(j5, j7 - d0.I(j21));
                }
            }
            long j22 = j7 - j5;
            cVar = this.f16837f0;
            if (cVar.f17216d) {
                j10 = -9223372036854775807L;
                j11 = -9223372036854775807L;
                j12 = j;
            } else {
                ke.b.k(cVar.a != -9223372036854775807L);
                long I4 = (I - d0.I(this.f16837f0.a)) - j5;
                long U = d0.U(I4);
                o0 o0Var = this.E.f5237v;
                long j23 = o0Var.f9827i;
                if (j23 != -9223372036854775807L) {
                    j13 = Math.min(U, j23);
                } else {
                    rd.t tVar = this.f16837f0.j;
                    if (tVar != null) {
                        long j24 = tVar.f17271c;
                        if (j24 != -9223372036854775807L) {
                            j13 = Math.min(U, j24);
                        }
                    }
                    j13 = U;
                }
                long U2 = d0.U(I4 - j22);
                if (U2 < j && j13 > j) {
                    U2 = j;
                }
                j10 = -9223372036854775807L;
                long j25 = this.f16837f0.f17215c;
                if (j25 != -9223372036854775807L) {
                    U2 = Math.min(U2 + j25, U);
                }
                long j26 = U2;
                long j27 = o0Var.f9826e;
                if (j27 != -9223372036854775807L) {
                    j26 = d0.j(j27, j26, U);
                } else {
                    rd.t tVar2 = this.f16837f0.j;
                    if (tVar2 != null) {
                        long j28 = tVar2.f17270b;
                        if (j28 != -9223372036854775807L) {
                            j26 = d0.j(j28, j26, U);
                        }
                    }
                }
                long j29 = j26;
                long j30 = j29 > j13 ? j29 : j13;
                long j31 = this.f16834c0.f9825d;
                if (j31 == -9223372036854775807L) {
                    rd.c cVar4 = this.f16837f0;
                    rd.t tVar3 = cVar4.j;
                    if (tVar3 != null) {
                        long j32 = tVar3.a;
                        if (j32 != -9223372036854775807L) {
                            j31 = j32;
                        }
                    }
                    j31 = cVar4.f17219g;
                    if (j31 == -9223372036854775807L) {
                        j31 = this.M;
                    }
                }
                if (j31 < j29) {
                    j31 = j29;
                }
                long j33 = this.N;
                if (j31 > j30) {
                    j31 = d0.j(d0.U(I4 - Math.min(j33, j22 / 2)), j29, j30);
                }
                long j34 = j31;
                float f12 = o0Var.f9828v;
                if (f12 == -3.4028235E38f) {
                    rd.t tVar4 = this.f16837f0.j;
                    f12 = tVar4 != null ? tVar4.f17272d : -3.4028235E38f;
                }
                float f13 = o0Var.f9829w;
                if (f13 == -3.4028235E38f) {
                    rd.t tVar5 = this.f16837f0.j;
                    f13 = tVar5 != null ? tVar5.f17273e : -3.4028235E38f;
                }
                if (f12 == -3.4028235E38f && f13 == -3.4028235E38f) {
                    rd.t tVar6 = this.f16837f0.j;
                    j14 = 2;
                    if (tVar6 == null || tVar6.a == -9223372036854775807L) {
                        f10 = 1.0f;
                        f2 = 1.0f;
                        this.f16834c0 = new o0(j34, j29, j30, f10, f2);
                        long U3 = d0.U(j5) + this.f16837f0.a;
                        long I5 = I4 - d0.I(this.f16834c0.f9825d);
                        long min = Math.min(j33, j22 / j14);
                        j12 = I5 >= min ? min : I5;
                        j11 = U3;
                    }
                } else {
                    j14 = 2;
                }
                f10 = f12;
                f2 = f13;
                this.f16834c0 = new o0(j34, j29, j30, f10, f2);
                long U32 = d0.U(j5) + this.f16837f0.a;
                long I52 = I4 - d0.I(this.f16834c0.f9825d);
                long min2 = Math.min(j33, j22 / j14);
                if (I52 >= min2) {
                }
                j11 = U32;
            }
            long I6 = j5 - d0.I(b10.f17241b);
            rd.c cVar5 = this.f16837f0;
            n(new e(cVar5.a, j11, this.f16840j0, this.f16843m0, I6, j22, j12, cVar5, this.E, !cVar5.f17216d ? this.f16834c0 : null));
            if (this.F) {
                Handler handler = this.f16833b0;
                d dVar = this.U;
                handler.removeCallbacks(dVar);
                if (z6) {
                    Handler handler2 = this.f16833b0;
                    rd.c cVar6 = this.f16837f0;
                    long v5 = d0.v(this.f16840j0);
                    int size2 = cVar6.f17223m.size() - 1;
                    rd.h b12 = cVar6.b(size2);
                    long j35 = b12.f17241b;
                    List list5 = b12.f17242c;
                    long I7 = d0.I(j35);
                    long d10 = cVar6.d(size2);
                    long I8 = d0.I(v5);
                    long I9 = d0.I(cVar6.a);
                    long I10 = d0.I(5000L);
                    for (int i16 = 0; i16 < list5.size(); i16++) {
                        List list6 = ((rd.a) list5.get(i16)).f17207c;
                        if (!list6.isEmpty() && (c6 = ((rd.m) list6.get(0)).c()) != null) {
                            long g6 = (c6.g(d10, I8) + (I9 + I7)) - I8;
                            if (g6 < I10 - 100000 || (g6 > I10 && g6 < I10 + 100000)) {
                                I10 = g6;
                            }
                        }
                    }
                    RoundingMode roundingMode = RoundingMode.CEILING;
                    roundingMode.getClass();
                    long j36 = I10 / 1000;
                    long j37 = I10 - (1000 * j36);
                    if (j37 != j) {
                        int i17 = ((int) ((I10 ^ 1000) >> 63)) | 1;
                        switch (gi.c.a[roundingMode.ordinal()]) {
                            case 1:
                                if (j37 != j) {
                                    throw new ArithmeticException("mode was UNNECESSARY, but rounding was necessary");
                                }
                                break;
                            case 2:
                                break;
                            case 3:
                                break;
                            case 4:
                                j36 += i17;
                                break;
                            case 5:
                                break;
                            case 6:
                            case 7:
                            case 8:
                                long abs = Math.abs(j37);
                                long abs2 = abs - (Math.abs(1000L) - abs);
                                if (abs2 == j) {
                                    RoundingMode roundingMode2 = RoundingMode.HALF_UP;
                                    RoundingMode roundingMode3 = RoundingMode.HALF_EVEN;
                                    break;
                                }
                                break;
                            default:
                                throw new AssertionError();
                        }
                    }
                    handler2.postDelayed(dVar, j36);
                }
                if (this.f16838g0) {
                    y();
                    return;
                }
                if (z5) {
                    rd.c cVar7 = this.f16837f0;
                    if (cVar7.f17216d) {
                        long j38 = cVar7.f17217e;
                        if (j38 != j10) {
                            this.f16833b0.postDelayed(this.T, Math.max(j, (this.h0 + (j38 == j ? 5000L : j38)) - SystemClock.elapsedRealtime()));
                            return;
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        z6 = false;
        if (z6) {
        }
        long j222 = j7 - j5;
        cVar = this.f16837f0;
        if (cVar.f17216d) {
        }
        long I62 = j5 - d0.I(b10.f17241b);
        rd.c cVar52 = this.f16837f0;
        n(new e(cVar52.a, j11, this.f16840j0, this.f16843m0, I62, j222, j12, cVar52, this.E, !cVar52.f17216d ? this.f16834c0 : null));
        if (this.F) {
        }
    }

    public final void y() {
        Uri uri;
        this.f16833b0.removeCallbacks(this.T);
        if (this.Y.c()) {
            return;
        }
        if (this.Y.d()) {
            this.f16838g0 = true;
            return;
        }
        synchronized (this.R) {
            uri = this.f16835d0;
        }
        this.f16838g0 = false;
        n0 n0Var = new n0(this.X, uri, 4, this.P);
        this.Y.f(n0Var, this.Q, this.K.k(4));
        this.O.r(new LoadEventInfo(n0Var.f10698e), n0Var.f10699i, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }
}
