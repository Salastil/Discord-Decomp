package jm;

import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import io.sentry.android.core.h1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 extends f {
    public float Z;
    public float a0;

    /* renamed from: b0, reason: collision with root package name */
    public float f12851b0;

    /* renamed from: c0, reason: collision with root package name */
    public float f12852c0;

    /* renamed from: d0, reason: collision with root package name */
    public float f12853d0;

    /* renamed from: e0, reason: collision with root package name */
    public float f12854e0;

    /* renamed from: f0, reason: collision with root package name */
    public Handler f12855f0;

    /* renamed from: g0, reason: collision with root package name */
    public int f12856g0;
    public float R = Float.MIN_VALUE;
    public float S = Float.MIN_VALUE;
    public float T = Float.MIN_VALUE;
    public long U = 500;
    public long V = 200;
    public int W = 1;
    public int X = 1;
    public int Y = 1;
    public final h1 h0 = new h1(15, this);

    public a0() {
        this.E = true;
    }

    @Override // jm.f
    public final void B() {
        this.f12856g0 = 0;
        this.Y = 0;
        Handler handler = this.f12855f0;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }

    @Override // jm.f
    public final void D() {
        super.D();
        this.R = Float.MIN_VALUE;
        this.S = Float.MIN_VALUE;
        this.T = Float.MIN_VALUE;
        this.U = 500L;
        this.V = 200L;
        this.W = 1;
        this.X = 1;
        this.E = true;
    }

    public final void M() {
        Handler handler = this.f12855f0;
        if (handler == null) {
            this.f12855f0 = new Handler(Looper.getMainLooper());
        } else {
            Intrinsics.checkNotNull(handler);
            handler.removeCallbacksAndMessages(null);
        }
        Handler handler2 = this.f12855f0;
        Intrinsics.checkNotNull(handler2);
        handler2.postDelayed(this.h0, this.U);
    }

    @Override // jm.f
    public final void a(boolean z5) {
        super.a(z5);
        k();
    }

    @Override // jm.f
    public final void w() {
        Handler handler = this.f12855f0;
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
        int i5 = this.f12878h;
        int actionMasked = sourceEvent.getActionMasked();
        if (i5 == 0) {
            Intrinsics.checkNotNullParameter(event, "event");
            Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
            this.f12851b0 = 0.0f;
            this.f12852c0 = 0.0f;
            this.Z = e4.f.w(sourceEvent, true);
            this.a0 = e4.f.x(sourceEvent, true);
        }
        if (actionMasked == 5 || actionMasked == 6) {
            this.f12851b0 = (this.f12853d0 - this.Z) + this.f12851b0;
            this.f12852c0 = (this.f12854e0 - this.a0) + this.f12852c0;
            this.f12853d0 = e4.f.w(sourceEvent, true);
            float x5 = e4.f.x(sourceEvent, true);
            this.f12854e0 = x5;
            this.Z = this.f12853d0;
            this.a0 = x5;
        } else {
            this.f12853d0 = e4.f.w(sourceEvent, true);
            this.f12854e0 = e4.f.x(sourceEvent, true);
        }
        if (this.Y < sourceEvent.getPointerCount()) {
            this.Y = sourceEvent.getPointerCount();
        }
        float f2 = (this.f12853d0 - this.Z) + this.f12851b0;
        if (this.R == Float.MIN_VALUE || Math.abs(f2) <= this.R) {
            float f10 = (this.f12854e0 - this.a0) + this.f12852c0;
            if (this.S == Float.MIN_VALUE || Math.abs(f10) <= this.S) {
                float f11 = (f2 * f2) + (f10 * f10);
                float f12 = this.T;
                if (f12 == Float.MIN_VALUE || f11 <= f12 * f12) {
                    if (i5 == 0) {
                        if (actionMasked == 0 || actionMasked == 11) {
                            d();
                        }
                        M();
                        return;
                    }
                    if (i5 == 2) {
                        if (actionMasked != 0) {
                            if (actionMasked != 1) {
                                if (actionMasked != 11) {
                                    if (actionMasked != 12) {
                                        return;
                                    }
                                }
                            }
                            Handler handler = this.f12855f0;
                            if (handler == null) {
                                this.f12855f0 = new Handler(Looper.getMainLooper());
                            } else {
                                Intrinsics.checkNotNull(handler);
                                handler.removeCallbacksAndMessages(null);
                            }
                            int i6 = this.f12856g0 + 1;
                            this.f12856g0 = i6;
                            if (i6 == this.W && this.Y >= this.X) {
                                a(false);
                                return;
                            }
                            Handler handler2 = this.f12855f0;
                            Intrinsics.checkNotNull(handler2);
                            handler2.postDelayed(this.h0, this.V);
                            return;
                        }
                        M();
                        return;
                    }
                    return;
                }
            }
        }
        m();
    }
}
