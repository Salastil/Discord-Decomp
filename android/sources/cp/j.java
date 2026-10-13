package cp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j extends ys.l {

    /* renamed from: b, reason: collision with root package name */
    public final gq.e f6911b;

    /* renamed from: c, reason: collision with root package name */
    public final String f6912c;

    public j(gq.e signature) {
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.f6911b = signature;
        this.f6912c = signature.b();
    }

    @Override // ys.l
    public final String d() {
        return this.f6912c;
    }
}
