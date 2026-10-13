package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import yq.w0;

/* loaded from: classes3.dex */
public abstract class g0 extends m implements ip.l0 {
    public final ip.z E;
    public final ip.m0 F;
    public final boolean G;
    public final ip.c H;
    public ip.p I;
    public ip.v J;

    /* renamed from: x, reason: collision with root package name */
    public boolean f14142x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f14143y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g0(ip.z zVar, ip.p pVar, ip.m0 m0Var, jp.h hVar, hq.e eVar, boolean z5, boolean z6, boolean z7, ip.c cVar, ip.o0 o0Var) {
        super(m0Var.h(), hVar, eVar, o0Var);
        if (zVar == null) {
            v0(0);
            throw null;
        }
        if (pVar == null) {
            v0(1);
            throw null;
        }
        if (m0Var == null) {
            v0(2);
            throw null;
        }
        if (hVar == null) {
            v0(3);
            throw null;
        }
        if (o0Var == null) {
            v0(5);
            throw null;
        }
        this.J = null;
        this.E = zVar;
        this.I = pVar;
        this.F = m0Var;
        this.f14142x = z5;
        this.f14143y = z6;
        this.G = z7;
        this.H = cVar;
    }

    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 6:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 7:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 6:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                i6 = 2;
                break;
            case 7:
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "visibility";
                break;
            case 2:
                objArr[0] = "correspondingProperty";
                break;
            case 3:
                objArr[0] = "annotations";
                break;
            case 4:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 5:
                objArr[0] = "source";
                break;
            case 6:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyAccessorDescriptorImpl";
                break;
            case 7:
                objArr[0] = "substitutor";
                break;
            case 16:
                objArr[0] = "overriddenDescriptors";
                break;
            default:
                objArr[0] = "modality";
                break;
        }
        switch (i5) {
            case 6:
                objArr[1] = "getKind";
                break;
            case 7:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyAccessorDescriptorImpl";
                break;
            case 8:
                objArr[1] = "substitute";
                break;
            case 9:
                objArr[1] = "getTypeParameters";
                break;
            case 10:
                objArr[1] = "getModality";
                break;
            case 11:
                objArr[1] = "getVisibility";
                break;
            case 12:
                objArr[1] = "getCorrespondingVariable";
                break;
            case 13:
                objArr[1] = "getCorrespondingProperty";
                break;
            case 14:
                objArr[1] = "getContextReceiverParameters";
                break;
            case 15:
                objArr[1] = "getOverriddenDescriptors";
                break;
        }
        switch (i5) {
            case 6:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            case 7:
                objArr[2] = "substitute";
                break;
            case 16:
                objArr[2] = "setOverriddenDescriptors";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 6:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                throw new IllegalStateException(format);
            case 7:
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public final ip.m0 B0() {
        ip.m0 m0Var = this.F;
        if (m0Var != null) {
            return m0Var;
        }
        v0(13);
        throw null;
    }

    public final ArrayList C0(boolean z5) {
        ArrayList arrayList = new ArrayList(0);
        for (ip.m0 m0Var : B0().i()) {
            sq.d getter = z5 ? m0Var.getGetter() : m0Var.getSetter();
            if (getter != null) {
                arrayList.add(getter);
            }
        }
        return arrayList;
    }

    @Override // ip.v
    public final boolean F() {
        return false;
    }

    @Override // ip.b
    public final Object K(ip.a aVar) {
        return null;
    }

    @Override // ip.d
    public final ip.d L(ip.f fVar, ip.z zVar, ip.p pVar) {
        throw new UnsupportedOperationException("Accessors must be copied by the corresponding property");
    }

    @Override // ip.v
    public final ip.v S() {
        return this.J;
    }

    @Override // ip.b
    public final u T() {
        return B0().T();
    }

    @Override // ip.b
    public final u W() {
        return B0().W();
    }

    @Override // ip.b
    public final List a0() {
        List a0 = B0().a0();
        if (a0 != null) {
            return a0;
        }
        v0(14);
        throw null;
    }

    @Override // ip.d
    public final ip.c b() {
        ip.c cVar = this.H;
        if (cVar != null) {
            return cVar;
        }
        v0(6);
        throw null;
    }

    @Override // ip.v, ip.q0
    public final ip.v c(w0 w0Var) {
        if (w0Var != null) {
            return this;
        }
        v0(7);
        throw null;
    }

    @Override // ip.y
    public final ip.z e() {
        ip.z zVar = this.E;
        if (zVar != null) {
            return zVar;
        }
        v0(10);
        throw null;
    }

    @Override // ip.v
    public final boolean f0() {
        return false;
    }

    @Override // ip.d
    public final void g0(Collection collection) {
        if (collection != null) {
            return;
        }
        v0(16);
        throw null;
    }

    @Override // ip.b
    public final List getTypeParameters() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        v0(9);
        throw null;
    }

    @Override // ip.o, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = this.I;
        if (pVar != null) {
            return pVar;
        }
        v0(11);
        throw null;
    }

    @Override // ip.y
    public final boolean isExternal() {
        return this.f14143y;
    }

    @Override // ip.v
    public final boolean isInfix() {
        return false;
    }

    @Override // ip.v
    public final boolean isInline() {
        return this.G;
    }

    @Override // ip.v
    public final boolean isOperator() {
        return false;
    }

    @Override // ip.v
    public final boolean isSuspend() {
        return false;
    }

    @Override // ip.v
    public final boolean k0() {
        return false;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // ip.b
    public final boolean w() {
        return false;
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }

    @Override // ip.q0
    public final /* bridge */ /* synthetic */ ip.m c(w0 w0Var) {
        c(w0Var);
        return this;
    }
}
