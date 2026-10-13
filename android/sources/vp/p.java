package vp;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import kotlin.collections.l0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19520d;

    /* renamed from: e, reason: collision with root package name */
    public final q f19521e;

    public /* synthetic */ p(q qVar, int i5) {
        this.f19520d = i5;
        this.f19521e = qVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19520d) {
            case 0:
                q qVar = this.f19521e;
                aq.g gVar = ((up.a) qVar.F.f7952d).f18976l;
                String packageFqName = qVar.f14132x.a.a;
                gVar.getClass();
                Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
                m0 m0Var = m0.f13512d;
                ArrayList arrayList = new ArrayList();
                m0Var.getClass();
                l0.f13511d.getClass();
                return v0.m(arrayList);
            case 1:
                this.f19521e.E.getClass();
                m0 m0Var2 = m0.f13512d;
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(m0Var2, 10));
                ((l0) m0Var2.iterator()).getClass();
                return arrayList2;
            default:
                HashMap hashMap = new HashMap();
                for (Map.Entry entry : ((Map) ys.d.O(this.f19521e.G, q.K[0])).entrySet()) {
                    String str = (String) entry.getKey();
                    np.b bVar = (np.b) entry.getValue();
                    pq.b c6 = pq.b.c(str);
                    Intrinsics.checkNotNullExpressionValue(c6, "byInternalName(...)");
                    aj.a aVar = bVar.f15583b;
                    bq.a aVar2 = (bq.a) aVar.f636d;
                    int ordinal = aVar2.ordinal();
                    if (ordinal == 2) {
                        hashMap.put(c6, c6);
                    } else if (ordinal == 5) {
                        String str2 = (String) aVar.f634b;
                        if (aVar2 != bq.a.F) {
                            str2 = null;
                        }
                        if (str2 != null) {
                            hashMap.put(c6, pq.b.c(str2));
                        }
                    }
                }
                return hashMap;
        }
    }
}
