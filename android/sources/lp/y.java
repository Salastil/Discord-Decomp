package lp;

import ip.t0;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.u0;
import yq.w0;
import yq.z0;

/* loaded from: classes3.dex */
public final class y extends z {

    /* renamed from: d, reason: collision with root package name */
    public final z f14197d;

    /* renamed from: e, reason: collision with root package name */
    public final w0 f14198e;

    /* renamed from: i, reason: collision with root package name */
    public w0 f14199i;

    /* renamed from: v, reason: collision with root package name */
    public ArrayList f14200v;

    /* renamed from: w, reason: collision with root package name */
    public ArrayList f14201w;

    /* renamed from: x, reason: collision with root package name */
    public yq.l f14202x;

    public y(z zVar, w0 w0Var) {
        this.f14197d = zVar;
        this.f14198e = w0Var;
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0069  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00c6 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00e3 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0073  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0099  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x009e  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x00a8  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x00ad  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x00b2  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x00b7  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x00bc  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x00bf  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x00c2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void C(int i5) {
        String format;
        String str = (i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6 || i5 == 8 || i5 == 10 || i5 == 13 || i5 == 23) ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[(i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6 || i5 == 8 || i5 == 10 || i5 == 13 || i5 == 23) ? 3 : 2];
        if (i5 != 2) {
            if (i5 != 3) {
                if (i5 != 5) {
                    if (i5 != 6) {
                        if (i5 != 8) {
                            if (i5 != 10) {
                                if (i5 != 13) {
                                    if (i5 != 23) {
                                        objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/LazySubstitutingClassDescriptor";
                                    } else {
                                        objArr[0] = "substitutor";
                                    }
                                    switch (i5) {
                                        case 2:
                                        case 3:
                                        case 5:
                                        case 6:
                                        case 8:
                                        case 10:
                                        case 13:
                                        case 23:
                                            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/LazySubstitutingClassDescriptor";
                                            break;
                                        case 4:
                                        case 7:
                                        case 9:
                                        case 11:
                                            objArr[1] = "getMemberScope";
                                            break;
                                        case 12:
                                        case 14:
                                            objArr[1] = "getUnsubstitutedMemberScope";
                                            break;
                                        case 15:
                                            objArr[1] = "getStaticScope";
                                            break;
                                        case 16:
                                            objArr[1] = "getDefaultType";
                                            break;
                                        case 17:
                                            objArr[1] = "getContextReceivers";
                                            break;
                                        case 18:
                                            objArr[1] = "getConstructors";
                                            break;
                                        case 19:
                                            objArr[1] = "getAnnotations";
                                            break;
                                        case 20:
                                            objArr[1] = "getName";
                                            break;
                                        case 21:
                                            objArr[1] = "getOriginal";
                                            break;
                                        case 22:
                                            objArr[1] = "getContainingDeclaration";
                                            break;
                                        case 24:
                                            objArr[1] = "substitute";
                                            break;
                                        case 25:
                                            objArr[1] = "getKind";
                                            break;
                                        case 26:
                                            objArr[1] = "getModality";
                                            break;
                                        case 27:
                                            objArr[1] = "getVisibility";
                                            break;
                                        case 28:
                                            objArr[1] = "getUnsubstitutedInnerClassesScope";
                                            break;
                                        case 29:
                                            objArr[1] = "getSource";
                                            break;
                                        case 30:
                                            objArr[1] = "getDeclaredTypeParameters";
                                            break;
                                        case 31:
                                            objArr[1] = "getSealedSubclasses";
                                            break;
                                        default:
                                            objArr[1] = "getTypeConstructor";
                                            break;
                                    }
                                    if (i5 != 2 || i5 == 3 || i5 == 5 || i5 == 6 || i5 == 8 || i5 == 10) {
                                        objArr[2] = "getMemberScope";
                                    } else if (i5 == 13) {
                                        objArr[2] = "getUnsubstitutedMemberScope";
                                    } else if (i5 == 23) {
                                        objArr[2] = "substitute";
                                    }
                                    format = String.format(str, objArr);
                                    if (i5 == 2 && i5 != 3 && i5 != 5 && i5 != 6 && i5 != 8 && i5 != 10 && i5 != 13 && i5 != 23) {
                                        throw new IllegalStateException(format);
                                    }
                                    throw new IllegalArgumentException(format);
                                }
                            }
                        }
                    }
                }
                objArr[0] = "typeSubstitution";
                switch (i5) {
                }
                if (i5 != 2) {
                }
                objArr[2] = "getMemberScope";
                format = String.format(str, objArr);
                if (i5 == 2) {
                }
                throw new IllegalArgumentException(format);
            }
            objArr[0] = "kotlinTypeRefiner";
            switch (i5) {
            }
            if (i5 != 2) {
            }
            objArr[2] = "getMemberScope";
            format = String.format(str, objArr);
            if (i5 == 2) {
            }
            throw new IllegalArgumentException(format);
        }
        objArr[0] = "typeArguments";
        switch (i5) {
        }
        if (i5 != 2) {
        }
        objArr[2] = "getMemberScope";
        format = String.format(str, objArr);
        if (i5 == 2) {
        }
        throw new IllegalArgumentException(format);
    }

    @Override // ip.j
    public final boolean A() {
        return this.f14197d.A();
    }

    @Override // ip.f
    public final h G() {
        return this.f14197d.G();
    }

    @Override // ip.f
    public final rq.o H() {
        rq.o H = this.f14197d.H();
        if (H != null) {
            return H;
        }
        C(15);
        throw null;
    }

    @Override // ip.f
    public final ip.f J() {
        return this.f14197d.J();
    }

    public final w0 O() {
        if (this.f14199i == null) {
            w0 w0Var = this.f14198e;
            if (w0Var.a.f()) {
                this.f14199i = w0Var;
            } else {
                List parameters = this.f14197d.n().getParameters();
                this.f14200v = new ArrayList(parameters.size());
                this.f14199i = yq.c.A(parameters, w0Var.g(), this, this.f14200v);
                this.f14201w = CollectionsKt.H(this.f14200v, new x());
            }
        }
        return this.f14199i;
    }

    @Override // lp.z, ip.f, ip.l
    public final ip.f a() {
        ip.f a = this.f14197d.a();
        if (a != null) {
            return a;
        }
        C(21);
        throw null;
    }

    @Override // ip.f
    public final ip.g b() {
        ip.g b10 = this.f14197d.b();
        if (b10 != null) {
            return b10;
        }
        C(25);
        throw null;
    }

    @Override // ip.q0
    public final ip.m c(w0 w0Var) {
        if (w0Var != null) {
            return w0Var.a.f() ? this : new y(this, w0.f(w0Var.g(), O().g()));
        }
        C(23);
        throw null;
    }

    @Override // ip.m
    public final ip.o0 d() {
        return ip.o0.f12151g;
    }

    @Override // ip.f, ip.y
    public final ip.z e() {
        ip.z e9 = this.f14197d.e();
        if (e9 != null) {
            return e9;
        }
        C(26);
        throw null;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return ((ha.l) nVar).f0(this, (StringBuilder) obj);
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        jp.h annotations = this.f14197d.getAnnotations();
        if (annotations != null) {
            return annotations;
        }
        C(19);
        throw null;
    }

    @Override // ip.l
    public final hq.e getName() {
        hq.e name = this.f14197d.getName();
        if (name != null) {
            return name;
        }
        C(20);
        throw null;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p visibility = this.f14197d.getVisibility();
        if (visibility != null) {
            return visibility;
        }
        C(27);
        throw null;
    }

    @Override // ip.l
    public final ip.l h() {
        ip.l h6 = this.f14197d.h();
        if (h6 != null) {
            return h6;
        }
        C(22);
        throw null;
    }

    @Override // ip.f
    public final rq.o h0() {
        rq.o h0 = this.f14197d.h0();
        if (h0 != null) {
            return h0;
        }
        C(28);
        throw null;
    }

    @Override // ip.f
    public final t0 i0() {
        t0 i02 = this.f14197d.i0();
        if (i02 == null) {
            return null;
        }
        aq.a transform = new aq.a(8, this);
        Intrinsics.checkNotNullParameter(transform, "transform");
        if (i02 instanceof ip.w) {
            ip.w wVar = (ip.w) i02;
            return new ip.w(wVar.a, (cr.e) transform.invoke(wVar.f12175b));
        }
        if (!(i02 instanceof ip.b0)) {
            throw new fo.n();
        }
        ArrayList arrayList = ((ip.b0) i02).a;
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            arrayList2.add(new Pair((hq.e) pair.f13474d, transform.invoke((cr.e) pair.f13475e)));
        }
        return new ip.b0(arrayList2);
    }

