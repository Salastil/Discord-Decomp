package androidx.fragment.app;

import androidx.activity.result.ActivityResultLauncher;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes.dex */
public final class z extends ActivityResultLauncher {
    public final /* synthetic */ AtomicReference a;

    public z(AtomicReference atomicReference) {
        this.a = atomicReference;
    }

    @Override // androidx.activity.result.ActivityResultLauncher
    public final void a(Object obj, x0.f fVar) {
        ActivityResultLauncher activityResultLauncher = (ActivityResultLauncher) this.a.get();
        if (activityResultLauncher == null) {
            throw new IllegalStateException("Operation cannot be started before fragment is in created state");
        }
        activityResultLauncher.a(obj, fVar);
    }

    @Override // androidx.activity.result.ActivityResultLauncher
    public final void b() {
        ActivityResultLauncher activityResultLauncher = (ActivityResultLauncher) this.a.getAndSet(null);
        if (activityResultLauncher != null) {
            activityResultLauncher.b();
        }
    }
}
