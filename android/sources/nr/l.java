package nr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends z0 {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f15633w;

    /* renamed from: x, reason: collision with root package name */
    public final j f15634x;

    public /* synthetic */ l(j jVar, int i5) {
        this.f15633w = i5;
        this.f15634x = jVar;
    }

    @Override // nr.z0
    public final boolean j() {
        switch (this.f15633w) {
            case 0:
                return true;
            default:
                return false;
        }
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        int i5 = this.f15633w;
        j jVar = this.f15634x;
        switch (i5) {
            case 0:
                Throwable q5 = jVar.q(i());
                if (jVar.x()) {
                    Continuation continuation = jVar.f15627v;
                    Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlinx.coroutines.internal.DispatchedContinuation<*>");
                    sr.g gVar = (sr.g) continuation;
                    gVar.getClass();
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.g.E;
                    while (true) {
                        Object obj = atomicReferenceFieldUpdater.get(gVar);
                        a5.h hVar = sr.h.f18109b;
                        if (Intrinsics.areEqual(obj, hVar)) {
                            while (!atomicReferenceFieldUpdater.compareAndSet(gVar, hVar, q5)) {
                                if (atomicReferenceFieldUpdater.get(gVar) != hVar) {
                                    break;
                                }
                            }
                            break;
                        } else if (obj instanceof Throwable) {
                            break;
                        } else {
                            while (!atomicReferenceFieldUpdater.compareAndSet(gVar, obj, null)) {
                                if (atomicReferenceFieldUpdater.get(gVar) != obj) {
                                    break;
                                }
                            }
                        }
                    }
                }
                jVar.m(q5);
                if (!jVar.x()) {
                    jVar.o();
                    break;
                }
                break;
            default:
                fo.q qVar = Result.f13476e;
                jVar.resumeWith(Unit.a);
                break;
        }
    }
}
