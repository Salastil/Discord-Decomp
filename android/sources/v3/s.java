package v3;

import java.util.LinkedHashSet;
import java.util.Set;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class s {
    public final UUID a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.o f19219b;

    /* renamed from: c, reason: collision with root package name */
    public final Set f19220c;

    public s(UUID id2, e4.o workSpec, LinkedHashSet tags) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(workSpec, "workSpec");
        Intrinsics.checkNotNullParameter(tags, "tags");
        this.a = id2;
        this.f19219b = workSpec;
        this.f19220c = tags;
    }
}
