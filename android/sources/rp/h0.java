package rp;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.e1;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class h0 {
    public static final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public static final ArrayList f17461b;

    /* renamed from: c, reason: collision with root package name */
    public static final Object f17462c;

    /* renamed from: d, reason: collision with root package name */
    public static final LinkedHashMap f17463d;

    /* renamed from: e, reason: collision with root package name */
    public static final Set f17464e;

    /* renamed from: f, reason: collision with root package name */
    public static final Set f17465f;

    /* renamed from: g, reason: collision with root package name */
    public static final d0 f17466g;

    /* renamed from: h, reason: collision with root package name */
    public static final Object f17467h;

    /* renamed from: i, reason: collision with root package name */
    public static final LinkedHashMap f17468i;
    public static final HashSet j;
    public static final LinkedHashMap k;

    /* JADX WARN: Type inference failed for: r0v24, types: [java.lang.Object, java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v45, types: [java.lang.Object, java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v48, types: [java.lang.Object, java.util.Map] */
    /* JADX WARN: Type inference failed for: r0v52, types: [java.lang.Object, java.util.Map] */
    static {
        String[] elements = {"containsAll", "removeAll", "retainAll"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        Set<String> J = kotlin.collections.x.J(elements);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(J, 10));
        for (String str : J) {
            String c6 = pq.c.BOOLEAN.c();
            Intrinsics.checkNotNullExpressionValue(c6, "getDesc(...)");
            arrayList.add(m.a("java/util/Collection", str, "Ljava/util/Collection;", c6));
        }
        a = arrayList;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(((d0) it.next()).f17446e);
        }
        f17461b = arrayList2;
        ArrayList arrayList3 = a;
        ArrayList arrayList4 = new ArrayList(kotlin.collections.d0.l(arrayList3, 10));
        Iterator it2 = arrayList3.iterator();
        while (it2.hasNext()) {
            arrayList4.add(((d0) it2.next()).f17443b.b());
        }
        String j5 = aq.g.j("Collection");
        pq.c cVar = pq.c.BOOLEAN;
        String c8 = cVar.c();
        Intrinsics.checkNotNullExpressionValue(c8, "getDesc(...)");
        d0 a10 = m.a(j5, "contains", "Ljava/lang/Object;", c8);
        g0 g0Var = g0.f17457v;
        Pair pair = new Pair(a10, g0Var);
        String j7 = aq.g.j("Collection");
        String c10 = cVar.c();
        Intrinsics.checkNotNullExpressionValue(c10, "getDesc(...)");
        Pair pair2 = new Pair(m.a(j7, "remove", "Ljava/lang/Object;", c10), g0Var);
        String j10 = aq.g.j("Map");
        String c11 = cVar.c();
        Intrinsics.checkNotNullExpressionValue(c11, "getDesc(...)");
        Pair pair3 = new Pair(m.a(j10, "containsKey", "Ljava/lang/Object;", c11), g0Var);
        String j11 = aq.g.j("Map");
        String c12 = cVar.c();
        Intrinsics.checkNotNullExpressionValue(c12, "getDesc(...)");
        Pair pair4 = new Pair(m.a(j11, "containsValue", "Ljava/lang/Object;", c12), g0Var);
        String j12 = aq.g.j("Map");
        String c13 = cVar.c();
        Intrinsics.checkNotNullExpressionValue(c13, "getDesc(...)");
        Pair pair5 = new Pair(m.a(j12, "remove", "Ljava/lang/Object;Ljava/lang/Object;", c13), g0Var);
        Pair pair6 = new Pair(m.a(aq.g.j("Map"), "getOrDefault", "Ljava/lang/Object;Ljava/lang/Object;", "Ljava/lang/Object;"), g0.f17458w);
        d0 a11 = m.a(aq.g.j("Map"), "get", "Ljava/lang/Object;", "Ljava/lang/Object;");
        g0 g0Var2 = g0.f17455e;
        Pair pair7 = new Pair(a11, g0Var2);
        Pair pair8 = new Pair(m.a(aq.g.j("Map"), "remove", "Ljava/lang/Object;", "Ljava/lang/Object;"), g0Var2);
        String j13 = aq.g.j("List");
        pq.c cVar2 = pq.c.INT;
        String c14 = cVar2.c();
        Intrinsics.checkNotNullExpressionValue(c14, "getDesc(...)");
        d0 a12 = m.a(j13, "indexOf", "Ljava/lang/Object;", c14);
        g0 g0Var3 = g0.f17456i;
        Pair pair9 = new Pair(a12, g0Var3);
        String j14 = aq.g.j("List");
        String c15 = cVar2.c();
        Intrinsics.checkNotNullExpressionValue(c15, "getDesc(...)");
        Map g6 = v0.g(pair, pair2, pair3, pair4, pair5, pair6, pair7, pair8, pair9, new Pair(m.a(j14, "lastIndexOf", "Ljava/lang/Object;", c15), g0Var3));
        f17462c = g6;
        LinkedHashMap linkedHashMap = new LinkedHashMap(u0.a(g6.size()));
        for (Map.Entry entry : g6.entrySet()) {
            linkedHashMap.put(((d0) entry.getKey()).f17446e, entry.getValue());
        }
        f17463d = linkedHashMap;
        LinkedHashSet d6 = e1.d(f17462c.keySet(), a);
        ArrayList arrayList5 = new ArrayList(kotlin.collections.d0.l(d6, 10));
        Iterator it3 = d6.iterator();
        while (it3.hasNext()) {
            arrayList5.add(((d0) it3.next()).f17443b);
        }
        f17464e = CollectionsKt.l0(arrayList5);
        ArrayList arrayList6 = new ArrayList(kotlin.collections.d0.l(d6, 10));
        Iterator it4 = d6.iterator();
        while (it4.hasNext()) {
            arrayList6.add(((d0) it4.next()).f17446e);
        }
        f17465f = CollectionsKt.l0(arrayList6);
        pq.c cVar3 = pq.c.INT;
        String c16 = cVar3.c();
        Intrinsics.checkNotNullExpressionValue(c16, "getDesc(...)");
        d0 a13 = m.a("java/util/List", "removeAt", c16, "Ljava/lang/Object;");
        f17466g = a13;
        String i5 = aq.g.i("Number");
        String c17 = pq.c.BYTE.c();
        Intrinsics.checkNotNullExpressionValue(c17, "getDesc(...)");
        Pair pair10 = new Pair(m.a(i5, "toByte", "", c17), hq.e.e("byteValue"));
        String i6 = aq.g.i("Number");
        String c18 = pq.c.SHORT.c();
        Intrinsics.checkNotNullExpressionValue(c18, "getDesc(...)");
        Pair pair11 = new Pair(m.a(i6, "toShort", "", c18), hq.e.e("shortValue"));
        String i10 = aq.g.i("Number");
        String c19 = cVar3.c();
        Intrinsics.checkNotNullExpressionValue(c19, "getDesc(...)");
        Pair pair12 = new Pair(m.a(i10, "toInt", "", c19), hq.e.e("intValue"));
        String i11 = aq.g.i("Number");
        String c20 = pq.c.LONG.c();
        Intrinsics.checkNotNullExpressionValue(c20, "getDesc(...)");
        Pair pair13 = new Pair(m.a(i11, "toLong", "", c20), hq.e.e("longValue"));
        String i12 = aq.g.i("Number");
        String c21 = pq.c.FLOAT.c();
        Intrinsics.checkNotNullExpressionValue(c21, "getDesc(...)");
        Pair pair14 = new Pair(m.a(i12, "toFloat", "", c21), hq.e.e("floatValue"));
        String i13 = aq.g.i("Number");
        String c22 = pq.c.DOUBLE.c();
        Intrinsics.checkNotNullExpressionValue(c22, "getDesc(...)");
        Pair pair15 = new Pair(m.a(i13, "toDouble", "", c22), hq.e.e("doubleValue"));
        Pair pair16 = new Pair(a13, hq.e.e("remove"));
        String i14 = aq.g.i("CharSequence");
        String c23 = cVar3.c();
        Intrinsics.checkNotNullExpressionValue(c23, "getDesc(...)");
        String c24 = pq.c.CHAR.c();
        Intrinsics.checkNotNullExpressionValue(c24, "getDesc(...)");
        Map g10 = v0.g(pair10, pair11, pair12, pair13, pair14, pair15, pair16, new Pair(m.a(i14, "get", c23, c24), hq.e.e("charAt")), new Pair(m.a(aq.g.k("AtomicInteger"), "load", "", "I"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicInteger"), "store", "I", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicInteger"), "exchange", "I", "I"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicInteger"), "fetchAndAdd", "I", "I"), hq.e.e("getAndAdd")), new Pair(m.a(aq.g.k("AtomicInteger"), "addAndFetch", "I", "I"), hq.e.e("addAndGet")), new Pair(m.a(aq.g.k("AtomicLong"), "load", "", "J"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicLong"), "store", "J", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicLong"), "exchange", "J", "J"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicLong"), "fetchAndAdd", "J", "J"), hq.e.e("getAndAdd")), new Pair(m.a(aq.g.k("AtomicLong"), "addAndFetch", "J", "J"), hq.e.e("addAndGet")), new Pair(m.a(aq.g.k("AtomicBoolean"), "load", "", "Z"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicBoolean"), "store", "Z", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicBoolean"), "exchange", "Z", "Z"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicReference"), "load", "", "Ljava/lang/Object;"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicReference"), "store", "Ljava/lang/Object;", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicReference"), "exchange", "Ljava/lang/Object;", "Ljava/lang/Object;"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "loadAt", "I", "I"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "storeAt", "II", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "exchangeAt", "II", "I"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "compareAndSetAt", "III", "Z"), hq.e.e("compareAndSet")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "fetchAndAddAt", "II", "I"), hq.e.e("getAndAdd")), new Pair(m.a(aq.g.k("AtomicIntegerArray"), "addAndFetchAt", "II", "I"), hq.e.e("addAndGet")), new Pair(m.a(aq.g.k("AtomicLongArray"), "loadAt", "I", "J"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicLongArray"), "storeAt", "IJ", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicLongArray"), "exchangeAt", "IJ", "J"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicLongArray"), "compareAndSetAt", "IJJ", "Z"), hq.e.e("compareAndSet")), new Pair(m.a(aq.g.k("AtomicLongArray"), "fetchAndAddAt", "IJ", "J"), hq.e.e("getAndAdd")), new Pair(m.a(aq.g.k("AtomicLongArray"), "addAndFetchAt", "IJ", "J"), hq.e.e("addAndGet")), new Pair(m.a(aq.g.k("AtomicReferenceArray"), "loadAt", "I", "Ljava/lang/Object;"), hq.e.e("get")), new Pair(m.a(aq.g.k("AtomicReferenceArray"), "storeAt", "ILjava/lang/Object;", "V"), hq.e.e("set")), new Pair(m.a(aq.g.k("AtomicReferenceArray"), "exchangeAt", "ILjava/lang/Object;", "Ljava/lang/Object;"), hq.e.e("getAndSet")), new Pair(m.a(aq.g.k("AtomicReferenceArray"), "compareAndSetAt", "ILjava/lang/Object;Ljava/lang/Object;", "Z"), hq.e.e("compareAndSet")));
        f17467h = g10;
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(u0.a(g10.size()));
        for (Map.Entry entry2 : g10.entrySet()) {
            linkedHashMap2.put(((d0) entry2.getKey()).f17446e, entry2.getValue());
        }
        f17468i = linkedHashMap2;
        ?? r02 = f17467h;
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Map.Entry entry3 : r02.entrySet()) {
            d0 d0Var = (d0) entry3.getKey();
            hq.e name = (hq.e) entry3.getValue();
            String internalName = d0Var.a;
            String parameters = d0Var.f17444c;
            String returnType = d0Var.f17445d;
            Intrinsics.checkNotNullParameter(internalName, "classInternalName");
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(parameters, "parameters");
            Intrinsics.checkNotNullParameter(returnType, "returnType");
            Intrinsics.checkNotNullParameter(internalName, "classInternalName");
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(parameters, "parameters");
            Intrinsics.checkNotNullParameter(returnType, "returnType");
            String jvmDescriptor = name + '(' + parameters + ')' + returnType;
            Intrinsics.checkNotNullParameter(internalName, "internalName");
            Intrinsics.checkNotNullParameter(jvmDescriptor, "jvmDescriptor");
            linkedHashSet.add(internalName + '.' + jvmDescriptor);
        }
        Set keySet = f17467h.keySet();
        HashSet hashSet = new HashSet();
        Iterator it5 = keySet.iterator();
        while (it5.hasNext()) {
            hashSet.add(((d0) it5.next()).f17443b);
        }
        j = hashSet;
        Set<Map.Entry> entrySet = f17467h.entrySet();
        ArrayList arrayList7 = new ArrayList(kotlin.collections.d0.l(entrySet, 10));
        for (Map.Entry entry4 : entrySet) {
            arrayList7.add(new Pair(((d0) entry4.getKey()).f17443b, entry4.getValue()));
        }
        int a14 = u0.a(kotlin.collections.d0.l(arrayList7, 10));
        if (a14 < 16) {
            a14 = 16;
        }
        LinkedHashMap linkedHashMap3 = new LinkedHashMap(a14);
        Iterator it6 = arrayList7.iterator();
        while (it6.hasNext()) {
            Pair pair17 = (Pair) it6.next();
            linkedHashMap3.put((hq.e) pair17.f13475e, (hq.e) pair17.f13474d);
        }
        k = linkedHashMap3;
    }
}
