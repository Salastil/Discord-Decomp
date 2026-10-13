package kotlin.collections;

import kotlin.jvm.internal.DefaultConstructorMarker;

/* loaded from: classes3.dex */
public final class c {
    public c(DefaultConstructorMarker defaultConstructorMarker) {
    }

    public static void a(int i5, int i6, int i10) {
        if (i5 < 0 || i6 > i10) {
            StringBuilder q5 = a3.e.q(i5, "startIndex: ", i6, ", endIndex: ", ", size: ");
            q5.append(i10);
            throw new IndexOutOfBoundsException(q5.toString());
        }
        if (i5 > i6) {
            throw new IllegalArgumentException(a3.e.f(i5, i6, "startIndex: ", " > endIndex: "));
        }
    }

    public static void b(int i5, int i6) {
        if (i5 < 0 || i5 >= i6) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, i6, "index: ", ", size: "));
        }
    }

    public static void c(int i5, int i6) {
        if (i5 < 0 || i5 > i6) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, i6, "index: ", ", size: "));
        }
    }

    public static void d(int i5, int i6, int i10) {
        if (i5 < 0 || i6 > i10) {
            StringBuilder q5 = a3.e.q(i5, "fromIndex: ", i6, ", toIndex: ", ", size: ");
            q5.append(i10);
            throw new IndexOutOfBoundsException(q5.toString());
        }
        if (i5 > i6) {
            throw new IllegalArgumentException(a3.e.f(i5, i6, "fromIndex: ", " > toIndex: "));
        }
    }

    public static int e(int i5, int i6) {
        int i10 = i5 + (i5 >> 1);
        if (i10 - i6 < 0) {
            i10 = i6;
        }
        return i10 - 2147483639 > 0 ? i6 > 2147483639 ? Integer.MAX_VALUE : 2147483639 : i10;
    }
}
