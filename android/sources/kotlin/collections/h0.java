package kotlin.collections;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.RandomAccess;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public class h0 extends g0 {
    public static void o(Collection collection, Iterable elements) {
        Intrinsics.checkNotNullParameter(collection, "<this>");
        Intrinsics.checkNotNullParameter(elements, "elements");
        if (elements instanceof Collection) {
            collection.addAll((Collection) elements);
            return;
        }
        Iterator it = elements.iterator();
        while (it.hasNext()) {
            collection.add(it.next());
        }
    }

    public static void p(Collection collection, Sequence elements) {
        Intrinsics.checkNotNullParameter(collection, "<this>");
        Intrinsics.checkNotNullParameter(elements, "elements");
        Iterator it = elements.iterator();
        while (it.hasNext()) {
            collection.add(it.next());
        }
    }

    public static boolean q(Collection collection, Object[] elements) {
        Intrinsics.checkNotNullParameter(collection, "<this>");
        Intrinsics.checkNotNullParameter(elements, "elements");
        return collection.addAll(u.b(elements));
    }

    public static final boolean r(Iterable iterable, Function1 function1, boolean z5) {
        Iterator it = iterable.iterator();
        boolean z6 = false;
        while (it.hasNext()) {
            if (((Boolean) function1.invoke(it.next())).booleanValue() == z5) {
                it.remove();
                z6 = true;
            }
        }
        return z6;
    }

    public static void s(List list, Function1 predicate) {
        int f2;
        Intrinsics.checkNotNullParameter(list, "<this>");
        Intrinsics.checkNotNullParameter(predicate, "predicate");
        if (!(list instanceof RandomAccess)) {
            Intrinsics.checkNotNull(list, "null cannot be cast to non-null type kotlin.collections.MutableIterable<T of kotlin.collections.CollectionsKt__MutableCollectionsKt.filterInPlace>");
            r(TypeIntrinsics.asMutableIterable(list), predicate, true);
            return;
        }
        int f10 = c0.f(list);
        int i5 = 0;
        if (f10 >= 0) {
            int i6 = 0;
            while (true) {
                Object obj = list.get(i5);
                if (!((Boolean) predicate.invoke(obj)).booleanValue()) {
                    if (i6 != i5) {
                        list.set(i6, obj);
                    }
                    i6++;
                }
                if (i5 == f10) {
                    break;
                } else {
                    i5++;
                }
            }
            i5 = i6;
        }
        if (i5 >= list.size() || i5 > (f2 = c0.f(list))) {
            return;
        }
        while (true) {
            list.remove(f2);
            if (f2 == i5) {
                return;
            } else {
                f2--;
            }
        }
    }

    public static Object t(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        if (list.isEmpty()) {
            return null;
        }
        return list.remove(0);
    }

    public static Object u(ArrayList arrayList) {
        Intrinsics.checkNotNullParameter(arrayList, "<this>");
        if (arrayList.isEmpty()) {
            throw new NoSuchElementException("List is empty.");
        }
        return arrayList.remove(c0.f(arrayList));
    }
}