    @Override // ip.y
    public final boolean isExternal() {
        return this.f14197d.isExternal();
    }

    @Override // ip.f
    public final boolean isInline() {
        return this.f14197d.isInline();
    }

    @Override // ip.f
    public final boolean isValue() {
        return this.f14197d.isValue();
    }

    @Override // lp.z
    public final rq.o j(u0 u0Var, zq.f fVar) {
        rq.o j = this.f14197d.j(u0Var, fVar);
        if (!this.f14198e.a.f()) {
            return new rq.t(j, O());
        }
        if (j != null) {
            return j;
        }
        C(7);
        throw null;
    }

    @Override // ip.f, ip.i
    public final yq.c0 k() {
        yq.k0 g6;
        List d6 = z0.d(n().getParameters());
        jp.h annotations = getAnnotations();
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        if (annotations.isEmpty()) {
            yq.k0.f21045e.getClass();
            g6 = yq.k0.f21046i;
        } else {
            e4.r rVar = yq.k0.f21045e;
            List c6 = kotlin.collections.b0.c(new yq.j(annotations));
            rVar.getClass();
            g6 = e4.r.g(c6);
        }
        return yq.c.v(d6, n0(), g6, n(), false);
    }

    @Override // ip.f, ip.j
    public final List l() {
        O();
        ArrayList arrayList = this.f14201w;
        if (arrayList != null) {
            return arrayList;
        }
        C(30);
        throw null;
    }

