package dp;

import java.lang.reflect.Method;
import java.util.Arrays;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x extends z implements f {

    /* renamed from: d, reason: collision with root package name */
    public final Object f7675d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x(Method unboxMethod, Object obj) {
        super(unboxMethod, m0.f13512d);
        Intrinsics.checkNotNullParameter(unboxMethod, "unboxMethod");
        this.f7675d = obj;
    }

    @Override // dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        Intrinsics.checkNotNullParameter(args, "args");
        return this.a.invoke(this.f7675d, Arrays.copyOf(args, args.length));
    }
}
