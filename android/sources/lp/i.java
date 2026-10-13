package lp;

import com.facebook.react.devsupport.StackTraceHelper;

/* loaded from: classes3.dex */
public abstract class i extends b {

    /* renamed from: w, reason: collision with root package name */
    public final ip.l f14153w;

    /* renamed from: x, reason: collision with root package name */
    public final ip.o0 f14154x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(xq.o oVar, ip.l lVar, hq.e eVar, ip.o0 o0Var) {
        super(oVar, eVar);
        if (oVar == null) {
            C(0);
            throw null;
        }
        if (lVar == null) {
            C(1);
            throw null;
        }
        if (eVar == null) {
            C(2);
            throw null;
        }
        this.f14153w = lVar;
        this.f14154x = o0Var;
    }

    public static /* synthetic */ void C(int i5) {
        String str = (i5 == 4 || i5 == 5) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 4 || i5 == 5) ? 2 : 3];
        if (i5 == 1) {
            objArr[0] = "containingDeclaration";
        } else if (i5 == 2) {
            objArr[0] = StackTraceHelper.NAME_KEY;
        } else if (i5 == 3) {
            objArr[0] = "source";
        } else if (i5 == 4 || i5 == 5) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassDescriptorBase";
        } else {
            objArr[0] = "storageManager";
        }
        if (i5 == 4) {
            objArr[1] = "getContainingDeclaration";
        } else if (i5 != 5) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassDescriptorBase";
        } else {
            objArr[1] = "getSource";
        }
        if (i5 != 4 && i5 != 5) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 4 && i5 != 5) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // ip.m
    public final ip.o0 d() {
        ip.o0 o0Var = this.f14154x;
        if (o0Var != null) {
            return o0Var;
        }
        C(5);
        throw null;
    }

    @Override // ip.l
    public final ip.l h() {
        ip.l lVar = this.f14153w;
        if (lVar != null) {
            return lVar;
        }
        C(4);
        throw null;
    }

    public boolean isExternal() {
        return false;
    }
}
