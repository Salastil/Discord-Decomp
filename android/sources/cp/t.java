package cp;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class t implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6960d;

    /* renamed from: e, reason: collision with root package name */
    public final x f6961e;

    public /* synthetic */ t(x xVar, int i5) {
        this.f6960d = i5;
        this.f6961e = xVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f6960d) {
            case 0:
                x xVar = this.f6961e;
                w1 w1Var = xVar.f6990h;
                KProperty[] kPropertyArr = x.f6984o;
                KProperty kProperty = kPropertyArr[9];
                Object invoke = w1Var.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke, "getValue(...)");
                w1 w1Var2 = xVar.j;
                KProperty kProperty2 = kPropertyArr[11];
                Object invoke2 = w1Var2.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke2, "getValue(...)");
                return CollectionsKt.V((Collection) invoke, (Collection) invoke2);
            case 1:
                x xVar2 = this.f6961e;
                w1 w1Var3 = xVar2.f6991i;
                KProperty[] kPropertyArr2 = x.f6984o;
                KProperty kProperty3 = kPropertyArr2[10];
                Object invoke3 = w1Var3.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke3, "getValue(...)");
                w1 w1Var4 = xVar2.k;
                KProperty kProperty4 = kPropertyArr2[12];
                Object invoke4 = w1Var4.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke4, "getValue(...)");
                return CollectionsKt.V((Collection) invoke3, (Collection) invoke4);
            case 2:
                x xVar3 = this.f6961e;
                w1 w1Var5 = xVar3.f6990h;
                KProperty[] kPropertyArr3 = x.f6984o;
                KProperty kProperty5 = kPropertyArr3[9];
                Object invoke5 = w1Var5.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke5, "getValue(...)");
                w1 w1Var6 = xVar3.f6991i;
                KProperty kProperty6 = kPropertyArr3[10];
                Object invoke6 = w1Var6.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke6, "getValue(...)");
                return CollectionsKt.V((Collection) invoke5, (Collection) invoke6);
            case 3:
                x xVar4 = this.f6961e;
                w1 w1Var7 = xVar4.f6992l;
                KProperty[] kPropertyArr4 = x.f6984o;
                KProperty kProperty7 = kPropertyArr4[13];
                Object invoke7 = w1Var7.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke7, "getValue(...)");
                w1 w1Var8 = xVar4.f6993m;
                KProperty kProperty8 = kPropertyArr4[14];
                Object invoke8 = w1Var8.invoke();
                Intrinsics.checkNotNullExpressionValue(invoke8, "getValue(...)");
                return CollectionsKt.V((Collection) invoke7, (Collection) invoke8);
            case 4:
                return c2.d(this.f6961e.a());
            case 5:
                Collection I = m3.n.I(this.f6961e.a().h0(), null, 3);
                ArrayList arrayList = new ArrayList();
                for (Object obj : I) {
                    if (!kq.e.m((ip.l) obj)) {
                        arrayList.add(obj);
                    }
                }
                ArrayList arrayList2 = new ArrayList();
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ip.l lVar = (ip.l) it.next();
                    ip.f fVar = lVar instanceof ip.f ? (ip.f) lVar : null;
                    Class k = fVar != null ? c2.k(fVar) : null;
                    b0 b0Var = k != null ? new b0(k) : null;
                    if (b0Var != null) {
                        arrayList2.add(b0Var);
                    }
                }
                return arrayList2;
            default:
                Collection<ip.f> x5 = this.f6961e.a().x();
                Intrinsics.checkNotNullExpressionValue(x5, "getSealedSubclasses(...)");
                ArrayList arrayList3 = new ArrayList();
                for (ip.f fVar2 : x5) {
                    Intrinsics.checkNotNull(fVar2, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    Class k5 = c2.k(fVar2);
                    b0 b0Var2 = k5 != null ? new b0(k5) : null;
                    if (b0Var2 != null) {
                        arrayList3.add(b0Var2);
                    }
                }
                return arrayList3;
        }
    }
}
