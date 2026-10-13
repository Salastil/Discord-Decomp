package cp;

import kotlin.Result;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    static {
        Object i5;
        try {
            fo.q qVar = Result.f13476e;
            i5 = Class.forName("java.lang.ClassValue");
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (!(i5 instanceof fo.r)) {
            i5 = Boolean.TRUE;
        }
        Object obj = Boolean.FALSE;
        if (i5 instanceof fo.r) {
            i5 = obj;
        }
    }

    public static final e4.c a(Function1 compute) {
        Intrinsics.checkNotNullParameter(compute, "compute");
        return new e4.c(compute);
    }
}
