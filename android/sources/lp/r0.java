package lp;

import ip.v0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import yq.w0;

/* loaded from: classes3.dex */
public class r0 extends s0 implements ip.k0, v0 {
    public final boolean E;
    public final boolean F;
    public final boolean G;
    public final yq.y H;
    public final r0 I;

    /* renamed from: y, reason: collision with root package name */
    public final int f14177y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r0(ip.b containingDeclaration, r0 r0Var, int i5, jp.h annotations, hq.e name, yq.y outType, boolean z5, boolean z6, boolean z7, yq.y yVar, ip.o0 source) {
        super(containingDeclaration, annotations, name, outType, source);
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(outType, "outType");
        Intrinsics.checkNotNullParameter(source, "source");
        this.f14177y = i5;
        this.E = z5;
        this.F = z6;
        this.G = z7;
        this.H = yVar;
        this.I = r0Var == null ? this : r0Var;
    }

    public r0 B0(gp.f newOwner, hq.e newName, int i5) {
        Intrinsics.checkNotNullParameter(newOwner, "newOwner");
        Intrinsics.checkNotNullParameter(newName, "newName");
        jp.h annotations = getAnnotations();
        Intrinsics.checkNotNullExpressionValue(annotations, "<get-annotations>(...)");
        yq.y type = getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        boolean C0 = C0();
        ip.p0 NO_SOURCE = ip.o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        return new r0(newOwner, null, i5, annotations, newName, type, C0, this.F, this.G, this.H, NO_SOURCE);
    }

    public final boolean C0() {
        if (!this.E) {
            return false;
        }
        ip.b h6 = h();
        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.CallableMemberDescriptor");
        ip.c b10 = ((ip.d) h6).b();
        b10.getClass();
        return b10 != ip.c.f12124e;
    }

    @Override // lp.m, ip.l
    /* renamed from: D0, reason: merged with bridge method [inline-methods] */
    public final ip.b h() {
        ip.l h6 = super.h();
        Intrinsics.checkNotNull(h6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.CallableDescriptor");
        return (ip.b) h6;
    }

    @Override // lp.m, lp.l, ip.l
    /* renamed from: E0, reason: merged with bridge method [inline-methods] */
    public final r0 a() {
        r0 r0Var = this.I;
        return r0Var == this ? this : r0Var.a();
    }

    @Override // ip.v0
    public final /* bridge */ /* synthetic */ mq.g M() {
        return null;
    }

    @Override // ip.v0
    public final boolean V() {
        return false;
    }

    @Override // ip.q0
    public final ip.m c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        if (substitutor.a.f()) {
            return this;
        }
        throw new UnsupportedOperationException();
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        ((jq.h) ((ha.l) visitor).f9613d).e0(this, true, builder, true);
        return Unit.a;
    }

    @Override // ip.o, ip.y
    public final ip.p getVisibility() {
        ip.p LOCAL = ip.q.f12160f;
        Intrinsics.checkNotNullExpressionValue(LOCAL, "LOCAL");
        return LOCAL;
    }

    @Override // ip.b
    public final Collection i() {
        Collection i5 = h().i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        Collection collection = i5;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(collection, 10));
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            arrayList.add((r0) ((ip.b) it.next()).P().get(this.f14177y));
        }
        return arrayList;
    }
}
