package bg;

import java.util.Comparator;
import java.util.Objects;

/* loaded from: classes3.dex */
public abstract class t0 {
    public static final Comparator a;

    static {
        Comparator comparator;
        try {
            Object[] enumConstants = Class.forName(t0.class.getName().concat("$UnsafeComparator")).getEnumConstants();
            Objects.requireNonNull(enumConstants);
            comparator = (Comparator) enumConstants[0];
        } catch (Throwable unused) {
            comparator = s0.f2991d;
        }
        a = comparator;
    }
}
