package rp;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class j {
    public static final LinkedHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final Map f17469b;

    static {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        a = linkedHashMap;
        b(hq.h.f10234t, a("java.util.ArrayList", "java.util.LinkedList"));
        b(hq.h.f10235u, a("java.util.HashSet", "java.util.TreeSet", "java.util.LinkedHashSet"));
        b(hq.h.f10236v, a("java.util.HashMap", "java.util.TreeMap", "java.util.LinkedHashMap", "java.util.concurrent.ConcurrentHashMap", "java.util.concurrent.ConcurrentSkipListMap"));
        hq.c topLevelFqName = new hq.c("java.util.function.Function");
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        b(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()), a("java.util.function.UnaryOperator"));
        hq.c topLevelFqName2 = new hq.c("java.util.function.BiFunction");
        Intrinsics.checkNotNullParameter(topLevelFqName2, "topLevelFqName");
        b(new hq.b(topLevelFqName2.b(), topLevelFqName2.a.f()), a("java.util.function.BinaryOperator"));
        ArrayList arrayList = new ArrayList(linkedHashMap.size());
        for (Map.Entry entry : linkedHashMap.entrySet()) {
            arrayList.add(new Pair(((hq.b) entry.getKey()).a(), ((hq.b) entry.getValue()).a()));
        }
        f17469b = v0.m(arrayList);
    }

    public static ArrayList a(String... strArr) {
        ArrayList arrayList = new ArrayList(strArr.length);
        for (String str : strArr) {
            hq.c topLevelFqName = new hq.c(str);
            Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
            arrayList.add(new hq.b(topLevelFqName.b(), topLevelFqName.a.f()));
        }
        return arrayList;
    }

    public static void b(hq.b bVar, ArrayList arrayList) {
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            a.put(next, bVar);
        }
    }
}
