package lp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c0 extends m implements ip.f0 {

    /* renamed from: x, reason: collision with root package name */
    public final hq.c f14132x;

    /* renamed from: y, reason: collision with root package name */
    public final String f14133y;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c0(ip.a0 module, hq.c fqName) {
        super(module, jp.g.a, r0.c() ? hq.d.f10205e : r0.f(), ip.o0.f12151g);
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        hq.d dVar = fqName.a;
        this.f14132x = fqName;
        this.f14133y = "package " + fqName + " of " + module;
    }

    @Override // lp.m, ip.l
    /* renamed from: B0, reason: merged with bridge method [inline-methods] */
    public final ip.a0 h() {
        ip.l h6 = super.h();
        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ModuleDescriptor");
        return (ip.a0) h6;
    }

    @Override // lp.m, ip.m
    public ip.o0 d() {
        ip.p0 NO_SOURCE = ip.o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        return NO_SOURCE;
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) ((ha.l) visitor).f9613d;
        hVar.getClass();
        builder.append(hVar.I("package-fragment"));
        String G = hVar.G(this.f14132x.a);
        if (G.length() > 0) {
            builder.append(" ");
            builder.append(G);
        }
        if (hVar.f13052d.n()) {
            builder.append(" in ");
            hVar.P(h(), builder, false);
        }
        return Unit.a;
    }

    @Override // lp.l, bq.b
    public String toString() {
        return this.f14133y;
    }
}
