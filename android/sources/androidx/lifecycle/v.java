package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class v {
    public Lifecycle.State a;

    /* renamed from: b, reason: collision with root package name */
    public t f2228b;

    public final void a(LifecycleOwner lifecycleOwner, n event) {
        Intrinsics.checkNotNullParameter(event, "event");
        Lifecycle.State a = event.a();
        Lifecycle.State state1 = this.a;
        Intrinsics.checkNotNullParameter(state1, "state1");
        if (a.compareTo(state1) < 0) {
            state1 = a;
        }
        this.a = state1;
        t tVar = this.f2228b;
        Intrinsics.checkNotNull(lifecycleOwner);
        tVar.c(lifecycleOwner, event);
        this.a = a;
    }
}
