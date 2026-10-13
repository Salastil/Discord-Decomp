package zq;

import ip.s0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import yq.b1;
import yq.c0;
import yq.h0;
import yq.o0;
import yq.p0;
import yq.y;

/* loaded from: classes3.dex */
public final class n implements b {

    /* renamed from: d, reason: collision with root package name */
    public static final n f21398d = new n();

    public static /* synthetic */ void a(int i5) {
        Object[] objArr = new Object[3];
        switch (i5) {
            case 1:
            case 4:
                objArr[0] = "b";
                break;
            case 2:
            case 7:
                objArr[0] = "typeCheckingProcedure";
                break;
            case 3:
            default:
                objArr[0] = "a";
                break;
            case 5:
            case 10:
                objArr[0] = "subtype";
                break;
            case 6:
            case 11:
                objArr[0] = "supertype";
                break;
            case 8:
                objArr[0] = "type";
                break;
            case 9:
                objArr[0] = "typeProjection";
                break;
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/types/checker/TypeCheckerProcedureCallbacksImpl";
        switch (i5) {
            case 3:
            case 4:
                objArr[2] = "assertEqualTypeConstructors";
                break;
            case 5:
            case 6:
            case 7:
                objArr[2] = "assertSubtype";
                break;
            case 8:
            case 9:
                objArr[2] = "capture";
                break;
            case 10:
            case 11:
                objArr[2] = "noCorrespondingSupertype";
                break;
            default:
                objArr[2] = "assertEqualTypes";
                break;
        }
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    @Override // zq.b
    public cr.i A(s0 s0Var) {
        return m3.n.R(s0Var);
    }

    @Override // zq.b
    public c0 A0(cr.d dVar) {
        return m3.n.l(dVar);
    }

    @Override // zq.b
    public boolean B(cr.d dVar) {
        return m3.n.h0(dVar);
    }

    @Override // zq.b
    public p0 B0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        c0 l6 = m3.n.l(dVar);
        if (l6 == null) {
            l6 = i0(dVar);
        }
        return m3.n.R0(l6);
    }

    @Override // zq.b
    public c0 D(yq.s sVar) {
        return m3.n.r0(sVar);
    }

    @Override // zq.b
    public c0 D0(yq.s sVar) {
        return m3.n.r0(sVar);
    }

    @Override // zq.b
    public boolean E(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.i(eVar) != null;
    }

    @Override // zq.b
    public boolean E0(cr.h hVar) {
        return m3.n.b0(hVar);
    }

    @Override // zq.b
    public yq.s0 F(cr.d dVar, int i5) {
        return m3.n.H(dVar, i5);
    }

    @Override // zq.b
    public c0 F0(yq.s sVar) {
        return m3.n.T0(sVar);
    }

    @Override // zq.b
    public cr.b G(cr.c cVar) {
        return m3.n.s(cVar);
    }

    @Override // zq.b
    public cr.c I(cr.e eVar) {
        cr.f fVar;
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        yq.o i5 = m3.n.i(eVar);
        if (i5 == null || (fVar = m3.n.w0(i5)) == null) {
            fVar = (cr.f) eVar;
        }
        return m3.n.h(this, fVar);
    }

    @Override // zq.b
    public boolean I0(cr.e eVar) {
        return m3.n.d0(eVar);
    }

    @Override // zq.b
    public c0 J(yq.s sVar) {
        return m3.n.T0(sVar);
    }

    @Override // zq.b
    public yq.s J0(cr.d dVar) {
        return m3.n.k(dVar);
    }

    @Override // zq.b
    public void K(cr.e eVar) {
        m3.n.o0(eVar);
    }

    @Override // zq.b
    public boolean K0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return receiver instanceof zp.f;
    }

    @Override // zq.b
    public c0 L(cr.d dVar) {
        c0 T0;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        yq.s k = m3.n.k(dVar);
        if (k != null && (T0 = m3.n.T0(k)) != null) {
            return T0;
        }
        c0 l6 = m3.n.l(dVar);
        Intrinsics.checkNotNull(l6);
        return l6;
    }

    @Override // zq.b
    public boolean L0(b1 b1Var) {
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        return m3.n.h0(i0(b1Var)) != m3.n.h0(L(b1Var));
    }

    @Override // zq.b
    public boolean M(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        c0 l6 = m3.n.l(eVar);
        return (l6 != null ? I(l6) : null) != null;
    }

