package j$.time.chrono;

import java.io.Serializable;

/* loaded from: classes2.dex */
public final class e extends a implements Serializable {
    public static final e a = new e();

    public static boolean a(long j) {
        if ((3 & j) == 0) {
            return j % 100 != 0 || j % 400 == 0;
        }
        return false;
    }
}
