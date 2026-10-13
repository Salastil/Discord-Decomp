package androidx.fragment.app;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class f implements Animation.AnimationListener {
    public final /* synthetic */ y1 a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f2000b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ View f2001c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ g f2002d;

    public f(y1 y1Var, ViewGroup viewGroup, View view, g gVar) {
        this.a = y1Var;
        this.f2000b = viewGroup;
        this.f2001c = view;
        this.f2002d = gVar;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        ViewGroup viewGroup = this.f2000b;
        viewGroup.post(new e(viewGroup, this.f2001c, this.f2002d, 0));
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animation from operation " + this.a + " has ended.");
        }
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animation from operation " + this.a + " has reached onAnimationStart.");
        }
    }
}
