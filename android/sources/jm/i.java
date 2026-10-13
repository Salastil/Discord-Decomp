package jm;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.view.MotionEvent;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public final class i extends f {
    public long R;
    public final float S;
    public float T;
    public int U;
    public float V;
    public float W;
    public long X;
    public long Y;
    public Handler Z;
    public int a0;

    public i(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.R = 500L;
        this.E = true;
        float f2 = context.getResources().getDisplayMetrics().density * 10.0f;
        this.S = f2;
        this.T = f2;
        this.U = 1;
    }

    public static Pair M(MotionEvent motionEvent, boolean z5) {
        if (z5) {
            int pointerCount = motionEvent.getPointerCount();
            float f2 = 0.0f;
            float f10 = 0.0f;
            for (int i5 = 0; i5 < pointerCount; i5++) {
                if (i5 != motionEvent.getActionIndex()) {
                    float x5 = motionEvent.getX(i5) + f2;
                    f10 = motionEvent.getY(i5) + f10;
                    f2 = x5;
                }
            }
            return new Pair(Float.valueOf(f2 / (motionEvent.getPointerCount() - 1)), Float.valueOf(f10 / (motionEvent.getPointerCount() - 1)));
        }
        IntRange i6 = yo.j.i(0, motionEvent.getPointerCount());
        ArrayList arrayList = new ArrayList(d0.l(i6, 10));
        Iterator it = i6.iterator();
        while (((yo.b) it).f20994i) {
            arrayList.add(Float.valueOf(motionEvent.getX(((r0) it).nextInt())));
        }
        float D = (float) CollectionsKt.D(arrayList);
        IntRange i10 = yo.j.i(0, motionEvent.getPointerCount());
        ArrayList arrayList2 = new ArrayList(d0.l(i10, 10));
        Iterator it2 = i10.iterator();
        while (((yo.b) it2).f20994i) {
            arrayList2.add(Float.valueOf(motionEvent.getY(((r0) it2).nextInt())));
        }
        return new Pair(Float.valueOf(D), Float.valueOf((float) CollectionsKt.D(arrayList2)));
    }

    @Override // jm.f
    public final void B() {
        this.a0 = 0;
    }

    @Override // jm.f
    public final void C() {
        Handler handler = this.Z;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
            this.Z = null;
        }
    }

    @Override // jm.f
    public final void D() {
        super.D();
        this.R = 500L;
        this.T = this.S;
        this.E = true;
    }

    @Override // jm.f
    public final void g(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        this.Y = SystemClock.uptimeMillis();
        super.g(event);
    }

    @Override // jm.f
    public final void h(int i5, int i6) {
        this.Y = SystemClock.uptimeMillis();
        super.h(i5, i6);
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (K(sourceEvent)) {
            return;
        }
        if (this.f12878h == 0) {
            Intrinsics.checkNotNullParameter(event, "event");
            Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
            long uptimeMillis = SystemClock.uptimeMillis();
            this.Y = uptimeMillis;
            this.X = uptimeMillis;
            d();
            Pair M = M(sourceEvent, false);
            float floatValue = ((Number) M.f13474d).floatValue();
            float floatValue2 = ((Number) M.f13475e).floatValue();
            this.V = floatValue;
            this.W = floatValue2;
            this.a0++;
        }
        if (sourceEvent.getActionMasked() == 5) {
            this.a0++;
            Pair M2 = M(sourceEvent, false);
            float floatValue3 = ((Number) M2.f13474d).floatValue();
            float floatValue4 = ((Number) M2.f13475e).floatValue();
            this.V = floatValue3;
            this.W = floatValue4;
            if (this.a0 > this.U) {
                m();
                this.a0 = 0;
            }
        }
        if (this.f12878h == 2 && this.a0 == this.U && (sourceEvent.getActionMasked() == 0 || sourceEvent.getActionMasked() == 5 || sourceEvent.getActionMasked() == 11)) {
            Handler handler = new Handler(Looper.getMainLooper());
            this.Z = handler;
            long j = this.R;
            if (j > 0) {
                Intrinsics.checkNotNull(handler);
                handler.postDelayed(new h1(13, this), this.R);
            } else if (j == 0) {
                a(false);
            }
        }
        if (sourceEvent.getActionMasked() == 1 || sourceEvent.getActionMasked() == 12) {
            this.a0--;
            Handler handler2 = this.Z;
            if (handler2 != null) {
                handler2.removeCallbacksAndMessages(null);
                this.Z = null;
            }
            if (this.f12878h == 4) {
                k();
                return;
            } else {
                m();
                return;
            }
        }
        if (sourceEvent.getActionMasked() == 6) {
            int i5 = this.a0 - 1;
            this.a0 = i5;
            if (i5 < this.U && this.f12878h != 4) {
                m();
                this.a0 = 0;
                return;
            }
            Pair M3 = M(sourceEvent, true);
            float floatValue5 = ((Number) M3.f13474d).floatValue();
            float floatValue6 = ((Number) M3.f13475e).floatValue();
            this.V = floatValue5;
            this.W = floatValue6;
            return;
        }
        Pair M4 = M(sourceEvent, false);
        float floatValue7 = ((Number) M4.f13474d).floatValue();
        float floatValue8 = ((Number) M4.f13475e).floatValue();
        float f2 = floatValue7 - this.V;
        float f10 = floatValue8 - this.W;
        float f11 = (f10 * f10) + (f2 * f2);
        float f12 = this.T;
        if (f11 > f12 * f12) {
            if (this.f12878h == 4) {
                e();
            } else {
                m();
            }
        }
    }
}
