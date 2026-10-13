package lp;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends yq.i {

    /* renamed from: c, reason: collision with root package name */
    public final ip.p0 f14138c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ g f14139d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(g gVar, xq.o oVar, ip.p0 p0Var) {
        super(oVar);
        if (oVar == null) {
            n(0);
            throw null;
        }
        this.f14139d = gVar;
        this.f14138c = p0Var;
    }

    public static /* synthetic */ void n(int i5) {
        String str = (i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4 || i5 == 5 || i5 == 8) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4 || i5 == 5 || i5 == 8) ? 2 : 3];
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 8:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractTypeParameterDescriptor$TypeParameterTypeConstructor";
                break;
            case 6:
                objArr[0] = "type";
                break;
            case 7:
                objArr[0] = "supertypes";
                break;
            case 9:
                objArr[0] = "classifier";
                break;
            default:
                objArr[0] = "storageManager";
                break;
        }
        if (i5 == 1) {
            objArr[1] = "computeSupertypes";
        } else if (i5 == 2) {
            objArr[1] = "getParameters";
        } else if (i5 == 3) {
            objArr[1] = "getDeclarationDescriptor";
        } else if (i5 == 4) {
            objArr[1] = "getBuiltIns";
        } else if (i5 == 5) {
            objArr[1] = "getSupertypeLoopChecker";
        } else if (i5 != 8) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractTypeParameterDescriptor$TypeParameterTypeConstructor";
        } else {
            objArr[1] = "processSupertypesWithoutCycles";
        }
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 8:
                break;
            case 6:
                objArr[2] = "reportSupertypeLoopError";
                break;
            case 7:
                objArr[2] = "processSupertypesWithoutCycles";
                break;
            case 9:
                objArr[2] = "isSameClassifier";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 1 && i5 != 2 && i5 != 3 && i5 != 4 && i5 != 5 && i5 != 8) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // yq.p0
    public final ip.i a() {
        g gVar = this.f14139d;
        if (gVar != null) {
            return gVar;
        }
        n(3);
        throw null;
    }

    @Override // yq.p0
    public final boolean c() {
        return true;
    }

    @Override // yq.i
    public final Collection e() {
        List D0 = this.f14139d.D0();
        if (D0 != null) {
            return D0;
        }
        n(1);
        throw null;
    }

    @Override // yq.i
    public final yq.y f() {
        return ar.l.c(ar.k.f2689y, new String[0]);
    }

    @Override // yq.p0
    public final fp.i g() {
        fp.i e9 = oq.e.e(this.f14139d);
        if (e9 != null) {
            return e9;
        }
        n(4);
        throw null;
    }

    @Override // yq.p0
    public final List getParameters() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        n(2);
        throw null;
    }

    @Override // yq.i
    public final ip.p0 i() {
        ip.p0 p0Var = this.f14138c;
        if (p0Var != null) {
            return p0Var;
        }
        n(5);
        throw null;
    }

    @Override // yq.i
    public final boolean k(ip.i iVar) {
        if (!(iVar instanceof ip.s0)) {
            return false;
        }
        ip.s0 b10 = (ip.s0) iVar;
        g a = this.f14139d;
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        return kq.c.a.d(a, b10, true, kq.a.f13615d);
    }

    @Override // yq.i
    public final List l(List list) {
        if (list == null) {
            n(7);
            throw null;
        }
        List B0 = this.f14139d.B0(list);
        if (B0 != null) {
            return B0;
        }
        n(8);
        throw null;
    }

    @Override // yq.i
    public final void m(yq.y yVar) {
        if (yVar != null) {
            this.f14139d.C0(yVar);
        } else {
            n(6);
            throw null;
        }
    }

    public final String toString() {
        return this.f14139d.getName().f10209d;
    }
}
