package jm;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import io.sentry.android.core.h1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s extends f {
    public float S;
    public float T;
    public final float U;
    public float V;

    /* renamed from: j0, reason: collision with root package name */
    public float f12934j0;

    /* renamed from: k0, reason: collision with root package name */
    public float f12935k0;

    /* renamed from: l0, reason: collision with root package name */
    public float f12936l0;

    /* renamed from: m0, reason: collision with root package name */
    public float f12937m0;

    /* renamed from: n0, reason: collision with root package name */
    public float f12938n0;

    /* renamed from: o0, reason: collision with root package name */
    public float f12939o0;

    /* renamed from: p0, reason: collision with root package name */
    public VelocityTracker f12940p0;

    /* renamed from: q0, reason: collision with root package name */
    public boolean f12941q0;

    /* renamed from: r0, reason: collision with root package name */
    public long f12942r0;

    /* renamed from: t0, reason: collision with root package name */
    public Handler f12944t0;
    public final boolean R = true;
    public float W = Float.MAX_VALUE;
    public float X = Float.MIN_VALUE;
    public float Y = Float.MIN_VALUE;
    public float Z = Float.MAX_VALUE;
    public float a0 = Float.MAX_VALUE;

    /* renamed from: b0, reason: collision with root package name */
    public float f12927b0 = Float.MIN_VALUE;

    /* renamed from: c0, reason: collision with root package name */
    public float f12928c0 = Float.MIN_VALUE;

    /* renamed from: d0, reason: collision with root package name */
    public float f12929d0 = Float.MAX_VALUE;

    /* renamed from: e0, reason: collision with root package name */
    public float f12930e0 = Float.MAX_VALUE;

    /* renamed from: f0, reason: collision with root package name */
    public float f12931f0 = Float.MAX_VALUE;

    /* renamed from: g0, reason: collision with root package name */
    public float f12932g0 = Float.MAX_VALUE;
    public int h0 = 1;

    /* renamed from: i0, reason: collision with root package name */
    public int f12933i0 = 10;

    /* renamed from: s0, reason: collision with root package name */
    public final h1 f12943s0 = new h1(14, this);

    /* renamed from: u0, reason: collision with root package name */
    public z f12945u0 = new z();

    public s(Context context) {
        this.V = Float.MIN_VALUE;
        Intrinsics.checkNotNull(context);
        float scaledTouchSlop = ViewConfiguration.get(context).getScaledTouchSlop();
        this.U = scaledTouchSlop;
        this.V = scaledTouchSlop;
    }

    @Override // jm.f
    public final void B() {
        Handler handler = this.f12944t0;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
        VelocityTracker velocityTracker = this.f12940p0;
        if (velocityTracker != null) {
            velocityTracker.recycle();
            this.f12940p0 = null;
        }
        this.f12945u0 = new z();
    }

    @Override // jm.f
    public final void D() {
        super.D();
        this.W = Float.MAX_VALUE;
        this.X = Float.MIN_VALUE;
        this.Y = Float.MIN_VALUE;
        this.Z = Float.MAX_VALUE;
        this.a0 = Float.MAX_VALUE;
        this.f12927b0 = Float.MIN_VALUE;
        this.f12928c0 = Float.MIN_VALUE;
        this.f12929d0 = Float.MAX_VALUE;
        this.f12930e0 = Float.MAX_VALUE;
        this.f12931f0 = Float.MAX_VALUE;
        this.f12932g0 = Float.MAX_VALUE;
        this.V = this.U;
        this.h0 = 1;
        this.f12933i0 = 10;
        this.f12942r0 = 0L;
        this.f12941q0 = false;
    }

    @Override // jm.f
    public final void E() {
        this.f12934j0 = this.f12938n0;
        this.f12935k0 = this.f12939o0;
    }

    @Override // jm.f
    public final void a(boolean z5) {
        if (this.f12878h != 4) {
            E();
        }
        super.a(z5);
    }

    @Override // jm.f
    public final boolean t() {
        return this.R;
    }

    @Override // jm.f
    public final void w() {
        Handler handler = this.f12944t0;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (K(sourceEvent)) {
            return;
        }
        if (event.getToolType(0) == 2) {
            this.f12945u0 = jb.a.k(event);
        }
        int i5 = this.f12878h;
        int actionMasked = sourceEvent.getActionMasked();
        if (actionMasked == 5 || actionMasked == 6) {
            this.f12936l0 = (this.f12938n0 - this.f12934j0) + this.f12936l0;
            this.f12937m0 = (this.f12939o0 - this.f12935k0) + this.f12937m0;
            this.f12938n0 = e4.f.w(sourceEvent, this.f12941q0);
            float x5 = e4.f.x(sourceEvent, this.f12941q0);
            this.f12939o0 = x5;
            this.f12934j0 = this.f12938n0;
            this.f12935k0 = x5;
        } else {
            this.f12938n0 = e4.f.w(sourceEvent, this.f12941q0);
            this.f12939o0 = e4.f.x(sourceEvent, this.f12941q0);
        }
        if (i5 != 0 || sourceEvent.getPointerCount() < this.h0) {
            VelocityTracker velocityTracker = this.f12940p0;
            if (velocityTracker != null) {
                wi.d.h(velocityTracker, sourceEvent);
                VelocityTracker velocityTracker2 = this.f12940p0;
                Intrinsics.checkNotNull(velocityTracker2);
                velocityTracker2.computeCurrentVelocity(1000);
                VelocityTracker velocityTracker3 = this.f12940p0;
                Intrinsics.checkNotNull(velocityTracker3);
                this.S = velocityTracker3.getXVelocity();
                VelocityTracker velocityTracker4 = this.f12940p0;
                Intrinsics.checkNotNull(velocityTracker4);
                this.T = velocityTracker4.getYVelocity();
            }
        } else {
            Intrinsics.checkNotNullParameter(event, "event");
            Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
            E();
            this.f12936l0 = 0.0f;
            this.f12937m0 = 0.0f;
            this.S = 0.0f;
            this.T = 0.0f;
            this.f12940p0 = VelocityTracker.obtain();
            wi.d.h(this.f12940p0, sourceEvent);
            d();
            if (this.f12942r0 > 0) {
                if (this.f12944t0 == null) {
                    this.f12944t0 = new Handler(Looper.getMainLooper());
                }
                Handler handler = this.f12944t0;
                Intrinsics.checkNotNull(handler);
                handler.postDelayed(this.f12943s0, this.f12942r0);
            }
        }
        if (actionMasked == 1 || actionMasked == 12) {
            if (i5 == 4) {
                k();
                return;
            } else {
                m();
                return;
            }
        }
        if (actionMasked == 5 && sourceEvent.getPointerCount() > this.f12933i0) {
            if (i5 == 4) {
                e();
                return;
            } else {
                m();
                return;
            }
        }
        if (actionMasked == 6 && i5 == 4 && sourceEvent.getPointerCount() < this.h0) {
            m();
            return;
        }
        if (i5 == 2) {
            float f2 = (this.f12938n0 - this.f12934j0) + this.f12936l0;
            float f10 = (this.f12939o0 - this.f12935k0) + this.f12937m0;
            if (this.f12942r0 > 0) {
                float f11 = (f10 * f10) + (f2 * f2);
                float f12 = this.U;
                if (f11 > f12 * f12) {
                    Handler handler2 = this.f12944t0;
                    if (handler2 != null) {
                        handler2.removeCallbacksAndMessages(null);
                    }
                    m();
                }
            }
            float f13 = this.Y;
            if (f13 == Float.MIN_VALUE || f2 >= f13) {
                float f14 = this.Z;
                if (f14 == Float.MAX_VALUE || f2 <= f14) {
                    float f15 = this.f12928c0;
                    if (f15 == Float.MIN_VALUE || f10 >= f15) {
                        float f16 = this.f12929d0;
                        if (f16 == Float.MAX_VALUE || f10 <= f16) {
                            float f17 = this.W;
                            if (f17 == Float.MAX_VALUE || f2 >= f17) {
                                float f18 = this.X;
                                if (f18 == Float.MIN_VALUE || f2 <= f18) {
                                    float f19 = this.a0;
                                    if (f19 == Float.MAX_VALUE || f10 >= f19) {
                                        float f20 = this.f12927b0;
                                        if (f20 == Float.MIN_VALUE || f10 <= f20) {
                                            float f21 = (f10 * f10) + (f2 * f2);
                                            float f22 = this.V;
                                            if (f22 == Float.MAX_VALUE || f21 < f22 * f22) {
                                                float f23 = this.S;
                                                float f24 = this.f12930e0;
                                                if (f24 == Float.MAX_VALUE || ((f24 >= 0.0f || f23 > f24) && (0.0f > f24 || f24 > f23))) {
                                                    float f25 = this.T;
                                                    float f26 = this.f12931f0;
                                                    if (f26 == Float.MAX_VALUE || ((f26 >= 0.0f || f23 > f26) && (0.0f > f26 || f26 > f23))) {
                                                        float f27 = (f25 * f25) + (f23 * f23);
                                                        float f28 = this.f12932g0;
                                                        if (f28 == Float.MAX_VALUE || f27 < f28 * f28) {
                                                            return;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            a(false);
                            return;
                        }
                    }
                }
            }
            m();
        }
    }
}
