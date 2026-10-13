package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import yq.c1;

/* loaded from: classes3.dex */
public abstract class c extends g {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(xq.o oVar, ip.l lVar, jp.h hVar, hq.e eVar, c1 c1Var, boolean z5, int i5, ip.p0 p0Var) {
        super(oVar, lVar, hVar, eVar, c1Var, z5, i5, p0Var);
        if (oVar == null) {
            v0(0);
            throw null;
        }
        if (lVar == null) {
            v0(1);
            throw null;
        }
        if (p0Var != null) {
        } else {
            v0(6);
            throw null;
        }
    }

    public static /* synthetic */ void v0(int i5) {
        Object[] objArr = new Object[3];
        switch (i5) {
            case 1:
                objArr[0] = "containingDeclaration";
                break;
            case 2:
                objArr[0] = "annotations";
                break;
            case 3:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 4:
                objArr[0] = "variance";
                break;
            case 5:
                objArr[0] = "source";
                break;
            case 6:
                objArr[0] = "supertypeLoopChecker";
                break;
            default:
                objArr[0] = "storageManager";
                break;
        }
        objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractLazyTypeParameterDescriptor";
        objArr[2] = "<init>";
        throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", objArr));
    }

    @Override // lp.l, bq.b
    public final String toString() {
        String str = "";
        String str2 = this.f14141y ? "reified " : "";
        if (getVariance() != c1.f21013i) {
            str = getVariance() + " ";
        }
        return str2 + str + getName();
    }
}
