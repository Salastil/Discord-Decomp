package sr;

import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.ServiceConfigurationError;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class e {
    public static final List a;

    static {
        try {
            Iterator it = Arrays.asList(new or.b()).iterator();
            Intrinsics.checkNotNullParameter(it, "<this>");
            kotlin.collections.w wVar = new kotlin.collections.w(4, it);
            Intrinsics.checkNotNullParameter(wVar, "<this>");
            a = kr.s.q(new kr.a(wVar));
        } catch (Throwable th2) {
            throw new ServiceConfigurationError(th2.getMessage(), th2);
        }
    }
}
