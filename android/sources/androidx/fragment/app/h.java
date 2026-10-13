package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.content.Context;
import android.content.res.Resources;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import com.discord.R;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class h extends m {

    /* renamed from: b, reason: collision with root package name */
    public final boolean f2015b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f2016c;

    /* renamed from: d, reason: collision with root package name */
    public l0 f2017d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(y1 operation, boolean z5) {
        super(operation);
        Intrinsics.checkNotNullParameter(operation, "operation");
        this.f2015b = z5;
    }

    public final l0 b(Context context) {
        Animation loadAnimation;
        l0 l0Var;
        Intrinsics.checkNotNullParameter(context, "context");
        if (this.f2016c) {
            return this.f2017d;
        }
        y1 y1Var = this.a;
        Fragment fragment = y1Var.f2125c;
        boolean z5 = y1Var.a == a2.f1962e;
        int nextTransition = fragment.getNextTransition();
        int popEnterAnim = this.f2015b ? z5 ? fragment.getPopEnterAnim() : fragment.getPopExitAnim() : z5 ? fragment.getEnterAnim() : fragment.getExitAnim();
        fragment.setAnimations(0, 0, 0, 0);
        ViewGroup viewGroup = fragment.mContainer;
        l0 l0Var2 = null;
        if (viewGroup != null && viewGroup.getTag(R.id.visible_removing_fragment_view_tag) != null) {
            fragment.mContainer.setTag(R.id.visible_removing_fragment_view_tag, null);
        }
        ViewGroup viewGroup2 = fragment.mContainer;
        if (viewGroup2 == null || viewGroup2.getLayoutTransition() == null) {
            Animation onCreateAnimation = fragment.onCreateAnimation(nextTransition, z5, popEnterAnim);
            if (onCreateAnimation != null) {
                l0Var2 = new l0(onCreateAnimation);
            } else {
                Animator onCreateAnimator = fragment.onCreateAnimator(nextTransition, z5, popEnterAnim);
                if (onCreateAnimator != null) {
                    l0Var2 = new l0(onCreateAnimator);
                } else {
                    if (popEnterAnim == 0 && nextTransition != 0) {
                        popEnterAnim = nextTransition != 4097 ? nextTransition != 8194 ? nextTransition != 8197 ? nextTransition != 4099 ? nextTransition != 4100 ? -1 : z5 ? android.support.v4.media.session.b.A(context, android.R.attr.activityOpenEnterAnimation) : android.support.v4.media.session.b.A(context, android.R.attr.activityOpenExitAnimation) : z5 ? R.animator.fragment_fade_enter : R.animator.fragment_fade_exit : z5 ? android.support.v4.media.session.b.A(context, android.R.attr.activityCloseEnterAnimation) : android.support.v4.media.session.b.A(context, android.R.attr.activityCloseExitAnimation) : z5 ? R.animator.fragment_close_enter : R.animator.fragment_close_exit : z5 ? R.animator.fragment_open_enter : R.animator.fragment_open_exit;
                    }
                    if (popEnterAnim != 0) {
                        boolean equals = "anim".equals(context.getResources().getResourceTypeName(popEnterAnim));
                        try {
                            if (equals) {
                                try {
                                    loadAnimation = AnimationUtils.loadAnimation(context, popEnterAnim);
                                } catch (Resources.NotFoundException e9) {
                                    throw e9;
                                } catch (RuntimeException unused) {
                                }
                                if (loadAnimation != null) {
                                    l0Var = new l0(loadAnimation);
                                    l0Var2 = l0Var;
                                }
                            }
                            Animator loadAnimator = AnimatorInflater.loadAnimator(context, popEnterAnim);
                            if (loadAnimator != null) {
                                l0Var = new l0(loadAnimator);
                                l0Var2 = l0Var;
                            }
                        } catch (RuntimeException e10) {
                            if (equals) {
                                throw e10;
                            }
                            Animation loadAnimation2 = AnimationUtils.loadAnimation(context, popEnterAnim);
                            if (loadAnimation2 != null) {
                                l0Var2 = new l0(loadAnimation2);
                            }
                        }
                    }
                }
            }
        }
        this.f2017d = l0Var2;
        this.f2016c = true;
        return l0Var2;
    }
}
