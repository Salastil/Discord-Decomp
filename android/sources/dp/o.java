package dp;

import java.lang.reflect.Field;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o extends q implements f {
    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        d(args);
        ((Field) this.a).set(null, kotlin.collections.x.B(args));
        return Unit.a;
    }
}
