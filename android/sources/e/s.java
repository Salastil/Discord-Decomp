package e;

import androidx.activity.Cancellable;
import androidx.activity.OnBackPressedCallback;
import androidx.activity.OnBackPressedDispatcher;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class s implements Cancellable {

    /* renamed from: d, reason: collision with root package name */
    public final OnBackPressedCallback f7831d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ OnBackPressedDispatcher f7832e;

    public s(OnBackPressedDispatcher onBackPressedDispatcher, OnBackPressedCallback onBackPressedCallback) {
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        this.f7832e = onBackPressedDispatcher;
        this.f7831d = onBackPressedCallback;
    }

    @Override // androidx.activity.Cancellable
    public final void cancel() {
        OnBackPressedDispatcher onBackPressedDispatcher = this.f7832e;
        ArrayDeque arrayDeque = onBackPressedDispatcher.f740b;
        OnBackPressedCallback onBackPressedCallback = this.f7831d;
        arrayDeque.remove(onBackPressedCallback);
        if (Intrinsics.areEqual(onBackPressedDispatcher.f741c, onBackPressedCallback)) {
            onBackPressedCallback.handleOnBackCancelled();
            onBackPressedDispatcher.f741c = null;
        }
        onBackPressedCallback.removeCancellable(this);
        Function0<Unit> enabledChangedCallback$activity_release = onBackPressedCallback.getEnabledChangedCallback$activity_release();
        if (enabledChangedCallback$activity_release != null) {
            enabledChangedCallback$activity_release.invoke();
        }
        onBackPressedCallback.setEnabledChangedCallback$activity_release(null);
    }
}
