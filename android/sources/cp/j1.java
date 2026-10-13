package cp;

import kotlin.reflect.KFunction;

/* loaded from: classes3.dex */
public abstract class j1 extends r implements KFunction {
    @Override // cp.r
    public final h0 c() {
        return j().f6926y;
    }

    @Override // cp.r
    public final dp.g d() {
        return null;
    }

    @Override // cp.r
    public final boolean h() {
        return j().h();
    }

    public abstract ip.l0 i();

    @Override // kotlin.reflect.KFunction
    public final boolean isExternal() {
        return ((lp.g0) i()).f14143y;
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isInfix() {
        i().getClass();
        return false;
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isInline() {
        return ((lp.g0) i()).G;
    }

    @Override // kotlin.reflect.KFunction
    public final boolean isOperator() {
        i().getClass();
        return false;
    }

    @Override // kotlin.reflect.KCallable, kotlin.reflect.KFunction
    public final boolean isSuspend() {
        i().getClass();
        return false;
    }

    public abstract o1 j();
}
