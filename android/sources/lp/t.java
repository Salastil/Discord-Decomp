package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.w0;

/* loaded from: classes3.dex */
public abstract class t extends m implements ip.v {
    public yq.y E;
    public List F;
    public u G;
    public u H;
    public ip.z I;
    public ip.p J;
    public boolean K;
    public boolean L;
    public boolean M;
    public boolean N;
    public boolean O;
    public boolean P;
    public boolean Q;
    public boolean R;
    public boolean S;
    public boolean T;
    public boolean U;
    public Collection V;
    public volatile bs.q W;
    public final ip.v X;
    public final ip.c Y;
    public ip.v Z;
    public Map a0;

    /* renamed from: x, reason: collision with root package name */
    public List f14186x;

    /* renamed from: y, reason: collision with root package name */
    public List f14187y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, ip.o0 o0Var, jp.h hVar) {
        super(lVar, hVar, eVar, o0Var);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (eVar == null) {
            v0(2);
            throw null;
        }
        if (cVar == null) {
            v0(3);
            throw null;
        }
        if (o0Var == null) {
            v0(4);
            throw null;
        }
        this.J = ip.q.f12163i;
        this.K = false;
        this.L = false;
        this.M = false;
        this.N = false;
        this.O = false;
        this.P = false;
        this.Q = false;
        this.R = false;
        this.S = false;
        this.T = true;
        this.U = false;
        this.V = null;
        this.W = null;
        this.Z = null;
        this.a0 = null;
        this.X = vVar == null ? this : vVar;
        this.Y = cVar;
    }

    public static ArrayList F0(ip.v containingDeclaration, List list, w0 w0Var, boolean z5, boolean z6, boolean[] zArr) {
        if (list == null) {
            v0(30);
            throw null;
        }
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            r0 r0Var = (r0) it.next();
            r0 r0Var2 = r0Var;
            yq.y type = r0Var2.getType();
            c1 c1Var = c1.f21014v;
            yq.y outType = w0Var.j(type, c1Var);
            yq.y yVar = r0Var.H;
            yq.y j = yVar == null ? null : w0Var.j(yVar, c1Var);
            if (outType == null) {
                return null;
            }
            if ((outType != r0Var2.getType() || yVar != j) && zArr != null) {
                zArr[0] = true;
            }
            cp.d0 d0Var = r0Var instanceof q0 ? new cp.d0(13, (List) ((q0) r0Var).J.getValue()) : null;
            r0 r0Var3 = z5 ? null : r0Var;
            int i5 = r0Var.f14177y;
            jp.h annotations = r0Var.getAnnotations();
            hq.e name = r0Var.getName();
            boolean C0 = r0Var.C0();
            boolean z7 = r0Var.F;
            boolean z8 = r0Var.G;
            ip.o0 source = z6 ? r0Var.d() : ip.o0.f12151g;
            Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
            Intrinsics.checkNotNullParameter(annotations, "annotations");
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(outType, "outType");
            Intrinsics.checkNotNullParameter(source, "source");
            arrayList.add(d0Var == null ? new r0(containingDeclaration, r0Var3, i5, annotations, name, outType, C0, z7, z8, j, source) : new q0(containingDeclaration, r0Var3, i5, annotations, name, outType, C0, z7, z8, j, source, d0Var));
        }
        return arrayList;
    }

    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 9:
            case 13:
            case 14:
            case 15:
            case 16:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 27:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 10:
            case 11:
            case 12:
            case 17:
            case 22:
            case 24:
            case 25:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 9:
            case 13:
            case 14:
            case 15:
            case 16:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 27:
                i6 = 2;
                break;
            case 10:
            case 11:
            case 12:
            case 17:
            case 22:
            case 24:
            case 25:
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "annotations";
                break;
            case 2:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
                objArr[0] = "kind";
                break;
            case 4:
                objArr[0] = "source";
                break;
            case 5:
                objArr[0] = "contextReceiverParameters";
                break;
            case 6:
                objArr[0] = "typeParameters";
                break;
            case 7:
            case 28:
            case 30:
                objArr[0] = "unsubstitutedValueParameters";
                break;
            case 8:
            case 10:
                objArr[0] = "visibility";
                break;
            case 9:
            case 13:
            case 14:
            case 15:
            case 16:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 27:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/FunctionDescriptorImpl";
                break;
            case 11:
                objArr[0] = "unsubstitutedReturnType";
                break;
            case 12:
                objArr[0] = "extensionReceiverParameter";
                break;
            case 17:
                objArr[0] = "overriddenDescriptors";
                break;
            case 22:
                objArr[0] = "originalSubstitutor";
                break;
            case 24:
            case 29:
            case 31:
                objArr[0] = "substitutor";
                break;
            case 25:
                objArr[0] = "configuration";
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        switch (i5) {
            case 9:
                objArr[1] = "initialize";
                break;
            case 10:
            case 11:
            case 12:
            case 17:
            case 22:
            case 24:
            case 25:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/FunctionDescriptorImpl";
                break;
            case 13:
                objArr[1] = "getContextReceiverParameters";
                break;
            case 14:
                objArr[1] = "getOverriddenDescriptors";
                break;
            case 15:
                objArr[1] = "getModality";
                break;
            case 16:
                objArr[1] = "getVisibility";
                break;
            case 18:
                objArr[1] = "getTypeParameters";
                break;
            case 19:
                objArr[1] = "getValueParameters";
                break;
            case 20:
                objArr[1] = "getOriginal";
                break;
            case 21:
                objArr[1] = "getKind";
                break;
            case 23:
                objArr[1] = "newCopyBuilder";
                break;
            case 26:
                objArr[1] = "copy";
                break;
            case 27:
                objArr[1] = "getSourceToUseForCopy";
                break;
        }
        switch (i5) {
            case 5:
            case 6:
            case 7:
            case 8:
                objArr[2] = "initialize";
                break;
            case 9:
            case 13:
            case 14:
            case 15:
            case 16:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 27:
                break;
            case 10:
                objArr[2] = "setVisibility";
                break;
            case 11:
                objArr[2] = "setReturnType";
                break;
            case 12:
                objArr[2] = "setExtensionReceiverParameter";
                break;
            case 17:
                objArr[2] = "setOverriddenDescriptors";
                break;
            case 22:
                objArr[2] = "substitute";
                break;
            case 24:
                objArr[2] = "newCopyBuilder";
                break;
            case 25:
                objArr[2] = "doSubstitute";
                break;
            case 28:
            case 29:
            case 30:
            case 31:
                objArr[2] = "getSubstitutedValueParameters";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 9:
            case 13:
            case 14:
            case 15:
            case 16:
            case 18:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 27:
                throw new IllegalStateException(format);
            case 10:
            case 11:
            case 12:
            case 17:
            case 22:
            case 24:
            case 25:
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public final ip.v B0(ip.l lVar, ip.z zVar, ip.p pVar) {
        ip.v build = m0().K(lVar).p(zVar).D(pVar).A(ip.c.f12124e).y().build();
        if (build != null) {
            return build;
        }
        v0(26);
        throw null;
    }

    @Override // ip.d
    /* renamed from: C0, reason: merged with bridge method [inline-methods] */
    public l0 L(ip.l lVar, ip.z zVar, ip.p pVar) {
        return (l0) B0(lVar, zVar, pVar);
    }

    public abstract t D0(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, ip.o0 o0Var, jp.h hVar);

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r13v0 */
    /* JADX WARN: Type inference failed for: r13v1 */
    /* JADX WARN: Type inference failed for: r13v5 */
    /* JADX WARN: Type inference failed for: r16v0 */
    /* JADX WARN: Type inference failed for: r16v1 */
    /* JADX WARN: Type inference failed for: r16v3 */
    public t E0(s sVar) {
        ?? r13;
        u uVar;
        ?? r16;
        u uVar2;
        yq.y j;
        boolean[] zArr = new boolean[1];
        jp.h f2 = sVar.P != null ? ks.n.f(getAnnotations(), sVar.P) : getAnnotations();
        ip.l lVar = sVar.f14179e;
        ip.v vVar = sVar.f14182w;
        ip.c cVar = sVar.f14183x;
        hq.e eVar = sVar.I;
        ip.o0 d6 = sVar.L ? ((m) (vVar != null ? vVar : a())).d() : ip.o0.f12151g;
        if (d6 == null) {
            v0(27);
            throw null;
        }
        t D0 = D0(eVar, cVar, lVar, vVar, d6, f2);
        List list = sVar.O;
        if (list == null) {
            list = getTypeParameters();
        }
        zArr[0] = zArr[0] | (!list.isEmpty());
        ArrayList arrayList = new ArrayList(list.size());
        w0 B = yq.c.B(list, sVar.f14178d, D0, arrayList, zArr);
        if (B != null) {
            ArrayList arrayList2 = new ArrayList();
            if (!sVar.E.isEmpty()) {
                int i5 = 0;
                for (u uVar3 : sVar.E) {
                    yq.y j5 = B.j(uVar3.getType(), c1.f21014v);
                    if (j5 == null) {
                        break;
                    }
                    int i6 = i5 + 1;
                    arrayList2.add(m3.n.w(D0, j5, ((sq.a) uVar3.B0()).z0(), uVar3.getAnnotations(), i5));
                    zArr[0] = zArr[0] | (j5 != uVar3.getType());
                    i5 = i6;
                }
            }
            u uVar4 = sVar.F;
            if (uVar4 != null) {
                yq.y j7 = B.j(uVar4.getType(), c1.f21014v);
                if (j7 != null) {
                    sVar.F.B0();
                    u uVar5 = new u(D0, new sq.b(D0, j7), sVar.F.getAnnotations());
                    zArr[0] = (j7 != sVar.F.getType()) | zArr[0];
                    r13 = 0;
                    uVar = uVar5;
                }
            } else {
                r13 = 0;
                uVar = null;
            }
            u uVar6 = sVar.G;
            if (uVar6 != null) {
                u c6 = uVar6.c(B);
                if (c6 != null) {
                    zArr[r13] = zArr[r13] | (c6 != sVar.G ? true : r13);
                    r16 = r13;
                    uVar2 = c6;
                }
            } else {
                r16 = r13;
                uVar2 = null;
            }
            ArrayList F0 = F0(D0, sVar.f14184y, B, sVar.M, sVar.L, zArr);
            if (F0 != null && (j = B.j(sVar.H, c1.f21015w)) != null) {
                boolean z5 = zArr[r16] | (j != sVar.H ? true : r16);
                zArr[r16] = z5;
                if (!z5 && sVar.T) {
                    return this;
                }
                D0.G0(uVar, uVar2, arrayList2, arrayList, F0, j, sVar.f14180i, sVar.f14181v);
                D0.K = this.K;
                D0.L = this.L;
                D0.M = this.M;
                D0.N = this.N;
                D0.O = this.O;
                D0.S = this.S;
                D0.P = this.P;
                D0.J0(this.T);
                D0.Q = sVar.N;
                D0.R = sVar.Q;
                Boolean bool = sVar.S;
                D0.K0(bool != null ? bool.booleanValue() : this.U);
                if (!sVar.R.isEmpty() || this.a0 != null) {
                    LinkedHashMap linkedHashMap = sVar.R;
                    Map map = this.a0;
                    if (map != null) {
                        for (Map.Entry entry : map.entrySet()) {
                            if (!linkedHashMap.containsKey(entry.getKey())) {
                                linkedHashMap.put(entry.getKey(), entry.getValue());
                            }
                        }
                    }
                    if (linkedHashMap.size() == 1) {
                        D0.a0 = Collections.singletonMap(linkedHashMap.keySet().iterator().next(), linkedHashMap.values().iterator().next());
                    } else {
                        D0.a0 = linkedHashMap;
                    }
                }
                if (sVar.K || this.Z != null) {
                    ip.v vVar2 = this.Z;
                    if (vVar2 == null) {
                        vVar2 = this;
                    }
                    D0.Z = vVar2.c(B);
                }
                if (sVar.J && !a().i().isEmpty()) {
                    if (sVar.f14178d.f()) {
                        bs.q qVar = this.W;
                        if (qVar != null) {
                            D0.W = qVar;
                            return D0;
                        }
                        D0.g0(i());
                        return D0;
                    }
                    D0.W = new bs.q(this, B, 9);
                }
                return D0;
            }
        }
        return null;
    }

    public boolean F() {
        return this.O;
    }

    public void G0(u uVar, u uVar2, List list, List list2, List list3, yq.y yVar, ip.z zVar, ip.p pVar) {
        if (list == null) {
            v0(5);
            throw null;
        }
        if (list2 == null) {
            v0(6);
            throw null;
        }
        if (list3 == null) {
            v0(7);
            throw null;
        }
        if (pVar == null) {
            v0(8);
            throw null;
        }
        this.f14186x = CollectionsKt.i0(list2);
        this.f14187y = CollectionsKt.i0(list3);
        this.E = yVar;
        this.I = zVar;
        this.J = pVar;
        this.G = uVar;
        this.H = uVar2;
        this.F = list;
        for (int i5 = 0; i5 < list2.size(); i5++) {
            ip.s0 s0Var = (ip.s0) list2.get(i5);
            if (s0Var.getIndex() != i5) {
                throw new IllegalStateException(s0Var + " index is " + s0Var.getIndex() + " but position is " + i5);
            }
        }
        for (int i6 = 0; i6 < list3.size(); i6++) {
            r0 r0Var = (r0) list3.get(i6);
            if (r0Var.f14177y != i6) {
                throw new IllegalStateException(r0Var + "index is " + r0Var.f14177y + " but position is " + i6);
            }
        }
    }

    public final s H0(w0 w0Var) {
        if (w0Var != null) {
            return new s(this, w0Var.g(), h(), e(), getVisibility(), b(), P(), a0(), this.G, getReturnType());
        }
        v0(24);
        throw null;
    }

    public final void I0(ip.a aVar, Object obj) {
        if (this.a0 == null) {
            this.a0 = new LinkedHashMap();
        }
        this.a0.put(aVar, obj);
    }

    public void J0(boolean z5) {
        this.T = z5;
    }

    public Object K(ip.a aVar) {
        Map map = this.a0;
        if (map == null) {
            return null;
        }
        return map.get(aVar);
    }

    public void K0(boolean z5) {
        this.U = z5;
    }

    public final void L0(yq.c0 c0Var) {
        if (c0Var != null) {
            this.E = c0Var;
        } else {
            v0(11);
            throw null;
        }
    }

    @Override // ip.b
    public final List P() {
        List list = this.f14187y;
        if (list != null) {
            return list;
        }
        v0(19);
        throw null;
    }

    @Override // ip.v
    public final ip.v S() {
        return this.Z;
    }

    @Override // ip.b
    public final u T() {
        return this.H;
    }

    @Override // ip.b
    public final u W() {
        return this.G;
    }

    @Override // lp.m, lp.l, ip.l
    public ip.v a() {
        ip.v vVar = this.X;
        ip.v a = vVar == this ? this : vVar.a();
        if (a != null) {
            return a;
        }
        v0(20);
        throw null;
    }

    @Override // ip.b
    public final List a0() {
        List list = this.F;
        if (list != null) {
            return list;
        }
        v0(13);
        throw null;
    }

    @Override // ip.d
    public final ip.c b() {
        ip.c cVar = this.Y;
        if (cVar != null) {
            return cVar;
        }
        v0(21);
        throw null;
    }

    @Override // ip.y
    public final ip.z e() {
        ip.z zVar = this.I;
        if (zVar != null) {
            return zVar;
        }
        v0(15);
        throw null;
    }

    public Object e0(ip.n nVar, Object obj) {
        return nVar.g(this, obj);
    }

    @Override // ip.v
    public final boolean f0() {
        return this.Q;
    }

    public void g0(Collection collection) {
        if (collection == null) {
            v0(17);
            throw null;
        }
        this.V = collection;
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            if (((ip.v) it.next()).k0()) {
                this.R = true;
                return;
            }
        }
    }

    public yq.y getReturnType() {
        return this.E;
    }

    @Override // ip.b
    public final List getTypeParameters() {
        List list = this.f14186x;
        if (list != null) {
            return list;
        }
        throw new IllegalStateException("typeParameters == null for " + this);
    }

    @Override // ip.o, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = this.J;
        if (pVar != null) {
            return pVar;
        }
        v0(16);
        throw null;
    }

    public Collection i() {
        bs.q qVar = this.W;
        if (qVar != null) {
            this.V = (Collection) qVar.invoke();
            this.W = null;
        }
        Collection collection = this.V;
        if (collection == null) {
            collection = Collections.EMPTY_LIST;
        }
        if (collection != null) {
            return collection;
        }
        v0(14);
        throw null;
    }

    public boolean isExternal() {
        return this.M;
    }

    @Override // ip.v
    public final boolean isInfix() {
        if (this.L) {
            return true;
        }
        Iterator it = a().i().iterator();
        while (it.hasNext()) {
            if (((ip.v) it.next()).isInfix()) {
                return true;
            }
        }
        return false;
    }

    public boolean isInline() {
        return this.N;
    }

    @Override // ip.v
    public final boolean isOperator() {
        if (this.K) {
            return true;
        }
        Iterator it = a().i().iterator();
        while (it.hasNext()) {
            if (((ip.v) it.next()).isOperator()) {
                return true;
            }
        }
        return false;
    }

    public boolean isSuspend() {
        return this.S;
    }

    @Override // ip.v
    public final boolean k0() {
        return this.R;
    }

    public ip.u m0() {
        return H0(w0.f21077b);
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // ip.b
    public boolean w() {
        return this.U;
    }

    @Override // ip.y
    public final boolean z() {
        return this.P;
    }

    @Override // ip.q0
    public ip.v c(w0 w0Var) {
        if (w0Var == null) {
            v0(22);
            throw null;
        }
        if (w0Var.a.f()) {
            return this;
        }
        s H0 = H0(w0Var);
        H0.f14182w = a();
        H0.L = true;
        H0.T = true;
        return H0.U.E0(H0);
    }
}
