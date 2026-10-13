package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;

/* loaded from: classes.dex */
public final class a extends g {

    /* renamed from: r0, reason: collision with root package name */
    public int f17059r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f17060s0;

    /* renamed from: t0, reason: collision with root package name */
    public int f17061t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f17062u0;

    public final boolean O() {
        int i5;
        int i6;
        int i10;
        boolean z5 = true;
        int i11 = 0;
        while (true) {
            i5 = this.f17117q0;
            if (i11 >= i5) {
                break;
            }
            ConstraintWidget constraintWidget = this.f17116p0[i11];
            if ((this.f17060s0 || constraintWidget.c()) && ((((i6 = this.f17059r0) == 0 || i6 == 1) && !constraintWidget.x()) || (((i10 = this.f17059r0) == 2 || i10 == 3) && !constraintWidget.y()))) {
                z5 = false;
            }
            i11++;
        }
        if (!z5 || i5 <= 0) {
            return false;
        }
        int i12 = 0;
        boolean z6 = false;
        for (int i13 = 0; i13 < this.f17117q0; i13++) {
            ConstraintWidget constraintWidget2 = this.f17116p0[i13];
            if (this.f17060s0 || constraintWidget2.c()) {
                if (!z6) {
                    int i14 = this.f17059r0;
                    if (i14 == 0) {
                        i12 = constraintWidget2.i(2).d();
                    } else if (i14 == 1) {
                        i12 = constraintWidget2.i(4).d();
                    } else if (i14 == 2) {
                        i12 = constraintWidget2.i(3).d();
                    } else if (i14 == 3) {
                        i12 = constraintWidget2.i(5).d();
                    }
                    z6 = true;
                }
                int i15 = this.f17059r0;
                if (i15 == 0) {
                    i12 = Math.min(i12, constraintWidget2.i(2).d());
                } else if (i15 == 1) {
                    i12 = Math.max(i12, constraintWidget2.i(4).d());
                } else if (i15 == 2) {
                    i12 = Math.min(i12, constraintWidget2.i(3).d());
                } else if (i15 == 3) {
                    i12 = Math.max(i12, constraintWidget2.i(5).d());
                }
            }
        }
        int i16 = i12 + this.f17061t0;
        int i17 = this.f17059r0;
        if (i17 == 0 || i17 == 1) {
            E(i16, i16);
        } else {
            F(i16, i16);
        }
        this.f17062u0 = true;
        return true;
    }

