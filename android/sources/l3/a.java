package l3;

import android.os.Trace;

/* loaded from: classes.dex */
public abstract class a {
    public static void a(int i5, String str) {
        Trace.beginAsyncSection(str, i5);
    }

    public static void b(int i5, String str) {
        Trace.endAsyncSection(str, i5);
    }

    public static boolean c() {
        return Trace.isEnabled();
    }
}
