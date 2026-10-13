package wp;

import fo.n;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.h0;
import yq.s0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class e {
    public static s0 a(ip.s0 parameter, a typeAttr, io.sentry.internal.debugmeta.c typeParameterUpperBoundEraser, y erasedUpperBound) {
        Intrinsics.checkNotNullParameter(parameter, "parameter");
        Intrinsics.checkNotNullParameter(typeAttr, "typeAttr");
        Intrinsics.checkNotNullParameter(typeParameterUpperBoundEraser, "typeParameterUpperBoundEraser");
        Intrinsics.checkNotNullParameter(erasedUpperBound, "erasedUpperBound");
        if (typeAttr == null) {
            Intrinsics.checkNotNullParameter(parameter, "parameter");
            Intrinsics.checkNotNullParameter(typeAttr, "typeAttr");
            Intrinsics.checkNotNullParameter(typeParameterUpperBoundEraser, "typeParameterUpperBoundEraser");
            Intrinsics.checkNotNullParameter(erasedUpperBound, "erasedUpperBound");
            return new h0(erasedUpperBound, c1.f21015w);
        }
        if (!typeAttr.f19975c) {
            typeAttr = typeAttr.b(b.f19979d);
        }
        int ordinal = typeAttr.f19974b.ordinal();
        if (ordinal != 0 && ordinal != 1) {
            if (ordinal == 2) {
                return new h0(erasedUpperBound, c1.f21013i);
            }
            throw new n();
        }
        if (!parameter.getVariance().f21018e) {
            return new h0(oq.e.e(parameter).o(), c1.f21013i);
        }
        List parameters = erasedUpperBound.r0().getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        if (!parameters.isEmpty()) {
            return new h0(erasedUpperBound, c1.f21015w);
        }
        s0 k = z0.k(parameter, typeAttr);
        Intrinsics.checkNotNull(k);
        return k;
    }
}
