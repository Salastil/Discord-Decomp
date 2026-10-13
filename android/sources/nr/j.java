package nr;

import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public class j extends e0 implements CancellableContinuation, CoroutineStackFrame, v1 {
    private volatile /* synthetic */ int _decisionAndIndex$volatile;
    private volatile /* synthetic */ Object _parentHandle$volatile;
    private volatile /* synthetic */ Object _state$volatile;

    /* renamed from: v, reason: collision with root package name */
    public final Continuation f15627v;

    /* renamed from: w, reason: collision with root package name */
    public final CoroutineContext f15628w;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f15625x = AtomicIntegerFieldUpdater.newUpdater(j.class, "_decisionAndIndex$volatile");

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f15626y = AtomicReferenceFieldUpdater.newUpdater(j.class, Object.class, "_state$volatile");
    public static final /* synthetic */ AtomicReferenceFieldUpdater E = AtomicReferenceFieldUpdater.newUpdater(j.class, Object.class, "_parentHandle$volatile");

    public j(int i5, Continuation continuation) {
        super(i5);
        this.f15627v = continuation;
        this.f15628w = continuation.getContext();
        this._decisionAndIndex$volatile = 536870911;
        this._state$volatile = b.f15591d;
    }

    public static Object D(j1 j1Var, Object obj, int i5, Function3 function3) {
        if (obj instanceof q) {
            return obj;
        }
        if (i5 != 1 && i5 != 2) {
            return obj;
        }
        if (function3 != null || (j1Var instanceof i)) {
            return new p(obj, j1Var instanceof i ? (i) j1Var : null, function3, (Throwable) null, 16);
        }
        return obj;
    }

    public static void y(Object obj, Object obj2) {
        throw new IllegalStateException(("It's prohibited to register multiple handlers, tried to register " + obj + ", already has " + obj2).toString());
    }

    public final void A() {
        Continuation continuation = this.f15627v;
        Throwable th2 = null;
        sr.g gVar = continuation instanceof sr.g ? (sr.g) continuation : null;
        if (gVar != null) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.g.E;
            loop0: while (true) {
                Object obj = atomicReferenceFieldUpdater.get(gVar);
                a5.h hVar = sr.h.f18109b;
                if (obj == hVar) {
                    while (!atomicReferenceFieldUpdater.compareAndSet(gVar, hVar, this)) {
                        if (atomicReferenceFieldUpdater.get(gVar) != hVar) {
                            break;
                        }
                    }
                    break loop0;
                } else {
                    if (!(obj instanceof Throwable)) {
                        throw new IllegalStateException(("Inconsistent state " + obj).toString());
                    }
                    while (!atomicReferenceFieldUpdater.compareAndSet(gVar, obj, null)) {
                        if (atomicReferenceFieldUpdater.get(gVar) != obj) {
                            throw new IllegalArgumentException("Failed requirement.");
                        }
                    }
                    th2 = (Throwable) obj;
                }
            }
            if (th2 == null) {
                return;
            }
            o();
            m(th2);
        }
    }

    public final void B(Object obj, int i5, Function3 function3) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15626y;
            Object obj2 = atomicReferenceFieldUpdater.get(this);
            if (obj2 instanceof j1) {
                Object D = D((j1) obj2, obj, i5, function3);
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj2, D)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj2) {
                        break;
                    }
                }
                if (!x()) {
                    o();
                }
                p(i5);
                return;
            }
            if (obj2 instanceof k) {
                k kVar = (k) obj2;
                if (k.f15631c.compareAndSet(kVar, 0, 1)) {
                    if (function3 != null) {
                        l(function3, kVar.a, obj);
                        return;
                    }
                    return;
                }
            }
            throw new IllegalStateException(("Already resumed, but proposed with update " + obj).toString());
        }
    }

    public final void C(CoroutineDispatcher coroutineDispatcher, Unit unit) {
        Continuation continuation = this.f15627v;
        sr.g gVar = continuation instanceof sr.g ? (sr.g) continuation : null;
        B(unit, (gVar != null ? gVar.f18105v : null) == coroutineDispatcher ? 4 : this.f15613i, null);
    }

    public final a5.h E(Object obj, Function3 function3) {
        a5.h hVar = x.a;
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15626y;
            Object obj2 = atomicReferenceFieldUpdater.get(this);
            if (!(obj2 instanceof j1)) {
                return null;
            }
            Object D = D((j1) obj2, obj, this.f15613i, function3);
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj2, D)) {
                if (atomicReferenceFieldUpdater.get(this) != obj2) {
                    break;
                }
            }
            if (!x()) {
                o();
            }
            return hVar;
        }
    }

    @Override // nr.v1
    public final void a(sr.u uVar, int i5) {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater;
        int i6;
        do {
            atomicIntegerFieldUpdater = f15625x;
            i6 = atomicIntegerFieldUpdater.get(this);
            if ((i6 & 536870911) != 536870911) {
                throw new IllegalStateException("invokeOnCancellation should be called at most once");
            }
        } while (!atomicIntegerFieldUpdater.compareAndSet(this, i6, ((i6 >> 29) << 29) + i5));
        w(uVar);
    }

    @Override // nr.e0
    public final void b(CancellationException cancellationException) {
        CancellationException cancellationException2;
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15626y;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (obj instanceof j1) {
                throw new IllegalStateException("Not completed");
            }
            if (obj instanceof q) {
                return;
            }
            if (!(obj instanceof p)) {
                cancellationException2 = cancellationException;
                p pVar = new p(obj, (i) null, (Function3) null, cancellationException2, 14);
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, pVar)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj) {
                        break;
                    }
                }
                return;
            }
            p pVar2 = (p) obj;
            if (pVar2.f15645e != null) {
                throw new IllegalStateException("Must be called at most once");
            }
            p a = p.a(pVar2, null, cancellationException, 15);
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, a)) {
                if (atomicReferenceFieldUpdater.get(this) != obj) {
                    cancellationException2 = cancellationException;
                }
            }
            i iVar = pVar2.f15642b;
            if (iVar != null) {
                k(iVar, cancellationException);
            }
            Function3 function3 = pVar2.f15643c;
            if (function3 != null) {
                l(function3, cancellationException, pVar2.a);
                return;
            }
            return;
            cancellationException = cancellationException2;
        }
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final boolean c() {
        return f15626y.get(this) instanceof j1;
    }

    @Override // nr.e0
    public final Continuation d() {
        return this.f15627v;
    }

    @Override // nr.e0
    public final Throwable e(Object obj) {
        Throwable e9 = super.e(obj);
        if (e9 != null) {
            return e9;
        }
        return null;
    }

    @Override // nr.e0
    public final Object f(Object obj) {
        return obj instanceof p ? ((p) obj).a : obj;
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.f15627v;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f15628w;
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final a5.h h(Object obj, Function3 function3) {
        return E(obj, function3);
    }

    @Override // nr.e0
    public final Object i() {
        return f15626y.get(this);
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final void j(Object obj, Function3 function3) {
        B(obj, this.f15613i, function3);
    }

    public final void k(i iVar, Throwable th2) {
        try {
            iVar.b(th2);
        } catch (Throwable th3) {
            x.q(new ai.k("Exception in invokeOnCancellation handler for " + this, th3), this.f15628w);
        }
    }

    public final void l(Function3 function3, Throwable th2, Object obj) {
        CoroutineContext coroutineContext = this.f15628w;
        try {
            function3.invoke(th2, obj, coroutineContext);
        } catch (Throwable th3) {
            x.q(new ai.k("Exception in resume onCancellation handler for " + this, th3), coroutineContext);
        }
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final boolean m(Throwable th2) {
        Throwable th3;
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15626y;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (!(obj instanceof j1)) {
                return false;
            }
            boolean z5 = (obj instanceof i) || (obj instanceof sr.u);
            if (th2 == null) {
                th3 = new CancellationException("Continuation " + this + " was cancelled normally");
            } else {
                th3 = th2;
            }
            k kVar = new k(th3, z5);
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, kVar)) {
                if (atomicReferenceFieldUpdater.get(this) != obj) {
                    break;
                }
            }
            j1 j1Var = (j1) obj;
            if (j1Var instanceof i) {
                k((i) obj, th2);
            } else if (j1Var instanceof sr.u) {
                n((sr.u) obj, th2);
            }
            if (!x()) {
                o();
            }
            p(this.f15613i);
            return true;
        }
    }

    public final void n(sr.u uVar, Throwable th2) {
        CoroutineContext coroutineContext = this.f15628w;
        int i5 = f15625x.get(this) & 536870911;
        if (i5 == 536870911) {
            throw new IllegalStateException("The index for Segment.onCancellation(..) is broken");
        }
        try {
            uVar.h(i5, coroutineContext);
        } catch (Throwable th3) {
            x.q(new ai.k("Exception in invokeOnCancellation handler for " + this, th3), coroutineContext);
        }
    }

    public final void o() {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = E;
        i0 i0Var = (i0) atomicReferenceFieldUpdater.get(this);
        if (i0Var == null) {
            return;
        }
        i0Var.dispose();
        atomicReferenceFieldUpdater.set(this, i1.f15624d);
    }

    public final void p(int i5) {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater;
        int i6;
        do {
            atomicIntegerFieldUpdater = f15625x;
            i6 = atomicIntegerFieldUpdater.get(this);
            int i10 = i6 >> 29;
            if (i10 != 0) {
                if (i10 != 1) {
                    throw new IllegalStateException("Already resumed");
                }
                boolean z5 = i5 == 4;
                Continuation continuation = this.f15627v;
                if (!z5 && (continuation instanceof sr.g)) {
                    boolean z6 = i5 == 1 || i5 == 2;
                    int i11 = this.f15613i;
                    if (z6 == (i11 == 1 || i11 == 2)) {
                        sr.g gVar = (sr.g) continuation;
                        CoroutineDispatcher coroutineDispatcher = gVar.f18105v;
                        CoroutineContext context = gVar.f18106w.getContext();
                        if (sr.h.h(coroutineDispatcher, context)) {
                            sr.h.g(coroutineDispatcher, context, this);
                            return;
                        }
                        p0 a = o1.a();
                        if (a.f15647i >= 4294967296L) {
                            a.q0(this);
                            return;
                        }
                        a.s0(true);
                        try {
                            x.v(this, continuation, true);
                            do {
                            } while (a.u0());
                        } finally {
                            try {
                                return;
                            } finally {
                            }
                        }
                        return;
                    }
                }
                x.v(this, continuation, z5);
                return;
            }
        } while (!atomicIntegerFieldUpdater.compareAndSet(this, i6, 1073741824 + (536870911 & i6)));
    }

    public Throwable q(e1 e1Var) {
        return e1Var.x();
    }

    public final Object r() {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater;
        int i5;
        Job job;
        boolean x5 = x();
        do {
            atomicIntegerFieldUpdater = f15625x;
            i5 = atomicIntegerFieldUpdater.get(this);
            int i6 = i5 >> 29;
            if (i6 != 0) {
                if (i6 != 2) {
                    throw new IllegalStateException("Already suspended");
                }
                if (x5) {
                    A();
                }
                Object obj = f15626y.get(this);
                if (obj instanceof q) {
                    throw ((q) obj).a;
                }
                int i10 = this.f15613i;
                if ((i10 != 1 && i10 != 2) || (job = (Job) this.f15628w.o(t.f15661e)) == null || job.c()) {
                    return f(obj);
                }
                CancellationException x10 = job.x();
                b(x10);
                throw x10;
            }
        } while (!atomicIntegerFieldUpdater.compareAndSet(this, i5, 536870912 + (536870911 & i5)));
        if (((i0) E.get(this)) == null) {
            u();
        }
        if (x5) {
            A();
        }
        return ko.a.f13464d;
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        Throwable a = Result.a(obj);
        if (a != null) {
            obj = new q(a, false);
        }
        B(obj, this.f15613i, null);
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final void s(Object obj) {
        p(this.f15613i);
    }

    public final void t() {
        i0 u5 = u();
        if (u5 == null || (f15626y.get(this) instanceof j1)) {
            return;
        }
        u5.dispose();
        E.set(this, i1.f15624d);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(z());
        sb2.append('(');
        sb2.append(x.y(this.f15627v));
        sb2.append("){");
        Object obj = f15626y.get(this);
        sb2.append(obj instanceof j1 ? "Active" : obj instanceof k ? "Cancelled" : "Completed");
        sb2.append("}@");
        sb2.append(x.o(this));
        return sb2.toString();
    }

    public final i0 u() {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        Job job = (Job) this.f15628w.o(t.f15661e);
        if (job == null) {
            return null;
        }
        i0 r5 = x.r(job, new l(this, 0));
        do {
            atomicReferenceFieldUpdater = E;
            if (atomicReferenceFieldUpdater.compareAndSet(this, null, r5)) {
                break;
            }
        } while (atomicReferenceFieldUpdater.get(this) == null);
        return r5;
    }

    public final void v(Function1 function1) {
        w(new h(1, function1));
    }

    /* JADX WARN: Code restructure failed: missing block: B:67:0x00ae, code lost:
    
        y(r8, r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x00b1, code lost:
    
        throw null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void w(j1 j1Var) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15626y;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (obj instanceof b) {
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, j1Var)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj) {
                        break;
                    }
                }
                return;
            }
            if ((obj instanceof i) || (obj instanceof sr.u)) {
                break;
            }
            if (obj instanceof q) {
                q qVar = (q) obj;
                if (!q.f15651b.compareAndSet(qVar, 0, 1)) {
                    y(j1Var, obj);
                    throw null;
                }
                if (obj instanceof k) {
                    Throwable th2 = qVar.a;
                    if (j1Var instanceof i) {
                        k((i) j1Var, th2);
                        return;
                    } else {
                        Intrinsics.checkNotNull(j1Var, "null cannot be cast to non-null type kotlinx.coroutines.internal.Segment<*>");
                        n((sr.u) j1Var, th2);
                        return;
                    }
                }
                return;
            }
            if (!(obj instanceof p)) {
                if (j1Var instanceof sr.u) {
                    return;
                }
                Intrinsics.checkNotNull(j1Var, "null cannot be cast to non-null type kotlinx.coroutines.CancelHandler");
                p pVar = new p(obj, (i) j1Var, (Function3) null, (Throwable) null, 28);
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, pVar)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj) {
                        break;
                    }
                }
                return;
            }
            p pVar2 = (p) obj;
            if (pVar2.f15642b != null) {
                y(j1Var, obj);
                throw null;
            }
            if (j1Var instanceof sr.u) {
                return;
            }
            Intrinsics.checkNotNull(j1Var, "null cannot be cast to non-null type kotlinx.coroutines.CancelHandler");
            i iVar = (i) j1Var;
            Throwable th3 = pVar2.f15645e;
            if (th3 != null) {
                k(iVar, th3);
                return;
            }
            p a = p.a(pVar2, iVar, null, 29);
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, a)) {
                if (atomicReferenceFieldUpdater.get(this) != obj) {
                    break;
                }
            }
            return;
        }
    }

    public final boolean x() {
        if (this.f15613i != 2) {
            return false;
        }
        Continuation continuation = this.f15627v;
        Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlinx.coroutines.internal.DispatchedContinuation<*>");
        sr.g gVar = (sr.g) continuation;
        gVar.getClass();
        return sr.g.E.get(gVar) != null;
    }

    public String z() {
        return "CancellableContinuation";
    }
}
