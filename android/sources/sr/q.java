package sr;

import android.os.Looper;
import java.util.Arrays;
import java.util.Iterator;
import java.util.ServiceConfigurationError;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class q {
    public static final or.d a;

    static {
        String str;
        int i5 = w.a;
        Object obj = null;
        try {
            str = System.getProperty("kotlinx.coroutines.fast.service.loader");
        } catch (SecurityException unused) {
            str = null;
        }
        if (str != null) {
            Boolean.parseBoolean(str);
        }
        try {
            Iterator it = Arrays.asList(new or.a()).iterator();
            Intrinsics.checkNotNullParameter(it, "<this>");
            kotlin.collections.w wVar = new kotlin.collections.w(4, it);
            Intrinsics.checkNotNullParameter(wVar, "<this>");
            Iterator it2 = kr.s.q(new kr.a(wVar)).iterator();
            if (it2.hasNext()) {
                obj = it2.next();
                if (it2.hasNext()) {
                    ((or.a) obj).getClass();
                    do {
                        ((or.a) it2.next()).getClass();
                    } while (it2.hasNext());
                }
            }
            if (((or.a) obj) == null) {
                throw new IllegalStateException("Module with the Main dispatcher is missing. Add dependency providing the Main dispatcher, e.g. 'kotlinx-coroutines-android' and ensure it has the same version as 'kotlinx-coroutines-core'");
            }
            Looper mainLooper = Looper.getMainLooper();
            if (mainLooper == null) {
                throw new IllegalStateException("The main looper is not available");
            }
            a = new or.d(or.e.a(mainLooper), false);
        } catch (Throwable th2) {
            throw new ServiceConfigurationError(th2.getMessage(), th2);
        }
    }
}
