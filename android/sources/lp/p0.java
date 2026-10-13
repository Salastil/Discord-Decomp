package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.List;
import yq.c1;

/* loaded from: classes3.dex */
public final class p0 extends g {
    public final ArrayList I;
    public boolean J;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p0(ip.l lVar, jp.h hVar, boolean z5, c1 c1Var, hq.e eVar, int i5, xq.o oVar) {
        super(oVar, lVar, hVar, eVar, c1Var, z5, i5, r8);
        ip.p0 p0Var = ip.p0.f12154i;
        if (lVar == null) {
            v0(19);
            throw null;
        }
        if (hVar == null) {
            v0(20);
            throw null;
        }
        if (c1Var == null) {
            v0(21);
            throw null;
        }
        if (eVar == null) {
            v0(22);
            throw null;
        }
        if (oVar == null) {
            v0(25);
            throw null;
        }
        this.I = new ArrayList(1);
        this.J = false;
    }

    public static p0 E0(ip.l lVar, jp.h hVar, boolean z5, c1 c1Var, hq.e eVar, int i5, xq.o oVar) {
        if (lVar == null) {
            v0(6);
            throw null;
        }
        if (hVar == null) {
            v0(7);
            throw null;
        }
        if (c1Var == null) {
            v0(8);
            throw null;
        }
        if (eVar == null) {
            v0(9);
            throw null;
        }
        if (oVar != null) {
            return new p0(lVar, hVar, z5, c1Var, eVar, i5, oVar);
        }
        v0(11);
        throw null;
    }

    public static p0 F0(b bVar, c1 c1Var, hq.e eVar, int i5, xq.o oVar) {
        if (oVar == null) {
            v0(4);
            throw null;
        }
        p0 E0 = E0(bVar, jp.g.a, false, c1Var, eVar, i5, oVar);
        yq.c0 n6 = oq.e.e(bVar).n();
        if (E0.J) {
            throw new IllegalStateException("Type parameter descriptor is already initialized: " + E0.G0());
        }
        if (!yq.c.j(n6)) {
            E0.I.add(n6);
        }
        if (!E0.J) {
            E0.J = true;
            return E0;
        }
        throw new IllegalStateException("Type parameter descriptor is already initialized: " + E0.G0());
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 5 || i5 == 28) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 5 || i5 == 28) ? 2 : 3];
        switch (i5) {
            case 1:
            case 7:
            case 13:
            case 20:
                objArr[0] = "annotations";
                break;
            case 2:
            case 8:
            case 14:
            case 21:
                objArr[0] = "variance";
                break;
            case 3:
            case 9:
            case 15:
            case 22:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 4:
            case 11:
            case 18:
            case 25:
                objArr[0] = "storageManager";
                break;
            case 5:
            case 28:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/TypeParameterDescriptorImpl";
                break;
            case 6:
            case 12:
            case 19:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 10:
            case 16:
            case 23:
                objArr[0] = "source";
                break;
            case 17:
                objArr[0] = "supertypeLoopsResolver";
                break;
            case 24:
                objArr[0] = "supertypeLoopsChecker";
                break;
            case 26:
                objArr[0] = "bound";
                break;
            case 27:
                objArr[0] = "type";
                break;
        }
        if (i5 == 5) {
            objArr[1] = "createWithDefaultBound";
        } else if (i5 != 28) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/TypeParameterDescriptorImpl";
        } else {
            objArr[1] = "resolveUpperBounds";
        }
        switch (i5) {
            case 5:
            case 28:
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
                objArr[2] = "createForFurtherModification";
                break;
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
                objArr[2] = "<init>";
                break;
            case 26:
                objArr[2] = "addUpperBound";
                break;
            case 27:
                objArr[2] = "reportSupertypeLoopError";
                break;
            default:
                objArr[2] = "createWithDefaultBound";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 5 && i5 != 28) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // lp.g
    public final void C0(yq.y yVar) {
        if (yVar != null) {
            return;
        }
        v0(27);
        throw null;
    }

    @Override // lp.g
    public final List D0() {
        if (!this.J) {
            throw new IllegalStateException("Type parameter descriptor is not initialized: " + G0());
        }
        ArrayList arrayList = this.I;
        if (arrayList != null) {
            return arrayList;
        }
        v0(28);
        throw null;
    }

    public final String G0() {
        return getName() + " declared in " + kq.e.g(h());
    }
}
