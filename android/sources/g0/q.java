package g0;

import i0.f0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class q {
    public final z.f a;

    /* renamed from: b, reason: collision with root package name */
    public final k f9080b;

    public q(z.f modifier, f0 coordinates) {
        Intrinsics.checkNotNullParameter(modifier, "modifier");
        Intrinsics.checkNotNullParameter(coordinates, "coordinates");
        this.a = modifier;
        this.f9080b = coordinates;
    }

    public final String toString() {
        return "ModifierInfo(" + this.a + ", " + this.f9080b + ", null)";
    }
}
