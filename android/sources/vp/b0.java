package vp;

import java.util.Collection;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b0 implements ir.b {

    /* renamed from: d, reason: collision with root package name */
    public static final b0 f19471d = new b0();

    @Override // ir.b
    public final Iterable c(Object obj) {
        int i5 = d0.f19480p;
        Collection b10 = ((ip.f) obj).n().b();
        Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
        kr.g o6 = kr.s.o(CollectionsKt.C(b10), m.f19507x);
        Intrinsics.checkNotNullParameter(o6, "<this>");
        return new kotlin.collections.v(2, o6);
    }
}
