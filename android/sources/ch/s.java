package ch;

import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s implements View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3565d;

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View v5) {
        switch (this.f3565d) {
            case 0:
                v5.removeOnAttachStateChangeListener(this);
                v5.requestApplyInsets();
                break;
            default:
                Intrinsics.checkNotNullParameter(v5, "v");
                v5.removeOnAttachStateChangeListener(this);
                v5.requestApplyInsets();
                break;
        }
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View v5) {
        switch (this.f3565d) {
            case 0:
                break;
            default:
                Intrinsics.checkNotNullParameter(v5, "v");
                break;
        }
    }

    private final void a(View view) {
    }
}
