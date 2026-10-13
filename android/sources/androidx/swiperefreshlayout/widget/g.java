package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;

/* loaded from: classes.dex */
public final class g extends Animation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2532d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f2533e;

    public /* synthetic */ g(i iVar, int i5) {
        this.f2532d = i5;
        this.f2533e = iVar;
    }

    @Override // android.view.animation.Animation
    public final void applyTransformation(float f2, Transformation transformation) {
        switch (this.f2532d) {
            case 0:
                i iVar = this.f2533e;
                float f10 = iVar.mStartingScale;
                iVar.setAnimationProgress(((-f10) * f2) + f10);
                iVar.moveToStart(f2);
                break;
            case 1:
                this.f2533e.setAnimationProgress(f2);
                break;
            default:
                this.f2533e.setAnimationProgress(1.0f - f2);
                break;
        }
    }
}
