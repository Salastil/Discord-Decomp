package lp;

import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class n implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14163d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f14164e;

    public /* synthetic */ n(p pVar, int i5) {
        this.f14163d = i5;
        this.f14164e = pVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f14163d) {
            case 0:
                hq.e eVar = (hq.e) obj;
                if (eVar != null) {
                    p pVar = this.f14164e;
                    return pVar.j(eVar, pVar.i().f(eVar, qp.c.f16942x));
                }
                p.h(8);
                throw null;
            default:
                hq.e eVar2 = (hq.e) obj;
                if (eVar2 != null) {
                    p pVar2 = this.f14164e;
                    return pVar2.j(eVar2, pVar2.i().c(eVar2, qp.c.f16942x));
                }
                p.h(4);
                throw null;
        }
    }
}
