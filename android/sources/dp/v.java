package dp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends q {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f7671g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(int i5, Method method) {
        super(method, false, 6);
        this.f7671g = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(method, "method");
                super(method, true, 4);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(method, "method");
                super(method, false, 6);
                break;
            default:
                Intrinsics.checkNotNullParameter(method, "method");
                break;
        }
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        switch (this.f7671g) {
            case 0:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                return f(args[0], args.length <= 1 ? new Object[0] : kotlin.collections.u.j(args, 1, args.length));
            case 1:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                e(kotlin.collections.x.t(args));
                return f(null, args.length <= 1 ? new Object[0] : kotlin.collections.u.j(args, 1, args.length));
            default:
                Intrinsics.checkNotNullParameter(args, "args");
                m3.n.t(this, args);
                return f(null, args);
        }
    }
}
