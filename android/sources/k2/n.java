package k2;

import android.os.Trace;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public final class n implements Runnable {
    @Override // java.lang.Runnable
    public final void run() {
        try {
            Method method = f1.e.f8308b;
            Trace.beginSection("EmojiCompat.EmojiCompatInitializer.run");
            if (j.k != null) {
                j.a().c();
            }
            Trace.endSection();
        } catch (Throwable th2) {
            Method method2 = f1.e.f8308b;
            Trace.endSection();
            throw th2;
        }
    }
}
