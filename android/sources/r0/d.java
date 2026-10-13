package r0;

import androidx.constraintlayout.core.widgets.ConstraintWidget;

/* loaded from: classes.dex */
public final class d {
    public int a;

    /* renamed from: d, reason: collision with root package name */
    public c f17087d;

    /* renamed from: e, reason: collision with root package name */
    public c f17088e;

    /* renamed from: f, reason: collision with root package name */
    public c f17089f;

    /* renamed from: g, reason: collision with root package name */
    public c f17090g;

    /* renamed from: h, reason: collision with root package name */
    public int f17091h;

    /* renamed from: i, reason: collision with root package name */
    public int f17092i;
    public int j;
    public int k;

    /* renamed from: q, reason: collision with root package name */
    public int f17098q;

    /* renamed from: r, reason: collision with root package name */
    public final /* synthetic */ e f17099r;

    /* renamed from: b, reason: collision with root package name */
    public ConstraintWidget f17085b = null;

    /* renamed from: c, reason: collision with root package name */
    public int f17086c = 0;

    /* renamed from: l, reason: collision with root package name */
    public int f17093l = 0;

    /* renamed from: m, reason: collision with root package name */
    public int f17094m = 0;

    /* renamed from: n, reason: collision with root package name */
    public int f17095n = 0;

    /* renamed from: o, reason: collision with root package name */
    public int f17096o = 0;

    /* renamed from: p, reason: collision with root package name */
    public int f17097p = 0;

    public d(e eVar, int i5, c cVar, c cVar2, c cVar3, c cVar4, int i6) {
        this.f17099r = eVar;
        this.f17091h = 0;
        this.f17092i = 0;
        this.j = 0;
        this.k = 0;
        this.f17098q = 0;
        this.a = i5;
        this.f17087d = cVar;
        this.f17088e = cVar2;
        this.f17089f = cVar3;
        this.f17090g = cVar4;
        this.f17091h = eVar.f17105v0;
        this.f17092i = eVar.f17101r0;
        this.j = eVar.f17106w0;
        this.k = eVar.f17102s0;
        this.f17098q = i6;
    }

    public final void a(ConstraintWidget constraintWidget) {
        int i5 = this.a;
        e eVar = this.f17099r;
        if (i5 == 0) {
            int P = eVar.P(constraintWidget, this.f17098q);
            if (constraintWidget.f1245o0[0] == 3) {
                this.f17097p++;
                P = 0;
            }
            this.f17093l = P + (constraintWidget.f1230f0 != 8 ? eVar.O0 : 0) + this.f17093l;
            int O = eVar.O(constraintWidget, this.f17098q);
            if (this.f17085b == null || this.f17086c < O) {
                this.f17085b = constraintWidget;
                this.f17086c = O;
                this.f17094m = O;
            }
        } else {
            int P2 = eVar.P(constraintWidget, this.f17098q);
            int O2 = eVar.O(constraintWidget, this.f17098q);
            if (constraintWidget.f1245o0[1] == 3) {
                this.f17097p++;
                O2 = 0;
            }
            this.f17094m = O2 + (constraintWidget.f1230f0 != 8 ? eVar.P0 : 0) + this.f17094m;
            if (this.f17085b == null || this.f17086c < P2) {
                this.f17085b = constraintWidget;
                this.f17086c = P2;
                this.f17093l = P2;
            }
        }
        this.f17096o++;
    }

