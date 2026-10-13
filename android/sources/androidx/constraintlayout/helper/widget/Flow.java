package androidx.constraintlayout.helper.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.View;
import androidx.constraintlayout.core.widgets.ConstraintWidget;
import androidx.constraintlayout.core.widgets.ConstraintWidgetContainer;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.constraintlayout.widget.m;
import androidx.constraintlayout.widget.n;
import java.util.ArrayList;
import java.util.Arrays;
import r0.d;
import r0.e;
import r0.f;
import s0.b;
import s0.c;

/* loaded from: classes.dex */
public class Flow extends n {
    public e G;

    public Flow(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override // androidx.constraintlayout.widget.n, androidx.constraintlayout.widget.b
    public final void h(AttributeSet attributeSet) {
        super.h(attributeSet);
        e eVar = new e();
        eVar.f17101r0 = 0;
        eVar.f17102s0 = 0;
        eVar.f17103t0 = 0;
        eVar.f17104u0 = 0;
        eVar.f17105v0 = 0;
        eVar.f17106w0 = 0;
        eVar.f17107x0 = false;
        eVar.f17108y0 = 0;
        eVar.f17109z0 = 0;
        eVar.A0 = new b();
        eVar.B0 = null;
        eVar.C0 = -1;
        eVar.D0 = -1;
        eVar.E0 = -1;
        eVar.F0 = -1;
        eVar.G0 = -1;
        eVar.H0 = -1;
        eVar.I0 = 0.5f;
        eVar.J0 = 0.5f;
        eVar.K0 = 0.5f;
        eVar.L0 = 0.5f;
        eVar.M0 = 0.5f;
        eVar.N0 = 0.5f;
        eVar.O0 = 0;
        eVar.P0 = 0;
        eVar.Q0 = 2;
        eVar.R0 = 2;
        eVar.S0 = 0;
        eVar.T0 = -1;
        eVar.U0 = 0;
        eVar.V0 = new ArrayList();
        eVar.W0 = null;
        eVar.X0 = null;
        eVar.Y0 = null;
        eVar.f17100a1 = 0;
        this.G = eVar;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(attributeSet, m.f1413b);
            int indexCount = obtainStyledAttributes.getIndexCount();
            for (int i5 = 0; i5 < indexCount; i5++) {
                int index = obtainStyledAttributes.getIndex(i5);
                if (index == 0) {
                    this.G.U0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 1) {
                    e eVar2 = this.G;
                    int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                    eVar2.f17101r0 = dimensionPixelSize;
                    eVar2.f17102s0 = dimensionPixelSize;
                    eVar2.f17103t0 = dimensionPixelSize;
                    eVar2.f17104u0 = dimensionPixelSize;
                } else if (index == 18) {
                    e eVar3 = this.G;
                    int dimensionPixelSize2 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                    eVar3.f17103t0 = dimensionPixelSize2;
                    eVar3.f17105v0 = dimensionPixelSize2;
                    eVar3.f17106w0 = dimensionPixelSize2;
                } else if (index == 19) {
                    this.G.f17104u0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 2) {
                    this.G.f17105v0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 3) {
                    this.G.f17101r0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 4) {
                    this.G.f17106w0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 5) {
                    this.G.f17102s0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 54) {
                    this.G.S0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 44) {
                    this.G.C0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 53) {
                    this.G.D0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 38) {
                    this.G.E0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 46) {
                    this.G.G0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 40) {
                    this.G.F0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 48) {
                    this.G.H0 = obtainStyledAttributes.getInt(index, 0);
                } else if (index == 42) {
                    this.G.I0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 37) {
                    this.G.K0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 45) {
                    this.G.M0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 39) {
                    this.G.L0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 47) {
                    this.G.N0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 51) {
                    this.G.J0 = obtainStyledAttributes.getFloat(index, 0.5f);
                } else if (index == 41) {
                    this.G.Q0 = obtainStyledAttributes.getInt(index, 2);
                } else if (index == 50) {
                    this.G.R0 = obtainStyledAttributes.getInt(index, 2);
                } else if (index == 43) {
                    this.G.O0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 52) {
                    this.G.P0 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                } else if (index == 49) {
                    this.G.T0 = obtainStyledAttributes.getInt(index, -1);
                }
            }
            obtainStyledAttributes.recycle();
        }
        this.f1329v = this.G;
        k();
    }

