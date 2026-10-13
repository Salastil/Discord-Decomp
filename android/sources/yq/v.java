package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends u0 {

    /* renamed from: b, reason: collision with root package name */
    public final ip.s0[] f21072b;

    /* renamed from: c, reason: collision with root package name */
    public final s0[] f21073c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f21074d;

    public v(ip.s0[] parameters, s0[] arguments, boolean z5) {
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.f21072b = parameters;
        this.f21073c = arguments;
        this.f21074d = z5;
        int length = parameters.length;
        int length2 = arguments.length;
    }

    @Override // yq.u0
    public final boolean b() {
        return this.f21074d;
    }

    @Override // yq.u0
    public final s0 e(y key) {
        Intrinsics.checkNotNullParameter(key, "key");
        ip.i a = key.r0().a();
        ip.s0 s0Var = a instanceof ip.s0 ? (ip.s0) a : null;
        if (s0Var != null) {
            int index = s0Var.getIndex();
            ip.s0[] s0VarArr = this.f21072b;
            if (index < s0VarArr.length && Intrinsics.areEqual(s0VarArr[index].n(), s0Var.n())) {
                return this.f21073c[index];
            }
        }
        return null;
    }

    @Override // yq.u0
    public final boolean f() {
        return this.f21073c.length == 0;
    }
}
