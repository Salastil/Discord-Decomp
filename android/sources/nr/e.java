package nr;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Deferred;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f15612b = AtomicIntegerFieldUpdater.newUpdater(e.class, "notCompletedCount$volatile");
    public final Deferred[] a;
    private volatile /* synthetic */ int notCompletedCount$volatile;

    public e(Deferred[] deferredArr) {
        this.a = deferredArr;
        this.notCompletedCount$volatile = deferredArr.length;
    }

    public final Object a(lo.h frame) {
        j jVar = new j(1, ko.f.b(frame));
        jVar.t();
        Deferred[] deferredArr = this.a;
        int length = deferredArr.length;
        c[] cVarArr = new c[length];
        for (int i5 = 0; i5 < length; i5++) {
            Deferred deferred = deferredArr[i5];
            deferred.start();
            c cVar = new c(this, jVar);
            cVar.f15598x = x.r(deferred, cVar);
            Unit unit = Unit.a;
            cVarArr[i5] = cVar;
        }
        d dVar = new d(cVarArr);
        for (int i6 = 0; i6 < length; i6++) {
            c cVar2 = cVarArr[i6];
            cVar2.getClass();
            c.E.set(cVar2, dVar);
        }
        if (j.f15626y.get(jVar) instanceof j1) {
            jVar.w(dVar);
        } else {
            dVar.a();
        }
        Object r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }
}