    public final int P() {
        int i5 = this.f17059r0;
        if (i5 == 0 || i5 == 1) {
            return 0;
        }
        return (i5 == 2 || i5 == 3) ? 1 : -1;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void b(p0.c cVar, boolean z5) {
        boolean z6;
        int i5;
        int i6;
        c[] cVarArr = this.P;
        c cVar2 = this.H;
        cVarArr[0] = cVar2;
        int i10 = 2;
        c cVar3 = this.I;
        cVarArr[2] = cVar3;
        c cVar4 = this.J;
        cVarArr[1] = cVar4;
        c cVar5 = this.K;
        cVarArr[3] = cVar5;
        for (c cVar6 : cVarArr) {
            cVar6.f17084i = cVar.k(cVar6);
        }
        int i11 = this.f17059r0;
        if (i11 < 0 || i11 >= 4) {
            return;
        }
        c cVar7 = cVarArr[i11];
        if (!this.f17062u0) {
            O();
        }
        if (this.f17062u0) {
            this.f17062u0 = false;
            int i12 = this.f17059r0;
            if (i12 == 0 || i12 == 1) {
                cVar.d(cVar2.f17084i, this.X);
                cVar.d(cVar4.f17084i, this.X);
                return;
            } else {
                if (i12 == 2 || i12 == 3) {
                    cVar.d(cVar3.f17084i, this.Y);
                    cVar.d(cVar5.f17084i, this.Y);
                    return;
                }
                return;
            }
        }
        for (int i13 = 0; i13 < this.f17117q0; i13++) {
            ConstraintWidget constraintWidget = this.f17116p0[i13];
            if ((this.f17060s0 || constraintWidget.c()) && ((((i6 = this.f17059r0) == 0 || i6 == 1) && constraintWidget.f1245o0[0] == 3 && constraintWidget.H.f17081f != null && constraintWidget.J.f17081f != null) || ((i6 == 2 || i6 == 3) && constraintWidget.f1245o0[1] == 3 && constraintWidget.I.f17081f != null && constraintWidget.K.f17081f != null))) {
                z6 = true;
                break;
            }
        }
        z6 = false;
        boolean z7 = cVar2.g() || cVar4.g();
        boolean z8 = cVar3.g() || cVar5.g();
        int i14 = !(!z6 && (((i5 = this.f17059r0) == 0 && z7) || ((i5 == 2 && z8) || ((i5 == 1 && z7) || (i5 == 3 && z8))))) ? 4 : 5;
        int i15 = 0;
        while (i15 < this.f17117q0) {
            ConstraintWidget constraintWidget2 = this.f17116p0[i15];
            if (this.f17060s0 || constraintWidget2.c()) {
                p0.e k = cVar.k(constraintWidget2.P[this.f17059r0]);
                c[] cVarArr2 = constraintWidget2.P;
                int i16 = this.f17059r0;
                c cVar8 = cVarArr2[i16];
                cVar8.f17084i = k;
                c cVar9 = cVar8.f17081f;
                int i17 = (cVar9 == null || cVar9.f17079d != this) ? 0 : cVar8.f17082g;
                if (i16 == 0 || i16 == i10) {
                    p0.e eVar = cVar7.f17084i;
                    int i18 = this.f17061t0 - i17;
                    p0.b l6 = cVar.l();
                    p0.e m5 = cVar.m();
                    m5.f16294v = 0;
                    l6.c(eVar, k, m5, i18);
                    cVar.c(l6);
                } else {
                    p0.e eVar2 = cVar7.f17084i;
                    int i19 = this.f17061t0 + i17;
                    p0.b l7 = cVar.l();
                    p0.e m6 = cVar.m();
                    m6.f16294v = 0;
                    l7.b(eVar2, k, m6, i19);
                    cVar.c(l7);
                }
                cVar.e(cVar7.f17084i, k, this.f17061t0 + i17, i14);
            }
            i15++;
            i10 = 2;
        }
        int i20 = this.f17059r0;
        if (i20 == 0) {
            cVar.e(cVar4.f17084i, cVar2.f17084i, 0, 8);
            cVar.e(cVar2.f17084i, this.S.J.f17084i, 0, 4);
            cVar.e(cVar2.f17084i, this.S.H.f17084i, 0, 0);
            return;
        }
        if (i20 == 1) {
            cVar.e(cVar2.f17084i, cVar4.f17084i, 0, 8);
            cVar.e(cVar2.f17084i, this.S.H.f17084i, 0, 4);
            cVar.e(cVar2.f17084i, this.S.J.f17084i, 0, 0);
        } else if (i20 == 2) {
            cVar.e(cVar5.f17084i, cVar3.f17084i, 0, 8);
            cVar.e(cVar3.f17084i, this.S.K.f17084i, 0, 4);
            cVar.e(cVar3.f17084i, this.S.I.f17084i, 0, 0);
        } else if (i20 == 3) {
            cVar.e(cVar3.f17084i, cVar5.f17084i, 0, 8);
            cVar.e(cVar3.f17084i, this.S.I.f17084i, 0, 4);
            cVar.e(cVar3.f17084i, this.S.K.f17084i, 0, 0);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean c() {
        return true;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final String toString() {
        String j = com.discord.chat.bridge.botuikit.a.j(new StringBuilder("[Barrier] "), this.f1232g0, " {");
        for (int i5 = 0; i5 < this.f17117q0; i5++) {
            ConstraintWidget constraintWidget = this.f17116p0[i5];
            if (i5 > 0) {
                j = k0.d.k(j, ", ");
            }
            StringBuilder o6 = k0.d.o(j);
            o6.append(constraintWidget.f1232g0);
            j = o6.toString();
        }
        return k0.d.k(j, "}");
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean x() {
        return this.f17062u0;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final boolean y() {
        return this.f17062u0;
    }
}
