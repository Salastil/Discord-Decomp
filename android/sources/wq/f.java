package wq;

import java.util.Collection;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20003d;

    /* renamed from: e, reason: collision with root package name */
    public final g f20004e;

    public /* synthetic */ f(g gVar, int i5) {
        this.f20003d = i5;
        this.f20004e = gVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int i5 = this.f20003d;
        g gVar = this.f20004e;
        switch (i5) {
            case 0:
                rq.f fVar = rq.f.f17534m;
                rq.o.a.getClass();
                rq.l lVar = rq.l.f17552e;
                qp.c cVar = qp.c.f16937d;
                return gVar.i(fVar, lVar);
            default:
                zq.f fVar2 = gVar.f20005g;
                i classDescriptor = gVar.j;
                fVar2.getClass();
                Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
                Collection b10 = ((yq.i) classDescriptor.n()).b();
                Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
                return b10;
        }
    }
}
