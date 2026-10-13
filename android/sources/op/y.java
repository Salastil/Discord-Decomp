package op;

import java.lang.reflect.Type;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y extends a0 implements yp.d {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final m0 f16173b;

    public y(Class reflectType) {
        Intrinsics.checkNotNullParameter(reflectType, "reflectType");
        this.a = reflectType;
        this.f16173b = m0.f13512d;
    }

    @Override // op.a0
    public final Type b() {
        return this.a;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return this.f16173b;
    }
}
