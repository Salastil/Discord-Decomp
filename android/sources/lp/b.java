package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Collections;
import java.util.List;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public abstract class b extends z {

    /* renamed from: d, reason: collision with root package name */
    public final hq.e f14127d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.i f14128e;

    /* renamed from: i, reason: collision with root package name */
    public final xq.i f14129i;

    /* renamed from: v, reason: collision with root package name */
    public final xq.i f14130v;

    public b(xq.o oVar, hq.e eVar) {
        if (oVar == null) {
            C(0);
            throw null;
        }
        if (eVar == null) {
            C(1);
            throw null;
        }
        this.f14127d = eVar;
        xq.l lVar = (xq.l) oVar;
        this.f14128e = new xq.i(lVar, new a(this, 0));
        this.f14129i = new xq.i(lVar, new a(this, 1));
        this.f14130v = new xq.i(lVar, new a(this, 2));
    }

    public static /* synthetic */ void C(int i5) {
        String str = (i5 == 2 || i5 == 3 || i5 == 4 || i5 == 5 || i5 == 6 || i5 == 9 || i5 == 12 || i5 == 14 || i5 == 16 || i5 == 17 || i5 == 19 || i5 == 20) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 2 || i5 == 3 || i5 == 4 || i5 == 5 || i5 == 6 || i5 == 9 || i5 == 12 || i5 == 14 || i5 == 16 || i5 == 17 || i5 == 19 || i5 == 20) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            case 17:
            case 19:
            case 20:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractClassDescriptor";
                break;
            case 7:
            case 13:
                objArr[0] = "typeArguments";
                break;
            case 8:
            case 11:
                objArr[0] = "kotlinTypeRefiner";
                break;
            case 10:
            case 15:
                objArr[0] = "typeSubstitution";
                break;
            case 18:
                objArr[0] = "substitutor";
                break;
            default:
                objArr[0] = "storageManager";
                break;
        }
        if (i5 == 2) {
            objArr[1] = "getName";
        } else if (i5 == 3) {
            objArr[1] = "getOriginal";
        } else if (i5 == 4) {
            objArr[1] = "getUnsubstitutedInnerClassesScope";
        } else if (i5 == 5) {
            objArr[1] = "getThisAsReceiverParameter";
        } else if (i5 == 6) {
            objArr[1] = "getContextReceivers";
        } else if (i5 == 9 || i5 == 12 || i5 == 14 || i5 == 16) {
            objArr[1] = "getMemberScope";
        } else if (i5 == 17) {
            objArr[1] = "getUnsubstitutedMemberScope";
        } else if (i5 == 19) {
            objArr[1] = "substitute";
        } else if (i5 != 20) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractClassDescriptor";
        } else {
            objArr[1] = "getDefaultType";
        }
        switch (i5) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 9:
            case 12:
            case 14:
            case 16:
            case 17:
            case 19:
            case 20:
                break;
            case 7:
            case 8:
            case 10:
            case 11:
            case 13:
            case 15:
                objArr[2] = "getMemberScope";
                break;
            case 18:
                objArr[2] = "substitute";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 2 && i5 != 3 && i5 != 4 && i5 != 5 && i5 != 6 && i5 != 9 && i5 != 12 && i5 != 14 && i5 != 16 && i5 != 17 && i5 != 19 && i5 != 20) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // ip.q0
    /* renamed from: O, reason: merged with bridge method [inline-methods] */
    public ip.f c(w0 w0Var) {
        if (w0Var != null) {
            return w0Var.a.f() ? this : new y(this, w0Var);
        }
        C(18);
        throw null;
    }

    @Override // lp.z, ip.f, ip.l
    public final ip.i a() {
        return this;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return ((ha.l) nVar).f0(this, (StringBuilder) obj);
    }

    @Override // ip.l
    public final hq.e getName() {
        hq.e eVar = this.f14127d;
        if (eVar != null) {
            return eVar;
        }
        C(2);
        throw null;
    }

    @Override // ip.f
    public rq.o h0() {
        rq.o oVar = (rq.o) this.f14129i.invoke();
        if (oVar != null) {
            return oVar;
        }
        C(4);
        throw null;
    }

    @Override // lp.z
    public rq.o j(u0 u0Var, zq.f fVar) {
        if (!u0Var.f()) {
            return new rq.t(p(fVar), w0.e(u0Var));
        }
        rq.o p3 = p(fVar);
        if (p3 != null) {
            return p3;
        }
        C(12);
        throw null;
    }

    @Override // ip.f, ip.i
    public final yq.c0 k() {
        yq.c0 c0Var = (yq.c0) this.f14128e.invoke();
        if (c0Var != null) {
            return c0Var;
        }
        C(20);
        throw null;
    }

    @Override // ip.f
    public rq.o n0() {
        oq.e.i(kq.e.d(this));
        rq.o p3 = p(zq.f.a);
        if (p3 != null) {
            return p3;
        }
        C(17);
        throw null;
    }

    @Override // ip.f
    public List p0() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(6);
        throw null;
    }

    @Override // ip.f
    public final u u0() {
        u uVar = (u) this.f14130v.invoke();
        if (uVar != null) {
            return uVar;
        }
        C(5);
        throw null;
    }

    @Override // ip.f
    public final rq.o y(u0 u0Var) {
        oq.e.i(kq.e.d(this));
        rq.o j = j(u0Var, zq.f.a);
        if (j != null) {
            return j;
        }
        C(16);
        throw null;
    }

    @Override // lp.z, ip.l
    public final ip.l a() {
        return this;
    }

    @Override // lp.z, ip.f, ip.l
    public final ip.f a() {
        return this;
    }
}
