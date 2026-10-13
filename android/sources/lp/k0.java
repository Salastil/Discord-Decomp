package lp;

import java.util.Collection;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class k0 extends g0 implements ip.l0 {
    public r0 K;
    public final k0 L;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k0(ip.m0 m0Var, jp.h hVar, ip.z zVar, ip.p pVar, boolean z5, boolean z6, boolean z7, ip.c cVar, k0 k0Var, ip.o0 o0Var) {
        super(zVar, pVar, m0Var, hVar, hq.e.g("<set-" + m0Var.getName() + ">"), z5, z6, z7, cVar, o0Var);
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
        this.L = k0Var != null ? k0Var : this;
    }

    public static r0 D0(k0 k0Var, yq.y yVar, jp.h hVar) {
        if (yVar == null) {
            v0(8);
            throw null;
        }
        if (hVar != null) {
            return new r0(k0Var, null, 0, hVar, hq.g.f10217g, yVar, false, false, false, null, ip.o0.f12151g);
        }
        v0(9);
        throw null;
    }

    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 10:
            case 11:
            case 12:
            case 13:
                str = "@NotNull method %s.%s must not return null";
                break;
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 10:
            case 11:
            case 12:
            case 13:
                i6 = 2;
                break;
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
            case 9:
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
                objArr[0] = "parameter";
                break;
            case 7:
                objArr[0] = "setterDescriptor";
                break;
            case 8:
                objArr[0] = "type";
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertySetterDescriptorImpl";
                break;
            default:
                objArr[0] = "correspondingProperty";
                break;
        }
        switch (i5) {
            case 10:
                objArr[1] = "getOverriddenDescriptors";
                break;
            case 11:
                objArr[1] = "getValueParameters";
                break;
            case 12:
                objArr[1] = "getReturnType";
                break;
            case 13:
                objArr[1] = "getOriginal";
                break;
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertySetterDescriptorImpl";
                break;
        }
        switch (i5) {
            case 6:
                objArr[2] = "initialize";
                break;
            case 7:
            case 8:
            case 9:
                objArr[2] = "createSetterParameter";
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 10:
            case 11:
            case 12:
            case 13:
                throw new IllegalStateException(format);
            default:
                throw new IllegalArgumentException(format);
        }
    }

    @Override // lp.m, lp.l, ip.l
    /* renamed from: E0, reason: merged with bridge method [inline-methods] */
    public final k0 a() {
        k0 k0Var = this.L;
        if (k0Var != null) {
            return k0Var;
        }
        v0(13);
        throw null;
    }

    @Override // ip.b
    public final List P() {
        r0 r0Var = this.K;
        if (r0Var == null) {
            throw new IllegalStateException();
        }
        List singletonList = Collections.singletonList(r0Var);
        if (singletonList != null) {
            return singletonList;
        }
        v0(11);
        throw null;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return nVar.a(this, obj);
    }

    @Override // ip.b
    public final yq.y getReturnType() {
        return oq.e.e(this).x();
    }

    @Override // ip.d, ip.b
    public final Collection i() {
        return C0(false);
    }
}
