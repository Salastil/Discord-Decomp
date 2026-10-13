package rq;

import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class j implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17548d;

    /* renamed from: e, reason: collision with root package name */
    public final Function0 f17549e;

    public /* synthetic */ j(int i5, Function0 function0) {
        this.f17548d = i5;
        this.f17549e = function0;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f17548d) {
            case 0:
                o oVar = (o) this.f17549e.invoke();
                return oVar instanceof k ? ((k) oVar).h() : oVar;
            default:
                return CollectionsKt.l0((Iterable) this.f17549e.invoke());
        }
    }
}
