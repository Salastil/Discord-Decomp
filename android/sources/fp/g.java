package fp;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.a0;
import lp.w;
import yq.c0;
import yq.c1;

/* loaded from: classes3.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8856d;

    /* renamed from: e, reason: collision with root package name */
    public final i f8857e;

    public /* synthetic */ g(i iVar, int i5) {
        this.f8856d = i5;
        this.f8857e = iVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        int i5 = this.f8856d;
        i iVar = this.f8857e;
        switch (i5) {
            case 0:
                hq.e eVar = (hq.e) obj;
                a0 l6 = iVar.l();
                hq.c cVar = p.f8915l;
                rq.k kVar = ((w) l6.D(cVar)).E;
                if (kVar == null) {
                    i.a(11);
                    throw null;
                }
                ip.i a = kVar.a(eVar, qp.c.f16937d);
                if (a == null) {
                    throw new AssertionError("Built-in class " + cVar.a(eVar) + " is not found");
                }
                if (a instanceof ip.f) {
                    return (ip.f) a;
                }
                throw new AssertionError("Must be a class descriptor " + eVar + ", but was " + a);
            default:
                ip.a0 module = (ip.a0) obj;
                Intrinsics.checkNotNullParameter(module, "module");
                i g6 = module.g();
                c1 c1Var = c1.f21013i;
                c0 h6 = g6.h(iVar.v());
                Intrinsics.checkNotNullExpressionValue(h6, "getArrayType(...)");
                return h6;
        }
    }
}
