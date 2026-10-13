package aq;

import ip.p0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p implements wq.k {

    /* renamed from: d, reason: collision with root package name */
    public final np.b f2650d;

    public p(np.b binaryClass, wq.j abiStability) {
        Intrinsics.checkNotNullParameter(binaryClass, "binaryClass");
        Intrinsics.checkNotNullParameter(abiStability, "abiStability");
        this.f2650d = binaryClass;
    }

    @Override // ip.o0
    public final void c() {
        p0 NO_SOURCE_FILE = p0.f12153e;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE_FILE, "NO_SOURCE_FILE");
    }

    @Override // wq.k
    public final String p() {
        return s4.h.h(new StringBuilder("Class '"), op.c.a(this.f2650d.a).a().a.a, '\'');
    }

    public final String toString() {
        return p.class.getSimpleName() + ": " + this.f2650d;
    }
}
