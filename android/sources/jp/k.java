package jp;

import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public static final k f13013d = new k();

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        h it = (h) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        return CollectionsKt.C(it);
    }
}
