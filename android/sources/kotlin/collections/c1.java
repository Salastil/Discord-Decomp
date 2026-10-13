package kotlin.collections;

import java.util.Collections;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class c1 {
    public static go.n a(go.n builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        go.i iVar = builder.f9420d;
        iVar.b();
        return iVar.F > 0 ? builder : go.n.f9419i;
    }

    public static Set b(Object obj) {
        Set singleton = Collections.singleton(obj);
        Intrinsics.checkNotNullExpressionValue(singleton, "singleton(...)");
        return singleton;
    }
}
