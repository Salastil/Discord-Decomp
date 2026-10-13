package wp;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final g f19991d = new g();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        String it = (String) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        return "(raw) " + it;
    }
}
