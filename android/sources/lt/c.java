package lt;

import android.content.Context;
import android.os.Build;
import android.util.Log;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes.dex */
public abstract class c {
    public static d a;

    /* JADX WARN: Removed duplicated region for block: B:16:0x0027 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static d a(Context context, b bVar) {
        d dVar;
        boolean z5;
        synchronized (c.class) {
            if (a == null && Build.VERSION.SDK_INT >= 30) {
                if (bVar != b.f14267w && bVar != b.f14265i) {
                    z5 = false;
                    if (d.a(context).getBoolean("android.net.http.EnableTelemetry", z5)) {
                        try {
                            d dVar2 = new d(1);
                            new AtomicInteger();
                            a = dVar2;
                        } catch (Exception e9) {
                            Log.e("c", "Exception creating an instance of CronetLoggerImpl", e9);
                        }
                    }
                }
                z5 = true;
                if (d.a(context).getBoolean("android.net.http.EnableTelemetry", z5)) {
                }
            }
            if (a == null) {
                a = new d(0);
            }
            dVar = a;
        }
        return dVar;
    }
}
