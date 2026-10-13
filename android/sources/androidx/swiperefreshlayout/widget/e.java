package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;

/* loaded from: classes.dex */
public final class e extends Animation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2527d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f2528e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ i f2529i;

    public e(i iVar, int i5, int i6) {
        this.f2529i = iVar;
        this.f2527d = i5;
        this.f2528e = i6;
    }

    @Override // android.view.animation.Animation
    public final void applyTransformation(float f2, Transformation transformation) {
        this.f2529i.mProgress.setAlpha((int) (((this.f2528e - r0) * f2) + this.f2527d));
    }
}
