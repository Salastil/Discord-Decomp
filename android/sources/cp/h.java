package cp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends ys.l {

    /* renamed from: b, reason: collision with root package name */
    public final Method f6903b;

    public h(Method method) {
        Intrinsics.checkNotNullParameter(method, "method");
        this.f6903b = method;
    }

    @Override // ys.l
    public final String d() {
        return a5.k0.d(this.f6903b);
    }
}
