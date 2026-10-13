package nr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public abstract class z0 extends sr.m implements i0, t0 {

    /* renamed from: v, reason: collision with root package name */
    public e1 f15686v;

    @Override // nr.t0
    public final g1 b() {
        return null;
    }

    @Override // nr.t0
    public final boolean c() {
        return true;
    }

    @Override // nr.i0
    public final void dispose() {
        e1 i5 = i();
        i5.getClass();
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = e1.f15614d;
            Object obj = atomicReferenceFieldUpdater.get(i5);
            if (obj instanceof z0) {
                if (obj != this) {
                    return;
                }
                k0 k0Var = x.j;
                while (!atomicReferenceFieldUpdater.compareAndSet(i5, obj, k0Var)) {
                    if (atomicReferenceFieldUpdater.get(i5) != obj) {
                        break;
                    }
                }
                return;
            }
            if (!(obj instanceof t0) || ((t0) obj).b() == null) {
                return;
            }
            while (true) {
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = sr.m.f18116d;
                Object obj2 = atomicReferenceFieldUpdater2.get(this);
                if (obj2 instanceof sr.r) {
                    return;
                }
                if (obj2 == this) {
                    return;
                }
                Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
                sr.m mVar = (sr.m) obj2;
                mVar.getClass();
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3 = sr.m.f18118i;
                sr.r rVar = (sr.r) atomicReferenceFieldUpdater3.get(mVar);
                if (rVar == null) {
                    rVar = new sr.r(mVar);
                    atomicReferenceFieldUpdater3.set(mVar, rVar);
                }
                while (!atomicReferenceFieldUpdater2.compareAndSet(this, obj2, rVar)) {
                    if (atomicReferenceFieldUpdater2.get(this) != obj2) {
                        break;
                    }
                }
                mVar.e();
                return;
            }
        }
    }

    public Job getParent() {
        return i();
    }

    public final e1 i() {
        e1 e1Var = this.f15686v;
        if (e1Var != null) {
            return e1Var;
        }
        Intrinsics.throwUninitializedPropertyAccessException("job");
        return null;
    }

    public abstract boolean j();

    public abstract void k(Throwable th2);

    @Override // sr.m
    public final String toString() {
        return getClass().getSimpleName() + '@' + x.o(this) + "[job@" + x.o(i()) + ']';
    }
}
