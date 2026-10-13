package hs;

import android.os.SystemClock;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import w3.q;

/* loaded from: classes3.dex */
public final class f implements ns.d {
    public static final Object[] a = new Object[0];

    /* renamed from: b, reason: collision with root package name */
    public static final Method f10248b;

    static {
        Method method = null;
        try {
            Method method2 = SystemClock.class.getMethod("elapsedRealtimeNanos", null);
            method2.invoke(null, null);
            method = method2;
        } catch (IllegalAccessException | NoSuchMethodException | RuntimeException | InvocationTargetException unused) {
        }
        f10248b = method;
    }

    @Override // ns.d
    public final long a() {
        Method method = f10248b;
        if (method != null) {
            try {
                return ((Long) method.invoke(null, a)).longValue();
            } catch (IllegalAccessException e9) {
                e9.printStackTrace(System.err);
            } catch (InvocationTargetException e10) {
                e10.printStackTrace(System.err);
            }
        }
        return q.B(SystemClock.elapsedRealtime(), 1000000L);
    }

    @Override // ns.d
    public final String b() {
        return "Dalvik";
    }
}
