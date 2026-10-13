package cp;

import java.lang.reflect.Constructor;
import java.lang.reflect.GenericDeclaration;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i0 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6907d;

    /* renamed from: e, reason: collision with root package name */
    public final j0 f6908e;

    public /* synthetic */ i0(j0 j0Var, int i5) {
        this.f6907d = i5;
        this.f6908e = j0Var;
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x010d  */
    @Override // kotlin.jvm.functions.Function0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke() {
        dp.w rVar;
        GenericDeclaration genericDeclaration;
        dp.w wVar;
        ip.v vVar;
        Object obj;
        int i5 = this.f6907d;
        Object obj2 = null;
        j0 j0Var = this.f6908e;
        switch (i5) {
            case 0:
                hq.b bVar = a2.a;
                ip.v e9 = j0Var.e();
                h0 h0Var = j0Var.f6913y;
                ys.l c6 = a2.c(e9);
                if (c6 instanceof i) {
                    if (j0Var.g()) {
                        Class<?> jClass = h0Var.getJClass();
                        List parameters = j0Var.getParameters();
                        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(parameters, 10));
                        Iterator it = parameters.iterator();
                        while (it.hasNext()) {
                            String name = ((y0) ((zo.m) it.next())).getName();
                            Intrinsics.checkNotNull(name);
                            arrayList.add(name);
                        }
                        dp.a aVar = dp.a.f7633e;
                        dp.b bVar2 = dp.b.f7635d;
                        return new dp.c(jClass, arrayList, aVar);
                    }
                    String desc = ((i) c6).f6905b.f9440w;
                    h0Var.getClass();
                    Intrinsics.checkNotNullParameter(desc, "desc");
                    Class<?> jClass2 = h0Var.getJClass();
                    try {
                        Class[] clsArr = (Class[]) ((ArrayList) h0Var.k(desc, false).f7943e).toArray(new Class[0]);
                        obj2 = jClass2.getDeclaredConstructor((Class[]) Arrays.copyOf(clsArr, clsArr.length));
                    } catch (NoSuchMethodException unused) {
                    }
                } else if (c6 instanceof j) {
                    ip.v e10 = j0Var.e();
                    ip.l h6 = e10.h();
                    Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                    if (kq.g.d(h6) && (e10 instanceof ip.k) && ((ip.k) e10).r()) {
                        ip.v e11 = j0Var.e();
                        String str = ((j) c6).f6911b.f9440w;
                        List P = j0Var.e().P();
                        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                        return new dp.b0(e11, h0Var, str, P);
                    }
                    gq.e eVar = ((j) c6).f6911b;
                    obj2 = h0Var.c(eVar.f9439v, eVar.f9440w);
                } else if (c6 instanceof h) {
                    obj2 = ((h) c6).f6903b;
                    Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type java.lang.reflect.Member");
                } else {
                    if (!(c6 instanceof g)) {
                        if (!(c6 instanceof f)) {
                            throw new fo.n();
                        }
                        List list = ((f) c6).f6896b;
                        Class<?> jClass3 = h0Var.getJClass();
                        ArrayList arrayList2 = new ArrayList(kotlin.collections.d0.l(list, 10));
                        Iterator it2 = list.iterator();
                        while (it2.hasNext()) {
                            arrayList2.add(((Method) it2.next()).getName());
                        }
                        return new dp.c(jClass3, arrayList2, dp.a.f7633e, dp.b.f7635d, list);
                    }
                    obj2 = ((g) c6).f6902b;
                    Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type java.lang.reflect.Member");
                }
                if (obj2 instanceof Constructor) {
                    rVar = j0Var.i((Constructor) obj2, j0Var.e(), false);
                } else {
                    if (!(obj2 instanceof Method)) {
                        throw new u1("Could not compute caller for function: " + j0Var.e() + " (member = " + obj2 + ')');
                    }
                    Method method = (Method) obj2;
                    rVar = !Modifier.isStatic(method.getModifiers()) ? j0Var.h() ? new dp.r(method, android.support.v4.media.session.b.b(j0Var.F, j0Var.e())) : new dp.v(0, method) : ((bq.b) j0Var.e()).getAnnotations().Q(c2.a) != null ? j0Var.h() ? new dp.s(method) : new dp.v(1, method) : j0Var.j(method, false);
                }
                return android.support.v4.media.session.b.g(rVar, j0Var.e(), false);
            default:
                hq.b bVar3 = a2.a;
                ip.v e12 = j0Var.e();
                h0 h0Var2 = j0Var.f6913y;
                ys.l c8 = a2.c(e12);
                if (c8 instanceof j) {
                    ip.v e13 = j0Var.e();
                    ip.l h7 = e13.h();
                    Intrinsics.checkNotNullExpressionValue(h7, "getContainingDeclaration(...)");
                    if (kq.g.d(h7) && (e13 instanceof ip.k) && ((ip.k) e13).r()) {
                        throw new u1(j0Var.e().h() + " cannot have default arguments");
                    }
                    ip.v e14 = j0Var.e();
                    List P2 = e14.P();
                    Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                    if (P2 == null || !P2.isEmpty()) {
                        Iterator it3 = P2.iterator();
                        while (it3.hasNext()) {
                            if (((lp.r0) it3.next()).C0()) {
                                vVar = null;
                                if (vVar != null) {
                                    ys.l c10 = a2.c(vVar);
                                    Intrinsics.checkNotNull(c10, "null cannot be cast to non-null type kotlin.reflect.jvm.internal.JvmFunctionSignature.KotlinFunction");
                                    gq.e eVar2 = ((j) c10).f6911b;
                                    genericDeclaration = h0Var2.b(eVar2.f9439v, eVar2.f9440w, true);
                                } else {
                                    gq.e eVar3 = ((j) c8).f6911b;
                                    String str2 = eVar3.f9439v;
                                    String str3 = eVar3.f9440w;
                                    Intrinsics.checkNotNull(j0Var.b().b());
                                    genericDeclaration = h0Var2.b(str2, str3, !Modifier.isStatic(r3.getModifiers()));
                                }
                            }
                        }
                    }
                    ip.l h10 = e14.h();
                    Intrinsics.checkNotNullExpressionValue(h10, "getContainingDeclaration(...)");
                    if (kq.g.f(h10)) {
                        Member b10 = j0Var.b().b();
                        Intrinsics.checkNotNull(b10);
                        if (Modifier.isStatic(b10.getModifiers())) {
                            kr.d dVar = new kr.d(oq.e.l(e14));
                            while (true) {
                                if (dVar.hasNext()) {
                                    obj = dVar.next();
                                    List P3 = ((ip.d) obj).P();
                                    Intrinsics.checkNotNullExpressionValue(P3, "getValueParameters(...)");
                                    if (P3 == null || !P3.isEmpty()) {
                                        Iterator it4 = P3.iterator();
                                        while (it4.hasNext()) {
                                            if (((lp.r0) it4.next()).C0()) {
                                            }
                                        }
                                    }
                                } else {
                                    obj = null;
                                }
                            }
                            if (obj instanceof ip.v) {
                                vVar = (ip.v) obj;
                                if (vVar != null) {
                                }
                            }
                        }
                    }
                    vVar = null;
                    if (vVar != null) {
                    }
                } else {
                    if (c8 instanceof i) {
                        if (j0Var.g()) {
                            Class<?> jClass4 = h0Var2.getJClass();
                            List parameters2 = j0Var.getParameters();
                            ArrayList arrayList3 = new ArrayList(kotlin.collections.d0.l(parameters2, 10));
                            Iterator it5 = parameters2.iterator();
                            while (it5.hasNext()) {
                                String name2 = ((y0) ((zo.m) it5.next())).getName();
                                Intrinsics.checkNotNull(name2);
                                arrayList3.add(name2);
                            }
                            dp.a aVar2 = dp.a.f7632d;
                            dp.b bVar4 = dp.b.f7635d;
                            return new dp.c(jClass4, arrayList3, aVar2);
                        }
                        String desc2 = ((i) c8).f6905b.f9440w;
                        h0Var2.getClass();
                        Intrinsics.checkNotNullParameter(desc2, "desc");
                        Class<?> jClass5 = h0Var2.getJClass();
                        ArrayList arrayList4 = new ArrayList();
                        h0.a(arrayList4, (ArrayList) h0Var2.k(desc2, false).f7943e, true);
                        Unit unit = Unit.a;
                        try {
                            Class[] clsArr2 = (Class[]) arrayList4.toArray(new Class[0]);
                            genericDeclaration = jClass5.getDeclaredConstructor((Class[]) Arrays.copyOf(clsArr2, clsArr2.length));
                        } catch (NoSuchMethodException unused2) {
                        }
                    } else if (c8 instanceof f) {
                        List list2 = ((f) c8).f6896b;
                        Class<?> jClass6 = h0Var2.getJClass();
                        ArrayList arrayList5 = new ArrayList(kotlin.collections.d0.l(list2, 10));
                        Iterator it6 = list2.iterator();
                        while (it6.hasNext()) {
                            arrayList5.add(((Method) it6.next()).getName());
                        }
                        return new dp.c(jClass6, arrayList5, dp.a.f7632d, dp.b.f7635d, list2);
                    }
                    genericDeclaration = null;
                }
                if (genericDeclaration instanceof Constructor) {
                    wVar = j0Var.i((Constructor) genericDeclaration, j0Var.e(), true);
                } else if (genericDeclaration instanceof Method) {
                    if (((bq.b) j0Var.e()).getAnnotations().Q(c2.a) != null) {
                        ip.l h11 = j0Var.e().h();
                        Intrinsics.checkNotNull(h11, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                        if (!((ip.f) h11).o()) {
                            Method method2 = (Method) genericDeclaration;
                            wVar = j0Var.h() ? new dp.s(method2) : new dp.v(1, method2);
                        }
                    }
                    wVar = j0Var.j((Method) genericDeclaration, j0Var.b().c());
                } else {
                    wVar = null;
                }
                if (wVar != null) {
                    return android.support.v4.media.session.b.g(wVar, j0Var.e(), true);
                }
                return null;
        }
    }
}
