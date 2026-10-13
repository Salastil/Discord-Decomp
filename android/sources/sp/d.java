package sp;

import ar.k;
import ar.l;
import fp.o;
import ip.a0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import yq.y;

/* loaded from: classes3.dex */
public final class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final d f18083d = new d();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        y type;
        a0 module = (a0) obj;
        Object obj2 = e.a;
        Intrinsics.checkNotNullParameter(module, "module");
        r0 o6 = d9.a.o(c.f18080b, module.g().j(o.f8900t));
        return (o6 == null || (type = o6.getType()) == null) ? l.c(k.Z, new String[0]) : type;
    }
}
