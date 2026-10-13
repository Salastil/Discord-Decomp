package nr;

import java.util.Iterator;
import java.util.concurrent.CancellationException;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import java.util.concurrent.locks.LockSupport;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.sequences.Sequence;
import kotlin.time.Duration;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public abstract class x {
    public static final a5.h a = new a5.h("RESUME_TOKEN");

    /* renamed from: b, reason: collision with root package name */
    public static final a5.h f15676b = new a5.h("REMOVED_TASK");

    /* renamed from: c, reason: collision with root package name */
    public static final a5.h f15677c = new a5.h("CLOSED_EMPTY");

    /* renamed from: d, reason: collision with root package name */
    public static final a5.h f15678d = new a5.h("COMPLETING_ALREADY");

    /* renamed from: e, reason: collision with root package name */
    public static final a5.h f15679e = new a5.h("COMPLETING_WAITING_CHILDREN");

    /* renamed from: f, reason: collision with root package name */
    public static final a5.h f15680f = new a5.h("COMPLETING_RETRY");

    /* renamed from: g, reason: collision with root package name */
    public static final a5.h f15681g = new a5.h("TOO_LATE_TO_CANCEL");

    /* renamed from: h, reason: collision with root package name */
    public static final a5.h f15682h = new a5.h("SEALED");

    /* renamed from: i, reason: collision with root package name */
    public static final k0 f15683i = new k0(false);
    public static final k0 j = new k0(true);

    public static final Object A(CoroutineContext coroutineContext, Function2 function2, Continuation frame) {
        Object z5;
        CoroutineContext context = frame.getContext();
        CoroutineContext r5 = !((Boolean) coroutineContext.b0(Boolean.FALSE, new com.discord.c(22))).booleanValue() ? context.r(coroutineContext) : r.a(context, coroutineContext, false);
        l(r5);
        if (r5 == context) {
            sr.t tVar = new sr.t(frame, r5);
            z5 = nf.e.B(tVar, true, tVar, function2);
        } else {
            jo.a aVar = kotlin.coroutines.d.f13537h;
            if (Intrinsics.areEqual(r5.o(aVar), context.o(aVar))) {
                t1 t1Var = new t1(frame, r5);
                CoroutineContext coroutineContext2 = t1Var.f15590i;
                Object c6 = sr.y.c(coroutineContext2, null);
                try {
                    Object B = nf.e.B(t1Var, true, t1Var, function2);
                    sr.y.a(coroutineContext2, c6);
                    z5 = B;
                } catch (Throwable th2) {
                    sr.y.a(coroutineContext2, c6);
                    throw th2;
                }
            } else {
                d0 d0Var = new d0(frame, r5);
                ks.n.y(function2, d0Var, d0Var);
                AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = d0.f15606w;
                while (true) {
                    int i5 = atomicIntegerFieldUpdater.get(d0Var);
                    if (i5 != 0) {
                        if (i5 != 2) {
                            throw new IllegalStateException("Already suspended");
                        }
                        z5 = z(e1.f15614d.get(d0Var));
                        if (z5 instanceof q) {
                            throw ((q) z5).a;
                        }
                    } else if (atomicIntegerFieldUpdater.compareAndSet(d0Var, 0, 1)) {
                        z5 = ko.a.f13464d;
                        break;
                    }
                }
            }
        }
        if (z5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return z5;
    }

    public static final Object B(lo.c frame) {
        Object obj;
        CoroutineContext context = frame.getContext();
        l(context);
        Continuation b10 = ko.f.b(frame);
        sr.g gVar = b10 instanceof sr.g ? (sr.g) b10 : null;
        if (gVar == null) {
            obj = Unit.a;
        } else {
            CoroutineDispatcher coroutineDispatcher = gVar.f18105v;
            if (sr.h.h(coroutineDispatcher, context)) {
                gVar.f18107x = Unit.a;
                gVar.f15613i = 1;
                coroutineDispatcher.m0(context, gVar);
            } else {
                w1 w1Var = new w1(w1.f15674i);
                CoroutineContext r5 = context.r(w1Var);
                Unit unit = Unit.a;
                gVar.f18107x = unit;
                gVar.f15613i = 1;
                coroutineDispatcher.m0(r5, gVar);
                if (w1Var.f15675e) {
                    p0 a10 = o1.a();
                    ArrayDeque arrayDeque = a10.f15649w;
                    if (!(arrayDeque != null ? arrayDeque.isEmpty() : true)) {
                        if (a10.f15647i >= 4294967296L) {
                            gVar.f18107x = unit;
                            gVar.f15613i = 1;
                            a10.q0(gVar);
                            obj = ko.a.f13464d;
                        } else {
                            a10.s0(true);
                            try {
                                gVar.run();
                                do {
                                } while (a10.u0());
                            } finally {
                                try {
                                } finally {
                                }
                            }
                        }
                    }
                    obj = Unit.a;
                }
            }
            obj = ko.a.f13464d;
        }
        ko.a aVar = ko.a.f13464d;
        if (obj == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return obj == aVar ? obj : Unit.a;
    }

    public static o a() {
        o oVar = new o(true);
        oVar.O(null);
        return oVar;
    }

    public static final sr.d b(CoroutineContext coroutineContext) {
        if (coroutineContext.o(t.f15661e) == null) {
            coroutineContext = coroutineContext.r(new x0());
        }
        return new sr.d(coroutineContext);
    }

    public static final sr.d c() {
        m1 m1Var = new m1();
        ur.e eVar = g0.a;
        return new sr.d(kotlin.coroutines.e.c(m1Var, sr.q.a));
    }

    public static z d(CoroutineScope coroutineScope, CoroutineContext coroutineContext, Function2 function2, int i5) {
        if ((i5 & 1) != 0) {
            coroutineContext = kotlin.coroutines.g.f13538d;
        }
        w wVar = w.f15668d;
        CoroutineContext b10 = r.b(coroutineScope, coroutineContext);
        w wVar2 = w.f15668d;
        z zVar = new z(b10, true);
        zVar.n0(wVar, zVar, function2);
        return zVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void e(lo.c cVar) {
        b0 frame;
        int i5;
        if (cVar instanceof b0) {
            frame = (b0) cVar;
            int i6 = frame.f15593e;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                frame.f15593e = i6 - Integer.MIN_VALUE;
                Object obj = frame.f15592d;
                ko.a aVar = ko.a.f13464d;
                i5 = frame.f15593e;
                if (i5 != 0) {
                    ki.b.R(obj);
                    frame.f15593e = 1;
                    j jVar = new j(1, ko.f.b(frame));
                    jVar.t();
                    Object r5 = jVar.r();
                    if (r5 == aVar) {
                        Intrinsics.checkNotNullParameter(frame, "frame");
                    }
                    if (r5 == aVar) {
                        return;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                throw new fo.h();
            }
        }
        frame = new b0(cVar);
        Object obj2 = frame.f15592d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = frame.f15593e;
        if (i5 != 0) {
        }
        throw new fo.h();
    }

    public static final void f(CoroutineScope coroutineScope, CancellationException cancellationException) {
        Job job = (Job) coroutineScope.getCoroutineContext().o(t.f15661e);
        if (job != null) {
            job.f(cancellationException);
        } else {
            throw new IllegalStateException(("Scope cannot be cancelled because it does not have a job: " + coroutineScope).toString());
        }
    }

    public static final Object g(Job job, Continuation continuation) {
        job.f(null);
        Object X = job.X((lo.c) continuation);
        return X == ko.a.f13464d ? X : Unit.a;
    }

    public static final void h(CoroutineContext coroutineContext, CancellationException cancellationException) {
        Sequence t5;
        Job job = (Job) coroutineContext.o(t.f15661e);
        if (job == null || (t5 = job.t()) == null) {
            return;
        }
        Iterator it = t5.iterator();
        while (it.hasNext()) {
            ((Job) it.next()).f(cancellationException);
        }
    }

    public static final Object i(Function2 function2, Continuation frame) {
        sr.t tVar = new sr.t(frame, frame.getContext());
        Object B = nf.e.B(tVar, true, tVar, function2);
        if (B == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return B;
    }

    public static final Object j(long j5, Continuation frame) {
        if (j5 <= 0) {
            return Unit.a;
        }
        j jVar = new j(1, ko.f.b(frame));
        jVar.t();
        if (j5 < LongCompanionObject.MAX_VALUE) {
            n(jVar.f15628w).q(j5, jVar);
        }
        Object r5 = jVar.r();
        ko.a aVar = ko.a.f13464d;
        if (r5 == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5 == aVar ? r5 : Unit.a;
    }

    public static final Object k(long j5, Continuation continuation) {
        lr.a aVar = Duration.f13595e;
        long j7 = 0;
        boolean z5 = j5 > 0;
        if (z5) {
            j7 = Duration.d(Duration.i(j5, lr.c.h(999999L, lr.d.f14210e)));
        } else if (z5) {
            throw new fo.n();
        }
        Object j10 = j(j7, continuation);
        return j10 == ko.a.f13464d ? j10 : Unit.a;
    }

    public static final void l(CoroutineContext coroutineContext) {
        Job job = (Job) coroutineContext.o(t.f15661e);
        if (job != null && !job.c()) {
            throw job.x();
        }
    }

    public static final CoroutineDispatcher m(Executor executor) {
        CoroutineDispatcher coroutineDispatcher;
        f0 f0Var = executor instanceof f0 ? (f0) executor : null;
        return (f0Var == null || (coroutineDispatcher = f0Var.f15618d) == null) ? new q0(executor) : coroutineDispatcher;
    }

    public static final a0 n(CoroutineContext coroutineContext) {
        CoroutineContext.Element o6 = coroutineContext.o(kotlin.coroutines.d.f13537h);
        a0 a0Var = o6 instanceof a0 ? (a0) o6 : null;
        return a0Var == null ? y.a : a0Var;
    }

    public static final String o(Object obj) {
        return Integer.toHexString(System.identityHashCode(obj));
    }

    public static final j p(Continuation continuation) {
        j jVar;
        j jVar2;
        if (!(continuation instanceof sr.g)) {
            return new j(1, continuation);
        }
        sr.g gVar = (sr.g) continuation;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.g.E;
        loop0: while (true) {
            Object obj = atomicReferenceFieldUpdater.get(gVar);
            jVar = null;
            a5.h hVar = sr.h.f18109b;
            if (obj == null) {
                atomicReferenceFieldUpdater.set(gVar, hVar);
                jVar2 = null;
                break;
            }
            if (obj instanceof j) {
                while (!atomicReferenceFieldUpdater.compareAndSet(gVar, obj, hVar)) {
                    if (atomicReferenceFieldUpdater.get(gVar) != obj) {
                        break;
                    }
                }
                jVar2 = (j) obj;
                break loop0;
            }
            if (obj != hVar && !(obj instanceof Throwable)) {
                throw new IllegalStateException(("Inconsistent state " + obj).toString());
            }
        }
        if (jVar2 != null) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = j.f15626y;
            Object obj2 = atomicReferenceFieldUpdater2.get(jVar2);
            if (!(obj2 instanceof p) || ((p) obj2).f15644d == null) {
                j.f15625x.set(jVar2, 536870911);
                atomicReferenceFieldUpdater2.set(jVar2, b.f15591d);
                jVar = jVar2;
            } else {
                jVar2.o();
            }
            if (jVar != null) {
                return jVar;
            }
        }
        return new j(2, continuation);
    }

    public static final void q(Throwable th2, CoroutineContext coroutineContext) {
        if (th2 instanceof c0) {
            th2 = ((c0) th2).f15600d;
        }
        try {
            u uVar = (u) coroutineContext.o(t.f15660d);
            if (uVar != null) {
                uVar.j0(th2, coroutineContext);
            } else {
                sr.h.c(th2, coroutineContext);
            }
        } catch (Throwable th3) {
            if (th2 != th3) {
                RuntimeException runtimeException = new RuntimeException("Exception while trying to handle coroutine exception", th3);
                fo.f.a(runtimeException, th2);
                th2 = runtimeException;
            }
            sr.h.c(th2, coroutineContext);
        }
    }

    public static i0 r(Job job, z0 z0Var) {
        if (job instanceof e1) {
            return ((e1) job).Q(true, z0Var);
        }
        return job.i(z0Var.j(), true, new y0(1, z0Var, z0.class, "invoke", "invoke(Ljava/lang/Throwable;)V", 0, 0));
    }

    public static final boolean s(CoroutineScope coroutineScope) {
        Job job = (Job) coroutineScope.getCoroutineContext().o(t.f15661e);
        if (job != null) {
            return job.c();
        }
        return true;
    }

    public static l1 t(CoroutineScope coroutineScope, CoroutineContext coroutineContext, Function2 function2, int i5) {
        w wVar = w.f15671v;
        if ((i5 & 1) != 0) {
            coroutineContext = kotlin.coroutines.g.f13538d;
        }
        if ((i5 & 2) != 0) {
            wVar = w.f15668d;
        }
        CoroutineContext b10 = r.b(coroutineScope, coroutineContext);
        l1 f1Var = wVar == w.f15669e ? new f1(b10, function2) : new l1(b10, true);
        f1Var.n0(wVar, f1Var, function2);
        return f1Var;
    }

    public static final Object u(Object obj) {
        if (obj instanceof q) {
            fo.q qVar = Result.f13476e;
            return ki.b.i(((q) obj).a);
        }
        fo.q qVar2 = Result.f13476e;
        return obj;
    }

    public static final void v(j jVar, Continuation continuation, boolean z5) {
        Object f2;
        Object obj = j.f15626y.get(jVar);
        Throwable e9 = jVar.e(obj);
        if (e9 != null) {
            fo.q qVar = Result.f13476e;
            f2 = ki.b.i(e9);
        } else {
            fo.q qVar2 = Result.f13476e;
            f2 = jVar.f(obj);
        }
        if (!z5) {
            continuation.resumeWith(f2);
            return;
        }
        Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlinx.coroutines.internal.DispatchedContinuation<T of kotlinx.coroutines.DispatchedTaskKt.resume>");
        sr.g gVar = (sr.g) continuation;
        lo.c cVar = gVar.f18106w;
        Object obj2 = gVar.f18108y;
        CoroutineContext context = cVar.getContext();
        Object c6 = sr.y.c(context, obj2);
        t1 c8 = c6 != sr.y.a ? r.c(cVar, context, c6) : null;
        try {
            gVar.f18106w.resumeWith(f2);
            Unit unit = Unit.a;
            if (c8 == null || c8.p0()) {
                sr.y.a(context, c6);
            }
        } catch (Throwable th2) {
            if (c8 == null || c8.p0()) {
                sr.y.a(context, c6);
            }
            throw th2;
        }
    }

    public static final Object w(CoroutineContext coroutineContext, Function2 function2) {
        p0 p0Var;
        CoroutineContext a10;
        long t02;
        Thread currentThread = Thread.currentThread();
        kotlin.coroutines.f fVar = kotlin.coroutines.d.f13537h;
        kotlin.coroutines.d dVar = (kotlin.coroutines.d) coroutineContext.o(fVar);
        if (dVar == null) {
            p0Var = o1.a();
            a10 = r.a(kotlin.coroutines.g.f13538d, coroutineContext.r(p0Var), true);
            ur.e eVar = g0.a;
            if (a10 != eVar && a10.o(fVar) == null) {
                a10 = a10.r(eVar);
            }
        } else {
            if (dVar instanceof p0) {
            }
            p0Var = (p0) o1.a.get();
            a10 = r.a(kotlin.coroutines.g.f13538d, coroutineContext, true);
            ur.e eVar2 = g0.a;
            if (a10 != eVar2 && a10.o(fVar) == null) {
                a10 = a10.r(eVar2);
            }
        }
        f fVar2 = new f(a10, currentThread, p0Var);
        fVar2.n0(w.f15668d, fVar2, function2);
        p0 p0Var2 = fVar2.f15617w;
        if (p0Var2 != null) {
            int i5 = p0.f15646x;
            p0Var2.s0(false);
        }
        while (true) {
            if (p0Var2 != null) {
                try {
                    t02 = p0Var2.t0();
                } catch (Throwable th2) {
                    if (p0Var2 != null) {
                        int i6 = p0.f15646x;
                        p0Var2.p0(false);
                    }
                    throw th2;
                }
            } else {
                t02 = LongCompanionObject.MAX_VALUE;
            }
            if (fVar2.isCompleted()) {
                break;
            }
            LockSupport.parkNanos(fVar2, t02);
            if (Thread.interrupted()) {
                fVar2.y(new InterruptedException());
            }
        }
        if (p0Var2 != null) {
            int i10 = p0.f15646x;
            p0Var2.p0(false);
        }
        Object z5 = z(e1.f15614d.get(fVar2));
        q qVar = z5 instanceof q ? (q) z5 : null;
        if (qVar == null) {
            return z5;
        }
        throw qVar.a;
    }

    public static final String y(Continuation continuation) {
        Object i5;
        if (continuation instanceof sr.g) {
            return ((sr.g) continuation).toString();
        }
        try {
            fo.q qVar = Result.f13476e;
            i5 = continuation + '@' + o(continuation);
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (Result.a(i5) != null) {
            i5 = continuation.getClass().getName() + '@' + o(continuation);
        }
        return (String) i5;
    }

    public static final Object z(Object obj) {
        t0 t0Var;
        u0 u0Var = obj instanceof u0 ? (u0) obj : null;
        return (u0Var == null || (t0Var = u0Var.a) == null) ? obj : t0Var;
    }
}
