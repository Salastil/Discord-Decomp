package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import ip.t0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Set;

/* loaded from: classes3.dex */
public final class b0 extends i {
    public ip.z E;
    public ip.p F;
    public yq.l G;
    public ArrayList H;
    public final ArrayList I;
    public final xq.o J;

    /* renamed from: y, reason: collision with root package name */
    public final ip.g f14131y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(hp.m mVar, hq.e eVar, xq.o oVar) {
        super(oVar, mVar, eVar, ip.o0.f12151g);
        ip.g gVar = ip.g.f12139e;
        if (eVar == null) {
            C(2);
            throw null;
        }
        if (oVar == null) {
            C(4);
            throw null;
        }
        this.I = new ArrayList();
        this.J = oVar;
        this.f14131y = gVar;
    }

    public static /* synthetic */ void C(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
            case 17:
            case 18:
            case 19:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
            case 17:
            case 18:
            case 19:
                i6 = 2;
                break;
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "kind";
                break;
            case 2:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
                objArr[0] = "source";
                break;
            case 4:
                objArr[0] = "storageManager";
                break;
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
            case 17:
            case 18:
            case 19:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/MutableClassDescriptor";
                break;
            case 6:
                objArr[0] = "modality";
                break;
            case 9:
                objArr[0] = "visibility";
                break;
            case 12:
                objArr[0] = "supertype";
                break;
            case 14:
                objArr[0] = "typeParameters";
                break;
            case 16:
                objArr[0] = "kotlinTypeRefiner";
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        switch (i5) {
            case 5:
                objArr[1] = "getAnnotations";
                break;
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/MutableClassDescriptor";
                break;
            case 7:
                objArr[1] = "getModality";
                break;
            case 8:
                objArr[1] = "getKind";
                break;
            case 10:
                objArr[1] = "getVisibility";
                break;
            case 11:
                objArr[1] = "getTypeConstructor";
                break;
            case 13:
                objArr[1] = "getConstructors";
                break;
            case 15:
                objArr[1] = "getDeclaredTypeParameters";
                break;
            case 17:
                objArr[1] = "getUnsubstitutedMemberScope";
                break;
            case 18:
                objArr[1] = "getStaticScope";
                break;
            case 19:
                objArr[1] = "getSealedSubclasses";
                break;
        }
        switch (i5) {
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
            case 17:
            case 18:
            case 19:
                break;
            case 6:
                objArr[2] = "setModality";
                break;
            case 9:
                objArr[2] = "setVisibility";
                break;
            case 12:
                objArr[2] = "addSupertype";
                break;
            case 14:
                objArr[2] = "setTypeParameterDescriptors";
                break;
            case 16:
                objArr[2] = "getUnsubstitutedMemberScope";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 5:
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
            case 17:
            case 18:
            case 19:
                throw new IllegalStateException(format);
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            default:
                throw new IllegalArgumentException(format);
        }
    }

    @Override // ip.j
    public final boolean A() {
        return false;
    }

    @Override // ip.f
    public final h G() {
        return null;
    }

    @Override // ip.f
    public final rq.o H() {
        return rq.n.f17557b;
    }

    @Override // ip.f
    public final ip.f J() {
        return null;
    }

    @Override // ip.f
    public final ip.g b() {
        ip.g gVar = this.f14131y;
        if (gVar != null) {
            return gVar;
        }
        C(8);
        throw null;
    }

    @Override // ip.f, ip.y
    public final ip.z e() {
        ip.z zVar = this.E;
        if (zVar != null) {
            return zVar;
        }
        C(7);
        throw null;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return jp.g.a;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = this.F;
        if (pVar != null) {
            return pVar;
        }
        C(10);
        throw null;
    }

    @Override // ip.f
    public final t0 i0() {
        return null;
    }

    @Override // ip.f
    public final boolean isInline() {
        return false;
    }

    @Override // ip.f
    public final boolean isValue() {
        return false;
    }

    @Override // ip.f, ip.j
    public final List l() {
        ArrayList arrayList = this.H;
        if (arrayList != null) {
            return arrayList;
        }
        C(15);
        throw null;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.l lVar = this.G;
        if (lVar != null) {
            return lVar;
        }
        C(11);
        throw null;
    }

    @Override // ip.f
    public final boolean o() {
        return false;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // lp.z
    public final rq.o p(zq.f fVar) {
        return rq.n.f17557b;
    }

    @Override // ip.f
    public final Collection q() {
        Set set = Collections.EMPTY_SET;
        if (set != null) {
            return set;
        }
        C(13);
        throw null;
    }

    @Override // ip.f
    public final boolean s0() {
        return false;
    }

    @Override // ip.f
    public final boolean t() {
        return false;
    }

    public final String toString() {
        return l.z0(this);
    }

    @Override // ip.f
    public final Collection x() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(19);
        throw null;
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }
}
