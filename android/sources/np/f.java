package np;

import ip.o0;
import ip.p0;
import kotlin.jvm.internal.Intrinsics;
import op.r;

/* loaded from: classes3.dex */
public final class f implements o0 {

    /* renamed from: d, reason: collision with root package name */
    public final r f15587d;

    public f(r javaElement) {
        Intrinsics.checkNotNullParameter(javaElement, "javaElement");
        this.f15587d = javaElement;
    }

    @Override // ip.o0
    public final void c() {
        p0 NO_SOURCE_FILE = p0.f12153e;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE_FILE, "NO_SOURCE_FILE");
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(f.class, sb2, ": ");
        sb2.append(this.f15587d);
        return sb2.toString();
    }
}
