package lp;

import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import yq.w0;

/* loaded from: classes3.dex */
public final class o0 extends t implements n0 {

    /* renamed from: b0, reason: collision with root package name */
    public final xq.o f14169b0;

    /* renamed from: c0, reason: collision with root package name */
    public final ip.r0 f14170c0;

    /* renamed from: d0, reason: collision with root package name */
    public h f14171d0;

    /* renamed from: f0, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f14168f0 = {com.discord.chat.bridge.botuikit.a.o(o0.class, "withDispatchReceiver", "getWithDispatchReceiver()Lorg/jetbrains/kotlin/descriptors/impl/TypeAliasConstructorDescriptor;", 0)};

    /* renamed from: e0, reason: collision with root package name */
    public static final e0 f14167e0 = new e0();

    public o0(xq.o oVar, ip.r0 r0Var, h hVar, n0 n0Var, jp.h hVar2, ip.c cVar, ip.o0 o0Var) {
        super(hq.g.f10215e, cVar, r0Var, n0Var, o0Var, hVar2);
        this.f14169b0 = oVar;
        this.f14170c0 = r0Var;
        bs.q qVar = new bs.q(10, this, hVar);
        xq.l lVar = (xq.l) oVar;
        lVar.getClass();
        new xq.h(lVar, qVar);
        this.f14171d0 = hVar;
    }

    @Override // lp.t
    public final t D0(hq.e eVar, ip.c kind, ip.l newOwner, ip.v vVar, ip.o0 source, jp.h annotations) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(source, "source");
        ip.c cVar = ip.c.f12123d;
        if (kind != cVar) {
            ip.c cVar2 = ip.c.f12126v;
        }
        return new o0(this.f14169b0, this.f14170c0, this.f14171d0, this, annotations, cVar, source);
    }

    @Override // lp.t, ip.d
    public final ip.d L(ip.f newOwner, ip.z modality, ip.p visibility) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(modality, "modality");
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        ip.c kind = ip.c.f12124e;
        Intrinsics.checkNotNullParameter(kind, "kind");
        s H0 = H0(w0.f21077b);
        H0.K(newOwner);
        H0.f14180i = modality;
        H0.D(visibility);
        H0.f14183x = kind;
        H0.J = false;
        sq.d E0 = H0.U.E0(H0);
        Intrinsics.checkNotNull(E0, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.impl.TypeAliasConstructorDescriptor");
        return (n0) E0;
    }

    @Override // lp.t, lp.m, lp.l, ip.l
    /* renamed from: M0, reason: merged with bridge method [inline-methods] */
    public final n0 a() {
        ip.v a = super.a();
        Intrinsics.checkNotNull(a, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.impl.TypeAliasConstructorDescriptor");
        return (n0) a;
    }

    @Override // lp.t, ip.v, ip.q0
    /* renamed from: N0, reason: merged with bridge method [inline-methods] */
    public final o0 c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        ip.v c6 = super.c(substitutor);
        Intrinsics.checkNotNull(c6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.impl.TypeAliasConstructorDescriptorImpl");
        o0 o0Var = (o0) c6;
        yq.y yVar = o0Var.E;
        Intrinsics.checkNotNull(yVar);
        w0 d6 = w0.d(yVar);
        Intrinsics.checkNotNullExpressionValue(d6, "create(...)");
        h c8 = this.f14171d0.A0().c(d6);
        if (c8 == null) {
            return null;
        }
        o0Var.f14171d0 = c8;
        return o0Var;
    }

    @Override // lp.t, ip.b
    public final yq.y getReturnType() {
        yq.y yVar = this.E;
        Intrinsics.checkNotNull(yVar);
        return yVar;
    }

    @Override // lp.m, ip.l
    public final ip.j h() {
        return this.f14170c0;
    }

    @Override // ip.k
    public final boolean r() {
        return this.f14171d0.f14144b0;
    }

    @Override // ip.k
    public final ip.f s() {
        ip.f s2 = this.f14171d0.s();
        Intrinsics.checkNotNullExpressionValue(s2, "getConstructedClass(...)");
        return s2;
    }

    @Override // lp.m, ip.l
    public final ip.l h() {
        return this.f14170c0;
    }
}