    @Override // androidx.constraintlayout.widget.b
    public final void i(ConstraintWidget constraintWidget, boolean z5) {
        e eVar = this.G;
        int i5 = eVar.f17103t0;
        if (i5 > 0 || eVar.f17104u0 > 0) {
            if (z5) {
                eVar.f17105v0 = eVar.f17104u0;
                eVar.f17106w0 = i5;
            } else {
                eVar.f17105v0 = i5;
                eVar.f17106w0 = eVar.f17104u0;
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0551  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0560  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x057a  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x057d  */
    /* JADX WARN: Type inference failed for: r30v2 */
    /* JADX WARN: Type inference failed for: r30v5 */
    /* JADX WARN: Type inference failed for: r30v6 */
    /* JADX WARN: Type inference failed for: r30v7 */
    @Override // androidx.constraintlayout.widget.n
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l(e eVar, int i5, int i6) {
        int i10;
        ConstraintWidget[] constraintWidgetArr;
        int i11;
        int[] iArr;
        int i12;
        int i13;
        int i14;
        boolean z5;
        d dVar;
        char c6;
        ?? r30;
        int i15;
        int[] iArr2;
        boolean z6;
        int i16;
        int i17;
        int i18;
        ConstraintWidget constraintWidget;
        int i19;
        int i20;
        int i21;
        int i22;
        int i23;
        boolean z7;
        boolean z8;
        int[] iArr3;
        ConstraintWidget constraintWidget2;
        ConstraintWidget[] constraintWidgetArr2;
        int i24;
        int mode = View.MeasureSpec.getMode(i5);
        int size = View.MeasureSpec.getSize(i5);
        int mode2 = View.MeasureSpec.getMode(i6);
        int size2 = View.MeasureSpec.getSize(i6);
        int i25 = 0;
        if (eVar == null) {
            setMeasuredDimension(0, 0);
            return;
        }
        ArrayList arrayList = eVar.V0;
        if (eVar.f17117q0 > 0) {
            b bVar = eVar.A0;
            ConstraintWidget constraintWidget3 = eVar.S;
            c cVar = constraintWidget3 != null ? ((ConstraintWidgetContainer) constraintWidget3).f1261t0 : null;
            if (cVar == null) {
                eVar.f17108y0 = 0;
                eVar.f17109z0 = 0;
                eVar.f17107x0 = false;
                setMeasuredDimension(eVar.f17108y0, eVar.f17109z0);
            }
            int i26 = 0;
            while (i26 < eVar.f17117q0) {
                ConstraintWidget constraintWidget4 = eVar.f17116p0[i26];
                if (constraintWidget4 != null && !(constraintWidget4 instanceof f)) {
                    int j = constraintWidget4.j(i25);
                    int j5 = constraintWidget4.j(1);
                    if (j != 3 || constraintWidget4.f1247q == 1 || j5 != 3 || constraintWidget4.f1248r == 1) {
                        if (j == 3) {
                            j = 2;
                        }
                        if (j5 == 3) {
                            j5 = 2;
                        }
                        bVar.a = j;
                        bVar.f17694b = j5;
                        bVar.f17695c = constraintWidget4.n();
                        bVar.f17696d = constraintWidget4.k();
                        ((ConstraintLayout.Measurer) cVar).b(constraintWidget4, bVar);
                        constraintWidget4.J(bVar.f17697e);
                        constraintWidget4.G(bVar.f17698f);
                        constraintWidget4.D(bVar.f17699g);
                    }
                }
                i26++;
                i25 = 0;
            }
        }
        int i27 = eVar.f17105v0;
        int i28 = eVar.f17106w0;
        int i29 = eVar.f17101r0;
        int i30 = eVar.f17102s0;
        int[] iArr4 = new int[2];
        int i31 = (size - i27) - i28;
        int i32 = eVar.U0;
        if (i32 == 1) {
            i31 = (size2 - i29) - i30;
        }
        if (i32 == 0) {
            if (eVar.C0 == -1) {
                i24 = 0;
                eVar.C0 = 0;
            } else {
                i24 = 0;
            }
            if (eVar.D0 == -1) {
                eVar.D0 = i24;
            }
        } else {
            if (eVar.C0 == -1) {
                eVar.C0 = 0;
            }
            if (eVar.D0 == -1) {
                eVar.D0 = 0;
            }
        }
        ConstraintWidget[] constraintWidgetArr3 = eVar.f17116p0;
        int i33 = 0;
        int i34 = 0;
        while (true) {
            i10 = eVar.f17117q0;
            constraintWidgetArr = constraintWidgetArr3;
            if (i33 >= i10) {
                break;
            }
            if (eVar.f17116p0[i33].f1230f0 == 8) {
                i34++;
            }
            i33++;
            constraintWidgetArr3 = constraintWidgetArr;
        }
        if (i34 > 0) {
            ConstraintWidget[] constraintWidgetArr4 = new ConstraintWidget[i10 - i34];
            int i35 = 0;
            int i36 = 0;
            while (i35 < eVar.f17117q0) {
                ConstraintWidget constraintWidget5 = eVar.f17116p0[i35];
                ConstraintWidget[] constraintWidgetArr5 = constraintWidgetArr4;
                if (constraintWidget5.f1230f0 != 8) {
                    constraintWidgetArr5[i36] = constraintWidget5;
                    i36++;
                }
                i35++;
                constraintWidgetArr4 = constraintWidgetArr5;
            }
            constraintWidgetArr = constraintWidgetArr4;
            i10 = i36;
        }
        ConstraintWidget[] constraintWidgetArr6 = constraintWidgetArr;
        eVar.Z0 = constraintWidgetArr6;
        eVar.f17100a1 = i10;
        int i37 = eVar.S0;
        if (i37 != 0) {
            if (i37 == 1) {
                int i38 = i10;
                i15 = i30;
                iArr2 = iArr4;
                z6 = true;
                int i39 = eVar.U0;
                r0.c cVar2 = eVar.K;
                r0.c cVar3 = eVar.J;
                if (i38 != 0) {
                    arrayList.clear();
                    int i40 = i31;
                    i12 = i27;
                    i13 = i28;
                    z5 = true;
                    i14 = i29;
                    i11 = i15;
                    iArr = iArr2;
                    int i41 = 3;
                    d dVar2 = new d(eVar, i39, eVar.H, eVar.I, eVar.J, eVar.K, i40);
                    arrayList.add(dVar2);
                    if (i39 == 0) {
                        d dVar3 = dVar2;
                        int i42 = 0;
                        i16 = 0;
                        int i43 = 0;
                        while (i42 < i38) {
                            ConstraintWidget constraintWidget6 = constraintWidgetArr6[i42];
                            int P = eVar.P(constraintWidget6, i40);
                            int i44 = i42;
                            if (constraintWidget6.f1245o0[0] == i41) {
                                i16++;
                            }
                            int i45 = i16;
                            boolean z10 = (i43 == i40 || (eVar.O0 + i43) + P > i40) && dVar3.f17085b != null;
                            if (!z10 && i44 > 0 && (i20 = eVar.T0) > 0 && i44 % i20 == 0) {
                                z10 = true;
                            }
                            if (z10) {
                                i19 = i44;
                                constraintWidget = constraintWidget6;
                                d dVar4 = new d(eVar, i39, eVar.H, eVar.I, eVar.J, eVar.K, i40);
                                dVar4.f17095n = i19;
                                arrayList.add(dVar4);
                                dVar3 = dVar4;
                            } else {
                                constraintWidget = constraintWidget6;
                                i19 = i44;
                                if (i19 > 0) {
                                    i43 = eVar.O0 + P + i43;
                                    dVar3.a(constraintWidget);
                                    i42 = i19 + 1;
                                    i16 = i45;
                                    i41 = 3;
                                }
                            }
                            i43 = P;
                            dVar3.a(constraintWidget);
                            i42 = i19 + 1;
                            i16 = i45;
                            i41 = 3;
                        }
                    } else {
                        d dVar5 = dVar2;
                        int i46 = 0;
                        int i47 = 0;
                        int i48 = 0;
                        while (i46 < i38) {
                            ConstraintWidget constraintWidget7 = constraintWidgetArr6[i46];
                            int O = eVar.O(constraintWidget7, i40);
                            if (constraintWidget7.f1245o0[1] == 3) {
                                i47++;
                            }
                            int i49 = i47;
                            boolean z11 = (i48 == i40 || (eVar.P0 + i48) + O > i40) && dVar5.f17085b != null;
                            if (!z11 && i46 > 0 && (i17 = eVar.T0) > 0 && i46 % i17 == 0) {
                                z11 = true;
                            }
                            if (z11) {
                                d dVar6 = new d(eVar, i39, eVar.H, eVar.I, eVar.J, eVar.K, i40);
                                dVar6.f17095n = i46;
                                arrayList.add(dVar6);
                                dVar5 = dVar6;
                            } else if (i46 > 0) {
                                i48 = eVar.P0 + O + i48;
                                dVar5.a(constraintWidget7);
                                i46++;
                                i47 = i49;
                            }
                            i48 = O;
                            dVar5.a(constraintWidget7);
                            i46++;
                            i47 = i49;
                        }
                        i16 = i47;
                    }
                    int size3 = arrayList.size();
                    r0.c cVar4 = eVar.H;
                    r0.c cVar5 = eVar.I;
                    int i50 = eVar.f17105v0;
                    int i51 = eVar.f17101r0;
                    int i52 = eVar.f17106w0;
                    int i53 = eVar.f17102s0;
                    int[] iArr5 = eVar.f1245o0;
                    int i54 = i39;
                    boolean z12 = iArr5[0] == 2 || iArr5[1] == 2;
                    if (i16 > 0 && z12) {
                        for (int i55 = 0; i55 < size3; i55++) {
                            d dVar7 = (d) arrayList.get(i55);
                            if (i54 == 0) {
                                dVar7.e(i40 - dVar7.d());
                            } else {
                                dVar7.e(i40 - dVar7.c());
                            }
                        }
                    }
                    r0.c cVar6 = cVar5;
                    int i56 = i50;
                    int i57 = i51;
                    int i58 = i52;
                    int i59 = i53;
                    r0.c cVar7 = cVar4;
                    r0.c cVar8 = cVar2;
                    r0.c cVar9 = cVar3;
                    int i60 = 0;
                    int i61 = 0;
                    int i62 = 0;
                    while (i60 < size3) {
                        d dVar8 = (d) arrayList.get(i60);
                        if (i54 == 0) {
                            if (i60 < size3 - 1) {
                                cVar8 = ((d) arrayList.get(i60 + 1)).f17085b.I;
                                i59 = 0;
                            } else {
                                i59 = eVar.f17102s0;
                                cVar8 = cVar2;
                            }
                            r0.c cVar10 = dVar8.f17085b.K;
                            i18 = i54;
                            dVar8.f(i18, cVar7, cVar6, cVar9, cVar8, i56, i57, i58, i59, i40);
                            i61 = Math.max(i61, dVar8.d());
                            int c8 = dVar8.c() + i62;
                            if (i60 > 0) {
                                c8 += eVar.P0;
                            }
                            i62 = c8;
                            cVar6 = cVar10;
                            i57 = 0;
                        } else {
                            i18 = i54;
                            if (i60 < size3 - 1) {
                                cVar9 = ((d) arrayList.get(i60 + 1)).f17085b.H;
                                i58 = 0;
                            } else {
                                i58 = eVar.f17106w0;
                                cVar9 = cVar3;
                            }
                            r0.c cVar11 = dVar8.f17085b.J;
                            dVar8.f(i18, cVar7, cVar6, cVar9, cVar8, i56, i57, i58, i59, i40);
                            int d6 = dVar8.d() + i61;
                            int max = Math.max(i62, dVar8.c());
                            if (i60 > 0) {
                                d6 += eVar.O0;
                            }
                            i62 = max;
                            i61 = d6;
                            cVar7 = cVar11;
                            i56 = 0;
                        }
                        i60++;
                        i54 = i18;
                    }
                    iArr[0] = i61;
                    iArr[1] = i62;
                    c6 = 0;
                    r30 = z5;
                    int i63 = iArr[c6] + i12 + i13;
                    int i64 = iArr[r30] + i14 + i11;
                    if (mode != 1073741824) {
                    }
                    if (mode2 != 1073741824) {
                    }
                    eVar.f17108y0 = size;
                    eVar.f17109z0 = size2;
                    eVar.J(size);
                    eVar.G(size2);
                    eVar.f17107x0 = eVar.f17117q0 > 0 ? r30 : false;
                }
            } else if (i37 != 2) {
                i11 = i30;
                iArr = iArr4;
                i12 = i27;
                i13 = i28;
                i14 = i29;
                c6 = 0;
                r30 = 1;
                int i632 = iArr[c6] + i12 + i13;
                int i642 = iArr[r30] + i14 + i11;
                if (mode != 1073741824) {
                    size = mode == Integer.MIN_VALUE ? Math.min(i632, size) : mode == 0 ? i632 : 0;
                }
                if (mode2 != 1073741824) {
                    size2 = mode2 == Integer.MIN_VALUE ? Math.min(i642, size2) : mode2 == 0 ? i642 : 0;
                }
                eVar.f17108y0 = size;
                eVar.f17109z0 = size2;
                eVar.J(size);
                eVar.G(size2);
                eVar.f17107x0 = eVar.f17117q0 > 0 ? r30 : false;
            } else {
                int i65 = eVar.U0;
                if (i65 == 0) {
                    int i66 = eVar.T0;
                    if (i66 <= 0) {
                        int i67 = 0;
                        int i68 = 0;
                        i22 = 0;
                        while (true) {
                            i15 = i30;
                            if (i67 >= i10) {
                                break;
                            }
                            if (i67 > 0) {
                                i68 += eVar.O0;
                            }
                            ConstraintWidget constraintWidget8 = constraintWidgetArr6[i67];
                            if (constraintWidget8 != null) {
                                int P2 = eVar.P(constraintWidget8, i31) + i68;
                                if (P2 > i31) {
                                    break;
                                }
                                i22++;
                                i68 = P2;
                            }
                            i67++;
                            i30 = i15;
                        }
                    } else {
                        i15 = i30;
                        i22 = i66;
                    }
                    i21 = 0;
                } else {
                    i15 = i30;
                    int i69 = eVar.T0;
                    if (i69 <= 0) {
                        int i70 = 0;
                        int i71 = 0;
                        i21 = 0;
                        while (i70 < i10) {
                            int i72 = i70;
                            if (i70 > 0) {
                                i71 += eVar.P0;
                            }
                            ConstraintWidget constraintWidget9 = constraintWidgetArr6[i72];
                            if (constraintWidget9 != null) {
                                int O2 = eVar.O(constraintWidget9, i31) + i71;
                                if (O2 > i31) {
                                    break;
                                }
                                i21++;
                                i71 = O2;
                            }
                            i70 = i72 + 1;
                        }
                    } else {
                        i21 = i69;
                    }
                    i22 = 0;
                }
                if (eVar.Y0 == null) {
                    eVar.Y0 = new int[2];
                }
                if ((i21 == 0 && i65 == 1) || (i22 == 0 && i65 == 0)) {
                    i23 = i22;
                    z7 = true;
                } else {
                    i23 = i22;
                    z7 = false;
                }
                while (!z7) {
                    if (i65 == 0) {
                        z8 = z7;
                        iArr3 = iArr4;
                        i21 = (int) Math.ceil(i10 / i23);
                        i23 = i23;
                    } else {
                        z8 = z7;
                        iArr3 = iArr4;
                        i23 = (int) Math.ceil(i10 / i21);
                    }
                    ConstraintWidget[] constraintWidgetArr7 = eVar.X0;
                    int i73 = i10;
                    if (constraintWidgetArr7 == null || constraintWidgetArr7.length < i23) {
                        eVar.X0 = new ConstraintWidget[i23];
                    } else {
                        Arrays.fill(constraintWidgetArr7, (Object) null);
                    }
                    ConstraintWidget[] constraintWidgetArr8 = eVar.W0;
                    if (constraintWidgetArr8 == null || constraintWidgetArr8.length < i21) {
                        eVar.W0 = new ConstraintWidget[i21];
                    } else {
                        Arrays.fill(constraintWidgetArr8, (Object) null);
                    }
                    int i74 = 0;
                    while (i74 < i23) {
                        int i75 = 0;
                        while (i75 < i21) {
                            int i76 = (i75 * i23) + i74;
                            int i77 = i74;
                            if (i65 == 1) {
                                i76 = (i77 * i21) + i75;
                            }
                            int[] iArr6 = iArr3;
                            int i78 = i76;
                            if (i78 < constraintWidgetArr6.length && (constraintWidget2 = constraintWidgetArr6[i78]) != null) {
                                int P3 = eVar.P(constraintWidget2, i31);
                                constraintWidgetArr2 = constraintWidgetArr6;
                                ConstraintWidget constraintWidget10 = eVar.X0[i77];
                                if (constraintWidget10 == null || constraintWidget10.n() < P3) {
                                    eVar.X0[i77] = constraintWidget2;
                                }
                                int O3 = eVar.O(constraintWidget2, i31);
                                ConstraintWidget constraintWidget11 = eVar.W0[i75];
                                if (constraintWidget11 == null || constraintWidget11.k() < O3) {
                                    eVar.W0[i75] = constraintWidget2;
                                }
                            } else {
                                constraintWidgetArr2 = constraintWidgetArr6;
                            }
                            i75++;
                            i74 = i77;
                            iArr3 = iArr6;
                            constraintWidgetArr6 = constraintWidgetArr2;
                        }
                        i74++;
                    }
                    ConstraintWidget[] constraintWidgetArr9 = constraintWidgetArr6;
                    int[] iArr7 = iArr3;
                    int i79 = 0;
                    for (int i80 = 0; i80 < i23; i80++) {
                        ConstraintWidget constraintWidget12 = eVar.X0[i80];
                        if (constraintWidget12 != null) {
                            if (i80 > 0) {
                                i79 += eVar.O0;
                            }
                            i79 = eVar.P(constraintWidget12, i31) + i79;
                        }
                    }
                    int i81 = 0;
                    int i82 = 0;
                    while (i81 < i21) {
                        ConstraintWidget constraintWidget13 = eVar.W0[i81];
                        int i83 = i81;
                        if (constraintWidget13 != null) {
                            if (i81 > 0) {
                                i82 += eVar.P0;
                            }
                            i82 = eVar.O(constraintWidget13, i31) + i82;
                        }
                        i81 = i83 + 1;
                    }
                    iArr7[0] = i79;
                    iArr7[1] = i82;
                    if (i65 == 0) {
                        if (i79 > i31 && i23 > 1) {
                            i23--;
                            z7 = z8;
                        }
                        z7 = true;
                    } else {
                        if (i82 > i31 && i21 > 1) {
                            i21--;
                            z7 = z8;
                        }
                        z7 = true;
                    }
                    i10 = i73;
                    iArr4 = iArr7;
                    constraintWidgetArr6 = constraintWidgetArr9;
                }
                iArr2 = iArr4;
                z6 = true;
                int[] iArr8 = eVar.Y0;
                iArr8[0] = i23;
                iArr8[1] = i21;
            }
            z5 = z6;
            i12 = i27;
            i13 = i28;
            i14 = i29;
            i11 = i15;
            iArr = iArr2;
            c6 = 0;
            r30 = z5;
            int i6322 = iArr[c6] + i12 + i13;
            int i6422 = iArr[r30] + i14 + i11;
            if (mode != 1073741824) {
            }
            if (mode2 != 1073741824) {
            }
            eVar.f17108y0 = size;
            eVar.f17109z0 = size2;
            eVar.J(size);
            eVar.G(size2);
            eVar.f17107x0 = eVar.f17117q0 > 0 ? r30 : false;
        } else {
            i11 = i30;
            int i84 = i31;
            iArr = iArr4;
            i12 = i27;
            i13 = i28;
            i14 = i29;
            z5 = true;
            r30 = 1;
            int i85 = i10;
            int i86 = eVar.U0;
            if (i85 != 0) {
                if (arrayList.size() == 0) {
                    dVar = new d(eVar, i86, eVar.H, eVar.I, eVar.J, eVar.K, i84);
                    arrayList.add(dVar);
                } else {
                    d dVar9 = (d) arrayList.get(0);
                    dVar9.f17086c = 0;
                    dVar9.f17085b = null;
                    dVar9.f17093l = 0;
                    dVar9.f17094m = 0;
                    dVar9.f17095n = 0;
                    dVar9.f17096o = 0;
                    dVar9.f17097p = 0;
                    dVar9.f(i86, eVar.H, eVar.I, eVar.J, eVar.K, eVar.f17105v0, eVar.f17101r0, eVar.f17106w0, eVar.f17102s0, i84);
                    dVar = dVar9;
                }
                for (int i87 = 0; i87 < i85; i87++) {
                    dVar.a(constraintWidgetArr6[i87]);
                }
                c6 = 0;
                iArr[0] = dVar.d();
                iArr[1] = dVar.c();
                int i63222 = iArr[c6] + i12 + i13;
                int i64222 = iArr[r30] + i14 + i11;
                if (mode != 1073741824) {
                }
                if (mode2 != 1073741824) {
                }
                eVar.f17108y0 = size;
                eVar.f17109z0 = size2;
                eVar.J(size);
                eVar.G(size2);
                eVar.f17107x0 = eVar.f17117q0 > 0 ? r30 : false;
            }
            c6 = 0;
            r30 = z5;
            int i632222 = iArr[c6] + i12 + i13;
            int i642222 = iArr[r30] + i14 + i11;
            if (mode != 1073741824) {
            }
            if (mode2 != 1073741824) {
            }
            eVar.f17108y0 = size;
            eVar.f17109z0 = size2;
            eVar.J(size);
            eVar.G(size2);
            eVar.f17107x0 = eVar.f17117q0 > 0 ? r30 : false;
        }
        setMeasuredDimension(eVar.f17108y0, eVar.f17109z0);
    }

    @Override // androidx.constraintlayout.widget.b, android.view.View
    public final void onMeasure(int i5, int i6) {
        l(this.G, i5, i6);
    }

    public void setFirstHorizontalBias(float f2) {
        this.G.K0 = f2;
        requestLayout();
    }

    public void setFirstHorizontalStyle(int i5) {
        this.G.E0 = i5;
        requestLayout();
    }

    public void setFirstVerticalBias(float f2) {
        this.G.L0 = f2;
        requestLayout();
    }

    public void setFirstVerticalStyle(int i5) {
        this.G.F0 = i5;
        requestLayout();
    }

    public void setHorizontalAlign(int i5) {
        this.G.Q0 = i5;
        requestLayout();
    }

    public void setHorizontalBias(float f2) {
        this.G.I0 = f2;
        requestLayout();
    }

    public void setHorizontalGap(int i5) {
        this.G.O0 = i5;
        requestLayout();
    }

    public void setHorizontalStyle(int i5) {
        this.G.C0 = i5;
        requestLayout();
    }

    public void setMaxElementsWrap(int i5) {
        this.G.T0 = i5;
        requestLayout();
    }

    public void setOrientation(int i5) {
        this.G.U0 = i5;
        requestLayout();
    }

    public void setPadding(int i5) {
        e eVar = this.G;
        eVar.f17101r0 = i5;
        eVar.f17102s0 = i5;
        eVar.f17103t0 = i5;
        eVar.f17104u0 = i5;
        requestLayout();
    }

    public void setPaddingBottom(int i5) {
        this.G.f17102s0 = i5;
        requestLayout();
    }

    public void setPaddingLeft(int i5) {
        this.G.f17105v0 = i5;
        requestLayout();
    }

    public void setPaddingRight(int i5) {
        this.G.f17106w0 = i5;
        requestLayout();
    }

    public void setPaddingTop(int i5) {
        this.G.f17101r0 = i5;
        requestLayout();
    }

    public void setVerticalAlign(int i5) {
        this.G.R0 = i5;
        requestLayout();
    }

    public void setVerticalBias(float f2) {
        this.G.J0 = f2;
        requestLayout();
    }

    public void setVerticalGap(int i5) {
        this.G.P0 = i5;
        requestLayout();
    }

    public void setVerticalStyle(int i5) {
        this.G.D0 = i5;
        requestLayout();
    }

    public void setWrapMode(int i5) {
        this.G.S0 = i5;
        requestLayout();
    }
}
