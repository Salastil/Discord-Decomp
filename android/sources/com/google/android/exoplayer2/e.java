package com.google.android.exoplayer2;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;
import android.util.Pair;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.reactnativecommunity.webview.RNCWebViewManager;
import fi.e0;
import fi.r0;
import ge.u;
import hc.b0;
import hc.d0;
import hc.d1;
import hc.e1;
import hc.f1;
import hc.g1;
import hc.i1;
import hc.j1;
import hc.k;
import hc.l1;
import hc.m;
import hc.m1;
import hc.o0;
import hc.o1;
import hc.p1;
import hc.r;
import hc.s1;
import hc.v0;
import hc.w0;
import hc.z;
import ic.c0;
import io.sentry.android.core.q;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Random;
import java.util.Set;
import java.util.concurrent.atomic.AtomicBoolean;
import jc.n0;
import ke.a0;
import ke.n;
import ke.y;
import nd.a1;
import nd.p;
import nd.q0;
import nd.s;
import nd.s0;
import nd.t0;

/* loaded from: classes3.dex */
public final class e implements Handler.Callback, p, j1 {
    public final a0 E;
    public final HandlerThread F;
    public final Looper G;
    public final Timeline.Window H;
    public final s1 I;
    public final long J;
    public final k K;
    public final ArrayList L;
    public final y M;
    public final r N;
    public final f O;
    public final f1 P;
    public final hc.i Q;
    public final long R;
    public p1 S;
    public i1 T;
    public b0 U;
    public boolean V;
    public boolean X;
    public boolean Y;
    public boolean Z;
    public int a0;

    /* renamed from: b0, reason: collision with root package name */
    public boolean f5391b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f5392c0;

    /* renamed from: d, reason: collision with root package name */
    public final hc.e[] f5393d;

    /* renamed from: d0, reason: collision with root package name */
    public boolean f5394d0;

    /* renamed from: e, reason: collision with root package name */
    public final Set f5395e;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f5396e0;

    /* renamed from: f0, reason: collision with root package name */
    public int f5397f0;

    /* renamed from: g0, reason: collision with root package name */
    public d0 f5398g0;
    public long h0;

    /* renamed from: i, reason: collision with root package name */
    public final hc.e[] f5399i;

    /* renamed from: i0, reason: collision with root package name */
    public int f5400i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f5401j0;

    /* renamed from: k0, reason: collision with root package name */
    public c f5402k0;

    /* renamed from: v, reason: collision with root package name */
    public final ge.r f5404v;

    /* renamed from: w, reason: collision with root package name */
    public final u f5405w;

    /* renamed from: x, reason: collision with root package name */
    public final hc.j f5406x;

    /* renamed from: y, reason: collision with root package name */
    public final ie.g f5407y;
    public boolean W = false;

    /* renamed from: l0, reason: collision with root package name */
    public long f5403l0 = -9223372036854775807L;

    public e(hc.e[] eVarArr, ge.r rVar, u uVar, hc.j jVar, ie.g gVar, int i5, boolean z5, ic.a aVar, p1 p1Var, hc.i iVar, long j, Looper looper, y yVar, r rVar2, c0 c0Var) {
        this.N = rVar2;
        this.f5393d = eVarArr;
        this.f5404v = rVar;
        this.f5405w = uVar;
        this.f5406x = jVar;
        this.f5407y = gVar;
        this.a0 = i5;
        this.f5391b0 = z5;
        this.S = p1Var;
        this.Q = iVar;
        this.R = j;
        this.M = yVar;
        this.J = jVar.f9754h;
        jVar.getClass();
        i1 i6 = i1.i(uVar);
        this.T = i6;
        this.U = new b0(i6);
        this.f5399i = new hc.e[eVarArr.length];
        DefaultTrackSelector defaultTrackSelector = (DefaultTrackSelector) rVar;
        defaultTrackSelector.getClass();
        for (int i10 = 0; i10 < eVarArr.length; i10++) {
            hc.e eVar = eVarArr[i10];
            eVar.f9662w = i10;
            eVar.f9663x = c0Var;
            this.f5399i[i10] = eVar;
            synchronized (eVar.f9658d) {
                eVar.K = defaultTrackSelector;
            }
        }
        this.K = new k(this, yVar);
        this.L = new ArrayList();
        this.f5395e = Collections.newSetFromMap(new IdentityHashMap());
        this.H = new Timeline.Window();
        this.I = new s1();
        rVar.a = this;
        rVar.f9201b = gVar;
        this.f5401j0 = true;
        a0 a = yVar.a(looper, null);
        this.O = new f(aVar, a);
        this.P = new f1(this, aVar, a, c0Var);
        HandlerThread handlerThread = new HandlerThread("ExoPlayer:Playback", -16);
        this.F = handlerThread;
        handlerThread.start();
        Looper looper2 = handlerThread.getLooper();
        this.G = looper2;
        this.E = yVar.a(looper2, this);
    }

    public static Pair E(Timeline timeline, d0 d0Var, boolean z5, int i5, boolean z6, Timeline.Window window, s1 s1Var) {
        Object F;
        Timeline timeline2 = d0Var.a;
        if (timeline.p()) {
            return null;
        }
        Timeline timeline3 = timeline2.p() ? timeline : timeline2;
        try {
            Pair i6 = timeline3.i(window, s1Var, d0Var.f9654b, d0Var.f9655c);
            if (!timeline.equals(timeline3)) {
                if (timeline.b(i6.first) == -1) {
                    if (!z5 || (F = F(window, s1Var, i5, z6, i6.first, timeline3, timeline)) == null) {
                        return null;
                    }
                    return timeline.i(window, s1Var, timeline.g(F, s1Var).f9871i, -9223372036854775807L);
                }
                if (timeline3.g(i6.first, s1Var).f9874x && timeline3.m(s1Var.f9871i, window, 0L).L == timeline3.b(i6.first)) {
                    return timeline.i(window, s1Var, timeline.g(i6.first, s1Var).f9871i, d0Var.f9655c);
                }
            }
            return i6;
        } catch (IndexOutOfBoundsException unused) {
            return null;
        }
    }

    public static Object F(Timeline.Window window, s1 s1Var, int i5, boolean z5, Object obj, Timeline timeline, Timeline timeline2) {
        int b10 = timeline.b(obj);
        int h6 = timeline.h();
        int i6 = 0;
        int i10 = b10;
        int i11 = -1;
        while (i6 < h6 && i11 == -1) {
            Timeline.Window window2 = window;
            s1 s1Var2 = s1Var;
            int i12 = i5;
            boolean z6 = z5;
            Timeline timeline3 = timeline;
            i10 = timeline3.d(i10, s1Var2, window2, i12, z6);
            if (i10 == -1) {
                break;
            }
            i11 = timeline2.b(timeline3.l(i10));
            i6++;
            timeline = timeline3;
            s1Var = s1Var2;
            window = window2;
            i5 = i12;
            z5 = z6;
        }
        if (i11 == -1) {
            return null;
        }
        return timeline2.l(i11);
    }

    public static void L(hc.e eVar, long j) {
        eVar.I = true;
        if (eVar instanceof wd.j) {
            wd.j jVar = (wd.j) eVar;
            ke.b.k(jVar.I);
            jVar.Z = j;
        }
    }

