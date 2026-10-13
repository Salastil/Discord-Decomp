package rp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class f {
    public static final Object a;

    /* renamed from: b, reason: collision with root package name */
    public static final LinkedHashMap f17452b;

    /* renamed from: c, reason: collision with root package name */
    public static final Set f17453c;

    /* renamed from: d, reason: collision with root package name */
    public static final Set f17454d;

    /* JADX WARN: Type inference failed for: r0v22, types: [java.lang.Object, java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v25, types: [java.lang.Object, java.util.Map] */
    static {
        hq.d dVar = fp.o.j;
        hq.e e9 = hq.e.e(StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullExpressionValue(e9, "identifier(...)");
        Pair pair = new Pair(dVar.a(e9).g(), fp.p.f8909d);
        hq.e e10 = hq.e.e("ordinal");
        Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
        Pair pair2 = new Pair(dVar.a(e10).g(), hq.e.e("ordinal"));
        Pair pair3 = new Pair(nf.e.c(fp.o.C, "size"), hq.e.e("size"));
        hq.c cVar = fp.o.G;
        Pair pair4 = new Pair(nf.e.c(cVar, "size"), hq.e.e("size"));
        hq.d dVar2 = fp.o.f8884e;
        hq.e e11 = hq.e.e("length");
        Intrinsics.checkNotNullExpressionValue(e11, "identifier(...)");
        Map g6 = v0.g(pair, pair2, pair3, pair4, new Pair(dVar2.a(e11).g(), hq.e.e("length")), new Pair(nf.e.c(cVar, "keys"), hq.e.e("keySet")), new Pair(nf.e.c(cVar, "values"), hq.e.e("values")), new Pair(nf.e.c(cVar, "entries"), hq.e.e("entrySet")), new Pair(nf.e.c(fp.o.a0, "size"), hq.e.e("length")), new Pair(nf.e.c(fp.o.f8879b0, "size"), hq.e.e("length")), new Pair(nf.e.c(fp.o.f8881c0, "size"), hq.e.e("length")));
        a = g6;
        Set<Map.Entry> entrySet = g6.entrySet();
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(entrySet, 10));
        for (Map.Entry entry : entrySet) {
            arrayList.add(new Pair(((hq.c) entry.getKey()).a.f(), entry.getValue()));
        }
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Pair pair5 = (Pair) it.next();
            hq.e eVar = (hq.e) pair5.f13475e;
            Object obj = linkedHashMap.get(eVar);
            if (obj == null) {
                obj = new ArrayList();
                linkedHashMap.put(eVar, obj);
            }
            ((List) obj).add((hq.e) pair5.f13474d);
        }
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(u0.a(linkedHashMap.size()));
        for (Map.Entry entry2 : linkedHashMap.entrySet()) {
            Object key = entry2.getKey();
            Iterable iterable = (Iterable) entry2.getValue();
            Intrinsics.checkNotNullParameter(iterable, "<this>");
            linkedHashMap2.put(key, CollectionsKt.i0(CollectionsKt.k0(iterable)));
        }
        f17452b = linkedHashMap2;
        ?? r02 = a;
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Map.Entry entry3 : r02.entrySet()) {
            String str = hp.d.a;
            hq.b f2 = hp.d.f(((hq.c) entry3.getKey()).b().a);
            Intrinsics.checkNotNull(f2);
            linkedHashSet.add(f2.a().a((hq.e) entry3.getValue()));
        }
        Set keySet = a.keySet();
        f17453c = keySet;
        Set set = keySet;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(set, 10));
        Iterator it2 = set.iterator();
        while (it2.hasNext()) {
            arrayList2.add(((hq.c) it2.next()).a.f());
        }
        f17454d = CollectionsKt.l0(arrayList2);
    }
}
