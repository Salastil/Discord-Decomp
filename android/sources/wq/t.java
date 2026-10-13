package wq;

import cq.u0;
import ip.o0;
import ip.p0;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;
import yq.c1;
import yq.k0;
import yq.w0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class t extends lp.e implements l {
    public final u0 H;
    public final eq.g I;
    public final a4.i J;
    public final eq.h K;
    public final k L;
    public c0 M;
    public c0 N;
    public List O;
    public c0 P;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t(xq.o storageManager, ip.l containingDeclaration, jp.h annotations, hq.e name, ip.p visibility, u0 proto, eq.g nameResolver, a4.i typeTable, eq.h versionRequirementTable, k kVar) {
        super(storageManager, containingDeclaration, annotations, name, visibility);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(versionRequirementTable, "versionRequirementTable");
        p0 NO_SOURCE = o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        this.H = proto;
        this.I = nameResolver;
        this.J = typeTable;
        this.K = versionRequirementTable;
        this.L = kVar;
    }

    public final ip.f B0() {
        if (yq.c.j(C0())) {
            return null;
        }
        ip.i a = C0().r0().a();
        if (a instanceof ip.f) {
            return (ip.f) a;
        }
        return null;
    }

    public final c0 C0() {
        c0 c0Var = this.N;
        if (c0Var != null) {
            return c0Var;
        }
        Intrinsics.throwUninitializedPropertyAccessException("expandedType");
        return null;
    }

    public final c0 D0() {
        c0 c0Var = this.M;
        if (c0Var != null) {
            return c0Var;
        }
        Intrinsics.throwUninitializedPropertyAccessException("underlyingType");
        return null;
    }

    public final void E0(List declaredTypeParameters, c0 underlyingType, c0 expandedType) {
        rq.o oVar;
        c0 w5;
        Intrinsics.checkNotNullParameter(declaredTypeParameters, "declaredTypeParameters");
        Intrinsics.checkNotNullParameter(underlyingType, "underlyingType");
        Intrinsics.checkNotNullParameter(expandedType, "expandedType");
        Intrinsics.checkNotNullParameter(declaredTypeParameters, "declaredTypeParameters");
        this.E = declaredTypeParameters;
        this.M = underlyingType;
        this.N = expandedType;
        this.O = ta.a.m(this);
        ip.f B0 = B0();
        if (B0 == null || (oVar = B0.n0()) == null) {
            oVar = rq.n.f17557b;
        }
        rq.o oVar2 = oVar;
        aq.a aVar = new aq.a(7, this);
        ar.i iVar = z0.a;
        if (ar.l.f(this)) {
            w5 = ar.l.c(ar.k.H, toString());
        } else {
            yq.p0 n6 = n();
            if (n6 == null) {
                z0.a(12);
                throw null;
            }
            List d6 = z0.d(((lp.d) n6).getParameters());
            k0.f21045e.getClass();
            w5 = yq.c.w(k0.f21046i, n6, d6, false, oVar2, aVar);
        }
        Intrinsics.checkNotNullExpressionValue(w5, "makeUnsubstitutedType(...)");
        this.P = w5;
    }

    @Override // wq.l
    public final a4.i I() {
        return this.J;
    }

    @Override // wq.l
    public final eq.g Q() {
        return this.I;
    }

    @Override // wq.l
    public final k R() {
        return this.L;
    }

    @Override // ip.q0
    public final ip.m c(w0 substitutor) {
        Intrinsics.checkNotNullParameter(substitutor, "substitutor");
        if (substitutor.a.f()) {
            return this;
        }
        ip.l h6 = h();
        Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
        jp.h annotations = getAnnotations();
        Intrinsics.checkNotNullExpressionValue(annotations, "<get-annotations>(...)");
        hq.e name = getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        t tVar = new t(this.f14135x, h6, annotations, name, this.f14136y, this.H, this.I, this.J, this.K, this.L);
        List l6 = l();
        c0 D0 = D0();
        c1 c1Var = c1.f21013i;
        y h7 = substitutor.h(D0, c1Var);
        Intrinsics.checkNotNullExpressionValue(h7, "safeSubstitute(...)");
        c0 b10 = yq.c.b(h7);
        y h10 = substitutor.h(C0(), c1Var);
        Intrinsics.checkNotNullExpressionValue(h10, "safeSubstitute(...)");
        tVar.E0(l6, b10, yq.c.b(h10));
        return tVar;
    }

    @Override // ip.i
    public final c0 k() {
        c0 c0Var = this.P;
        if (c0Var != null) {
            return c0Var;
        }
        Intrinsics.throwUninitializedPropertyAccessException("defaultTypeImpl");
        return null;
    }

    @Override // wq.l
    public final iq.a u() {
        return this.H;
    }
}
