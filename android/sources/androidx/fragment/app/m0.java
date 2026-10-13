package androidx.fragment.app;

import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.Transformation;

/* loaded from: classes.dex */
public final class m0 extends AnimationSet implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final ViewGroup f2043d;

    /* renamed from: e, reason: collision with root package name */
    public final View f2044e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f2045i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f2046v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f2047w;

    public m0(Animation animation, ViewGroup viewGroup, View view) {
        super(false);
        this.f2047w = true;
        this.f2043d = viewGroup;
        this.f2044e = view;
        addAnimation(animation);
        viewGroup.post(this);
    }

    @Override // android.view.animation.AnimationSet, android.view.animation.Animation
    public final boolean getTransformation(long j, Transformation transformation) {
        this.f2047w = true;
        if (this.f2045i) {
            return !this.f2046v;
        }
        if (!super.getTransformation(j, transformation)) {
            this.f2045i = true;
            androidx.core.view.u.a(this.f2043d, this);
        }
        return true;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean z5 = this.f2045i;
        ViewGroup viewGroup = this.f2043d;
        if (z5 || !this.f2047w) {
            viewGroup.endViewTransition(this.f2044e);
            this.f2046v = true;
        } else {
            this.f2047w = false;
            viewGroup.post(this);
        }
    }

    @Override // android.view.animation.Animation
    public final boolean getTransformation(long j, Transformation transformation, float f2) {
        this.f2047w = true;
        if (this.f2045i) {
            return !this.f2046v;
        }
        if (!super.getTransformation(j, transformation, f2)) {
            this.f2045i = true;
            androidx.core.view.u.a(this.f2043d, this);
        }
        return true;
    }
}
