package androidx.constraintlayout.core.widgets;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import k2.r;
import r0.a;
import r0.b;
import r0.e;
import r0.g;
import r0.h;
import s0.c;
import s0.d;
import s0.f;
import s0.i;
import s0.o;
import s0.p;

/* loaded from: classes.dex */
public final class ConstraintWidgetContainer extends ConstraintWidget {
    public b[] A0;
    public b[] B0;
    public int C0;
    public boolean D0;
    public boolean E0;
    public WeakReference F0;
    public WeakReference G0;
    public WeakReference H0;
    public WeakReference I0;
    public final HashSet J0;
    public final s0.b K0;

    /* renamed from: p0, reason: collision with root package name */
    public ArrayList f1257p0 = new ArrayList();

    /* renamed from: q0, reason: collision with root package name */
    public final r f1258q0 = new r(this);

    /* renamed from: r0, reason: collision with root package name */
    public final f f1259r0;

    /* renamed from: s0, reason: collision with root package name */
    public int f1260s0;

    /* renamed from: t0, reason: collision with root package name */
    public c f1261t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f1262u0;

    /* renamed from: v0, reason: collision with root package name */
    public final p0.c f1263v0;

    /* renamed from: w0, reason: collision with root package name */
    public int f1264w0;

    /* renamed from: x0, reason: collision with root package name */
    public int f1265x0;

    /* renamed from: y0, reason: collision with root package name */
    public int f1266y0;

    /* renamed from: z0, reason: collision with root package name */
    public int f1267z0;

    public ConstraintWidgetContainer() {
        f fVar = new f();
        fVar.f17703b = true;
        fVar.f17704c = true;
        fVar.f17706e = new ArrayList();
        new ArrayList();
        fVar.f17707f = null;
        fVar.f17708g = new s0.b();
        fVar.f17709h = new ArrayList();
        fVar.a = this;
        fVar.f17705d = this;
        this.f1259r0 = fVar;
        this.f1261t0 = null;
        this.f1262u0 = false;
        this.f1263v0 = new p0.c();
        this.f1266y0 = 0;
        this.f1267z0 = 0;
        this.A0 = new b[4];
        this.B0 = new b[4];
        this.C0 = 257;
        this.D0 = false;
        this.E0 = false;
        this.F0 = null;
        this.G0 = null;
        this.H0 = null;
        this.I0 = null;
        this.J0 = new HashSet();
        this.K0 = new s0.b();
    }

    public static void Q(ConstraintWidget constraintWidget, c cVar, s0.b bVar) {
        int i5;
        int i6;
        if (cVar == null) {
            return;
        }
        int i10 = constraintWidget.f1230f0;
        int[] iArr = constraintWidget.f1249s;
        if (i10 == 8 || (constraintWidget instanceof r0.f) || (constraintWidget instanceof a)) {
            bVar.f17697e = 0;
            bVar.f17698f = 0;
            return;
        }
        int[] iArr2 = constraintWidget.f1245o0;
        bVar.a = iArr2[0];
        bVar.f17694b = iArr2[1];
        bVar.f17695c = constraintWidget.n();
        bVar.f17696d = constraintWidget.k();
        bVar.f17701i = false;
        bVar.j = 0;
        boolean z5 = bVar.a == 3;
        boolean z6 = bVar.f17694b == 3;
        boolean z7 = z5 && constraintWidget.V > 0.0f;
        boolean z8 = z6 && constraintWidget.V > 0.0f;
        if (z5 && constraintWidget.q(0) && constraintWidget.f1247q == 0 && !z7) {
            bVar.a = 2;
            if (z6 && constraintWidget.f1248r == 0) {
                bVar.a = 1;
            }
            z5 = false;
        }
        if (z6 && constraintWidget.q(1) && constraintWidget.f1248r == 0 && !z8) {
            bVar.f17694b = 2;
            if (z5 && constraintWidget.f1247q == 0) {
                bVar.f17694b = 1;
            }
            z6 = false;
        }
        if (constraintWidget.x()) {
            bVar.a = 1;
            z5 = false;
        }
        if (constraintWidget.y()) {
            bVar.f17694b = 1;
            z6 = false;
        }
        if (z7) {
            if (iArr[0] == 4) {
                bVar.a = 1;
            } else if (!z6) {
                if (bVar.f17694b == 1) {
                    i6 = bVar.f17696d;
                } else {
                    bVar.a = 2;
                    ((ConstraintLayout.Measurer) cVar).b(constraintWidget, bVar);
                    i6 = bVar.f17698f;
                }
                bVar.a = 1;
                bVar.f17695c = (int) (constraintWidget.V * i6);
            }
        }
        if (z8) {
            if (iArr[1] == 4) {
                bVar.f17694b = 1;
            } else if (!z5) {
                if (bVar.a == 1) {
                    i5 = bVar.f17695c;
                } else {
                    bVar.f17694b = 2;
                    ((ConstraintLayout.Measurer) cVar).b(constraintWidget, bVar);
                    i5 = bVar.f17697e;
                }
                bVar.f17694b = 1;
                if (constraintWidget.W == -1) {
                    bVar.f17696d = (int) (i5 / constraintWidget.V);
                } else {
                    bVar.f17696d = (int) (constraintWidget.V * i5);
                }
            }
        }
        ((ConstraintLayout.Measurer) cVar).b(constraintWidget, bVar);
        constraintWidget.J(bVar.f17697e);
        constraintWidget.G(bVar.f17698f);
        constraintWidget.D = bVar.f17700h;
        constraintWidget.D(bVar.f17699g);
        bVar.j = 0;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void C(r rVar) {
        super.C(rVar);
        int size = this.f1257p0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((ConstraintWidget) this.f1257p0.get(i5)).C(rVar);
        }
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void K(boolean z5, boolean z6) {
        super.K(z5, z6);
        int size = this.f1257p0.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((ConstraintWidget) this.f1257p0.get(i5)).K(z5, z6);
        }
    }

