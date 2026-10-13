package lp;

import java.util.Collection;
import java.util.List;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 extends l implements ip.a0 {
    public k2.r E;
    public ip.i0 F;
    public final boolean G;
    public final xq.e H;
    public final fo.u I;

    /* renamed from: v, reason: collision with root package name */
    public final xq.l f14123v;

    /* renamed from: w, reason: collision with root package name */
    public final fp.i f14124w;

    /* renamed from: x, reason: collision with root package name */
    public final kotlin.collections.n0 f14125x;

    /* renamed from: y, reason: collision with root package name */
    public final f0 f14126y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a0(hq.e moduleName, xq.l storageManager, fp.i builtIns, int i5) {
        super(jp.g.a, moduleName);
        kotlin.collections.n0 capabilities = v0.d();
        Intrinsics.checkNotNullParameter(moduleName, "moduleName");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        Intrinsics.checkNotNullParameter(capabilities, "capabilities");
        this.f14123v = storageManager;
        this.f14124w = builtIns;
        if (!moduleName.f10210e) {
            throw new IllegalArgumentException("Module name must be special: " + moduleName);
        }
        this.f14125x = capabilities;
        f0.a.getClass();
        d0(d0.f14134b);
        this.f14126y = e0.f14137b;
        this.G = true;
        this.H = storageManager.c(new aq.a(9, this));
        this.I = fo.l.a(new fp.l(this, 2));
    }

    public final void A0() {
        if (this.G) {
            return;
        }
        a5.n nVar = ip.x.a;
        Intrinsics.checkNotNullParameter(this, "<this>");
        d0(ip.x.a);
        String message = "Accessing invalid module descriptor " + this;
        Intrinsics.checkNotNullParameter(message, "message");
        throw new hc.h0(message);
    }

    @Override // ip.a0
    public final boolean B(ip.a0 targetModule) {
        Intrinsics.checkNotNullParameter(targetModule, "targetModule");
        if (Intrinsics.areEqual(this, targetModule)) {
            return true;
        }
        k2.r rVar = this.E;
        Intrinsics.checkNotNull(rVar);
        return CollectionsKt.E((Set) rVar.f13143i, targetModule) || c0().contains(targetModule) || targetModule.c0().contains(this);
    }

    public final void B0(a0... descriptors) {
        Intrinsics.checkNotNullParameter(descriptors, "descriptors");
        List descriptors2 = kotlin.collections.x.H(descriptors);
        Intrinsics.checkNotNullParameter(descriptors2, "descriptors");
        kotlin.collections.o0 friends = kotlin.collections.o0.f13515d;
        Intrinsics.checkNotNullParameter(descriptors2, "descriptors");
        Intrinsics.checkNotNullParameter(friends, "friends");
        k2.r dependencies = new k2.r(descriptors2, friends, kotlin.collections.m0.f13512d, friends);
        Intrinsics.checkNotNullParameter(dependencies, "dependencies");
        this.E = dependencies;
    }

    @Override // ip.a0
    public final ip.j0 D(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        A0();
        return (ip.j0) this.H.invoke(fqName);
    }

    @Override // ip.a0
    public final List c0() {
        k2.r rVar = this.E;
        if (rVar != null) {
            return (List) rVar.f13144v;
        }
        StringBuilder sb2 = new StringBuilder("Dependencies of module ");
        String str = getName().f10209d;
        Intrinsics.checkNotNullExpressionValue(str, "toString(...)");
        sb2.append(str);
        sb2.append(" were not set");
        throw new AssertionError(sb2.toString());
    }

    @Override // ip.a0
    public final Object d0(a5.n capability) {
        Intrinsics.checkNotNullParameter(capability, "capability");
        this.f14125x.getClass();
        return null;
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        ((jq.h) ((ha.l) visitor).f9613d).P(this, builder, true);
        return Unit.a;
    }

    @Override // ip.a0
    public final Collection f(hq.c fqName, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        A0();
        A0();
        return ((k) this.I.getValue()).f(fqName, nameFilter);
    }

    @Override // ip.a0
    public final fp.i g() {
        return this.f14124w;
    }

    @Override // ip.l
    public final ip.l h() {
        return null;
    }

    @Override // lp.l, bq.b
    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(l.z0(this));
        if (!this.G) {
            sb2.append(" !isValid");
        }
        sb2.append(" packageFragmentProvider: ");
        ip.i0 i0Var = this.F;
        sb2.append(i0Var != null ? i0Var.getClass().getSimpleName() : null);
        return sb2.toString();
    }
}
