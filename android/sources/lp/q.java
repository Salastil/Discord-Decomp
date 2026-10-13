package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import ip.t0;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class q extends i {
    public final p E;
    public final xq.m F;
    public final jp.h G;

    /* renamed from: y, reason: collision with root package name */
    public final yq.l f14176y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q(xq.o oVar, ip.f fVar, yq.c0 c0Var, hq.e eVar, xq.m mVar, jp.h hVar, ip.o0 o0Var) {
        super(oVar, fVar, eVar, o0Var);
        if (oVar == null) {
            C(6);
            throw null;
        }
        if (fVar == null) {
            C(7);
            throw null;
        }
        if (c0Var == null) {
            C(8);
            throw null;
        }
        if (eVar == null) {
            C(9);
            throw null;
        }
        if (mVar == null) {
            C(10);
            throw null;
        }
        this.G = hVar;
        this.f14176y = new yq.l(this, Collections.EMPTY_LIST, Collections.singleton(c0Var), oVar);
        this.E = new p(this, oVar);
        this.F = mVar;
    }

    public static /* synthetic */ void C(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
                str = "@NotNull method %s.%s must not return null";
                break;
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
                i6 = 2;
                break;
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "enumClass";
                break;
            case 2:
            case 9:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
            case 10:
                objArr[0] = "enumMemberNames";
                break;
            case 4:
            case 11:
                objArr[0] = "annotations";
                break;
            case 5:
            case 12:
                objArr[0] = "source";
                break;
            case 6:
            default:
                objArr[0] = "storageManager";
                break;
            case 7:
                objArr[0] = "containingClass";
                break;
            case 8:
                objArr[0] = "supertype";
                break;
            case 13:
                objArr[0] = "kotlinTypeRefiner";
                break;
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/EnumEntrySyntheticClassDescriptor";
                break;
        }
        switch (i5) {
            case 14:
                objArr[1] = "getUnsubstitutedMemberScope";
                break;
            case 15:
                objArr[1] = "getStaticScope";
                break;
            case 16:
                objArr[1] = "getConstructors";
                break;
            case 17:
                objArr[1] = "getTypeConstructor";
                break;
            case 18:
                objArr[1] = "getKind";
                break;
            case 19:
                objArr[1] = "getModality";
                break;
            case 20:
                objArr[1] = "getVisibility";
                break;
            case 21:
                objArr[1] = "getAnnotations";
                break;
            case 22:
                objArr[1] = "getDeclaredTypeParameters";
                break;
            case 23:
                objArr[1] = "getSealedSubclasses";
                break;
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/EnumEntrySyntheticClassDescriptor";
                break;
        }
        switch (i5) {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                objArr[2] = "<init>";
                break;
            case 13:
                objArr[2] = "getUnsubstitutedMemberScope";
                break;
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
                break;
            default:
                objArr[2] = "create";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
                throw new IllegalStateException(format);
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public static q l0(xq.o oVar, ip.f fVar, hq.e eVar, xq.i iVar, jp.h hVar, ip.o0 o0Var) {
        if (oVar == null) {
            C(0);
            throw null;
        }
        if (fVar == null) {
            C(1);
            throw null;
        }
        if (eVar == null) {
            C(2);
            throw null;
        }
        if (iVar != null) {
            return new q(oVar, fVar, fVar.k(), eVar, iVar, hVar, o0Var);
        }
        C(3);
        throw null;
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
        return ip.g.f12141v;
    }

    @Override // ip.f, ip.y
    public final ip.z e() {
        return ip.z.f12180e;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        jp.h hVar = this.G;
        if (hVar != null) {
            return hVar;
        }
        C(21);
        throw null;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = ip.q.f12159e;
        if (pVar != null) {
            return pVar;
        }
        C(20);
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
        C(22);
        throw null;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.l lVar = this.f14176y;
        if (lVar != null) {
            return lVar;
        }
        C(17);
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
        p pVar = this.E;
        if (pVar != null) {
            return pVar;
        }
        C(14);
        throw null;
    }

    @Override // ip.f
    public final Collection q() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(16);
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
        return "enum entry " + getName();
    }

    @Override // ip.f
    public final Collection x() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(23);
        throw null;
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }
}
