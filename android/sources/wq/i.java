package wq;

import cq.c0;
import cq.f1;
import cq.g1;
import cq.s0;
import cq.y0;
import ip.m0;
import ip.n0;
import ip.o0;
import ip.p0;
import ip.t0;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;
import uq.w;

/* loaded from: classes3.dex */
public final class i extends lp.b implements ip.l {
    public final hq.b E;
    public final z F;
    public final ip.p G;
    public final ip.g H;
    public final cc.k I;
    public final rq.p J;
    public final vp.h K;
    public final n0 L;
    public final e4.i M;
    public final ip.l N;
    public final xq.h O;
    public final xq.i P;
    public final xq.h Q;
    public final xq.i R;
    public final xq.h S;
    public final uq.u T;
    public final jp.h U;

    /* renamed from: w, reason: collision with root package name */
    public final cq.k f20008w;

    /* renamed from: x, reason: collision with root package name */
    public final eq.a f20009x;

    /* renamed from: y, reason: collision with root package name */
    public final o0 f20010y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(cc.k outerContext, cq.k classProto, eq.g nameResolver, eq.a metadataVersion, o0 sourceElement) {
        super(((uq.j) outerContext.f3398e).a, nt.a.r(nameResolver, classProto.f7148w).f());
        ip.g gVar;
        e4.i iVar;
        Intrinsics.checkNotNullParameter(outerContext, "outerContext");
        Intrinsics.checkNotNullParameter(classProto, "classProto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(sourceElement, "sourceElement");
        this.f20008w = classProto;
        this.f20009x = metadataVersion;
        this.f20010y = sourceElement;
        this.E = nt.a.r(nameResolver, classProto.f7148w);
        this.F = uq.k.e((c0) eq.e.f8196e.g(classProto.f7147v));
        this.G = ta.a.r((g1) eq.e.f8195d.g(classProto.f7147v));
        cq.j jVar = (cq.j) eq.e.f8197f.g(classProto.f7147v);
        switch (jVar == null ? -1 : w.f19069b[jVar.ordinal()]) {
            case 1:
                gVar = ip.g.f12138d;
                break;
            case 2:
                gVar = ip.g.f12139e;
                break;
            case 3:
                gVar = ip.g.f12140i;
                break;
            case 4:
                gVar = ip.g.f12141v;
                break;
            case 5:
                gVar = ip.g.f12142w;
                break;
            case 6:
            case 7:
                gVar = ip.g.f12143x;
                break;
            default:
                gVar = ip.g.f12138d;
                break;
        }
        ip.g gVar2 = gVar;
        this.H = gVar2;
        List list = classProto.f7150y;
        Intrinsics.checkNotNullExpressionValue(list, "getTypeParameterList(...)");
        y0 y0Var = classProto.f7139b0;
        Intrinsics.checkNotNullExpressionValue(y0Var, "getTypeTable(...)");
        a4.i iVar2 = new a4.i(y0Var);
        eq.h hVar = eq.h.f8219b;
        f1 f1Var = classProto.f7141d0;
        Intrinsics.checkNotNullExpressionValue(f1Var, "getVersionRequirementTable(...)");
        cc.k b10 = outerContext.b(this, list, nameResolver, iVar2, m3.n.v(f1Var), metadataVersion);
        uq.j jVar2 = (uq.j) b10.f3398e;
        this.I = b10;
        boolean m5 = s4.h.m(eq.e.f8202m, classProto.f7147v, "get(...)");
        ip.g gVar3 = ip.g.f12140i;
        int i5 = 0;
        this.J = gVar2 == gVar3 ? new rq.s(jVar2.a, this, m5 || Intrinsics.areEqual(jVar2.f19031s.d(), Boolean.TRUE)) : rq.n.f17557b;
        this.K = new vp.h(this);
        p0 p0Var = n0.f12147d;
        xq.l storageManager = jVar2.a;
        xq.l lVar = jVar2.a;
        ((zq.m) jVar2.f19029q).getClass();
        nr.y0 scopeFactory = new nr.y0(1, this, g.class, "<init>", "<init>(Lorg/jetbrains/kotlin/serialization/deserialization/descriptors/DeserializedClassDescriptor;Lorg/jetbrains/kotlin/types/checker/KotlinTypeRefiner;)V", 0, 5);
        p0Var.getClass();
        Intrinsics.checkNotNullParameter(this, "classDescriptor");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        zq.f kotlinTypeRefinerForOwnerModule = zq.f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefinerForOwnerModule, "kotlinTypeRefinerForOwnerModule");
        Intrinsics.checkNotNullParameter(scopeFactory, "scopeFactory");
        this.L = new n0(this, storageManager, scopeFactory);
        int i6 = 4;
        if (gVar2 == gVar3) {
            iVar = new e4.i();
            iVar.f7955v = this;
            List list2 = this.f20008w.Q;
            Intrinsics.checkNotNullExpressionValue(list2, "getEnumEntryList(...)");
            int a = u0.a(d0.l(list2, 10));
            LinkedHashMap linkedHashMap = new LinkedHashMap(a < 16 ? 16 : a);
            for (Object obj : list2) {
                linkedHashMap.put(nt.a.u((eq.g) this.I.f3399i, ((cq.v) obj).f7265v), obj);
            }
            iVar.f7952d = linkedHashMap;
            i iVar3 = (i) iVar.f7955v;
            iVar.f7953e = ((uq.j) iVar3.I.f3398e).a.d(new kq.k(i6, iVar, iVar3));
            xq.l lVar2 = ((uq.j) ((i) iVar.f7955v).I.f3398e).a;
            cp.d0 d0Var = new cp.d0(24, iVar);
            lVar2.getClass();
            iVar.f7954i = new xq.i(lVar2, d0Var);
        } else {
            iVar = null;
        }
        this.M = iVar;
        ip.l lVar3 = (ip.l) outerContext.f3400v;
        this.N = lVar3;
        d dVar = new d(this, i5);
        lVar.getClass();
        this.O = new xq.h(lVar, dVar);
        d dVar2 = new d(this, 1);
        lVar.getClass();
        this.P = new xq.i(lVar, dVar2);
        d dVar3 = new d(this, 2);
        lVar.getClass();
        this.Q = new xq.h(lVar, dVar3);
        d dVar4 = new d(this, 3);
        lVar.getClass();
        this.R = new xq.i(lVar, dVar4);
        d dVar5 = new d(this, i6);
        lVar.getClass();
        this.S = new xq.h(lVar, dVar5);
        eq.g gVar4 = (eq.g) b10.f3399i;
        a4.i iVar4 = (a4.i) b10.f3401w;
        i iVar5 = lVar3 instanceof i ? (i) lVar3 : null;
        this.T = new uq.u(classProto, gVar4, iVar4, sourceElement, iVar5 != null ? iVar5.T : null);
        this.U = !eq.e.f8194c.g(classProto.f7147v).booleanValue() ? jp.g.a : new v(lVar, new d(this, 5));
    }

