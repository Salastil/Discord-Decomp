package dp;

import java.lang.reflect.Field;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j extends m implements f {

    /* renamed from: e, reason: collision with root package name */
    public final Object f7661e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(Field field, Object obj) {
        super(field, false);
        Intrinsics.checkNotNullParameter(field, "field");
        this.f7661e = obj;
    }

    @Override // dp.m, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        m3.n.t(this, args);
        return ((Field) this.a).get(this.f7661e);
    }
}
