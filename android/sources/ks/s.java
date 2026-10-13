package ks;

import java.io.Serializable;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class s extends e implements Comparable, Serializable {
    public abstract int i(s sVar);

    public abstract r j();

    public final u k(Object obj) {
        u c6;
        r j = j();
        Map map = j.f13686w;
        if (obj == null) {
            throw new NullPointerException("Missing chronological unit.");
        }
        if (map.containsKey(obj)) {
            return (u) map.get(obj);
        }
        if ((obj instanceof b) && (c6 = ((b) b.class.cast(obj)).c(j)) != null) {
            return c6;
        }
        StringBuilder sb2 = new StringBuilder("Cannot find any rule for chronological unit \"");
        sb2.append(obj instanceof Enum ? ((Enum) Enum.class.cast(obj)).name() : obj.toString());
        sb2.append("\" in: ");
        sb2.append(j.f13682d.getName());
        throw new m(sb2.toString());
    }

    public final s l(long j, Object obj) {
        if (j == 0) {
            return (s) f();
        }
        try {
            return (s) k(obj).a(f(), j);
        } catch (IllegalArgumentException e9) {
            ArithmeticException arithmeticException = new ArithmeticException("Result beyond boundaries of time axis.");
            arithmeticException.initCause(e9);
            throw arithmeticException;
        }
    }
}
