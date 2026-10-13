package lp;

import com.facebook.react.devsupport.StackTraceHelper;

/* loaded from: classes3.dex */
public abstract class m extends l implements ip.m {

    /* renamed from: v, reason: collision with root package name */
    public final ip.l f14159v;

    /* renamed from: w, reason: collision with root package name */
    public final ip.o0 f14160w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(ip.l lVar, jp.h hVar, hq.e eVar, ip.o0 o0Var) {
        super(hVar, eVar);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (eVar == null) {
            v0(2);
            throw null;
        }
        if (o0Var == null) {
            v0(3);
            throw null;
        }
        this.f14159v = lVar;
        this.f14160w = o0Var;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 4 || i5 == 5 || i5 == 6) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 4 || i5 == 5 || i5 == 6) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = "annotations";
                break;
            case 2:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
                objArr[0] = "source";
                break;
            case 4:
            case 5:
            case 6:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/DeclarationDescriptorNonRootImpl";
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        if (i5 == 4) {
            objArr[1] = "getOriginal";
        } else if (i5 == 5) {
            objArr[1] = "getContainingDeclaration";
        } else if (i5 != 6) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/DeclarationDescriptorNonRootImpl";
        } else {
            objArr[1] = "getSource";
        }
        if (i5 != 4 && i5 != 5 && i5 != 6) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 4 && i5 != 5 && i5 != 6) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public ip.o0 d() {
        ip.o0 o0Var = this.f14160w;
        if (o0Var != null) {
            return o0Var;
        }
        v0(6);
        throw null;
    }

    public ip.l h() {
        ip.l lVar = this.f14159v;
        if (lVar != null) {
            return lVar;
        }
        v0(5);
        throw null;
    }

    @Override // lp.l, ip.l
    /* renamed from: A0 */
    public ip.m a() {
        return this;
    }
}
