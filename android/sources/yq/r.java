package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r extends u0 {

    /* renamed from: b, reason: collision with root package name */
    public final u0 f21065b;

    /* renamed from: c, reason: collision with root package name */
    public final u0 f21066c;

    public r(u0 u0Var, u0 u0Var2) {
        this.f21065b = u0Var;
        this.f21066c = u0Var2;
    }

    @Override // yq.u0
    public final boolean a() {
        return this.f21065b.a() || this.f21066c.a();
    }

    @Override // yq.u0
    public final boolean b() {
        return this.f21065b.b() || this.f21066c.b();
    }

    @Override // yq.u0
    public final jp.h d(jp.h annotations) {
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        return this.f21066c.d(this.f21065b.d(annotations));
    }

    @Override // yq.u0
    public final s0 e(y key) {
        Intrinsics.checkNotNullParameter(key, "key");
        s0 e9 = this.f21065b.e(key);
        return e9 == null ? this.f21066c.e(key) : e9;
    }

    @Override // yq.u0
    public final y g(y topLevelType, c1 position) {
        Intrinsics.checkNotNullParameter(topLevelType, "topLevelType");
        Intrinsics.checkNotNullParameter(position, "position");
        return this.f21066c.g(this.f21065b.g(topLevelType, position), position);
    }
}
