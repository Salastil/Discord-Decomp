package er;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;

/* loaded from: classes3.dex */
public final class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final b f8221d = new b();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        b1 b1Var = (b1) obj;
        Intrinsics.checkNotNull(b1Var);
        Intrinsics.checkNotNullParameter(b1Var, "<this>");
        return Boolean.valueOf(b1Var.r0() instanceof lq.b);
    }
}
