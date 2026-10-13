package lp;

import java.util.List;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class e extends m implements ip.r0 {
    public static final /* synthetic */ KProperty[] G = {com.discord.chat.bridge.botuikit.a.o(e.class, "constructors", "getConstructors()Ljava/util/Collection;", 0)};
    public List E;
    public final d F;

    /* renamed from: x, reason: collision with root package name */
    public final xq.o f14135x;

    /* renamed from: y, reason: collision with root package name */
    public final ip.p f14136y;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public e(xq.o storageManager, ip.l containingDeclaration, jp.h annotations, hq.e name, ip.p visibilityImpl) {
        super(containingDeclaration, annotations, name, sourceElement);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(name, "name");
        ip.p0 sourceElement = ip.o0.f12151g;
        Intrinsics.checkNotNullParameter(sourceElement, "sourceElement");
        Intrinsics.checkNotNullParameter(visibilityImpl, "visibilityImpl");
        this.f14135x = storageManager;
        this.f14136y = visibilityImpl;
        ((xq.l) storageManager).b(new cp.d0(10, this));
        this.F = new d(this);
    }

    @Override // ip.j
    public final boolean A() {
        return z0.c(((wq.t) this).D0(), new aq.a(6, this), null);
    }

    @Override // lp.m
    /* renamed from: A0 */
    public final ip.m a() {
        Intrinsics.checkNotNull(this, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.TypeAliasDescriptor");
        return this;
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.i a() {
        Intrinsics.checkNotNull(this, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.TypeAliasDescriptor");
        return this;
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) ((ha.l) visitor).f9613d;
        hVar.getClass();
        hVar.x(builder, this, null);
        ip.p pVar = this.f14136y;
        Intrinsics.checkNotNullExpressionValue(pVar, "getVisibility(...)");
        hVar.g0(pVar, builder);
        hVar.K(this, builder);
        builder.append(hVar.I("typealias"));
        builder.append(" ");
        hVar.P(this, builder, true);
        List l6 = l();
        Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
        hVar.c0(builder, l6, false);
        hVar.z(this, builder);
        builder.append(" = ");
        builder.append(hVar.X(((wq.t) this).D0()));
        return Unit.a;
    }

    @Override // ip.y
    public final ip.p getVisibility() {
        return this.f14136y;
    }

    @Override // ip.y
    public final boolean isExternal() {
        return false;
    }

    @Override // ip.j
    public final List l() {
        List list = this.E;
        if (list != null) {
            return list;
        }
        Intrinsics.throwUninitializedPropertyAccessException("declaredTypeParametersImpl");
        return null;
    }

    @Override // ip.i
    public final yq.p0 n() {
        return this.F;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // lp.l, bq.b
    public final String toString() {
        return "typealias " + getName().b();
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.l a() {
        Intrinsics.checkNotNull(this, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.TypeAliasDescriptor");
        return this;
    }
}
