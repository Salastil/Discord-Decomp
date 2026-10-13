package jm;

import android.graphics.PointF;
import android.view.MotionEvent;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w extends f {
    public v S;
    public double T;
    public double U;
    public final boolean R = true;
    public float V = Float.NaN;
    public float W = Float.NaN;
    public final gj.c X = new gj.c(20, this);

    @Override // jm.f
    public final void B() {
        this.S = null;
        this.V = Float.NaN;
        this.W = Float.NaN;
        E();
    }

    @Override // jm.f
    public final void E() {
        this.U = 0.0d;
        this.T = 0.0d;
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
    public final void y(MotionEvent event, MotionEvent event2) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(event2, "sourceEvent");
        if (this.f12878h == 0) {
            int actionMasked = event2.getActionMasked();
            if (actionMasked == 0) {
                Intrinsics.checkNotNullParameter(event, "event");
                Intrinsics.checkNotNullParameter(event2, "sourceEvent");
                E();
                this.S = new v(this.X);
                this.V = event.getX();
                this.W = event.getY();
            } else if (actionMasked == 5) {
                d();
            }
        }
        v detector = this.S;
        if (detector != null) {
            gj.c cVar = detector.a;
            int[] iArr = detector.f12958i;
            Intrinsics.checkNotNullParameter(event2, "event");
            int actionMasked2 = event2.getActionMasked();
            if (actionMasked2 == 0) {
                detector.f12957h = false;
                iArr[0] = event2.getPointerId(event2.getActionIndex());
                iArr[1] = -1;
            } else if (actionMasked2 != 1) {
                if (actionMasked2 != 2) {
                    if (actionMasked2 == 5) {
                        if (!detector.f12957h || detector.j) {
                            iArr[1] = event2.getPointerId(event2.getActionIndex());
                            detector.a(event2);
                        }
                        if (!detector.f12957h) {
                            detector.f12957h = true;
                            detector.f12952c = event2.getEventTime();
                            detector.f12953d = Double.NaN;
                            if (cVar != null) {
                                Intrinsics.checkNotNullParameter(detector, "detector");
                            }
                        }
                    } else if (actionMasked2 == 6 && detector.f12957h) {
                        int pointerId = event2.getPointerId(event2.getActionIndex());
                        if (pointerId == iArr[0]) {
                            iArr[0] = iArr[1];
                            iArr[1] = -1;
                            if (!detector.j) {
                                detector.j = true;
                            }
                        } else if (pointerId == iArr[1]) {
                            iArr[1] = -1;
                            if (!detector.j) {
                                detector.j = true;
                            }
                        }
                    }
                } else if (detector.f12957h) {
                    detector.a(event2);
                    if (!detector.j && cVar != null) {
                        Intrinsics.checkNotNullParameter(detector, "detector");
                        w wVar = (w) cVar.f9329e;
                        double d6 = wVar.T;
                        double d7 = detector.f12954e + d6;
                        wVar.T = d7;
                        long j = detector.f12951b - detector.f12952c;
                        if (j > 0) {
                            wVar.U = (d7 - d6) / j;
                        }
                        if (Math.abs(d7) >= 0.08726646259971647d && wVar.f12878h == 2) {
                            wVar.a(false);
                        }
                    }
                }
            } else if (detector.f12957h) {
                detector.j = false;
                detector.f12957h = false;
                if (cVar != null) {
                    Intrinsics.checkNotNullParameter(detector, "detector");
                    w wVar2 = (w) cVar.f9329e;
                    if (wVar2.f12878h == 4) {
                        wVar2.k();
                    } else {
                        wVar2.m();
                    }
                }
            }
        }
        v vVar = this.S;
        if (vVar != null) {
            PointF point = new PointF(vVar.f12955f, vVar.f12956g);
            Intrinsics.checkNotNullParameter(point, "point");
            g gVar = this.F;
            if (gVar != null) {
                gVar.l(o(), point);
            } else {
                point.x = Float.NaN;
                point.y = Float.NaN;
            }
            this.V = point.x;
            this.W = point.y;
        }
        if (event2.getActionMasked() == 1) {
            int i5 = this.f12878h;
            if (i5 == 0) {
                e();
            } else {
                if (i5 != 2) {
                    return;
                }
                m();
            }
        }
    }
}
