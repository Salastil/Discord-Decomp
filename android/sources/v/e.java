package v;

import java.util.List;
import s4.h;

/* loaded from: classes.dex */
public abstract class e {
    public static final void a(int i5, List list) {
        int size = list.size();
        if (i5 < 0 || i5 >= size) {
            c(i5, size);
        }
    }

    public static final void b(List list, int i5, int i6) {
        if (i5 > i6) {
            f(i5, i6);
        }
        if (i5 < 0) {
            d(i5);
        }
        if (i6 > list.size()) {
            e(i6, list.size());
        }
    }

    private static final void c(int i5, int i6) {
        throw new IndexOutOfBoundsException(h.d(i5, "Index ", i6, " is out of bounds. The list has ", " elements."));
    }

    private static final void d(int i5) {
        throw new IndexOutOfBoundsException(h.e(i5, "fromIndex (", ") is less than 0."));
    }

    private static final void e(int i5, int i6) {
        throw new IndexOutOfBoundsException("toIndex (" + i5 + ") is more than than the list size (" + i6 + ')');
    }

    private static final void f(int i5, int i6) {
        throw new IllegalArgumentException(h.d(i5, "Indices are out of order. fromIndex (", i6, ") is greater than toIndex (", ")."));
    }
}
