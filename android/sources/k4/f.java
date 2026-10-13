package k4;

import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class f implements View.OnAttachStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ boolean f13172d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ l4.h f13173e;

    public f(l4.h hVar, boolean z5) {
        this.f13172d = z5;
        this.f13173e = hVar;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View v5) {
        Intrinsics.checkNotNullParameter(v5, "v");
        l4.h hVar = (l4.h) v5;
        boolean z5 = this.f13172d;
        l4.h hVar2 = this.f13173e;
        if (z5) {
            hVar2.playAnimation();
        } else {
            hVar2.H.add(l4.f.f13726x);
            hVar2.f13737w.n();
        }
        hVar.removeOnAttachStateChangeListener(this);
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View v5) {
        Intrinsics.checkNotNullParameter(v5, "v");
        ((l4.h) v5).removeOnAttachStateChangeListener(this);
    }
}
