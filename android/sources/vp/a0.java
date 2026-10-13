package vp;

import a5.h0;
import com.discord.jank_stats.JankRecordStore;
import ip.p0;
import ip.s0;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IndexedValue;
import kotlin.collections.m0;
import kotlin.collections.q0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.r0;
import yq.b1;
import yq.x0;

/* loaded from: classes3.dex */
public abstract class a0 extends rq.p {

    /* renamed from: m, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f19461m = {com.discord.chat.bridge.botuikit.a.o(a0.class, "functionNamesLazy", "getFunctionNamesLazy()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.o(a0.class, "propertyNamesLazy", "getPropertyNamesLazy()Ljava/util/Set;", 0), com.discord.chat.bridge.botuikit.a.o(a0.class, "classNamesLazy", "getClassNamesLazy()Ljava/util/Set;", 0)};

    /* renamed from: b, reason: collision with root package name */
    public final e4.i f19462b;

    /* renamed from: c, reason: collision with root package name */
    public final a0 f19463c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.c f19464d;

    /* renamed from: e, reason: collision with root package name */
    public final xq.i f19465e;

    /* renamed from: f, reason: collision with root package name */
    public final xq.e f19466f;

    /* renamed from: g, reason: collision with root package name */
    public final xq.j f19467g;

    /* renamed from: h, reason: collision with root package name */
    public final xq.e f19468h;

    /* renamed from: i, reason: collision with root package name */
    public final xq.i f19469i;
    public final xq.i j;
    public final xq.i k;

    /* renamed from: l, reason: collision with root package name */
    public final xq.e f19470l;

    public a0(e4.i c6, o oVar) {
        Intrinsics.checkNotNullParameter(c6, "c");
        this.f19462b = c6;
        this.f19463c = oVar;
        up.a aVar = (up.a) c6.f7952d;
        up.a aVar2 = (up.a) c6.f7952d;
        xq.o oVar2 = aVar.a;
        w wVar = new w(this, 0);
        m0 m0Var = m0.f13512d;
        xq.l lVar = (xq.l) oVar2;
        lVar.getClass();
        if (m0Var == null) {
            xq.l.a(27);
            throw null;
        }
        this.f19464d = new xq.c(lVar, wVar, m0Var);
        xq.o oVar3 = aVar2.a;
        w wVar2 = new w(this, 1);
        xq.l lVar2 = (xq.l) oVar3;
        lVar2.getClass();
        this.f19465e = new xq.i(lVar2, wVar2);
        this.f19466f = ((xq.l) aVar2.a).c(new y(this, 0));
        this.f19467g = ((xq.l) aVar2.a).d(new y(this, 1));
        int i5 = 2;
        this.f19468h = ((xq.l) aVar2.a).c(new y(this, i5));
        xq.o oVar4 = aVar2.a;
        w wVar3 = new w(this, i5);
        xq.l lVar3 = (xq.l) oVar4;
        lVar3.getClass();
        this.f19469i = new xq.i(lVar3, wVar3);
        xq.o oVar5 = aVar2.a;
        w wVar4 = new w(this, 3);
        xq.l lVar4 = (xq.l) oVar5;
        lVar4.getClass();
        this.j = new xq.i(lVar4, wVar4);
        xq.o oVar6 = aVar2.a;
        w wVar5 = new w(this, 4);
        xq.l lVar5 = (xq.l) oVar6;
        lVar5.getClass();
        this.k = new xq.i(lVar5, wVar5);
        this.f19470l = ((xq.l) aVar2.a).c(new y(this, 3));
    }

