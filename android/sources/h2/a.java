package h2;

import java.util.Map;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class a extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final a f9482d = new a(1);

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Map.Entry entry = (Map.Entry) obj;
        Intrinsics.checkNotNullParameter(entry, "entry");
        return "  " + ((c) entry.getKey()).a + " = " + entry.getValue();
    }
}
