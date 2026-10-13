package hp;

import cp.d0;
import ip.a0;
import ip.u;
import ip.v;
import ip.z;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c1;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.reflect.KProperty;
import lp.l0;
import lp.r0;
import lp.s;
import lp.t;
import yq.c0;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public final class o implements kp.b, kp.d {

    /* renamed from: h, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f10183h = {com.discord.chat.bridge.botuikit.a.o(o.class, "settings", "getSettings()Lorg/jetbrains/kotlin/builtins/jvm/JvmBuiltIns$Settings;", 0), com.discord.chat.bridge.botuikit.a.o(o.class, "cloneableType", "getCloneableType()Lorg/jetbrains/kotlin/types/SimpleType;", 0), com.discord.chat.bridge.botuikit.a.o(o.class, "notConsideredDeprecation", "getNotConsideredDeprecation()Lorg/jetbrains/kotlin/descriptors/annotations/Annotations;", 0)};
    public final a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.i f10184b;

    /* renamed from: c, reason: collision with root package name */
    public final c0 f10185c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.i f10186d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.e f10187e;

    /* renamed from: f, reason: collision with root package name */
    public final xq.i f10188f;

    /* renamed from: g, reason: collision with root package name */
    public final xq.e f10189g;

    public o(lp.a0 moduleDescriptor, xq.l storageManager, d0 settingsComputation) {
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(settingsComputation, "settingsComputation");
        this.a = moduleDescriptor;
        this.f10184b = new xq.i(storageManager, settingsComputation);
        lp.j jVar = new lp.j(new m(moduleDescriptor, new hq.c("java.io"), 0), hq.e.e("Serializable"), z.f12183w, ip.g.f12139e, b0.c(new yq.a0(storageManager, new k(this, 1))), storageManager);
        jVar.l0(rq.n.f17557b, o0.f13515d, null);
        c0 k = jVar.k();
        Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
        this.f10185c = k;
        this.f10186d = new xq.i(storageManager, new bs.q(6, this, storageManager));
        this.f10187e = new xq.e(storageManager, new ConcurrentHashMap(3, 1.0f, 2), new xq.f(), 0);
        this.f10188f = new xq.i(storageManager, new k(this, 0));
        this.f10189g = storageManager.c(new aq.a(2, this));
    }

    @Override // kp.b
    public final Collection a(ip.f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        if (classDescriptor.b() != ip.g.f12138d) {
            return m0.f13512d;
        }
        g().getClass();
        vp.j f2 = f(classDescriptor);
        if (f2 == null) {
            return m0.f13512d;
        }
        ip.f b10 = e.b(oq.e.g(f2), b.f10145f);
        if (b10 == null) {
            return m0.f13512d;
        }
        w0 c6 = nt.a.k(b10, f2).c();
        List list = (List) f2.N.f19515q.invoke();
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            lp.h hVar = (lp.h) next;
            lp.h hVar2 = hVar;
            if (hVar2.getVisibility().a.f3159b) {
                Collection q5 = b10.q();
                Intrinsics.checkNotNullExpressionValue(q5, "getConstructors(...)");
                Collection<lp.h> collection = q5;
                if (!(collection instanceof Collection) || !collection.isEmpty()) {
                    for (lp.h hVar3 : collection) {
                        Intrinsics.checkNotNull(hVar3);
                        if (kq.n.j(hVar3, hVar.c(c6)) == kq.l.f13626d) {
                            break;
                        }
                    }
                }
                if (hVar2.P().size() == 1) {
                    List P = hVar2.P();
                    Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                    ip.i a = ((r0) CollectionsKt.Z(P)).getType().r0().a();
                    if (Intrinsics.areEqual(a != null ? oq.e.h(a) : null, oq.e.h(classDescriptor))) {
                    }
                }
                if (!fp.i.D(hVar) && !r.f10198f.contains(ki.b.Q(f2, ks.n.g(hVar, 3)))) {
                    arrayList.add(next);
                }
            }
        }
        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(arrayList, 10));
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            lp.h hVar4 = (lp.h) it2.next();
            lp.h hVar5 = hVar4;
            hVar5.getClass();
            s H0 = hVar5.H0(w0.f21077b);
            H0.f14179e = classDescriptor;
            H0.o(classDescriptor.k());
            H0.L = true;
            u0 g6 = c6.g();
            if (g6 == null) {
                s.a(37);
                throw null;
            }
            H0.f14178d = g6;
            if (!r.f10199g.contains(ki.b.Q(f2, ks.n.g(hVar4, 3)))) {
                H0.u((jp.h) ys.d.O(this.f10188f, f10183h[2]));
            }
            t E0 = H0.U.E0(H0);
            Intrinsics.checkNotNull(E0, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassConstructorDescriptor");
            arrayList2.add((lp.h) E0);
        }
        return arrayList2;
    }

    @Override // kp.b
    public final Collection b(ip.f classDescriptor) {
        Set set;
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        g().getClass();
        vp.j f2 = f(classDescriptor);
        if (f2 == null || (set = f2.n0().b()) == null) {
            set = o0.f13515d;
        }
        return set;
    }

    @Override // kp.d
    public final boolean c(ip.f classDescriptor, wq.s functionDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
        vp.j f2 = f(classDescriptor);
        if (f2 == null || !functionDescriptor.getAnnotations().r(kp.e.a)) {
            return true;
        }
        g().getClass();
        String g6 = ks.n.g(functionDescriptor, 3);
        vp.o n02 = f2.n0();
        hq.e name = functionDescriptor.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        Collection f10 = n02.f(name, qp.c.f16937d);
        if ((f10 instanceof Collection) && f10.isEmpty()) {
            return false;
        }
        Iterator it = f10.iterator();
        while (it.hasNext()) {
            if (Intrinsics.areEqual(ks.n.g((l0) it.next(), 3), g6)) {
                return true;
            }
        }
        return false;
    }

    @Override // kp.b
    public final Collection d(ip.f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        hq.d fqName = oq.e.h(classDescriptor);
        LinkedHashSet linkedHashSet = r.a;
        boolean a = r.a(fqName);
        boolean z5 = false;
        c0 c0Var = this.f10185c;
        if (a) {
            return kotlin.collections.c0.g((c0) ys.d.O(this.f10186d, f10183h[1]), c0Var);
        }
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        if (r.a(fqName)) {
            z5 = true;
        } else {
            String str = d.a;
            hq.b f2 = d.f(fqName);
            if (f2 != null) {
                try {
                    z5 = Serializable.class.isAssignableFrom(Class.forName(f2.a().a.a));
                } catch (ClassNotFoundException unused) {
                }
            }
        }
        return z5 ? b0.c(c0Var) : m0.f13512d;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x024b  */
    @Override // kp.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Collection e(hq.e name, ip.f mutable) {
        Set b10;
        l0 l0Var;
        Iterable<l0> iterable;
        boolean z5;
        boolean booleanValue;
        l0 l0Var2;
        jp.h hVar;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(mutable, "classDescriptor");
        boolean areEqual = Intrinsics.areEqual(name, a.f10144e);
        KProperty[] kPropertyArr = f10183h;
        if (areEqual && (mutable instanceof wq.i) && (fp.i.b(mutable, fp.o.f8888g) || fp.i.s(mutable) != null)) {
            wq.i iVar = (wq.i) mutable;
            List list = iVar.f20008w.N;
            Intrinsics.checkNotNullExpressionValue(list, "getFunctionList(...)");
            if (list == null || !list.isEmpty()) {
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    if (Intrinsics.areEqual(nt.a.u((eq.g) iVar.I.f3399i, ((cq.a0) it.next()).f7008x), a.f10144e)) {
                        return m0.f13512d;
                    }
                }
            }
            u m02 = ((l0) CollectionsKt.Y(((c0) ys.d.O(this.f10186d, kPropertyArr[1])).N().f(name, qp.c.f16937d))).m0();
            m02.K(iVar);
            m02.D(ip.q.f12159e);
            m02.o(iVar.k());
            m02.H(iVar.u0());
            v build = m02.build();
            Intrinsics.checkNotNull(build);
            return b0.c((l0) build);
        }
        g().getClass();
        vp.j f2 = f(mutable);
        if (f2 == null) {
            iterable = m0.f13512d;
        } else {
            hq.c fqName = oq.e.g(f2);
            b builtIns = b.f10145f;
            Intrinsics.checkNotNullParameter(fqName, "fqName");
            Intrinsics.checkNotNullParameter(builtIns, "builtIns");
            ip.f b11 = e.b(fqName, builtIns);
            if (b11 == null) {
                b10 = o0.f13515d;
            } else {
                String str = d.a;
                hq.c cVar = (hq.c) d.k.get(oq.e.h(b11));
                b10 = cVar == null ? c1.b(b11) : kotlin.collections.c0.g(b11, builtIns.j(cVar));
            }
            Iterable iterable2 = b10;
            ip.f fVar = (ip.f) CollectionsKt.R(iterable2);
            if (fVar != null) {
                int i5 = ir.k.f12269i;
                ArrayList set = new ArrayList(kotlin.collections.d0.l(iterable2, 10));
                Iterator it2 = iterable2.iterator();
                while (it2.hasNext()) {
                    set.add(oq.e.g((ip.f) it2.next()));
                }
                Intrinsics.checkNotNullParameter(set, "set");
                ir.k kVar = new ir.k(0);
                kVar.addAll(set);
                Intrinsics.checkNotNullParameter(mutable, "mutable");
                String str2 = d.a;
                boolean containsKey = d.j.containsKey(kq.e.g(mutable));
                hq.c g6 = oq.e.g(f2);
                bs.q qVar = new bs.q(7, f2, fVar);
                xq.e eVar = this.f10187e;
                eVar.getClass();
                Object invoke = eVar.invoke(new xq.g(g6, qVar));
                if (invoke == null) {
                    xq.e.a(3);
                    throw null;
                }
                rq.o it3 = ((ip.f) invoke).n0();
                Intrinsics.checkNotNullExpressionValue(it3, "getUnsubstitutedMemberScope(...)");
                Intrinsics.checkNotNullParameter(it3, "it");
                Collection f10 = it3.f(name, qp.c.f16937d);
                ArrayList arrayList = new ArrayList();
                for (Object obj : f10) {
                    l0 l0Var3 = (l0) obj;
                    if (l0Var3.b() == ip.c.f12123d && l0Var3.getVisibility().a.f3159b && !fp.i.D(l0Var3)) {
                        Collection i6 = l0Var3.i();
                        Intrinsics.checkNotNullExpressionValue(i6, "getOverriddenDescriptors(...)");
                        Collection collection = i6;
                        if (!(collection instanceof Collection) || !collection.isEmpty()) {
                            Iterator it4 = collection.iterator();
                            while (it4.hasNext()) {
                                ip.l h6 = ((v) it4.next()).h();
                                Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                                if (kVar.contains(oq.e.g(h6))) {
                                    break;
                                }
                            }
                        }
                        ip.l h7 = l0Var3.h();
                        Intrinsics.checkNotNull(h7, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                        if (r.f10197e.contains(ki.b.Q((ip.f) h7, ks.n.g(l0Var3, 3))) ^ containsKey) {
                            booleanValue = true;
                        } else {
                            Boolean i10 = ir.n.i(b0.c(l0Var3), e.f10159d, new f(this));
                            Intrinsics.checkNotNullExpressionValue(i10, "ifAny(...)");
                            booleanValue = i10.booleanValue();
                        }
                        if (!booleanValue) {
                            z5 = true;
                        }
                        z5 = false;
                    } else {
                        z5 = false;
                    }
                    if (z5) {
                        arrayList.add(obj);
                    }
                }
                l0Var = null;
                iterable = arrayList;
                ArrayList arrayList2 = new ArrayList();
                for (l0 l0Var4 : iterable) {
                    ip.l h10 = l0Var4.h();
                    Intrinsics.checkNotNull(h10, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    v c6 = l0Var4.c(nt.a.k((ip.f) h10, mutable).c());
                    Intrinsics.checkNotNull(c6, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.SimpleFunctionDescriptor");
                    u m03 = ((l0) c6).m0();
                    m03.K(mutable);
                    m03.H(mutable.u0());
                    m03.i();
                    ip.l h11 = l0Var4.h();
                    Intrinsics.checkNotNull(h11, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    Object g10 = ir.n.g(b0.c((ip.f) h11), new u4.c(this), new n(ks.n.g(l0Var4, 3), new Ref.ObjectRef()));
                    Intrinsics.checkNotNullExpressionValue(g10, "dfs(...)");
                    int ordinal = ((l) g10).ordinal();
                    if (ordinal != 0) {
                        if (ordinal == 1) {
                            Unit unit = Unit.a;
                        } else if (ordinal == 2) {
                            hq.e name2 = l0Var4.getName();
                            boolean areEqual2 = Intrinsics.areEqual(name2, p.a);
                            xq.e eVar2 = this.f10189g;
                            if (areEqual2) {
                                hVar = (jp.h) eVar2.invoke(new Pair(l0Var4.getName().b(), "first"));
                            } else {
                                if (!Intrinsics.areEqual(name2, p.f10190b)) {
                                    throw new IllegalStateException(("Unexpected name: " + l0Var4.getName()).toString());
                                }
                                hVar = (jp.h) eVar2.invoke(new Pair(l0Var4.getName().b(), "last"));
                            }
                            m03.u(hVar);
                        } else if (ordinal != 3) {
                            if (ordinal != 4) {
                                throw new fo.n();
                            }
                            l0Var2 = l0Var;
                        } else {
                            m03.u((jp.h) ys.d.O(this.f10188f, kPropertyArr[2]));
                        }
                        v build2 = m03.build();
                        Intrinsics.checkNotNull(build2);
                        l0Var2 = (l0) build2;
                    } else {
                        Intrinsics.checkNotNullParameter(mutable, "<this>");
                        if (!(mutable.e() == z.f12180e && mutable.b() != ip.g.f12140i)) {
                            m03.s();
                            v build22 = m03.build();
                            Intrinsics.checkNotNull(build22);
                            l0Var2 = (l0) build22;
                        }
                        l0Var2 = l0Var;
                    }
                    if (l0Var2 != null) {
                        arrayList2.add(l0Var2);
                    }
                }
                return arrayList2;
            }
            iterable = m0.f13512d;
        }
        l0Var = null;
        ArrayList arrayList22 = new ArrayList();
        while (r1.hasNext()) {
        }
        return arrayList22;
    }

    public final vp.j f(ip.f fVar) {
        hq.c a;
        if (fVar == null) {
            fp.i.a(108);
            throw null;
        }
        if (!fp.i.b(fVar, fp.o.a) && fp.i.J(fVar)) {
            hq.d h6 = oq.e.h(fVar);
            if (h6.d()) {
                String str = d.a;
                hq.b f2 = d.f(h6);
                if (f2 != null && (a = f2.a()) != null) {
                    lp.a0 a0Var = g().a;
                    qp.c cVar = qp.c.f16937d;
                    ip.f v5 = ks.n.v(a0Var, a);
                    if (v5 instanceof vp.j) {
                        return (vp.j) v5;
                    }
                }
            }
        }
        return null;
    }

    public final i g() {
        return (i) ys.d.O(this.f10184b, f10183h[0]);
    }
}
