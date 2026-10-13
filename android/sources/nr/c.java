package nr;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlinx.coroutines.Deferred;

/* loaded from: classes3.dex */
public final class c extends z0 {
    public static final /* synthetic */ AtomicReferenceFieldUpdater E = AtomicReferenceFieldUpdater.newUpdater(c.class, Object.class, "_disposer$volatile");
    private volatile /* synthetic */ Object _disposer$volatile;

    /* renamed from: w, reason: collision with root package name */
    public final j f15597w;

    /* renamed from: x, reason: collision with root package name */
    public i0 f15598x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ e f15599y;

    public c(e eVar, j jVar) {
        this.f15599y = eVar;
        this.f15597w = jVar;
    }

    @Override // nr.z0
    public final boolean j() {
        return false;
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        j jVar = this.f15597w;
        if (th2 != null) {
            jVar.getClass();
            a5.h E2 = jVar.E(new q(th2, false), null);
            if (E2 != null) {
                jVar.s(E2);
                d dVar = (d) E.get(this);
                if (dVar != null) {
                    dVar.a();
                    return;
                }
                return;
            }
            return;
        }
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = e.f15612b;
        e eVar = this.f15599y;
        if (atomicIntegerFieldUpdater.decrementAndGet(eVar) == 0) {
            Deferred[] deferredArr = eVar.a;
            ArrayList arrayList = new ArrayList(deferredArr.length);
            for (Deferred deferred : deferredArr) {
                arrayList.add(deferred.l());
            }
            fo.q qVar = Result.f13476e;
            jVar.resumeWith(arrayList);
        }
    }
}
