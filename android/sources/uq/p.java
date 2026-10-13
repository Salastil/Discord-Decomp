package uq;

import cq.i0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19045d;

    /* renamed from: e, reason: collision with root package name */
    public final t f19046e;

    /* renamed from: i, reason: collision with root package name */
    public final i0 f19047i;

    /* renamed from: v, reason: collision with root package name */
    public final wq.r f19048v;

    public /* synthetic */ p(t tVar, i0 i0Var, wq.r rVar, int i5) {
        this.f19045d = i5;
        this.f19046e = tVar;
        this.f19047i = i0Var;
        this.f19048v = rVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19045d) {
            case 0:
                t tVar = this.f19046e;
                xq.l lVar = ((j) tVar.a.f3398e).a;
                p pVar = new p(tVar, this.f19047i, this.f19048v, 2);
                lVar.getClass();
                return new xq.h(lVar, pVar);
            case 1:
                t tVar2 = this.f19046e;
                xq.l lVar2 = ((j) tVar2.a.f3398e).a;
                p pVar2 = new p(tVar2, this.f19047i, this.f19048v, 3);
                lVar2.getClass();
                return new xq.h(lVar2, pVar2);
            case 2:
                t tVar3 = this.f19046e;
                a3.r a = tVar3.a((ip.l) tVar3.a.f3400v);
                Intrinsics.checkNotNull(a);
                b bVar = ((j) tVar3.a.f3398e).f19019e;
                yq.y returnType = this.f19048v.getReturnType();
                Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
                return (mq.g) bVar.j(a, this.f19047i, returnType);
            default:
                t tVar4 = this.f19046e;
                a3.r a10 = tVar4.a((ip.l) tVar4.a.f3400v);
                Intrinsics.checkNotNull(a10);
                b bVar2 = ((j) tVar4.a.f3398e).f19019e;
                yq.y returnType2 = this.f19048v.getReturnType();
                Intrinsics.checkNotNullExpressionValue(returnType2, "getReturnType(...)");
                return (mq.g) bVar2.c(a10, this.f19047i, returnType2);
        }
    }
}
