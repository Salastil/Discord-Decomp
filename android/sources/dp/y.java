package dp;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y extends z {
    @Override // dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        Object obj = args[0];
        Object[] args2 = args.length <= 1 ? new Object[0] : kotlin.collections.u.j(args, 1, args.length);
        Intrinsics.checkNotNullParameter(args2, "args");
        return this.a.invoke(obj, Arrays.copyOf(args2, args2.length));
    }
}
