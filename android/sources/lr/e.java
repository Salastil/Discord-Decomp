package lr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class e {
    public static final double a(double d6, d sourceUnit, d targetUnit) {
        Intrinsics.checkNotNullParameter(sourceUnit, "sourceUnit");
        Intrinsics.checkNotNullParameter(targetUnit, "targetUnit");
        long convert = targetUnit.f14216d.convert(1L, sourceUnit.f14216d);
        return convert > 0 ? d6 * convert : d6 / sourceUnit.f14216d.convert(1L, targetUnit.f14216d);
    }

    public static final long b(long j, d sourceUnit, d targetUnit) {
        Intrinsics.checkNotNullParameter(sourceUnit, "sourceUnit");
        Intrinsics.checkNotNullParameter(targetUnit, "targetUnit");
        return targetUnit.f14216d.convert(j, sourceUnit.f14216d);
    }

    public static final long c(long j, d sourceUnit, d targetUnit) {
        Intrinsics.checkNotNullParameter(sourceUnit, "sourceUnit");
        Intrinsics.checkNotNullParameter(targetUnit, "targetUnit");
        return targetUnit.f14216d.convert(j, sourceUnit.f14216d);
    }
}
