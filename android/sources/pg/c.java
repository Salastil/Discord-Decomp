package pg;

import a5.k0;
import android.view.View;
import android.view.ViewParent;
import com.google.android.gms.internal.play_billing.v0;
import com.google.android.material.behavior.SwipeDismissBehavior;

/* loaded from: classes3.dex */
public final class c extends k0 {

    /* renamed from: b, reason: collision with root package name */
    public int f16393b;

    /* renamed from: c, reason: collision with root package name */
    public int f16394c = -1;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ SwipeDismissBehavior f16395d;

    public c(SwipeDismissBehavior swipeDismissBehavior) {
        this.f16395d = swipeDismissBehavior;
    }

    @Override // a5.k0
    public final void J(int i5, View view) {
        this.f16394c = i5;
        this.f16393b = view.getLeft();
        ViewParent parent = view.getParent();
        if (parent != null) {
            SwipeDismissBehavior swipeDismissBehavior = this.f16395d;
            swipeDismissBehavior.f5948c = true;
            parent.requestDisallowInterceptTouchEvent(true);
            swipeDismissBehavior.f5948c = false;
        }
    }

    @Override // a5.k0
    public final void L(View view, int i5, int i6) {
        float width = view.getWidth();
        SwipeDismissBehavior swipeDismissBehavior = this.f16395d;
        float f2 = width * swipeDismissBehavior.f5950e;
        float width2 = view.getWidth() * swipeDismissBehavior.f5951f;
        float abs = Math.abs(i5 - this.f16393b);
        if (abs <= f2) {
            view.setAlpha(1.0f);
        } else if (abs >= width2) {
            view.setAlpha(0.0f);
        } else {
            view.setAlpha(Math.min(Math.max(0.0f, 1.0f - ((abs - f2) / (width2 - f2))), 1.0f));
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:34:0x004e, code lost:
    
        if (java.lang.Math.abs(r11.getLeft() - r8.f16393b) >= java.lang.Math.round(r11.getWidth() * 0.5f)) goto L27;
     */
    @Override // a5.k0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void M(float f2, float f10, View view) {
        int i5;
        this.f16394c = -1;
        int width = view.getWidth();
        boolean z5 = false;
        SwipeDismissBehavior swipeDismissBehavior = this.f16395d;
        if (f2 != 0.0f) {
            boolean z6 = view.getLayoutDirection() == 1;
            int i6 = swipeDismissBehavior.f5949d;
            if (i6 != 2) {
                i5 = i6 == 0 ? this.f16393b : this.f16393b;
            }
            if (f2 >= 0.0f) {
                int left = view.getLeft();
                int i10 = this.f16393b;
                if (left >= i10) {
                    i5 = i10 + width;
                    z5 = true;
                }
            }
            i5 = this.f16393b - width;
            z5 = true;
        }
        if (swipeDismissBehavior.a.q(i5, view.getTop())) {
            view.postOnAnimation(new v0(swipeDismissBehavior, view, z5));
        }
    }

    @Override // a5.k0
    public final boolean V(int i5, View view) {
        int i6 = this.f16394c;
        return (i6 == -1 || i6 == i5) && this.f16395d.w(view);
    }

    @Override // a5.k0
    public final int m(int i5, View view) {
        int width;
        int width2;
        int width3;
        boolean z5 = view.getLayoutDirection() == 1;
        int i6 = this.f16395d.f5949d;
        if (i6 == 0) {
            if (z5) {
                width = this.f16393b - view.getWidth();
                width2 = this.f16393b;
            } else {
                width = this.f16393b;
                width3 = view.getWidth();
                width2 = width3 + width;
            }
        } else if (i6 != 1) {
            width = this.f16393b - view.getWidth();
            width2 = view.getWidth() + this.f16393b;
        } else if (z5) {
            width = this.f16393b;
            width3 = view.getWidth();
            width2 = width3 + width;
        } else {
            width = this.f16393b - view.getWidth();
            width2 = this.f16393b;
        }
        return Math.min(Math.max(width, i5), width2);
    }

    @Override // a5.k0
    public final int n(int i5, View view) {
        return view.getTop();
    }

    @Override // a5.k0
    public final int z(View view) {
        return view.getWidth();
    }

    @Override // a5.k0
    public final void K(int i5) {
    }
}
