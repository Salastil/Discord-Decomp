package x4;

import android.animation.Animator;
import android.graphics.PointF;
import android.view.Choreographer;
import java.util.Iterator;
import l4.i;

/* loaded from: classes.dex */
public final class e extends a implements Choreographer.FrameCallback {
    public float E;
    public int F;
    public float G;
    public float H;
    public i I;
    public boolean J;
    public boolean K;

    /* renamed from: v, reason: collision with root package name */
    public float f20280v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f20281w;

    /* renamed from: x, reason: collision with root package name */
    public long f20282x;

    /* renamed from: y, reason: collision with root package name */
    public float f20283y;

    @Override // android.animation.ValueAnimator, android.animation.Animator
    public final void cancel() {
        Iterator it = this.f20275e.iterator();
        while (it.hasNext()) {
            ((Animator.AnimatorListener) it.next()).onAnimationCancel(this);
        }
        a(g());
        h(true);
    }

    public final float d() {
        i iVar = this.I;
        if (iVar == null) {
            return 0.0f;
        }
        float f2 = this.E;
        float f10 = iVar.f13750l;
        return (f2 - f10) / (iVar.f13751m - f10);
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        boolean z5 = false;
        if (this.J) {
            h(false);
            Choreographer.getInstance().postFrameCallback(this);
        }
        i iVar = this.I;
        if (iVar == null || !this.J) {
            return;
        }
        float abs = (this.f20282x != 0 ? j - r2 : 0L) / ((1.0E9f / iVar.f13752n) / Math.abs(this.f20280v));
        float f2 = this.f20283y;
        if (g()) {
            abs = -abs;
        }
        float f10 = f2 + abs;
        float f11 = f();
        float e9 = e();
        PointF pointF = g.a;
        if (f10 >= f11 && f10 <= e9) {
            z5 = true;
        }
        float f12 = this.f20283y;
        float b10 = g.b(f10, f(), e());
        this.f20283y = b10;
        if (this.K) {
            b10 = (float) Math.floor(b10);
        }
        this.E = b10;
        this.f20282x = j;
        if (!this.K || this.f20283y != f12) {
            c();
        }
        if (!z5) {
            if (getRepeatCount() == -1 || this.F < getRepeatCount()) {
                Iterator it = this.f20275e.iterator();
                while (it.hasNext()) {
                    ((Animator.AnimatorListener) it.next()).onAnimationRepeat(this);
                }
                this.F++;
                if (getRepeatMode() == 2) {
                    this.f20281w = !this.f20281w;
                    this.f20280v = -this.f20280v;
                } else {
                    float e10 = g() ? e() : f();
                    this.f20283y = e10;
                    this.E = e10;
                }
                this.f20282x = j;
            } else {
                float f13 = this.f20280v < 0.0f ? f() : e();
                this.f20283y = f13;
                this.E = f13;
                h(true);
                a(g());
            }
        }
        if (this.I == null) {
            return;
        }
        float f14 = this.E;
        if (f14 < this.G || f14 > this.H) {
            throw new IllegalStateException(String.format("Frame must be [%f,%f]. It is %f", Float.valueOf(this.G), Float.valueOf(this.H), Float.valueOf(this.E)));
        }
    }

    public final float e() {
        i iVar = this.I;
        if (iVar == null) {
            return 0.0f;
        }
        float f2 = this.H;
        return f2 == 2.1474836E9f ? iVar.f13751m : f2;
    }

    public final float f() {
        i iVar = this.I;
        if (iVar == null) {
            return 0.0f;
        }
        float f2 = this.G;
        return f2 == -2.1474836E9f ? iVar.f13750l : f2;
    }

    public final boolean g() {
        return this.f20280v < 0.0f;
    }

    @Override // android.animation.ValueAnimator
    public final float getAnimatedFraction() {
        float f2;
        float e9;
        float f10;
        if (this.I == null) {
            return 0.0f;
        }
        if (g()) {
            f2 = e() - this.E;
            e9 = e();
            f10 = f();
        } else {
            f2 = this.E - f();
            e9 = e();
            f10 = f();
        }
        return f2 / (e9 - f10);
    }

    @Override // android.animation.ValueAnimator
    public final Object getAnimatedValue() {
        return Float.valueOf(d());
    }

    @Override // android.animation.ValueAnimator, android.animation.Animator
    public final long getDuration() {
        i iVar = this.I;
        if (iVar == null) {
            return 0L;
        }
        return (long) iVar.b();
    }

    public final void h(boolean z5) {
        Choreographer.getInstance().removeFrameCallback(this);
        if (z5) {
            this.J = false;
        }
    }

    @Override // android.animation.ValueAnimator, android.animation.Animator
    public final boolean isRunning() {
        return this.J;
    }

    public final void j(float f2) {
        if (this.f20283y == f2) {
            return;
        }
        float b10 = g.b(f2, f(), e());
        this.f20283y = b10;
        if (this.K) {
            b10 = (float) Math.floor(b10);
        }
        this.E = b10;
        this.f20282x = 0L;
        c();
    }

    public final void k(float f2, float f10) {
        if (f2 > f10) {
            throw new IllegalArgumentException("minFrame (" + f2 + ") must be <= maxFrame (" + f10 + ")");
        }
        i iVar = this.I;
        float f11 = iVar == null ? -3.4028235E38f : iVar.f13750l;
        float f12 = iVar == null ? Float.MAX_VALUE : iVar.f13751m;
        float b10 = g.b(f2, f11, f12);
        float b11 = g.b(f10, f11, f12);
        if (b10 == this.G && b11 == this.H) {
            return;
        }
        this.G = b10;
        this.H = b11;
        j((int) g.b(this.E, b10, b11));
    }

    @Override // android.animation.ValueAnimator
    public final void setRepeatMode(int i5) {
        super.setRepeatMode(i5);
        if (i5 == 2 || !this.f20281w) {
            return;
        }
        this.f20281w = false;
        this.f20280v = -this.f20280v;
    }
}
