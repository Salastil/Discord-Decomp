package ar;

import ip.m0;
import ip.n;
import ip.o0;
import ip.p;
import ip.q;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import lp.i0;
import lp.j0;
import lp.k0;
import lp.r;
import lp.u;
import yq.w0;
import yq.y;

/* loaded from: classes3.dex */
public final class f implements m0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ i0 f2666d;

    public f() {
        l lVar = l.a;
        a aVar = l.f2693c;
        z zVar = z.f12182v;
        p pVar = q.f12159e;
        b[] bVarArr = b.f2660d;
        i0 C0 = i0.C0(aVar, zVar, pVar, true, hq.e.g("<Error property>"), ip.c.f12123d, o0.f12151g);
        i iVar = l.f2695e;
        kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
        C0.I0(iVar, m0Var, null, null, m0Var);
        this.f2666d = C0;
    }

    @Override // ip.m0
    public final boolean E() {
        return this.f2666d.P;
    }

    @Override // ip.b
    public final Object K(ip.a aVar) {
        throw null;
    }

    @Override // ip.d
    public final ip.d L(ip.f fVar, z zVar, p pVar) {
        i0 L = this.f2666d.L(fVar, zVar, pVar);
        Intrinsics.checkNotNullExpressionValue(L, "copy(...)");
        return L;
    }

    @Override // ip.v0
    public final mq.g M() {
        return this.f2666d.M();
    }

    @Override // ip.b
    public final List P() {
        this.f2666d.P();
        List list = Collections.EMPTY_LIST;
        Intrinsics.checkNotNullExpressionValue(list, "getValueParameters(...)");
        return list;
    }

    @Override // ip.b
    public final u T() {
        return this.f2666d.R;
    }

    @Override // ip.v0
    public final boolean V() {
        return this.f2666d.f14155y;
    }

    @Override // ip.b
    public final u W() {
        return this.f2666d.S;
    }

    @Override // ip.m0
    public final r X() {
        return this.f2666d.X;
    }

    @Override // ip.m0
    public final r Z() {
        return this.f2666d.W;
    }

    @Override // ip.l
    public final m0 a() {
        m0 a = this.f2666d.a();
        Intrinsics.checkNotNullExpressionValue(a, "getOriginal(...)");
        return a;
    }

    @Override // ip.b
    public final List a0() {
        List a0 = this.f2666d.a0();
        Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
        return a0;
    }

    @Override // ip.d
    public final ip.c b() {
        ip.c b10 = this.f2666d.b();
        Intrinsics.checkNotNullExpressionValue(b10, "getKind(...)");
        return b10;
    }

    @Override // ip.v0
    public final boolean b0() {
        return this.f2666d.L;
    }

    @Override // ip.q0
    public final m0 c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        return this.f2666d.c(substitutor);
    }

    @Override // ip.m
    public final o0 d() {
        o0 d6 = this.f2666d.d();
        Intrinsics.checkNotNullExpressionValue(d6, "getSource(...)");
        return d6;
    }

    @Override // ip.y
    public final z e() {
        z e9 = this.f2666d.e();
        Intrinsics.checkNotNullExpressionValue(e9, "getModality(...)");
        return e9;
    }

    @Override // ip.l
    public final Object e0(n nVar, Object obj) {
        i0 i0Var = this.f2666d;
        i0Var.getClass();
        return nVar.I(i0Var, obj);
    }

    @Override // ip.d
    public final void g0(Collection overriddenDescriptors) {
        Intrinsics.checkNotNullParameter(overriddenDescriptors, "overriddenDescriptors");
        this.f2666d.I = overriddenDescriptors;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        jp.h annotations = this.f2666d.getAnnotations();
        Intrinsics.checkNotNullExpressionValue(annotations, "<get-annotations>(...)");
        return annotations;
    }

    @Override // ip.m0
    public final j0 getGetter() {
        return this.f2666d.U;
    }

    @Override // ip.l
    public final hq.e getName() {
        hq.e name = this.f2666d.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        return name;
    }

    @Override // ip.b
    public final y getReturnType() {
        return this.f2666d.getReturnType();
    }

    @Override // ip.m0
    public final k0 getSetter() {
        return this.f2666d.V;
    }

    @Override // ip.u0
    public final y getType() {
        y type = this.f2666d.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        return type;
    }

    @Override // ip.b
    public final List getTypeParameters() {
        List typeParameters = this.f2666d.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        return typeParameters;
    }

    @Override // ip.o, ip.y
    public final p getVisibility() {
        p visibility = this.f2666d.getVisibility();
        Intrinsics.checkNotNullExpressionValue(visibility, "getVisibility(...)");
        return visibility;
    }

    @Override // ip.l
    public final ip.l h() {
        ip.l h6 = this.f2666d.h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        return h6;
    }

    @Override // ip.d, ip.b
    public final Collection i() {
        Collection i5 = this.f2666d.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        return i5;
    }

    @Override // ip.v0
    public final boolean isConst() {
        return this.f2666d.isConst();
    }

    @Override // ip.y
    public final boolean isExternal() {
        return this.f2666d.isExternal();
    }

    @Override // ip.m0
    public final ArrayList m() {
        ArrayList m5 = this.f2666d.m();
        Intrinsics.checkNotNullExpressionValue(m5, "getAccessors(...)");
        return m5;
    }

    @Override // ip.y
    public final boolean o0() {
        this.f2666d.getClass();
        return false;
    }

    @Override // ip.b
    public final boolean w() {
        this.f2666d.getClass();
        return false;
    }

    @Override // ip.y
    public final boolean z() {
        return this.f2666d.N;
    }
}
