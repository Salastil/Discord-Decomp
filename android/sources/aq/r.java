package aq;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final r f2651d = new r();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        String it = (String) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        return it.length() > 1 ? k0.d.h(';', "L", it) : it;
    }
}
