package dp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s extends q implements f {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(Method method) {
        super(method, false, 4);
        Intrinsics.checkNotNullParameter(method, "method");
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        return f(null, args);
    }
}
