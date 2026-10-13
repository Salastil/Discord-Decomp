package kotlin.collections;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public class i0 extends h0 {
    public static final int v(int i5, List list) {
        if (i5 >= 0 && i5 <= c0.f(list)) {
            return c0.f(list) - i5;
        }
        StringBuilder r5 = a3.e.r(i5, "Element index ", " must be in range [");
        r5.append(new IntRange(0, c0.f(list), 1));
        r5.append("].");
        throw new IndexOutOfBoundsException(r5.toString());
    }

    public static final int w(int i5, List list) {
        if (i5 >= 0 && i5 <= list.size()) {
            return list.size() - i5;
        }
        StringBuilder r5 = a3.e.r(i5, "Position index ", " must be in range [");
        r5.append(new IntRange(0, list.size(), 1));
        r5.append("].");
        throw new IndexOutOfBoundsException(r5.toString());
    }

    public static z0 x(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        return new z0(list);
    }

    public static x0 y(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        return new x0(list);
    }
}