    public static boolean q(hc.e eVar) {
        return eVar.f9664y != 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0137  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x014a  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0174  */
    /* JADX WARN: Removed duplicated region for block: B:88:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:89:0x0151  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0145  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x013b  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0132  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void A(boolean z5, boolean z6, boolean z7, boolean z8) {
        long j;
        boolean z10;
        Timeline timeline;
        s sVar;
        Timeline timeline2;
        List list;
        this.E.a.removeMessages(2);
        this.f5402k0 = null;
        this.Y = false;
        k kVar = this.K;
        kVar.f9761e = false;
        q qVar = (q) kVar.f9762i;
        if (qVar.f11301d) {
            qVar.c(qVar.a());
            qVar.f11301d = false;
        }
        this.h0 = 1000000000000L;
        for (hc.e eVar : this.f5393d) {
            try {
                b(eVar);
            } catch (c | RuntimeException e9) {
                ke.b.s("ExoPlayerImplInternal", "Disable failed.", e9);
            }
        }
        if (z5) {
            for (hc.e eVar2 : this.f5393d) {
                if (this.f5395e.remove(eVar2)) {
                    try {
                        eVar2.w();
                    } catch (RuntimeException e10) {
                        ke.b.s("ExoPlayerImplInternal", "Reset failed.", e10);
                    }
                }
            }
        }
        this.f5397f0 = 0;
        i1 i1Var = this.T;
        s sVar2 = i1Var.f9732b;
        long j5 = i1Var.f9746r;
        if (!this.T.f9732b.a()) {
            i1 i1Var2 = this.T;
            s1 s1Var = this.I;
            s sVar3 = i1Var2.f9732b;
            Timeline timeline3 = i1Var2.a;
            if (!timeline3.p() && !timeline3.g(sVar3.a, s1Var).f9874x) {
                j = this.T.f9746r;
                if (z6) {
                    this.f5398g0 = null;
                    Pair h6 = h(this.T.a);
                    sVar2 = (s) h6.first;
                    j5 = ((Long) h6.second).longValue();
                    j = -9223372036854775807L;
                    if (!sVar2.equals(this.T.f9732b)) {
                        z10 = true;
                        long j7 = j5;
                        long j10 = j;
                        this.O.b();
                        this.Z = false;
                        timeline = this.T.a;
                        if (z7 || !(timeline instanceof m1)) {
                            sVar = sVar2;
                            timeline2 = timeline;
                        } else {
                            m1 m1Var = (m1) timeline;
                            t0 t0Var = (t0) this.P.k;
                            Timeline[] timelineArr = m1Var.F;
                            Timeline[] timelineArr2 = new Timeline[timelineArr.length];
                            for (int i5 = 0; i5 < timelineArr.length; i5++) {
                                timelineArr2[i5] = new i(timelineArr[i5]);
                            }
                            m1 m1Var2 = new m1(timelineArr2, m1Var.G, t0Var);
                            if (sVar2.f15167b != -1) {
                                m1Var2.g(sVar2.a, this.I);
                                int i6 = this.I.f9871i;
                                Timeline.Window window = this.H;
                                m1Var2.m(i6, window, 0L);
                                if (window.a()) {
                                    timeline2 = m1Var2;
                                    sVar = new s(sVar2.f15169d, sVar2.a);
                                }
                            }
                            timeline2 = m1Var2;
                            sVar = sVar2;
                        }
                        i1 i1Var3 = this.T;
                        int i10 = i1Var3.f9735e;
                        c cVar = z8 ? null : i1Var3.f9736f;
                        a1 a1Var = z10 ? a1.f15063v : i1Var3.f9738h;
                        u uVar = z10 ? this.f5405w : i1Var3.f9739i;
                        if (z10) {
                            fi.c0 c0Var = e0.f8656e;
                            list = r0.f8704w;
                        } else {
                            list = i1Var3.j;
                        }
                        this.T = new i1(timeline2, sVar, j10, j7, i10, cVar, false, a1Var, uVar, list, sVar, i1Var3.f9740l, i1Var3.f9741m, i1Var3.f9742n, j7, 0L, j7, 0L, false);
                        if (z7) {
                            f1 f1Var = this.P;
                            HashMap hashMap = (HashMap) f1Var.f9697f;
                            for (d1 d1Var : hashMap.values()) {
                                try {
                                    d1Var.a.p(d1Var.f9656b);
                                } catch (RuntimeException e11) {
                                    ke.b.s("MediaSourceList", "Failed to release child source.", e11);
                                }
                                nd.a aVar = d1Var.a;
                                io.sentry.internal.debugmeta.c cVar2 = d1Var.f9657c;
                                aVar.s(cVar2);
                                d1Var.a.r(cVar2);
                            }
                            hashMap.clear();
                            ((HashSet) f1Var.f9699h).clear();
                            f1Var.a = false;
                            return;
                        }
                        return;
                    }
                }
                z10 = false;
                long j72 = j5;
                long j102 = j;
                this.O.b();
                this.Z = false;
                timeline = this.T.a;
                if (z7) {
                }
                sVar = sVar2;
                timeline2 = timeline;
                i1 i1Var32 = this.T;
                int i102 = i1Var32.f9735e;
                c cVar3 = z8 ? null : i1Var32.f9736f;
                a1 a1Var2 = z10 ? a1.f15063v : i1Var32.f9738h;
                u uVar2 = z10 ? this.f5405w : i1Var32.f9739i;
                if (z10) {
                }
                this.T = new i1(timeline2, sVar, j102, j72, i102, cVar3, false, a1Var2, uVar2, list, sVar, i1Var32.f9740l, i1Var32.f9741m, i1Var32.f9742n, j72, 0L, j72, 0L, false);
                if (z7) {
                }
            }
        }
        j = this.T.f9733c;
        if (z6) {
        }
        z10 = false;
        long j722 = j5;
        long j1022 = j;
        this.O.b();
        this.Z = false;
        timeline = this.T.a;
        if (z7) {
        }
        sVar = sVar2;
        timeline2 = timeline;
        i1 i1Var322 = this.T;
        int i1022 = i1Var322.f9735e;
        c cVar32 = z8 ? null : i1Var322.f9736f;
        a1 a1Var22 = z10 ? a1.f15063v : i1Var322.f9738h;
        u uVar22 = z10 ? this.f5405w : i1Var322.f9739i;
        if (z10) {
        }
        this.T = new i1(timeline2, sVar, j1022, j722, i1022, cVar32, false, a1Var22, uVar22, list, sVar, i1Var322.f9740l, i1Var322.f9741m, i1Var322.f9742n, j722, 0L, j722, 0L, false);
        if (z7) {
        }
    }

    public final void B() {
        v0 v0Var = this.O.f5422h;
        this.X = v0Var != null && v0Var.f9921f.f9936h && this.W;
    }

    public final void C(long j) {
        v0 v0Var = this.O.f5422h;
        long j5 = j + (v0Var == null ? 1000000000000L : v0Var.f9928o);
        this.h0 = j5;
        ((q) this.K.f9762i).c(j5);
        for (hc.e eVar : this.f5393d) {
            if (q(eVar)) {
                long j7 = this.h0;
                eVar.I = false;
                eVar.H = j7;
                eVar.n(j7, false);
            }
        }
        for (v0 v0Var2 = r0.f5422h; v0Var2 != null; v0Var2 = v0Var2.f9925l) {
            for (ge.p pVar : v0Var2.f9927n.f9231c) {
                if (pVar != null) {
                    pVar.q();
                }
            }
        }
    }

    public final void D(Timeline timeline, Timeline timeline2) {
        if (timeline.p() && timeline2.p()) {
            return;
        }
        ArrayList arrayList = this.L;
        int size = arrayList.size() - 1;
        if (size < 0) {
            Collections.sort(arrayList);
        } else {
            a3.e.w(arrayList.get(size));
            throw null;
        }
    }

    public final void G(boolean z5) {
        s sVar = this.O.f5422h.f9921f.a;
        long I = I(sVar, this.T.f9746r, true, false);
        if (I != this.T.f9746r) {
            i1 i1Var = this.T;
            this.T = o(sVar, I, i1Var.f9733c, i1Var.f9734d, z5, 5);
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(18:20|(7:(9:64|65|(1:83)(1:71)|72|(1:82)|79|80|11|12)(1:22)|42|43|44|10|11|12)|23|24|(1:26)(1:60)|27|(1:29)(1:59)|30|31|32|(1:34)(1:57)|35|36|37|38|39|40|41) */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0153, code lost:
    
        r0 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0154, code lost:
    
        r2 = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0155, code lost:
    
        r5 = r15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0157, code lost:
    
        r0 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0159, code lost:
    
        r0 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x015a, code lost:
    
        r5 = r15;
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x00aa  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x00a1 A[Catch: all -> 0x00a4, TryCatch #1 {all -> 0x00a4, blocks: (B:6:0x0097, B:8:0x00a1, B:16:0x00ad, B:18:0x00b3, B:19:0x00b6, B:20:0x00be, B:67:0x00ce, B:71:0x00d6), top: B:5:0x0097 }] */
    /* JADX WARN: Type inference failed for: r0v16, types: [java.lang.Object, nd.q] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void H(d0 d0Var) {
        long longValue;
        s n6;
        long j;
        boolean z5;
        long j5;
        boolean z6;
        s sVar;
        long j7;
        long a;
        long j10;
        i1 i1Var;
        int i5;
        long j11;
        s sVar2;
        int i6;
        long j12;
        long I;
        i1 i1Var2;
        s sVar3;
        Timeline timeline;
        long j13;
        e eVar = this;
        eVar.U.a(1);
        Pair E = E(eVar.T.a, d0Var, true, eVar.a0, eVar.f5391b0, eVar.H, eVar.I);
        try {
            if (E == null) {
                Pair h6 = eVar.h(eVar.T.a);
                n6 = (s) h6.first;
                longValue = ((Long) h6.second).longValue();
                z5 = !eVar.T.a.p();
                j5 = -9223372036854775807L;
            } else {
                Object obj = E.first;
                longValue = ((Long) E.second).longValue();
                long j14 = d0Var.f9655c == -9223372036854775807L ? -9223372036854775807L : longValue;
                n6 = eVar.O.n(eVar.T.a, obj, longValue);
                if (!n6.a()) {
                    j = 0;
                    z5 = d0Var.f9655c == -9223372036854775807L;
                    j5 = j14;
                    if (!eVar.T.a.p()) {
                        eVar.f5398g0 = d0Var;
                    } else if (E == null) {
                        if (eVar.T.f9735e != 1) {
                            eVar.V(4);
                        }
                        eVar.A(false, true, false, true);
                    } else {
                        try {
                            if (n6.equals(eVar.T.f9732b)) {
                                try {
                                    v0 v0Var = eVar.O.f5422h;
                                    a = (v0Var == null || !v0Var.f9919d || longValue == j) ? longValue : v0Var.a.a(longValue, eVar.S);
                                    if (ke.d0.U(a) != ke.d0.U(eVar.T.f9746r) || ((i5 = (i1Var = eVar.T).f9735e) != 2 && i5 != 3)) {
                                        z6 = z5;
                                        j10 = j5;
                                        sVar = n6;
                                    }
                                    j11 = i1Var.f9746r;
                                    z6 = z5;
                                    sVar2 = n6;
                                    i6 = 2;
                                    j12 = j11;
                                    eVar.T = eVar.o(sVar2, j11, j5, j12, z6, i6);
                                    return;
                                } catch (Throwable th2) {
                                    th = th2;
                                    z6 = z5;
                                    sVar = n6;
                                    j7 = longValue;
                                    eVar.T = eVar.o(sVar, j7, j5, j7, z6, 2);
                                    throw th;
                                }
                            }
                            z6 = z5;
                            j10 = j5;
                            sVar = n6;
                            a = longValue;
                            eVar.e0(timeline, sVar3, timeline, i1Var2.f9732b, j13, true);
                            sVar2 = sVar3;
                            j5 = j13;
                            j11 = I;
                            i6 = 2;
                            j12 = j11;
                            eVar = this;
                            eVar.T = eVar.o(sVar2, j11, j5, j12, z6, i6);
                            return;
                        } catch (Throwable th3) {
                            th = th3;
                            sVar = sVar3;
                            j5 = j13;
                            j7 = I;
                            eVar.T = eVar.o(sVar, j7, j5, j7, z6, 2);
                            throw th;
                        }
                        boolean z7 = eVar.T.f9735e == 4;
                        f fVar = eVar.O;
                        I = eVar.I(sVar, a, fVar.f5422h != fVar.f5423i, z7);
                        z6 |= longValue != I;
                        i1Var2 = eVar.T;
                        sVar3 = sVar;
                        timeline = i1Var2.a;
                        j13 = j10;
                    }
                    z6 = z5;
                    sVar2 = n6;
                    j11 = longValue;
                    i6 = 2;
                    j12 = j11;
                    eVar = this;
                    eVar.T = eVar.o(sVar2, j11, j5, j12, z6, i6);
                    return;
                }
                eVar.T.a.g(n6.a, eVar.I);
                longValue = eVar.I.f(n6.f15167b) == n6.f15168c ? eVar.I.f9875y.f15833e : 0L;
                z5 = true;
                j5 = j14;
            }
            if (!eVar.T.a.p()) {
            }
            z6 = z5;
            sVar2 = n6;
            j11 = longValue;
            i6 = 2;
            j12 = j11;
            eVar = this;
            eVar.T = eVar.o(sVar2, j11, j5, j12, z6, i6);
            return;
        } catch (Throwable th4) {
            th = th4;
            z6 = z5;
        }
        j = 0;
    }

    /* JADX WARN: Type inference failed for: r9v5, types: [java.lang.Object, nd.q] */
    public final long I(s sVar, long j, boolean z5, boolean z6) {
        a0();
        this.Y = false;
        if (z6 || this.T.f9735e == 3) {
            V(2);
        }
        f fVar = this.O;
        v0 v0Var = fVar.f5422h;
        v0 v0Var2 = v0Var;
        while (v0Var2 != null && !sVar.equals(v0Var2.f9921f.a)) {
            v0Var2 = v0Var2.f9925l;
        }
        if (z5 || v0Var != v0Var2 || (v0Var2 != null && v0Var2.f9928o + j < 0)) {
            hc.e[] eVarArr = this.f5393d;
            for (hc.e eVar : eVarArr) {
                b(eVar);
            }
            if (v0Var2 != null) {
                while (fVar.f5422h != v0Var2) {
                    fVar.a();
                }
                fVar.l(v0Var2);
                v0Var2.f9928o = 1000000000000L;
                f(new boolean[eVarArr.length]);
            }
        }
        if (v0Var2 != null) {
            ?? r92 = v0Var2.a;
            fVar.l(v0Var2);
            if (!v0Var2.f9919d) {
                v0Var2.f9921f = v0Var2.f9921f.b(j);
            } else if (v0Var2.f9920e) {
                j = r92.m(j);
                r92.n(j - this.J);
            }
            C(j);
            s();
        } else {
            fVar.b();
            C(j);
        }
        k(false);
        this.E.d(2);
        return j;
    }

    public final void J(l1 l1Var) {
        a0 a0Var = this.E;
        if (l1Var.f9779f != this.G) {
            a0Var.a(15, l1Var).b();
            return;
        }
        synchronized (l1Var) {
        }
        try {
            l1Var.a.c(l1Var.f9777d, l1Var.f9778e);
            l1Var.b(true);
            int i5 = this.T.f9735e;
            if (i5 == 3 || i5 == 2) {
                a0Var.d(2);
            }
        } catch (Throwable th2) {
            l1Var.b(true);
            throw th2;
        }
    }

    public final void K(l1 l1Var) {
        Looper looper = l1Var.f9779f;
        if (looper.getThread().isAlive()) {
            this.M.a(looper, null).c(new com.google.firebase.messaging.s(15, this, l1Var));
        } else {
            ke.b.N("TAG", "Trying to send message on a dead thread.");
            l1Var.b(false);
        }
    }

    public final void M(boolean z5, AtomicBoolean atomicBoolean) {
        if (this.f5392c0 != z5) {
            this.f5392c0 = z5;
            if (!z5) {
                for (hc.e eVar : this.f5393d) {
                    if (!q(eVar) && this.f5395e.remove(eVar)) {
                        eVar.w();
                    }
                }
            }
        }
        if (atomicBoolean != null) {
            synchronized (this) {
                atomicBoolean.set(true);
                notifyAll();
            }
        }
    }

    public final void N(hc.a0 a0Var) {
        this.U.a(1);
        int i5 = a0Var.f9619c;
        t0 t0Var = a0Var.f9618b;
        ArrayList arrayList = a0Var.a;
        if (i5 != -1) {
            this.f5398g0 = new d0(new m1(arrayList, t0Var), a0Var.f9619c, a0Var.f9620d);
        }
        f1 f1Var = this.P;
        ArrayList arrayList2 = (ArrayList) f1Var.f9694c;
        f1Var.i(0, arrayList2.size());
        l(f1Var.a(arrayList2.size(), arrayList, t0Var), false);
    }

    public final void O(boolean z5) {
        if (z5 == this.f5396e0) {
            return;
        }
        this.f5396e0 = z5;
        if (z5 || !this.T.f9743o) {
            return;
        }
        this.E.d(2);
    }

    public final void P(boolean z5) {
        this.W = z5;
        B();
        if (this.X) {
            f fVar = this.O;
            if (fVar.f5423i != fVar.f5422h) {
                G(true);
                k(false);
            }
        }
    }

    public final void Q(int i5, int i6, boolean z5, boolean z6) {
        this.U.a(z6 ? 1 : 0);
        b0 b0Var = this.U;
        b0Var.a = true;
        b0Var.f9630f = true;
        b0Var.f9631g = i6;
        this.T = this.T.d(i5, z5);
        this.Y = false;
        for (v0 v0Var = this.O.f5422h; v0Var != null; v0Var = v0Var.f9925l) {
            for (ge.p pVar : v0Var.f9927n.f9231c) {
                if (pVar != null) {
                    pVar.f(z5);
                }
            }
        }
        if (!W()) {
            a0();
            d0();
            return;
        }
        int i10 = this.T.f9735e;
        a0 a0Var = this.E;
        if (i10 == 3) {
            Y();
            a0Var.d(2);
        } else if (i10 == 2) {
            a0Var.d(2);
        }
    }

    public final void R(PlaybackParameters playbackParameters) {
        this.E.a.removeMessages(16);
        k kVar = this.K;
        kVar.d(playbackParameters);
        PlaybackParameters b10 = kVar.b();
        n(b10, b10.f5275d, true, true);
    }

    public final void S(int i5) {
        this.a0 = i5;
        Timeline timeline = this.T.a;
        f fVar = this.O;
        fVar.f5420f = i5;
        if (!fVar.o(timeline)) {
            G(true);
        }
        k(false);
    }

    public final void T(boolean z5) {
        this.f5391b0 = z5;
        Timeline timeline = this.T.a;
        f fVar = this.O;
        fVar.f5421g = z5;
        if (!fVar.o(timeline)) {
            G(true);
        }
        k(false);
    }

    public final void U(t0 t0Var) {
        this.U.a(1);
        f1 f1Var = this.P;
        int size = ((ArrayList) f1Var.f9694c).size();
        if (t0Var.f15171b.length != size) {
            t0Var = new t0(new Random(t0Var.a.nextLong())).a(size);
        }
        f1Var.k = t0Var;
        l(f1Var.c(), false);
    }

    public final void V(int i5) {
        i1 i1Var = this.T;
        if (i1Var.f9735e != i5) {
            if (i5 != 2) {
                this.f5403l0 = -9223372036854775807L;
            }
            this.T = i1Var.g(i5);
        }
    }

    public final boolean W() {
        i1 i1Var = this.T;
        return i1Var.f9740l && i1Var.f9741m == 0;
    }

    public final boolean X(Timeline timeline, s sVar) {
        if (sVar.a() || timeline.p()) {
            return false;
        }
        int i5 = timeline.g(sVar.a, this.I).f9871i;
        Timeline.Window window = this.H;
        timeline.n(i5, window);
        return window.a() && window.F && window.f5297x != -9223372036854775807L;
    }

    public final void Y() {
        this.Y = false;
        k kVar = this.K;
        kVar.f9761e = true;
        ((q) kVar.f9762i).e();
        for (hc.e eVar : this.f5393d) {
            if (q(eVar)) {
                ke.b.k(eVar.f9664y == 1);
                eVar.f9664y = 2;
                eVar.q();
            }
        }
    }

    public final void Z(boolean z5, boolean z6) {
        A(z5 || !this.f5392c0, false, true, false);
        this.U.a(z6 ? 1 : 0);
        this.f5406x.b(true);
        V(1);
    }

    public final void a(hc.a0 a0Var, int i5) {
        this.U.a(1);
        f1 f1Var = this.P;
        if (i5 == -1) {
            i5 = ((ArrayList) f1Var.f9694c).size();
        }
        l(f1Var.a(i5, a0Var.a, a0Var.f9618b), false);
    }

    public final void a0() {
        int i5;
        k kVar = this.K;
        kVar.f9761e = false;
        q qVar = (q) kVar.f9762i;
        if (qVar.f11301d) {
            qVar.c(qVar.a());
            qVar.f11301d = false;
        }
        for (hc.e eVar : this.f5393d) {
            if (q(eVar) && (i5 = eVar.f9664y) == 2) {
                ke.b.k(i5 == 2);
                eVar.f9664y = 1;
                eVar.r();
            }
        }
    }

    public final void b(hc.e eVar) {
        if (q(eVar)) {
            k kVar = this.K;
            if (eVar == ((hc.e) kVar.f9764w)) {
                kVar.f9765x = null;
                kVar.f9764w = null;
                kVar.f9760d = true;
            }
            int i5 = eVar.f9664y;
            if (i5 == 2) {
                ke.b.k(i5 == 2);
                eVar.f9664y = 1;
                eVar.r();
            }
            ke.b.k(eVar.f9664y == 1);
            eVar.f9660i.u();
            eVar.f9664y = 0;
            eVar.E = null;
            eVar.F = null;
            eVar.I = false;
            eVar.l();
            this.f5397f0--;
        }
    }

    /* JADX WARN: Type inference failed for: r1v7, types: [java.lang.Object, nd.s0] */
    public final void b0() {
        v0 v0Var = this.O.j;
        boolean z5 = this.Z || (v0Var != null && v0Var.a.q());
        i1 i1Var = this.T;
        if (z5 != i1Var.f9737g) {
            this.T = new i1(i1Var.a, i1Var.f9732b, i1Var.f9733c, i1Var.f9734d, i1Var.f9735e, i1Var.f9736f, z5, i1Var.f9738h, i1Var.f9739i, i1Var.j, i1Var.k, i1Var.f9740l, i1Var.f9741m, i1Var.f9742n, i1Var.f9744p, i1Var.f9745q, i1Var.f9746r, i1Var.f9747s, i1Var.f9743o);
        }
    }

    @Override // nd.r0
    public final void c(s0 s0Var) {
        this.E.a(9, (nd.q) s0Var).b();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public final void c0(u uVar) {
        Timeline timeline = this.T.a;
        ge.p[] pVarArr = uVar.f9231c;
        hc.j jVar = this.f5406x;
        int i5 = jVar.f9752f;
        if (i5 == -1) {
            int i6 = 0;
            int i10 = 0;
            while (true) {
                hc.e[] eVarArr = this.f5393d;
                int i11 = 13107200;
                if (i6 < eVarArr.length) {
                    if (pVarArr[i6] != null) {
                        switch (eVarArr[i6].f9659e) {
                            case 0:
                                i11 = 144310272;
                                i10 += i11;
                                break;
                            case 1:
                                i10 += i11;
                                break;
                            case 2:
                                i11 = 131072000;
                                i10 += i11;
                                break;
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                                i11 = 131072;
                                i10 += i11;
                                break;
                            default:
                                throw new IllegalArgumentException();
                        }
                    }
                    i6++;
                } else {
                    i5 = Math.max(13107200, i10);
                }
            }
        }
        jVar.f9755i = i5;
        jVar.a.a(i5);
    }

    @Override // nd.p
    public final void d(nd.q qVar) {
        this.E.a(8, qVar).b();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r17v0 */
    /* JADX WARN: Type inference failed for: r17v1 */
    /* JADX WARN: Type inference failed for: r17v2 */
    /* JADX WARN: Type inference failed for: r2v24, types: [java.lang.Object, nd.q] */
    public final void d0() {
        long j;
        long max;
        ?? r17;
        int i5;
        long max2;
        v0 v0Var = this.O.f5422h;
        if (v0Var == null) {
            return;
        }
        long s2 = v0Var.f9919d ? v0Var.a.s() : -9223372036854775807L;
        if (s2 != -9223372036854775807L) {
            C(s2);
            if (s2 != this.T.f9746r) {
                i1 i1Var = this.T;
                this.T = o(i1Var.f9732b, s2, i1Var.f9733c, s2, true, 5);
            }
        } else {
            k kVar = this.K;
            boolean z5 = v0Var != this.O.f5423i;
            q qVar = (q) kVar.f9762i;
            hc.e eVar = (hc.e) kVar.f9764w;
            if (eVar == null || eVar.j() || (!((hc.e) kVar.f9764w).k() && (z5 || ((hc.e) kVar.f9764w).i()))) {
                kVar.f9760d = true;
                if (kVar.f9761e) {
                    qVar.e();
                }
            } else {
                n nVar = (n) kVar.f9765x;
                nVar.getClass();
                long a = nVar.a();
                if (kVar.f9760d) {
                    if (a >= qVar.a()) {
                        kVar.f9760d = false;
                        if (kVar.f9761e) {
                            qVar.e();
                        }
                    } else if (qVar.f11301d) {
                        qVar.c(qVar.a());
                        qVar.f11301d = false;
                    }
                }
                qVar.c(a);
                PlaybackParameters b10 = nVar.b();
                if (!b10.equals((PlaybackParameters) qVar.f11305w)) {
                    qVar.d(b10);
                    ((e) kVar.f9763v).E.a(16, b10).b();
                }
            }
            long a10 = kVar.a();
            this.h0 = a10;
            long j5 = a10 - v0Var.f9928o;
            long j7 = this.T.f9746r;
            if (!this.L.isEmpty() && !this.T.f9732b.a()) {
                if (this.f5401j0) {
                    this.f5401j0 = false;
                }
                i1 i1Var2 = this.T;
                i1Var2.a.b(i1Var2.f9732b.a);
                int min = Math.min(this.f5400i0, this.L.size());
                if (min > 0 && this.L.get(min - 1) != null) {
                    throw new ClassCastException();
                }
                if (min < this.L.size() && this.L.get(min) != null) {
                    throw new ClassCastException();
                }
                this.f5400i0 = min;
            }
            i1 i1Var3 = this.T;
            i1Var3.f9746r = j5;
            i1Var3.f9747s = SystemClock.elapsedRealtime();
        }
        this.T.f9744p = this.O.j.d();
        i1 i1Var4 = this.T;
        long j10 = i1Var4.f9744p;
        v0 v0Var2 = this.O.j;
        if (v0Var2 == null) {
            max = 0;
            j = -9223372036854775807L;
        } else {
            j = -9223372036854775807L;
            max = Math.max(0L, j10 - (this.h0 - v0Var2.f9928o));
        }
        i1Var4.f9745q = max;
        i1 i1Var5 = this.T;
        if (i1Var5.f9740l && i1Var5.f9735e == 3 && X(i1Var5.a, i1Var5.f9732b)) {
            i1 i1Var6 = this.T;
            float f2 = 1.0f;
            if (i1Var6.f9742n.f5275d == 1.0f) {
                hc.i iVar = this.Q;
                long g6 = g(i1Var6.a, i1Var6.f9732b.a, i1Var6.f9746r);
                long j11 = this.T.f9744p;
                v0 v0Var3 = this.O.j;
                if (v0Var3 == null) {
                    max2 = 0;
                    i5 = 1;
                    r17 = 0;
                } else {
                    r17 = 0;
                    i5 = 1;
                    max2 = Math.max(0L, j11 - (this.h0 - v0Var3.f9928o));
                }
                if (iVar.f9718c != j) {
                    long j12 = g6 - max2;
                    long j13 = iVar.f9726m;
                    if (j13 == j) {
                        iVar.f9726m = j12;
                        iVar.f9727n = 0L;
                    } else {
                        iVar.f9726m = Math.max(j12, (long) ((j12 * 9.999871E-4f) + (j13 * 0.999f)));
                        iVar.f9727n = (long) ((9.999871E-4f * Math.abs(j12 - r12)) + (0.999f * iVar.f9727n));
                    }
                    if (iVar.f9725l == j || SystemClock.elapsedRealtime() - iVar.f9725l >= 1000) {
                        iVar.f9725l = SystemClock.elapsedRealtime();
                        long j14 = (iVar.f9727n * 3) + iVar.f9726m;
                        if (iVar.f9723h > j14) {
                            float I = ke.d0.I(1000L);
                            long j15 = ((long) ((iVar.k - 1.0f) * I)) + ((long) ((iVar.f9724i - 1.0f) * I));
                            long j16 = iVar.f9720e;
                            long j17 = iVar.f9723h - j15;
                            long[] jArr = new long[3];
                            jArr[r17] = j14;
                            jArr[i5] = j16;
                            jArr[2] = j17;
                            long j18 = jArr[r17];
                            for (int i6 = i5; i6 < 3; i6++) {
                                long j19 = jArr[i6];
                                if (j19 > j18) {
                                    j18 = j19;
                                }
                            }
                            iVar.f9723h = j18;
                        } else {
                            long j20 = ke.d0.j(g6 - ((long) (Math.max(0.0f, iVar.k - 1.0f) / 1.0E-7f)), iVar.f9723h, j14);
                            iVar.f9723h = j20;
                            long j21 = iVar.f9722g;
                            if (j21 != j && j20 > j21) {
                                iVar.f9723h = j21;
                            }
                        }
                        long j22 = g6 - iVar.f9723h;
                        if (Math.abs(j22) < iVar.a) {
                            iVar.k = 1.0f;
                        } else {
                            iVar.k = ke.d0.h((1.0E-7f * j22) + 1.0f, iVar.j, iVar.f9724i);
                        }
                        f2 = iVar.k;
                    } else {
                        f2 = iVar.k;
                    }
                }
                if (this.K.b().f5275d != f2) {
                    PlaybackParameters playbackParameters = new PlaybackParameters(f2, this.T.f9742n.f5276e);
                    this.E.a.removeMessages(16);
                    this.K.d(playbackParameters);
                    boolean z6 = r17;
                    n(this.T.f9742n, this.K.b().f5275d, z6, z6);
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:326:0x053e, code lost:
    
        if (r3 >= r5.f9755i) goto L347;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:197:0x0601  */
    /* JADX WARN: Removed duplicated region for block: B:211:0x0654  */
    /* JADX WARN: Removed duplicated region for block: B:228:0x06a9  */
    /* JADX WARN: Removed duplicated region for block: B:231:0x0609  */
    /* JADX WARN: Removed duplicated region for block: B:246:0x054d  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x014b  */
    /* JADX WARN: Removed duplicated region for block: B:349:0x0166  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0297  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x02ac  */
    /* JADX WARN: Removed duplicated region for block: B:457:0x0155  */
    /* JADX WARN: Removed duplicated region for block: B:460:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:462:0x00c0  */
    /* JADX WARN: Removed duplicated region for block: B:477:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:478:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0305 A[EDGE_INSN: B:73:0x0305->B:74:0x0305 BREAK  A[LOOP:0: B:41:0x02a7->B:52:0x0302], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:75:0x0307  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x031a  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0338  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0354  */
    /* JADX WARN: Type inference failed for: r10v26 */
    /* JADX WARN: Type inference failed for: r10v27, types: [int] */
    /* JADX WARN: Type inference failed for: r10v33 */
    /* JADX WARN: Type inference failed for: r2v43, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r2v61, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r2v81, types: [java.lang.Object, nd.s0] */
    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r4v30 */
    /* JADX WARN: Type inference failed for: r4v31, types: [int] */
    /* JADX WARN: Type inference failed for: r4v66 */
    /* JADX WARN: Type inference failed for: r5v24, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r6v19, types: [java.lang.Object, nd.s0] */
    /* JADX WARN: Type inference failed for: r7v50, types: [java.lang.Object, nd.s0] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e() {
        c cVar;
        long j;
        long j5;
        boolean z5;
        boolean z6;
        long j7;
        long j10;
        long j11;
        boolean z7;
        boolean z8;
        boolean z10;
        long j12;
        boolean z11;
        long max;
        boolean z12;
        boolean z13;
        boolean z14;
        i1 i1Var;
        boolean z15;
        int i5;
        q0 q0Var;
        long j13;
        v0 v0Var;
        v0 v0Var2;
        boolean z16;
        w0 d6;
        boolean z17;
        boolean z18;
        long j14;
        v0 v0Var3;
        v0 v0Var4;
        f fVar;
        boolean z19;
        v0 v0Var5;
        v0 v0Var6;
        v0 a;
        boolean z20;
        boolean z21;
        int i6;
        hc.e[] eVarArr;
        this.M.getClass();
        long uptimeMillis = SystemClock.uptimeMillis();
        this.E.a.removeMessages(2);
        c cVar2 = null;
        if (this.T.a.p() || !this.P.a) {
            cVar = null;
            j = uptimeMillis;
            j5 = Long.MIN_VALUE;
            z5 = false;
            z6 = true;
            j7 = -9223372036854775807L;
        } else {
            f fVar2 = this.O;
            long j15 = this.h0;
            v0 v0Var7 = fVar2.j;
            if (v0Var7 != null) {
                ke.b.k(v0Var7.f9925l == null);
                if (v0Var7.f9919d) {
                    j13 = -9223372036854775807L;
                    v0Var7.a.A(j15 - v0Var7.f9928o);
                    f fVar3 = this.O;
                    v0Var = fVar3.j;
                    if (v0Var != null || (!v0Var.f9921f.f9937i && v0Var.f9919d && ((!v0Var.f9920e || v0Var.a.w() == Long.MIN_VALUE) && fVar3.j.f9921f.f9933e != j13 && fVar3.k < 100))) {
                        f fVar4 = this.O;
                        long j16 = this.h0;
                        i1 i1Var2 = this.T;
                        v0Var2 = fVar4.j;
                        if (v0Var2 != null) {
                            z16 = true;
                            d6 = fVar4.e(i1Var2.a, i1Var2.f9732b, i1Var2.f9733c, i1Var2.f9746r);
                        } else {
                            z16 = true;
                            d6 = fVar4.d(i1Var2.a, v0Var2, j16);
                        }
                        if (d6 == null) {
                            f fVar5 = this.O;
                            hc.e[] eVarArr2 = this.f5399i;
                            ge.r rVar = this.f5404v;
                            ie.q qVar = this.f5406x.a;
                            f1 f1Var = this.P;
                            u uVar = this.f5405w;
                            z17 = z16;
                            v0 v0Var8 = fVar5.j;
                            if (v0Var8 == null) {
                                j14 = 1000000000000L;
                                j = uptimeMillis;
                                j5 = Long.MIN_VALUE;
                            } else {
                                j5 = Long.MIN_VALUE;
                                j = uptimeMillis;
                                j14 = (v0Var8.f9928o + v0Var8.f9921f.f9933e) - d6.f9930b;
                            }
                            v0 v0Var9 = new v0(eVarArr2, j14, rVar, qVar, f1Var, d6, uVar);
                            v0 v0Var10 = fVar5.j;
                            if (v0Var10 == null) {
                                fVar5.f5422h = v0Var9;
                                fVar5.f5423i = v0Var9;
                            } else if (v0Var9 != v0Var10.f9925l) {
                                v0Var10.b();
                                v0Var10.f9925l = v0Var9;
                                v0Var10.c();
                            }
                            fVar5.f5424l = null;
                            fVar5.j = v0Var9;
                            fVar5.k++;
                            fVar5.k();
                            v0Var9.a.p(this, d6.f9930b);
                            if (this.O.f5422h == v0Var9) {
                                C(d6.f9930b);
                            }
                            z18 = false;
                            k(false);
                        } else {
                            z17 = z16;
                            j = uptimeMillis;
                            j5 = Long.MIN_VALUE;
                            z18 = false;
                        }
                    } else {
                        j = uptimeMillis;
                        j5 = Long.MIN_VALUE;
                        z18 = false;
                        z17 = true;
                    }
                    if (this.Z) {
                        s();
                    } else {
                        this.Z = p();
                        b0();
                    }
                    hc.e[] eVarArr3 = this.f5393d;
                    f fVar6 = this.O;
                    v0Var3 = fVar6.f5423i;
                    if (v0Var3 != null) {
                        if (v0Var3.f9925l == null || this.X) {
                            j7 = j13;
                            z6 = z17;
                            if (v0Var3.f9921f.f9937i || this.X) {
                                for (int i10 = 0; i10 < eVarArr3.length; i10++) {
                                    hc.e eVar = eVarArr3[i10];
                                    q0 q0Var2 = v0Var3.f9918c[i10];
                                    if (q0Var2 != null && eVar.E == q0Var2 && eVar.i()) {
                                        long j17 = v0Var3.f9921f.f9933e;
                                        L(eVar, (j17 == j7 || j17 == j5) ? j7 : j17 + v0Var3.f9928o);
                                    }
                                }
                            }
                        } else if (v0Var3.f9919d) {
                            ?? r42 = z18;
                            while (true) {
                                if (r42 < eVarArr3.length) {
                                    hc.e eVar2 = eVarArr3[r42];
                                    q0 q0Var3 = v0Var3.f9918c[r42];
                                    if (eVar2.E != q0Var3) {
                                        break;
                                    }
                                    if (q0Var3 != null && !eVar2.i()) {
                                        v0 v0Var11 = v0Var3.f9925l;
                                        if (!v0Var3.f9921f.f9934f) {
                                            break;
                                        }
                                        if (!v0Var11.f9919d) {
                                            break;
                                        }
                                        if (!(eVar2 instanceof wd.j) && !(eVar2 instanceof dd.e) && eVar2.H < v0Var11.e()) {
                                            break;
                                        }
                                    }
                                    r42++;
                                } else {
                                    v0 v0Var12 = v0Var3.f9925l;
                                    if (v0Var12.f9919d || this.h0 >= v0Var12.e()) {
                                        u uVar2 = v0Var3.f9927n;
                                        v0 v0Var13 = fVar6.f5423i;
                                        ke.b.k((v0Var13 == null || v0Var13.f9925l == null) ? z18 : z17);
                                        fVar6.f5423i = fVar6.f5423i.f9925l;
                                        fVar6.k();
                                        v0 v0Var14 = fVar6.f5423i;
                                        u uVar3 = v0Var14.f9927n;
                                        Timeline timeline = this.T.a;
                                        j7 = j13;
                                        z6 = z17;
                                        e0(timeline, v0Var14.f9921f.a, timeline, v0Var3.f9921f.a, -9223372036854775807L, false);
                                        if (!v0Var14.f9919d || v0Var14.a.s() == j7) {
                                            for (int i11 = 0; i11 < eVarArr3.length; i11++) {
                                                boolean b10 = uVar2.b(i11);
                                                boolean b11 = uVar3.b(i11);
                                                if (b10 && !eVarArr3[i11].I) {
                                                    boolean z22 = this.f5399i[i11].f9659e == -2 ? z6 : false;
                                                    o1 o1Var = uVar2.f9230b[i11];
                                                    o1 o1Var2 = uVar3.f9230b[i11];
                                                    if (!b11 || !o1Var2.equals(o1Var) || z22) {
                                                        L(eVarArr3[i11], v0Var14.e());
                                                    }
                                                }
                                            }
                                        } else {
                                            long e9 = v0Var14.e();
                                            for (hc.e eVar3 : eVarArr3) {
                                                if (eVar3.E != null) {
                                                    L(eVar3, e9);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        f fVar7 = this.O;
                        v0Var4 = fVar7.f5423i;
                        if (v0Var4 != null && fVar7.f5422h != v0Var4 && !v0Var4.f9922g) {
                            u uVar4 = v0Var4.f9927n;
                            q0[] q0VarArr = v0Var4.f9918c;
                            z21 = false;
                            i6 = 0;
                            while (true) {
                                eVarArr = this.f5393d;
                                if (i6 < eVarArr.length) {
                                    break;
                                }
                                hc.e eVar4 = eVarArr[i6];
                                if (q(eVar4)) {
                                    boolean z23 = eVar4.E != q0VarArr[i6] ? z6 : false;
                                    if (!uVar4.b(i6) || z23) {
                                        if (!eVar4.I) {
                                            ge.p pVar = uVar4.f9231c[i6];
                                            int length = pVar != null ? pVar.length() : 0;
                                            Format[] formatArr = new Format[length];
                                            for (int i12 = 0; i12 < length; i12++) {
                                                formatArr[i12] = pVar.g(i12);
                                            }
                                            eVar4.v(formatArr, q0VarArr[i6], v0Var4.e(), v0Var4.f9928o);
                                        } else if (eVar4.j()) {
                                            b(eVar4);
                                        } else {
                                            z21 = z6;
                                        }
                                    }
                                }
                                i6++;
                            }
                            if (!z21) {
                                f(new boolean[eVarArr.length]);
                            }
                        }
                        fVar = this.O;
                        z19 = false;
                        while (W() && !this.X && (v0Var5 = fVar.f5422h) != null && (v0Var6 = v0Var5.f9925l) != null && this.h0 >= v0Var6.e() && v0Var6.f9922g) {
                            if (z19) {
                                t();
                            }
                            a = fVar.a();
                            a.getClass();
                            if (this.T.f9732b.a.equals(a.f9921f.a.a)) {
                                s sVar = this.T.f9732b;
                                if (sVar.f15167b == -1) {
                                    s sVar2 = a.f9921f.a;
                                    if (sVar2.f15167b == -1 && sVar.f15170e != sVar2.f15170e) {
                                        z20 = z6;
                                        w0 w0Var = a.f9921f;
                                        s sVar3 = w0Var.a;
                                        long j18 = w0Var.f9930b;
                                        this.T = o(sVar3, j18, w0Var.f9931c, j18, !z20, 0);
                                        B();
                                        d0();
                                        z19 = z6;
                                        cVar2 = cVar2;
                                    }
                                }
                            }
                            z20 = false;
                            w0 w0Var2 = a.f9921f;
                            s sVar32 = w0Var2.a;
                            long j182 = w0Var2.f9930b;
                            this.T = o(sVar32, j182, w0Var2.f9931c, j182, !z20, 0);
                            B();
                            d0();
                            z19 = z6;
                            cVar2 = cVar2;
                        }
                        cVar = cVar2;
                        z5 = false;
                    }
                    j7 = j13;
                    z6 = z17;
                    f fVar72 = this.O;
                    v0Var4 = fVar72.f5423i;
                    if (v0Var4 != null) {
                        u uVar42 = v0Var4.f9927n;
                        q0[] q0VarArr2 = v0Var4.f9918c;
                        z21 = false;
                        i6 = 0;
                        while (true) {
                            eVarArr = this.f5393d;
                            if (i6 < eVarArr.length) {
                            }
                            i6++;
                        }
                        if (!z21) {
                        }
                    }
                    fVar = this.O;
                    z19 = false;
                    while (W()) {
                        if (z19) {
                        }
                        a = fVar.a();
                        a.getClass();
                        if (this.T.f9732b.a.equals(a.f9921f.a.a)) {
                        }
                        z20 = false;
                        w0 w0Var22 = a.f9921f;
                        s sVar322 = w0Var22.a;
                        long j1822 = w0Var22.f9930b;
                        this.T = o(sVar322, j1822, w0Var22.f9931c, j1822, !z20, 0);
                        B();
                        d0();
                        z19 = z6;
                        cVar2 = cVar2;
                    }
                    cVar = cVar2;
                    z5 = false;
                }
            }
            j13 = -9223372036854775807L;
            f fVar32 = this.O;
            v0Var = fVar32.j;
            if (v0Var != null) {
            }
            f fVar42 = this.O;
            long j162 = this.h0;
            i1 i1Var22 = this.T;
            v0Var2 = fVar42.j;
            if (v0Var2 != null) {
            }
            if (d6 == null) {
            }
            if (this.Z) {
            }
            hc.e[] eVarArr32 = this.f5393d;
            f fVar62 = this.O;
            v0Var3 = fVar62.f5423i;
            if (v0Var3 != null) {
            }
            j7 = j13;
            z6 = z17;
            f fVar722 = this.O;
            v0Var4 = fVar722.f5423i;
            if (v0Var4 != null) {
            }
            fVar = this.O;
            z19 = false;
            while (W()) {
            }
            cVar = cVar2;
            z5 = false;
        }
        int i13 = this.T.f9735e;
        if (i13 == z6 || i13 == 4) {
            return;
        }
        v0 v0Var15 = this.O.f5422h;
        if (v0Var15 == null) {
            this.E.a.sendEmptyMessageAtTime(2, j + 10);
            return;
        }
        ke.b.c("doSomeWork");
        d0();
        if (v0Var15.f9919d) {
            long elapsedRealtime = SystemClock.elapsedRealtime() * 1000;
            j10 = 10;
            j11 = 1000;
            v0Var15.a.n(this.T.f9746r - this.J);
            ?? r10 = z5;
            z7 = z6;
            z8 = z7;
            while (true) {
                hc.e[] eVarArr4 = this.f5393d;
                if (r10 >= eVarArr4.length) {
                    break;
                }
                hc.e eVar5 = eVarArr4[r10];
                if (q(eVar5)) {
                    eVar5.u(this.h0, elapsedRealtime);
                    z8 = (z8 && eVar5.j()) ? z6 : z5;
                    boolean z24 = v0Var15.f9918c[r10] != eVar5.E ? z6 : z5;
                    boolean z25 = (z24 || ((z24 || !eVar5.i()) ? z5 : z6) || eVar5.k() || eVar5.j()) ? z6 : z5;
                    z7 = (z7 && z25) ? z6 : z5;
                    if (!z25) {
                        q0 q0Var4 = eVar5.E;
                        q0Var4.getClass();
                        q0Var4.b();
                    }
                }
                r10++;
            }
        } else {
            j10 = 10;
            j11 = 1000;
            v0Var15.a.j();
            z7 = z6;
            z8 = z7;
        }
        long j19 = v0Var15.f9921f.f9933e;
        boolean z26 = (z8 && v0Var15.f9919d && (j19 == j7 || j19 <= this.T.f9746r)) ? z6 : z5;
        if (z26 && this.X) {
            this.X = z5;
            Q(this.T.f9741m, 5, z5, z5);
        }
        if (z26 && v0Var15.f9921f.f9937i) {
            V(4);
            a0();
        } else {
            i1 i1Var3 = this.T;
            if (i1Var3.f9735e == 2) {
                f fVar8 = this.O;
                if (this.f5397f0 == 0) {
                    z11 = r();
                    z10 = z7;
                } else if (!z7) {
                    z10 = z7;
                    z11 = z5;
                } else if (i1Var3.f9737g) {
                    long j20 = X(i1Var3.a, fVar8.f5422h.f9921f.a) ? this.Q.f9723h : j7;
                    v0 v0Var16 = fVar8.j;
                    boolean z27 = (!v0Var16.f9919d || (v0Var16.f9920e && v0Var16.a.w() != j5) || !v0Var16.f9921f.f9937i) ? z5 : z6;
                    boolean z28 = (!v0Var16.f9921f.a.a() || v0Var16.f9919d) ? z5 : z6;
                    if (z27 || z28) {
                        z10 = z7;
                        j12 = j7;
                    } else {
                        hc.j jVar = this.f5406x;
                        i1 i1Var4 = this.T;
                        Timeline timeline2 = i1Var4.a;
                        long j21 = i1Var4.f9744p;
                        v0 v0Var17 = this.O.j;
                        z10 = z7;
                        if (v0Var17 == null) {
                            max = 0;
                            j12 = j7;
                        } else {
                            j12 = j7;
                            max = Math.max(0L, j21 - (this.h0 - v0Var17.f9928o));
                        }
                        float f2 = this.K.b().f5275d;
                        boolean z29 = this.Y;
                        jVar.getClass();
                        long y5 = ke.d0.y(max, f2);
                        long j22 = z29 ? jVar.f9751e : jVar.f9750d;
                        if (j20 != j12) {
                            j22 = Math.min(j20 / 2, j22);
                        }
                        if (j22 > 0 && y5 < j22) {
                            if (!jVar.f9753g) {
                                ie.q qVar2 = jVar.a;
                                synchronized (qVar2) {
                                    int i14 = qVar2.f10724d * qVar2.f10722b;
                                }
                            }
                            z11 = false;
                            if (z11) {
                                V(3);
                                this.f5402k0 = cVar;
                                if (W()) {
                                    Y();
                                }
                            }
                        }
                    }
                    z11 = true;
                    if (z11) {
                    }
                } else {
                    z10 = z7;
                    z11 = z6;
                }
                j12 = j7;
                if (z11) {
                }
            } else {
                z10 = z7;
                j12 = j7;
            }
            if (this.T.f9735e == 3 && (this.f5397f0 != 0 ? !z10 : !r())) {
                this.Y = W();
                V(2);
                if (this.Y) {
                    for (v0 v0Var18 = this.O.f5422h; v0Var18 != null; v0Var18 = v0Var18.f9925l) {
                        for (ge.p pVar2 : v0Var18.f9927n.f9231c) {
                            if (pVar2 != null) {
                                pVar2.r();
                            }
                        }
                    }
                    hc.i iVar = this.Q;
                    long j23 = iVar.f9723h;
                    if (j23 != j12) {
                        long j24 = j23 + iVar.f9717b;
                        iVar.f9723h = j24;
                        long j25 = iVar.f9722g;
                        if (j25 != j12 && j24 > j25) {
                            iVar.f9723h = j25;
                        }
                        iVar.f9725l = j12;
                    }
                }
                a0();
            }
        }
        if (this.T.f9735e == 2) {
            int i15 = 0;
            while (true) {
                hc.e[] eVarArr5 = this.f5393d;
                if (i15 >= eVarArr5.length) {
                    break;
                }
                if (q(eVarArr5[i15]) && (q0Var = this.f5393d[i15].E) == v0Var15.f9918c[i15]) {
                    q0Var.getClass();
                    q0Var.b();
                }
                i15++;
            }
            i1 i1Var5 = this.T;
            if (!i1Var5.f9737g && i1Var5.f9745q < 500000 && p()) {
                z12 = true;
                if (z12) {
                    this.f5403l0 = -9223372036854775807L;
                } else if (this.f5403l0 == -9223372036854775807L) {
                    this.M.getClass();
                    this.f5403l0 = SystemClock.elapsedRealtime();
                } else {
                    this.M.getClass();
                    if (SystemClock.elapsedRealtime() - this.f5403l0 >= 4000) {
                        throw new IllegalStateException("Playback stuck buffering and not loading");
                    }
                }
                z13 = !W() && this.T.f9735e == 3;
                z14 = !this.f5396e0 && this.f5394d0 && z13;
                i1Var = this.T;
                if (i1Var.f9743o == z14) {
                    z15 = z14;
                    this.T = new i1(i1Var.a, i1Var.f9732b, i1Var.f9733c, i1Var.f9734d, i1Var.f9735e, i1Var.f9736f, i1Var.f9737g, i1Var.f9738h, i1Var.f9739i, i1Var.j, i1Var.k, i1Var.f9740l, i1Var.f9741m, i1Var.f9742n, i1Var.f9744p, i1Var.f9745q, i1Var.f9746r, i1Var.f9747s, z15);
                } else {
                    z15 = z14;
                }
                this.f5394d0 = false;
                if (!z15 && (i5 = this.T.f9735e) != 4) {
                    if (!z13 || i5 == 2) {
                        this.E.a.sendEmptyMessageAtTime(2, j + j10);
                    } else if (i5 == 3 && this.f5397f0 != 0) {
                        this.E.a.sendEmptyMessageAtTime(2, j + j11);
                    }
                }
                ke.b.t();
            }
        }
        z12 = false;
        if (z12) {
        }
        if (W()) {
        }
        if (this.f5396e0) {
        }
        i1Var = this.T;
        if (i1Var.f9743o == z14) {
        }
        this.f5394d0 = false;
        if (!z15) {
            if (z13) {
            }
            this.E.a.sendEmptyMessageAtTime(2, j + j10);
        }
        ke.b.t();
    }

    public final void e0(Timeline timeline, s sVar, Timeline timeline2, s sVar2, long j, boolean z5) {
        boolean X = X(timeline, sVar);
        Object obj = sVar.a;
        if (!X) {
            PlaybackParameters playbackParameters = sVar.a() ? PlaybackParameters.f5274v : this.T.f9742n;
            k kVar = this.K;
            if (kVar.b().equals(playbackParameters)) {
                return;
            }
            this.E.a.removeMessages(16);
            kVar.d(playbackParameters);
            n(this.T.f9742n, playbackParameters.f5275d, false, false);
            return;
        }
        s1 s1Var = this.I;
        int i5 = timeline.g(obj, s1Var).f9871i;
        Timeline.Window window = this.H;
        timeline.n(i5, window);
        o0 o0Var = window.H;
        int i6 = ke.d0.a;
        hc.i iVar = this.Q;
        iVar.getClass();
        iVar.f9718c = ke.d0.I(o0Var.f9825d);
        iVar.f9721f = ke.d0.I(o0Var.f9826e);
        iVar.f9722g = ke.d0.I(o0Var.f9827i);
        float f2 = o0Var.f9828v;
        if (f2 == -3.4028235E38f) {
            f2 = 0.97f;
        }
        iVar.j = f2;
        float f10 = o0Var.f9829w;
        if (f10 == -3.4028235E38f) {
            f10 = 1.03f;
        }
        iVar.f9724i = f10;
        if (f2 == 1.0f && f10 == 1.0f) {
            iVar.f9718c = -9223372036854775807L;
        }
        iVar.a();
        if (j != -9223372036854775807L) {
            iVar.f9719d = g(timeline, obj, j);
            iVar.a();
            return;
        }
        if (!ke.d0.a(!timeline2.p() ? timeline2.m(timeline2.g(sVar2.a, s1Var).f9871i, window, 0L).f5292d : null, window.f5292d) || z5) {
            iVar.f9719d = -9223372036854775807L;
            iVar.a();
        }
    }

    public final void f(boolean[] zArr) {
        hc.e[] eVarArr;
        Set set;
        u uVar;
        int i5;
        hc.e[] eVarArr2;
        n nVar;
        f fVar = this.O;
        v0 v0Var = fVar.f5423i;
        u uVar2 = v0Var.f9927n;
        int i6 = 0;
        while (true) {
            eVarArr = this.f5393d;
            int length = eVarArr.length;
            set = this.f5395e;
            if (i6 >= length) {
                break;
            }
            if (!uVar2.b(i6) && set.remove(eVarArr[i6])) {
                eVarArr[i6].w();
            }
            i6++;
        }
        int i10 = 0;
        while (i10 < eVarArr.length) {
            if (uVar2.b(i10)) {
                boolean z5 = zArr[i10];
                hc.e eVar = eVarArr[i10];
                if (!q(eVar)) {
                    v0 v0Var2 = fVar.f5423i;
                    boolean z6 = v0Var2 == fVar.f5422h;
                    u uVar3 = v0Var2.f9927n;
                    o1 o1Var = uVar3.f9230b[i10];
                    ge.p pVar = uVar3.f9231c[i10];
                    int length2 = pVar != null ? pVar.length() : 0;
                    Format[] formatArr = new Format[length2];
                    for (int i11 = 0; i11 < length2; i11++) {
                        formatArr[i11] = pVar.g(i11);
                    }
                    boolean z7 = W() && this.T.f9735e == 3;
                    boolean z8 = !z5 && z7;
                    this.f5397f0++;
                    set.add(eVar);
                    q0 q0Var = v0Var2.f9918c[i10];
                    uVar = uVar2;
                    long j = this.h0;
                    long e9 = v0Var2.e();
                    i5 = i10;
                    eVarArr2 = eVarArr;
                    long j5 = v0Var2.f9928o;
                    ke.b.k(eVar.f9664y == 0);
                    eVar.f9661v = o1Var;
                    eVar.f9664y = 1;
                    eVar.m(z8, z6);
                    eVar.v(formatArr, q0Var, e9, j5);
                    eVar.I = false;
                    eVar.H = j;
                    eVar.n(j, z8);
                    eVar.c(11, new z(this));
                    k kVar = this.K;
                    kVar.getClass();
                    n g6 = eVar.g();
                    if (g6 != null && g6 != (nVar = (n) kVar.f9765x)) {
                        if (nVar != null) {
                            throw new c(2, new IllegalStateException("Multiple renderer media clocks enabled."), 1000);
                        }
                        kVar.f9765x = g6;
                        kVar.f9764w = eVar;
                        ((n0) g6).d((PlaybackParameters) ((q) kVar.f9762i).f11305w);
                    }
                    if (z7) {
                        ke.b.k(eVar.f9664y == 1);
                        eVar.f9664y = 2;
                        eVar.q();
                    }
                    i10 = i5 + 1;
                    uVar2 = uVar;
                    eVarArr = eVarArr2;
                }
            }
            uVar = uVar2;
            i5 = i10;
            eVarArr2 = eVarArr;
            i10 = i5 + 1;
            uVar2 = uVar;
            eVarArr = eVarArr2;
        }
        v0Var.f9922g = true;
    }

    public final synchronized void f0(m mVar, long j) {
        this.M.getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime() + j;
        boolean z5 = false;
        while (!((Boolean) mVar.get()).booleanValue() && j > 0) {
            try {
                this.M.getClass();
                wait(j);
            } catch (InterruptedException unused) {
                z5 = true;
            }
            this.M.getClass();
            j = elapsedRealtime - SystemClock.elapsedRealtime();
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
    }

    public final long g(Timeline timeline, Object obj, long j) {
        s1 s1Var = this.I;
        int i5 = timeline.g(obj, s1Var).f9871i;
        Timeline.Window window = this.H;
        timeline.n(i5, window);
        if (window.f5297x != -9223372036854775807L && window.a() && window.F) {
            return ke.d0.I(ke.d0.v(window.f5298y) - window.f5297x) - (j + s1Var.f9873w);
        }
        return -9223372036854775807L;
    }

    public final Pair h(Timeline timeline) {
        if (timeline.p()) {
            return Pair.create(i1.f9731t, 0L);
        }
        Pair i5 = timeline.i(this.H, this.I, timeline.a(this.f5391b0), -9223372036854775807L);
        s n6 = this.O.n(timeline, i5.first, 0L);
        long longValue = ((Long) i5.second).longValue();
        if (n6.a()) {
            Object obj = n6.a;
            s1 s1Var = this.I;
            timeline.g(obj, s1Var);
            longValue = n6.f15168c == s1Var.f(n6.f15167b) ? s1Var.f9875y.f15833e : 0L;
        }
        return Pair.create(n6, Long.valueOf(longValue));
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        int i5;
        v0 v0Var;
        v0 v0Var2;
        try {
            switch (message.what) {
                case 0:
                    w();
                    break;
                case 1:
                    Q(message.arg2, 1, message.arg1 != 0, true);
                    break;
                case 2:
                    e();
                    break;
                case 3:
                    H((d0) message.obj);
                    break;
                case 4:
                    R((PlaybackParameters) message.obj);
                    break;
                case 5:
                    this.S = (p1) message.obj;
                    break;
                case 6:
                    Z(false, true);
                    break;
                case 7:
                    x();
                    return true;
                case 8:
                    m((nd.q) message.obj);
                    break;
                case 9:
                    i((nd.q) message.obj);
                    break;
                case 10:
                    z();
                    break;
                case 11:
                    S(message.arg1);
                    break;
                case 12:
                    T(message.arg1 != 0);
                    break;
                case 13:
                    M(message.arg1 != 0, (AtomicBoolean) message.obj);
                    break;
                case 14:
                    l1 l1Var = (l1) message.obj;
                    l1Var.getClass();
                    J(l1Var);
                    break;
                case 15:
                    K((l1) message.obj);
                    break;
                case 16:
                    PlaybackParameters playbackParameters = (PlaybackParameters) message.obj;
                    n(playbackParameters, playbackParameters.f5275d, true, false);
                    break;
                case 17:
                    N((hc.a0) message.obj);
                    break;
                case 18:
                    a((hc.a0) message.obj, message.arg1);
                    break;
                case 19:
                    a3.e.w(message.obj);
                    v();
                    throw null;
                case 20:
                    y(message.arg1, message.arg2, (t0) message.obj);
                    break;
                case 21:
                    U((t0) message.obj);
                    break;
                case 22:
                    u();
                    break;
                case 23:
                    P(message.arg1 != 0);
                    break;
                case 24:
                    O(message.arg1 == 1);
                    break;
                case 25:
                    z();
                    G(true);
                    break;
                case 26:
                    z();
                    G(true);
                    break;
                default:
                    return false;
            }
        } catch (c e9) {
            e = e9;
            int i6 = e.f5343i;
            f fVar = this.O;
            if (i6 == 1 && (v0Var2 = fVar.f5423i) != null) {
                e = e.a(v0Var2.f9921f.a);
            }
            if (e.F && this.f5402k0 == null) {
                ke.b.O("ExoPlayerImplInternal", "Recoverable renderer error", e);
                this.f5402k0 = e;
                a0 a0Var = this.E;
                ke.z a = a0Var.a(25, e);
                Handler handler = a0Var.a;
                Message message2 = a.a;
                message2.getClass();
                handler.sendMessageAtFrontOfQueue(message2);
                a.a();
            } else {
                c cVar = this.f5402k0;
                if (cVar != null) {
                    cVar.addSuppressed(e);
                    e = this.f5402k0;
                }
                ke.b.s("ExoPlayerImplInternal", "Playback error", e);
                if (e.f5343i == 1 && fVar.f5422h != fVar.f5423i) {
                    while (true) {
                        v0Var = fVar.f5422h;
                        if (v0Var == fVar.f5423i) {
                            break;
                        }
                        fVar.a();
                    }
                    v0Var.getClass();
                    w0 w0Var = v0Var.f9921f;
                    s sVar = w0Var.a;
                    long j = w0Var.f9930b;
                    this.T = o(sVar, j, w0Var.f9931c, j, true, 0);
                }
                Z(true, false);
                this.T = this.T.e(e);
            }
        } catch (g1 e10) {
            boolean z5 = e10.f9707d;
            int i10 = e10.f9708e;
            if (i10 == 1) {
                i5 = z5 ? 3001 : 3003;
            } else {
                if (i10 == 4) {
                    i5 = z5 ? 3002 : 3004;
                }
                j(e10, r4);
            }
            r4 = i5;
            j(e10, r4);
        } catch (ie.m e11) {
            j(e11, e11.f10691d);
        } catch (IOException e12) {
            j(e12, 2000);
        } catch (RuntimeException e13) {
            c cVar2 = new c(2, e13, ((e13 instanceof IllegalStateException) || (e13 instanceof IllegalArgumentException)) ? 1004 : 1000);
            ke.b.s("ExoPlayerImplInternal", "Playback error", cVar2);
            Z(true, false);
            this.T = this.T.e(cVar2);
        } catch (nc.j e14) {
            j(e14, e14.f15041d);
        } catch (nd.b e15) {
            j(e15, RNCWebViewManager.COMMAND_CLEAR_HISTORY);
        }
        t();
        return true;
    }

    /* JADX WARN: Type inference failed for: r6v5, types: [java.lang.Object, nd.s0] */
    public final void i(nd.q qVar) {
        v0 v0Var = this.O.j;
        if (v0Var == null || v0Var.a != qVar) {
            return;
        }
        long j = this.h0;
        if (v0Var != null) {
            ke.b.k(v0Var.f9925l == null);
            if (v0Var.f9919d) {
                v0Var.a.A(j - v0Var.f9928o);
            }
        }
        s();
    }

    public final void j(IOException iOException, int i5) {
        c cVar = new c(0, iOException, i5);
        v0 v0Var = this.O.f5422h;
        if (v0Var != null) {
            cVar = cVar.a(v0Var.f9921f.a);
        }
        ke.b.s("ExoPlayerImplInternal", "Playback error", cVar);
        Z(false, false);
        this.T = this.T.e(cVar);
    }

    public final void k(boolean z5) {
        v0 v0Var = this.O.j;
        s sVar = v0Var == null ? this.T.f9732b : v0Var.f9921f.a;
        boolean equals = this.T.k.equals(sVar);
        if (!equals) {
            this.T = this.T.b(sVar);
        }
        i1 i1Var = this.T;
        i1Var.f9744p = v0Var == null ? i1Var.f9746r : v0Var.d();
        i1 i1Var2 = this.T;
        long j = i1Var2.f9744p;
        v0 v0Var2 = this.O.j;
        i1Var2.f9745q = v0Var2 != null ? Math.max(0L, j - (this.h0 - v0Var2.f9928o)) : 0L;
        if ((!equals || z5) && v0Var != null && v0Var.f9919d) {
            c0(v0Var.f9927n);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:115:0x0300 A[Catch: all -> 0x0306, TRY_ENTER, TryCatch #2 {all -> 0x0306, blocks: (B:115:0x0300, B:16:0x031e, B:49:0x0328, B:51:0x032e, B:53:0x0338, B:55:0x0345), top: B:14:0x028b }] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x036b  */
    /* JADX WARN: Removed duplicated region for block: B:221:0x020d  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x03d6  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x03ae  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x03b4  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x036d  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x03f1  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x03fe  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x045a  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0410 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0431  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0438  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x03f3  */
    /* JADX WARN: Type inference failed for: r12v0 */
    /* JADX WARN: Type inference failed for: r12v14 */
    /* JADX WARN: Type inference failed for: r12v15 */
    /* JADX WARN: Type inference failed for: r12v16, types: [boolean] */
    /* JADX WARN: Type inference failed for: r12v17 */
    /* JADX WARN: Type inference failed for: r12v20 */
    /* JADX WARN: Type inference failed for: r12v5 */
    /* JADX WARN: Type inference failed for: r12v7 */
    /* JADX WARN: Type inference failed for: r12v8 */
    /* JADX WARN: Type inference failed for: r19v13, types: [nd.s] */
    /* JADX WARN: Type inference failed for: r2v51, types: [com.google.android.exoplayer2.f] */
    /* JADX WARN: Type inference failed for: r39v0, types: [com.google.android.exoplayer2.e] */
    /* JADX WARN: Type inference failed for: r5v23 */
    /* JADX WARN: Type inference failed for: r5v24 */
    /* JADX WARN: Type inference failed for: r5v25 */
    /* JADX WARN: Type inference failed for: r5v26 */
    /* JADX WARN: Type inference failed for: r5v37 */
    /* JADX WARN: Type inference failed for: r7v11 */
    /* JADX WARN: Type inference failed for: r7v12 */
    /* JADX WARN: Type inference failed for: r7v13 */
    /* JADX WARN: Type inference failed for: r7v25 */
    /* JADX WARN: Type inference failed for: r7v27 */
    /* JADX WARN: Type inference failed for: r7v28 */
    /* JADX WARN: Type inference failed for: r7v34 */
    /* JADX WARN: Type inference failed for: r7v38, types: [com.google.android.exoplayer2.Timeline] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l(Timeline timeline, boolean z5) {
        Timeline.Window window;
        long j;
        long j5;
        Object obj;
        int i5;
        int i6;
        boolean z6;
        boolean z7;
        boolean z8;
        int i10;
        boolean z10;
        Timeline timeline2;
        long j7;
        ?? r7;
        boolean z11;
        long j10;
        hc.c0 c0Var;
        int i11;
        long longValue;
        boolean z12;
        int i12;
        boolean z13;
        boolean z14;
        long j11;
        int i13;
        boolean z15;
        boolean z16;
        Timeline timeline3;
        s sVar;
        long j12;
        boolean z17;
        boolean z18;
        Object obj2;
        long j13;
        int i14;
        boolean z19;
        ?? r5;
        boolean z20;
        boolean z21;
        Timeline timeline4;
        f fVar;
        int i15;
        long j14;
        Timeline timeline5;
        long j15;
        hc.e[] eVarArr;
        int i16;
        f fVar2;
        boolean z22;
        boolean z23;
        Object obj3;
        long j16;
        int i17;
        Timeline timeline6;
        boolean z24;
        boolean z25;
        i1 i1Var = this.T;
        d0 d0Var = this.f5398g0;
        f fVar3 = this.O;
        int i18 = this.a0;
        boolean z26 = this.f5391b0;
        Timeline.Window window2 = this.H;
        s1 s1Var = this.I;
        ?? r12 = 4;
        if (timeline.p()) {
            ?? r19 = i1.f9731t;
            timeline2 = timeline;
            c0Var = new hc.c0(r19, 0L, -9223372036854775807L, false, true, false);
            j = 0;
            z16 = r19;
        } else {
            s sVar2 = i1Var.f9732b;
            Object obj4 = sVar2.a;
            Timeline timeline7 = i1Var.a;
            boolean p3 = timeline7.p();
            boolean z27 = p3 || timeline7.g(sVar2.a, s1Var).f9874x;
            long j17 = (i1Var.f9732b.a() || z27) ? i1Var.f9733c : i1Var.f9746r;
            if (d0Var != null) {
                Pair E = E(timeline, d0Var, true, i18, z26, window2, s1Var);
                if (E == null) {
                    i13 = timeline.a(z26);
                    j11 = j17;
                    obj = obj4;
                    z14 = false;
                    z15 = true;
                    z13 = false;
                } else {
                    if (d0Var.f9655c == -9223372036854775807L) {
                        longValue = j17;
                        obj = obj4;
                        z12 = false;
                        i12 = timeline.g(E.first, s1Var).f9871i;
                    } else {
                        obj = E.first;
                        longValue = ((Long) E.second).longValue();
                        z12 = true;
                        i12 = -1;
                    }
                    z13 = z12;
                    z14 = i1Var.f9735e == 4;
                    j11 = longValue;
                    i13 = i12;
                    z15 = false;
                }
                z6 = z14;
                z7 = z15;
                z8 = z13;
                i5 = i13;
                i6 = -1;
                j = 0;
                j5 = j11;
                window = window2;
            } else {
                if (i1Var.a.p()) {
                    i5 = timeline.a(z26);
                    window = window2;
                } else if (timeline.b(obj4) == -1) {
                    Object F = F(window2, s1Var, i18, z26, obj4, i1Var.a, timeline);
                    window = window2;
                    s1Var = s1Var;
                    if (F == null) {
                        i10 = timeline.a(z26);
                        z10 = true;
                    } else {
                        i10 = timeline.g(F, s1Var).f9871i;
                        z10 = false;
                    }
                    i5 = i10;
                    z7 = z10;
                    j5 = j17;
                    obj = obj4;
                    i6 = -1;
                    j = 0;
                    z6 = false;
                    z8 = false;
                } else {
                    window = window2;
                    if (j17 == -9223372036854775807L) {
                        i5 = timeline.g(obj4, s1Var).f9871i;
                    } else if (z27) {
                        i1Var.a.g(sVar2.a, s1Var);
                        if (i1Var.a.m(s1Var.f9871i, window, 0L).L == i1Var.a.b(sVar2.a)) {
                            j = 0;
                            Pair i19 = timeline.i(window, s1Var, timeline.g(obj4, s1Var).f9871i, j17 + s1Var.f9873w);
                            obj = i19.first;
                            j5 = ((Long) i19.second).longValue();
                        } else {
                            j = 0;
                            j5 = j17;
                            obj = obj4;
                        }
                        i5 = -1;
                        i6 = -1;
                        z6 = false;
                        z7 = false;
                        z8 = true;
                    } else {
                        j = 0;
                        j5 = j17;
                        obj = obj4;
                        i5 = -1;
                        i6 = -1;
                        z6 = false;
                        z7 = false;
                        z8 = false;
                    }
                }
                j5 = j17;
                obj = obj4;
                i6 = -1;
                j = 0;
                z6 = false;
                z7 = false;
                z8 = false;
            }
            if (i5 != i6) {
                int i20 = i5;
                timeline2 = timeline;
                Pair i21 = timeline2.i(window, s1Var, i20, -9223372036854775807L);
                obj = i21.first;
                j5 = ((Long) i21.second).longValue();
                j7 = -9223372036854775807L;
            } else {
                timeline2 = timeline;
                j7 = j5;
            }
            s n6 = fVar3.n(timeline2, obj, j5);
            int i22 = n6.f15170e;
            r7 = (!sVar2.a.equals(obj) || sVar2.a() || n6.a() || !(i22 == i6 || ((i11 = sVar2.f15170e) != i6 && i22 >= i11))) ? 0 : 1;
            s1 g6 = timeline2.g(obj, s1Var);
            if (!z27 && j17 == j7) {
                Object obj5 = sVar2.a;
                int i23 = sVar2.f15168c;
                int i24 = sVar2.f15167b;
                if (obj5.equals(n6.a) && (!sVar2.a() || !g6.h(i24) ? !(!n6.a() || !g6.h(n6.f15167b)) : !(g6.e(i24, i23) == 4 || g6.e(i24, i23) == 2))) {
                    z11 = true;
                    if (r7 == 0 || z11) {
                        n6 = sVar2;
                    }
                    if (n6.a()) {
                        if (n6.equals(sVar2)) {
                            j5 = i1Var.f9746r;
                        } else {
                            timeline2.g(n6.a, s1Var);
                            j10 = n6.f15168c == s1Var.f(n6.f15167b) ? s1Var.f9875y.f15833e : j;
                            c0Var = new hc.c0(n6, j10, j7, z6, z7, z8);
                            z16 = p3;
                        }
                    }
                    j10 = j5;
                    c0Var = new hc.c0(n6, j10, j7, z6, z7, z8);
                    z16 = p3;
                }
            }
            z11 = false;
            if (r7 == 0) {
            }
            n6 = sVar2;
            if (n6.a()) {
            }
            j10 = j5;
            c0Var = new hc.c0(n6, j10, j7, z6, z7, z8);
            z16 = p3;
        }
        s sVar3 = c0Var.a;
        long j18 = c0Var.f9639c;
        boolean z28 = c0Var.f9640d;
        long j19 = c0Var.f9638b;
        boolean z29 = (this.T.f9732b.equals(sVar3) && j19 == this.T.f9746r) ? false : true;
        try {
            if (c0Var.f9641e) {
                try {
                    z19 = true;
                    if (this.T.f9735e != 1) {
                        try {
                            V(4);
                        } catch (Throwable th2) {
                            th = th2;
                            timeline3 = timeline2;
                            sVar = sVar3;
                            j12 = j18;
                            z18 = true;
                            z17 = false;
                            i1 i1Var2 = this.T;
                            Timeline timeline8 = i1Var2.a;
                            s sVar4 = i1Var2.f9732b;
                            s sVar5 = sVar;
                            e0(timeline3, sVar5, timeline8, sVar4, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                            if (!z29) {
                            }
                            i1 i1Var3 = this.T;
                            obj2 = i1Var3.f9732b.a;
                            Timeline timeline9 = i1Var3.a;
                            if (z29) {
                            }
                            long j20 = this.T.f9734d;
                            if (timeline3.b(obj2) != -1) {
                            }
                            this.T = o(sVar5, j19, j13, j20, r7, i14);
                            B();
                            D(timeline3, this.T.a);
                            this.T = this.T.h(timeline3);
                            if (!timeline3.p()) {
                            }
                            k(z17);
                            throw th;
                        }
                    }
                    r5 = 0;
                } catch (Throwable th3) {
                    th = th3;
                    z19 = true;
                    r5 = 0;
                }
                try {
                    A(false, false, false, true);
                } catch (Throwable th4) {
                    th = th4;
                    timeline3 = timeline2;
                    sVar = sVar3;
                    j12 = j18;
                    z18 = z19;
                    z17 = r5;
                    i1 i1Var22 = this.T;
                    Timeline timeline82 = i1Var22.a;
                    s sVar42 = i1Var22.f9732b;
                    s sVar52 = sVar;
                    e0(timeline3, sVar52, timeline82, sVar42, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                    if (!z29 || j12 != this.T.f9733c) {
                        i1 i1Var32 = this.T;
                        obj2 = i1Var32.f9732b.a;
                        Timeline timeline92 = i1Var32.a;
                        boolean z30 = (z29 || !z5 || timeline92.p() || timeline92.g(obj2, this.I).f9874x) ? z17 : z18;
                        long j202 = this.T.f9734d;
                        if (timeline3.b(obj2) != -1) {
                            j13 = j12;
                            i14 = 4;
                        } else {
                            j13 = j12;
                            i14 = 3;
                        }
                        this.T = o(sVar52, j19, j13, j202, z30, i14);
                    }
                    B();
                    D(timeline3, this.T.a);
                    this.T = this.T.h(timeline3);
                    if (!timeline3.p()) {
                        this.f5398g0 = null;
                    }
                    k(z17);
                    throw th;
                }
            } else {
                z19 = true;
                r5 = 0;
            }
            try {
                if (z29) {
                    r7 = timeline2;
                    z16 = z19;
                    r12 = r5;
                    z25 = r12;
                    z24 = z16;
                    if (!r7.p()) {
                        for (v0 v0Var = this.O.f5422h; v0Var != null; v0Var = v0Var.f9925l) {
                            if (v0Var.f9921f.a.equals(sVar3)) {
                                v0Var.f9921f = this.O.h(r7, v0Var.f9921f);
                                v0Var.h();
                            }
                        }
                        try {
                            f fVar4 = this.O;
                            sVar = sVar3;
                            try {
                                j19 = I(sVar, j19, fVar4.f5422h != fVar4.f5423i ? z16 ? 1 : 0 : r12, z28);
                                z23 = r12;
                                z22 = z16;
                                i1 i1Var4 = this.T;
                                s sVar6 = sVar;
                                e0(timeline, sVar6, i1Var4.a, i1Var4.f9732b, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                                if (z29 && j18 == this.T.f9733c) {
                                    timeline6 = timeline;
                                } else {
                                    i1 i1Var5 = this.T;
                                    obj3 = i1Var5.f9732b.a;
                                    Timeline timeline10 = i1Var5.a;
                                    boolean z31 = (z29 || !z5 || timeline10.p() || timeline10.g(obj3, this.I).f9874x) ? z23 : z22;
                                    long j21 = this.T.f9734d;
                                    if (timeline.b(obj3) != -1) {
                                        j16 = j18;
                                        i17 = 4;
                                    } else {
                                        j16 = j18;
                                        i17 = 3;
                                    }
                                    timeline6 = timeline;
                                    this.T = o(sVar6, j19, j16, j21, z31, i17);
                                }
                                B();
                                D(timeline6, this.T.a);
                                this.T = this.T.h(timeline6);
                                if (!timeline6.p()) {
                                    this.f5398g0 = null;
                                }
                                k(z23);
                            } catch (Throwable th5) {
                                th = th5;
                                j19 = j19;
                                timeline4 = r7;
                                z21 = r12;
                                z20 = z16;
                                j12 = j18;
                                timeline3 = timeline4;
                                z17 = z21;
                                z18 = z20;
                                i1 i1Var222 = this.T;
                                Timeline timeline822 = i1Var222.a;
                                s sVar422 = i1Var222.f9732b;
                                s sVar522 = sVar;
                                e0(timeline3, sVar522, timeline822, sVar422, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                                if (!z29) {
                                }
                                i1 i1Var322 = this.T;
                                obj2 = i1Var322.f9732b.a;
                                Timeline timeline922 = i1Var322.a;
                                if (z29) {
                                }
                                long j2022 = this.T.f9734d;
                                if (timeline3.b(obj2) != -1) {
                                }
                                this.T = o(sVar522, j19, j13, j2022, z30, i14);
                                B();
                                D(timeline3, this.T.a);
                                this.T = this.T.h(timeline3);
                                if (!timeline3.p()) {
                                }
                                k(z17);
                                throw th;
                            }
                        } catch (Throwable th6) {
                            th = th6;
                            sVar = sVar3;
                            timeline4 = r7;
                            z21 = r12;
                            z20 = z16;
                            j12 = j18;
                            timeline3 = timeline4;
                            z17 = z21;
                            z18 = z20;
                            i1 i1Var2222 = this.T;
                            Timeline timeline8222 = i1Var2222.a;
                            s sVar4222 = i1Var2222.f9732b;
                            s sVar5222 = sVar;
                            e0(timeline3, sVar5222, timeline8222, sVar4222, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                            if (!z29) {
                            }
                            i1 i1Var3222 = this.T;
                            obj2 = i1Var3222.f9732b.a;
                            Timeline timeline9222 = i1Var3222.a;
                            if (z29) {
                            }
                            long j20222 = this.T.f9734d;
                            if (timeline3.b(obj2) != -1) {
                            }
                            this.T = o(sVar5222, j19, j13, j20222, z30, i14);
                            B();
                            D(timeline3, this.T.a);
                            this.T = this.T.h(timeline3);
                            if (!timeline3.p()) {
                            }
                            k(z17);
                            throw th;
                        }
                    }
                } else {
                    try {
                        fVar = this.O;
                        z16 = z19;
                        i15 = r5;
                        try {
                            j14 = this.h0;
                        } catch (Throwable th7) {
                            th = th7;
                        }
                    } catch (Throwable th8) {
                        th = th8;
                        r7 = timeline;
                        z16 = z19;
                        r12 = r5;
                    }
                    try {
                        hc.e[] eVarArr2 = this.f5393d;
                        v0 v0Var2 = fVar.f5423i;
                        try {
                            if (v0Var2 == null) {
                                timeline5 = timeline;
                                j15 = j;
                            } else {
                                long j22 = v0Var2.f9928o;
                                if (v0Var2.f9919d) {
                                    long j23 = j22;
                                    int i25 = i15;
                                    while (i25 < eVarArr2.length) {
                                        if (q(eVarArr2[i25])) {
                                            hc.e eVar = eVarArr2[i25];
                                            eVarArr = eVarArr2;
                                            if (eVar.E == v0Var2.f9918c[i25]) {
                                                fVar2 = fVar;
                                                i16 = i25;
                                                long j24 = eVar.H;
                                                if (j24 == Long.MIN_VALUE) {
                                                    timeline5 = timeline;
                                                    fVar = fVar2;
                                                    j14 = j14;
                                                    r12 = i15;
                                                    j15 = Long.MIN_VALUE;
                                                    break;
                                                }
                                                j23 = Math.max(j24, j23);
                                                i25 = i16 + 1;
                                                fVar = fVar2;
                                                eVarArr2 = eVarArr;
                                            }
                                        } else {
                                            eVarArr = eVarArr2;
                                        }
                                        fVar2 = fVar;
                                        i16 = i25;
                                        i25 = i16 + 1;
                                        fVar = fVar2;
                                        eVarArr2 = eVarArr;
                                    }
                                    timeline5 = timeline;
                                    j15 = j23;
                                    j14 = j14;
                                } else {
                                    j15 = j22;
                                    j14 = j14;
                                    r12 = i15;
                                    timeline5 = timeline;
                                }
                                z25 = r12;
                                z24 = z16;
                                if (!fVar.p(timeline5, j14, j15)) {
                                    G(r12);
                                    z25 = r12;
                                    z24 = z16;
                                }
                            }
                            z25 = r12;
                            z24 = z16;
                            if (!fVar.p(timeline5, j14, j15)) {
                            }
                        } catch (Throwable th9) {
                            th = th9;
                            r7 = timeline5;
                            sVar = sVar3;
                            timeline4 = r7;
                            z21 = r12;
                            z20 = z16;
                            j12 = j18;
                            timeline3 = timeline4;
                            z17 = z21;
                            z18 = z20;
                            i1 i1Var22222 = this.T;
                            Timeline timeline82222 = i1Var22222.a;
                            s sVar42222 = i1Var22222.f9732b;
                            s sVar52222 = sVar;
                            e0(timeline3, sVar52222, timeline82222, sVar42222, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                            if (!z29) {
                            }
                            i1 i1Var32222 = this.T;
                            obj2 = i1Var32222.f9732b.a;
                            Timeline timeline92222 = i1Var32222.a;
                            if (z29) {
                            }
                            long j202222 = this.T.f9734d;
                            if (timeline3.b(obj2) != -1) {
                            }
                            this.T = o(sVar52222, j19, j13, j202222, z30, i14);
                            B();
                            D(timeline3, this.T.a);
                            this.T = this.T.h(timeline3);
                            if (!timeline3.p()) {
                            }
                            k(z17);
                            throw th;
                        }
                        r12 = i15;
                    } catch (Throwable th10) {
                        th = th10;
                        r7 = timeline;
                        r12 = i15;
                        sVar = sVar3;
                        timeline4 = r7;
                        z21 = r12;
                        z20 = z16;
                        j12 = j18;
                        timeline3 = timeline4;
                        z17 = z21;
                        z18 = z20;
                        i1 i1Var222222 = this.T;
                        Timeline timeline822222 = i1Var222222.a;
                        s sVar422222 = i1Var222222.f9732b;
                        s sVar522222 = sVar;
                        e0(timeline3, sVar522222, timeline822222, sVar422222, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                        if (!z29) {
                        }
                        i1 i1Var322222 = this.T;
                        obj2 = i1Var322222.f9732b.a;
                        Timeline timeline922222 = i1Var322222.a;
                        if (z29) {
                        }
                        long j2022222 = this.T.f9734d;
                        if (timeline3.b(obj2) != -1) {
                        }
                        this.T = o(sVar522222, j19, j13, j2022222, z30, i14);
                        B();
                        D(timeline3, this.T.a);
                        this.T = this.T.h(timeline3);
                        if (!timeline3.p()) {
                        }
                        k(z17);
                        throw th;
                    }
                }
                sVar = sVar3;
                z23 = z25;
                z22 = z24;
                i1 i1Var42 = this.T;
                s sVar62 = sVar;
                e0(timeline, sVar62, i1Var42.a, i1Var42.f9732b, !c0Var.f9642f ? j19 : -9223372036854775807L, false);
                if (z29) {
                }
                i1 i1Var52 = this.T;
                obj3 = i1Var52.f9732b.a;
                Timeline timeline102 = i1Var52.a;
                if (z29) {
                }
                long j212 = this.T.f9734d;
                if (timeline.b(obj3) != -1) {
                }
                timeline6 = timeline;
                this.T = o(sVar62, j19, j16, j212, z31, i17);
                B();
                D(timeline6, this.T.a);
                this.T = this.T.h(timeline6);
                if (!timeline6.p()) {
                }
                k(z23);
            } catch (Throwable th11) {
                th = th11;
            }
        } catch (Throwable th12) {
            th = th12;
            timeline3 = timeline2;
            sVar = sVar3;
            j12 = j18;
            z17 = false;
            z18 = true;
        }
    }

    /* JADX WARN: Type inference failed for: r3v1, types: [java.lang.Object, nd.q] */
    public final void m(nd.q qVar) {
        f fVar = this.O;
        v0 v0Var = fVar.j;
        if (v0Var == null || v0Var.a != qVar) {
            return;
        }
        float f2 = this.K.b().f5275d;
        Timeline timeline = this.T.a;
        v0Var.f9919d = true;
        v0Var.f9926m = v0Var.a.u();
        u g6 = v0Var.g(f2, timeline);
        w0 w0Var = v0Var.f9921f;
        long j = w0Var.f9930b;
        long j5 = w0Var.f9933e;
        if (j5 != -9223372036854775807L && j >= j5) {
            j = Math.max(0L, j5 - 1);
        }
        long a = v0Var.a(g6, j, false, new boolean[v0Var.f9924i.length]);
        long j7 = v0Var.f9928o;
        w0 w0Var2 = v0Var.f9921f;
        v0Var.f9928o = (w0Var2.f9930b - a) + j7;
        v0Var.f9921f = w0Var2.b(a);
        c0(v0Var.f9927n);
        if (v0Var == fVar.f5422h) {
            C(v0Var.f9921f.f9930b);
            f(new boolean[this.f5393d.length]);
            i1 i1Var = this.T;
            s sVar = i1Var.f9732b;
            long j10 = v0Var.f9921f.f9930b;
            this.T = o(sVar, j10, i1Var.f9733c, j10, false, 5);
        }
        s();
    }

    public final void n(PlaybackParameters playbackParameters, float f2, boolean z5, boolean z6) {
        int i5;
        if (z5) {
            if (z6) {
                this.U.a(1);
            }
            this.T = this.T.f(playbackParameters);
        }
        float f10 = playbackParameters.f5275d;
        v0 v0Var = this.O.f5422h;
        while (true) {
            i5 = 0;
            if (v0Var == null) {
                break;
            }
            ge.p[] pVarArr = v0Var.f9927n.f9231c;
            int length = pVarArr.length;
            while (i5 < length) {
                ge.p pVar = pVarArr[i5];
                if (pVar != null) {
                    pVar.o(f10);
                }
                i5++;
            }
            v0Var = v0Var.f9925l;
        }
        hc.e[] eVarArr = this.f5393d;
        int length2 = eVarArr.length;
        while (i5 < length2) {
            hc.e eVar = eVarArr[i5];
            if (eVar != null) {
                eVar.x(f2, playbackParameters.f5275d);
            }
            i5++;
        }
    }

    public final i1 o(s sVar, long j, long j5, long j7, boolean z5, int i5) {
        r0 r0Var;
        this.f5401j0 = (!this.f5401j0 && j == this.T.f9746r && sVar.equals(this.T.f9732b)) ? false : true;
        B();
        i1 i1Var = this.T;
        a1 a1Var = i1Var.f9738h;
        u uVar = i1Var.f9739i;
        List list = i1Var.j;
        if (this.P.a) {
            v0 v0Var = this.O.f5422h;
            a1Var = v0Var == null ? a1.f15063v : v0Var.f9926m;
            uVar = v0Var == null ? this.f5405w : v0Var.f9927n;
            ge.p[] pVarArr = uVar.f9231c;
            fi.b0 b0Var = new fi.b0();
            boolean z6 = false;
            for (ge.p pVar : pVarArr) {
                if (pVar != null) {
                    Metadata metadata = pVar.g(0).G;
                    if (metadata == null) {
                        b0Var.a(new Metadata(new dd.b[0]));
                    } else {
                        b0Var.a(metadata);
                        z6 = true;
                    }
                }
            }
            if (z6) {
                r0Var = b0Var.f();
            } else {
                fi.c0 c0Var = e0.f8656e;
                r0Var = r0.f8704w;
            }
            list = r0Var;
            if (v0Var != null) {
                w0 w0Var = v0Var.f9921f;
                if (w0Var.f9931c != j5) {
                    v0Var.f9921f = w0Var.a(j5);
                }
            }
        } else if (!sVar.equals(i1Var.f9732b)) {
            a1Var = a1.f15063v;
            uVar = this.f5405w;
            list = r0.f8704w;
        }
        a1 a1Var2 = a1Var;
        u uVar2 = uVar;
        List list2 = list;
        if (z5) {
            b0 b0Var2 = this.U;
            if (!b0Var2.f9628d || b0Var2.f9629e == 5) {
                b0Var2.a = true;
                b0Var2.f9628d = true;
                b0Var2.f9629e = i5;
            } else {
                ke.b.g(i5 == 5);
            }
        }
        i1 i1Var2 = this.T;
        long j10 = i1Var2.f9744p;
        v0 v0Var2 = this.O.j;
        return i1Var2.c(sVar, j, j5, j7, v0Var2 == null ? 0L : Math.max(0L, j10 - (this.h0 - v0Var2.f9928o)), a1Var2, uVar2, list2);
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, nd.s0] */
    public final boolean p() {
        v0 v0Var = this.O.j;
        if (v0Var == null) {
            return false;
        }
        return (!v0Var.f9919d ? 0L : v0Var.a.h()) != Long.MIN_VALUE;
    }

    public final boolean r() {
        v0 v0Var = this.O.f5422h;
        long j = v0Var.f9921f.f9933e;
        if (v0Var.f9919d) {
            return j == -9223372036854775807L || this.T.f9746r < j || !W();
        }
        return false;
    }

    /* JADX WARN: Type inference failed for: r0v12, types: [java.lang.Object, nd.q] */
    /* JADX WARN: Type inference failed for: r0v18, types: [java.lang.Object, nd.s0] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.lang.Object, nd.s0] */
    public final void s() {
        boolean c6;
        if (p()) {
            v0 v0Var = this.O.j;
            long h6 = !v0Var.f9919d ? 0L : v0Var.a.h();
            v0 v0Var2 = this.O.j;
            long max = v0Var2 == null ? 0L : Math.max(0L, h6 - (this.h0 - v0Var2.f9928o));
            v0 v0Var3 = this.O.f5422h;
            c6 = this.f5406x.c(max, this.K.b().f5275d);
            if (!c6 && max < 500000 && this.J > 0) {
                this.O.f5422h.a.n(this.T.f9746r);
                c6 = this.f5406x.c(max, this.K.b().f5275d);
            }
        } else {
            c6 = false;
        }
        this.Z = c6;
        if (c6) {
            v0 v0Var4 = this.O.j;
            long j = this.h0;
            ke.b.k(v0Var4.f9925l == null);
            v0Var4.a.o(j - v0Var4.f9928o);
        }
        b0();
    }

    public final void t() {
        b0 b0Var = this.U;
        i1 i1Var = this.T;
        boolean z5 = b0Var.a | (b0Var.f9626b != i1Var);
        b0Var.a = z5;
        b0Var.f9626b = i1Var;
        if (z5) {
            d dVar = this.N.f9855d;
            dVar.f5361i.c(new com.mkuczera.haptic.a(6, dVar, b0Var));
            this.U = new b0(this.T);
        }
    }

    public final void u() {
        l(this.P.c(), true);
    }

    public final void v() {
        this.U.a(1);
        throw null;
    }

    public final void w() {
        this.U.a(1);
        A(false, false, false, true);
        this.f5406x.b(false);
        V(this.T.a.p() ? 4 : 2);
        ie.s sVar = (ie.s) this.f5407y;
        sVar.getClass();
        f1 f1Var = this.P;
        ArrayList arrayList = (ArrayList) f1Var.f9694c;
        ke.b.k(!f1Var.a);
        f1Var.f9701l = sVar;
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            e1 e1Var = (e1) arrayList.get(i5);
            f1Var.g(e1Var);
            ((HashSet) f1Var.f9699h).add(e1Var);
        }
        f1Var.a = true;
        this.E.d(2);
    }

    public final void x() {
        A(true, false, true, false);
        for (int i5 = 0; i5 < this.f5393d.length; i5++) {
            hc.e eVar = this.f5399i[i5];
            synchronized (eVar.f9658d) {
                eVar.K = null;
            }
            hc.e eVar2 = this.f5393d[i5];
            ke.b.k(eVar2.f9664y == 0);
            eVar2.o();
        }
        this.f5406x.b(true);
        V(1);
        HandlerThread handlerThread = this.F;
        if (handlerThread != null) {
            handlerThread.quit();
        }
        synchronized (this) {
            this.V = true;
            notifyAll();
        }
    }

    public final void y(int i5, int i6, t0 t0Var) {
        this.U.a(1);
        f1 f1Var = this.P;
        f1Var.getClass();
        ke.b.g(i5 >= 0 && i5 <= i6 && i6 <= ((ArrayList) f1Var.f9694c).size());
        f1Var.k = t0Var;
        f1Var.i(i5, i6);
        l(f1Var.c(), false);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v4 */
    /* JADX WARN: Type inference failed for: r8v5, types: [int] */
    /* JADX WARN: Type inference failed for: r8v8 */
    public final void z() {
        int i5;
        boolean z5;
        float f2 = this.K.b().f5275d;
        f fVar = this.O;
        v0 v0Var = fVar.f5422h;
        v0 v0Var2 = fVar.f5423i;
        boolean z6 = true;
        for (v0 v0Var3 = v0Var; v0Var3 != null && v0Var3.f9919d; v0Var3 = v0Var3.f9925l) {
            u g6 = v0Var3.g(f2, this.T.a);
            u uVar = v0Var3.f9927n;
            ge.p[] pVarArr = g6.f9231c;
            boolean z7 = false;
            if (uVar != null && uVar.f9231c.length == pVarArr.length) {
                for (int i6 = 0; i6 < pVarArr.length; i6++) {
                    if (g6.a(uVar, i6)) {
                    }
                }
                if (v0Var3 == v0Var2) {
                    z6 = false;
                }
            }
            if (z6) {
                f fVar2 = this.O;
                v0 v0Var4 = fVar2.f5422h;
                boolean l6 = fVar2.l(v0Var4);
                boolean[] zArr = new boolean[this.f5393d.length];
                long a = v0Var4.a(g6, this.T.f9746r, l6, zArr);
                i1 i1Var = this.T;
                if (i1Var.f9735e == 4 || a == i1Var.f9746r) {
                    z5 = false;
                } else {
                    z5 = false;
                    z7 = true;
                }
                i1 i1Var2 = this.T;
                boolean z8 = z5;
                i5 = 4;
                this.T = o(i1Var2.f9732b, a, i1Var2.f9733c, i1Var2.f9734d, z7, 5);
                if (z7) {
                    C(a);
                }
                boolean[] zArr2 = new boolean[this.f5393d.length];
                ?? r82 = z8;
                while (true) {
                    hc.e[] eVarArr = this.f5393d;
                    if (r82 >= eVarArr.length) {
                        break;
                    }
                    hc.e eVar = eVarArr[r82];
                    boolean q5 = q(eVar);
                    zArr2[r82] = q5;
                    q0 q0Var = v0Var4.f9918c[r82];
                    if (q5) {
                        if (q0Var != eVar.E) {
                            b(eVar);
                        } else if (zArr[r82]) {
                            long j = this.h0;
                            eVar.I = z8;
                            eVar.H = j;
                            eVar.n(j, z8);
                        }
                    }
                    r82++;
                }
                f(zArr2);
            } else {
                i5 = 4;
                this.O.l(v0Var3);
                if (v0Var3.f9919d) {
                    v0Var3.a(g6, Math.max(v0Var3.f9921f.f9930b, this.h0 - v0Var3.f9928o), false, new boolean[v0Var3.f9924i.length]);
                }
            }
            k(true);
            if (this.T.f9735e != i5) {
                s();
                d0();
                this.E.d(2);
                return;
            }
            return;
        }
    }
}
