package vp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.e1;
import kotlin.collections.u0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19501d;

    /* renamed from: e, reason: collision with root package name */
    public final o f19502e;

    public /* synthetic */ l(o oVar, int i5) {
        this.f19501d = i5;
        this.f19502e = oVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19501d) {
            case 0:
                Class<?>[] declaredClasses = this.f19502e.f19513o.a.getDeclaredClasses();
                Intrinsics.checkNotNullExpressionValue(declaredClasses, "getDeclaredClasses(...)");
                return CollectionsKt.l0(kr.s.q(kr.s.o(kr.s.j(kotlin.collections.x.o(declaredClasses), op.b.f16150v), op.b.f16151w)));
            case 1:
                List b10 = this.f19502e.f19513o.b();
                ArrayList arrayList = new ArrayList();
                for (Object obj : b10) {
                    if (((op.t) obj).a.isEnumConstant()) {
                        arrayList.add(obj);
                    }
                }
                int a = u0.a(kotlin.collections.d0.l(arrayList, 10));
                if (a < 16) {
                    a = 16;
                }
                LinkedHashMap linkedHashMap = new LinkedHashMap(a);
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    Object next = it.next();
                    linkedHashMap.put(((op.t) next).c(), next);
                }
                return linkedHashMap;
            default:
                o oVar = this.f19502e;
                return e1.d(oVar.b(), oVar.g());
        }
    }
}
