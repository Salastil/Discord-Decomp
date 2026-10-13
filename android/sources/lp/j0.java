package lp;

import java.util.Collection;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class j0 extends g0 implements ip.l0 {
    public yq.y K;
    public final j0 L;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j0(ip.m0 m0Var, jp.h hVar, ip.z zVar, ip.p pVar, boolean z5, boolean z6, boolean z7, ip.c cVar, j0 j0Var, ip.o0 o0Var) {
        super(zVar, pVar, m0Var, hVar, hq.e.g("<get-" + m0Var.getName() + ">"), z5, z6, z7, cVar, o0Var);
        if (m0Var == null) {
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
        if (cVar == null) {
            v0(4);
            throw null;
        }
        if (o0Var == null) {
            v0(5);
            throw null;
        }
        this.L = j0Var != null ? j0Var : this;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 6 || i5 == 7 || i5 == 8) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 6 || i5 == 7 || i5 == 8) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = "annotations";
                break;
            case 2:
                objArr[0] = "modality";
                break;
            case 3:
                objArr[0] = "visibility";
                break;
            case 4:
                objArr[0] = "kind";
                break;
            case 5:
                objArr[0] = "source";
                break;
            case 6:
            case 7:
            case 8:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyGetterDescriptorImpl";
                break;
            default:
                objArr[0] = "correspondingProperty";
                break;
        }
        if (i5 == 6) {
            objArr[1] = "getOverriddenDescriptors";
        } else if (i5 == 7) {
            objArr[1] = "getValueParameters";
        } else if (i5 != 8) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyGetterDescriptorImpl";
        } else {
            objArr[1] = "getOriginal";
        }
        if (i5 != 6 && i5 != 7 && i5 != 8) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 6 && i5 != 7 && i5 != 8) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // lp.m, lp.l, ip.l
    /* renamed from: D0, reason: merged with bridge method [inline-methods] */
    public final j0 a() {
        j0 j0Var = this.L;
        if (j0Var != null) {
            return j0Var;
        }
        v0(8);
        throw null;
    }

    public final void E0(yq.y yVar) {
        if (yVar == null) {
            yVar = B0().getType();
        }
        this.K = yVar;
    }

    @Override // ip.b
    public final List P() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        v0(7);
        throw null;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return nVar.w(this, obj);
    }

    @Override // ip.b
    public final yq.y getReturnType() {
        return this.K;
    }

    @Override // ip.d, ip.b
    public final Collection i() {
        return C0(true);
    }
}
