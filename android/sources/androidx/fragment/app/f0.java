package androidx.fragment.app;

import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultRegistry;
import androidx.activity.result.contract.ActivityResultContract;
import androidx.arch.core.util.Function;
import androidx.fragment.app.Fragment;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes.dex */
public final class f0 extends Fragment.OnPreAttachedListener {
    public final /* synthetic */ Function a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ AtomicReference f2003b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ ActivityResultContract f2004c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ActivityResultCallback f2005d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Fragment f2006e;

    public f0(Fragment fragment, Function function, AtomicReference atomicReference, ActivityResultContract activityResultContract, ActivityResultCallback activityResultCallback) {
        this.f2006e = fragment;
        this.a = function;
        this.f2003b = atomicReference;
        this.f2004c = activityResultContract;
        this.f2005d = activityResultCallback;
    }

    @Override // androidx.fragment.app.Fragment.OnPreAttachedListener
    public final void a() {
        Fragment fragment = this.f2006e;
        this.f2003b.set(((ActivityResultRegistry) this.a.apply(null)).d(fragment.generateActivityResultKey(), fragment, this.f2004c, this.f2005d));
    }
}
