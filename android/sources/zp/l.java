package zp;

import java.util.LinkedHashMap;

/* loaded from: classes3.dex */
public abstract class l {
    public static final d a = new d(g.f21353e, false);

    /* renamed from: b, reason: collision with root package name */
    public static final d f21364b;

    /* renamed from: c, reason: collision with root package name */
    public static final d f21365c;

    /* renamed from: d, reason: collision with root package name */
    public static final LinkedHashMap f21366d;

    static {
        g gVar = g.f21354i;
        f21364b = new d(gVar, false);
        f21365c = new d(gVar, true);
        String i5 = aq.g.i("Object");
        String h6 = aq.g.h("Predicate");
        String h7 = aq.g.h("Function");
        String h10 = aq.g.h("Consumer");
        String h11 = aq.g.h("BiFunction");
        String h12 = aq.g.h("BiConsumer");
        String h13 = aq.g.h("UnaryOperator");
        String j = aq.g.j("stream/Stream");
        String j5 = aq.g.j("Optional");
        t.b bVar = new t.b(1);
        new io.sentry.internal.debugmeta.c(bVar, aq.g.j("Iterator")).G("forEachRemaining", null, new i(h10, 0));
        new io.sentry.internal.debugmeta.c(bVar, aq.g.i("Iterable")).G("spliterator", null, new n(4));
        io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("Collection"));
        cVar.G("removeIf", null, new i(h6, 17));
        cVar.G("stream", null, new i(j, 26));
        cVar.G("parallelStream", null, new k(j, 1));
        io.sentry.internal.debugmeta.c cVar2 = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("List"));
        cVar2.G("replaceAll", null, new k(h13, 2));
        cVar2.G("addFirst", "2.1", new k(i5, 3));
        cVar2.G("addLast", "2.1", new k(i5, 4));
        cVar2.G("removeFirst", "2.1", new k(i5, 5));
        cVar2.G("removeLast", "2.1", new k(i5, 6));
        io.sentry.internal.debugmeta.c cVar3 = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("LinkedList"));
        cVar3.G("addFirst", "2.1", new i(i5, 1));
        cVar3.G("addLast", "2.1", new i(i5, 2));
        cVar3.G("removeFirst", "2.1", new i(i5, 3));
        cVar3.G("removeLast", "2.1", new i(i5, 4));
        io.sentry.internal.debugmeta.c cVar4 = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("LinkedHashSet"));
        cVar4.G("addFirst", "2.2", new i(i5, 5));
        cVar4.G("addLast", "2.2", new i(i5, 6));
        cVar4.G("removeFirst", "2.2", new i(i5, 7));
        cVar4.G("removeLast", "2.2", new i(i5, 8));
        cVar4.G("getFirst", "2.2", new i(i5, 9));
        cVar4.G("getLast", "2.2", new i(i5, 10));
        io.sentry.internal.debugmeta.c cVar5 = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("Map"));
        cVar5.G("forEach", null, new i(h12, 11));
        cVar5.G("putIfAbsent", null, new i(i5, 12));
        cVar5.G("replace", null, new i(i5, 13));
        cVar5.G("replace", null, new i(i5, 14));
        cVar5.G("replaceAll", null, new i(h11, 15));
        cVar5.G("compute", null, new j(i5, h11, 0));
        cVar5.G("computeIfAbsent", null, new j(i5, h7, 1));
        cVar5.G("computeIfPresent", null, new j(i5, h11, 2));
        cVar5.G("merge", null, new j(i5, h11, 3));
        io.sentry.internal.debugmeta.c cVar6 = new io.sentry.internal.debugmeta.c(bVar, aq.g.j("LinkedHashMap"));
        cVar6.G("putFirst", "2.2", new i(i5, 16));
        cVar6.G("putLast", "2.2", new i(i5, 18));
        io.sentry.internal.debugmeta.c cVar7 = new io.sentry.internal.debugmeta.c(bVar, j5);
        cVar7.G("empty", null, new i(j5, 19));
        cVar7.G("of", null, new j(i5, j5, 4));
        cVar7.G("ofNullable", null, new j(i5, j5, 5));
        cVar7.G("get", null, new i(i5, 20));
        cVar7.G("ifPresent", null, new i(h10, 21));
        new io.sentry.internal.debugmeta.c(bVar, aq.g.i("ref/Reference")).G("get", null, new i(i5, 22));
        new io.sentry.internal.debugmeta.c(bVar, h6).G("test", null, new i(i5, 23));
        new io.sentry.internal.debugmeta.c(bVar, aq.g.h("BiPredicate")).G("test", null, new i(i5, 24));
        new io.sentry.internal.debugmeta.c(bVar, h10).G("accept", null, new i(i5, 25));
        new io.sentry.internal.debugmeta.c(bVar, h12).G("accept", null, new i(i5, 27));
        new io.sentry.internal.debugmeta.c(bVar, h7).G("apply", null, new i(i5, 28));
        new io.sentry.internal.debugmeta.c(bVar, h11).G("apply", null, new i(i5, 29));
        new io.sentry.internal.debugmeta.c(bVar, aq.g.h("Supplier")).G("get", null, new k(i5, 0));
        f21366d = bVar.a;
    }
}
