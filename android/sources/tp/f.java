package tp;

import com.facebook.react.devsupport.StackTraceHelper;
import fp.i;
import fp.t;
import ip.l;
import ip.m0;
import ip.o0;
import ip.p;
import ip.z;
import java.util.ArrayList;
import jp.h;
import kotlin.Pair;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import lp.i0;
import lp.j0;
import lp.k0;
import lp.r0;
import yq.y;
import yq.z0;
import zq.n;

/* loaded from: classes3.dex */
public class f extends i0 implements a {
    public final boolean Y;
    public final Pair Z;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(l lVar, h hVar, z zVar, p pVar, boolean z5, hq.e eVar, o0 o0Var, m0 m0Var, ip.c cVar, boolean z6, Pair pair) {
        super(lVar, m0Var, hVar, zVar, pVar, z5, eVar, cVar, o0Var, false, false, false, false, false);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (zVar == null) {
            v0(2);
            throw null;
        }
        if (pVar == null) {
            v0(3);
            throw null;
        }
        if (eVar == null) {
            v0(4);
            throw null;
        }
        if (o0Var == null) {
            v0(5);
            throw null;
        }
        if (cVar == null) {
            v0(6);
            throw null;
        }
        this.Y = z6;
        this.Z = pair;
    }

    public static f J0(l lVar, up.c cVar, p pVar, boolean z5, hq.e eVar, np.f fVar, boolean z6) {
        z zVar = z.f12180e;
        if (lVar == null) {
            v0(7);
            throw null;
        }
        if (eVar != null) {
            return new f(lVar, cVar, zVar, pVar, z5, eVar, fVar, null, ip.c.f12123d, z6, null);
        }
        v0(11);
        throw null;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = i5 != 21 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 21 ? 3 : 2];
        switch (i5) {
            case 1:
            case 8:
                objArr[0] = "annotations";
                break;
            case 2:
            case 9:
                objArr[0] = "modality";
                break;
            case 3:
            case 10:
                objArr[0] = "visibility";
                break;
            case 4:
            case 11:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 5:
            case 12:
            case 18:
                objArr[0] = "source";
                break;
            case 6:
            case 16:
                objArr[0] = "kind";
                break;
            case 7:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 13:
                objArr[0] = "newOwner";
                break;
            case 14:
                objArr[0] = "newModality";
                break;
            case 15:
                objArr[0] = "newVisibility";
                break;
            case 17:
                objArr[0] = "newName";
                break;
            case 19:
                objArr[0] = "enhancedValueParameterTypes";
                break;
            case 20:
                objArr[0] = "enhancedReturnType";
                break;
            case 21:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaPropertyDescriptor";
                break;
            case 22:
                objArr[0] = "inType";
                break;
        }
        if (i5 != 21) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/descriptors/JavaPropertyDescriptor";
        } else {
            objArr[1] = "enhance";
        }
        switch (i5) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                objArr[2] = "create";
                break;
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
                objArr[2] = "createSubstitutedCopy";
                break;
            case 19:
            case 20:
                objArr[2] = "enhance";
                break;
            case 21:
                break;
            case 22:
                objArr[2] = "setInType";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 == 21) {
            throw new IllegalStateException(format);
        }
    }

    @Override // lp.i0
    public final i0 D0(l lVar, z zVar, p pVar, m0 m0Var, ip.c cVar, hq.e eVar) {
        if (lVar == null) {
            v0(13);
            throw null;
        }
        if (zVar == null) {
            v0(14);
            throw null;
        }
        if (pVar == null) {
            v0(15);
            throw null;
        }
        if (cVar == null) {
            v0(16);
            throw null;
        }
        if (eVar == null) {
            v0(17);
            throw null;
        }
        return new f(lVar, getAnnotations(), zVar, pVar, this.f14155y, eVar, o0.f12151g, m0Var, cVar, this.Y, this.Z);
    }

    @Override // lp.i0, ip.b
    public final Object K(ip.a aVar) {
        Pair pair = this.Z;
        if (pair == null || !((ip.a) pair.f13474d).equals(aVar)) {
            return null;
        }
        return pair.f13475e;
    }

    @Override // lp.i0, ip.v0
    public final boolean isConst() {
        y type = getType();
        if (!this.Y) {
            return false;
        }
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(type, "<this>");
        if (((!i.G(type) && !t.a(type)) || z0.e(type)) && !i.H(type)) {
            return false;
        }
        jp.i iVar = zp.t.a;
        Intrinsics.checkNotNullParameter(type, "<this>");
        Intrinsics.checkNotNullParameter(n.f21398d, "<this>");
        Intrinsics.checkNotNullParameter(type, "type");
        hq.c ENHANCED_NULLABILITY_ANNOTATION = rp.y.f17507p;
        Intrinsics.checkNotNullExpressionValue(ENHANCED_NULLABILITY_ANNOTATION, "ENHANCED_NULLABILITY_ANNOTATION");
        return !m3.n.T(type, ENHANCED_NULLABILITY_ANNOTATION) || i.H(type);
    }

    @Override // tp.a
    public final a j0(y yVar, ArrayList arrayList, y yVar2, Pair pair) {
        j0 j0Var;
        k0 k0Var;
        if (yVar2 == null) {
            v0(20);
            throw null;
        }
        m0 a = a() == this ? null : a();
        f fVar = new f(h(), getAnnotations(), e(), getVisibility(), this.f14155y, getName(), d(), a, b(), this.Y, pair);
        j0 j0Var2 = this.U;
        if (j0Var2 != null) {
            j0 j0Var3 = new j0(fVar, j0Var2.getAnnotations(), j0Var2.e(), j0Var2.getVisibility(), j0Var2.f14142x, j0Var2.f14143y, j0Var2.G, b(), a == null ? null : a.getGetter(), j0Var2.d());
            j0Var3.J = j0Var2.J;
            j0Var3.K = yVar2;
            j0Var = j0Var3;
        } else {
            j0Var = null;
        }
        k0 k0Var2 = this.V;
        if (k0Var2 != null) {
            k0 k0Var3 = k0Var2;
            k0Var = new k0(fVar, k0Var2.getAnnotations(), k0Var3.e(), k0Var3.getVisibility(), k0Var3.f14142x, k0Var3.f14143y, k0Var3.G, b(), a == null ? null : a.getSetter(), k0Var2.d());
            k0Var.J = k0Var.J;
            r0 r0Var = (r0) k0Var2.P().get(0);
            if (r0Var == null) {
                k0.v0(6);
                throw null;
            }
            k0Var.K = r0Var;
        } else {
            k0Var = null;
        }
        fVar.F0(j0Var, k0Var, this.W, this.X);
        Function0 function0 = this.F;
        if (function0 != null) {
            fVar.G0(this.E, function0);
        }
        fVar.g0(i());
        fVar.I0(yVar2, getTypeParameters(), this.R, yVar != null ? m3.n.C(this, yVar, jp.g.a) : null, kotlin.collections.m0.f13512d);
        return fVar;
    }

    @Override // lp.s0, ip.b
    public final boolean w() {
        return false;
    }

    @Override // lp.i0
    public final void H0(y yVar) {
    }
}
