package th;

import java.util.HashMap;

/* loaded from: classes3.dex */
public final class p0 {
    public final HashMap a = new HashMap();

    public final synchronized double a(String str) {
        Double d6 = (Double) this.a.get(str);
        if (d6 == null) {
            return 0.0d;
        }
        return d6.doubleValue();
    }

    public final synchronized void b(String str) {
        this.a.put(str, Double.valueOf(0.0d));
    }
}
