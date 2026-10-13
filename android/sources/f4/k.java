package f4;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.util.Log;
import java.lang.reflect.Method;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import v3.z;

/* loaded from: classes.dex */
public abstract class k {
    public static final String a;

    static {
        String f2 = v3.p.f("ProcessUtils");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"ProcessUtils\")");
        a = f2;
    }

    public static final boolean a(Context context, v3.b configuration) {
        String str;
        Object obj;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        if (Build.VERSION.SDK_INT >= 28) {
            str = a.a.a();
        } else {
            str = null;
            try {
                Method declaredMethod = Class.forName("android.app.ActivityThread", false, z.class.getClassLoader()).getDeclaredMethod("currentProcessName", null);
                declaredMethod.setAccessible(true);
                Object invoke = declaredMethod.invoke(null, null);
                Intrinsics.checkNotNull(invoke);
                if (invoke instanceof String) {
                    str = (String) invoke;
                }
            } catch (Throwable th2) {
                if (v3.p.d().a <= 3) {
                    Log.d(a, "Unable to check ActivityThread for processName", th2);
                }
            }
            int myPid = Process.myPid();
            Object systemService = context.getSystemService("activity");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
            List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) systemService).getRunningAppProcesses();
            if (runningAppProcesses != null) {
                Iterator<T> it = runningAppProcesses.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        obj = null;
                        break;
                    }
                    obj = it.next();
                    if (((ActivityManager.RunningAppProcessInfo) obj).pid == myPid) {
                        break;
                    }
                }
                ActivityManager.RunningAppProcessInfo runningAppProcessInfo = (ActivityManager.RunningAppProcessInfo) obj;
                if (runningAppProcessInfo != null) {
                    str = runningAppProcessInfo.processName;
                }
            }
        }
        configuration.getClass();
        return Intrinsics.areEqual(str, context.getApplicationInfo().processName);
    }
}
