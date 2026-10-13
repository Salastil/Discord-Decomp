package f4;

import android.content.Context;
import android.os.PowerManager;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class o {
    public static final String a;

    static {
        String f2 = v3.p.f("WakeLocks");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"WakeLocks\")");
        a = f2;
    }

    public static final PowerManager.WakeLock a(Context context, String tag) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(tag, "tag");
        Object systemService = context.getApplicationContext().getSystemService("power");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
        String k = a3.e.k("WorkManager: ", tag);
        PowerManager.WakeLock wakeLock = ((PowerManager) systemService).newWakeLock(1, k);
        synchronized (p.a) {
        }
        Intrinsics.checkNotNullExpressionValue(wakeLock, "wakeLock");
        return wakeLock;
    }
}
