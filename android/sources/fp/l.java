package fp;

import ip.i0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import lp.a0;
import lp.w;

/* loaded from: classes3.dex */
public final class l implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8872d;

    /* renamed from: e, reason: collision with root package name */
    public final a0 f8873e;

    public /* synthetic */ l(a0 a0Var, int i5) {
        this.f8872d = i5;
        this.f8873e = a0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f8872d) {
            case 0:
                return ((w) this.f8873e.D(p.f8914i)).E;
            case 1:
                return new hp.i(this.f8873e);
            default:
                a0 a0Var = this.f8873e;
                k2.r rVar = a0Var.E;
                if (rVar == null) {
                    StringBuilder sb2 = new StringBuilder("Dependencies of module ");
                    String str = a0Var.getName().f10209d;
                    Intrinsics.checkNotNullExpressionValue(str, "toString(...)");
                    sb2.append(str);
                    sb2.append(" were not set before querying module content");
                    throw new AssertionError(sb2.toString());
                }
                List list = (List) rVar.f13142e;
                a0Var.A0();
                list.contains(a0Var);
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    ((a0) it.next()).getClass();
                }
                ArrayList arrayList = new ArrayList(d0.l(list, 10));
                Iterator it2 = list.iterator();
                while (it2.hasNext()) {
                    i0 i0Var = ((a0) it2.next()).F;
                    Intrinsics.checkNotNull(i0Var);
                    arrayList.add(i0Var);
                }
                return new lp.k(arrayList, "CompositeProvider@ModuleDescriptor for " + a0Var.getName());
        }
    }
}
