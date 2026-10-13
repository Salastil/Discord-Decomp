package yq;

import java.util.List;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 extends y {

    /* renamed from: e, reason: collision with root package name */
    public final xq.o f21009e;

    /* renamed from: i, reason: collision with root package name */
    public final Function0 f21010i;

    /* renamed from: v, reason: collision with root package name */
    public final xq.i f21011v;

    public a0(xq.o storageManager, Function0 computation) {
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(computation, "computation");
        this.f21009e = storageManager;
        this.f21010i = computation;
        xq.l lVar = (xq.l) storageManager;
        lVar.getClass();
        this.f21011v = new xq.i(lVar, computation);
    }

    @Override // yq.y
    public final rq.o N() {
        return x0().N();
    }

    @Override // yq.y
    public final List l0() {
        return x0().l0();
    }

    @Override // yq.y
    public final k0 q0() {
        return x0().q0();
    }

    @Override // yq.y
    public final p0 r0() {
        return x0().r0();
    }

    @Override // yq.y
    public final boolean t0() {
        return x0().t0();
    }

    public final String toString() {
        xq.i iVar = this.f21011v;
        return (iVar.f20542i == xq.k.f20546d || iVar.f20542i == xq.k.f20547e) ? "<Not computed yet>" : x0().toString();
    }

    @Override // yq.y
    /* renamed from: v0 */
    public final y y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return new a0(this.f21009e, new bs.q(19, kotlinTypeRefiner, this));
    }

    @Override // yq.y
    public final b1 w0() {
        y x02 = x0();
        while (x02 instanceof a0) {
            x02 = ((a0) x02).x0();
        }
        Intrinsics.checkNotNull(x02, "null cannot be cast to non-null type org.jetbrains.kotlin.types.UnwrappedType");
        return (b1) x02;
    }

    public final y x0() {
        return (y) this.f21011v.invoke();
    }
}
