package aq;

import cq.s0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashSet;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import yq.c0;
import yq.y;

/* loaded from: classes3.dex */
public final class g implements uq.n {

    /* renamed from: b, reason: collision with root package name */
    public static final g f2632b = new g();

    /* renamed from: c, reason: collision with root package name */
    public static final g f2633c = new g();

    /* renamed from: d, reason: collision with root package name */
    public static final g f2634d = new g();

    /* renamed from: e, reason: collision with root package name */
    public static final g f2635e = new g();

    /* renamed from: f, reason: collision with root package name */
    public static final g f2636f = new g();

    public static String[] a(String... signatures) {
        Intrinsics.checkNotNullParameter(signatures, "signatures");
        ArrayList arrayList = new ArrayList(signatures.length);
        for (String str : signatures) {
            arrayList.add("<init>(" + str + ")V");
        }
        return (String[]) arrayList.toArray(new String[0]);
    }

    public static l c(String representation) {
        pq.c cVar;
        Intrinsics.checkNotNullParameter(representation, "representation");
        representation.getClass();
        char charAt = representation.charAt(0);
        pq.c[] values = pq.c.values();
        int length = values.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                cVar = null;
                break;
            }
            cVar = values[i5];
            if (cVar.c().charAt(0) == charAt) {
                break;
            }
            i5++;
        }
        if (cVar != null) {
            return new k(cVar);
        }
        if (charAt == 'V') {
            return new k(null);
        }
        if (charAt == '[') {
            String substring = representation.substring(1);
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            return new i(c(substring));
        }
        if (charAt == 'L') {
            StringsKt.G(representation, ';');
        }
        String substring2 = representation.substring(1, representation.length() - 1);
        Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
        return new j(substring2);
    }

    public static j d(String internalName) {
        Intrinsics.checkNotNullParameter(internalName, "internalName");
        return new j(internalName);
    }

    public static LinkedHashSet e(String internalName, String... signatures) {
        Intrinsics.checkNotNullParameter(internalName, "internalName");
        Intrinsics.checkNotNullParameter(signatures, "signatures");
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (String str : signatures) {
            linkedHashSet.add(internalName + '.' + str);
        }
        return linkedHashSet;
    }

    public static LinkedHashSet f(String name, String... signatures) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signatures, "signatures");
        return e(i(name), (String[]) Arrays.copyOf(signatures, signatures.length));
    }

    public static LinkedHashSet g(String name, String... signatures) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(signatures, "signatures");
        return e(j(name), (String[]) Arrays.copyOf(signatures, signatures.length));
    }

    public static String h(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return "java/util/function/".concat(name);
    }

    public static String i(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return "java/lang/" + name;
    }

    public static String j(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return "java/util/".concat(name);
    }

    public static String k(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return "java/util/concurrent/atomic/".concat(name);
    }

    public static String l(l type) {
        String c6;
        Intrinsics.checkNotNullParameter(type, "type");
        if (type instanceof i) {
            return "[" + l(((i) type).f2640i);
        }
        if (type instanceof k) {
            pq.c cVar = ((k) type).f2642i;
            return (cVar == null || (c6 = cVar.c()) == null) ? "V" : c6;
        }
        if (type instanceof j) {
            return s4.h.h(new StringBuilder("L"), ((j) type).f2641i, ';');
        }
        throw new fo.n();
    }

    @Override // uq.n
    public y b(s0 proto, String flexibleId, c0 lowerBound, c0 upperBound) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(flexibleId, "flexibleId");
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        return !Intrinsics.areEqual(flexibleId, "kotlin.jvm.PlatformType") ? ar.l.c(ar.k.J, flexibleId, lowerBound.toString(), upperBound.toString()) : proto.l(fq.k.f8999g) ? new wp.h(lowerBound, upperBound) : yq.c.e(lowerBound, upperBound);
    }
}
