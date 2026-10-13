package pr;

import hc.h0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceArray;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlin.text.b0;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.channels.Channel;
import nr.v1;
import nr.x;

/* loaded from: classes3.dex */
public class h implements Channel {
    private volatile /* synthetic */ Object _closeCause$volatile;
    private volatile /* synthetic */ long bufferEnd$volatile;
    private volatile /* synthetic */ Object bufferEndSegment$volatile;
    private volatile /* synthetic */ Object closeHandler$volatile;
    private volatile /* synthetic */ long completedExpandBuffersAndPauseFlag$volatile;

    /* renamed from: d, reason: collision with root package name */
    public final int f16488d;
    private volatile /* synthetic */ Object receiveSegment$volatile;
    private volatile /* synthetic */ long receivers$volatile;
    private volatile /* synthetic */ Object sendSegment$volatile;
    private volatile /* synthetic */ long sendersAndCloseStatus$volatile;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f16482e = AtomicLongFieldUpdater.newUpdater(h.class, "sendersAndCloseStatus$volatile");

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f16483i = AtomicLongFieldUpdater.newUpdater(h.class, "receivers$volatile");

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f16484v = AtomicLongFieldUpdater.newUpdater(h.class, "bufferEnd$volatile");

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f16485w = AtomicLongFieldUpdater.newUpdater(h.class, "completedExpandBuffersAndPauseFlag$volatile");

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f16486x = AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "sendSegment$volatile");

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f16487y = AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "receiveSegment$volatile");
    public static final /* synthetic */ AtomicReferenceFieldUpdater E = AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "bufferEndSegment$volatile");
    public static final /* synthetic */ AtomicReferenceFieldUpdater F = AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "_closeCause$volatile");
    public static final /* synthetic */ AtomicReferenceFieldUpdater G = AtomicReferenceFieldUpdater.newUpdater(h.class, Object.class, "closeHandler$volatile");

    public h(int i5) {
        this.f16488d = i5;
        if (i5 < 0) {
            throw new IllegalArgumentException(s4.h.e(i5, "Invalid channel capacity: ", ", should be >=0").toString());
        }
        o oVar = j.a;
        this.bufferEnd$volatile = i5 != 0 ? i5 != Integer.MAX_VALUE ? i5 : LongCompanionObject.MAX_VALUE : 0L;
        this.completedExpandBuffersAndPauseFlag$volatile = f16484v.get(this);
        o oVar2 = new o(0L, null, this, 3);
        this.sendSegment$volatile = oVar2;
        this.receiveSegment$volatile = oVar2;
        if (B()) {
            oVar2 = j.a;
            Intrinsics.checkNotNull(oVar2, "null cannot be cast to non-null type kotlinx.coroutines.channels.ChannelSegment<E of kotlinx.coroutines.channels.BufferedChannel>");
        }
        this.bufferEndSegment$volatile = oVar2;
        this._closeCause$volatile = j.f16505s;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Object E(h hVar, lo.c cVar) {
        f fVar;
        int i5;
        o oVar;
        if (cVar instanceof f) {
            fVar = (f) cVar;
            int i6 = fVar.f16478i;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                fVar.f16478i = i6 - Integer.MIN_VALUE;
                f fVar2 = fVar;
                Object obj = fVar2.f16476d;
                ko.a aVar = ko.a.f13464d;
                i5 = fVar2.f16478i;
                if (i5 == 0) {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return ((n) obj).a;
                }
                ki.b.R(obj);
                o oVar2 = (o) f16487y.get(hVar);
                while (!hVar.z()) {
                    long andIncrement = f16483i.getAndIncrement(hVar);
                    long j = j.f16490b;
                    long j5 = andIncrement / j;
                    int i10 = (int) (andIncrement % j);
                    if (oVar2.f18127i != j5) {
                        o s2 = hVar.s(j5, oVar2);
                        if (s2 == null) {
                            continue;
                        } else {
                            oVar = s2;
                        }
                    } else {
                        oVar = oVar2;
                    }
                    h hVar2 = hVar;
                    Object J = hVar2.J(oVar, i10, andIncrement, null);
                    if (J == j.f16499m) {
                        throw new IllegalStateException("unexpected");
                    }
                    if (J != j.f16501o) {
                        if (J != j.f16500n) {
                            oVar.a();
                            return J;
                        }
                        fVar2.f16478i = 1;
                        Object F2 = hVar2.F(oVar, i10, andIncrement, fVar2);
                        return F2 == aVar ? aVar : F2;
                    }
                    if (andIncrement < hVar2.w()) {
                        oVar.a();
                    }
                    hVar = hVar2;
                    oVar2 = oVar;
                }
                return new l(hVar.t());
            }
        }
        fVar = new f(hVar, cVar);
        f fVar22 = fVar;
        Object obj2 = fVar22.f16476d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = fVar22.f16478i;
        if (i5 == 0) {
        }
    }

    public static final o c(h hVar, long j, o oVar) {
        Object a;
        h hVar2;
        o oVar2 = j.a;
        i iVar = i.f16489d;
        loop0: while (true) {
            a = sr.b.a(oVar, j, iVar);
            if (!sr.h.d(a)) {
                sr.u b10 = sr.h.b(a);
                while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f16486x;
                    sr.u uVar = (sr.u) atomicReferenceFieldUpdater.get(hVar);
                    if (uVar.f18127i >= b10.f18127i) {
                        break loop0;
                    }
                    if (!b10.j()) {
                        break;
                    }
                    while (!atomicReferenceFieldUpdater.compareAndSet(hVar, uVar, b10)) {
                        if (atomicReferenceFieldUpdater.get(hVar) != uVar) {
                            if (b10.f()) {
                                b10.e();
                            }
                        }
                    }
                    if (uVar.f()) {
                        uVar.e();
                    }
                }
            } else {
                break;
            }
        }
        boolean d6 = sr.h.d(a);
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16483i;
        if (d6) {
            hVar.q();
            if (oVar.f18127i * j.f16490b < atomicLongFieldUpdater.get(hVar)) {
                oVar.a();
                return null;
            }
        } else {
            o oVar3 = (o) sr.h.b(a);
            long j5 = oVar3.f18127i;
            if (j5 <= j) {
                return oVar3;
            }
            long j7 = j.f16490b * j5;
            while (true) {
                long j10 = f16482e.get(hVar);
                long j11 = 1152921504606846975L & j10;
                if (j11 >= j7) {
                    hVar2 = hVar;
                    break;
                }
                hVar2 = hVar;
                if (f16482e.compareAndSet(hVar2, j10, (((int) (j10 >> 60)) << 60) + j11)) {
                    break;
                }
                hVar = hVar2;
            }
            if (j5 * j.f16490b < atomicLongFieldUpdater.get(hVar2)) {
                oVar3.a();
            }
        }
        return null;
    }

    public static final void h(h hVar, Object obj, nr.j jVar) {
        Throwable v5 = hVar.v();
        fo.q qVar = Result.f13476e;
        jVar.resumeWith(ki.b.i(v5));
    }

    public static final int i(h hVar, o oVar, int i5, Object obj, long j, Object obj2, boolean z5) {
        oVar.n(i5, obj);
        if (z5) {
            return hVar.K(oVar, i5, obj, j, obj2, z5);
        }
        Object l6 = oVar.l(i5);
        if (l6 == null) {
            if (hVar.j(j)) {
                if (oVar.k(i5, null, j.f16492d)) {
                    return 1;
                }
            } else {
                if (obj2 == null) {
                    return 3;
                }
                if (oVar.k(i5, null, obj2)) {
                    return 2;
                }
            }
        } else if (l6 instanceof v1) {
            oVar.n(i5, null);
            if (hVar.H(l6, obj)) {
                oVar.o(i5, j.f16497i);
                return 0;
            }
            a5.h hVar2 = j.k;
            if (oVar.f16509x.getAndSet((i5 * 2) + 1, hVar2) == hVar2) {
                return 5;
            }
            oVar.m(i5, true);
            return 5;
        }
        return hVar.K(oVar, i5, obj, j, obj2, z5);
    }

    public static void x(h hVar) {
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16485w;
        if ((atomicLongFieldUpdater.addAndGet(hVar, 1L) & 4611686018427387904L) != 0) {
            while ((atomicLongFieldUpdater.get(hVar) & 4611686018427387904L) != 0) {
            }
        }
    }

    public boolean A() {
        return false;
    }

    public final boolean B() {
        long j = f16484v.get(this);
        return j == 0 || j == LongCompanionObject.MAX_VALUE;
    }

    /* JADX WARN: Code restructure failed: missing block: B:38:0x0011, code lost:
    
        continue;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void C(long j, o oVar) {
        o oVar2;
        o oVar3;
        while (oVar.f18127i < j && (oVar3 = (o) oVar.c()) != null) {
            oVar = oVar3;
        }
        while (true) {
            if (!oVar.d() || (oVar2 = (o) oVar.c()) == null) {
                while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = E;
                    sr.u uVar = (sr.u) atomicReferenceFieldUpdater.get(this);
                    if (uVar.f18127i >= oVar.f18127i) {
                        return;
                    }
                    if (!oVar.j()) {
                        break;
                    }
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, uVar, oVar)) {
                        if (atomicReferenceFieldUpdater.get(this) != uVar) {
                            if (oVar.f()) {
                                oVar.e();
                            }
                        }
                    }
                    if (uVar.f()) {
                        uVar.e();
                        return;
                    }
                    return;
                }
            }
            oVar = oVar2;
        }
    }

    public final Object D(Object obj, Continuation frame) {
        nr.j jVar = new nr.j(1, ko.f.b(frame));
        jVar.t();
        Throwable v5 = v();
        fo.q qVar = Result.f13476e;
        jVar.resumeWith(ki.b.i(v5));
        Object r5 = jVar.r();
        ko.a aVar = ko.a.f13464d;
        if (r5 == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5 == aVar ? r5 : Unit.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object F(o oVar, int i5, long j, lo.c cVar) {
        g frame;
        int i6;
        n nVar;
        o oVar2;
        if (cVar instanceof g) {
            frame = (g) cVar;
            int i10 = frame.f16481i;
            if ((i10 & Integer.MIN_VALUE) != 0) {
                frame.f16481i = i10 - Integer.MIN_VALUE;
                Object obj = frame.f16479d;
                ko.a aVar = ko.a.f13464d;
                i6 = frame.f16481i;
                if (i6 != 0) {
                    ki.b.R(obj);
                    frame.f16481i = 1;
                    nr.j p3 = x.p(ko.f.b(frame));
                    try {
                        Intrinsics.checkNotNull(p3, "null cannot be cast to non-null type kotlinx.coroutines.CancellableContinuationImpl<kotlinx.coroutines.channels.ChannelResult<E of kotlinx.coroutines.channels.BufferedChannel>>");
                        t tVar = new t(p3);
                        Object J = J(oVar, i5, j, tVar);
                        if (J == j.f16499m) {
                            tVar.a(oVar, i5);
                        } else {
                            if (J == j.f16501o) {
                                if (j < w()) {
                                    oVar.a();
                                }
                                o oVar3 = (o) f16487y.get(this);
                                while (true) {
                                    if (z()) {
                                        fo.q qVar = Result.f13476e;
                                        p3.resumeWith(new n(new l(t())));
                                        break;
                                    }
                                    long andIncrement = f16483i.getAndIncrement(this);
                                    long j5 = j.f16490b;
                                    long j7 = andIncrement / j5;
                                    int i11 = (int) (andIncrement % j5);
                                    if (oVar3.f18127i != j7) {
                                        oVar2 = s(j7, oVar3);
                                        if (oVar2 == null) {
                                        }
                                    } else {
                                        oVar2 = oVar3;
                                    }
                                    Object J2 = J(oVar2, i11, andIncrement, tVar);
                                    if (J2 == j.f16499m) {
                                        tVar.a(oVar2, i11);
                                        break;
                                    }
                                    if (J2 == j.f16501o) {
                                        if (andIncrement < w()) {
                                            oVar2.a();
                                        }
                                        oVar3 = oVar2;
                                    } else {
                                        if (J2 == j.f16500n) {
                                            throw new IllegalStateException("unexpected");
                                        }
                                        oVar2.a();
                                        nVar = new n(J2);
                                    }
                                }
                            } else {
                                oVar.a();
                                nVar = new n(J);
                            }
                            p3.j(nVar, null);
                        }
                        obj = p3.r();
                        if (obj == ko.a.f13464d) {
                            Intrinsics.checkNotNullParameter(frame, "frame");
                        }
                        if (obj == aVar) {
                            return aVar;
                        }
                    } catch (Throwable th2) {
                        p3.A();
                        throw th2;
                    }
                } else {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return ((n) obj).a;
            }
        }
        frame = new g(this, cVar);
        Object obj2 = frame.f16479d;
        ko.a aVar2 = ko.a.f13464d;
        i6 = frame.f16481i;
        if (i6 != 0) {
        }
        return ((n) obj2).a;
    }

    public final void G(v1 v1Var, boolean z5) {
        if (v1Var instanceof CancellableContinuation) {
            Continuation continuation = (Continuation) v1Var;
            fo.q qVar = Result.f13476e;
            continuation.resumeWith(ki.b.i(z5 ? u() : v()));
            return;
        }
        if (v1Var instanceof t) {
            nr.j jVar = ((t) v1Var).f16515d;
            fo.q qVar2 = Result.f13476e;
            jVar.resumeWith(new n(new l(t())));
            return;
        }
        if (!(v1Var instanceof c)) {
            if (v1Var instanceof vr.f) {
                ((vr.e) ((vr.f) v1Var)).g(this, j.f16498l);
                return;
            } else {
                throw new IllegalStateException(("Unexpected waiter: " + v1Var).toString());
            }
        }
        c cVar = (c) v1Var;
        nr.j jVar2 = cVar.f16472e;
        Intrinsics.checkNotNull(jVar2);
        cVar.f16472e = null;
        cVar.f16471d = j.f16498l;
        Throwable t5 = cVar.f16473i.t();
        if (t5 == null) {
            fo.q qVar3 = Result.f13476e;
            jVar2.resumeWith(Boolean.FALSE);
        } else {
            fo.q qVar4 = Result.f13476e;
            jVar2.resumeWith(ki.b.i(t5));
        }
    }

    public final boolean H(Object obj, Object obj2) {
        if (obj instanceof vr.f) {
            return ((vr.e) ((vr.f) obj)).g(this, obj2) == 0;
        }
        if (obj instanceof t) {
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.channels.ReceiveCatching<E of kotlinx.coroutines.channels.BufferedChannel>");
            return j.a(((t) obj).f16515d, new n(obj2), null);
        }
        if (!(obj instanceof c)) {
            if (obj instanceof CancellableContinuation) {
                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.CancellableContinuation<E of kotlinx.coroutines.channels.BufferedChannel>");
                return j.a((CancellableContinuation) obj, obj2, null);
            }
            throw new IllegalStateException(("Unexpected receiver type: " + obj).toString());
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.channels.BufferedChannel.BufferedChannelIterator<E of kotlinx.coroutines.channels.BufferedChannel>");
        c cVar = (c) obj;
        nr.j jVar = cVar.f16472e;
        Intrinsics.checkNotNull(jVar);
        cVar.f16472e = null;
        cVar.f16471d = obj2;
        return j.a(jVar, Boolean.TRUE, null);
    }

    public final boolean I(Object obj, o oVar, int i5) {
        vr.i iVar;
        if (obj instanceof CancellableContinuation) {
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.CancellableContinuation<kotlin.Unit>");
            return j.a((CancellableContinuation) obj, Unit.a, null);
        }
        if (!(obj instanceof vr.f)) {
            throw new IllegalStateException(("Unexpected waiter: " + obj).toString());
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.selects.SelectImplementation<*>");
        int g6 = ((vr.e) obj).g(this, Unit.a);
        if (g6 == 0) {
            iVar = vr.i.f19567d;
        } else if (g6 == 1) {
            iVar = vr.i.f19568e;
        } else if (g6 == 2) {
            iVar = vr.i.f19569i;
        } else {
            if (g6 != 3) {
                throw new IllegalStateException(("Unexpected internal result: " + g6).toString());
            }
            iVar = vr.i.f19570v;
        }
        if (iVar == vr.i.f19568e) {
            oVar.n(i5, null);
        }
        return iVar == vr.i.f19567d;
    }

    public final Object J(o oVar, int i5, long j, Object obj) {
        Object l6 = oVar.l(i5);
        AtomicReferenceArray atomicReferenceArray = oVar.f16509x;
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16482e;
        if (l6 == null) {
            if (j >= (atomicLongFieldUpdater.get(this) & 1152921504606846975L)) {
                if (obj == null) {
                    return j.f16500n;
                }
                if (oVar.k(i5, l6, obj)) {
                    r();
                    return j.f16499m;
                }
            }
        } else if (l6 == j.f16492d && oVar.k(i5, l6, j.f16497i)) {
            r();
            Object obj2 = atomicReferenceArray.get(i5 * 2);
            oVar.n(i5, null);
            return obj2;
        }
        while (true) {
            Object l7 = oVar.l(i5);
            if (l7 == null || l7 == j.f16493e) {
                if (j < (atomicLongFieldUpdater.get(this) & 1152921504606846975L)) {
                    if (oVar.k(i5, l7, j.f16496h)) {
                        r();
                        return j.f16501o;
                    }
                } else {
                    if (obj == null) {
                        return j.f16500n;
                    }
                    if (oVar.k(i5, l7, obj)) {
                        r();
                        return j.f16499m;
                    }
                }
            } else if (l7 != j.f16492d) {
                a5.h hVar = j.j;
                if (l7 == hVar) {
                    return j.f16501o;
                }
                if (l7 == j.f16496h) {
                    return j.f16501o;
                }
                if (l7 == j.f16498l) {
                    r();
                    return j.f16501o;
                }
                if (l7 != j.f16495g && oVar.k(i5, l7, j.f16494f)) {
                    boolean z5 = l7 instanceof w;
                    if (z5) {
                        l7 = ((w) l7).a;
                    }
                    if (I(l7, oVar, i5)) {
                        oVar.o(i5, j.f16497i);
                        r();
                        Object obj3 = atomicReferenceArray.get(i5 * 2);
                        oVar.n(i5, null);
                        return obj3;
                    }
                    oVar.o(i5, hVar);
                    oVar.i();
                    if (z5) {
                        r();
                    }
                    return j.f16501o;
                }
            } else if (oVar.k(i5, l7, j.f16497i)) {
                r();
                Object obj4 = atomicReferenceArray.get(i5 * 2);
                oVar.n(i5, null);
                return obj4;
            }
        }
    }

    public final int K(o oVar, int i5, Object obj, long j, Object obj2, boolean z5) {
        while (true) {
            Object l6 = oVar.l(i5);
            if (l6 == null) {
                if (!j(j) || z5) {
                    if (z5) {
                        if (oVar.k(i5, null, j.j)) {
                            oVar.i();
                            return 4;
                        }
                    } else {
                        if (obj2 == null) {
                            return 3;
                        }
                        if (oVar.k(i5, null, obj2)) {
                            return 2;
                        }
                    }
                } else if (oVar.k(i5, null, j.f16492d)) {
                    break;
                }
            } else {
                if (l6 != j.f16493e) {
                    a5.h hVar = j.k;
                    if (l6 == hVar) {
                        oVar.n(i5, null);
                        return 5;
                    }
                    if (l6 == j.f16496h) {
                        oVar.n(i5, null);
                        return 5;
                    }
                    if (l6 == j.f16498l) {
                        oVar.n(i5, null);
                        q();
                        return 4;
                    }
                    oVar.n(i5, null);
                    if (l6 instanceof w) {
                        l6 = ((w) l6).a;
                    }
                    if (H(l6, obj)) {
                        oVar.o(i5, j.f16497i);
                        return 0;
                    }
                    if (oVar.f16509x.getAndSet((i5 * 2) + 1, hVar) != hVar) {
                        oVar.m(i5, true);
                    }
                    return 5;
                }
                if (oVar.k(i5, l6, j.f16492d)) {
                    break;
                }
            }
        }
        return 1;
    }

    public final void L(long j) {
        AtomicLongFieldUpdater atomicLongFieldUpdater;
        h hVar = this;
        if (hVar.B()) {
            return;
        }
        while (true) {
            atomicLongFieldUpdater = f16484v;
            if (atomicLongFieldUpdater.get(hVar) > j) {
                break;
            } else {
                hVar = this;
            }
        }
        int i5 = j.f16491c;
        int i6 = 0;
        while (true) {
            AtomicLongFieldUpdater atomicLongFieldUpdater2 = f16485w;
            if (i6 < i5) {
                long j5 = atomicLongFieldUpdater.get(hVar);
                if (j5 == (4611686018427387903L & atomicLongFieldUpdater2.get(hVar)) && j5 == atomicLongFieldUpdater.get(hVar)) {
                    return;
                } else {
                    i6++;
                }
            } else {
                while (true) {
                    long j7 = atomicLongFieldUpdater2.get(hVar);
                    if (atomicLongFieldUpdater2.compareAndSet(hVar, j7, (j7 & 4611686018427387903L) + 4611686018427387904L)) {
                        break;
                    } else {
                        hVar = this;
                    }
                }
                while (true) {
                    long j10 = atomicLongFieldUpdater.get(hVar);
                    long j11 = atomicLongFieldUpdater2.get(hVar);
                    long j12 = j11 & 4611686018427387903L;
                    boolean z5 = (j11 & 4611686018427387904L) != 0;
                    if (j10 == j12 && j10 == atomicLongFieldUpdater.get(hVar)) {
                        break;
                    }
                    if (z5) {
                        hVar = this;
                    } else {
                        hVar = this;
                        atomicLongFieldUpdater2.compareAndSet(hVar, j11, 4611686018427387904L + j12);
                    }
                }
                while (true) {
                    long j13 = atomicLongFieldUpdater2.get(hVar);
                    if (atomicLongFieldUpdater2.compareAndSet(hVar, j13, j13 & 4611686018427387903L)) {
                        return;
                    } else {
                        hVar = this;
                    }
                }
            }
        }
    }

    @Override // pr.u
    public final Object a(lo.c cVar) {
        return E(this, cVar);
    }

    @Override // pr.u
    public final com.google.firebase.messaging.r b() {
        d dVar = d.f16474d;
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type kotlin.Function3<@[ParameterName(name = \"clauseObject\")] kotlin.Any, @[ParameterName(name = \"select\")] kotlinx.coroutines.selects.SelectInstance<*>, @[ParameterName(name = \"param\")] kotlin.Any?, kotlin.Unit>");
        Function3 function3 = (Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(dVar, 3);
        e eVar = e.f16475d;
        Intrinsics.checkNotNull(eVar, "null cannot be cast to non-null type kotlin.Function3<@[ParameterName(name = \"clauseObject\")] kotlin.Any, @[ParameterName(name = \"param\")] kotlin.Any?, @[ParameterName(name = \"clauseResult\")] kotlin.Any?, kotlin.Any?>");
        return new com.google.firebase.messaging.r(16, this, function3, (Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(eVar, 3), null);
    }

    @Override // pr.v
    public final void e(com.margelo.nitro.playagerangedeclaration.c cVar) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = G;
            if (atomicReferenceFieldUpdater.compareAndSet(this, null, cVar)) {
                return;
            }
        } while (atomicReferenceFieldUpdater.get(this) == null);
        while (true) {
            Object obj = atomicReferenceFieldUpdater.get(this);
            a5.h hVar = j.f16503q;
            if (obj != hVar) {
                if (obj == j.f16504r) {
                    throw new IllegalStateException("Another handler was already registered and successfully invoked");
                }
                throw new IllegalStateException(("Another handler is already registered: " + obj).toString());
            }
            a5.h hVar2 = j.f16504r;
            while (!atomicReferenceFieldUpdater.compareAndSet(this, hVar, hVar2)) {
                if (atomicReferenceFieldUpdater.get(this) != hVar) {
                    break;
                }
            }
            cVar.invoke(t());
            return;
        }
    }

    @Override // pr.u
    public final void f(CancellationException cancellationException) {
        if (cancellationException == null) {
            cancellationException = new CancellationException("Channel was cancelled");
        }
        l(cancellationException, true);
    }

    @Override // pr.u
    public final Object g() {
        o oVar;
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16483i;
        long j = atomicLongFieldUpdater.get(this);
        long j5 = f16482e.get(this);
        if (y(j5, true)) {
            return new l(t());
        }
        long j7 = j5 & 1152921504606846975L;
        m mVar = n.f16507b;
        if (j >= j7) {
            return mVar;
        }
        Object obj = j.k;
        o oVar2 = (o) f16487y.get(this);
        while (!z()) {
            long andIncrement = atomicLongFieldUpdater.getAndIncrement(this);
            long j10 = j.f16490b;
            long j11 = andIncrement / j10;
            int i5 = (int) (andIncrement % j10);
            if (oVar2.f18127i != j11) {
                o s2 = s(j11, oVar2);
                if (s2 == null) {
                    continue;
                } else {
                    oVar = s2;
                }
            } else {
                oVar = oVar2;
            }
            Object J = J(oVar, i5, andIncrement, obj);
            o oVar3 = oVar;
            if (J == j.f16499m) {
                v1 v1Var = obj instanceof v1 ? (v1) obj : null;
                if (v1Var != null) {
                    v1Var.a(oVar3, i5);
                }
                L(andIncrement);
                oVar3.i();
                return mVar;
            }
            if (J != j.f16501o) {
                if (J == j.f16500n) {
                    throw new IllegalStateException("unexpected");
                }
                oVar3.a();
                return J;
            }
            if (andIncrement < w()) {
                oVar3.a();
            }
            oVar2 = oVar3;
        }
        return new l(t());
    }

    public final boolean j(long j) {
        return j < f16484v.get(this) || j < f16483i.get(this) + ((long) this.f16488d);
    }

    @Override // pr.v
    public final boolean k(Throwable th2) {
        return l(th2, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0031  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x003c A[LOOP:2: B:17:0x003c->B:39:?, LOOP_START] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x006e A[LOOP:3: B:22:0x006e->B:30:?, LOOP_LABEL: LOOP:3: B:22:0x006e->B:30:?, LOOP_START] */
    /* JADX WARN: Removed duplicated region for block: B:40:0x004c A[LOOP:5: B:40:0x004c->B:48:?, LOOP_START] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x002f A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean l(Throwable th2, boolean z5) {
        h hVar;
        a5.h hVar2;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        boolean z6;
        long j;
        long j5;
        long j7;
        Object obj;
        long j10;
        long j11;
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16482e;
        if (z5) {
            do {
                j11 = atomicLongFieldUpdater.get(this);
                if (((int) (j11 >> 60)) == 0) {
                    o oVar = j.a;
                    hVar = this;
                }
            } while (!atomicLongFieldUpdater.compareAndSet(hVar, j11, (j11 & 1152921504606846975L) + (1 << 60)));
            hVar2 = j.f16505s;
            while (true) {
                atomicReferenceFieldUpdater = F;
                if (!atomicReferenceFieldUpdater.compareAndSet(this, hVar2, th2)) {
                    z6 = true;
                    break;
                }
                if (atomicReferenceFieldUpdater.get(this) != hVar2) {
                    z6 = false;
                    break;
                }
            }
            if (z5) {
                do {
                    j = atomicLongFieldUpdater.get(this);
                    int i5 = (int) (j >> 60);
                    if (i5 == 0) {
                        j5 = j & 1152921504606846975L;
                        j7 = 2;
                    } else {
                        if (i5 != 1) {
                            break;
                        }
                        j5 = j & 1152921504606846975L;
                        j7 = 3;
                    }
                } while (!atomicLongFieldUpdater.compareAndSet(hVar, j, (j7 << 60) + j5));
            } else {
                do {
                    j10 = atomicLongFieldUpdater.get(this);
                } while (!atomicLongFieldUpdater.compareAndSet(hVar, j10, (3 << 60) + (j10 & 1152921504606846975L)));
            }
            q();
            if (z6) {
                loop3: while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = G;
                    obj = atomicReferenceFieldUpdater2.get(this);
                    a5.h hVar3 = obj == null ? j.f16503q : j.f16504r;
                    while (!atomicReferenceFieldUpdater2.compareAndSet(this, obj, hVar3)) {
                        if (atomicReferenceFieldUpdater2.get(this) != obj) {
                            break;
                        }
                    }
                }
                if (obj != null) {
                    ((Function1) obj).invoke(t());
                    return z6;
                }
            }
            return z6;
        }
        hVar = this;
        hVar2 = j.f16505s;
        while (true) {
            atomicReferenceFieldUpdater = F;
            if (!atomicReferenceFieldUpdater.compareAndSet(this, hVar2, th2)) {
            }
        }
        if (z5) {
        }
        q();
        if (z6) {
        }
        return z6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:54:0x008d, code lost:
    
        r1 = (pr.o) ((sr.c) sr.c.f18102e.get(r1));
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final o m(long j) {
        Object obj;
        long j5;
        Object obj2 = E.get(this);
        o oVar = (o) f16486x.get(this);
        if (oVar.f18127i > ((o) obj2).f18127i) {
            obj2 = oVar;
        }
        o oVar2 = (o) f16487y.get(this);
        if (oVar2.f18127i > ((o) obj2).f18127i) {
            obj2 = oVar2;
        }
        sr.c cVar = (sr.c) obj2;
        loop0: while (true) {
            cVar.getClass();
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.c.f18101d;
            Object obj3 = atomicReferenceFieldUpdater.get(cVar);
            obj = null;
            a5.h hVar = sr.b.a;
            if (obj3 == hVar) {
                break;
            }
            sr.c cVar2 = (sr.c) obj3;
            if (cVar2 == null) {
                while (!atomicReferenceFieldUpdater.compareAndSet(cVar, null, hVar)) {
                    if (atomicReferenceFieldUpdater.get(cVar) != null) {
                        break;
                    }
                }
                break loop0;
            }
            cVar = cVar2;
        }
        o oVar3 = (o) cVar;
        if (A()) {
            o oVar4 = oVar3;
            loop2: do {
                int i5 = j.f16490b - 1;
                while (true) {
                    if (-1 >= i5) {
                        break;
                    }
                    j5 = (oVar4.f18127i * j.f16490b) + i5;
                    if (j5 < f16483i.get(this)) {
                        break loop2;
                    }
                    while (true) {
                        Object l6 = oVar4.l(i5);
                        if (l6 != null && l6 != j.f16493e) {
                            if (l6 == j.f16492d) {
                                break loop2;
                            }
                        } else {
                            if (oVar4.k(i5, l6, j.f16498l)) {
                                oVar4.i();
                                break;
                            }
                        }
                    }
                    i5--;
                }
            } while (oVar4 != null);
            j5 = -1;
            if (j5 != -1) {
                o(j5);
            }
        }
        loop5: for (o oVar5 = oVar3; oVar5 != null; oVar5 = (o) ((sr.c) sr.c.f18102e.get(oVar5))) {
            for (int i6 = j.f16490b - 1; -1 < i6; i6--) {
                if ((oVar5.f18127i * j.f16490b) + i6 < j) {
                    break loop5;
                }
                while (true) {
                    Object l7 = oVar5.l(i6);
                    if (l7 != null && l7 != j.f16493e) {
                        if (!(l7 instanceof w)) {
                            if (!(l7 instanceof v1)) {
                                break;
                            }
                            if (oVar5.k(i6, l7, j.f16498l)) {
                                obj = sr.h.e(obj, l7);
                                oVar5.m(i6, true);
                                break;
                            }
                        } else {
                            if (oVar5.k(i6, l7, j.f16498l)) {
                                obj = sr.h.e(obj, ((w) l7).a);
                                oVar5.m(i6, true);
                                break;
                            }
                        }
                    } else {
                        if (oVar5.k(i6, l7, j.f16498l)) {
                            oVar5.i();
                            break;
                        }
                    }
                }
            }
        }
        if (obj != null) {
            if (!(obj instanceof ArrayList)) {
                G((v1) obj, true);
                return oVar3;
            }
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.util.ArrayList<E of kotlinx.coroutines.internal.InlineList>");
            ArrayList arrayList = (ArrayList) obj;
            for (int size = arrayList.size() - 1; -1 < size; size--) {
                G((v1) arrayList.get(size), true);
            }
        }
        return oVar3;
    }

    @Override // pr.v
    public Object n(Object obj) {
        AtomicLongFieldUpdater atomicLongFieldUpdater = f16482e;
        boolean z5 = false;
        long j = 1152921504606846975L;
        boolean z6 = y(atomicLongFieldUpdater.get(this), false) ? false : !j(r1 & 1152921504606846975L);
        m mVar = n.f16507b;
        if (z6) {
            return mVar;
        }
        Object obj2 = j.j;
        o oVar = (o) f16486x.get(this);
        while (true) {
            long andIncrement = atomicLongFieldUpdater.getAndIncrement(this);
            long j5 = andIncrement & j;
            boolean y5 = y(andIncrement, z5);
            int i5 = j.f16490b;
            long j7 = i5;
            long j10 = j5 / j7;
            int i6 = (int) (j5 % j7);
            if (oVar.f18127i != j10) {
                o c6 = c(this, j10, oVar);
                if (c6 != null) {
                    oVar = c6;
                } else {
                    if (y5) {
                        return new l(v());
                    }
                    z5 = false;
                    j = 1152921504606846975L;
                }
            }
            int i10 = i(this, oVar, i6, obj, j5, obj2, y5);
            if (i10 == 0) {
                oVar.a();
                return Unit.a;
            }
            if (i10 == 1) {
                return Unit.a;
            }
            if (i10 == 2) {
                if (y5) {
                    oVar.i();
                    return new l(v());
                }
                v1 v1Var = obj2 instanceof v1 ? (v1) obj2 : null;
                if (v1Var != null) {
                    v1Var.a(oVar, i6 + i5);
                }
                oVar.i();
                return mVar;
            }
            if (i10 == 3) {
                throw new IllegalStateException("unexpected");
            }
            if (i10 == 4) {
                if (j5 < f16483i.get(this)) {
                    oVar.a();
                }
                return new l(v());
            }
            if (i10 == 5) {
                oVar.a();
            }
            z5 = false;
            j = 1152921504606846975L;
        }
    }

    public final void o(long j) {
        o oVar = (o) f16487y.get(this);
        while (true) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = f16483i;
            long j5 = atomicLongFieldUpdater.get(this);
            if (j < Math.max(this.f16488d + j5, f16484v.get(this))) {
                return;
            }
            if (atomicLongFieldUpdater.compareAndSet(this, j5, 1 + j5)) {
                long j7 = j.f16490b;
                long j10 = j5 / j7;
                int i5 = (int) (j5 % j7);
                if (oVar.f18127i != j10) {
                    o s2 = s(j10, oVar);
                    if (s2 != null) {
                        oVar = s2;
                    }
                }
                o oVar2 = oVar;
                if (J(oVar2, i5, j5, null) != j.f16501o) {
                    oVar2.a();
                } else if (j5 < w()) {
                    oVar2.a();
                }
                oVar = oVar2;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x019a, code lost:
    
        return kotlin.Unit.a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x00c0, code lost:
    
        h(r1, r4, r7);
     */
    /* JADX WARN: Removed duplicated region for block: B:76:0x016e  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0178  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x017c A[RETURN] */
    @Override // pr.v
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Object p(Object obj, Continuation frame) {
        int i5;
        Object r5;
        ko.a aVar;
        Object obj2;
        h hVar;
        o oVar;
        int i6;
        int i10;
        boolean z5;
        h hVar2 = this;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f16486x;
        o oVar2 = (o) atomicReferenceFieldUpdater.get(hVar2);
        while (true) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = f16482e;
            long andIncrement = atomicLongFieldUpdater.getAndIncrement(hVar2);
            long j = andIncrement & 1152921504606846975L;
            boolean y5 = hVar2.y(andIncrement, false);
            int i11 = j.f16490b;
            long j5 = i11;
            long j7 = j / j5;
            int i12 = (int) (j % j5);
            if (oVar2.f18127i != j7) {
                o c6 = c(hVar2, j7, oVar2);
                if (c6 != null) {
                    oVar2 = c6;
                } else if (y5) {
                    Object D = D(obj, frame);
                    if (D == ko.a.f13464d) {
                        return D;
                    }
                }
            }
            int i13 = i(hVar2, oVar2, i12, obj, j, null, y5);
            if (i13 == 0) {
                oVar2.a();
                break;
            }
            if (i13 == 1) {
                break;
            }
            if (i13 != 2) {
                AtomicLongFieldUpdater atomicLongFieldUpdater2 = f16483i;
                if (i13 == 3) {
                    nr.j p3 = x.p(ko.f.b(frame));
                    Object obj3 = obj;
                    try {
                        i5 = i(hVar2, oVar2, i12, obj3, j, p3, false);
                    } catch (Throwable th2) {
                        th = th2;
                    }
                    try {
                        if (i5 == 0) {
                            oVar2.a();
                            fo.q qVar = Result.f13476e;
                        } else if (i5 != 1) {
                            if (i5 != 2) {
                                if (i5 != 4) {
                                    String str = "unexpected";
                                    if (i5 != 5) {
                                        throw new IllegalStateException("unexpected");
                                    }
                                    oVar2.a();
                                    o oVar3 = (o) atomicReferenceFieldUpdater.get(hVar2);
                                    while (true) {
                                        long andIncrement2 = atomicLongFieldUpdater.getAndIncrement(hVar2);
                                        long j10 = andIncrement2 & 1152921504606846975L;
                                        boolean y6 = hVar2.y(andIncrement2, false);
                                        int i14 = j.f16490b;
                                        AtomicLongFieldUpdater atomicLongFieldUpdater3 = atomicLongFieldUpdater;
                                        long j11 = i14;
                                        String str2 = str;
                                        long j12 = j10 / j11;
                                        int i15 = (int) (j10 % j11);
                                        if (oVar3.f18127i != j12) {
                                            o c8 = c(hVar2, j12, oVar3);
                                            if (c8 != null) {
                                                i6 = i14;
                                                i10 = i15;
                                                z5 = y6;
                                                oVar = c8;
                                            } else {
                                                if (y6) {
                                                    break;
                                                }
                                                atomicLongFieldUpdater = atomicLongFieldUpdater3;
                                                str = str2;
                                            }
                                        } else {
                                            oVar = oVar3;
                                            i6 = i14;
                                            i10 = i15;
                                            z5 = y6;
                                        }
                                        int i16 = i(hVar2, oVar, i10, obj3, j10, p3, z5);
                                        Object obj4 = obj3;
                                        hVar = hVar2;
                                        o oVar4 = oVar;
                                        int i17 = i10;
                                        obj2 = obj4;
                                        if (i16 == 0) {
                                            oVar4.a();
                                            fo.q qVar2 = Result.f13476e;
                                            break;
                                        }
                                        if (i16 == 1) {
                                            fo.q qVar3 = Result.f13476e;
                                            break;
                                        }
                                        if (i16 != 2) {
                                            if (i16 == 3) {
                                                throw new IllegalStateException(str2);
                                            }
                                            if (i16 != 4) {
                                                if (i16 == 5) {
                                                    oVar4.a();
                                                }
                                                oVar3 = oVar4;
                                                hVar2 = hVar;
                                                atomicLongFieldUpdater = atomicLongFieldUpdater3;
                                                str = str2;
                                                obj3 = obj2;
                                            } else if (j10 < atomicLongFieldUpdater2.get(hVar)) {
                                                oVar4.a();
                                            }
                                        } else if (z5) {
                                            oVar4.i();
                                        } else {
                                            p3.a(oVar4, i17 + i6);
                                        }
                                    }
                                } else {
                                    obj2 = obj3;
                                    hVar = hVar2;
                                    if (j < atomicLongFieldUpdater2.get(hVar)) {
                                        oVar2.a();
                                    }
                                }
                                h(hVar, obj2, p3);
                            } else {
                                p3.a(oVar2, i12 + i11);
                            }
                            r5 = p3.r();
                            aVar = ko.a.f13464d;
                            if (r5 == aVar) {
                                Intrinsics.checkNotNullParameter(frame, "frame");
                            }
                            if (r5 != aVar) {
                                r5 = Unit.a;
                            }
                            if (r5 == aVar) {
                                return r5;
                            }
                        } else {
                            fo.q qVar4 = Result.f13476e;
                        }
                        p3.resumeWith(Unit.a);
                        r5 = p3.r();
                        aVar = ko.a.f13464d;
                        if (r5 == aVar) {
                        }
                        if (r5 != aVar) {
                        }
                        if (r5 == aVar) {
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        p3.A();
                        throw th;
                    }
                } else if (i13 == 4) {
                    if (j < atomicLongFieldUpdater2.get(hVar2)) {
                        oVar2.a();
                    }
                    Object D2 = D(obj, frame);
                    if (D2 == ko.a.f13464d) {
                        return D2;
                    }
                } else if (i13 == 5) {
                    oVar2.a();
                }
            } else if (y5) {
                oVar2.i();
                Object D3 = D(obj, frame);
                if (D3 == ko.a.f13464d) {
                    return D3;
                }
            }
        }
    }

    @Override // pr.v
    public final boolean q() {
        return y(f16482e.get(this), false);
    }

    public final void r() {
        Object a;
        if (B()) {
            return;
        }
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = E;
        o oVar = (o) atomicReferenceFieldUpdater.get(this);
        loop0: while (true) {
            long andIncrement = f16484v.getAndIncrement(this);
            long j = andIncrement / j.f16490b;
            if (w() <= andIncrement) {
                if (oVar.f18127i < j && oVar.c() != null) {
                    C(j, oVar);
                }
                x(this);
                return;
            }
            if (oVar.f18127i != j) {
                i iVar = i.f16489d;
                while (true) {
                    a = sr.b.a(oVar, j, iVar);
                    if (!sr.h.d(a)) {
                        sr.u b10 = sr.h.b(a);
                        while (true) {
                            sr.u uVar = (sr.u) atomicReferenceFieldUpdater.get(this);
                            if (uVar.f18127i >= b10.f18127i) {
                                break;
                            }
                            if (!b10.j()) {
                                break;
                            }
                            while (!atomicReferenceFieldUpdater.compareAndSet(this, uVar, b10)) {
                                if (atomicReferenceFieldUpdater.get(this) != uVar) {
                                    if (b10.f()) {
                                        b10.e();
                                    }
                                }
                            }
                            if (uVar.f()) {
                                uVar.e();
                            }
                        }
                    } else {
                        break;
                    }
                }
                o oVar2 = null;
                if (sr.h.d(a)) {
                    q();
                    C(j, oVar);
                    x(this);
                } else {
                    o oVar3 = (o) sr.h.b(a);
                    long j5 = oVar3.f18127i;
                    if (j5 > j) {
                        long j7 = j.f16490b;
                        if (f16484v.compareAndSet(this, 1 + andIncrement, j5 * j7)) {
                            AtomicLongFieldUpdater atomicLongFieldUpdater = f16485w;
                            if ((atomicLongFieldUpdater.addAndGet(this, (j5 * j7) - andIncrement) & 4611686018427387904L) != 0) {
                                while ((atomicLongFieldUpdater.get(this) & 4611686018427387904L) != 0) {
                                }
                            }
                        } else {
                            x(this);
                        }
                    } else {
                        oVar2 = oVar3;
                    }
                }
                if (oVar2 == null) {
                    continue;
                } else {
                    oVar = oVar2;
                }
            }
            int i5 = (int) (andIncrement % j.f16490b);
            Object l6 = oVar.l(i5);
            boolean z5 = l6 instanceof v1;
            AtomicLongFieldUpdater atomicLongFieldUpdater2 = f16483i;
            if (!z5 || andIncrement < atomicLongFieldUpdater2.get(this) || !oVar.k(i5, l6, j.f16495g)) {
                while (true) {
                    Object l7 = oVar.l(i5);
                    if (!(l7 instanceof v1)) {
                        if (l7 != j.j) {
                            if (l7 != null) {
                                if (l7 == j.f16492d || l7 == j.f16496h || l7 == j.f16497i || l7 == j.k || l7 == j.f16498l) {
                                    break loop0;
                                }
                                if (l7 != j.f16494f) {
                                    throw new IllegalStateException(("Unexpected cell state: " + l7).toString());
                                }
                            } else if (oVar.k(i5, l7, j.f16493e)) {
                                break loop0;
                            }
                        } else {
                            break;
                        }
                    } else if (andIncrement < atomicLongFieldUpdater2.get(this)) {
                        if (oVar.k(i5, l7, new w((v1) l7))) {
                            break loop0;
                        }
                    } else if (oVar.k(i5, l7, j.f16495g)) {
                        if (I(l7, oVar, i5)) {
                            oVar.o(i5, j.f16492d);
                            break;
                        } else {
                            oVar.o(i5, j.j);
                            oVar.i();
                        }
                    }
                }
            } else if (I(l6, oVar, i5)) {
                oVar.o(i5, j.f16492d);
                break;
            } else {
                oVar.o(i5, j.j);
                oVar.i();
                x(this);
            }
        }
        x(this);
    }

    public final o s(long j, o oVar) {
        Object a;
        long j5;
        o oVar2 = j.a;
        i iVar = i.f16489d;
        loop0: while (true) {
            a = sr.b.a(oVar, j, iVar);
            if (!sr.h.d(a)) {
                sr.u b10 = sr.h.b(a);
                while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f16487y;
                    sr.u uVar = (sr.u) atomicReferenceFieldUpdater.get(this);
                    if (uVar.f18127i >= b10.f18127i) {
                        break loop0;
                    }
                    if (!b10.j()) {
                        break;
                    }
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, uVar, b10)) {
                        if (atomicReferenceFieldUpdater.get(this) != uVar) {
                            if (b10.f()) {
                                b10.e();
                            }
                        }
                    }
                    if (uVar.f()) {
                        uVar.e();
                    }
                }
            } else {
                break;
            }
        }
        if (sr.h.d(a)) {
            q();
            if (oVar.f18127i * j.f16490b < w()) {
                oVar.a();
                return null;
            }
        } else {
            o oVar3 = (o) sr.h.b(a);
            long j7 = oVar3.f18127i;
            if (!B() && j <= f16484v.get(this) / j.f16490b) {
                while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = E;
                    sr.u uVar2 = (sr.u) atomicReferenceFieldUpdater2.get(this);
                    if (uVar2.f18127i >= j7 || !oVar3.j()) {
                        break;
                    }
                    while (!atomicReferenceFieldUpdater2.compareAndSet(this, uVar2, oVar3)) {
                        if (atomicReferenceFieldUpdater2.get(this) != uVar2) {
                            if (oVar3.f()) {
                                oVar3.e();
                            }
                        }
                    }
                    if (uVar2.f()) {
                        uVar2.e();
                    }
                }
            }
            if (j7 <= j) {
                return oVar3;
            }
            long j10 = j7 * j.f16490b;
            do {
                j5 = f16483i.get(this);
                if (j5 >= j10) {
                    break;
                }
            } while (!f16483i.compareAndSet(this, j5, j10));
            if (j7 * j.f16490b < w()) {
                oVar3.a();
            }
        }
        return null;
    }

    public final Throwable t() {
        return (Throwable) F.get(this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:102:0x01b7, code lost:
    
        r16 = r7;
        r3 = (pr.o) r3.c();
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x01c0, code lost:
    
        if (r3 != null) goto L92;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String toString() {
        boolean z5;
        String str;
        StringBuilder sb2 = new StringBuilder();
        int i5 = (int) (f16482e.get(this) >> 60);
        if (i5 == 2) {
            sb2.append("closed,");
        } else if (i5 == 3) {
            sb2.append("cancelled,");
        }
        sb2.append("capacity=" + this.f16488d + ',');
        sb2.append("data=[");
        int i6 = 0;
        boolean z6 = true;
        List g6 = c0.g(f16487y.get(this), f16486x.get(this), E.get(this));
        ArrayList arrayList = new ArrayList();
        for (Object obj : g6) {
            if (((o) obj) != j.a) {
                arrayList.add(obj);
            }
        }
        Iterator it = arrayList.iterator();
        if (!it.hasNext()) {
            throw new NoSuchElementException();
        }
        Object next = it.next();
        if (it.hasNext()) {
            long j = ((o) next).f18127i;
            do {
                Object next2 = it.next();
                long j5 = ((o) next2).f18127i;
                if (j > j5) {
                    next = next2;
                    j = j5;
                }
            } while (it.hasNext());
        }
        o oVar = (o) next;
        long j7 = f16483i.get(this);
        long w5 = w();
        loop2: while (true) {
            int i10 = j.f16490b;
            int i11 = i6;
            while (true) {
                if (i11 >= i10) {
                    break;
                }
                long j10 = (oVar.f18127i * j.f16490b) + i11;
                if (j10 >= w5 && j10 >= j7) {
                    break loop2;
                }
                Object l6 = oVar.l(i11);
                boolean z7 = z6;
                Object obj2 = oVar.f16509x.get(i11 * 2);
                if (l6 instanceof CancellableContinuation) {
                    str = (j10 >= j7 || j10 < w5) ? (j10 >= w5 || j10 < j7) ? "cont" : "send" : "receive";
                } else if (l6 instanceof vr.f) {
                    str = (j10 >= j7 || j10 < w5) ? (j10 >= w5 || j10 < j7) ? "select" : "onSend" : "onReceive";
                } else if (l6 instanceof t) {
                    str = "receiveCatching";
                } else if (l6 instanceof w) {
                    str = "EB(" + l6 + ')';
                } else if (Intrinsics.areEqual(l6, j.f16494f) || Intrinsics.areEqual(l6, j.f16495g)) {
                    str = "resuming_sender";
                } else {
                    if (l6 != null && !Intrinsics.areEqual(l6, j.f16493e) && !Intrinsics.areEqual(l6, j.f16497i) && !Intrinsics.areEqual(l6, j.f16496h) && !Intrinsics.areEqual(l6, j.k) && !Intrinsics.areEqual(l6, j.j) && !Intrinsics.areEqual(l6, j.f16498l)) {
                        str = l6.toString();
                    }
                    i11++;
                    z6 = z7;
                }
                if (obj2 != null) {
                    sb2.append("(" + str + ',' + obj2 + "),");
                } else {
                    sb2.append(str + ',');
                }
                i11++;
                z6 = z7;
            }
            z6 = z5;
            i6 = 0;
        }
        if (b0.z(sb2) == ',') {
            Intrinsics.checkNotNullExpressionValue(sb2.deleteCharAt(sb2.length() - 1), "deleteCharAt(...)");
        }
        sb2.append("]");
        return sb2.toString();
    }

    public final Throwable u() {
        Throwable t5 = t();
        return t5 == null ? new p("Channel was closed") : t5;
    }

    public final Throwable v() {
        Throwable t5 = t();
        return t5 == null ? new h0("Channel was closed") : t5;
    }

    public final long w() {
        return f16482e.get(this) & 1152921504606846975L;
    }

    /* JADX WARN: Code restructure failed: missing block: B:123:0x0167, code lost:
    
        pr.h.f16483i.compareAndSet(r13, r7, r7 + 1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x00a2, code lost:
    
        r0 = (pr.o) ((sr.c) sr.c.f18102e.get(r0));
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean y(long j, boolean z5) {
        int i5 = (int) (j >> 60);
        if (i5 != 0 && i5 != 1) {
            AtomicLongFieldUpdater atomicLongFieldUpdater = f16483i;
            if (i5 == 2) {
                m(1152921504606846975L & j);
                if (z5) {
                    while (true) {
                        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f16487y;
                        o oVar = (o) atomicReferenceFieldUpdater.get(this);
                        long j5 = atomicLongFieldUpdater.get(this);
                        if (w() <= j5) {
                            break;
                        }
                        long j7 = j.f16490b;
                        long j10 = j5 / j7;
                        if (oVar.f18127i != j10 && (oVar = s(j10, oVar)) == null) {
                            if (((o) atomicReferenceFieldUpdater.get(this)).f18127i < j10) {
                                break;
                            }
                        } else {
                            oVar.a();
                            int i6 = (int) (j5 % j7);
                            while (true) {
                                Object l6 = oVar.l(i6);
                                if (l6 == null || l6 == j.f16493e) {
                                    if (oVar.k(i6, l6, j.f16496h)) {
                                        r();
                                        break;
                                    }
                                } else {
                                    if (l6 == j.f16492d) {
                                        break;
                                    }
                                    if (l6 != j.j) {
                                        if (l6 != j.f16498l) {
                                            if (l6 != j.f16497i) {
                                                if (l6 != j.f16496h) {
                                                    if (l6 == j.f16495g) {
                                                        break;
                                                    }
                                                    if (l6 != j.f16494f && j5 == atomicLongFieldUpdater.get(this)) {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (i5 != 3) {
                    throw new IllegalStateException(k0.d.i(i5, "unexpected close status: ").toString());
                }
                o m5 = m(1152921504606846975L & j);
                Object obj = null;
                loop0: do {
                    int i10 = j.f16490b - 1;
                    while (true) {
                        if (-1 >= i10) {
                            break;
                        }
                        long j11 = (m5.f18127i * j.f16490b) + i10;
                        while (true) {
                            Object l7 = m5.l(i10);
                            if (l7 == j.f16497i) {
                                break loop0;
                            }
                            if (l7 == j.f16492d) {
                                if (j11 < atomicLongFieldUpdater.get(this)) {
                                    break loop0;
                                }
                                if (m5.k(i10, l7, j.f16498l)) {
                                    m5.n(i10, null);
                                    m5.i();
                                    break;
                                }
                            } else if (l7 != j.f16493e && l7 != null) {
                                if (!(l7 instanceof v1) && !(l7 instanceof w)) {
                                    a5.h hVar = j.f16495g;
                                    if (l7 == hVar || l7 == j.f16494f) {
                                        break loop0;
                                    }
                                    if (l7 != hVar) {
                                        break;
                                    }
                                } else {
                                    if (j11 < atomicLongFieldUpdater.get(this)) {
                                        break loop0;
                                    }
                                    v1 v1Var = l7 instanceof w ? ((w) l7).a : (v1) l7;
                                    if (m5.k(i10, l7, j.f16498l)) {
                                        obj = sr.h.e(obj, v1Var);
                                        m5.n(i10, null);
                                        m5.i();
                                        break;
                                    }
                                }
                            } else if (m5.k(i10, l7, j.f16498l)) {
                                m5.i();
                                break;
                            }
                        }
                        i10--;
                    }
                } while (m5 != null);
                if (obj != null) {
                    if (obj instanceof ArrayList) {
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.util.ArrayList<E of kotlinx.coroutines.internal.InlineList>");
                        ArrayList arrayList = (ArrayList) obj;
                        for (int size = arrayList.size() - 1; -1 < size; size--) {
                            G((v1) arrayList.get(size), false);
                        }
                    } else {
                        G((v1) obj, false);
                    }
                }
            }
            return true;
        }
        return false;
    }

    public final boolean z() {
        return y(f16482e.get(this), true);
    }
}
