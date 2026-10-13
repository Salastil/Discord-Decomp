package jm;

import android.content.Context;
import android.graphics.PointF;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t extends f {
    public double S;
    public double T;
    public y W;
    public float X;
    public float Y;
    public final boolean R = true;
    public float U = Float.NaN;
    public float V = Float.NaN;
    public final ve.i Z = new ve.i(this);

    @Override // jm.f
    public final void B() {
        this.W = null;
        this.U = Float.NaN;
        this.V = Float.NaN;
        E();
    }

    @Override // jm.f
    public final void E() {
        this.T = 0.0d;
        this.S = 1.0d;
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

    /* JADX WARN: Code restructure failed: missing block: B:137:0x00bf, code lost:
    
        if (r13 != false) goto L148;
     */
    @Override // jm.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        float f2;
        float f10;
        float f11;
        float f12;
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (this.f12878h == 0) {
            int actionMasked = sourceEvent.getActionMasked();
            if (actionMasked == 0) {
                Intrinsics.checkNotNullParameter(event, "event");
                Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
                View view = this.f12876f;
                Intrinsics.checkNotNull(view);
                Context context = view.getContext();
                E();
                this.W = new y(context, this.Z);
                this.Y = ViewConfiguration.get(context).getScaledTouchSlop();
                this.U = event.getX();
                this.V = event.getY();
            } else if (actionMasked == 5) {
                d();
            }
        }
        y detector = this.W;
        if (detector != null) {
            int i5 = detector.f12969l;
            ve.i iVar = detector.a;
            detector.f12968i = sourceEvent.getEventTime();
            int actionMasked2 = sourceEvent.getActionMasked();
            if (detector.f12963d) {
                detector.f12973p.onTouchEvent(sourceEvent);
            }
            int pointerCount = sourceEvent.getPointerCount();
            boolean z5 = (sourceEvent.getButtonState() & 32) != 0;
            boolean z6 = detector.f12972o == 2 && !z5;
            boolean z7 = actionMasked2 == 1 || actionMasked2 == 3 || z6;
            if (actionMasked2 == 0 || z7) {
                if (detector.k) {
                    iVar.getClass();
                    Intrinsics.checkNotNullParameter(detector, "detector");
                    detector.k = false;
                    detector.f12967h = 0.0f;
                    detector.f12972o = 0;
                } else if (detector.a() && z7) {
                    detector.k = false;
                    detector.f12967h = 0.0f;
                    detector.f12972o = 0;
                }
            }
            if (!detector.k && detector.f12964e && !detector.a() && !z7 && z5) {
                detector.f12970m = sourceEvent.getX();
                detector.f12971n = sourceEvent.getY();
                detector.f12972o = 2;
                detector.f12967h = 0.0f;
            }
            boolean z8 = actionMasked2 == 0 || actionMasked2 == 6 || actionMasked2 == 5 || z6;
            boolean z10 = actionMasked2 == 6;
            int actionIndex = z10 ? sourceEvent.getActionIndex() : -1;
            int i6 = z10 ? pointerCount - 1 : pointerCount;
            if (detector.a()) {
                f11 = detector.f12970m;
                f10 = detector.f12971n;
                if (sourceEvent.getY() < f10) {
                    f2 = 0.0f;
                    detector.f12974q = true;
                } else {
                    f2 = 0.0f;
                    detector.f12974q = false;
                }
            } else {
                f2 = 0.0f;
                float f13 = 0.0f;
                float f14 = 0.0f;
                for (int i10 = 0; i10 < pointerCount; i10++) {
                    if (actionIndex != i10) {
                        f13 = sourceEvent.getX(i10) + f13;
                        f14 = sourceEvent.getY(i10) + f14;
                    }
                }
                float f15 = i6;
                float f16 = f13 / f15;
                f10 = f14 / f15;
                f11 = f16;
            }
            float f17 = f2;
            float f18 = f17;
            for (int i11 = 0; i11 < pointerCount; i11++) {
                if (actionIndex != i11) {
                    f17 = Math.abs(sourceEvent.getX(i11) - f11) + f17;
                    f18 = Math.abs(sourceEvent.getY(i11) - f10) + f18;
                }
            }
            float f19 = i6;
            float f20 = (f17 / f19) * 2.0f;
            float f21 = 2.0f * (f18 / f19);
            if (detector.a()) {
                f12 = f10;
            } else {
                f12 = f10;
                f21 = (float) Math.hypot(f20, f21);
            }
            boolean z11 = detector.k;
            detector.f12961b = f11;
            detector.f12962c = f12;
            if (!detector.a() && detector.k && (f21 < 0 || z8)) {
                iVar.getClass();
                Intrinsics.checkNotNullParameter(detector, "detector");
                detector.k = false;
                detector.f12967h = f21;
            }
            if (z8) {
                detector.f12965f = f21;
                detector.f12966g = f21;
                detector.f12967h = f21;
            }
            int i12 = detector.a() ? i5 : 0;
            if (!detector.k && f21 >= i12 && (z11 || Math.abs(f21 - detector.f12967h) > i5)) {
                detector.f12965f = f21;
                detector.f12966g = f21;
                detector.j = detector.f12968i;
                iVar.getClass();
                Intrinsics.checkNotNullParameter(detector, "detector");
                ((t) iVar.f19405d).X = detector.f12965f;
                detector.k = true;
            }
            if (actionMasked2 == 2) {
                detector.f12965f = f21;
                if (detector.k) {
                    iVar.getClass();
                    Intrinsics.checkNotNullParameter(detector, "detector");
                    t tVar = (t) iVar.f19405d;
                    double d6 = tVar.S;
                    float f22 = 1.0f;
                    if (detector.a()) {
                        boolean z12 = detector.f12974q;
                        boolean z13 = (z12 && detector.f12965f < detector.f12966g) || (!z12 && detector.f12965f > detector.f12966g);
                        float abs = Math.abs(1.0f - (detector.f12965f / detector.f12966g)) * 0.5f;
                        if (detector.f12966g > i5) {
                            f22 = z13 ? 1.0f + abs : 1.0f - abs;
                        }
                    } else {
                        float f23 = detector.f12966g;
                        if (f23 > f2) {
                            f22 = detector.f12965f / f23;
                        }
                    }
                    double d7 = f22 * d6;
                    tVar.S = d7;
                    double d8 = (detector.f12968i - detector.j) / 1000.0d;
                    if (d8 > 0.0d) {
                        tVar.T = (d7 - d6) / d8;
                    }
                    if (Math.abs(tVar.X - detector.f12965f) >= tVar.Y && tVar.f12878h == 2) {
                        tVar.a(false);
                    }
                }
                detector.f12966g = detector.f12965f;
                detector.j = detector.f12968i;
            }
        }
        y yVar = this.W;
        if (yVar != null) {
            PointF point = new PointF(yVar.f12961b, yVar.f12962c);
            Intrinsics.checkNotNullParameter(point, "point");
            g gVar = this.F;
            if (gVar != null) {
                gVar.l(o(), point);
            } else {
                point.x = Float.NaN;
                point.y = Float.NaN;
            }
            this.U = point.x;
            this.V = point.y;
        }
        if (sourceEvent.getActionMasked() == 1) {
            int i13 = this.f12878h;
            if (i13 == 0) {
                e();
            } else if (i13 != 4) {
                m();
            } else {
                k();
            }
        }
    }
}
