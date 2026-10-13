package a4;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class f extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final f f106d = new f(1);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        b4.e it = (b4.e) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        String simpleName = it.getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "it.javaClass.simpleName");
        return simpleName;
    }
}
