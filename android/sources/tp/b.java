package tp;

import ip.l;
import ip.o0;
import ip.v;
import java.util.ArrayList;
import kotlin.Pair;
import kotlin.collections.m0;
import lp.h;
import lp.t;
import m3.n;
import yq.y;

/* loaded from: classes3.dex */
public final class b extends h implements a {

    /* renamed from: c0, reason: collision with root package name */
    public Boolean f18686c0;

    /* renamed from: d0, reason: collision with root package name */
    public Boolean f18687d0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(ip.f fVar, b bVar, jp.h hVar, boolean z5, ip.c cVar, o0 o0Var) {
        super(fVar, bVar, hVar, z5, cVar, o0Var);
        if (fVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (cVar == null) {
            v0(2);
            throw null;
        }
        if (o0Var == null) {
            v0(3);
            throw null;
        }
        this.f18686c0 = null;
        this.f18687d0 = null;
    }

    public static b S0(ip.f fVar, jp.h hVar, boolean z5, np.f fVar2) {
        if (fVar != null) {
            return new b(fVar, null, hVar, z5, ip.c.f12123d, fVar2);
        }
        v0(4);
        throw null;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 11 || i5 == 18) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 11 || i5 == 18) ? 2 : 3];
        switch (i5) {
            case 1:
            case 5:
            case 9:
            case 15:
                objArr[0] = "annotations";
                break;
            case 2:
            case 8:
            case 13:
                objArr[0] = "kind";
                break;
            case 3:
            case 6:
            case 10:
                objArr[0] = "source";
                break;
            case 4:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 7:
            case 12:
                objArr[0] = "newOwner";
                break;
            case 11:
            case 18:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaClassConstructorDescriptor";
                break;
            case 14:
                objArr[0] = "sourceElement";
                break;
            case 16:
                objArr[0] = "enhancedValueParameterTypes";
                break;
            case 17:
                objArr[0] = "enhancedReturnType";
                break;
        }
        if (i5 == 11) {
            objArr[1] = "createSubstitutedCopy";
        } else if (i5 != 18) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaClassConstructorDescriptor";
        } else {
            objArr[1] = "enhance";
        }
        switch (i5) {
            case 4:
            case 5:
            case 6:
                objArr[2] = "createJavaConstructor";
                break;
            case 7:
            case 8:
            case 9:
            case 10:
                objArr[2] = "createSubstitutedCopy";
                break;
            case 11:
            case 18:
                break;
            case 12:
            case 13:
            case 14:
            case 15:
                objArr[2] = "createDescriptor";
                break;
            case 16:
            case 17:
                objArr[2] = "enhance";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 11 && i5 != 18) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // lp.h, lp.t
    public final /* bridge */ /* synthetic */ t D0(hq.e eVar, ip.c cVar, l lVar, v vVar, o0 o0Var, jp.h hVar) {
        return T0(lVar, vVar, cVar, hVar, o0Var);
    }

    @Override // lp.t
    public final void J0(boolean z5) {
        this.f18686c0 = Boolean.valueOf(z5);
    }

    @Override // lp.t
    public final void K0(boolean z5) {
        this.f18687d0 = Boolean.valueOf(z5);
    }

    @Override // lp.h
    /* renamed from: M0 */
    public final /* bridge */ /* synthetic */ h D0(hq.e eVar, ip.c cVar, l lVar, v vVar, o0 o0Var, jp.h hVar) {
        return T0(lVar, vVar, cVar, hVar, o0Var);
    }

    public final b T0(l lVar, v vVar, ip.c cVar, jp.h hVar, o0 o0Var) {
        if (lVar == null) {
            v0(7);
            throw null;
        }
        if (cVar == null) {
            v0(8);
            throw null;
        }
        if (hVar == null) {
            v0(9);
            throw null;
        }
        if (o0Var == null) {
            v0(10);
            throw null;
        }
        if (cVar != ip.c.f12123d && cVar != ip.c.f12126v) {
            throw new IllegalStateException("Attempt at creating a constructor that is not a declaration: \ncopy from: " + this + "\nnewOwner: " + lVar + "\nkind: " + cVar);
        }
        b bVar = new b((ip.f) lVar, (b) vVar, hVar, this.f14144b0, cVar, o0Var);
        Boolean bool = this.f18686c0;
        bool.getClass();
        bVar.f18686c0 = bool;
        Boolean bool2 = this.f18687d0;
        bool2.getClass();
        bVar.f18687d0 = bool2;
        return bVar;
    }

    @Override // tp.a
    public final a j0(y yVar, ArrayList arrayList, y yVar2, Pair pair) {
        if (yVar2 == null) {
            v0(17);
            throw null;
        }
        b T0 = T0(h(), null, b(), getAnnotations(), d());
        T0.G0(yVar != null ? n.C(T0, yVar, jp.g.a) : null, this.H, m0.f13512d, getTypeParameters(), ki.b.g(arrayList, P(), T0), yVar2, e(), getVisibility());
        if (pair != null) {
            T0.I0((ip.a) pair.f13474d, pair.f13475e);
        }
        return T0;
    }

    @Override // lp.t, ip.b
    public final boolean w() {
        return this.f18687d0.booleanValue();
    }
}
