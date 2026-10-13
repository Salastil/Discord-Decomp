package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class q0 extends u0 {

    /* renamed from: b, reason: collision with root package name */
    public static final f f21064b = new f();

    @Override // yq.u0
    public final s0 e(y key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return h(key.r0());
    }

    public abstract s0 h(p0 p0Var);
}
