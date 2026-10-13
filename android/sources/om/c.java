package om;

import android.animation.Animator;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import fo.n;
import k4.k;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c implements Animator.AnimatorListener {
    public final b0 a;

    /* renamed from: b, reason: collision with root package name */
    public final u4.c f16136b;

    /* renamed from: c, reason: collision with root package name */
    public final a f16137c;

    /* renamed from: d, reason: collision with root package name */
    public b f16138d;

    public c(b0 wrapper, u4.c cVar, a animationType) {
        Intrinsics.checkNotNullParameter(wrapper, "wrapper");
        Intrinsics.checkNotNullParameter(animationType, "animationType");
        this.a = wrapper;
        this.f16136b = cVar;
        this.f16137c = animationType;
        this.f16138d = b.f16132d;
    }

    public final void a() {
        b bVar;
        int ordinal = this.f16138d.ordinal();
        if (ordinal == 0) {
            bVar = b.f16133e;
        } else if (ordinal == 1) {
            bVar = b.f16134i;
        } else {
            if (ordinal != 2) {
                throw new n();
            }
            bVar = b.f16134i;
        }
        this.f16138d = bVar;
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animation) {
        u4.c cVar = this.f16136b;
        Screen screen = (Screen) cVar.f18811d;
        Intrinsics.checkNotNullParameter(animation, "animation");
        if (this.f16138d == b.f16133e) {
            a();
            animation.removeListener(this);
            a aVar = this.f16137c;
            int ordinal = aVar.ordinal();
            if (ordinal == 0) {
                EventDispatcher reactEventDispatcher = screen.getReactEventDispatcher();
                if (reactEventDispatcher != null) {
                    reactEventDispatcher.dispatchEvent(new k(UIManagerHelper.getSurfaceId(screen), screen.getId(), 4));
                    Unit unit = Unit.a;
                }
            } else {
                if (ordinal != 1) {
                    throw new n();
                }
                EventDispatcher reactEventDispatcher2 = screen.getReactEventDispatcher();
                if (reactEventDispatcher2 != null) {
                    reactEventDispatcher2.dispatchEvent(new k(UIManagerHelper.getSurfaceId(screen), screen.getId(), 5));
                    Unit unit2 = Unit.a;
                }
            }
            boolean z5 = aVar == a.f16130e;
            cVar.z(1.0f, z5, z5);
            this.a.a().endRemovalTransition();
        }
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationRepeat(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animation) {
        Screen screen;
        EventDispatcher reactEventDispatcher;
        Screen screen2;
        EventDispatcher reactEventDispatcher2;
        Intrinsics.checkNotNullParameter(animation, "animation");
        if (this.f16138d == b.f16132d) {
            a();
            a aVar = this.f16137c;
            int ordinal = aVar.ordinal();
            u4.c cVar = this.f16136b;
            if (ordinal != 0) {
                if (ordinal != 1) {
                    throw new n();
                }
                if (cVar != null && (reactEventDispatcher2 = (screen2 = (Screen) cVar.f18811d).getReactEventDispatcher()) != null) {
                    reactEventDispatcher2.dispatchEvent(new k(UIManagerHelper.getSurfaceId(screen2), screen2.getId(), 8));
                    Unit unit = Unit.a;
                }
            } else if (cVar != null && (reactEventDispatcher = (screen = (Screen) cVar.f18811d).getReactEventDispatcher()) != null) {
                reactEventDispatcher.dispatchEvent(new k(UIManagerHelper.getSurfaceId(screen), screen.getId(), 7));
                Unit unit2 = Unit.a;
            }
            boolean z5 = aVar == a.f16130e;
            if (cVar != null) {
                cVar.z(0.0f, z5, z5);
            }
        }
    }
}
