package dp;

import java.lang.reflect.Method;
import java.lang.reflect.Type;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* loaded from: classes3.dex */
public final class t extends q implements f {

    /* renamed from: g, reason: collision with root package name */
    public final boolean f7668g;

    /* renamed from: h, reason: collision with root package name */
    public final Object f7669h;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public t(Method method, boolean z5, Object obj) {
        super(method, false, (Type[]) (r0.length <= 1 ? new Type[0] : kotlin.collections.u.j(r0, 1, r0.length)));
        Intrinsics.checkNotNullParameter(method, "method");
        Type[] genericParameterTypes = method.getGenericParameterTypes();
        Intrinsics.checkNotNullExpressionValue(genericParameterTypes, "getGenericParameterTypes(...)");
        this.f7668g = z5;
        this.f7669h = obj;
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        SpreadBuilder spreadBuilder = new SpreadBuilder(2);
        spreadBuilder.add(this.f7669h);
        spreadBuilder.addSpread(args);
        return f(null, spreadBuilder.toArray(new Object[spreadBuilder.size()]));
    }
}
