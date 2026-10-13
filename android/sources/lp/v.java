package lp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class v implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14191d;

    /* renamed from: e, reason: collision with root package name */
    public final w f14192e;

    public /* synthetic */ v(w wVar, int i5) {
        this.f14191d = i5;
        this.f14192e = wVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f14191d) {
            case 0:
                w wVar = this.f14192e;
                a0 a0Var = wVar.f14193v;
                a0Var.A0();
                return nt.a.C((k) a0Var.I.getValue(), wVar.f14194w);
            case 1:
                w wVar2 = this.f14192e;
                a0 a0Var2 = wVar2.f14193v;
                a0Var2.A0();
                return Boolean.valueOf(nt.a.z((k) a0Var2.I.getValue(), wVar2.f14194w));
            default:
                w wVar3 = this.f14192e;
                xq.i iVar = wVar3.f14196y;
                KProperty[] kPropertyArr = w.F;
                boolean booleanValue = ((Boolean) ys.d.O(iVar, kPropertyArr[1])).booleanValue();
                hq.c cVar = wVar3.f14194w;
                a0 a0Var3 = wVar3.f14193v;
                if (booleanValue) {
                    return rq.n.f17557b;
                }
                List list = (List) ys.d.O(wVar3.f14195x, kPropertyArr[0]);
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(list, 10));
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(((ip.f0) it.next()).N());
                }
                return zk.a.g("package view scope for " + cVar + " in " + a0Var3.getName(), CollectionsKt.W(arrayList, new m0(a0Var3, cVar)));
        }
    }
}
