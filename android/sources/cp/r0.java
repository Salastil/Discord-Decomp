package cp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class r0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6944d;

    /* renamed from: e, reason: collision with root package name */
    public final t0 f6945e;

    public /* synthetic */ r0(t0 t0Var, int i5) {
        this.f6944d = i5;
        this.f6945e = t0Var;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v14, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r6v5, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r6v6, types: [java.lang.Iterable] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        ?? c6;
        switch (this.f6944d) {
            case 0:
                t0 t0Var = this.f6945e;
                w1 w1Var = t0Var.f6963c;
                KProperty kProperty = t0.f6962h[0];
                np.b fileClass = (np.b) w1Var.invoke();
                if (fileClass == null) {
                    return rq.n.f17557b;
                }
                Class cls = fileClass.a;
                w1 w1Var2 = t0Var.a;
                KProperty kProperty2 = e0.f6895b[0];
                Object invoke = w1Var2.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
                k2.r rVar = ((np.e) invoke).f15586b;
                aq.f fVar = (aq.f) rVar.f13142e;
                Intrinsics.checkNotNullParameter(fileClass, "fileClass");
                ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) rVar.f13144v;
                hq.b a = op.c.a(cls);
                Object obj = concurrentHashMap.get(a);
                if (obj == null) {
                    hq.c cVar = op.c.a(cls).a;
                    aj.a aVar = fileClass.f15583b;
                    bq.a aVar2 = (bq.a) aVar.f636d;
                    bq.a aVar3 = bq.a.E;
                    if (aVar2 == aVar3) {
                        String[] strArr = (String[]) aVar.f638f;
                        if (aVar2 != aVar3) {
                            strArr = null;
                        }
                        List b10 = strArr != null ? kotlin.collections.u.b(strArr) : null;
                        if (b10 == null) {
                            b10 = kotlin.collections.m0.f13512d;
                        }
                        c6 = new ArrayList();
                        Iterator it = b10.iterator();
                        while (it.hasNext()) {
                            hq.c topLevelFqName = new hq.c(pq.b.c((String) it.next()).a.replace('/', '.'));
                            Intrinsics.checkNotNullExpressionValue(topLevelFqName, "getFqNameForTopLevelClassMaybeWithDollars(...)");
                            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
                            hq.b bVar = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
                            ha.l lVar = (ha.l) rVar.f13143i;
                            fVar.c().f19017c.getClass();
                            np.b o6 = io.sentry.config.a.o(lVar, bVar, eq.f.f8216g);
                            if (o6 != null) {
                                c6.add(o6);
                            }
                        }
                    } else {
                        c6 = kotlin.collections.b0.c(fileClass);
                    }
                    hp.m mVar = new hp.m(fVar.c().f19016b, cVar, 1);
                    ArrayList arrayList = new ArrayList();
                    Iterator it2 = c6.iterator();
                    while (it2.hasNext()) {
                        wq.q a10 = fVar.a(mVar, (np.b) it2.next());
                        if (a10 != null) {
                            arrayList.add(a10);
                        }
                    }
                    rq.o g6 = zk.a.g("package " + cVar + " (" + fileClass + ')', CollectionsKt.i0(arrayList));
                    Object putIfAbsent = concurrentHashMap.putIfAbsent(a, g6);
                    obj = putIfAbsent == null ? g6 : putIfAbsent;
                }
                Intrinsics.checkNotNullExpressionValue(obj, "getOrPut(...)");
                return (rq.o) obj;
            default:
                w1 w1Var3 = this.f6945e.f6963c;
                KProperty kProperty3 = t0.f6962h[0];
                np.b bVar2 = (np.b) w1Var3.invoke();
                if (bVar2 != null) {
                    aj.a aVar4 = bVar2.f15583b;
                    String[] strArr2 = (String[]) aVar4.f638f;
                    String[] strArr3 = (String[]) aVar4.f640h;
                    if (strArr2 != null && strArr3 != null) {
                        Pair h6 = gq.g.h(strArr2, strArr3);
                        return new fo.v((gq.f) h6.f13474d, (cq.e0) h6.f13475e, (eq.f) aVar4.f637e);
                    }
                }
                return null;
        }
    }
}
