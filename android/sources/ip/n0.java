package ip;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class n0 {
    public final lp.b a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f12149b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.i f12150c;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f12148e = {com.discord.chat.bridge.botuikit.a.o(n0.class, "scopeForOwnerModule", "getScopeForOwnerModule()Lorg/jetbrains/kotlin/resolve/scopes/MemberScope;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public static final p0 f12147d = new p0(6);

    public n0(lp.b bVar, xq.o oVar, Function1 function1) {
        this.a = bVar;
        this.f12149b = function1;
        cp.d0 d0Var = new cp.d0(7, this);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        this.f12150c = new xq.i(lVar, d0Var);
    }

    public final rq.o a(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        a0 moduleDescriptor = oq.e.j(this.a);
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        return (rq.o) ys.d.O(this.f12150c, f12148e[0]);
    }
}
