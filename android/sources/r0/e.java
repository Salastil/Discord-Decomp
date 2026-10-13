package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.widget.ConstraintLayout;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class e extends g {
    public s0.b A0;
    public s0.c B0;
    public int C0;
    public int D0;
    public int E0;
    public int F0;
    public int G0;
    public int H0;
    public float I0;
    public float J0;
    public float K0;
    public float L0;
    public float M0;
    public float N0;
    public int O0;
    public int P0;
    public int Q0;
    public int R0;
    public int S0;
    public int T0;
    public int U0;
    public ArrayList V0;
    public ConstraintWidget[] W0;
    public ConstraintWidget[] X0;
    public int[] Y0;
    public ConstraintWidget[] Z0;

    /* renamed from: a1, reason: collision with root package name */
    public int f17100a1;

    /* renamed from: r0, reason: collision with root package name */
    public int f17101r0;

    /* renamed from: s0, reason: collision with root package name */
    public int f17102s0;

    /* renamed from: t0, reason: collision with root package name */
    public int f17103t0;

    /* renamed from: u0, reason: collision with root package name */
    public int f17104u0;

    /* renamed from: v0, reason: collision with root package name */
    public int f17105v0;

    /* renamed from: w0, reason: collision with root package name */
    public int f17106w0;

    /* renamed from: x0, reason: collision with root package name */
    public boolean f17107x0;

    /* renamed from: y0, reason: collision with root package name */
    public int f17108y0;

    /* renamed from: z0, reason: collision with root package name */
    public int f17109z0;

    @Override // r0.g
    public final void N() {
        for (int i5 = 0; i5 < this.f17117q0; i5++) {
            ConstraintWidget constraintWidget = this.f17116p0[i5];
            if (constraintWidget != null) {
                constraintWidget.E = true;
            }
        }
    }

    public final int O(ConstraintWidget constraintWidget, int i5) {
        ConstraintWidget constraintWidget2;
        if (constraintWidget != null) {
            int[] iArr = constraintWidget.f1245o0;
            if (iArr[1] == 3) {
                int i6 = constraintWidget.f1248r;
                if (i6 != 0) {
                    if (i6 == 2) {
                        int i10 = (int) (constraintWidget.f1255y * i5);
                        if (i10 != constraintWidget.k()) {
                            constraintWidget.f1231g = true;
                            Q(iArr[0], constraintWidget.n(), 1, i10, constraintWidget);
                        }
                        return i10;
                    }
                    constraintWidget2 = constraintWidget;
                    if (i6 == 1) {
                        return constraintWidget2.k();
                    }
                    if (i6 == 3) {
                        return (int) ((constraintWidget2.n() * constraintWidget2.V) + 0.5f);
                    }
                }
            } else {
                constraintWidget2 = constraintWidget;
            }
            return constraintWidget2.k();
        }
        return 0;
    }

    public final int P(ConstraintWidget constraintWidget, int i5) {
        ConstraintWidget constraintWidget2;
        if (constraintWidget != null) {
            int[] iArr = constraintWidget.f1245o0;
            if (iArr[0] == 3) {
                int i6 = constraintWidget.f1247q;
                if (i6 != 0) {
                    if (i6 == 2) {
                        int i10 = (int) (constraintWidget.f1252v * i5);
                        if (i10 != constraintWidget.n()) {
                            constraintWidget.f1231g = true;
                            Q(1, i10, iArr[1], constraintWidget.k(), constraintWidget);
                        }
                        return i10;
                    }
                    constraintWidget2 = constraintWidget;
                    if (i6 == 1) {
                        return constraintWidget2.n();
                    }
                    if (i6 == 3) {
                        return (int) ((constraintWidget2.k() * constraintWidget2.V) + 0.5f);
                    }
                }
            } else {
                constraintWidget2 = constraintWidget;
            }
            return constraintWidget2.n();
        }
        return 0;
    }

    public final void Q(int i5, int i6, int i10, int i11, ConstraintWidget constraintWidget) {
        s0.c cVar;
        ConstraintWidget constraintWidget2;
        s0.b bVar = this.A0;
        while (true) {
            cVar = this.B0;
            if (cVar != null || (constraintWidget2 = this.S) == null) {
                break;
            } else {
                this.B0 = ((ConstraintWidgetContainer) constraintWidget2).f1261t0;
            }
        }
        bVar.a = i5;
        bVar.f17694b = i10;
        bVar.f17695c = i6;
        bVar.f17696d = i11;
        ((ConstraintLayout.Measurer) cVar).b(constraintWidget, bVar);
        constraintWidget.J(bVar.f17697e);
        constraintWidget.G(bVar.f17698f);
        constraintWidget.D = bVar.f17700h;
        constraintWidget.D(bVar.f17699g);
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void b(p0.c cVar, boolean z5) {
        ConstraintWidget constraintWidget;
        float f2;
        int i5;
        ArrayList arrayList = this.V0;
        super.b(cVar, z5);
        ConstraintWidget constraintWidget2 = this.S;
        boolean z6 = constraintWidget2 != null && ((ConstraintWidgetContainer) constraintWidget2).f1262u0;
        int i6 = this.S0;
        if (i6 != 0) {
            if (i6 == 1) {
                int size = arrayList.size();
                int i10 = 0;
                while (i10 < size) {
                    ((d) arrayList.get(i10)).b(i10, z6, i10 == size + (-1));
                    i10++;
                }
            } else if (i6 == 2 && this.Y0 != null && this.X0 != null && this.W0 != null) {
                for (int i11 = 0; i11 < this.f17100a1; i11++) {
                    this.Z0[i11].A();
                }
                int[] iArr = this.Y0;
                int i12 = iArr[0];
                int i13 = iArr[1];
                float f10 = this.I0;
                ConstraintWidget constraintWidget3 = null;
                int i14 = 0;
                while (i14 < i12) {
                    if (z6) {
                        i5 = (i12 - i14) - 1;
                        f2 = 1.0f - this.I0;
                    } else {
                        f2 = f10;
                        i5 = i14;
                    }
                    ConstraintWidget constraintWidget4 = this.X0[i5];
                    if (constraintWidget4 != null) {
                        c cVar2 = constraintWidget4.H;
                        if (constraintWidget4.f1230f0 != 8) {
                            if (i14 == 0) {
                                constraintWidget4.f(cVar2, this.H, this.f17105v0);
                                constraintWidget4.h0 = this.C0;
                                constraintWidget4.f1224c0 = f2;
                            }
                            if (i14 == i12 - 1) {
                                constraintWidget4.f(constraintWidget4.J, this.J, this.f17106w0);
                            }
                            if (i14 > 0 && constraintWidget3 != null) {
                                c cVar3 = constraintWidget3.J;
                                constraintWidget4.f(cVar2, cVar3, this.O0);
                                constraintWidget3.f(cVar3, cVar2, 0);
                            }
                            constraintWidget3 = constraintWidget4;
                        }
                    }
                    i14++;
                    f10 = f2;
                }
                for (int i15 = 0; i15 < i13; i15++) {
                    ConstraintWidget constraintWidget5 = this.W0[i15];
                    if (constraintWidget5 != null) {
                        c cVar4 = constraintWidget5.I;
                        if (constraintWidget5.f1230f0 != 8) {
                            if (i15 == 0) {
                                constraintWidget5.f(cVar4, this.I, this.f17101r0);
                                constraintWidget5.f1235i0 = this.D0;
                                constraintWidget5.f1226d0 = this.J0;
                            }
                            if (i15 == i13 - 1) {
                                constraintWidget5.f(constraintWidget5.K, this.K, this.f17102s0);
                            }
                            if (i15 > 0 && constraintWidget3 != null) {
                                c cVar5 = constraintWidget3.K;
                                constraintWidget5.f(cVar4, cVar5, this.P0);
                                constraintWidget3.f(cVar5, cVar4, 0);
                            }
                            constraintWidget3 = constraintWidget5;
                        }
                    }
                }
                for (int i16 = 0; i16 < i12; i16++) {
                    for (int i17 = 0; i17 < i13; i17++) {
                        int i18 = (i17 * i12) + i16;
                        if (this.U0 == 1) {
                            i18 = (i16 * i13) + i17;
                        }
                        ConstraintWidget[] constraintWidgetArr = this.Z0;
                        if (i18 < constraintWidgetArr.length && (constraintWidget = constraintWidgetArr[i18]) != null && constraintWidget.f1230f0 != 8) {
                            ConstraintWidget constraintWidget6 = this.X0[i16];
                            ConstraintWidget constraintWidget7 = this.W0[i17];
                            if (constraintWidget != constraintWidget6) {
                                constraintWidget.f(constraintWidget.H, constraintWidget6.H, 0);
                                constraintWidget.f(constraintWidget.J, constraintWidget6.J, 0);
                            }
                            if (constraintWidget != constraintWidget7) {
                                constraintWidget.f(constraintWidget.I, constraintWidget7.I, 0);
                                constraintWidget.f(constraintWidget.K, constraintWidget7.K, 0);
                            }
                        }
                    }
                }
            }
        } else if (arrayList.size() > 0) {
            ((d) arrayList.get(0)).b(0, z6, true);
        }
        this.f17107x0 = false;
    }
}
