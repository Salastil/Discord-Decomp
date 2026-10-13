package mq;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final m f14579d = new m();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        yq.y it = (yq.y) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        return it.toString();
    }
}
