package cp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends zk.a {
    public final Method j;
    public final Method k;

    public l(Method getterMethod, Method method) {
        Intrinsics.checkNotNullParameter(getterMethod, "getterMethod");
        this.j = getterMethod;
        this.k = method;
    }

    @Override // zk.a
    public final String d() {
        return a5.k0.d(this.j);
    }
}
