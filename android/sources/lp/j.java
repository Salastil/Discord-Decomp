package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import ip.t0;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Set;

/* loaded from: classes3.dex */
public class j extends i {
    public final ip.g E;
    public final yq.l F;
    public rq.o G;
    public Set H;
    public h I;

    /* renamed from: y, reason: collision with root package name */
    public final ip.z f14156y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(ip.l lVar, hq.e eVar, ip.z zVar, ip.g gVar, List list, xq.o oVar) {
        super(oVar, lVar, eVar, ip.o0.f12151g);
        if (lVar == null) {
            C(0);
            throw null;
        }
        if (eVar == null) {
            C(1);
            throw null;
        }
        if (list == null) {
            C(4);
            throw null;
        }
        if (oVar == null) {
            C(6);
            throw null;
        }
        this.f14156y = zVar;
        this.E = gVar;
        this.F = new yq.l(this, Collections.EMPTY_LIST, list, oVar);
    }

    public static /* synthetic */ void C(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 12:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
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
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 2:
                objArr[0] = "modality";
                break;
            case 3:
                objArr[0] = "kind";
                break;
            case 4:
                objArr[0] = "supertypes";
                break;
            case 5:
                objArr[0] = "source";
                break;
            case 6:
                objArr[0] = "storageManager";
                break;
            case 7:
                objArr[0] = "unsubstitutedMemberScope";
                break;
            case 8:
                objArr[0] = "constructors";
                break;
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassDescriptorImpl";
                break;
            case 12:
                objArr[0] = "kotlinTypeRefiner";
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        switch (i5) {
            case 9:
                objArr[1] = "getAnnotations";
                break;
            case 10:
                objArr[1] = "getTypeConstructor";
                break;
            case 11:
                objArr[1] = "getConstructors";
                break;
            case 12:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassDescriptorImpl";
                break;
            case 13:
                objArr[1] = "getUnsubstitutedMemberScope";
                break;
            case 14:
                objArr[1] = "getStaticScope";
                break;
            case 15:
                objArr[1] = "getKind";
                break;
            case 16:
                objArr[1] = "getModality";
                break;
            case 17:
                objArr[1] = "getVisibility";
                break;
            case 18:
                objArr[1] = "getDeclaredTypeParameters";
                break;
            case 19:
                objArr[1] = "getSealedSubclasses";
                break;
        }
        switch (i5) {
            case 7:
            case 8:
                objArr[2] = "initialize";
                break;
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                break;
            case 12:
                objArr[2] = "getUnsubstitutedMemberScope";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 9:
            case 10:
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                throw new IllegalStateException(format);
            case 12:
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
        return this.I;
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
        ip.g gVar = this.E;
        if (gVar != null) {
            return gVar;
        }
        C(15);
        throw null;
    }

    @Override // ip.f, ip.y
    public final ip.z e() {
        ip.z zVar = this.f14156y;
        if (zVar != null) {
            return zVar;
        }
        C(16);
        throw null;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return jp.g.a;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = ip.q.f12159e;
        if (pVar != null) {
            return pVar;
        }
        C(17);
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
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(18);
        throw null;
    }

    public final void l0(rq.o oVar, Set set, h hVar) {
        if (set == null) {
            C(8);
            throw null;
        }
        this.G = oVar;
        this.H = set;
        this.I = hVar;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.l lVar = this.F;
        if (lVar != null) {
            return lVar;
        }
        C(10);
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
        rq.o oVar = this.G;
        if (oVar != null) {
            return oVar;
        }
        C(13);
        throw null;
    }

    @Override // ip.f
    public final Collection q() {
        Set set = this.H;
        if (set != null) {
            return set;
        }
        C(11);
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

    public String toString() {
        return "class " + getName();
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
