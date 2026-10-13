package ei;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
public abstract class k {
    public static final Object a;

    static {
        Object obj;
        Method method = null;
        try {
            obj = Class.forName("sun.misc.SharedSecrets", false, null).getMethod("getJavaLangAccess", null).invoke(null, null);
        } catch (ThreadDeath e9) {
            throw e9;
        } catch (Throwable unused) {
            obj = null;
        }
        a = obj;
        if (obj != null) {
            try {
                Class.forName("sun.misc.JavaLangAccess", false, null).getMethod("getStackTraceElement", Throwable.class, Integer.TYPE);
            } catch (ThreadDeath e10) {
                throw e10;
            } catch (Throwable unused2) {
            }
        }
        if (obj == null) {
            return;
        }
        try {
            try {
                method = Class.forName("sun.misc.JavaLangAccess", false, null).getMethod("getStackTraceDepth", Throwable.class);
            } catch (ThreadDeath e11) {
                throw e11;
            } catch (Throwable unused3) {
            }
            if (method == null) {
                return;
            }
            method.invoke(obj, new Throwable());
        } catch (IllegalAccessException | UnsupportedOperationException | InvocationTargetException unused4) {
        }
    }
}
