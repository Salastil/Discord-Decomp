package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i extends ys.l {

    /* renamed from: b, reason: collision with root package name */
    public final gq.e f6905b;

    /* renamed from: c, reason: collision with root package name */
    public final String f6906c;

    public i(gq.e signature) {
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.f6905b = signature;
        this.f6906c = signature.b();
    }

    @Override // ys.l
    public final String d() {
        return this.f6906c;
    }
}
