package j2;

import android.animation.ValueAnimator;

/* loaded from: classes.dex */
public final class b {
    public a a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ c f12384b;

    public b(c cVar) {
        this.f12384b = cVar;
    }

    public final boolean a() {
        boolean unregisterDurationScaleChangeListener = ValueAnimator.unregisterDurationScaleChangeListener(this.a);
        this.a = null;
        return unregisterDurationScaleChangeListener;
    }
}
