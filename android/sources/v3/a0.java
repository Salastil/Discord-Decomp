package v3;

import android.content.Context;
import androidx.work.WorkerParameters;

/* loaded from: classes.dex */
public final class a0 {
    public static final String a = p.f("WorkerFactory");

    public static o a(Context context, String str, WorkerParameters workerParameters) {
        Class cls;
        String str2 = a;
        o oVar = null;
        try {
            cls = Class.forName(str).asSubclass(o.class);
        } catch (Throwable th2) {
            p.d().c(str2, "Invalid class: " + str, th2);
            cls = null;
        }
        if (cls != null) {
            try {
                oVar = (o) cls.getDeclaredConstructor(Context.class, WorkerParameters.class).newInstance(context, workerParameters);
            } catch (Throwable th3) {
                p.d().c(str2, "Could not instantiate " + str, th3);
            }
        }
        if (oVar == null || !oVar.f19209v) {
            return oVar;
        }
        throw new IllegalStateException(s4.h.g("WorkerFactory (", a0.class.getName(), ") returned an instance of a ListenableWorker (", str, ") which has already been invoked. createWorker() must always return a new instance of a ListenableWorker."));
    }
}