    @Override // ip.j
    public final boolean A() {
        return s4.h.m(eq.e.f8198g, this.f20008w.f7147v, "get(...)");
    }

    @Override // ip.f
    public final lp.h G() {
        return (lp.h) this.O.invoke();
    }

    @Override // ip.f
    public final rq.o H() {
        return this.J;
    }

    @Override // ip.f
    public final ip.f J() {
        return (ip.f) this.Q.invoke();
    }

    @Override // ip.f
    public final ip.g b() {
        return this.H;
    }

    @Override // ip.m
    public final o0 d() {
        return this.f20010y;
    }

    @Override // ip.f, ip.y
    public final z e() {
        return this.F;
    }

    @Override // jp.a
    public final jp.h getAnnotations() {
        return this.U;
    }

    @Override // ip.f, ip.y
    public final ip.p getVisibility() {
        return this.G;
    }

    @Override // ip.l
    public final ip.l h() {
        return this.N;
    }

    @Override // ip.f
    public final t0 i0() {
        return (t0) this.S.invoke();
    }

    @Override // ip.y
    public final boolean isExternal() {
        return s4.h.m(eq.e.f8200i, this.f20008w.f7147v, "get(...)");
    }

    @Override // ip.f
    public final boolean isInline() {
        if (!eq.e.k.g(this.f20008w.f7147v).booleanValue()) {
            return false;
        }
        eq.a aVar = this.f20009x;
        int i5 = aVar.f8186b;
        if (i5 >= 1) {
            if (i5 > 1) {
                return false;
            }
            int i6 = aVar.f8187c;
            if (i6 >= 4 && (i6 > 4 || aVar.f8188d > 1)) {
                return false;
            }
        }
        return true;
    }

