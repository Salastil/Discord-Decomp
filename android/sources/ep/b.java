package ep;

import hq.c;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import rp.y;

/* loaded from: classes3.dex */
public abstract class b {
    public static final LinkedHashSet a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.b f8185b;

    static {
        List<c> g6 = c0.g(y.a, y.f17501h, y.f17502i, y.f17496c, y.f17497d, y.f17499f);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (c topLevelFqName : g6) {
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            linkedHashSet.add(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()));
        }
        a = linkedHashSet;
        c topLevelFqName2 = y.f17500g;
        Intrinsics.checkNotNullExpressionValue(topLevelFqName2, "REPEATABLE_ANNOTATION");
        Intrinsics.checkNotNullParameter(topLevelFqName2, "topLevelFqName");
        f8185b = new hq.b(topLevelFqName2.b(), topLevelFqName2.a.f());
    }
}
