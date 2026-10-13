package g0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j implements p, g {

    /* renamed from: d, reason: collision with root package name */
    public final m0.e f9079d;

    public j(g intrinsicMeasureScope, m0.e layoutDirection) {
        Intrinsics.checkNotNullParameter(intrinsicMeasureScope, "intrinsicMeasureScope");
        Intrinsics.checkNotNullParameter(layoutDirection, "layoutDirection");
        this.f9079d = layoutDirection;
    }

    @Override // g0.g
    public final m0.e getLayoutDirection() {
        return this.f9079d;
    }
}
