package vp;

import bs.a1;
import ip.d1;
import ip.n0;
import ip.p0;
import ip.t0;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import yq.x0;

/* loaded from: classes3.dex */
public final class j extends lp.i implements tp.c {
    public final op.n E;
    public final ip.f F;
    public final e4.i G;
    public final fo.u H;
    public final ip.g I;
    public final ip.z J;
    public final a1 K;
    public final boolean L;
    public final h M;
    public final o N;
    public final n0 O;
    public final rq.i P;
    public final d0 Q;
    public final up.c R;
    public final xq.i S;

    /* renamed from: y, reason: collision with root package name */
    public final e4.i f19497y;

    static {
        String[] elements = {"equals", "hashCode", "getClass", "wait", "notify", "notifyAll", "toString"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        kotlin.collections.x.J(elements);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(e4.i outerContext, ip.l containingDeclaration, op.n jClass, ip.f fVar) {
        super(((up.a) outerContext.f7952d).a, containingDeclaration, jClass.e(), ((up.a) outerContext.f7952d).j.b(jClass));
        ip.z zVar;
        Intrinsics.checkNotNullParameter(outerContext, "outerContext");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(jClass, "jClass");
        this.f19497y = outerContext;
        this.E = jClass;
        this.F = fVar;
        e4.i d6 = ks.n.d(outerContext, this, jClass, 4);
        this.G = d6;
        up.a aVar = (up.a) d6.f7952d;
        xq.o storageManager = aVar.a;
        aVar.f18973g.getClass();
        this.H = fo.l.a(new g(this, 0));
        Class cls = jClass.a;
        this.I = cls.isAnnotation() ? ip.g.f12142w : cls.isInterface() ? ip.g.f12139e : cls.isEnum() ? ip.g.f12140i : ip.g.f12138d;
        if (cls.isAnnotation() || cls.isEnum()) {
            zVar = ip.z.f12180e;
        } else {
            p0 p0Var = ip.z.f12179d;
            boolean h6 = jClass.h();
            boolean z5 = jClass.h() || Modifier.isAbstract(cls.getModifiers()) || cls.isInterface();
            boolean isFinal = Modifier.isFinal(cls.getModifiers());
            p0Var.getClass();
            zVar = h6 ? ip.z.f12181i : z5 ? ip.z.f12183w : !isFinal ? ip.z.f12182v : ip.z.f12180e;
        }
        this.J = zVar;
        int modifiers = cls.getModifiers();
        this.K = Modifier.isPublic(modifiers) ? d1.f12132d : Modifier.isPrivate(modifiers) ? ip.a1.f12120d : Modifier.isProtected(modifiers) ? Modifier.isStatic(modifiers) ? mp.c.f14572d : mp.b.f14571d : mp.a.f14570d;
        Class<?> declaringClass = cls.getDeclaringClass();
        this.L = ((declaringClass != null ? new op.n(declaringClass) : null) == null || Modifier.isStatic(cls.getModifiers())) ? false : true;
        this.M = new h(this);
        o oVar = new o(d6, this, jClass, fVar != null, null);
        this.N = oVar;
        p0 p0Var2 = n0.f12147d;
        ((zq.m) aVar.f18985u).getClass();
        aq.a scopeFactory = new aq.a(21, this);
        p0Var2.getClass();
        Intrinsics.checkNotNullParameter(this, "classDescriptor");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        zq.f kotlinTypeRefinerForOwnerModule = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefinerForOwnerModule, "kotlinTypeRefinerForOwnerModule");
        Intrinsics.checkNotNullParameter(scopeFactory, "scopeFactory");
        this.O = new n0(this, storageManager, scopeFactory);
        this.P = new rq.i(oVar);
        this.Q = new d0(d6, jClass, this);
        this.R = nf.e.y(d6, jClass);
        g gVar = new g(this, 1);
        xq.l lVar = (xq.l) storageManager;
        lVar.getClass();
        this.S = new xq.i(lVar, gVar);
    }

    @Override // ip.j
    public final boolean A() {
        return this.L;
    }

    @Override // ip.f
    public final lp.h G() {
        return null;
    }

    @Override // ip.f
    public final rq.o H() {
        return this.Q;
    }

    @Override // ip.f
    public final ip.f J() {
        return null;
    }

    @Override // ip.f
    public final ip.g b() {
        return this.I;
    }

    @Override // ip.f, ip.y
    public final ip.z e() {
        return this.J;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return this.R;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = ip.q.a;
        a1 a1Var = this.K;
        if (Intrinsics.areEqual(a1Var, pVar)) {
            Class<?> declaringClass = this.E.a.getDeclaringClass();
            if ((declaringClass != null ? new op.n(declaringClass) : null) == null) {
                ip.p pVar2 = rp.p.a;
                Intrinsics.checkNotNull(pVar2);
                return pVar2;
            }
        }
        return ys.l.y(a1Var);
    }

    @Override // lp.b, ip.f
    public final rq.o h0() {
        return this.P;
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
        return (List) this.S.invoke();
    }

    @Override // lp.b, ip.f
    /* renamed from: l0, reason: merged with bridge method [inline-methods] */
    public final o n0() {
        rq.o n02 = super.n0();
        Intrinsics.checkNotNull(n02, "null cannot be cast to non-null type org.jetbrains.kotlin.load.java.lazy.descriptors.LazyJavaClassMemberScope");
        return (o) n02;
    }

    @Override // ip.i
    public final yq.p0 n() {
        return this.M;
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
    public final rq.o p(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return (o) this.O.a(kotlinTypeRefiner);
    }

    @Override // ip.f
    public final Collection q() {
        return (List) this.N.f19515q.invoke();
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
        return "Lazy Java class " + oq.e.h(this);
    }

    @Override // ip.f
    public final Collection x() {
        Class[] clsArr;
        Sequence sequence;
        if (this.J != ip.z.f12181i) {
            return m0.f13512d;
        }
        Object obj = null;
        wp.a D = nf.e.D(x0.f21081e, false, null, 7);
        Class clazz = this.E.a;
        Intrinsics.checkNotNullParameter(clazz, "clazz");
        e4.i iVar = ks.n.a;
        if (iVar == null) {
            try {
                iVar = new e4.i(Class.class.getMethod("isSealed", null), Class.class.getMethod("getPermittedSubclasses", null), Class.class.getMethod("isRecord", null), Class.class.getMethod("getRecordComponents", null));
            } catch (NoSuchMethodException unused) {
                iVar = new e4.i(obj, obj, obj, obj);
            }
            ks.n.a = iVar;
        }
        Method method = (Method) iVar.f7953e;
        if (method == null) {
            clsArr = null;
        } else {
            Object invoke = method.invoke(clazz, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<java.lang.Class<*>>");
            clsArr = (Class[]) invoke;
        }
        if (clsArr != null) {
            ArrayList arrayList = new ArrayList(clsArr.length);
            for (Class cls : clsArr) {
                arrayList.add(new op.p(cls));
            }
            sequence = CollectionsKt.C(arrayList);
        } else {
            sequence = kr.f.a;
        }
        ArrayList arrayList2 = new ArrayList();
        Iterator it = sequence.iterator();
        while (it.hasNext()) {
            ip.i a = ((k2.r) this.G.f7955v).O((op.p) it.next(), D).r0().a();
            ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
            if (fVar != null) {
                arrayList2.add(fVar);
            }
        }
        return CollectionsKt.e0(arrayList2, new i());
    }

    @Override // ip.y
    public final boolean z() {
        return false;
    }
}
