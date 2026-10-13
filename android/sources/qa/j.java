package qa;

import android.util.SparseIntArray;

/* loaded from: classes3.dex */
public abstract class j {
    public static final SparseIntArray a = new SparseIntArray(0);

    public static final w a() {
        int min = (int) Math.min(Runtime.getRuntime().maxMemory(), 2147483647L);
        return new w(0, min > 16777216 ? (min / 4) * 3 : min / 2, a, -1);
    }
}
