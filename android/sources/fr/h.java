package fr;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import yq.b1;
import yq.c0;

/* loaded from: classes3.dex */
public final class h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9018d;

    /* renamed from: e, reason: collision with root package name */
    public static final h f9012e = new h(0);

    /* renamed from: i, reason: collision with root package name */
    public static final h f9013i = new h(1);

    /* renamed from: v, reason: collision with root package name */
    public static final h f9014v = new h(2);

    /* renamed from: w, reason: collision with root package name */
    public static final h f9015w = new h(3);

    /* renamed from: x, reason: collision with root package name */
    public static final h f9016x = new h(4);

    /* renamed from: y, reason: collision with root package name */
    public static final h f9017y = new h(5);
    public static final h E = new h(6);
    public static final h F = new h(7);
    public static final h G = new h(8);

    public /* synthetic */ h(int i5) {
        this.f9018d = i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x00b7, code lost:
    
        if (r11 == false) goto L39;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x0172, code lost:
    
        if (fp.i.F(r7) != false) goto L83;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00bd A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
    @Override // kotlin.jvm.functions.Function1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj) {
        c0 k;
        b1 U;
        yq.y returnType;
        boolean z5;
        hq.b f2;
        yq.y returnType2;
        boolean O;
        boolean z6 = true;
        switch (this.f9018d) {
            case 0:
                Intrinsics.checkNotNullParameter((ip.v) obj, "<this>");
                return null;
            case 1:
                Intrinsics.checkNotNullParameter((ip.v) obj, "<this>");
                return null;
            case 2:
                Intrinsics.checkNotNullParameter((ip.v) obj, "<this>");
                return null;
            case 3:
                ip.v Checks = (ip.v) obj;
                List list = r.f9034f;
                Intrinsics.checkNotNullParameter(Checks, "$this$Checks");
                List P = Checks.P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                r0 r0Var = (r0) CollectionsKt.S(P);
                if (r0Var == null || oq.e.a(r0Var) || r0Var.H != null) {
                    return "last parameter should not have a default value or be a vararg";
                }
                return null;
            case 4:
                ip.v Checks2 = (ip.v) obj;
                List list2 = r.f9034f;
                Intrinsics.checkNotNullParameter(Checks2, "$this$Checks");
                ip.l h6 = Checks2.h();
                Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                if (h6 instanceof ip.f) {
                    hq.e eVar = fp.i.f8859e;
                    if (fp.i.b((ip.f) h6, fp.o.a)) {
                        return null;
                    }
                }
                Collection i5 = Checks2.i();
                Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
                Collection collection = i5;
                if (!collection.isEmpty()) {
                    Iterator it = collection.iterator();
                    while (it.hasNext()) {
                        ip.l h7 = ((ip.v) it.next()).h();
                        Intrinsics.checkNotNullExpressionValue(h7, "getContainingDeclaration(...)");
                        if (h7 instanceof ip.f) {
                            hq.e eVar2 = fp.i.f8859e;
                            if (fp.i.b((ip.f) h7, fp.o.a)) {
                                return null;
                            }
                        }
                    }
                }
                Intrinsics.checkNotNullParameter(Checks2, "<this>");
                ip.l h10 = Checks2.h();
                ip.f fVar = h10 instanceof ip.f ? (ip.f) h10 : null;
                if (fVar != null) {
                    if (!kq.g.f(fVar)) {
                        fVar = null;
                    }
                    if (fVar != null && (k = fVar.k()) != null && (U = com.facebook.imagepipeline.nativecode.c.U(k)) != null && (returnType = Checks2.getReturnType()) != null && Intrinsics.areEqual(((lp.l) Checks2).getName(), s.f9037d)) {
                        Intrinsics.checkNotNullParameter(returnType, "<this>");
                        hq.e eVar3 = fp.i.f8859e;
                        if (!fp.i.C(returnType, fp.o.f8890h)) {
                            Intrinsics.checkNotNullParameter(returnType, "<this>");
                            break;
                        }
                        if (Checks2.P().size() == 1) {
                            yq.y type = ((r0) Checks2.P().get(0)).getType();
                            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                            if (Intrinsics.areEqual(com.facebook.imagepipeline.nativecode.c.U(type), U) && Checks2.a0().isEmpty() && Checks2.W() == null) {
                                return null;
                            }
                        }
                    }
                }
                StringBuilder sb2 = new StringBuilder("must override ''equals()'' in Any");
                ip.l h11 = Checks2.h();
                Intrinsics.checkNotNullExpressionValue(h11, "getContainingDeclaration(...)");
                if (kq.g.f(h11)) {
                    jq.h hVar = jq.f.f13047b;
                    ip.l h12 = Checks2.h();
                    Intrinsics.checkNotNull(h12, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.ClassDescriptor");
                    c0 k5 = ((ip.f) h12).k();
                    Intrinsics.checkNotNullExpressionValue(k5, "getDefaultType(...)");
                    sb2.append(" or define ''equals(other: " + hVar.X(com.facebook.imagepipeline.nativecode.c.U(k5)) + "): Boolean''");
                }
                return sb2.toString();
            case 5:
                ip.v Checks3 = (ip.v) obj;
                List list3 = r.f9034f;
                Intrinsics.checkNotNullParameter(Checks3, "$this$Checks");
                lp.u T = Checks3.T();
                if (T == null) {
                    T = Checks3.W();
                }
                if (T != null) {
                    yq.y returnType3 = Checks3.getReturnType();
                    if (returnType3 != null) {
                        yq.y type2 = T.getType();
                        Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                        z5 = com.facebook.imagepipeline.nativecode.c.O(returnType3, type2);
                    } else {
                        z5 = false;
                    }
                    if (!z5) {
                        sq.d B0 = T.B0();
                        Intrinsics.checkNotNullExpressionValue(B0, "getValue(...)");
                        if (B0 instanceof sq.c) {
                            ip.f fVar2 = ((sq.c) B0).f18098d;
                            if (fVar2.z() && (f2 = oq.e.f(fVar2)) != null) {
                                ip.i k7 = nf.e.k(oq.e.j(fVar2), f2);
                                ip.r0 r0Var2 = k7 instanceof ip.r0 ? (ip.r0) k7 : null;
                                if (r0Var2 != null && (returnType2 = Checks3.getReturnType()) != null) {
                                    O = com.facebook.imagepipeline.nativecode.c.O(returnType2, ((wq.t) r0Var2).C0());
                                    break;
                                }
                            }
                        }
                        O = false;
                        break;
                    }
                    if (z6) {
                        return "receiver must be a supertype of the return type";
                    }
                    return null;
                }
                z6 = false;
                if (z6) {
                }
                break;
            case 6:
                fp.i iVar = (fp.i) obj;
                t tVar = t.f9052c;
                Intrinsics.checkNotNullParameter(iVar, "<this>");
                iVar.getClass();
                c0 t5 = iVar.t(fp.k.f8866x);
                Intrinsics.checkNotNullExpressionValue(t5, "getBooleanType(...)");
                return t5;
            case 7:
                fp.i iVar2 = (fp.i) obj;
                u uVar = u.f9053c;
                Intrinsics.checkNotNullParameter(iVar2, "<this>");
                iVar2.getClass();
                c0 t10 = iVar2.t(fp.k.G);
                Intrinsics.checkNotNullExpressionValue(t10, "getIntType(...)");
                return t10;
            default:
                fp.i iVar3 = (fp.i) obj;
                v vVar = v.f9054c;
                Intrinsics.checkNotNullParameter(iVar3, "<this>");
                c0 x5 = iVar3.x();
                Intrinsics.checkNotNullExpressionValue(x5, "getUnitType(...)");
                return x5;
        }
    }
}
