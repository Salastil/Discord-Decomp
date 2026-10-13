package dp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r extends q implements f {

    /* renamed from: g, reason: collision with root package name */
    public final Object f7667g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r(Method method, Object obj) {
        super(method, false, 4);
        Intrinsics.checkNotNullParameter(method, "method");
        this.f7667g = obj;
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        return f(this.f7667g, args);
    }
}
