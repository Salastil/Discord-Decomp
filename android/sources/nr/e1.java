package nr;

import java.util.ArrayList;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.sequences.Sequence;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public class e1 implements Job, k1 {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f15614d = AtomicReferenceFieldUpdater.newUpdater(e1.class, Object.class, "_state$volatile");

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f15615e = AtomicReferenceFieldUpdater.newUpdater(e1.class, Object.class, "_parentHandle$volatile");
    private volatile /* synthetic */ Object _parentHandle$volatile;
    private volatile /* synthetic */ Object _state$volatile;

    public e1(boolean z5) {
        this._state$volatile = z5 ? x.j : x.f15683i;
    }

    public static n Y(sr.m mVar) {
        while (mVar.h()) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.m.f18117e;
            sr.m e9 = mVar.e();
            if (e9 == null) {
                Object obj = atomicReferenceFieldUpdater.get(mVar);
                while (true) {
                    mVar = (sr.m) obj;
                    if (!mVar.h()) {
                        break;
                    }
                    obj = atomicReferenceFieldUpdater.get(mVar);
                }
            } else {
                mVar = e9;
            }
        }
        while (true) {
            mVar = mVar.g();
            if (!mVar.h()) {
                if (mVar instanceof n) {
                    return (n) mVar;
                }
                if (mVar instanceof g1) {
                    return null;
                }
            }
        }
    }

    public static String h0(Object obj) {
        if (!(obj instanceof c1)) {
            return obj instanceof t0 ? ((t0) obj).c() ? "Active" : "New" : obj instanceof q ? "Cancelled" : "Completed";
        }
        c1 c1Var = (c1) obj;
        return c1Var.e() ? "Cancelling" : c1.f15601e.get(c1Var) == 1 ? "Completing" : "Active";
    }

    public final boolean B(Throwable th2) {
        if (R()) {
            return true;
        }
        boolean z5 = th2 instanceof CancellationException;
        m mVar = (m) f15615e.get(this);
        return (mVar == null || mVar == i1.f15624d) ? z5 : mVar.a(th2) || z5;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(kotlin.coroutines.f fVar) {
        return kotlin.coroutines.e.b(this, fVar);
    }

    public String D() {
        return "Job was cancelled";
    }

    public boolean E(Throwable th2) {
        if (th2 instanceof CancellationException) {
            return true;
        }
        return y(th2) && J();
    }

    public final void F(t0 t0Var, Object obj) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15615e;
        m mVar = (m) atomicReferenceFieldUpdater.get(this);
        if (mVar != null) {
            mVar.dispose();
            atomicReferenceFieldUpdater.set(this, i1.f15624d);
        }
        ai.k kVar = null;
        q qVar = obj instanceof q ? (q) obj : null;
        Throwable th2 = qVar != null ? qVar.a : null;
        if (t0Var instanceof z0) {
            try {
                ((z0) t0Var).k(th2);
                return;
            } catch (Throwable th3) {
                N(new ai.k("Exception in completion handler " + t0Var + " for " + this, th3));
                return;
            }
        }
        g1 b10 = t0Var.b();
        if (b10 != null) {
            b10.d(new sr.j(1), 1);
            Object obj2 = sr.m.f18116d.get(b10);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
            for (sr.m mVar2 = (sr.m) obj2; !Intrinsics.areEqual(mVar2, b10); mVar2 = mVar2.g()) {
                if (mVar2 instanceof z0) {
                    try {
                        ((z0) mVar2).k(th2);
                    } catch (Throwable th4) {
                        if (kVar != null) {
                            fo.f.a(kVar, th4);
                        } else {
                            kVar = new ai.k("Exception in completion handler " + mVar2 + " for " + this, th4);
                            Unit unit = Unit.a;
                        }
                    }
                }
            }
            if (kVar != null) {
                N(kVar);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v11, types: [java.lang.Throwable] */
    /* JADX WARN: Type inference failed for: r2v7, types: [java.lang.Throwable] */
    public final Throwable G(Object obj) {
        CancellationException cancellationException;
        if (obj == null ? true : obj instanceof Throwable) {
            Throwable th2 = (Throwable) obj;
            return th2 == null ? new w0(D(), null, this) : th2;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.ParentJob");
        e1 e1Var = (e1) ((k1) obj);
        e1Var.getClass();
        Object obj2 = f15614d.get(e1Var);
        if (obj2 instanceof c1) {
            cancellationException = ((c1) obj2).d();
        } else if (obj2 instanceof q) {
            cancellationException = ((q) obj2).a;
        } else {
            if (obj2 instanceof t0) {
                throw new IllegalStateException(("Cannot be cancelling child in this state: " + obj2).toString());
            }
            cancellationException = null;
        }
        CancellationException cancellationException2 = cancellationException instanceof CancellationException ? cancellationException : null;
        return cancellationException2 == null ? new w0("Parent job is ".concat(h0(obj2)), cancellationException, e1Var) : cancellationException2;
    }

    public final Object H(c1 c1Var, Object obj) {
        Throwable I;
        q qVar = obj instanceof q ? (q) obj : null;
        Throwable th2 = qVar != null ? qVar.a : null;
        synchronized (c1Var) {
            c1Var.e();
            ArrayList<Throwable> f2 = c1Var.f(th2);
            I = I(c1Var, f2);
            if (I != null && f2.size() > 1) {
                Set newSetFromMap = Collections.newSetFromMap(new IdentityHashMap(f2.size()));
                for (Throwable th3 : f2) {
                    if (th3 != I && th3 != I && !(th3 instanceof CancellationException) && newSetFromMap.add(th3)) {
                        fo.f.a(I, th3);
                    }
                }
            }
        }
        if (I != null && I != th2) {
            obj = new q(I, false);
        }
        if (I != null && (B(I) || M(I))) {
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.CompletedExceptionally");
            q qVar2 = (q) obj;
            qVar2.getClass();
            q.f15651b.compareAndSet(qVar2, 0, 1);
        }
        a0(obj);
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15614d;
        Object u0Var = obj instanceof t0 ? new u0((t0) obj) : obj;
        while (!atomicReferenceFieldUpdater.compareAndSet(this, c1Var, u0Var) && atomicReferenceFieldUpdater.get(this) == c1Var) {
        }
        F(c1Var, obj);
        return obj;
    }

    public final Throwable I(c1 c1Var, ArrayList arrayList) {
        Object obj;
        Object obj2 = null;
        if (arrayList.isEmpty()) {
            if (c1Var.e()) {
                return new w0(D(), null, this);
            }
            return null;
        }
        Iterator it = arrayList.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (!(((Throwable) obj) instanceof CancellationException)) {
                break;
            }
        }
        Throwable th2 = (Throwable) obj;
        if (th2 != null) {
            return th2;
        }
        Throwable th3 = (Throwable) arrayList.get(0);
        if (th3 instanceof p1) {
            Iterator it2 = arrayList.iterator();
            while (true) {
                if (!it2.hasNext()) {
                    break;
                }
                Object next = it2.next();
                Throwable th4 = (Throwable) next;
                if (th4 != th3 && (th4 instanceof p1)) {
                    obj2 = next;
                    break;
                }
            }
            Throwable th5 = (Throwable) obj2;
            if (th5 != null) {
                return th5;
            }
        }
        return th3;
    }

    public boolean J() {
        return true;
    }

    public boolean K() {
        return this instanceof o;
    }

    public final g1 L(t0 t0Var) {
        g1 b10 = t0Var.b();
        if (b10 != null) {
            return b10;
        }
        if (t0Var instanceof k0) {
            return new g1();
        }
        if (t0Var instanceof z0) {
            f0((z0) t0Var);
            return null;
        }
        throw new IllegalStateException(("State should have list: " + t0Var).toString());
    }

    public boolean M(Throwable th2) {
        return false;
    }

    public final void O(Job job) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15615e;
        i1 i1Var = i1.f15624d;
        if (job == null) {
            atomicReferenceFieldUpdater.set(this, i1Var);
            return;
        }
        job.start();
        m d02 = job.d0(this);
        atomicReferenceFieldUpdater.set(this, d02);
        if (isCompleted()) {
            d02.dispose();
            atomicReferenceFieldUpdater.set(this, i1Var);
        }
    }

    @Override // kotlinx.coroutines.Job
    public final i0 P(Function1 function1) {
        return Q(true, new j0(1, function1));
    }

    public final i0 Q(boolean z5, z0 z0Var) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        i1 i1Var;
        boolean z6;
        boolean d6;
        z0Var.f15686v = this;
        loop0: while (true) {
            atomicReferenceFieldUpdater = f15614d;
            Object obj = atomicReferenceFieldUpdater.get(this);
            boolean z7 = obj instanceof k0;
            i1Var = i1.f15624d;
            z6 = true;
            if (!z7) {
                if (!(obj instanceof t0)) {
                    z6 = false;
                    break;
                }
                t0 t0Var = (t0) obj;
                g1 b10 = t0Var.b();
                if (b10 == null) {
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.JobNode");
                    f0((z0) obj);
                } else {
                    if (z0Var.j()) {
                        c1 c1Var = t0Var instanceof c1 ? (c1) t0Var : null;
                        Throwable d7 = c1Var != null ? c1Var.d() : null;
                        if (d7 == null) {
                            d6 = b10.d(z0Var, 5);
                        } else if (z5) {
                            z0Var.k(d7);
                            return i1Var;
                        }
                    } else {
                        d6 = b10.d(z0Var, 1);
                    }
                    if (d6) {
                        break;
                    }
                }
            } else {
                k0 k0Var = (k0) obj;
                if (k0Var.f15632d) {
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, z0Var)) {
                        if (atomicReferenceFieldUpdater.get(this) != obj) {
                            break;
                        }
                    }
                    break loop0;
                }
                e0(k0Var);
            }
        }
        if (z6) {
            return z0Var;
        }
        if (z5) {
            Object obj2 = atomicReferenceFieldUpdater.get(this);
            q qVar = obj2 instanceof q ? (q) obj2 : null;
            z0Var.k(qVar != null ? qVar.a : null);
        }
        return i1Var;
    }

    public boolean R() {
        return this instanceof f;
    }

    public final boolean S(Object obj) {
        Object i02;
        do {
            i02 = i0(f15614d.get(this), obj);
            if (i02 == x.f15678d) {
                return false;
            }
            if (i02 == x.f15679e) {
                return true;
            }
        } while (i02 == x.f15680f);
        u(i02);
        return true;
    }

    public final Object T(Object obj) {
        Object i02;
        do {
            i02 = i0(f15614d.get(this), obj);
            if (i02 == x.f15678d) {
                String str = "Job " + this + " is already complete or completing, but is being completed with " + obj;
                q qVar = obj instanceof q ? (q) obj : null;
                throw new IllegalStateException(str, qVar != null ? qVar.a : null);
            }
        } while (i02 == x.f15680f);
        return i02;
    }

    public boolean V(Object obj) {
        return S(obj);
    }

    public String W() {
        return getClass().getSimpleName();
    }

    @Override // kotlinx.coroutines.Job
    public final Object X(lo.c frame) {
        Object obj;
        do {
            obj = f15614d.get(this);
            if (!(obj instanceof t0)) {
                x.l(frame.getContext());
                return Unit.a;
            }
        } while (g0(obj) < 0);
        j jVar = new j(1, ko.f.b(frame));
        jVar.t();
        jVar.w(new h(2, x.r(this, new l(jVar, 1))));
        Object r5 = jVar.r();
        ko.a aVar = ko.a.f13464d;
        if (r5 == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        if (r5 != aVar) {
            r5 = Unit.a;
        }
        return r5 == aVar ? r5 : Unit.a;
    }

    public final void Z(g1 g1Var, Throwable th2) {
        g1Var.d(new sr.j(4), 4);
        Object obj = sr.m.f18116d.get(g1Var);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
        ai.k kVar = null;
        for (sr.m mVar = (sr.m) obj; !Intrinsics.areEqual(mVar, g1Var); mVar = mVar.g()) {
            if ((mVar instanceof z0) && ((z0) mVar).j()) {
                try {
                    ((z0) mVar).k(th2);
                } catch (Throwable th3) {
                    if (kVar != null) {
                        fo.f.a(kVar, th3);
                    } else {
                        kVar = new ai.k("Exception in completion handler " + mVar + " for " + this, th3);
                        Unit unit = Unit.a;
                    }
                }
            }
        }
        if (kVar != null) {
            N(kVar);
        }
        B(th2);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return operation.invoke(obj, this);
    }

    @Override // kotlinx.coroutines.Job
    public boolean c() {
        Object obj = f15614d.get(this);
        return (obj instanceof t0) && ((t0) obj).c();
    }

    @Override // kotlinx.coroutines.Job
    public final m d0(e1 e1Var) {
        n nVar = new n(e1Var);
        nVar.f15686v = this;
        loop0: while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15614d;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (obj instanceof k0) {
                k0 k0Var = (k0) obj;
                if (k0Var.f15632d) {
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, nVar)) {
                        if (atomicReferenceFieldUpdater.get(this) != obj) {
                            break;
                        }
                    }
                    break loop0;
                }
                e0(k0Var);
            } else {
                boolean z5 = obj instanceof t0;
                i1 i1Var = i1.f15624d;
                if (!z5) {
                    Object obj2 = atomicReferenceFieldUpdater.get(this);
                    q qVar = obj2 instanceof q ? (q) obj2 : null;
                    nVar.k(qVar != null ? qVar.a : null);
                    return i1Var;
                }
                g1 b10 = ((t0) obj).b();
                if (b10 == null) {
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.JobNode");
                    f0((z0) obj);
                } else if (!b10.d(nVar, 7)) {
                    boolean d6 = b10.d(nVar, 3);
                    Object obj3 = atomicReferenceFieldUpdater.get(this);
                    if (obj3 instanceof c1) {
                        r4 = ((c1) obj3).d();
                    } else {
                        q qVar2 = obj3 instanceof q ? (q) obj3 : null;
                        if (qVar2 != null) {
                            r4 = qVar2.a;
                        }
                    }
                    nVar.k(r4);
                    if (d6) {
                        break loop0;
                    }
                    return i1Var;
                }
            }
        }
        return nVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v3, types: [nr.s0] */
    public final void e0(k0 k0Var) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        g1 g1Var = new g1();
        if (!k0Var.f15632d) {
            g1Var = new s0(g1Var);
        }
        do {
            atomicReferenceFieldUpdater = f15614d;
            if (atomicReferenceFieldUpdater.compareAndSet(this, k0Var, g1Var)) {
                return;
            }
        } while (atomicReferenceFieldUpdater.get(this) == k0Var);
    }

    @Override // kotlinx.coroutines.Job
    public void f(CancellationException cancellationException) {
        if (cancellationException == null) {
            cancellationException = new w0(D(), null, this);
        }
        z(cancellationException);
    }

    public final void f0(z0 z0Var) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        g1 g1Var = new g1();
        z0Var.getClass();
        sr.m.f18117e.set(g1Var, z0Var);
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = sr.m.f18116d;
        atomicReferenceFieldUpdater2.set(g1Var, z0Var);
        loop0: while (true) {
            if (atomicReferenceFieldUpdater2.get(z0Var) == z0Var) {
                while (!atomicReferenceFieldUpdater2.compareAndSet(z0Var, z0Var, g1Var)) {
                    if (atomicReferenceFieldUpdater2.get(z0Var) != z0Var) {
                        break;
                    }
                }
                g1Var.f(z0Var);
                break loop0;
            }
            break;
        }
        sr.m g6 = z0Var.g();
        do {
            atomicReferenceFieldUpdater = f15614d;
            if (atomicReferenceFieldUpdater.compareAndSet(this, z0Var, g6)) {
                return;
            }
        } while (atomicReferenceFieldUpdater.get(this) == z0Var);
    }

    public final int g0(Object obj) {
        boolean z5 = obj instanceof k0;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15614d;
        if (z5) {
            if (((k0) obj).f15632d) {
                return 0;
            }
            k0 k0Var = x.j;
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, k0Var)) {
                if (atomicReferenceFieldUpdater.get(this) != obj) {
                    return -1;
                }
            }
            c0();
            return 1;
        }
        if (!(obj instanceof s0)) {
            return 0;
        }
        g1 g1Var = ((s0) obj).f15659d;
        while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, g1Var)) {
            if (atomicReferenceFieldUpdater.get(this) != obj) {
                return -1;
            }
        }
        c0();
        return 1;
    }

    @Override // kotlin.coroutines.CoroutineContext.Element
    public final kotlin.coroutines.f getKey() {
        return t.f15661e;
    }

    @Override // kotlinx.coroutines.Job
    public final i0 i(boolean z5, boolean z6, y0 y0Var) {
        return Q(z6, z5 ? new v0(y0Var) : new j0(1, y0Var));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v5 */
    /* JADX WARN: Type inference failed for: r2v6, types: [T, java.lang.Throwable] */
    /* JADX WARN: Type inference failed for: r2v8 */
    public final Object i0(Object obj, Object obj2) {
        if (!(obj instanceof t0)) {
            return x.f15678d;
        }
        if (((obj instanceof k0) || (obj instanceof z0)) && !(obj instanceof n) && !(obj2 instanceof q)) {
            t0 t0Var = (t0) obj;
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15614d;
            Object u0Var = obj2 instanceof t0 ? new u0((t0) obj2) : obj2;
            while (!atomicReferenceFieldUpdater.compareAndSet(this, t0Var, u0Var)) {
                if (atomicReferenceFieldUpdater.get(this) != t0Var) {
                    return x.f15680f;
                }
            }
            a0(obj2);
            F(t0Var, obj2);
            return obj2;
        }
        t0 t0Var2 = (t0) obj;
        g1 L = L(t0Var2);
        if (L == null) {
            return x.f15680f;
        }
        c1 c1Var = t0Var2 instanceof c1 ? (c1) t0Var2 : null;
        if (c1Var == null) {
            c1Var = new c1(L, null);
        }
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        synchronized (c1Var) {
            AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = c1.f15601e;
            if (atomicIntegerFieldUpdater.get(c1Var) == 1) {
                return x.f15678d;
            }
            atomicIntegerFieldUpdater.set(c1Var, 1);
            if (c1Var != t0Var2) {
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = f15614d;
                while (!atomicReferenceFieldUpdater2.compareAndSet(this, t0Var2, c1Var)) {
                    if (atomicReferenceFieldUpdater2.get(this) != t0Var2) {
                        return x.f15680f;
                    }
                }
            }
            boolean e9 = c1Var.e();
            q qVar = obj2 instanceof q ? (q) obj2 : null;
            if (qVar != null) {
                c1Var.a(qVar.a);
            }
            ?? d6 = e9 ? 0 : c1Var.d();
            objectRef.element = d6;
            Unit unit = Unit.a;
            if (d6 != 0) {
                Z(L, d6);
            }
            n Y = Y(L);
            if (Y != null && k0(c1Var, Y, obj2)) {
                return x.f15679e;
            }
            L.d(new sr.j(2), 2);
            n Y2 = Y(L);
            return (Y2 == null || !k0(c1Var, Y2, obj2)) ? H(c1Var, obj2) : x.f15679e;
        }
    }

    @Override // kotlinx.coroutines.Job
    public final boolean isCompleted() {
        return !(f15614d.get(this) instanceof t0);
    }

    public final boolean k0(c1 c1Var, n nVar, Object obj) {
        while (nVar.f15638w.Q(false, new b1(this, c1Var, nVar, obj)) == i1.f15624d) {
            nVar = Y(nVar);
            if (nVar == null) {
                return false;
            }
        }
        return true;
    }

    public Object l() {
        Object obj = f15614d.get(this);
        if (obj instanceof t0) {
            throw new IllegalStateException("This job has not completed yet");
        }
        if (obj instanceof q) {
            throw ((q) obj).a;
        }
        return x.z(obj);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(kotlin.coroutines.f fVar) {
        return kotlin.coroutines.e.a(this, fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext coroutineContext) {
        return kotlin.coroutines.e.c(this, coroutineContext);
    }

    @Override // kotlinx.coroutines.Job
    public final boolean start() {
        int g02;
        do {
            g02 = g0(f15614d.get(this));
            if (g02 == 0) {
                return false;
            }
        } while (g02 != 1);
        return true;
    }

    @Override // kotlinx.coroutines.Job
    public final Sequence t() {
        d1 block = new d1(null, this);
        Intrinsics.checkNotNullParameter(block, "block");
        return new kotlin.collections.w(block);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(W() + '{' + h0(f15614d.get(this)) + '}');
        sb2.append('@');
        sb2.append(x.o(this));
        return sb2.toString();
    }

    public void v(Object obj) {
        u(obj);
    }

    public final Object w(Continuation frame) {
        Object obj;
        do {
            obj = f15614d.get(this);
            if (!(obj instanceof t0)) {
                if (obj instanceof q) {
                    throw ((q) obj).a;
                }
                return x.z(obj);
            }
        } while (g0(obj) < 0);
        a1 a1Var = new a1(ko.f.b(frame), this);
        a1Var.t();
        a1Var.w(new h(2, x.r(this, new j0(2, a1Var))));
        Object r5 = a1Var.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }

    @Override // kotlinx.coroutines.Job
    public final CancellationException x() {
        CancellationException cancellationException;
        Object obj = f15614d.get(this);
        if (!(obj instanceof c1)) {
            if (obj instanceof t0) {
                throw new IllegalStateException(("Job is still new or active: " + this).toString());
            }
            if (!(obj instanceof q)) {
                return new w0(getClass().getSimpleName().concat(" has completed normally"), null, this);
            }
            Throwable th2 = ((q) obj).a;
            cancellationException = th2 instanceof CancellationException ? (CancellationException) th2 : null;
            return cancellationException == null ? new w0(D(), th2, this) : cancellationException;
        }
        Throwable d6 = ((c1) obj).d();
        if (d6 == null) {
            throw new IllegalStateException(("Job is still new or active: " + this).toString());
        }
        String concat = getClass().getSimpleName().concat(" is cancelling");
        cancellationException = d6 instanceof CancellationException ? (CancellationException) d6 : null;
        if (cancellationException != null) {
            return cancellationException;
        }
        if (concat == null) {
            concat = D();
        }
        return new w0(concat, d6, this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x003a, code lost:
    
        if (r0 == nr.x.f15679e) goto L78;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean y(Object obj) {
        a5.h hVar;
        Object obj2 = x.f15678d;
        if (K()) {
            do {
                Object obj3 = f15614d.get(this);
                if (obj3 instanceof t0) {
                    if (obj3 instanceof c1) {
                        if (c1.f15601e.get((c1) obj3) == 1) {
                        }
                    }
                    obj2 = i0(obj3, new q(G(obj), false));
                }
                obj2 = x.f15678d;
                break;
            } while (obj2 == x.f15680f);
        }
        if (obj2 == x.f15678d) {
            Throwable th2 = null;
            loop1: while (true) {
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15614d;
                Object obj4 = atomicReferenceFieldUpdater.get(this);
                if (!(obj4 instanceof c1)) {
                    if (!(obj4 instanceof t0)) {
                        hVar = x.f15681g;
                        break;
                    }
                    if (th2 == null) {
                        th2 = G(obj);
                    }
                    t0 t0Var = (t0) obj4;
                    if (t0Var.c()) {
                        g1 L = L(t0Var);
                        if (L != null) {
                            c1 c1Var = new c1(L, th2);
                            while (!atomicReferenceFieldUpdater.compareAndSet(this, t0Var, c1Var)) {
                                if (atomicReferenceFieldUpdater.get(this) != t0Var) {
                                    break;
                                }
                            }
                            Z(L, th2);
                            hVar = x.f15678d;
                            break loop1;
                        }
                        continue;
                    } else {
                        Object i02 = i0(obj4, new q(th2, false));
                        if (i02 == x.f15678d) {
                            throw new IllegalStateException(("Cannot happen in " + obj4).toString());
                        }
                        if (i02 != x.f15680f) {
                            obj2 = i02;
                            break;
                        }
                    }
                } else {
                    synchronized (obj4) {
                        if (c1.f15603v.get((c1) obj4) == x.f15682h) {
                            hVar = x.f15681g;
                        } else {
                            boolean e9 = ((c1) obj4).e();
                            if (obj != null || !e9) {
                                if (th2 == null) {
                                    th2 = G(obj);
                                }
                                ((c1) obj4).a(th2);
                            }
                            Throwable d6 = e9 ? null : ((c1) obj4).d();
                            if (d6 != null) {
                                Z(((c1) obj4).f15604d, d6);
                            }
                            hVar = x.f15678d;
                        }
                    }
                }
            }
            obj2 = hVar;
        }
        if (obj2 != x.f15678d && obj2 != x.f15679e) {
            if (obj2 == x.f15681g) {
                return false;
            }
            u(obj2);
            return true;
        }
        return true;
    }

    public void z(CancellationException cancellationException) {
        y(cancellationException);
    }

    public void c0() {
    }

    public void N(ai.k kVar) {
        throw kVar;
    }

    public void a0(Object obj) {
    }

    public void u(Object obj) {
    }
}
