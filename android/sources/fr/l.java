package fr;

import ip.a0;
import ip.s0;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import yq.b1;
import yq.c0;
import yq.h0;
import yq.k0;
import yq.z0;

/* loaded from: classes3.dex */
public final class l implements e {

    /* renamed from: b, reason: collision with root package name */
    public static final l f9024b = new l(0);

    /* renamed from: c, reason: collision with root package name */
    public static final l f9025c = new l(1);
    public final /* synthetic */ int a;

    public /* synthetic */ l(int i5) {
        this.a = i5;
    }

    @Override // fr.e
    public final boolean a(tp.e functionDescriptor) {
        c0 s2;
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                r0 r0Var = (r0) functionDescriptor.P().get(1);
                fp.m mVar = fp.n.f8874d;
                Intrinsics.checkNotNull(r0Var);
                a0 module = oq.e.j(r0Var);
                mVar.getClass();
                Intrinsics.checkNotNullParameter(module, "module");
                ip.f j = nf.e.j(module, fp.o.R);
                if (j == null) {
                    s2 = null;
                } else {
                    k0.f21045e.getClass();
                    k0 k0Var = k0.f21046i;
                    List parameters = j.n().getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                    Object Z = CollectionsKt.Z(parameters);
                    Intrinsics.checkNotNullExpressionValue(Z, "single(...)");
                    s2 = yq.c.s(k0Var, j, b0.c(new h0((s0) Z)));
                }
                if (s2 == null) {
                    return false;
                }
                yq.y type = r0Var.getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                Intrinsics.checkNotNullParameter(type, "<this>");
                if (type == null) {
                    z0.a(2);
                    throw null;
                }
                b1 g6 = z0.g(type, false);
                Intrinsics.checkNotNullExpressionValue(g6, "makeNotNullable(...)");
                return com.facebook.imagepipeline.nativecode.c.O(s2, g6);
            default:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                List<r0> P = functionDescriptor.P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                if (P == null || !P.isEmpty()) {
                    for (r0 r0Var2 : P) {
                        Intrinsics.checkNotNull(r0Var2);
                        if (oq.e.a(r0Var2) || r0Var2.H != null) {
                            return false;
                        }
                    }
                }
                return true;
        }
    }

    @Override // fr.e
    public final String b(tp.e eVar) {
        switch (this.a) {
        }
        return tn.g.n(this, eVar);
    }

    @Override // fr.e
    public final String getDescription() {
        switch (this.a) {
            case 0:
                return "second parameter must be of type KProperty<*> or its supertype";
            default:
                return "should not have varargs or parameters with default values";
        }
    }
}
