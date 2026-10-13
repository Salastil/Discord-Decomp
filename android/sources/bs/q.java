package bs;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Lazy;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KTypeProjection;
import kotlin.text.StringsKt;
import kotlinx.serialization.KSerializer;

/* loaded from: classes3.dex */
public final class q implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3226d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f3227e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f3228i;

    public /* synthetic */ q(int i5, Object obj, Object obj2) {
        this.f3226d = i5;
        this.f3227e = obj;
        this.f3228i = obj2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:158:0x0520 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:162:0x048b A[SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r0v106, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r10v19, types: [ws.p] */
    /* JADX WARN: Type inference failed for: r2v48, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v33, types: [java.lang.Object, kotlin.Lazy] */
    /* JADX WARN: Type inference failed for: r3v36 */
    /* JADX WARN: Type inference failed for: r3v38, types: [ws.b] */
    /* JADX WARN: Type inference failed for: r3v39 */
    /* JADX WARN: Type inference failed for: r3v41 */
    /* JADX WARN: Type inference failed for: r3v49 */
    /* JADX WARN: Type inference failed for: r3v50 */
    /* JADX WARN: Type inference failed for: r5v7, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke() {
        Collection e9;
        ArrayList arrayList;
        String d6;
        KTypeProjection kTypeProjection;
        ws.b bVar;
        int i5 = this.f3226d;
        ?? r32 = "additionalAnnotations";
        int i6 = 1;
        int i10 = 0;
        r8 = null;
        r8 = null;
        IOException iOException = null;
        Object obj = this.f3227e;
        Object obj2 = this.f3228i;
        switch (i5) {
            case 0:
                return new k((KSerializer) ((Function1) ((r) obj).f3232e).invoke((KClass) obj2));
            case 1:
                cp.j0 j0Var = (cp.j0) obj;
                String name = (String) obj2;
                cp.h0 h0Var = j0Var.f6913y;
                String signature = j0Var.E;
                h0Var.getClass();
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(signature, "signature");
                if (Intrinsics.areEqual(name, "<init>")) {
                    e9 = CollectionsKt.i0(h0Var.d());
                    arrayList = new ArrayList();
                    for (Object obj3 : e9) {
                        ip.k kVar = (ip.k) obj3;
                        if (kVar.r()) {
                            ip.j h6 = kVar.h();
                            Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                            if (kq.g.d(h6)) {
                                String d7 = cp.a2.c(kVar).d();
                                if (!kotlin.text.x.o(d7, "constructor-impl", false) || !kotlin.text.x.h(d7, ")V", false)) {
                                    throw new IllegalArgumentException(("Invalid signature of " + kVar + ": " + d7).toString());
                                }
                                StringBuilder sb2 = new StringBuilder();
                                sb2.append(StringsKt.O(d7, "V"));
                                ip.j h7 = kVar.h();
                                Intrinsics.checkNotNullExpressionValue(h7, "getContainingDeclaration(...)");
                                Intrinsics.checkNotNullParameter(h7, "<this>");
                                hq.b f2 = oq.e.f(h7);
                                Intrinsics.checkNotNull(f2);
                                sb2.append(gq.b.b(f2.b()));
                                d6 = sb2.toString();
                                if (!Intrinsics.areEqual(d6, signature)) {
                                    arrayList.add(obj3);
                                }
                            }
                        }
                        d6 = cp.a2.c(kVar).d();
                        if (!Intrinsics.areEqual(d6, signature)) {
                        }
                    }
                } else {
                    hq.e e10 = hq.e.e(name);
                    Intrinsics.checkNotNullExpressionValue(e10, "identifier(...)");
                    e9 = h0Var.e(e10);
                    arrayList = new ArrayList();
                    for (Object obj4 : e9) {
                        if (Intrinsics.areEqual(cp.a2.c((ip.v) obj4).d(), signature)) {
                            arrayList.add(obj4);
                        }
                    }
                }
                if (arrayList.size() == 1) {
                    return (ip.v) CollectionsKt.Z(arrayList);
                }
                String O = CollectionsKt.O(e9, ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, cp.b.G, 30);
                StringBuilder t5 = a3.e.t("Function '", name, "' (JVM signature: ", signature, ") not resolved in ");
                t5.append(h0Var);
                t5.append(':');
                t5.append(O.length() == 0 ? " no members found" : ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE.concat(O));
                throw new cp.u1(t5.toString());
            case 2:
                cp.r1 r1Var = (cp.r1) obj;
                Function0 function0 = (Function0) obj2;
                List l02 = r1Var.f6947d.l0();
                if (l02.isEmpty()) {
                    return kotlin.collections.m0.f13512d;
                }
                Lazy b10 = fo.l.b(fo.m.f8827e, new cp.p1(r1Var, i6));
                ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(l02, 10));
                for (Object obj5 : l02) {
                    int i11 = i10 + 1;
                    if (i10 < 0) {
                        kotlin.collections.c0.k();
                        throw null;
                    }
                    yq.s0 s0Var = (yq.s0) obj5;
                    if (s0Var.c()) {
                        KTypeProjection.f13548c.getClass();
                        kTypeProjection = KTypeProjection.f13549d;
                    } else {
                        yq.y b11 = s0Var.b();
                        Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                        cp.r1 type = new cp.r1(b11, function0 == null ? null : new cp.q1(r1Var, i10, b10));
                        int ordinal = s0Var.a().ordinal();
                        if (ordinal == 0) {
                            KTypeProjection.f13548c.getClass();
                            Intrinsics.checkNotNullParameter(type, "type");
                            kTypeProjection = new KTypeProjection(zo.w.f21333d, type);
                        } else if (ordinal == 1) {
                            KTypeProjection.f13548c.getClass();
                            Intrinsics.checkNotNullParameter(type, "type");
                            kTypeProjection = new KTypeProjection(zo.w.f21334e, type);
                        } else {
                            if (ordinal != 2) {
                                throw new fo.n();
                            }
                            KTypeProjection.f13548c.getClass();
                            Intrinsics.checkNotNullParameter(type, "type");
                            kTypeProjection = new KTypeProjection(zo.w.f21335i, type);
                        }
                    }
                    arrayList2.add(kTypeProjection);
                    i10 = i11;
                }
                return arrayList2;
            case 3:
                StringBuilder sb3 = new StringBuilder();
                sb3.append('@');
                sb3.append(((Class) obj).getCanonicalName());
                CollectionsKt.N(((Map) obj2).entrySet(), sb3, ", ", "(", ")", dp.e.f7657d, 48);
                return sb3.toString();
            case 4:
                xq.l storageManager = (xq.l) obj2;
                ip.a0 module = ((hp.g) obj).a;
                hp.e eVar = hp.g.f10162c;
                Intrinsics.checkNotNullParameter(module, "module");
                List list = (List) ys.d.O(((lp.w) module.D(hp.g.f10164e)).f14195x, lp.w.F[0]);
                ArrayList arrayList3 = new ArrayList();
                for (Object obj6 : list) {
                    if (obj6 instanceof vq.c) {
                        arrayList3.add(obj6);
                    }
                }
                lp.j containingClass = new lp.j((vq.c) CollectionsKt.K(arrayList3), hp.g.f10165f, ip.z.f12183w, ip.g.f12139e, kotlin.collections.b0.c(module.g().e()), storageManager);
                Intrinsics.checkNotNullParameter(storageManager, "storageManager");
                Intrinsics.checkNotNullParameter(containingClass, "containingClass");
                containingClass.l0(new hp.a(storageManager, containingClass), kotlin.collections.o0.f13515d, null);
                return containingClass;
            case 5:
                hp.j jVar = (hp.j) obj;
                lp.a0 l6 = jVar.l();
                Intrinsics.checkNotNullExpressionValue(l6, "getBuiltInsModule(...)");
                return new hp.o(l6, (xq.l) obj2, new cp.d0(6, jVar));
            case 6:
                hp.o oVar = (hp.o) obj;
                lp.a0 a0Var = oVar.g().a;
                hp.g.f10162c.getClass();
                return nf.e.l(a0Var, hp.g.f10166g, new e4.i((xq.l) obj2, oVar.g().a)).k();
            case 7:
                vp.j jVar2 = (vp.j) obj;
                sp.h javaResolverCache = sp.h.f18088b;
                Intrinsics.checkNotNullExpressionValue(javaResolverCache, "EMPTY");
                Intrinsics.checkNotNullParameter(javaResolverCache, "javaResolverCache");
                e4.i iVar = jVar2.G;
                up.a aVar = (up.a) iVar.f7952d;
                Intrinsics.checkNotNullParameter(javaResolverCache, "javaResolverCache");
                up.a components = new up.a(aVar.a, aVar.f18968b, aVar.f18969c, aVar.f18970d, aVar.f18971e, aVar.f18972f, aVar.f18974h, aVar.f18975i, aVar.j, aVar.k, aVar.f18976l, aVar.f18977m, aVar.f18978n, aVar.f18979o, aVar.f18980p, aVar.f18981q, aVar.f18982r, aVar.f18983s, aVar.f18984t, aVar.f18985u, aVar.f18986v, aVar.f18987w);
                Intrinsics.checkNotNullParameter(iVar, "<this>");
                Intrinsics.checkNotNullParameter(components, "components");
                e4.i iVar2 = new e4.i(components, (up.e) iVar.f7953e, iVar.f7954i);
                ip.l h10 = jVar2.h();
                Intrinsics.checkNotNullExpressionValue(h10, "getContainingDeclaration(...)");
                return new vp.j(iVar2, h10, jVar2.E, (ip.f) obj2);
            case 8:
                yq.k0.f21045e.getClass();
                yq.k0 k0Var = yq.k0.f21046i;
                yq.p0 n6 = ((lp.g) obj2).n();
                List list2 = Collections.EMPTY_LIST;
                cp.d0 getScope = new cp.d0(11, this);
                Intrinsics.checkNotNullParameter(getScope, "getScope");
                return yq.c.v(list2, new rq.k(xq.l.f20551e, getScope), k0Var, n6, false);
            case 9:
                ir.h hVar = new ir.h();
                Iterator it = ((lp.t) obj2).i().iterator();
                while (it.hasNext()) {
                    hVar.add(((ip.v) it.next()).c((yq.w0) obj));
                }
                return hVar;
            case 10:
                lp.o0 o0Var = (lp.o0) obj;
                lp.h hVar2 = (lp.h) obj2;
                xq.o oVar2 = o0Var.f14169b0;
                ip.r0 r0Var = o0Var.f14170c0;
                jp.h annotations = hVar2.getAnnotations();
                lp.h hVar3 = hVar2;
                ip.c b12 = hVar3.b();
                Intrinsics.checkNotNullExpressionValue(b12, "getKind(...)");
                ip.l lVar = o0Var.f14170c0;
                ip.o0 d8 = ((lp.m) lVar).d();
                Intrinsics.checkNotNullExpressionValue(d8, "getSource(...)");
                lp.o0 o0Var2 = new lp.o0(oVar2, r0Var, hVar2, o0Var, annotations, b12, d8);
                lp.o0.f14167e0.getClass();
                wq.t tVar = (wq.t) lVar;
                yq.w0 d10 = tVar.B0() == null ? null : yq.w0.d(tVar.C0());
                if (d10 == null) {
                    return null;
                }
                lp.u uVar = hVar3.H;
                lp.u c6 = uVar != null ? uVar.c(d10) : null;
                List a0 = hVar3.a0();
                Intrinsics.checkNotNullExpressionValue(a0, "getContextReceiverParameters(...)");
                ArrayList arrayList4 = new ArrayList(kotlin.collections.d0.l(a0, 10));
                Iterator it2 = a0.iterator();
                while (it2.hasNext()) {
                    arrayList4.add(((lp.u) it2.next()).c(d10));
                }
                lp.e eVar2 = (lp.e) lVar;
                List l7 = eVar2.l();
                List P = o0Var.P();
                yq.y yVar = o0Var.E;
                Intrinsics.checkNotNull(yVar);
                o0Var2.G0(null, c6, arrayList4, l7, P, yVar, ip.z.f12180e, eVar2.f14136y);
                return o0Var2;
            case 11:
                yq.c0 k = ((up.a) ((e4.i) obj).f7952d).f18979o.g().j(((sp.b) obj2).a).k();
                Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
                return k;
            case 12:
                e4.i iVar3 = (e4.i) obj;
                jp.h additionalAnnotations = ((ip.h) obj2).getAnnotations();
                Intrinsics.checkNotNullParameter(iVar3, "<this>");
                Intrinsics.checkNotNullParameter(additionalAnnotations, "additionalAnnotations");
                return ((up.a) iVar3.f7952d).f18981q.b((rp.v) iVar3.f7954i.getValue(), additionalAnnotations);
            case 13:
                e4.i iVar4 = (e4.i) obj;
                jp.h additionalAnnotations2 = (jp.h) obj2;
                Intrinsics.checkNotNullParameter(iVar4, "<this>");
                Intrinsics.checkNotNullParameter(additionalAnnotations2, "additionalAnnotations");
                return ((up.a) iVar4.f7952d).f18981q.b((rp.v) iVar4.f7954i.getValue(), additionalAnnotations2);
            case 14:
                return new vp.q(((up.d) obj).a, (op.x) obj2);
            case 15:
                cc.k kVar2 = ((uq.c0) obj).a;
                return ((uq.j) kVar2.f3398e).f19019e.x((cq.s0) obj2, (eq.g) kVar2.f3399i);
            case 16:
                gj.c cVar = ((up.a) ((e4.i) obj).f7952d).f18968b;
                hq.c packageFqName = ((vp.v) obj2).f19527o.f14132x;
                cVar.getClass();
                Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
                return null;
            case 17:
                wq.i iVar5 = (wq.i) obj;
                return CollectionsKt.i0(((uq.j) iVar5.I.f3398e).f19019e.o(iVar5.T, (cq.v) obj2));
            case 18:
                ?? r10 = (ws.p) obj2;
                ws.t tVar2 = (ws.t) obj;
                ws.b bVar2 = ws.b.INTERNAL_ERROR;
                try {
                    try {
                        Intrinsics.checkNotNullParameter(this, "handler");
                    } catch (Throwable th2) {
                        th = th2;
                        r10.c(r32, bVar2, iOException);
                        qs.b.c(tVar2);
                        throw th;
                    }
                } catch (IOException e11) {
                    iOException = e11;
                    bVar = bVar2;
                } catch (Throwable th3) {
                    th = th3;
                    r32 = bVar2;
                    r10.c(r32, bVar2, iOException);
                    qs.b.c(tVar2);
                    throw th;
                }
                if (!tVar2.c(true, this)) {
                    throw new IOException("Required SETTINGS preface not received");
                }
                while (tVar2.c(false, this)) {
                }
                ws.b bVar3 = ws.b.NO_ERROR;
                try {
                    r10.c(bVar3, ws.b.CANCEL, null);
                    r32 = bVar3;
                } catch (IOException e12) {
                    iOException = e12;
                    bVar = bVar3;
                    ws.b bVar4 = ws.b.PROTOCOL_ERROR;
                    r10.c(bVar4, bVar4, iOException);
                    r32 = bVar;
                    qs.b.c(tVar2);
                    return Unit.a;
                }
                qs.b.c(tVar2);
                return Unit.a;
            case 19:
                return ((zq.f) obj).a((cr.d) ((yq.a0) obj2).f21010i.invoke());
            default:
                zq.f fVar = (zq.f) obj2;
                Iterable iterable = (List) ((zq.j) obj).f21394e.getValue();
                if (iterable == null) {
                    iterable = kotlin.collections.m0.f13512d;
                }
                ArrayList arrayList5 = new ArrayList(kotlin.collections.d0.l(iterable, 10));
                Iterator it3 = iterable.iterator();
                while (it3.hasNext()) {
                    arrayList5.add(((yq.b1) it3.next()).y0(fVar));
                }
                return arrayList5;
        }
    }

    public /* synthetic */ q(lp.m mVar, Object obj, int i5) {
        this.f3226d = i5;
        this.f3228i = mVar;
        this.f3227e = obj;
    }

    public q(ws.p this$0, ws.t reader) {
        this.f3226d = 18;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(reader, "reader");
        this.f3228i = this$0;
        this.f3227e = reader;
    }
}
