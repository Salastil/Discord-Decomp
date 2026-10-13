package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class f extends ConstraintWidget {

    /* renamed from: p0, reason: collision with root package name */
    public float f17110p0 = -1.0f;

    /* renamed from: q0, reason: collision with root package name */
    public int f17111q0 = -1;

    /* renamed from: r0, reason: collision with root package name */
    public int f17112r0 = -1;

    /* renamed from: s0, reason: collision with root package name */
    public c f17113s0 = this.I;

    /* renamed from: t0, reason: collision with root package name */
    public int f17114t0 = 0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f17115u0;

    public f() {
        this.Q.clear();
        this.Q.add(this.f17113s0);
        int length = this.P.length;
        for (int i5 = 0; i5 < length; i5++) {
            this.P[i5] = this.f17113s0;
        }
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void L(p0.c cVar, boolean z5) {
        if (this.S == null) {
            return;
        }
        c cVar2 = this.f17113s0;
        cVar.getClass();
        int n6 = p0.c.n(cVar2);
        if (this.f17114t0 == 1) {
            this.X = n6;
            this.Y = 0;
            G(this.S.k());
            J(0);
            return;
        }
        this.X = 0;
        this.Y = n6;
        J(this.S.n());
        G(0);
    }

    public final void M(int i5) {
        this.f17113s0.l(i5);
        this.f17115u0 = true;
    }

    public final void N(int i5) {
        if (this.f17114t0 == i5) {
            return;
        }
        this.f17114t0 = i5;
        ArrayList arrayList = this.Q;
        arrayList.clear();
        if (this.f17114t0 == 1) {
            this.f17113s0 = this.H;
        } else {
            this.f17113s0 = this.I;
        }
        arrayList.add(this.f17113s0);
        c[] cVarArr = this.P;
        int length = cVarArr.length;
        for (int i6 = 0; i6 < length; i6++) {
            cVarArr[i6] = this.f17113s0;
        }
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void b(p0.c cVar, boolean z5) {
        ConstraintWidgetContainer constraintWidgetContainer = (ConstraintWidgetContainer) this.S;
        if (constraintWidgetContainer == null) {
            return;
        }
        Object i5 = constraintWidgetContainer.i(2);
        Object i6 = constraintWidgetContainer.i(4);
        ConstraintWidget constraintWidget = this.S;
        boolean z6 = constraintWidget != null && constraintWidget.f1245o0[0] == 2;
        if (this.f17114t0 == 0) {
            i5 = constraintWidgetContainer.i(3);
            i6 = constraintWidgetContainer.i(5);
            ConstraintWidget constraintWidget2 = this.S;
            z6 = constraintWidget2 != null && constraintWidget2.f1245o0[1] == 2;
        }
        if (this.f17115u0) {
            c cVar2 = this.f17113s0;
            if (cVar2.f17078c) {
                p0.e k = cVar.k(cVar2);
                cVar.d(k, this.f17113s0.d());
                if (this.f17111q0 != -1) {
                    if (z6) {
                        cVar.f(cVar.k(i6), k, 0, 5);
                    }
                } else if (this.f17112r0 != -1 && z6) {
                    p0.e k5 = cVar.k(i6);
                    cVar.f(k, cVar.k(i5), 0, 5);
                    cVar.f(k5, k, 0, 5);
                }
                this.f17115u0 = false;
                return;
            }
        }
        if (this.f17111q0 != -1) {
            p0.e k7 = cVar.k(this.f17113s0);
            cVar.e(k7, cVar.k(i5), this.f17111q0, 8);
            if (z6) {
                cVar.f(cVar.k(i6), k7, 0, 5);
                return;
            }
            return;
        }
        if (this.f17112r0 != -1) {
            p0.e k10 = cVar.k(this.f17113s0);
            p0.e k11 = cVar.k(i6);
            cVar.e(k10, k11, -this.f17112r0, 8);
            if (z6) {
                cVar.f(k10, cVar.k(i5), 0, 5);
                cVar.f(k11, k10, 0, 5);
                return;
            }
            return;
        }
        if (this.f17110p0 != -1.0f) {
            p0.e k12 = cVar.k(this.f17113s0);
            p0.e k13 = cVar.k(i6);
            float f2 = this.f17110p0;
            p0.b l6 = cVar.l();
            l6.f16270d.g(k12, -1.0f);
            l6.f16270d.g(k13, f2);
            cVar.c(l6);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean c() {
        return true;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final c i(int i5) {
        int b10 = f0.e.b(i5);
        if (b10 != 1) {
            if (b10 != 2) {
                if (b10 != 3) {
                    if (b10 != 4) {
                        return null;
                    }
                }
            }
            if (this.f17114t0 == 0) {
                return this.f17113s0;
            }
            return null;
        }
        if (this.f17114t0 == 1) {
            return this.f17113s0;
        }
        return null;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean x() {
        return this.f17115u0;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean y() {
        return this.f17115u0;
    }
}
