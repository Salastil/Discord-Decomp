package cp;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public abstract class a2 {
    public static final hq.b a;

    static {
        hq.c topLevelFqName = new hq.c("java.lang.Void");
        Intrinsics.checkNotNullParameter(topLevelFqName, "topLevelFqName");
        a = new hq.b(topLevelFqName.b(), topLevelFqName.a.f());
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static j a(ip.v vVar) {
        String L = ys.d.L(vVar);
        if (L == null) {
            if (vVar instanceof lp.j0) {
                String b10 = oq.e.k(vVar).getName().b();
                Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
                L = rp.x.a(b10);
            } else if (vVar instanceof lp.k0) {
                String b11 = oq.e.k(vVar).getName().b();
                Intrinsics.checkNotNullExpressionValue(b11, "asString(...)");
                L = rp.x.b(b11);
            } else {
                L = ((lp.l) vVar).getName().b();
                Intrinsics.checkNotNullExpressionValue(L, "asString(...)");
            }
        }
        return new j(new gq.e(L, ks.n.g(vVar, 1)));
    }

    public static zk.a b(ip.m0 possiblyOverriddenProperty) {
        Intrinsics.checkNotNullParameter(possiblyOverriddenProperty, "possiblyOverriddenProperty");
        ip.m0 a10 = ((ip.m0) kq.e.t(possiblyOverriddenProperty)).a();
        Intrinsics.checkNotNullExpressionValue(a10, "getOriginal(...)");
        if (a10 instanceof wq.r) {
            wq.r rVar = (wq.r) a10;
            cq.i0 i0Var = rVar.Y;
            iq.m propertySignature = fq.k.f8996d;
            Intrinsics.checkNotNullExpressionValue(propertySignature, "propertySignature");
            fq.e eVar = (fq.e) zk.a.q(i0Var, propertySignature);
            if (eVar != null) {
                return new m(rVar, i0Var, eVar, rVar.Z, rVar.a0);
            }
        } else if (a10 instanceof tp.f) {
            tp.f fVar = (tp.f) a10;
            ip.o0 d6 = fVar.d();
            np.f fVar2 = d6 instanceof np.f ? (np.f) d6 : null;
            op.r rVar2 = fVar2 != null ? fVar2.f15587d : null;
            if (rVar2 instanceof op.t) {
                return new k(((op.t) rVar2).a);
            }
            if (!(rVar2 instanceof op.w)) {
                throw new u1("Incorrect resolution sequence for Java field " + a10 + " (source = " + rVar2 + ')');
            }
            Method method = ((op.w) rVar2).a;
            lp.k0 k0Var = fVar.V;
            ip.o0 d7 = k0Var != null ? k0Var.d() : null;
            np.f fVar3 = d7 instanceof np.f ? (np.f) d7 : null;
            op.r rVar3 = fVar3 != null ? fVar3.f15587d : null;
            op.w wVar = rVar3 instanceof op.w ? (op.w) rVar3 : null;
            return new l(method, wVar != null ? wVar.a : null);
        }
        lp.j0 getter = a10.getGetter();
        Intrinsics.checkNotNull(getter);
        j a11 = a(getter);
        lp.k0 setter = a10.getSetter();
        return new n(a11, setter != null ? a(setter) : null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static ys.l c(ip.v possiblySubstitutedFunction) {
        Method method;
        Intrinsics.checkNotNullParameter(possiblySubstitutedFunction, "possiblySubstitutedFunction");
        ip.v a10 = ((ip.v) kq.e.t(possiblySubstitutedFunction)).a();
        Intrinsics.checkNotNullExpressionValue(a10, "getOriginal(...)");
        if (!(a10 instanceof wq.b)) {
            if (a10 instanceof tp.e) {
                ip.o0 d6 = ((tp.e) a10).d();
                np.f fVar = d6 instanceof np.f ? (np.f) d6 : null;
                op.r rVar = fVar != null ? fVar.f15587d : null;
                op.w wVar = rVar instanceof op.w ? (op.w) rVar : null;
                if (wVar != null && (method = wVar.a) != null) {
                    return new h(method);
                }
                throw new u1("Incorrect resolution sequence for Java method " + a10);
            }
            if (a10 instanceof tp.b) {
                ip.o0 d7 = ((tp.b) a10).d();
                np.f fVar2 = d7 instanceof np.f ? (np.f) d7 : null;
                Object obj = fVar2 != null ? fVar2.f15587d : null;
                if (obj instanceof op.q) {
                    return new g(((op.q) obj).a);
                }
                if (obj instanceof op.n) {
                    Class cls = ((op.n) obj).a;
                    if (cls.isAnnotation()) {
                        return new f(cls);
                    }
                }
                throw new u1("Incorrect resolution sequence for Java constructor " + a10 + " (" + obj + ')');
            }
            if (a10 == 0) {
                m3.n.c(28);
                throw null;
            }
            lp.l lVar = (lp.l) a10;
            if ((lVar.getName().equals(fp.p.f8908c) && m3.n.c0(a10)) || ((lVar.getName().equals(fp.p.a) && m3.n.c0(a10)) || (Intrinsics.areEqual(lVar.getName(), hp.a.f10144e) && a10.P().isEmpty()))) {
                return a(a10);
            }
            throw new u1("Unknown origin of " + a10 + " (" + a10.getClass() + ')');
        }
        wq.l lVar2 = (wq.l) a10;
        iq.a u5 = lVar2.u();
        if (u5 instanceof cq.a0) {
            iq.g gVar = gq.g.a;
            gq.e c6 = gq.g.c((cq.a0) u5, lVar2.Q(), lVar2.I());
            if (c6 != null) {
                return new j(c6);
            }
        }
        if (u5 instanceof cq.n) {
            iq.g gVar2 = gq.g.a;
            gq.e a11 = gq.g.a((cq.n) u5, lVar2.Q(), lVar2.I());
            if (a11 != null) {
                String name = a11.f9439v;
                String str = a11.f9440w;
                ip.l h6 = possiblySubstitutedFunction.h();
                Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                if (kq.g.b(h6)) {
                    return new j(a11);
                }
                ip.l h7 = possiblySubstitutedFunction.h();
                Intrinsics.checkNotNullExpressionValue(h7, "getContainingDeclaration(...)");
                if (!kq.g.d(h7)) {
                    return new i(a11);
                }
                ip.k kVar = (ip.k) possiblySubstitutedFunction;
                if (kVar.r()) {
                    if (!Intrinsics.areEqual(name, "constructor-impl") || !kotlin.text.x.h(str, ")V", false)) {
                        throw new IllegalArgumentException(("Invalid signature: " + a11).toString());
                    }
                } else {
                    if (!Intrinsics.areEqual(name, "constructor-impl")) {
                        throw new IllegalArgumentException(("Invalid signature: " + a11).toString());
                    }
                    ip.f s2 = kVar.s();
                    Intrinsics.checkNotNullExpressionValue(s2, "getConstructedClass(...)");
                    Intrinsics.checkNotNullParameter(s2, "<this>");
                    hq.b f2 = oq.e.f(s2);
                    Intrinsics.checkNotNull(f2);
                    String b10 = gq.b.b(f2.b());
                    if (kotlin.text.x.h(str, ")V", false)) {
                        String desc = StringsKt.O(str, "V") + b10;
                        Intrinsics.checkNotNullParameter(name, "name");
                        Intrinsics.checkNotNullParameter(desc, "desc");
                        a11 = new gq.e(name, desc);
                    } else if (!kotlin.text.x.h(str, b10, false)) {
                        throw new IllegalArgumentException(("Invalid signature: " + a11).toString());
                    }
                }
                return new j(a11);
            }
        }
        return a(a10);
    }
}
