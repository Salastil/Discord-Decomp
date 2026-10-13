package jm;

import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends f {
    public static final double Z = Math.cos(Math.toRadians(30.0d / 2.0d));
    public static final double a0 = Math.cos(Math.toRadians(60.0d / 2.0d));
    public Handler V;
    public int W;
    public VelocityTracker Y;
    public int R = 1;
    public int S = 1;
    public final long T = 800;
    public final long U = 2000;
    public final h1 X = new h1(11, this);

    public static final boolean N(b bVar, b0 b0Var, int i5, double d6) {
        b0 vector;
        if ((bVar.S & i5) != i5) {
            return false;
        }
        b0 b0Var2 = b0.f12857d;
        switch (i5) {
            case 1:
                vector = b0.f12858e;
                break;
            case 2:
                vector = b0.f12857d;
                break;
            case 3:
            case 7:
            default:
                vector = b0.f12863l;
                break;
            case 4:
                vector = b0.f12859f;
                break;
            case 5:
                vector = b0.f12861h;
                break;
            case 6:
                vector = b0.j;
                break;
            case 8:
                vector = b0.f12860g;
                break;
            case 9:
                vector = b0.f12862i;
                break;
            case 10:
                vector = b0.k;
                break;
        }
        Intrinsics.checkNotNullParameter(vector, "vector");
        return (b0Var.f12864b * vector.f12864b) + (b0Var.a * vector.a) > d6;
    }

    @Override // jm.f
    public final void B() {
        VelocityTracker velocityTracker = this.Y;
        if (velocityTracker != null) {
            velocityTracker.recycle();
        }
        this.Y = null;
        Handler handler = this.V;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }

    @Override // jm.f
    public final void D() {
        super.D();
        this.R = 1;
        this.S = 1;
    }

    public final boolean M(MotionEvent motionEvent) {
        boolean z5;
        boolean z6;
        VelocityTracker velocityTracker = this.Y;
        float rawX = motionEvent.getRawX() - motionEvent.getX();
        float rawY = motionEvent.getRawY() - motionEvent.getY();
        motionEvent.offsetLocation(rawX, rawY);
        Intrinsics.checkNotNull(velocityTracker);
        velocityTracker.addMovement(motionEvent);
        motionEvent.offsetLocation(-rawX, -rawY);
        b0 b0Var = b0.f12857d;
        VelocityTracker tracker = this.Y;
        Intrinsics.checkNotNull(tracker);
        Intrinsics.checkNotNullParameter(tracker, "tracker");
        tracker.computeCurrentVelocity(1000);
        b0 b0Var2 = new b0(tracker.getXVelocity(), tracker.getYVelocity());
        Integer[] numArr = {2, 1, 4, 8};
        ArrayList arrayList = new ArrayList(4);
        for (int i5 = 0; i5 < 4; i5++) {
            arrayList.add(Boolean.valueOf(N(this, b0Var2, numArr[i5].intValue(), Z)));
        }
        Integer[] numArr2 = {5, 9, 6, 10};
        ArrayList arrayList2 = new ArrayList(4);
        for (int i6 = 0; i6 < 4; i6++) {
            arrayList2.add(Boolean.valueOf(N(this, b0Var2, numArr2[i6].intValue(), a0)));
        }
        if (!arrayList.isEmpty()) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                if (((Boolean) it.next()).booleanValue()) {
                    z5 = true;
                    break;
                }
            }
        }
        z5 = false;
        if (!arrayList2.isEmpty()) {
            Iterator it2 = arrayList2.iterator();
            while (it2.hasNext()) {
                if (((Boolean) it2.next()).booleanValue()) {
                    z6 = true;
                    break;
                }
            }
        }
        z6 = false;
        boolean z7 = z5 | z6;
        boolean z8 = b0Var2.f12865c > ((double) this.U);
        if (this.W != this.R || !z7 || !z8) {
            return false;
        }
        Handler handler = this.V;
        Intrinsics.checkNotNull(handler);
        handler.removeCallbacksAndMessages(null);
        a(false);
        return true;
    }

    @Override // jm.f
    public final void a(boolean z5) {
        super.a(z5);
        k();
    }

    @Override // jm.f
    public final void w() {
        Handler handler = this.V;
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
        if (i5 == 0) {
            this.Y = VelocityTracker.obtain();
            d();
            this.W = 1;
            Handler handler = this.V;
            if (handler == null) {
                this.V = new Handler(Looper.getMainLooper());
            } else {
                Intrinsics.checkNotNull(handler);
                handler.removeCallbacksAndMessages(null);
            }
            Handler handler2 = this.V;
            Intrinsics.checkNotNull(handler2);
            handler2.postDelayed(this.X, this.T);
        }
        if (i5 == 2) {
            M(sourceEvent);
            if (sourceEvent.getPointerCount() > this.W) {
                this.W = sourceEvent.getPointerCount();
            }
            if (sourceEvent.getActionMasked() != 1 || M(sourceEvent)) {
                return;
            }
            m();
        }
    }
}
