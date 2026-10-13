package e;

import androidx.activity.Cancellable;
import androidx.activity.OnBackPressedCallback;
import androidx.activity.OnBackPressedDispatcher;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class r implements androidx.lifecycle.t, Cancellable {

    /* renamed from: d, reason: collision with root package name */
    public final Lifecycle f7827d;

    /* renamed from: e, reason: collision with root package name */
    public final OnBackPressedCallback f7828e;

    /* renamed from: i, reason: collision with root package name */
    public s f7829i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ OnBackPressedDispatcher f7830v;

    public r(OnBackPressedDispatcher onBackPressedDispatcher, Lifecycle lifecycle, OnBackPressedCallback onBackPressedCallback) {
        Intrinsics.checkNotNullParameter(lifecycle, "lifecycle");
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        this.f7830v = onBackPressedDispatcher;
        this.f7827d = lifecycle;
        this.f7828e = onBackPressedCallback;
        lifecycle.a(this);
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, androidx.lifecycle.n event) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(event, "event");
        if (event == androidx.lifecycle.n.ON_START) {
            this.f7829i = this.f7830v.b(this.f7828e);
            return;
        }
        if (event != androidx.lifecycle.n.ON_STOP) {
            if (event == androidx.lifecycle.n.ON_DESTROY) {
                cancel();
            }
        } else {
            s sVar = this.f7829i;
            if (sVar != null) {
                sVar.cancel();
            }
        }
    }

    @Override // androidx.activity.Cancellable
    public final void cancel() {
        this.f7827d.c(this);
        this.f7828e.removeCancellable(this);
        s sVar = this.f7829i;
        if (sVar != null) {
            sVar.cancel();
        }
        this.f7829i = null;
    }
}
