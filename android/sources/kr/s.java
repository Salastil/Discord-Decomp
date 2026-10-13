package kr;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.collections.x;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public class s extends p {
    public static boolean e(Sequence sequence, Object obj) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Iterator it = sequence.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            Object next = it.next();
            if (i5 < 0) {
                c0.k();
                throw null;
            }
            if (Intrinsics.areEqual(obj, next)) {
                break;
            }
            i5++;
        }
        return i5 >= 0;
    }

    public static int f(Sequence sequence) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Iterator it = sequence.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            it.next();
            i5++;
            if (i5 < 0) {
                throw new ArithmeticException("Count overflow has happened.");
            }
        }
        return i5;
    }

    public static Sequence g(Sequence sequence, int i5) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        if (i5 >= 0) {
            return i5 == 0 ? sequence : sequence instanceof c ? ((c) sequence).a(i5) : new b(sequence, i5);
        }
        throw new IllegalArgumentException(s4.h.e(i5, "Requested element count ", " is less than zero.").toString());
    }

    public static e h(Sequence sequence, Function1 predicate) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        return new e(sequence, predicate, 0);
    }

    public static g i(Sequence sequence, Function1 predicate) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        return new g(sequence, true, predicate);
    }

    public static g j(Sequence sequence, Function1 predicate) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        return new g(sequence, false, predicate);
    }

    public static Object k(Sequence sequence) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Iterator it = sequence.iterator();
        if (it.hasNext()) {
            return it.next();
        }
        return null;
    }

    public static h l(Sequence sequence, Function1 transform) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(transform, "transform");
        return new h(sequence, transform, q.f13655d);
    }

    public static String m(Sequence sequence, String separator) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(separator, "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder buffer = new StringBuilder();
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(separator, "separator");
        Intrinsics.checkNotNullParameter("", "prefix");
        Intrinsics.checkNotNullParameter("", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        buffer.append((CharSequence) "");
        int i5 = 0;
        for (Object obj : sequence) {
            i5++;
            if (i5 > 1) {
                buffer.append((CharSequence) separator);
            }
            kotlin.text.q.a(buffer, obj, null);
        }
        buffer.append((CharSequence) "");
        return buffer.toString();
    }

    public static t n(Sequence sequence, Function1 transform) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(transform, "transform");
        return new t(sequence, transform);
    }

    public static g o(Sequence sequence, Function1 transform) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Intrinsics.checkNotNullParameter(transform, "transform");
        t tVar = new t(sequence, transform);
        Intrinsics.checkNotNullParameter(tVar, "<this>");
        g j = j(tVar, new n(2));
        Intrinsics.checkNotNull(j, "null cannot be cast to non-null type kotlin.sequences.Sequence<T of kotlin.sequences.SequencesKt___SequencesKt.filterNotNull>");
        return j;
    }

    public static h p(t tVar, Object obj) {
        Intrinsics.checkNotNullParameter(tVar, "<this>");
        Object[] elements = {obj};
        Intrinsics.checkNotNullParameter(elements, "elements");
        Sequence[] elements2 = {tVar, x.o(elements)};
        Intrinsics.checkNotNullParameter(elements2, "elements");
        Sequence o6 = x.o(elements2);
        Intrinsics.checkNotNullParameter(o6, "<this>");
        return o.b(o6, new cs.p(29));
    }

    public static List q(Sequence sequence) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        Iterator it = sequence.iterator();
        if (!it.hasNext()) {
            return m0.f13512d;
        }
        Object next = it.next();
        if (!it.hasNext()) {
            return b0.c(next);
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(next);
        while (it.hasNext()) {
            arrayList.add(it.next());
        }
        return arrayList;
    }
}
