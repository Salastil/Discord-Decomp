package fo;

import kotlin.Lazy;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class l {
    public static u a(Function0 initializer) {
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        return new u(initializer, null, 2, null);
    }

    public static Lazy b(m mode, Function0 initializer) {
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        int ordinal = mode.ordinal();
        if (ordinal == 0) {
            return new u(initializer, null, 2, null);
        }
        if (ordinal == 1) {
            Intrinsics.checkNotNullParameter(initializer, "initializer");
            t tVar = new t();
            tVar.f8835d = initializer;
            tVar.f8836e = h0.a;
            return tVar;
        }
        if (ordinal != 2) {
            throw new n();
        }
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        m0 m0Var = new m0();
        m0Var.f8830d = initializer;
        m0Var.f8831e = h0.a;
        return m0Var;
    }
}