    @Override // ip.i
    public final yq.p0 n() {
        yq.p0 n6 = this.f14197d.n();
        if (this.f14198e.a.f()) {
            if (n6 != null) {
                return n6;
            }
            C(0);
            throw null;
        }
        if (this.f14202x == null) {
            w0 O = O();
            Collection b10 = n6.b();
            ArrayList arrayList = new ArrayList(b10.size());
            Iterator it = b10.iterator();
            while (it.hasNext()) {
                arrayList.add(O.j((yq.y) it.next(), c1.f21013i));
            }
            this.f14202x = new yq.l(this, this.f14200v, arrayList, xq.l.f20551e);
        }
        yq.l lVar = this.f14202x;
        if (lVar != null) {
            return lVar;
        }
        C(1);
        throw null;
    }

    @Override // ip.f
    public final rq.o n0() {
        oq.e.i(kq.e.d(this.f14197d));
        return p(zq.f.a);
    }

    @Override // ip.f
    public final boolean o() {
        return this.f14197d.o();
    }

    @Override // ip.y
    public final boolean o0() {
        return this.f14197d.o0();
    }

    @Override // lp.z
    public final rq.o p(zq.f fVar) {
        rq.o p3 = this.f14197d.p(fVar);
        if (!this.f14198e.a.f()) {
            return new rq.t(p3, O());
        }
        if (p3 != null) {
            return p3;
        }
        C(14);
        throw null;
    }

    @Override // ip.f
    public final List p0() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        C(17);
        throw null;
    }

    @Override // ip.f
    public final Collection q() {
        Collection<h> q5 = this.f14197d.q();
        ArrayList arrayList = new ArrayList(q5.size());
        for (h hVar : q5) {
            h hVar2 = hVar;
            hVar2.getClass();
            s H0 = hVar2.H0(w0.f21077b);
            H0.f14182w = hVar.A0();
            H0.p(hVar2.e());
            H0.D(hVar2.getVisibility());
            H0.A(hVar2.b());
            H0.J = false;
            arrayList.add(((h) H0.U.E0(H0)).c(O()));
        }
        return arrayList;
    }

    @Override // ip.f
    public final boolean s0() {
        return this.f14197d.s0();
    }

    @Override // ip.f
    public final boolean t() {
        return this.f14197d.t();
    }

    @Override // ip.f
    public final u u0() {
        throw new UnsupportedOperationException();
    }

    @Override // ip.f
    public final Collection x() {
        Collection x5 = this.f14197d.x();
        if (x5 != null) {
            return x5;
        }
        C(31);
        throw null;
    }

    @Override // ip.f
    public final rq.o y(u0 u0Var) {
        oq.e.i(kq.e.d(this));
        return j(u0Var, zq.f.a);
    }

    @Override // ip.y
    public final boolean z() {
        return this.f14197d.z();
    }
}
