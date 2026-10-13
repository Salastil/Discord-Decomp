package dp;

import java.lang.reflect.Field;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends q implements f {

    /* renamed from: g, reason: collision with root package name */
    public final Object f7663g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(Field field, boolean z5, Object obj) {
        super(field, z5, false);
        Intrinsics.checkNotNullParameter(field, "field");
        this.f7663g = obj;
    }

    @Override // dp.q, dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        d(args);
        ((Field) this.a).set(this.f7663g, kotlin.collections.x.s(args));
        return Unit.a;
    }
}
