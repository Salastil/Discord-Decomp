package zp;

import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r {
    public final LinkedHashMap a;

    public r(LinkedHashMap map) {
        Intrinsics.checkNotNullParameter(map, "map");
        this.a = map;
    }

    public final r a() {
        LinkedHashMap linkedHashMap = this.a;
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(u0.a(linkedHashMap.size()));
        for (Map.Entry entry : linkedHashMap.entrySet()) {
            Object key = entry.getKey();
            d dVar = (d) entry.getValue();
            linkedHashMap2.put(key, new d(dVar.a, dVar.f21345b, dVar.f21346c, true));
        }
        return new r(linkedHashMap2);
    }
}