    @Override // zq.b
    public boolean P(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.Z(m3.n.R0(eVar));
    }

    @Override // zq.b
    public boolean Q(cr.h hVar) {
        return m3.n.X(hVar);
    }

    @Override // zq.b
    public b1 S(cr.c cVar) {
        return m3.n.s0(cVar);
    }

    @Override // zq.b
    public yq.s0 T(cr.e eVar, int i5) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        if (i5 < 0 || i5 >= m3.n.f(eVar)) {
            return null;
        }
        return m3.n.H(eVar, i5);
    }

    @Override // zq.b
    public cr.d U(cr.d dVar) {
        return m3.n.V0(this, dVar);
    }

    @Override // zq.b
    public yq.s0 V(lq.b bVar) {
        return m3.n.E0(bVar);
    }

    @Override // zq.b
    public s0 W(cr.h hVar, int i5) {
        return m3.n.L(hVar, i5);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // zq.b
    public yq.s0 X(cr.g gVar, int i5) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        if (gVar instanceof cr.f) {
            return m3.n.H((cr.d) gVar, i5);
        }
        if (gVar instanceof cr.a) {
            E e9 = ((cr.a) gVar).get(i5);
            Intrinsics.checkNotNullExpressionValue(e9, "get(...)");
            return (yq.s0) e9;
        }
        throw new IllegalStateException(("unknown type argument list type: " + gVar + ", " + Reflection.getOrCreateKotlinClass(gVar.getClass())).toString());
    }

    @Override // zq.b
    public j Y(cr.c cVar) {
        return m3.n.S0(cVar);
    }

    @Override // zq.b
    public h0 b(cr.d dVar) {
        return m3.n.m(dVar);
    }

    @Override // zq.b
    public boolean b0(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return receiver instanceof lq.a;
    }

    @Override // zq.b
    public void c(cr.e eVar) {
        m3.n.n0(eVar);
    }

    @Override // zq.b
    public b1 c0(ArrayList types) {
        c0 c0Var;
        Intrinsics.checkNotNullParameter(types, "types");
        Intrinsics.checkNotNullParameter(types, "types");
        int size = types.size();
        if (size == 0) {
            throw new IllegalStateException("Expected some types");
        }
        if (size == 1) {
            return (b1) CollectionsKt.Y(types);
        }
        ArrayList arrayList = new ArrayList(d0.l(types, 10));
        Iterator it = types.iterator();
        boolean z5 = false;
        boolean z6 = false;
        while (it.hasNext()) {
            b1 b1Var = (b1) it.next();
            z5 = z5 || yq.c.j(b1Var);
            if (b1Var instanceof c0) {
                c0Var = (c0) b1Var;
            } else {
                if (!(b1Var instanceof yq.s)) {
                    throw new fo.n();
                }
                Intrinsics.checkNotNullParameter(b1Var, "<this>");
                c0Var = ((yq.s) b1Var).f21068e;
                z6 = true;
            }
            arrayList.add(c0Var);
        }
        if (z5) {
            return ar.l.c(ar.k.U, types.toString());
        }
        u uVar = u.a;
        if (!z6) {
            return uVar.b(arrayList);
        }
        ArrayList arrayList2 = new ArrayList(d0.l(types, 10));
        Iterator it2 = types.iterator();
        while (it2.hasNext()) {
            arrayList2.add(yq.c.E((b1) it2.next()));
        }
        return yq.c.e(uVar.b(arrayList), uVar.b(arrayList2));
    }

    @Override // zq.b
    public b1 d(cr.f fVar, cr.f fVar2) {
        return m3.n.D(this, fVar, fVar2);
    }

    @Override // zq.b
    public cr.c e(c0 c0Var) {
        return m3.n.h(this, c0Var);
    }

    @Override // zq.b
    public int e0(cr.d dVar) {
        return m3.n.f(dVar);
    }

    @Override // zq.b
    public Collection f(cr.h hVar) {
        return m3.n.Q0(hVar);
    }

    public cr.d g(cr.d dVar) {
        c0 W0;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        c0 l6 = m3.n.l(dVar);
        return (l6 == null || (W0 = m3.n.W0(l6, true)) == null) ? dVar : W0;
    }

    @Override // zq.b
    public c0 h(cr.e eVar) {
        return m3.n.W0(eVar, true);
    }

    @Override // zq.b
    public boolean h0(cr.h hVar, cr.h hVar2) {
        return m3.n.e(hVar, hVar2);
    }

    @Override // zq.b
    public c0 i(cr.e eVar) {
        return m3.n.W0(eVar, false);
    }

    @Override // zq.b
    public c0 i0(cr.d dVar) {
        c0 r02;
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        yq.s k = m3.n.k(dVar);
        if (k != null && (r02 = m3.n.r0(k)) != null) {
            return r02;
        }
        c0 l6 = m3.n.l(dVar);
        Intrinsics.checkNotNull(l6);
        return l6;
    }

    @Override // zq.b
    public boolean j(cr.h hVar) {
        return m3.n.Z(hVar);
    }

    @Override // zq.b
    public void j0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        yq.s k = m3.n.k(dVar);
        if (k != null) {
            m3.n.j(k);
        }
    }

    @Override // zq.b
    public boolean k(cr.h hVar) {
        return m3.n.a0(hVar);
    }

    @Override // zq.b
    public Collection k0(cr.e eVar) {
        return m3.n.D0(this, eVar);
    }

    @Override // zq.b
    public boolean l(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        c0 l6 = m3.n.l(dVar);
        return (l6 != null ? m3.n.i(l6) : null) != null;
    }

    @Override // zq.b
    public cr.g l0(cr.e eVar) {
        return m3.n.g(eVar);
    }

    public o0 m() {
        return zo.c0.s(false, this, 24);
    }

    @Override // zq.b
    public void m0(cr.e eVar, cr.h constructor) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
    }

    @Override // zq.b
    public boolean o(cr.h hVar) {
        return m3.n.f0(hVar);
    }

    @Override // zq.b
    public b1 p(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        return m3.n.u0(dVar);
    }

    @Override // zq.b
    public boolean p0(cr.d dVar) {
        Intrinsics.checkNotNullParameter(dVar, "<this>");
        return !Intrinsics.areEqual(m3.n.R0(i0(dVar)), m3.n.R0(L(dVar)));
    }

    @Override // zq.b
    public c0 r(y yVar) {
        return m3.n.l(yVar);
    }

    @Override // zq.b
    public b1 r0(yq.s0 s0Var) {
        return m3.n.P(this, s0Var);
    }

    @Override // zq.b
    public boolean s0(cr.e eVar, cr.e eVar2) {
        return m3.n.V(eVar, eVar2);
    }

    @Override // zq.b
    public boolean t(yq.s0 s0Var) {
        return m3.n.m0(s0Var);
    }

    @Override // zq.b
    public c0 t0(cr.e eVar) {
        cr.b bVar = cr.b.f7316d;
        return m3.n.r(eVar);
    }

    @Override // zq.b
    public boolean u(cr.h hVar) {
        return m3.n.g0(hVar);
    }

    @Override // zq.b
    public int u0(cr.h hVar) {
        return m3.n.x0(hVar);
    }

    @Override // zq.b
    public a v(cr.e eVar) {
        return m3.n.P0(this, eVar);
    }

    @Override // zq.b
    public cr.i v0(yq.s0 s0Var) {
        return m3.n.S(s0Var);
    }

    @Override // zq.b
    public boolean w(cr.h hVar) {
        return m3.n.i0(hVar);
    }

    @Override // zq.b
    public p0 w0(cr.e eVar) {
        return m3.n.R0(eVar);
    }

    @Override // zq.b
    public boolean x0(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.f0(m3.n.R0(eVar));
    }

    @Override // zq.b
    public boolean y(cr.c cVar) {
        return m3.n.l0(cVar);
    }

    @Override // zq.b
    public int y0(cr.g gVar) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        if (gVar instanceof cr.e) {
            return m3.n.f((cr.d) gVar);
        }
        if (gVar instanceof cr.a) {
            return ((cr.a) gVar).size();
        }
        throw new IllegalStateException(("unknown type argument list type: " + gVar + ", " + Reflection.getOrCreateKotlinClass(gVar.getClass())).toString());
    }

    @Override // zq.b
    public boolean z(cr.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return m3.n.i0(B0(eVar)) && !m3.n.j0(eVar);
    }

    @Override // zq.b
    public boolean z0(s0 s0Var, cr.h hVar) {
        return m3.n.U(s0Var, hVar);
    }
}
