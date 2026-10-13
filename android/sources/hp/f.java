package hp;

import ip.a0;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.w;

/* loaded from: classes3.dex */
public final class f implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final f f10160e = new f();

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10161d = 0;

    public /* synthetic */ f() {
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean z5 = false;
        switch (this.f10161d) {
            case 0:
                a0 module = (a0) obj;
                e eVar = g.f10162c;
                Intrinsics.checkNotNullParameter(module, "module");
                List list = (List) ys.d.O(((w) module.D(g.f10164e)).f14195x, w.F[0]);
                ArrayList arrayList = new ArrayList();
                for (Object obj2 : list) {
                    if (obj2 instanceof vq.c) {
                        arrayList.add(obj2);
                    }
                }
                return (vq.c) CollectionsKt.K(arrayList);
            default:
                ip.d dVar = (ip.d) obj;
                if (dVar.b() == ip.c.f12123d) {
                    ip.l h6 = dVar.h();
                    Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    ip.f mutable = (ip.f) h6;
                    Intrinsics.checkNotNullParameter(mutable, "mutable");
                    String str = d.a;
                    if (d.j.containsKey(kq.e.g(mutable))) {
                        z5 = true;
                    }
                }
                return Boolean.valueOf(z5);
        }
    }

    public f(o oVar) {
    }
}
