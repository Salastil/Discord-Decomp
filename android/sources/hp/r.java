package hp;

import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import kotlin.collections.c0;
import kotlin.collections.e1;
import kotlin.collections.h0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r {
    public static final LinkedHashSet a = e1.e(aq.g.g("Collection", "toArray()[Ljava/lang/Object;", "toArray([Ljava/lang/Object;)[Ljava/lang/Object;"), "java/lang/annotation/Annotation.annotationType()Ljava/lang/Class;");

    /* renamed from: b, reason: collision with root package name */
    public static final LinkedHashSet f10194b;

    /* renamed from: c, reason: collision with root package name */
    public static final LinkedHashSet f10195c;

    /* renamed from: d, reason: collision with root package name */
    public static final LinkedHashSet f10196d;

    /* renamed from: e, reason: collision with root package name */
    public static final LinkedHashSet f10197e;

    /* renamed from: f, reason: collision with root package name */
    public static final LinkedHashSet f10198f;

    /* renamed from: g, reason: collision with root package name */
    public static final LinkedHashSet f10199g;

    static {
        List<pq.c> g6 = c0.g(pq.c.BOOLEAN, pq.c.CHAR);
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (pq.c cVar : g6) {
            hq.c cVar2 = cVar.f16465v;
            if (cVar2 == null) {
                pq.c.a(15);
                throw null;
            }
            String b10 = cVar2.a.f().b();
            Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
            h0.o(linkedHashSet, aq.g.f(b10, cVar.f16463e + "Value()" + cVar.c()));
        }
        f10194b = e1.d(e1.d(e1.d(e1.d(e1.d(e1.d(linkedHashSet, aq.g.g("List", "sort(Ljava/util/Comparator;)V", "reversed()Ljava/util/List;")), aq.g.f("String", "codePointAt(I)I", "codePointBefore(I)I", "codePointCount(II)I", "compareToIgnoreCase(Ljava/lang/String;)I", "concat(Ljava/lang/String;)Ljava/lang/String;", "contains(Ljava/lang/CharSequence;)Z", "contentEquals(Ljava/lang/CharSequence;)Z", "contentEquals(Ljava/lang/StringBuffer;)Z", "endsWith(Ljava/lang/String;)Z", "equalsIgnoreCase(Ljava/lang/String;)Z", "getBytes()[B", "getBytes(II[BI)V", "getBytes(Ljava/lang/String;)[B", "getBytes(Ljava/nio/charset/Charset;)[B", "getChars(II[CI)V", "indexOf(I)I", "indexOf(II)I", "indexOf(Ljava/lang/String;)I", "indexOf(Ljava/lang/String;I)I", "intern()Ljava/lang/String;", "isEmpty()Z", "lastIndexOf(I)I", "lastIndexOf(II)I", "lastIndexOf(Ljava/lang/String;)I", "lastIndexOf(Ljava/lang/String;I)I", "matches(Ljava/lang/String;)Z", "offsetByCodePoints(II)I", "regionMatches(ILjava/lang/String;II)Z", "regionMatches(ZILjava/lang/String;II)Z", "replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "replace(CC)Ljava/lang/String;", "replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;", "split(Ljava/lang/String;I)[Ljava/lang/String;", "split(Ljava/lang/String;)[Ljava/lang/String;", "startsWith(Ljava/lang/String;I)Z", "startsWith(Ljava/lang/String;)Z", "substring(II)Ljava/lang/String;", "substring(I)Ljava/lang/String;", "toCharArray()[C", "toLowerCase()Ljava/lang/String;", "toLowerCase(Ljava/util/Locale;)Ljava/lang/String;", "toUpperCase()Ljava/lang/String;", "toUpperCase(Ljava/util/Locale;)Ljava/lang/String;", "trim()Ljava/lang/String;", "isBlank()Z", "lines()Ljava/util/stream/Stream;", "repeat(I)Ljava/lang/String;")), aq.g.f("Double", "isInfinite()Z", "isNaN()Z")), aq.g.f("Float", "isInfinite()Z", "isNaN()Z")), aq.g.f("Enum", "getDeclaringClass()Ljava/lang/Class;", "finalize()V")), aq.g.f("CharSequence", "isEmpty()Z"));
        f10195c = aq.g.g("List", "getFirst()Ljava/lang/Object;", "getLast()Ljava/lang/Object;");
        f10196d = e1.d(e1.d(e1.d(e1.d(e1.d(e1.d(aq.g.f("CharSequence", "codePoints()Ljava/util/stream/IntStream;", "chars()Ljava/util/stream/IntStream;"), aq.g.g("Iterator", "forEachRemaining(Ljava/util/function/Consumer;)V")), aq.g.f("Iterable", "forEach(Ljava/util/function/Consumer;)V", "spliterator()Ljava/util/Spliterator;")), aq.g.f("Throwable", "setStackTrace([Ljava/lang/StackTraceElement;)V", "fillInStackTrace()Ljava/lang/Throwable;", "getLocalizedMessage()Ljava/lang/String;", "printStackTrace()V", "printStackTrace(Ljava/io/PrintStream;)V", "printStackTrace(Ljava/io/PrintWriter;)V", "getStackTrace()[Ljava/lang/StackTraceElement;", "initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;", "getSuppressed()[Ljava/lang/Throwable;", "addSuppressed(Ljava/lang/Throwable;)V")), aq.g.g("Collection", "spliterator()Ljava/util/Spliterator;", "parallelStream()Ljava/util/stream/Stream;", "stream()Ljava/util/stream/Stream;", "removeIf(Ljava/util/function/Predicate;)Z")), aq.g.g("List", "replaceAll(Ljava/util/function/UnaryOperator;)V", "addFirst(Ljava/lang/Object;)V", "addLast(Ljava/lang/Object;)V", "removeFirst()Ljava/lang/Object;", "removeLast()Ljava/lang/Object;")), aq.g.g("Map", "getOrDefault(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "forEach(Ljava/util/function/BiConsumer;)V", "replaceAll(Ljava/util/function/BiFunction;)V", "merge(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "computeIfPresent(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "putIfAbsent(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "replace(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", "replace(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "computeIfAbsent(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "compute(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;"));
        f10197e = e1.d(e1.d(aq.g.g("Collection", "removeIf(Ljava/util/function/Predicate;)Z"), aq.g.g("List", "replaceAll(Ljava/util/function/UnaryOperator;)V", "sort(Ljava/util/Comparator;)V", "addFirst(Ljava/lang/Object;)V", "addLast(Ljava/lang/Object;)V", "removeFirst()Ljava/lang/Object;", "removeLast()Ljava/lang/Object;")), aq.g.g("Map", "computeIfAbsent(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;", "computeIfPresent(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "compute(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "merge(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;", "putIfAbsent(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "remove(Ljava/lang/Object;Ljava/lang/Object;)Z", "replaceAll(Ljava/util/function/BiFunction;)V", "replace(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "replace(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z"));
        pq.c cVar3 = pq.c.BOOLEAN;
        pq.c cVar4 = pq.c.BYTE;
        List g10 = c0.g(cVar3, cVar4, pq.c.DOUBLE, pq.c.FLOAT, cVar4, pq.c.INT, pq.c.LONG, pq.c.SHORT);
        LinkedHashSet linkedHashSet2 = new LinkedHashSet();
        Iterator it = g10.iterator();
        while (it.hasNext()) {
            hq.c cVar5 = ((pq.c) it.next()).f16465v;
            if (cVar5 == null) {
                pq.c.a(15);
                throw null;
            }
            String b11 = cVar5.a.f().b();
            Intrinsics.checkNotNullExpressionValue(b11, "asString(...)");
            String[] a10 = aq.g.a("Ljava/lang/String;");
            h0.o(linkedHashSet2, aq.g.f(b11, (String[]) Arrays.copyOf(a10, a10.length)));
        }
        String[] a11 = aq.g.a("D");
        LinkedHashSet d6 = e1.d(linkedHashSet2, aq.g.f("Float", (String[]) Arrays.copyOf(a11, a11.length)));
        String[] a12 = aq.g.a("[C", "[CII", "[III", "[BIILjava/lang/String;", "[BIILjava/nio/charset/Charset;", "[BLjava/lang/String;", "[BLjava/nio/charset/Charset;", "[BII", "[B", "Ljava/lang/StringBuffer;", "Ljava/lang/StringBuilder;");
        f10198f = e1.d(d6, aq.g.f("String", (String[]) Arrays.copyOf(a12, a12.length)));
        String[] a13 = aq.g.a("Ljava/lang/String;Ljava/lang/Throwable;ZZ");
        f10199g = aq.g.f("Throwable", (String[]) Arrays.copyOf(a13, a13.length));
    }

    public static boolean a(hq.d arrayFqName) {
        Intrinsics.checkNotNullParameter(arrayFqName, "fqName");
        if (Intrinsics.areEqual(arrayFqName, fp.o.f8888g)) {
            return true;
        }
        Intrinsics.checkNotNullParameter(arrayFqName, "arrayFqName");
        return fp.o.f8889g0.get(arrayFqName) != null;
    }
}