    @Override // ip.f
    public final boolean isValue() {
        return eq.e.k.g(this.f20008w.f7147v).booleanValue() && this.f20009x.a(1, 4, 2);
    }

    @Override // ip.f, ip.j
    public final List l() {
        return ((uq.c0) this.I.F).b();
    }

    public final g l0() {
        ((zq.m) ((uq.j) this.I.f3398e).f19029q).getClass();
        return (g) this.L.a(zq.f.a);
    }

    @Override // ip.i
    public final yq.p0 n() {
        return this.K;
    }

    @Override // ip.f
    public final boolean o() {
        return eq.e.f8197f.g(this.f20008w.f7147v) == cq.j.COMPANION_OBJECT;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // lp.z
    public final rq.o p(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return this.L.a(kotlinTypeRefiner);
    }

    @Override // lp.b, ip.f
    public final List p0() {
        cc.k kVar = this.I;
        a4.i typeTable = (a4.i) kVar.f3401w;
        cq.k kVar2 = this.f20008w;
        Intrinsics.checkNotNullParameter(kVar2, "<this>");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        List list = kVar2.J;
        if (list.isEmpty()) {
            list = null;
        }
        if (list == null) {
            List<Integer> list2 = kVar2.K;
            Intrinsics.checkNotNullExpressionValue(list2, "getContextReceiverTypeIdList(...)");
            ArrayList arrayList = new ArrayList(d0.l(list2, 10));
            for (Integer num : list2) {
                Intrinsics.checkNotNull(num);
                arrayList.add(typeTable.b(num.intValue()));
            }
            list = arrayList;
        }
        ArrayList arrayList2 = new ArrayList(d0.l(list, 10));
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList2.add(new lp.u(u0(), new sq.a(this, ((uq.c0) kVar.F).g((s0) it.next()), (hq.e) null), jp.g.a));
        }
        return arrayList2;
    }

    @Override // ip.f
    public final Collection q() {
        return (Collection) this.P.invoke();
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0028, code lost:
    
        r2 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x002d, code lost:
    
        if (r1 == false) goto L8;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final yq.c0 q0(hq.e eVar) {
        Iterator it = l0().c(eVar, qp.c.f16943y).iterator();
        boolean z5 = false;
        Object obj = null;
        while (true) {
            if (it.hasNext()) {
                Object next = it.next();
                if (((m0) next).W() == null) {
                    if (z5) {
                        break;
                    }
                    z5 = true;
                    obj = next;
                }
            }
        }
        m0 m0Var = (m0) obj;
        return (yq.c0) (m0Var != null ? m0Var.getType() : null);
    }

    @Override // ip.f
    public final boolean s0() {
        return s4.h.m(eq.e.f8199h, this.f20008w.f7147v, "get(...)");
    }

    @Override // ip.f
    public final boolean t() {
        return s4.h.m(eq.e.f8201l, this.f20008w.f7147v, "get(...)");
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("deserialized ");
        sb2.append(z() ? "expect " : "");
        sb2.append("class ");
        sb2.append(getName());
        return sb2.toString();
    }

    @Override // ip.f
    public final Collection x() {
        return (Collection) this.R.invoke();
    }

    @Override // ip.y
    public final boolean z() {
        return s4.h.m(eq.e.j, this.f20008w.f7147v, "get(...)");
    }
}
