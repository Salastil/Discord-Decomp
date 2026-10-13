package np;

import java.util.Set;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {
    public static final Set a;

    static {
        Class[] elements = {Integer.class, Character.class, Byte.class, Long.class, Short.class, Boolean.class, Double.class, Float.class, int[].class, char[].class, byte[].class, long[].class, short[].class, boolean[].class, double[].class, float[].class, Class.class, String.class};
        Intrinsics.checkNotNullParameter(elements, "elements");
        a = x.J(elements);
    }
}