    public final void b(int i5, boolean z5, boolean z6) {
        e eVar;
        int i6;
        int i10;
        ConstraintWidget constraintWidget;
        char c6;
        int i11;
        int i12;
        int i13;
        int i14 = this.f17096o;
        int i15 = 0;
        while (true) {
            eVar = this.f17099r;
            if (i15 >= i14 || (i13 = this.f17095n + i15) >= eVar.f17100a1) {
                break;
            }
            ConstraintWidget constraintWidget2 = eVar.Z0[i13];
            if (constraintWidget2 != null) {
                constraintWidget2.A();
            }
            i15++;
        }
        if (i14 == 0 || this.f17085b == null) {
            return;
        }
        boolean z7 = z6 && i5 == 0;
        int i16 = -1;
        int i17 = -1;
        for (int i18 = 0; i18 < i14; i18++) {
            int i19 = this.f17095n + (z5 ? (i14 - 1) - i18 : i18);
            if (i19 >= eVar.f17100a1) {
                break;
            }
            if (eVar.Z0[i19].f1230f0 == 0) {
                if (i16 == -1) {
                    i16 = i18;
                }
                i17 = i18;
            }
        }
        if (this.a != 0) {
            ConstraintWidget constraintWidget3 = this.f17085b;
            constraintWidget3.h0 = eVar.C0;
            c cVar = constraintWidget3.H;
            c cVar2 = constraintWidget3.J;
            int i20 = this.f17091h;
            if (i5 > 0) {
                i20 += eVar.O0;
            }
            if (z5) {
                cVar2.a(this.f17089f, i20);
                if (z6) {
                    cVar.a(this.f17087d, this.j);
                }
                if (i5 > 0) {
                    this.f17089f.f17079d.H.a(cVar2, 0);
                }
            } else {
                cVar.a(this.f17087d, i20);
                if (z6) {
                    cVar2.a(this.f17089f, this.j);
                }
                if (i5 > 0) {
                    this.f17087d.f17079d.J.a(cVar, 0);
                }
            }
            ConstraintWidget constraintWidget4 = null;
            int i21 = 0;
            while (i21 < i14) {
                int i22 = this.f17095n + i21;
                if (i22 >= eVar.f17100a1) {
                    return;
                }
                ConstraintWidget constraintWidget5 = eVar.Z0[i22];
                if (i21 == 0) {
                    constraintWidget5.f(constraintWidget5.I, this.f17088e, this.f17092i);
                    int i23 = eVar.D0;
                    float f2 = eVar.J0;
                    if (this.f17095n == 0) {
                        i10 = eVar.F0;
                        i6 = -1;
                        if (i10 != -1) {
                            f2 = eVar.L0;
                            i23 = i10;
                            constraintWidget5.f1235i0 = i23;
                            constraintWidget5.f1226d0 = f2;
                        }
                    } else {
                        i6 = -1;
                    }
                    if (z6 && (i10 = eVar.H0) != i6) {
                        f2 = eVar.N0;
                        i23 = i10;
                    }
                    constraintWidget5.f1235i0 = i23;
                    constraintWidget5.f1226d0 = f2;
                }
                if (i21 == i14 - 1) {
                    constraintWidget5.f(constraintWidget5.K, this.f17090g, this.k);
                }
                if (constraintWidget4 != null) {
                    c cVar3 = constraintWidget4.K;
                    c cVar4 = constraintWidget5.I;
                    cVar4.a(cVar3, eVar.P0);
                    if (i21 == i16) {
                        int i24 = this.f17092i;
                        if (cVar4.h()) {
                            cVar4.f17083h = i24;
                        }
                    }
                    cVar3.a(cVar4, 0);
                    if (i21 == i17 + 1) {
                        int i25 = this.k;
                        if (cVar3.h()) {
                            cVar3.f17083h = i25;
                        }
                    }
                }
                if (constraintWidget5 != constraintWidget3) {
                    if (z5) {
                        int i26 = eVar.Q0;
                        if (i26 == 0) {
                            constraintWidget5.J.a(cVar2, 0);
                        } else if (i26 == 1) {
                            constraintWidget5.H.a(cVar, 0);
                        } else if (i26 == 2) {
                            constraintWidget5.H.a(cVar, 0);
                            constraintWidget5.J.a(cVar2, 0);
                        }
                    } else {
                        int i27 = eVar.Q0;
                        if (i27 == 0) {
                            constraintWidget5.H.a(cVar, 0);
                        } else if (i27 == 1) {
                            constraintWidget5.J.a(cVar2, 0);
                        } else if (i27 == 2) {
                            if (z7) {
                                constraintWidget5.H.a(this.f17087d, this.f17091h);
                                constraintWidget5.J.a(this.f17089f, this.j);
                            } else {
                                constraintWidget5.H.a(cVar, 0);
                                constraintWidget5.J.a(cVar2, 0);
                            }
                        }
                        i21++;
                        constraintWidget4 = constraintWidget5;
                    }
                }
                i21++;
                constraintWidget4 = constraintWidget5;
            }
            return;
        }
        ConstraintWidget constraintWidget6 = this.f17085b;
        constraintWidget6.f1235i0 = eVar.D0;
        c cVar5 = constraintWidget6.K;
        c cVar6 = constraintWidget6.I;
        int i28 = this.f17092i;
        if (i5 > 0) {
            i28 += eVar.P0;
        }
        cVar6.a(this.f17088e, i28);
        if (z6) {
            cVar5.a(this.f17090g, this.k);
        }
        if (i5 > 0) {
            this.f17088e.f17079d.K.a(cVar6, 0);
        }
        if (eVar.R0 == 3 && !constraintWidget6.D) {
            for (int i29 = 0; i29 < i14; i29++) {
                int i30 = this.f17095n + (z5 ? (i14 - 1) - i29 : i29);
                if (i30 >= eVar.f17100a1) {
                    break;
                }
                constraintWidget = eVar.Z0[i30];
                if (constraintWidget.D) {
                    break;
                }
            }
        }
        constraintWidget = constraintWidget6;
        int i31 = 0;
        ConstraintWidget constraintWidget7 = null;
        while (i31 < i14) {
            int i32 = z5 ? (i14 - 1) - i31 : i31;
            int i33 = this.f17095n + i32;
            if (i33 >= eVar.f17100a1) {
                return;
            }
            ConstraintWidget constraintWidget8 = eVar.Z0[i33];
            if (i31 == 0) {
                constraintWidget8.f(constraintWidget8.H, this.f17087d, this.f17091h);
            }
            if (i32 == 0) {
                int i34 = eVar.C0;
                float f10 = z5 ? 1.0f - eVar.I0 : eVar.I0;
                if (this.f17095n == 0) {
                    int i35 = eVar.E0;
                    i11 = i34;
                    if (i35 != -1) {
                        f10 = z5 ? 1.0f - eVar.K0 : eVar.K0;
                        i12 = i35;
                        constraintWidget8.h0 = i12;
                        constraintWidget8.f1224c0 = f10;
                    }
                } else {
                    i11 = i34;
                }
                if (!z6 || (i12 = eVar.G0) == -1) {
                    i12 = i11;
                } else {
                    f10 = z5 ? 1.0f - eVar.M0 : eVar.M0;
                }
                constraintWidget8.h0 = i12;
                constraintWidget8.f1224c0 = f10;
            }
            if (i31 == i14 - 1) {
                constraintWidget8.f(constraintWidget8.J, this.f17089f, this.j);
            }
            if (constraintWidget7 != null) {
                c cVar7 = constraintWidget7.J;
                c cVar8 = constraintWidget8.H;
                cVar8.a(cVar7, eVar.O0);
                if (i31 == i16) {
                    int i36 = this.f17091h;
                    if (cVar8.h()) {
                        cVar8.f17083h = i36;
                    }
                }
                cVar7.a(cVar8, 0);
                if (i31 == i17 + 1) {
                    int i37 = this.j;
                    if (cVar7.h()) {
                        cVar7.f17083h = i37;
                    }
                }
            }
            if (constraintWidget8 != constraintWidget6) {
                int i38 = eVar.R0;
                c6 = 3;
                if (i38 == 3 && constraintWidget.D && constraintWidget8 != constraintWidget && constraintWidget8.D) {
                    constraintWidget8.L.a(constraintWidget.L, 0);
                } else if (i38 == 0) {
                    constraintWidget8.I.a(cVar6, 0);
                } else if (i38 == 1) {
                    constraintWidget8.K.a(cVar5, 0);
                } else if (z7) {
                    constraintWidget8.I.a(this.f17088e, this.f17092i);
                    constraintWidget8.K.a(this.f17090g, this.k);
                } else {
                    constraintWidget8.I.a(cVar6, 0);
                    constraintWidget8.K.a(cVar5, 0);
                }
            } else {
                c6 = 3;
            }
            i31++;
            constraintWidget7 = constraintWidget8;
        }
    }

