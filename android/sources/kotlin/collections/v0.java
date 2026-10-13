package kotlin.collections;

import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class v0 extends u0 {
    public static n0 d() {
        n0 n0Var = n0.f13513d;
        Intrinsics.checkNotNull(n0Var, "null cannot be cast to non-null type kotlin.collections.Map<K of kotlin.collections.MapsKt__MapsKt.emptyMap, V of kotlin.collections.MapsKt__MapsKt.emptyMap>");
        return n0Var;
    }

    public static Object e(Map map, Object obj) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        Intrinsics.checkNotNullParameter(map, "<this>");
        Object obj2 = map.get(obj);
        if (obj2 != null || map.containsKey(obj)) {
            return obj2;
        }
        throw new NoSuchElementException("Key " + obj + " is missing in the map.");
    }

    public static HashMap f(Pair... pairs) {
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        HashMap hashMap = new HashMap(u0.a(pairs.length));
        k(hashMap, pairs);
        return hashMap;
    }

    public static Map g(Pair... pairs) {
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        if (pairs.length <= 0) {
            return d();
        }
        LinkedHashMap destination = new LinkedHashMap(u0.a(pairs.length));
        Intrinsics.checkNotNullParameter(pairs, "<this>");
        Intrinsics.checkNotNullParameter(destination, "destination");
        k(destination, pairs);
        return destination;
    }

    public static LinkedHashMap h(Pair... pairs) {
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        LinkedHashMap linkedHashMap = new LinkedHashMap(u0.a(pairs.length));
        k(linkedHashMap, pairs);
        return linkedHashMap;
    }

    public static LinkedHashMap i(Map map, Map map2) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        Intrinsics.checkNotNullParameter(map2, "map");
        LinkedHashMap linkedHashMap = new LinkedHashMap(map);
        linkedHashMap.putAll(map2);
        return linkedHashMap;
    }

    public static Map j(Map map, Pair pair) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        Intrinsics.checkNotNullParameter(pair, "pair");
        if (map.isEmpty()) {
            return u0.b(pair);
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap(map);
        linkedHashMap.put(pair.f13474d, pair.f13475e);
        return linkedHashMap;
    }

    public static final void k(HashMap hashMap, Pair[] pairs) {
        Intrinsics.checkNotNullParameter(hashMap, "<this>");
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        for (Pair pair : pairs) {
            hashMap.put(pair.f13474d, pair.f13475e);
        }
    }

    public static final void l(LinkedHashMap linkedHashMap, Iterable pairs) {
        Intrinsics.checkNotNullParameter(linkedHashMap, "<this>");
        Intrinsics.checkNotNullParameter(pairs, "pairs");
        Iterator it = pairs.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            linkedHashMap.put(pair.f13474d, pair.f13475e);
        }
    }

    public static Map m(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        if (list == null) {
            LinkedHashMap destination = new LinkedHashMap();
            Intrinsics.checkNotNullParameter(list, "<this>");
            Intrinsics.checkNotNullParameter(destination, "destination");
            l(destination, list);
            Intrinsics.checkNotNullParameter(destination, "<this>");
            int size = destination.size();
            return size != 0 ? size != 1 ? destination : u0.c(destination) : d();
        }
        int size2 = list.size();
        if (size2 == 0) {
            return d();
        }
        if (size2 == 1) {
            return u0.b((Pair) (list != null ? list.get(0) : list.iterator().next()));
        }
        LinkedHashMap destination2 = new LinkedHashMap(u0.a(list.size()));
        Intrinsics.checkNotNullParameter(list, "<this>");
        Intrinsics.checkNotNullParameter(destination2, "destination");
        l(destination2, list);
        return destination2;
    }

    public static Map n(Map map) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        int size = map.size();
        return size != 0 ? size != 1 ? o(map) : u0.c(map) : d();
    }

    public static LinkedHashMap o(Map map) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        return new LinkedHashMap(map);
    }
}
