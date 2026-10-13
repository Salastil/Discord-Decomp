package kotlin.collections;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public class c0 extends b0 {
    public static IntRange e(Collection collection) {
        Intrinsics.checkNotNullParameter(collection, "<this>");
        return new IntRange(0, collection.size() - 1, 1);
    }

    public static int f(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        return list.size() - 1;
    }

    public static List g(Object... elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return elements.length > 0 ? u.b(elements) : m0.f13512d;
    }

    public static List h(Object obj) {
        return obj != null ? b0.c(obj) : m0.f13512d;
    }

    public static ArrayList i(Object... elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        return elements.length == 0 ? new ArrayList() : new ArrayList(new p(elements, true));
    }

    public static final List j(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        int size = list.size();
        return size != 0 ? size != 1 ? list : b0.c(list.get(0)) : m0.f13512d;
    }

    public static void k() {
        throw new ArithmeticException("Index overflow has happened.");
    }
}
