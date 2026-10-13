package mp;

import bs.a1;
import go.i;
import ip.b1;
import ip.c1;
import ip.f1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends a1 {

    /* renamed from: d, reason: collision with root package name */
    public static final a f14570d = new a("package", false);

    @Override // bs.a1
    public final Integer c(a1 visibility) {
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        if (this == visibility) {
            return 0;
        }
        i iVar = f1.a;
        Intrinsics.checkNotNullParameter(visibility, "visibility");
        return visibility == ip.a1.f12120d || visibility == b1.f12122d ? 1 : -1;
    }

    @Override // bs.a1
    public final String s() {
        return "public/*package*/";
    }

    @Override // bs.a1
    public final a1 u() {
        return c1.f12130d;
    }
}