    public final void M(ConstraintWidget constraintWidget, int i5) {
        if (i5 == 0) {
            int i6 = this.f1266y0 + 1;
            b[] bVarArr = this.B0;
            if (i6 >= bVarArr.length) {
                this.B0 = (b[]) Arrays.copyOf(bVarArr, bVarArr.length * 2);
            }
            b[] bVarArr2 = this.B0;
            int i10 = this.f1266y0;
            bVarArr2[i10] = new b(constraintWidget, 0, this.f1262u0);
            this.f1266y0 = i10 + 1;
            return;
        }
        if (i5 == 1) {
            int i11 = this.f1267z0 + 1;
            b[] bVarArr3 = this.A0;
            if (i11 >= bVarArr3.length) {
                this.A0 = (b[]) Arrays.copyOf(bVarArr3, bVarArr3.length * 2);
            }
            b[] bVarArr4 = this.A0;
            int i12 = this.f1267z0;
            bVarArr4[i12] = new b(constraintWidget, 1, this.f1262u0);
            this.f1267z0 = i12 + 1;
        }
    }

    public final void N(p0.c cVar) {
        ConstraintWidgetContainer constraintWidgetContainer;
        p0.c cVar2;
        boolean R = R(64);
        b(cVar, R);
        int size = this.f1257p0.size();
        boolean z5 = false;
        for (int i5 = 0; i5 < size; i5++) {
            ConstraintWidget constraintWidget = (ConstraintWidget) this.f1257p0.get(i5);
            boolean[] zArr = constraintWidget.R;
            zArr[0] = false;
            zArr[1] = false;
            if (constraintWidget instanceof a) {
                z5 = true;
            }
        }
        if (z5) {
            for (int i6 = 0; i6 < size; i6++) {
                ConstraintWidget constraintWidget2 = (ConstraintWidget) this.f1257p0.get(i6);
                if (constraintWidget2 instanceof a) {
                    a aVar = (a) constraintWidget2;
                    for (int i10 = 0; i10 < aVar.f17117q0; i10++) {
                        ConstraintWidget constraintWidget3 = aVar.f17116p0[i10];
                        if (aVar.f17060s0 || constraintWidget3.c()) {
                            int i11 = aVar.f17059r0;
                            if (i11 == 0 || i11 == 1) {
                                constraintWidget3.R[0] = true;
                            } else if (i11 == 2 || i11 == 3) {
                                constraintWidget3.R[1] = true;
                            }
                        }
                    }
                }
            }
        }
        HashSet hashSet = this.J0;
        hashSet.clear();
        for (int i12 = 0; i12 < size; i12++) {
            ConstraintWidget constraintWidget4 = (ConstraintWidget) this.f1257p0.get(i12);
            constraintWidget4.getClass();
            boolean z6 = constraintWidget4 instanceof e;
            if (z6 || (constraintWidget4 instanceof r0.f)) {
                if (z6) {
                    hashSet.add(constraintWidget4);
                } else {
                    constraintWidget4.b(cVar, R);
                }
            }
        }
        while (hashSet.size() > 0) {
            int size2 = hashSet.size();
            Iterator it = hashSet.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                e eVar = (e) ((ConstraintWidget) it.next());
                for (int i13 = 0; i13 < eVar.f17117q0; i13++) {
                    if (hashSet.contains(eVar.f17116p0[i13])) {
                        eVar.b(cVar, R);
                        hashSet.remove(eVar);
                        break;
                    }
                }
            }
            if (size2 == hashSet.size()) {
                Iterator it2 = hashSet.iterator();
                while (it2.hasNext()) {
                    ((ConstraintWidget) it2.next()).b(cVar, R);
                }
                hashSet.clear();
            }
        }
        if (p0.c.f16272p) {
            HashSet hashSet2 = new HashSet();
            for (int i14 = 0; i14 < size; i14++) {
                ConstraintWidget constraintWidget5 = (ConstraintWidget) this.f1257p0.get(i14);
                constraintWidget5.getClass();
                if (!(constraintWidget5 instanceof e) && !(constraintWidget5 instanceof r0.f)) {
                    hashSet2.add(constraintWidget5);
                }
            }
            constraintWidgetContainer = this;
            cVar2 = cVar;
            constraintWidgetContainer.a(this, cVar2, hashSet2, this.f1245o0[0] == 2 ? 0 : 1, false);
            Iterator it3 = hashSet2.iterator();
            while (it3.hasNext()) {
                ConstraintWidget constraintWidget6 = (ConstraintWidget) it3.next();
                h.b(this, cVar2, constraintWidget6);
                constraintWidget6.b(cVar2, R);
            }
        } else {
            constraintWidgetContainer = this;
            cVar2 = cVar;
            for (int i15 = 0; i15 < size; i15++) {
                ConstraintWidget constraintWidget7 = (ConstraintWidget) constraintWidgetContainer.f1257p0.get(i15);
                if (constraintWidget7 instanceof ConstraintWidgetContainer) {
                    int[] iArr = constraintWidget7.f1245o0;
                    int i16 = iArr[0];
                    int i17 = iArr[1];
                    if (i16 == 2) {
                        constraintWidget7.H(1);
                    }
                    if (i17 == 2) {
                        constraintWidget7.I(1);
                    }
                    constraintWidget7.b(cVar2, R);
                    if (i16 == 2) {
                        constraintWidget7.H(i16);
                    }
                    if (i17 == 2) {
                        constraintWidget7.I(i17);
                    }
                } else {
                    h.b(this, cVar2, constraintWidget7);
                    if (!(constraintWidget7 instanceof e) && !(constraintWidget7 instanceof r0.f)) {
                        constraintWidget7.b(cVar2, R);
                    }
                }
            }
        }
        if (constraintWidgetContainer.f1266y0 > 0) {
            h.a(this, cVar2, null, 0);
        }
        if (constraintWidgetContainer.f1267z0 > 0) {
            h.a(this, cVar2, null, 1);
        }
    }

    public final boolean O(int i5, boolean z5) {
        boolean z6;
        boolean z7;
        f fVar = this.f1259r0;
        ArrayList arrayList = fVar.f17706e;
        ConstraintWidgetContainer constraintWidgetContainer = fVar.a;
        boolean z8 = false;
        int j = constraintWidgetContainer.j(0);
        int[] iArr = constraintWidgetContainer.f1245o0;
        int j5 = constraintWidgetContainer.j(1);
        int o6 = constraintWidgetContainer.o();
        int p3 = constraintWidgetContainer.p();
        if (z5 && (j == 2 || j5 == 2)) {
            Iterator it = arrayList.iterator();
            while (true) {
                if (!it.hasNext()) {
                    z7 = z5;
                    break;
                }
                p pVar = (p) it.next();
                if (pVar.f17731f == i5 && !pVar.k()) {
                    z7 = false;
                    break;
                }
            }
            if (i5 == 0) {
                if (z7 && j == 2) {
                    constraintWidgetContainer.H(1);
                    constraintWidgetContainer.J(fVar.d(constraintWidgetContainer, 0));
                    constraintWidgetContainer.f1225d.f17730e.d(constraintWidgetContainer.n());
                }
            } else if (z7 && j5 == 2) {
                constraintWidgetContainer.I(1);
                constraintWidgetContainer.G(fVar.d(constraintWidgetContainer, 1));
                constraintWidgetContainer.f1227e.f17730e.d(constraintWidgetContainer.k());
            }
        }
        if (i5 == 0) {
            int i6 = iArr[0];
            if (i6 == 1 || i6 == 4) {
                int n6 = constraintWidgetContainer.n() + o6;
                constraintWidgetContainer.f1225d.f17734i.d(n6);
                constraintWidgetContainer.f1225d.f17730e.d(n6 - o6);
                z6 = true;
            }
            z6 = false;
        } else {
            int i10 = iArr[1];
            if (i10 == 1 || i10 == 4) {
                int k = constraintWidgetContainer.k() + p3;
                constraintWidgetContainer.f1227e.f17734i.d(k);
                constraintWidgetContainer.f1227e.f17730e.d(k - p3);
                z6 = true;
            }
            z6 = false;
        }
        fVar.g();
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            p pVar2 = (p) it2.next();
            if (pVar2.f17731f == i5 && (pVar2.f17727b != constraintWidgetContainer || pVar2.f17732g)) {
                pVar2.e();
            }
        }
        Iterator it3 = arrayList.iterator();
        while (true) {
            if (!it3.hasNext()) {
                z8 = true;
                break;
            }
            p pVar3 = (p) it3.next();
            if (pVar3.f17731f == i5 && (z6 || pVar3.f17727b != constraintWidgetContainer)) {
                if (!pVar3.f17733h.j) {
                    break;
                }
                if (!pVar3.f17734i.j) {
                    break;
                }
                if (!(pVar3 instanceof d) && !pVar3.f17730e.j) {
                    break;
                }
            }
        }
        constraintWidgetContainer.H(j);
        constraintWidgetContainer.I(j5);
        return z8;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:215:0x06b6  */
    /* JADX WARN: Removed duplicated region for block: B:224:0x06d3  */
    /* JADX WARN: Removed duplicated region for block: B:263:0x07d0  */
    /* JADX WARN: Removed duplicated region for block: B:277:0x082e A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:282:0x083b A[LOOP:14: B:281:0x0839->B:282:0x083b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:295:0x08a1  */
    /* JADX WARN: Removed duplicated region for block: B:298:0x08c1  */
    /* JADX WARN: Removed duplicated region for block: B:300:0x08ce  */
    /* JADX WARN: Removed duplicated region for block: B:313:0x0909  */
    /* JADX WARN: Removed duplicated region for block: B:316:0x090b  */
    /* JADX WARN: Removed duplicated region for block: B:319:0x0905  */
    /* JADX WARN: Removed duplicated region for block: B:320:0x08ca  */
    /* JADX WARN: Removed duplicated region for block: B:321:0x08ae  */
    /* JADX WARN: Removed duplicated region for block: B:322:0x0811  */
    /* JADX WARN: Removed duplicated region for block: B:364:0x091a  */
    /* JADX WARN: Removed duplicated region for block: B:416:0x03a1  */
    /* JADX WARN: Removed duplicated region for block: B:428:0x03c7  */
    /* JADX WARN: Removed duplicated region for block: B:599:0x061c  */
    /* JADX WARN: Removed duplicated region for block: B:617:0x0648 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:620:0x064d  */
    /* JADX WARN: Removed duplicated region for block: B:627:0x0663  */
    /* JADX WARN: Type inference failed for: r5v10, types: [boolean] */
    /* JADX WARN: Type inference failed for: r5v12 */
    /* JADX WARN: Type inference failed for: r5v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void P() {
        Object[] objArr;
        r0.c cVar;
        int i5;
        boolean z5;
        char c6;
        int i6;
        boolean z6;
        boolean z7;
        boolean z8;
        r0.c cVar2;
        boolean[] zArr;
        boolean z10;
        int max;
        ?? r5;
        boolean z11;
        int max2;
        boolean z12;
        int i10;
        int i11;
        int max3;
        int max4;
        o oVar;
        o oVar2;
        int b10;
        int i12;
        o oVar3;
        o oVar4;
        boolean z13;
        ArrayList arrayList;
        ArrayList arrayList2;
        c cVar3;
        ArrayList arrayList3;
        int i13;
        boolean z14;
        this.X = 0;
        this.Y = 0;
        this.D0 = false;
        this.E0 = false;
        int size = this.f1257p0.size();
        int max5 = Math.max(0, n());
        int max6 = Math.max(0, k());
        int[] iArr = this.f1245o0;
        int i14 = iArr[1];
        int i15 = iArr[0];
        int i16 = this.f1260s0;
        r0.c cVar4 = this.I;
        r0.c cVar5 = this.H;
        if (i16 == 0 && h.c(this.C0, 1)) {
            c cVar6 = this.f1261t0;
            int i17 = iArr[0];
            int i18 = iArr[1];
            B();
            ArrayList arrayList4 = this.f1257p0;
            int size2 = arrayList4.size();
            for (int i19 = 0; i19 < size2; i19++) {
                ((ConstraintWidget) arrayList4.get(i19)).B();
            }
            boolean z15 = this.f1262u0;
            if (i17 == 1) {
                E(0, n());
            } else {
                cVar5.l(0);
                this.X = 0;
            }
            int i20 = 0;
            boolean z16 = false;
            boolean z17 = false;
            while (i20 < size2) {
                int[] iArr2 = iArr;
                ConstraintWidget constraintWidget = (ConstraintWidget) arrayList4.get(i20);
                int i21 = i20;
                if (constraintWidget instanceof r0.f) {
                    r0.f fVar = (r0.f) constraintWidget;
                    z14 = z16;
                    if (fVar.f17114t0 == 1) {
                        int i22 = fVar.f17111q0;
                        if (i22 != -1) {
                            fVar.M(i22);
                        } else if (fVar.f17112r0 != -1 && x()) {
                            fVar.M(n() - fVar.f17112r0);
                        } else if (x()) {
                            fVar.M((int) ((fVar.f17110p0 * n()) + 0.5f));
                        }
                        z14 = true;
                    }
                } else {
                    z14 = z16;
                    if ((constraintWidget instanceof a) && ((a) constraintWidget).P() == 0) {
                        z16 = z14;
                        z17 = true;
                        i20 = i21 + 1;
                        iArr = iArr2;
                    }
                }
                z16 = z14;
                i20 = i21 + 1;
                iArr = iArr2;
            }
            objArr = iArr;
            if (z16) {
                for (int i23 = 0; i23 < size2; i23 = i13 + 1) {
                    ConstraintWidget constraintWidget2 = (ConstraintWidget) arrayList4.get(i23);
                    if (constraintWidget2 instanceof r0.f) {
                        r0.f fVar2 = (r0.f) constraintWidget2;
                        i13 = i23;
                        if (fVar2.f17114t0 == 1) {
                            i.c(0, fVar2, cVar6, z15);
                        }
                    } else {
                        i13 = i23;
                    }
                }
            }
            i.c(0, this, cVar6, z15);
            if (z17) {
                for (int i24 = 0; i24 < size2; i24++) {
                    ConstraintWidget constraintWidget3 = (ConstraintWidget) arrayList4.get(i24);
                    if (constraintWidget3 instanceof a) {
                        a aVar = (a) constraintWidget3;
                        if (aVar.P() == 0 && aVar.O()) {
                            i.c(1, aVar, cVar6, z15);
                        }
                    }
                }
            }
            if (i18 == 1) {
                F(0, k());
            } else {
                cVar4.l(0);
                this.Y = 0;
            }
            int i25 = 0;
            boolean z18 = false;
            boolean z19 = false;
            while (i25 < size2) {
                ConstraintWidget constraintWidget4 = (ConstraintWidget) arrayList4.get(i25);
                int i26 = i25;
                if (constraintWidget4 instanceof r0.f) {
                    r0.f fVar3 = (r0.f) constraintWidget4;
                    if (fVar3.f17114t0 == 0) {
                        int i27 = fVar3.f17111q0;
                        if (i27 != -1) {
                            fVar3.M(i27);
                        } else if (fVar3.f17112r0 != -1 && y()) {
                            fVar3.M(k() - fVar3.f17112r0);
                        } else if (y()) {
                            fVar3.M((int) ((fVar3.f17110p0 * k()) + 0.5f));
                        }
                        z18 = true;
                    }
                } else if ((constraintWidget4 instanceof a) && ((a) constraintWidget4).P() == 1) {
                    z19 = true;
                }
                i25 = i26 + 1;
            }
            if (z18) {
                for (int i28 = 0; i28 < size2; i28++) {
                    ConstraintWidget constraintWidget5 = (ConstraintWidget) arrayList4.get(i28);
                    if (constraintWidget5 instanceof r0.f) {
                        r0.f fVar4 = (r0.f) constraintWidget5;
                        if (fVar4.f17114t0 == 0) {
                            i.i(1, fVar4, cVar6);
                        }
                    }
                }
            }
            i.i(0, this, cVar6);
            if (z19) {
                for (int i29 = 0; i29 < size2; i29++) {
                    ConstraintWidget constraintWidget6 = (ConstraintWidget) arrayList4.get(i29);
                    if (constraintWidget6 instanceof a) {
                        a aVar2 = (a) constraintWidget6;
                        if (aVar2.P() == 1 && aVar2.O()) {
                            i.i(1, aVar2, cVar6);
                        }
                    }
                }
            }
            for (int i30 = 0; i30 < size2; i30++) {
                ConstraintWidget constraintWidget7 = (ConstraintWidget) arrayList4.get(i30);
                if (constraintWidget7.w() && i.a(constraintWidget7)) {
                    Q(constraintWidget7, cVar6, i.a);
                    if (!(constraintWidget7 instanceof r0.f)) {
                        i.c(0, constraintWidget7, cVar6, z15);
                        i.i(0, constraintWidget7, cVar6);
                    } else if (((r0.f) constraintWidget7).f17114t0 == 0) {
                        i.i(0, constraintWidget7, cVar6);
                    } else {
                        i.c(0, constraintWidget7, cVar6, z15);
                    }
                }
            }
            for (int i31 = 0; i31 < size; i31++) {
                ConstraintWidget constraintWidget8 = (ConstraintWidget) this.f1257p0.get(i31);
                if (constraintWidget8.w() && !(constraintWidget8 instanceof r0.f) && !(constraintWidget8 instanceof a) && !(constraintWidget8 instanceof e) && !constraintWidget8.E) {
                    int j = constraintWidget8.j(0);
                    int j5 = constraintWidget8.j(1);
                    if (j != 3 || constraintWidget8.f1247q == 1 || j5 != 3 || constraintWidget8.f1248r == 1) {
                        Q(constraintWidget8, this.f1261t0, new s0.b());
                    }
                }
            }
        } else {
            objArr = iArr;
        }
        p0.c cVar7 = this.f1263v0;
        if (size > 2 && ((i15 == 2 || i14 == 2) && h.c(this.C0, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET))) {
            c cVar8 = this.f1261t0;
            ArrayList arrayList5 = this.f1257p0;
            int size3 = arrayList5.size();
            int i32 = 0;
            while (true) {
                if (i32 < size3) {
                    ConstraintWidget constraintWidget9 = (ConstraintWidget) arrayList5.get(i32);
                    char c8 = objArr[0];
                    char c10 = objArr[1];
                    int i33 = i32;
                    int[] iArr3 = constraintWidget9.f1245o0;
                    cVar = cVar5;
                    if (!i.h(c8, c10, iArr3[0], iArr3[1]) || (constraintWidget9 instanceof e)) {
                        break;
                    }
                    i32 = i33 + 1;
                    cVar5 = cVar;
                } else {
                    cVar = cVar5;
                    int i34 = 0;
                    ArrayList arrayList6 = null;
                    ArrayList arrayList7 = null;
                    ArrayList arrayList8 = null;
                    ArrayList arrayList9 = null;
                    ArrayList arrayList10 = null;
                    ArrayList arrayList11 = null;
                    while (i34 < size3) {
                        int i35 = i34;
                        ConstraintWidget constraintWidget10 = (ConstraintWidget) arrayList5.get(i34);
                        ArrayList arrayList12 = arrayList6;
                        char c11 = objArr[0];
                        ArrayList arrayList13 = arrayList7;
                        char c12 = objArr[1];
                        ArrayList arrayList14 = arrayList8;
                        int[] iArr4 = constraintWidget10.f1245o0;
                        ArrayList arrayList15 = arrayList9;
                        if (!i.h(c11, c12, iArr4[0], iArr4[1])) {
                            Q(constraintWidget10, cVar8, this.K0);
                        }
                        boolean z20 = constraintWidget10 instanceof r0.f;
                        if (z20) {
                            r0.f fVar5 = (r0.f) constraintWidget10;
                            if (fVar5.f17114t0 == 0) {
                                arrayList8 = arrayList14 == null ? new ArrayList() : arrayList14;
                                arrayList8.add(fVar5);
                            } else {
                                arrayList8 = arrayList14;
                            }
                            z13 = z20;
                            if (fVar5.f17114t0 == 1) {
                                arrayList = arrayList12 == null ? new ArrayList() : arrayList12;
                                arrayList.add(fVar5);
                            } else {
                                arrayList = arrayList12;
                            }
                        } else {
                            z13 = z20;
                            arrayList = arrayList12;
                            arrayList8 = arrayList14;
                        }
                        if (!(constraintWidget10 instanceof g)) {
                            arrayList2 = arrayList;
                            cVar3 = cVar8;
                            arrayList7 = arrayList13;
                        } else if (constraintWidget10 instanceof a) {
                            a aVar3 = (a) constraintWidget10;
                            if (aVar3.P() == 0) {
                                arrayList3 = arrayList13 == null ? new ArrayList() : arrayList13;
                                arrayList3.add(aVar3);
                            } else {
                                arrayList3 = arrayList13;
                            }
                            arrayList2 = arrayList;
                            cVar3 = cVar8;
                            if (aVar3.P() == 1) {
                                ArrayList arrayList16 = arrayList15 == null ? new ArrayList() : arrayList15;
                                arrayList16.add(aVar3);
                                arrayList15 = arrayList16;
                            }
                            arrayList7 = arrayList3;
                        } else {
                            arrayList2 = arrayList;
                            cVar3 = cVar8;
                            g gVar = (g) constraintWidget10;
                            arrayList7 = arrayList13 == null ? new ArrayList() : arrayList13;
                            arrayList7.add(gVar);
                            arrayList9 = arrayList15 == null ? new ArrayList() : arrayList15;
                            arrayList9.add(gVar);
                            if (constraintWidget10.H.f17081f == null && constraintWidget10.J.f17081f == null && !z13 && !(constraintWidget10 instanceof a)) {
                                if (arrayList10 == null) {
                                    arrayList10 = new ArrayList();
                                }
                                ArrayList arrayList17 = arrayList10;
                                arrayList17.add(constraintWidget10);
                                arrayList10 = arrayList17;
                            }
                            if (constraintWidget10.I.f17081f == null && constraintWidget10.K.f17081f == null && constraintWidget10.L.f17081f == null && !z13 && !(constraintWidget10 instanceof a)) {
                                if (arrayList11 == null) {
                                    arrayList11 = new ArrayList();
                                }
                                ArrayList arrayList18 = arrayList11;
                                arrayList18.add(constraintWidget10);
                                arrayList11 = arrayList18;
                            }
                            i34 = i35 + 1;
                            arrayList6 = arrayList2;
                            cVar8 = cVar3;
                        }
                        arrayList9 = arrayList15;
                        if (constraintWidget10.H.f17081f == null) {
                            if (arrayList10 == null) {
                            }
                            ArrayList arrayList172 = arrayList10;
                            arrayList172.add(constraintWidget10);
                            arrayList10 = arrayList172;
                        }
                        if (constraintWidget10.I.f17081f == null) {
                            if (arrayList11 == null) {
                            }
                            ArrayList arrayList182 = arrayList11;
                            arrayList182.add(constraintWidget10);
                            arrayList11 = arrayList182;
                        }
                        i34 = i35 + 1;
                        arrayList6 = arrayList2;
                        cVar8 = cVar3;
                    }
                    ArrayList arrayList19 = arrayList6;
                    ArrayList arrayList20 = arrayList7;
                    ArrayList arrayList21 = arrayList8;
                    ArrayList arrayList22 = arrayList9;
                    ArrayList arrayList23 = new ArrayList();
                    if (arrayList19 != null) {
                        Iterator it = arrayList19.iterator();
                        while (it.hasNext()) {
                            i.b((r0.f) it.next(), 0, arrayList23, null);
                        }
                    }
                    o oVar5 = null;
                    int i36 = 0;
                    if (arrayList20 != null) {
                        Iterator it2 = arrayList20.iterator();
                        while (it2.hasNext()) {
                            g gVar2 = (g) it2.next();
                            o b11 = i.b(gVar2, i36, arrayList23, oVar5);
                            gVar2.M(i36, arrayList23, b11);
                            b11.a(arrayList23);
                            oVar5 = null;
                            i36 = 0;
                        }
                    }
                    HashSet hashSet = i(2).a;
                    if (hashSet != null) {
                        Iterator it3 = hashSet.iterator();
                        while (it3.hasNext()) {
                            i.b(((r0.c) it3.next()).f17079d, 0, arrayList23, null);
                        }
                    }
                    HashSet hashSet2 = i(4).a;
                    if (hashSet2 != null) {
                        Iterator it4 = hashSet2.iterator();
                        while (it4.hasNext()) {
                            i.b(((r0.c) it4.next()).f17079d, 0, arrayList23, null);
                        }
                    }
                    HashSet hashSet3 = i(7).a;
                    if (hashSet3 != null) {
                        Iterator it5 = hashSet3.iterator();
                        while (it5.hasNext()) {
                            i.b(((r0.c) it5.next()).f17079d, 0, arrayList23, null);
                        }
                    }
                    o oVar6 = null;
                    if (arrayList10 != null) {
                        Iterator it6 = arrayList10.iterator();
                        while (it6.hasNext()) {
                            i.b((ConstraintWidget) it6.next(), 0, arrayList23, null);
                        }
                    }
                    if (arrayList21 != null) {
                        Iterator it7 = arrayList21.iterator();
                        while (it7.hasNext()) {
                            i.b((r0.f) it7.next(), 1, arrayList23, null);
                        }
                    }
                    int i37 = 1;
                    if (arrayList22 != null) {
                        Iterator it8 = arrayList22.iterator();
                        while (it8.hasNext()) {
                            g gVar3 = (g) it8.next();
                            o b12 = i.b(gVar3, i37, arrayList23, oVar6);
                            gVar3.M(i37, arrayList23, b12);
                            b12.a(arrayList23);
                            oVar6 = null;
                            i37 = 1;
                        }
                    }
                    HashSet hashSet4 = i(3).a;
                    if (hashSet4 != null) {
                        Iterator it9 = hashSet4.iterator();
                        while (it9.hasNext()) {
                            i.b(((r0.c) it9.next()).f17079d, 1, arrayList23, null);
                        }
                    }
                    HashSet hashSet5 = i(6).a;
                    if (hashSet5 != null) {
                        Iterator it10 = hashSet5.iterator();
                        while (it10.hasNext()) {
                            i.b(((r0.c) it10.next()).f17079d, 1, arrayList23, null);
                        }
                    }
                    HashSet hashSet6 = i(5).a;
                    if (hashSet6 != null) {
                        Iterator it11 = hashSet6.iterator();
                        while (it11.hasNext()) {
                            i.b(((r0.c) it11.next()).f17079d, 1, arrayList23, null);
                        }
                    }
                    HashSet hashSet7 = i(7).a;
                    if (hashSet7 != null) {
                        Iterator it12 = hashSet7.iterator();
                        while (it12.hasNext()) {
                            i.b(((r0.c) it12.next()).f17079d, 1, arrayList23, null);
                        }
                    }
                    boolean z21 = true;
                    if (arrayList11 != null) {
                        Iterator it13 = arrayList11.iterator();
                        while (it13.hasNext()) {
                            i.b((ConstraintWidget) it13.next(), 1, arrayList23, null);
                        }
                    }
                    int i38 = 0;
                    while (i38 < size3) {
                        ConstraintWidget constraintWidget11 = (ConstraintWidget) arrayList5.get(i38);
                        int[] iArr5 = constraintWidget11.f1245o0;
                        boolean z22 = z21;
                        if (iArr5[0] == 3 && iArr5[z22 ? 1 : 0] == 3) {
                            int i39 = constraintWidget11.f1241m0;
                            int size4 = arrayList23.size();
                            int i40 = 0;
                            while (true) {
                                if (i40 >= size4) {
                                    i12 = i38;
                                    oVar3 = null;
                                    break;
                                }
                                i12 = i38;
                                oVar3 = (o) arrayList23.get(i40);
                                int i41 = size4;
                                if (i39 == oVar3.f17723b) {
                                    break;
                                }
                                i40++;
                                size4 = i41;
                                i38 = i12;
                            }
                            int i42 = constraintWidget11.f1243n0;
                            int size5 = arrayList23.size();
                            int i43 = 0;
                            while (true) {
                                if (i43 >= size5) {
                                    oVar4 = null;
                                    break;
                                }
                                oVar4 = (o) arrayList23.get(i43);
                                int i44 = size5;
                                if (i42 == oVar4.f17723b) {
                                    break;
                                }
                                i43++;
                                size5 = i44;
                            }
                            if (oVar3 != null && oVar4 != null) {
                                oVar3.c(0, oVar4);
                                oVar4.f17724c = 2;
                                arrayList23.remove(oVar3);
                            }
                        } else {
                            i12 = i38;
                        }
                        i38 = i12 + 1;
                        z21 = true;
                    }
                    if (arrayList23.size() > 1) {
                        int i45 = 0;
                        if (objArr[0] == 2) {
                            Iterator it14 = arrayList23.iterator();
                            int i46 = 0;
                            oVar = null;
                            while (it14.hasNext()) {
                                o oVar7 = (o) it14.next();
                                if (oVar7.f17724c != 1) {
                                    int b13 = oVar7.b(cVar7, i45);
                                    if (b13 > i46) {
                                        oVar = oVar7;
                                        i46 = b13;
                                    }
                                    i45 = 0;
                                }
                            }
                            if (oVar != null) {
                                H(1);
                                J(i46);
                                if (objArr[1] == 2) {
                                    Iterator it15 = arrayList23.iterator();
                                    int i47 = 0;
                                    oVar2 = null;
                                    while (it15.hasNext()) {
                                        o oVar8 = (o) it15.next();
                                        if (oVar8.f17724c != 0 && (b10 = oVar8.b(cVar7, 1)) > i47) {
                                            oVar2 = oVar8;
                                            i47 = b10;
                                        }
                                    }
                                    if (oVar2 != null) {
                                        I(1);
                                        G(i47);
                                        if (oVar == null || oVar2 != null) {
                                            if (i15 == 2) {
                                                if (max5 >= n() || max5 <= 0) {
                                                    max5 = n();
                                                } else {
                                                    J(max5);
                                                    this.D0 = true;
                                                }
                                            }
                                            if (i14 == 2) {
                                                if (max6 >= k() || max6 <= 0) {
                                                    max6 = k();
                                                } else {
                                                    G(max6);
                                                    this.E0 = true;
                                                }
                                            }
                                            i5 = max5;
                                            z5 = true;
                                        }
                                    }
                                }
                                oVar2 = null;
                                if (oVar == null) {
                                }
                                if (i15 == 2) {
                                }
                                if (i14 == 2) {
                                }
                                i5 = max5;
                                z5 = true;
                            }
                        }
                        oVar = null;
                        if (objArr[1] == 2) {
                        }
                        oVar2 = null;
                        if (oVar == null) {
                        }
                        if (i15 == 2) {
                        }
                        if (i14 == 2) {
                        }
                        i5 = max5;
                        z5 = true;
                    }
                }
            }
            boolean z23 = !R(64) || R(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            cVar7.getClass();
            cVar7.f16280g = false;
            if (this.C0 == 0 && z23) {
                c6 = 1;
                cVar7.f16280g = true;
            } else {
                c6 = 1;
            }
            ArrayList arrayList24 = this.f1257p0;
            boolean z24 = objArr[0] != 2 || objArr[c6] == 2;
            this.f1266y0 = 0;
            this.f1267z0 = 0;
            for (i6 = 0; i6 < size; i6++) {
                ConstraintWidget constraintWidget12 = (ConstraintWidget) this.f1257p0.get(i6);
                if (constraintWidget12 instanceof ConstraintWidgetContainer) {
                    ((ConstraintWidgetContainer) constraintWidget12).P();
                }
            }
            boolean R = R(64);
            z6 = z5;
            int i48 = 0;
            z7 = true;
            while (z7) {
                int i49 = i48 + 1;
                try {
                    cVar7.t();
                    this.f1266y0 = 0;
                    this.f1267z0 = 0;
                    g(cVar7);
                    for (int i50 = 0; i50 < size; i50++) {
                        ((ConstraintWidget) this.f1257p0.get(i50)).g(cVar7);
                    }
                    N(cVar7);
                    try {
                        WeakReference weakReference = this.F0;
                        if (weakReference == null || weakReference.get() == null) {
                            z8 = z24;
                        } else {
                            z8 = z24;
                            try {
                                cVar7.f(cVar7.k((r0.c) this.F0.get()), cVar7.k(cVar4), 0, 5);
                                this.F0 = null;
                            } catch (Exception e9) {
                                e = e9;
                                z7 = true;
                                e.printStackTrace();
                                cVar2 = cVar4;
                                System.out.println("EXCEPTION : " + e);
                                boolean[] zArr2 = h.a;
                                if (z7) {
                                }
                                if (z8) {
                                }
                                max = Math.max(this.a0, n());
                                if (max > n()) {
                                }
                                max2 = Math.max(this.f1222b0, k());
                                if (max2 > k()) {
                                }
                                if (!z12) {
                                }
                                z6 = z12;
                                i10 = 8;
                                if (i49 <= i10) {
                                }
                                i48 = i49;
                                z24 = z8;
                                cVar4 = cVar2;
                            }
                        }
                        WeakReference weakReference2 = this.H0;
                        if (weakReference2 != null && weakReference2.get() != null) {
                            cVar7.f(cVar7.k(this.K), cVar7.k((r0.c) this.H0.get()), 0, 5);
                            this.H0 = null;
                        }
                        WeakReference weakReference3 = this.G0;
                        if (weakReference3 != null && weakReference3.get() != null) {
                            r0.c cVar9 = cVar;
                            try {
                                cVar = cVar9;
                                cVar7.f(cVar7.k((r0.c) this.G0.get()), cVar7.k(cVar9), 0, 5);
                                this.G0 = null;
                            } catch (Exception e10) {
                                e = e10;
                                cVar = cVar9;
                                z7 = true;
                                e.printStackTrace();
                                cVar2 = cVar4;
                                System.out.println("EXCEPTION : " + e);
                                boolean[] zArr22 = h.a;
                                if (z7) {
                                }
                                if (z8) {
                                    int i51 = 0;
                                    int i52 = 0;
                                    while (i11 < size) {
                                    }
                                    max3 = Math.max(this.a0, i51);
                                    max4 = Math.max(this.f1222b0, i52);
                                    if (i15 == 2) {
                                        J(max3);
                                        objArr[0] = 2;
                                        z6 = true;
                                        z10 = true;
                                    }
                                    if (i14 == 2) {
                                        G(max4);
                                        objArr[1] = 2;
                                        z6 = true;
                                        z10 = true;
                                    }
                                }
                                max = Math.max(this.a0, n());
                                if (max > n()) {
                                }
                                max2 = Math.max(this.f1222b0, k());
                                if (max2 > k()) {
                                }
                                if (!z12) {
                                }
                                z6 = z12;
                                i10 = 8;
                                if (i49 <= i10) {
                                }
                                i48 = i49;
                                z24 = z8;
                                cVar4 = cVar2;
                            }
                        }
                        WeakReference weakReference4 = this.I0;
                        if (weakReference4 != null && weakReference4.get() != null) {
                            try {
                            } catch (Exception e11) {
                                e = e11;
                            }
                            try {
                                cVar7.f(cVar7.k(this.J), cVar7.k((r0.c) this.I0.get()), 0, 5);
                            } catch (Exception e12) {
                                e = e12;
                                z7 = true;
                                e.printStackTrace();
                                cVar2 = cVar4;
                                System.out.println("EXCEPTION : " + e);
                                boolean[] zArr222 = h.a;
                                if (z7) {
                                }
                                if (z8) {
                                }
                                max = Math.max(this.a0, n());
                                if (max > n()) {
                                }
                                max2 = Math.max(this.f1222b0, k());
                                if (max2 > k()) {
                                }
                                if (!z12) {
                                }
                                z6 = z12;
                                i10 = 8;
                                if (i49 <= i10) {
                                }
                                i48 = i49;
                                z24 = z8;
                                cVar4 = cVar2;
                            }
                            try {
                                this.I0 = null;
                            } catch (Exception e13) {
                                e = e13;
                                z7 = true;
                                e.printStackTrace();
                                cVar2 = cVar4;
                                System.out.println("EXCEPTION : " + e);
                                boolean[] zArr2222 = h.a;
                                if (z7) {
                                }
                                if (z8) {
                                }
                                max = Math.max(this.a0, n());
                                if (max > n()) {
                                }
                                max2 = Math.max(this.f1222b0, k());
                                if (max2 > k()) {
                                }
                                if (!z12) {
                                }
                                z6 = z12;
                                i10 = 8;
                                if (i49 <= i10) {
                                }
                                i48 = i49;
                                z24 = z8;
                                cVar4 = cVar2;
                            }
                        }
                        cVar7.p();
                        cVar2 = cVar4;
                        z7 = true;
                    } catch (Exception e14) {
                        e = e14;
                        z8 = z24;
                    }
                } catch (Exception e15) {
                    e = e15;
                    z8 = z24;
                }
                boolean[] zArr22222 = h.a;
                if (z7) {
                    zArr22222[2] = false;
                    boolean R2 = R(64);
                    L(cVar7, R2);
                    int size6 = this.f1257p0.size();
                    int i53 = 0;
                    z10 = false;
                    while (i53 < size6) {
                        ConstraintWidget constraintWidget13 = (ConstraintWidget) this.f1257p0.get(i53);
                        constraintWidget13.L(cVar7, R2);
                        boolean[] zArr3 = zArr22222;
                        boolean z25 = R2;
                        if (constraintWidget13.f1233h != -1 || constraintWidget13.f1234i != -1) {
                            z10 = true;
                        }
                        i53++;
                        zArr22222 = zArr3;
                        R2 = z25;
                    }
                    zArr = zArr22222;
                } else {
                    zArr = zArr22222;
                    L(cVar7, R);
                    for (int i54 = 0; i54 < size; i54++) {
                        ((ConstraintWidget) this.f1257p0.get(i54)).L(cVar7, R);
                    }
                    z10 = false;
                }
                if (z8 && i49 < 8 && zArr[2]) {
                    int i512 = 0;
                    int i522 = 0;
                    for (i11 = 0; i11 < size; i11++) {
                        ConstraintWidget constraintWidget14 = (ConstraintWidget) this.f1257p0.get(i11);
                        i512 = Math.max(i512, constraintWidget14.n() + constraintWidget14.X);
                        i522 = Math.max(i522, constraintWidget14.k() + constraintWidget14.Y);
                    }
                    max3 = Math.max(this.a0, i512);
                    max4 = Math.max(this.f1222b0, i522);
                    if (i15 == 2 && n() < max3) {
                        J(max3);
                        objArr[0] = 2;
                        z6 = true;
                        z10 = true;
                    }
                    if (i14 == 2 && k() < max4) {
                        G(max4);
                        objArr[1] = 2;
                        z6 = true;
                        z10 = true;
                    }
                }
                max = Math.max(this.a0, n());
                if (max > n()) {
                    J(max);
                    r5 = 1;
                    objArr[0] = 1;
                    z10 = true;
                    z11 = true;
                } else {
                    r5 = 1;
                    z11 = z6;
                }
                max2 = Math.max(this.f1222b0, k());
                if (max2 > k()) {
                    G(max2);
                    objArr[r5] = r5;
                    z12 = r5;
                    z10 = z12;
                } else {
                    z12 = z11;
                }
                if (!z12) {
                    if (objArr[0] == 2 && i5 > 0 && n() > i5) {
                        this.D0 = r5;
                        objArr[0] = r5;
                        J(i5);
                        z12 = r5;
                        z10 = z12;
                    }
                    if (objArr[r5] == 2 && max6 > 0 && k() > max6) {
                        this.E0 = r5;
                        objArr[r5] = r5;
                        G(max6);
                        i10 = 8;
                        z6 = true;
                        z10 = true;
                        z7 = i49 <= i10 ? false : z10;
                        i48 = i49;
                        z24 = z8;
                        cVar4 = cVar2;
                    }
                }
                z6 = z12;
                i10 = 8;
                if (i49 <= i10) {
                }
                i48 = i49;
                z24 = z8;
                cVar4 = cVar2;
            }
            this.f1257p0 = arrayList24;
            if (z6) {
                objArr[0] = i15;
                objArr[1] = i14;
            }
            C(cVar7.f16283l);
        }
        cVar = cVar5;
        i5 = max5;
        z5 = false;
        if (R(64)) {
        }
        cVar7.getClass();
        cVar7.f16280g = false;
        if (this.C0 == 0) {
        }
        c6 = 1;
        ArrayList arrayList242 = this.f1257p0;
        if (objArr[0] != 2) {
        }
        this.f1266y0 = 0;
        this.f1267z0 = 0;
        while (i6 < size) {
        }
        boolean R3 = R(64);
        z6 = z5;
        int i482 = 0;
        z7 = true;
        while (z7) {
        }
        this.f1257p0 = arrayList242;
        if (z6) {
        }
        C(cVar7.f16283l);
    }

    public final boolean R(int i5) {
        return (this.C0 & i5) == i5;
    }

    @Override // androidx.constraintlayout.core.widgets.ConstraintWidget
    public final void z() {
        this.f1263v0.t();
        this.f1264w0 = 0;
        this.f1265x0 = 0;
        this.f1257p0.clear();
        super.z();
    }
}
