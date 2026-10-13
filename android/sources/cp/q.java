package cp;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final ip.d f6931d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6932e;

    public q(ip.d dVar, int i5) {
        this.f6931d = dVar;
        this.f6932e = i5;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Object obj = this.f6931d.P().get(this.f6932e);
        Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
        return (ip.k0) obj;
    }
}