    public static yq.y l(op.w method, e4.i c6) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(c6, "c");
        Class<?> klass = ((Method) method.b()).getDeclaringClass();
        Intrinsics.checkNotNullExpressionValue(klass, "getDeclaringClass(...)");
        Intrinsics.checkNotNullParameter(klass, "klass");
        return ((k2.r) c6.f7955v).O(method.f(), nf.e.D(x0.f21081e, klass.isAnnotation(), null, 6));
    }

    public static h0 u(e4.i c6, lp.t tVar, List jValueParameters) {
        Pair pair;
        hq.e eVar;
        Intrinsics.checkNotNullParameter(c6, "c");
        lp.t function = tVar;
        Intrinsics.checkNotNullParameter(function, "function");
        Intrinsics.checkNotNullParameter(jValueParameters, "jValueParameters");
        kotlin.collections.v m02 = CollectionsKt.m0(jValueParameters);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(m02, 10));
        Iterator it = m02.iterator();
        boolean z5 = false;
        boolean z6 = false;
        while (true) {
            q0 q0Var = (q0) it;
            if (!q0Var.f13519e.hasNext()) {
                return new h0(CollectionsKt.i0(arrayList), z6);
            }
            IndexedValue indexedValue = (IndexedValue) q0Var.next();
            int i5 = indexedValue.a;
            op.c0 c0Var = (op.c0) indexedValue.f13483b;
            up.c y5 = nf.e.y(c6, c0Var);
            k2.r rVar = (k2.r) c6.f7955v;
            up.a aVar = (up.a) c6.f7952d;
            ip.a0 a0Var = aVar.f18979o;
            wp.a D = nf.e.D(x0.f21081e, z5, null, 7);
            boolean z7 = c0Var.f16158d;
            op.a0 a0Var2 = c0Var.a;
            if (z7) {
                op.h hVar = a0Var2 instanceof op.h ? (op.h) a0Var2 : null;
                if (hVar == null) {
                    throw new AssertionError("Vararg parameter should be an array: " + c0Var);
                }
                b1 N = rVar.N(hVar, D, true);
                pair = new Pair(N, a0Var.g().f(N));
            } else {
                pair = new Pair(rVar.O(a0Var2, D), null);
            }
            yq.y yVar = (yq.y) pair.f13474d;
            yq.y yVar2 = (yq.y) pair.f13475e;
            if (Intrinsics.areEqual(function.getName().b(), "equals") && jValueParameters.size() == 1 && Intrinsics.areEqual(a0Var.g().p(), yVar)) {
                eVar = hq.e.e(JankRecordStore.SCREEN_OTHER);
            } else {
                String str = c0Var.f16157c;
                hq.e d6 = str != null ? hq.e.d(str) : null;
                if (d6 == null) {
                    z6 = true;
                }
                if (d6 == null) {
                    eVar = hq.e.e("p" + i5);
                    Intrinsics.checkNotNullExpressionValue(eVar, "identifier(...)");
                } else {
                    eVar = d6;
                }
            }
            boolean z8 = z6;
            Intrinsics.checkNotNull(eVar);
            arrayList.add(new r0(function, null, i5, y5, eVar, yVar, false, false, false, yVar2, aVar.j.b(c0Var)));
            function = tVar;
            z5 = false;
            z6 = z8;
        }
    }

    @Override // rq.p, rq.o
    public final Set b() {
        return (Set) ys.d.O(this.f19469i, f19461m[0]);
    }

    @Override // rq.p, rq.o
    public Collection c(hq.e name, qp.c location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return !g().contains(name) ? m0.f13512d : (Collection) this.f19470l.invoke(name);
    }

    @Override // rq.p, rq.o
    public final Set d() {
        return (Set) ys.d.O(this.k, f19461m[2]);
    }

    @Override // rq.p, rq.q
    public Collection e(rq.f kindFilter, Function1 nameFilter) {
        Intrinsics.checkNotNullParameter(kindFilter, "kindFilter");
        Intrinsics.checkNotNullParameter(nameFilter, "nameFilter");
        return (Collection) this.f19464d.invoke();
    }

    @Override // rq.p, rq.o
    public Collection f(hq.e name, qp.a location) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(location, "location");
        return !b().contains(name) ? m0.f13512d : (Collection) this.f19468h.invoke(name);
    }

    @Override // rq.p, rq.o
    public final Set g() {
        return (Set) ys.d.O(this.j, f19461m[1]);
    }

    public abstract Set h(rq.f fVar, Function1 function1);

    public abstract Set i(rq.f fVar, rq.l lVar);

    public void j(hq.e name, ArrayList result) {
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(name, "name");
    }

    public abstract c k();

    public abstract void m(LinkedHashSet linkedHashSet, hq.e eVar);

    public abstract void n(hq.e eVar, ArrayList arrayList);

    public abstract Set o(rq.f fVar);

    public abstract lp.u p();

    public abstract ip.l q();

    public boolean r(tp.e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        return true;
    }

    public abstract z s(op.w wVar, ArrayList arrayList, yq.y yVar, List list);

    /* JADX WARN: Type inference failed for: r3v5, types: [java.lang.Object, kotlin.Lazy] */
    public final tp.e t(op.w typeParameterOwner) {
        Intrinsics.checkNotNullParameter(typeParameterOwner, "method");
        e4.i iVar = this.f19462b;
        tp.e containingDeclaration = tp.e.Q0(q(), nf.e.y(iVar, typeParameterOwner), typeParameterOwner.c(), ((up.a) iVar.f7952d).j.b(typeParameterOwner), ((c) this.f19465e.invoke()).c(typeParameterOwner.c()) != null && ((ArrayList) typeParameterOwner.g()).isEmpty());
        Intrinsics.checkNotNullExpressionValue(containingDeclaration, "createJavaMethod(...)");
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(typeParameterOwner, "typeParameterOwner");
        e4.i iVar2 = new e4.i((up.a) iVar.f7952d, new ad.d0(iVar, containingDeclaration, typeParameterOwner, 0), iVar.f7954i);
        ArrayList typeParameters = typeParameterOwner.getTypeParameters();
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(typeParameters, 10));
        Iterator it = typeParameters.iterator();
        while (it.hasNext()) {
            s0 a = ((up.e) iVar2.f7953e).a((op.b0) it.next());
            Intrinsics.checkNotNull(a);
            arrayList.add(a);
        }
        h0 u5 = u(iVar2, containingDeclaration, typeParameterOwner.g());
        z s2 = s(typeParameterOwner, arrayList, l(typeParameterOwner, iVar2), (List) u5.f176i);
        List list = s2.f19540d;
        lp.u p3 = p();
        m0 m0Var = m0.f13512d;
        ArrayList arrayList2 = s2.f19539c;
        List list2 = s2.f19538b;
        yq.y yVar = s2.a;
        p0 p0Var = ip.z.f12179d;
        boolean isAbstract = Modifier.isAbstract(((Method) typeParameterOwner.b()).getModifiers());
        boolean isFinal = Modifier.isFinal(((Method) typeParameterOwner.b()).getModifiers());
        p0Var.getClass();
        containingDeclaration.P0(null, p3, m0Var, arrayList2, list2, yVar, isAbstract ? ip.z.f12183w : !isFinal ? ip.z.f12182v : ip.z.f12180e, ys.l.y(typeParameterOwner.e()), v0.d());
        containingDeclaration.R0(false, u5.f175e);
        if (list.isEmpty()) {
            return containingDeclaration;
        }
        ((up.a) iVar2.f7952d).f18971e.getClass();
        throw new UnsupportedOperationException("Should not be called");
    }

    public String toString() {
        return "Lazy scope for " + q();
    }
}