    public final int c() {
        return this.a == 1 ? this.f17094m - this.f17099r.P0 : this.f17094m;
    }

    public final int d() {
        return this.a == 0 ? this.f17093l - this.f17099r.O0 : this.f17093l;
    }

    public final void e(int i5) {
        e eVar;
        int i6;
        int i10 = this.f17097p;
        if (i10 == 0) {
            return;
        }
        int i11 = this.f17096o;
        int i12 = i5 / i10;
        int i13 = 0;
        while (true) {
            eVar = this.f17099r;
            if (i13 >= i11 || (i6 = this.f17095n + i13) >= eVar.f17100a1) {
                break;
            }
            ConstraintWidget constraintWidget = eVar.Z0[i6];
            if (this.a == 0) {
                if (constraintWidget != null) {
                    int[] iArr = constraintWidget.f1245o0;
                    if (iArr[0] == 3 && constraintWidget.f1247q == 0) {
                        eVar.Q(1, i12, iArr[1], constraintWidget.k(), constraintWidget);
                    }
                }
            } else if (constraintWidget != null) {
                int[] iArr2 = constraintWidget.f1245o0;
                if (iArr2[1] == 3 && constraintWidget.f1248r == 0) {
                    int i14 = i12;
                    eVar.Q(iArr2[0], constraintWidget.n(), 1, i14, constraintWidget);
                    i12 = i14;
                }
            }
            i13++;
        }
        this.f17093l = 0;
        this.f17094m = 0;
        this.f17085b = null;
        this.f17086c = 0;
        int i15 = this.f17096o;
        for (int i16 = 0; i16 < i15; i16++) {
            int i17 = this.f17095n + i16;
            if (i17 >= eVar.f17100a1) {
                return;
            }
            ConstraintWidget constraintWidget2 = eVar.Z0[i17];
            if (this.a == 0) {
                int n6 = constraintWidget2.n();
                int i18 = eVar.O0;
                if (constraintWidget2.f1230f0 == 8) {
                    i18 = 0;
                }
                this.f17093l = n6 + i18 + this.f17093l;
                int O = eVar.O(constraintWidget2, this.f17098q);
                if (this.f17085b == null || this.f17086c < O) {
                    this.f17085b = constraintWidget2;
                    this.f17086c = O;
                    this.f17094m = O;
                }
            } else {
                int P = eVar.P(constraintWidget2, this.f17098q);
                int O2 = eVar.O(constraintWidget2, this.f17098q);
                int i19 = eVar.P0;
                if (constraintWidget2.f1230f0 == 8) {
                    i19 = 0;
                }
                this.f17094m = O2 + i19 + this.f17094m;
                if (this.f17085b == null || this.f17086c < P) {
                    this.f17085b = constraintWidget2;
                    this.f17086c = P;
                    this.f17093l = P;
                }
            }
        }
    }

    public final void f(int i5, c cVar, c cVar2, c cVar3, c cVar4, int i6, int i10, int i11, int i12, int i13) {
        this.a = i5;
        this.f17087d = cVar;
        this.f17088e = cVar2;
        this.f17089f = cVar3;
        this.f17090g = cVar4;
        this.f17091h = i6;
        this.f17092i = i10;
        this.j = i11;
        this.k = i12;
        this.f17098q = i13;
    }
}
