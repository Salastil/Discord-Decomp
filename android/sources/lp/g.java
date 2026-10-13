package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;

/* loaded from: classes3.dex */
public abstract class g extends m implements ip.s0 {
    public final int E;
    public final xq.i F;
    public final xq.i G;
    public final xq.l H;

    /* renamed from: x, reason: collision with root package name */
    public final c1 f14140x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f14141y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(xq.o oVar, ip.l lVar, jp.h hVar, hq.e eVar, c1 c1Var, boolean z5, int i5, ip.p0 p0Var) {
        super(lVar, hVar, eVar, ip.o0.f12151g);
        if (oVar == null) {
            v0(0);
            throw null;
        }
        if (lVar == null) {
            v0(1);
            throw null;
        }
        if (hVar == null) {
            v0(2);
            throw null;
        }
        if (eVar == null) {
            v0(3);
            throw null;
        }
        if (c1Var == null) {
            v0(4);
            throw null;
        }
        if (p0Var == null) {
            v0(6);
            throw null;
        }
        this.f14140x = c1Var;
        this.f14141y = z5;
        this.E = i5;
        cp.u uVar = new cp.u(this, oVar, p0Var);
        xq.l lVar2 = (xq.l) oVar;
        this.F = new xq.i(lVar2, uVar);
        this.G = new xq.i(lVar2, new bs.q(this, eVar, 8));
        this.H = lVar2;
    }

    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 12:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
                i6 = 2;
                break;
            case 12:
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
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
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractTypeParameterDescriptor";
                break;
            case 12:
                objArr[0] = "bounds";
                break;
            default:
                objArr[0] = "storageManager";
                break;
        }
        switch (i5) {
            case 7:
                objArr[1] = "getVariance";
                break;
            case 8:
                objArr[1] = "getUpperBounds";
                break;
            case 9:
                objArr[1] = "getTypeConstructor";
                break;
            case 10:
                objArr[1] = "getDefaultType";
                break;
            case 11:
                objArr[1] = "getOriginal";
                break;
            case 12:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractTypeParameterDescriptor";
                break;
            case 13:
                objArr[1] = "processBoundsWithoutCycles";
                break;
            case 14:
                objArr[1] = "getStorageManager";
                break;
        }
        switch (i5) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
                break;
            case 12:
                objArr[2] = "processBoundsWithoutCycles";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
                throw new IllegalStateException(format);
            case 12:
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public List B0(List list) {
        if (list == null) {
            v0(12);
            throw null;
        }
        if (list != null) {
            return list;
        }
        v0(13);
        throw null;
    }

    public abstract void C0(yq.y yVar);

    public abstract List D0();

    @Override // ip.s0
    public final xq.o U() {
        xq.l lVar = this.H;
        if (lVar != null) {
            return lVar;
        }
        v0(14);
        throw null;
    }

    @Override // ip.s0
    public final boolean Y() {
        return false;
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.i a() {
        return this;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        ((jq.h) ((ha.l) nVar).f9613d).a0(this, builder, true);
        return Unit.a;
    }

    @Override // ip.s0
    public final int getIndex() {
        return this.E;
    }

    @Override // ip.s0
    public final List getUpperBounds() {
        List b10 = ((f) n()).b();
        if (b10 != null) {
            return b10;
        }
        v0(8);
        throw null;
    }

    @Override // ip.s0
    public final c1 getVariance() {
        c1 c1Var = this.f14140x;
        if (c1Var != null) {
            return c1Var;
        }
        v0(7);
        throw null;
    }

    @Override // ip.i
    public final yq.c0 k() {
        yq.c0 c0Var = (yq.c0) this.G.invoke();
        if (c0Var != null) {
            return c0Var;
        }
        v0(10);
        throw null;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.p0 p0Var = (yq.p0) this.F.invoke();
        if (p0Var != null) {
            return p0Var;
        }
        v0(9);
        throw null;
    }

    @Override // ip.s0
    public final boolean v() {
        return this.f14141y;
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.l a() {
        return this;
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.s0 a() {
        return this;
    }

    @Override // lp.m
    /* renamed from: A0 */
    public final ip.m a() {
        return this;
    }
}
