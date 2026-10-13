package cp;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class z1 {
    public static final jq.h a = jq.f.a;

    public static void a(ip.d dVar, StringBuilder sb2) {
        lp.u g6 = c2.g(dVar);
        lp.u W = dVar.W();
        if (g6 != null) {
            yq.y type = g6.getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            sb2.append(d(type));
            sb2.append(".");
        }
        boolean z5 = (g6 == null || W == null) ? false : true;
        if (z5) {
            sb2.append("(");
        }
        if (W != null) {
            yq.y type2 = W.getType();
            Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
            sb2.append(d(type2));
            sb2.append(".");
        }
        if (z5) {
            sb2.append(")");
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static String b(ip.v descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        StringBuilder sb2 = new StringBuilder();
        sb2.append("fun ");
        a(descriptor, sb2);
        hq.e name = ((lp.l) descriptor).getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        sb2.append(a.O(name, true));
        List P = descriptor.P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        CollectionsKt.N(P, sb2, ", ", "(", ")", b.H, 48);
        sb2.append(": ");
        yq.y returnType = descriptor.getReturnType();
        Intrinsics.checkNotNull(returnType);
        sb2.append(d(returnType));
        return sb2.toString();
    }

    public static String c(ip.m0 descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        StringBuilder sb2 = new StringBuilder();
        sb2.append(descriptor.V() ? "var " : "val ");
        a(descriptor, sb2);
        hq.e name = descriptor.getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        sb2.append(a.O(name, true));
        sb2.append(": ");
        yq.y type = descriptor.getType();
        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
        sb2.append(d(type));
        return sb2.toString();
    }

    public static String d(yq.y type) {
        Intrinsics.checkNotNullParameter(type, "type");
        return a.X(type);
    }
}
