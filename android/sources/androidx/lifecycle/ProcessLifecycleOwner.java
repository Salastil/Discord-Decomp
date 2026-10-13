package androidx.lifecycle;

import android.os.Handler;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001:\u0001\u0004B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Landroidx/lifecycle/ProcessLifecycleOwner;", "Landroidx/lifecycle/LifecycleOwner;", "<init>", "()V", "androidx/lifecycle/d0", "lifecycle-process_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ProcessLifecycleOwner implements LifecycleOwner {
    public static final ProcessLifecycleOwner F = new ProcessLifecycleOwner();

    /* renamed from: d, reason: collision with root package name */
    public int f2159d;

    /* renamed from: e, reason: collision with root package name */
    public int f2160e;

    /* renamed from: w, reason: collision with root package name */
    public Handler f2163w;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2161i = true;

    /* renamed from: v, reason: collision with root package name */
    public boolean f2162v = true;

    /* renamed from: x, reason: collision with root package name */
    public final LifecycleRegistry f2164x = new LifecycleRegistry(this);

    /* renamed from: y, reason: collision with root package name */
    public final c0 f2165y = new c0(0, this);
    public final u4.b E = new u4.b(4, this);

    private ProcessLifecycleOwner() {
    }

    public final void a() {
        int i5 = this.f2160e + 1;
        this.f2160e = i5;
        if (i5 == 1) {
            if (this.f2161i) {
                this.f2164x.f(n.ON_RESUME);
                this.f2161i = false;
            } else {
                Handler handler = this.f2163w;
                Intrinsics.checkNotNull(handler);
                handler.removeCallbacks(this.f2165y);
            }
        }
    }

    @Override // androidx.lifecycle.LifecycleOwner
    public final Lifecycle getLifecycle() {
        return this.f2164x;
    }
}
