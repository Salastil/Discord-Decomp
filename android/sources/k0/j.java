package k0;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Function2 f13115b;

    public j(String name, Function2 mergePolicy) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(mergePolicy, "mergePolicy");
        this.a = name;
        this.f13115b = mergePolicy;
    }

    public final String toString() {
        return "SemanticsPropertyKey: " + this.a;
    }
}
