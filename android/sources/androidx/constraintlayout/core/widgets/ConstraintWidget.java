package androidx.constraintlayout.core.widgets;

import android.view.View;
import androidx.constraintlayout.core.Metrics;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import k2.r;
import p0.b;
import p0.e;
import r0.a;
import r0.c;
import r0.f;
import r0.h;
import s0.d;
import s0.g;
import s0.l;
import s0.n;

/* loaded from: classes.dex */
public class ConstraintWidget {
    public float A;
    public final int[] B;
    public float C;
    public boolean D;
    public boolean E;
    public int F;
    public int G;
    public final c H;
    public final c I;
    public final c J;
    public final c K;
    public final c L;
    public final c M;
    public final c N;
    public final c O;
    public final c[] P;
    public final ArrayList Q;
    public final boolean[] R;
    public ConstraintWidget S;
    public int T;
    public int U;
    public float V;
    public int W;
    public int X;
    public int Y;
    public int Z;
    public int a0;

    /* renamed from: b, reason: collision with root package name */
    public d f1221b;

    /* renamed from: b0, reason: collision with root package name */
    public int f1222b0;

    /* renamed from: c, reason: collision with root package name */
    public d f1223c;

    /* renamed from: c0, reason: collision with root package name */
    public float f1224c0;

    /* renamed from: d0, reason: collision with root package name */
    public float f1226d0;

    /* renamed from: e0, reason: collision with root package name */
    public View f1228e0;

    /* renamed from: f0, reason: collision with root package name */
    public int f1230f0;

    /* renamed from: g0, reason: collision with root package name */
    public String f1232g0;
    public int h0;

    /* renamed from: i0, reason: collision with root package name */
    public int f1235i0;
    public boolean j;

    /* renamed from: j0, reason: collision with root package name */
    public final float[] f1236j0;
    public boolean k;

    /* renamed from: k0, reason: collision with root package name */
    public final ConstraintWidget[] f1237k0;

    /* renamed from: l, reason: collision with root package name */
    public boolean f1238l;

    /* renamed from: l0, reason: collision with root package name */
    public final ConstraintWidget[] f1239l0;

    /* renamed from: m, reason: collision with root package name */
    public boolean f1240m;

    /* renamed from: m0, reason: collision with root package name */
    public int f1241m0;

    /* renamed from: n, reason: collision with root package name */
    public int f1242n;

    /* renamed from: n0, reason: collision with root package name */
    public int f1243n0;

    /* renamed from: o, reason: collision with root package name */
    public int f1244o;

    /* renamed from: o0, reason: collision with root package name */
    public final int[] f1245o0;

    /* renamed from: p, reason: collision with root package name */
    public int f1246p;

    /* renamed from: q, reason: collision with root package name */
    public int f1247q;

    /* renamed from: r, reason: collision with root package name */
    public int f1248r;

    /* renamed from: s, reason: collision with root package name */
    public final int[] f1249s;

    /* renamed from: t, reason: collision with root package name */
    public int f1250t;

    /* renamed from: u, reason: collision with root package name */
    public int f1251u;

    /* renamed from: v, reason: collision with root package name */
    public float f1252v;

    /* renamed from: w, reason: collision with root package name */
    public int f1253w;

    /* renamed from: x, reason: collision with root package name */
    public int f1254x;

    /* renamed from: y, reason: collision with root package name */
    public float f1255y;

    /* renamed from: z, reason: collision with root package name */
    public int f1256z;
    public boolean a = false;

    /* renamed from: d, reason: collision with root package name */
    public l f1225d = null;

    /* renamed from: e, reason: collision with root package name */
    public n f1227e = null;

    /* renamed from: f, reason: collision with root package name */
    public final boolean[] f1229f = {true, true};

    /* renamed from: g, reason: collision with root package name */
    public boolean f1231g = true;

    /* renamed from: h, reason: collision with root package name */
    public int f1233h = -1;

    /* renamed from: i, reason: collision with root package name */
    public int f1234i = -1;

    public ConstraintWidget() {
        new HashMap();
        this.j = false;
        this.k = false;
        this.f1238l = false;
        this.f1240m = false;
        this.f1242n = -1;
        this.f1244o = -1;
        this.f1246p = 0;
        this.f1247q = 0;
        this.f1248r = 0;
        this.f1249s = new int[2];
        this.f1250t = 0;
        this.f1251u = 0;
        this.f1252v = 1.0f;
        this.f1253w = 0;
        this.f1254x = 0;
        this.f1255y = 1.0f;
        this.f1256z = -1;
        this.A = 1.0f;
        this.B = new int[]{Integer.MAX_VALUE, Integer.MAX_VALUE};
        this.C = 0.0f;
        this.D = false;
        this.E = false;
        this.F = 0;
        this.G = 0;
        c cVar = new c(this, 2);
        this.H = cVar;
        c cVar2 = new c(this, 3);
        this.I = cVar2;
        c cVar3 = new c(this, 4);
        this.J = cVar3;
        c cVar4 = new c(this, 5);
        this.K = cVar4;
        c cVar5 = new c(this, 6);
        this.L = cVar5;
        c cVar6 = new c(this, 8);
        this.M = cVar6;
        c cVar7 = new c(this, 9);
        this.N = cVar7;
        c cVar8 = new c(this, 7);
        this.O = cVar8;
        this.P = new c[]{cVar, cVar3, cVar2, cVar4, cVar5, cVar8};
        ArrayList arrayList = new ArrayList();
        this.Q = arrayList;
        this.R = new boolean[2];
        this.f1245o0 = new int[]{1, 1};
        this.S = null;
        this.T = 0;
        this.U = 0;
        this.V = 0.0f;
        this.W = -1;
        this.X = 0;
        this.Y = 0;
        this.Z = 0;
        this.f1224c0 = 0.5f;
        this.f1226d0 = 0.5f;
        this.f1230f0 = 0;
        this.f1232g0 = null;
        this.h0 = 0;
        this.f1235i0 = 0;
        this.f1236j0 = new float[]{-1.0f, -1.0f};
        this.f1237k0 = new ConstraintWidget[]{null, null};
        this.f1239l0 = new ConstraintWidget[]{null, null};
        this.f1241m0 = -1;
        this.f1243n0 = -1;
        arrayList.add(cVar);
        arrayList.add(cVar2);
        arrayList.add(cVar3);
        arrayList.add(cVar4);
        arrayList.add(cVar6);
        arrayList.add(cVar7);
        arrayList.add(cVar8);
        arrayList.add(cVar5);
    }

    public final void A() {
        ConstraintWidget constraintWidget = this.S;
        if (constraintWidget != null && (constraintWidget instanceof ConstraintWidgetContainer)) {
            ((ConstraintWidgetContainer) constraintWidget).getClass();
        }
        ArrayList arrayList = this.Q;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((c) arrayList.get(i5)).j();
        }
    }

    public final void B() {
        this.j = false;
        this.k = false;
        this.f1238l = false;
        this.f1240m = false;
        ArrayList arrayList = this.Q;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            c cVar = (c) arrayList.get(i5);
            cVar.f17078c = false;
            cVar.f17077b = 0;
        }
    }

    public void C(r rVar) {
        this.H.k();
        this.I.k();
        this.J.k();
        this.K.k();
        this.L.k();
        this.O.k();
        this.M.k();
        this.N.k();
    }

    public final void D(int i5) {
        this.Z = i5;
        this.D = i5 > 0;
    }

    public final void E(int i5, int i6) {
        if (this.j) {
            return;
        }
        this.H.l(i5);
        this.J.l(i6);
        this.X = i5;
        this.T = i6 - i5;
        this.j = true;
    }

    public final void F(int i5, int i6) {
        if (this.k) {
            return;
        }
        this.I.l(i5);
        this.K.l(i6);
        this.Y = i5;
        this.U = i6 - i5;
        if (this.D) {
            this.L.l(i5 + this.Z);
        }
        this.k = true;
    }

    public final void G(int i5) {
        this.U = i5;
        int i6 = this.f1222b0;
        if (i5 < i6) {
            this.U = i6;
        }
    }

    public final void H(int i5) {
        this.f1245o0[0] = i5;
    }

    public final void I(int i5) {
        this.f1245o0[1] = i5;
    }

    public final void J(int i5) {
        this.T = i5;
        int i6 = this.a0;
        if (i5 < i6) {
            this.T = i6;
        }
    }

    public void K(boolean z5, boolean z6) {
        int i5;
        int i6;
        l lVar = this.f1225d;
        boolean z7 = z5 & lVar.f17732g;
        n nVar = this.f1227e;
        boolean z8 = z6 & nVar.f17732g;
        int i10 = lVar.f17733h.f17715g;
        int i11 = nVar.f17733h.f17715g;
        int i12 = lVar.f17734i.f17715g;
        int i13 = nVar.f17734i.f17715g;
        int i14 = i13 - i11;
        if (i12 - i10 < 0 || i14 < 0 || i10 == Integer.MIN_VALUE || i10 == Integer.MAX_VALUE || i11 == Integer.MIN_VALUE || i11 == Integer.MAX_VALUE || i12 == Integer.MIN_VALUE || i12 == Integer.MAX_VALUE || i13 == Integer.MIN_VALUE || i13 == Integer.MAX_VALUE) {
            i12 = 0;
            i13 = 0;
            i10 = 0;
            i11 = 0;
        }
        int i15 = i12 - i10;
        int i16 = i13 - i11;
        if (z7) {
            this.X = i10;
        }
        if (z8) {
            this.Y = i11;
        }
        if (this.f1230f0 == 8) {
            this.T = 0;
            this.U = 0;
            return;
        }
        int[] iArr = this.f1245o0;
        if (z7) {
            if (iArr[0] == 1 && i15 < (i6 = this.T)) {
                i15 = i6;
            }
            this.T = i15;
            int i17 = this.a0;
            if (i15 < i17) {
                this.T = i17;
            }
        }
        if (z8) {
            if (iArr[1] == 1 && i16 < (i5 = this.U)) {
                i16 = i5;
            }
            this.U = i16;
            int i18 = this.f1222b0;
            if (i16 < i18) {
                this.U = i18;
            }
        }
    }

    public void L(p0.c cVar, boolean z5) {
        int i5;
        int i6;
        n nVar;
        l lVar;
        cVar.getClass();
        int n6 = p0.c.n(this.H);
        int n10 = p0.c.n(this.I);
        int n11 = p0.c.n(this.J);
        int n12 = p0.c.n(this.K);
        if (z5 && (lVar = this.f1225d) != null) {
            g gVar = lVar.f17733h;
            if (gVar.j) {
                g gVar2 = lVar.f17734i;
                if (gVar2.j) {
                    n6 = gVar.f17715g;
                    n11 = gVar2.f17715g;
                }
            }
        }
        if (z5 && (nVar = this.f1227e) != null) {
            g gVar3 = nVar.f17733h;
            if (gVar3.j) {
                g gVar4 = nVar.f17734i;
                if (gVar4.j) {
                    n10 = gVar3.f17715g;
                    n12 = gVar4.f17715g;
                }
            }
        }
        int i10 = n12 - n10;
        if (n11 - n6 < 0 || i10 < 0 || n6 == Integer.MIN_VALUE || n6 == Integer.MAX_VALUE || n10 == Integer.MIN_VALUE || n10 == Integer.MAX_VALUE || n11 == Integer.MIN_VALUE || n11 == Integer.MAX_VALUE || n12 == Integer.MIN_VALUE || n12 == Integer.MAX_VALUE) {
            n6 = 0;
            n10 = 0;
            n11 = 0;
            n12 = 0;
        }
        int i11 = n11 - n6;
        int i12 = n12 - n10;
        this.X = n6;
        this.Y = n10;
        if (this.f1230f0 == 8) {
            this.T = 0;
            this.U = 0;
            return;
        }
        int[] iArr = this.f1245o0;
        int i13 = iArr[0];
        if (i13 == 1 && i11 < (i6 = this.T)) {
            i11 = i6;
        }
        if (iArr[1] == 1 && i12 < (i5 = this.U)) {
            i12 = i5;
        }
        this.T = i11;
        this.U = i12;
        int i14 = this.f1222b0;
        if (i12 < i14) {
            this.U = i14;
        }
        int i15 = this.a0;
        if (i11 < i15) {
            this.T = i15;
        }
        int i16 = this.f1251u;
        if (i16 > 0 && i13 == 3) {
            this.T = Math.min(this.T, i16);
        }
        int i17 = this.f1254x;
        if (i17 > 0 && iArr[1] == 3) {
            this.U = Math.min(this.U, i17);
        }
        int i18 = this.T;
        if (i11 != i18) {
            this.f1233h = i18;
        }
        int i19 = this.U;
        if (i12 != i19) {
            this.f1234i = i19;
        }
    }

    public final void a(ConstraintWidgetContainer constraintWidgetContainer, p0.c cVar, HashSet hashSet, int i5, boolean z5) {
        if (z5) {
            if (!hashSet.contains(this)) {
                return;
            }
            h.b(constraintWidgetContainer, cVar, this);
            hashSet.remove(this);
            b(cVar, constraintWidgetContainer.R(64));
        }
        if (i5 == 0) {
            HashSet hashSet2 = this.H.a;
            if (hashSet2 != null) {
                Iterator it = hashSet2.iterator();
                while (it.hasNext()) {
                    ((c) it.next()).f17079d.a(constraintWidgetContainer, cVar, hashSet, i5, true);
                }
            }
            HashSet hashSet3 = this.J.a;
            if (hashSet3 != null) {
                Iterator it2 = hashSet3.iterator();
                while (it2.hasNext()) {
                    ((c) it2.next()).f17079d.a(constraintWidgetContainer, cVar, hashSet, i5, true);
                }
                return;
            }
            return;
        }
        HashSet hashSet4 = this.I.a;
        if (hashSet4 != null) {
            Iterator it3 = hashSet4.iterator();
            while (it3.hasNext()) {
                ((c) it3.next()).f17079d.a(constraintWidgetContainer, cVar, hashSet, i5, true);
            }
        }
        HashSet hashSet5 = this.K.a;
        if (hashSet5 != null) {
            Iterator it4 = hashSet5.iterator();
            while (it4.hasNext()) {
                ((c) it4.next()).f17079d.a(constraintWidgetContainer, cVar, hashSet, i5, true);
            }
        }
        HashSet hashSet6 = this.L.a;
        if (hashSet6 != null) {
            Iterator it5 = hashSet6.iterator();
            while (it5.hasNext()) {
                ((c) it5.next()).f17079d.a(constraintWidgetContainer, cVar, hashSet, i5, true);
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x0044, code lost:
    
        if (r12 != 3) goto L17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:263:0x05f8, code lost:
    
        if (r59.f1230f0 == r14) goto L380;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:100:0x02bf  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x02d1  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x02df  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x0300  */
    /* JADX WARN: Removed duplicated region for block: B:176:0x041e  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x042b  */
    /* JADX WARN: Removed duplicated region for block: B:188:0x043f  */
    /* JADX WARN: Removed duplicated region for block: B:192:0x0448  */
    /* JADX WARN: Removed duplicated region for block: B:195:0x0466  */
    /* JADX WARN: Removed duplicated region for block: B:216:0x04d7  */
    /* JADX WARN: Removed duplicated region for block: B:219:0x04e4  */
    /* JADX WARN: Removed duplicated region for block: B:223:0x051e  */
    /* JADX WARN: Removed duplicated region for block: B:226:0x055c  */
    /* JADX WARN: Removed duplicated region for block: B:242:0x05c1  */
    /* JADX WARN: Removed duplicated region for block: B:245:0x05c5  */
    /* JADX WARN: Removed duplicated region for block: B:269:0x068e  */
    /* JADX WARN: Removed duplicated region for block: B:275:0x06ec  */
    /* JADX WARN: Removed duplicated region for block: B:296:0x04ef  */
    /* JADX WARN: Removed duplicated region for block: B:297:0x04de  */
    /* JADX WARN: Removed duplicated region for block: B:299:0x044a  */
    /* JADX WARN: Removed duplicated region for block: B:303:0x0427  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0180  */
    /* JADX WARN: Removed duplicated region for block: B:331:0x0408  */
    /* JADX WARN: Removed duplicated region for block: B:332:0x02e2  */
    /* JADX WARN: Removed duplicated region for block: B:333:0x02d8  */
    /* JADX WARN: Removed duplicated region for block: B:334:0x02c2  */
    /* JADX WARN: Removed duplicated region for block: B:337:0x02a9  */
    /* JADX WARN: Removed duplicated region for block: B:341:0x009e  */
    /* JADX WARN: Removed duplicated region for block: B:361:0x00fd  */
    /* JADX WARN: Removed duplicated region for block: B:398:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x022a  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0234  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x02b6  */
    /* JADX WARN: Type inference failed for: r17v10, types: [boolean] */
    /* JADX WARN: Type inference failed for: r17v16 */
    /* JADX WARN: Type inference failed for: r17v17 */
    /* JADX WARN: Type inference failed for: r17v2 */
    /* JADX WARN: Type inference failed for: r17v20 */
    /* JADX WARN: Type inference failed for: r18v26 */
    /* JADX WARN: Type inference failed for: r18v6 */
    /* JADX WARN: Type inference failed for: r18v7, types: [boolean] */
    /* JADX WARN: Type inference failed for: r27v10 */
    /* JADX WARN: Type inference failed for: r27v11 */
    /* JADX WARN: Type inference failed for: r27v12 */
    /* JADX WARN: Type inference failed for: r27v4 */
    /* JADX WARN: Type inference failed for: r27v5, types: [boolean] */
    /* JADX WARN: Type inference failed for: r59v0, types: [androidx.constraintlayout.core.widgets.ConstraintWidget] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b(p0.c cVar, boolean z5) {
        boolean z6;
        boolean z7;
        boolean z8;
        ?? r17;
        int i5;
        boolean z10;
        boolean z11;
        ConstraintWidget constraintWidget;
        ConstraintWidget constraintWidget2;
        Metrics metrics;
        boolean[] zArr;
        c cVar2;
        boolean[] zArr2;
        boolean[] zArr3;
        c cVar3;
        boolean z12;
        boolean z13;
        boolean z14;
        int i6;
        int i10;
        int[] iArr;
        float f2;
        c cVar4;
        e eVar;
        int i11;
        int i12;
        int i13;
        boolean z15;
        int i14;
        boolean z16;
        boolean z17;
        int i15;
        c cVar5;
        boolean z18;
        char c6;
        boolean z19;
        int i16;
        int[] iArr2;
        c cVar6;
        boolean z20;
        int[] iArr3;
        e eVar2;
        e eVar3;
        boolean z21;
        int[] iArr4;
        e eVar4;
        boolean z22;
        boolean z23;
        int i17;
        c cVar7;
        e eVar5;
        c cVar8;
        e eVar6;
        int i18;
        boolean[] zArr4;
        e eVar7;
        e eVar8;
        e eVar9;
        int i19;
        int i20;
        boolean z24;
        int i21;
        e eVar10;
        e eVar11;
        ?? r27;
        ?? r18;
        n nVar;
        g gVar;
        ConstraintWidget constraintWidget3;
        boolean z25;
        l lVar;
        g gVar2;
        int i22;
        int i23;
        boolean u5;
        int i24;
        boolean v5;
        l lVar2;
        boolean z26;
        p0.c cVar9 = cVar;
        c cVar10 = this.H;
        e k = cVar9.k(cVar10);
        c cVar11 = this.J;
        e k5 = cVar9.k(cVar11);
        c cVar12 = this.I;
        e k7 = cVar9.k(cVar12);
        c cVar13 = this.K;
        e k10 = cVar9.k(cVar13);
        c cVar14 = this.L;
        e k11 = cVar9.k(cVar14);
        ConstraintWidget constraintWidget4 = this.S;
        if (constraintWidget4 != null) {
            int[] iArr5 = constraintWidget4.f1245o0;
            r17 = 0;
            z6 = false;
            r17 = 0;
            z8 = iArr5[0] == 2;
            boolean z27 = iArr5[1] == 2;
            int i25 = this.f1246p;
            if (i25 != 1) {
                if (i25 == 2) {
                    z8 = false;
                }
                z7 = z27;
            } else {
                z7 = false;
            }
            i5 = this.f1230f0;
            boolean[] zArr5 = this.R;
            boolean z28 = z7;
            if (i5 != 8) {
                ArrayList arrayList = this.Q;
                int size = arrayList.size();
                z10 = z8;
                int i26 = r17;
                while (true) {
                    if (i26 < size) {
                        int i27 = size;
                        HashSet hashSet = ((c) arrayList.get(i26)).a;
                        if (hashSet != null && hashSet.size() > 0) {
                            break;
                        }
                        i26++;
                        size = i27;
                    } else if (!zArr5[r17] && !zArr5[1]) {
                        return;
                    }
                }
            } else {
                z10 = z8;
            }
            z11 = this.j;
            if (!z11 || this.k) {
                if (z11) {
                    cVar9.d(k, this.X);
                    cVar9.d(k5, this.X + this.T);
                    if (z10 && (constraintWidget2 = this.S) != null) {
                        ConstraintWidgetContainer constraintWidgetContainer = (ConstraintWidgetContainer) constraintWidget2;
                        WeakReference weakReference = constraintWidgetContainer.G0;
                        if (weakReference == null || weakReference.get() == null || cVar10.d() > ((c) constraintWidgetContainer.G0.get()).d()) {
                            constraintWidgetContainer.G0 = new WeakReference(cVar10);
                        }
                        WeakReference weakReference2 = constraintWidgetContainer.I0;
                        if (weakReference2 == null || weakReference2.get() == null || cVar11.d() > ((c) constraintWidgetContainer.I0.get()).d()) {
                            constraintWidgetContainer.I0 = new WeakReference(cVar11);
                        }
                    }
                }
                if (this.k) {
                    cVar9.d(k7, this.Y);
                    cVar9.d(k10, this.Y + this.U);
                    HashSet hashSet2 = cVar14.a;
                    if (hashSet2 != null && hashSet2.size() > 0) {
                        cVar9.d(k11, this.Y + this.Z);
                    }
                    if (z28 && (constraintWidget = this.S) != null) {
                        ConstraintWidgetContainer constraintWidgetContainer2 = (ConstraintWidgetContainer) constraintWidget;
                        WeakReference weakReference3 = constraintWidgetContainer2.F0;
                        if (weakReference3 == null || weakReference3.get() == null || cVar12.d() > ((c) constraintWidgetContainer2.F0.get()).d()) {
                            constraintWidgetContainer2.F0 = new WeakReference(cVar12);
                        }
                        WeakReference weakReference4 = constraintWidgetContainer2.H0;
                        if (weakReference4 == null || weakReference4.get() == null || cVar13.d() > ((c) constraintWidgetContainer2.H0.get()).d()) {
                            constraintWidgetContainer2.H0 = new WeakReference(cVar13);
                        }
                    }
                }
                if (this.j && this.k) {
                    boolean z29 = r17;
                    this.j = z29;
                    this.k = z29;
                    return;
                }
            }
            metrics = p0.c.f16274r;
            if (metrics != null) {
                metrics.f1220h++;
            }
            zArr = this.f1229f;
            if (z5 || (lVar2 = this.f1225d) == null) {
                cVar2 = cVar14;
                zArr2 = zArr;
            } else {
                cVar2 = cVar14;
                n nVar2 = this.f1227e;
                zArr2 = zArr;
                if (nVar2 != null) {
                    g gVar3 = lVar2.f17733h;
                    zArr3 = zArr5;
                    if (gVar3.j && lVar2.f17734i.j && nVar2.f17733h.j && nVar2.f17734i.j) {
                        if (metrics != null) {
                            metrics.f1216d++;
                        }
                        cVar9.d(k, gVar3.f17715g);
                        cVar9.d(k5, this.f1225d.f17734i.f17715g);
                        cVar9.d(k7, this.f1227e.f17733h.f17715g);
                        cVar9.d(k10, this.f1227e.f17734i.f17715g);
                        cVar9.d(k11, this.f1227e.k.f17715g);
                        if (this.S != null) {
                            if (z10 && zArr2[0] && !u()) {
                                cVar9.f(cVar9.k(this.S.J), k5, 0, 8);
                            }
                            if (z28 && zArr2[1] && !v()) {
                                z26 = false;
                                cVar9.f(cVar9.k(this.S.K), k10, 0, 8);
                                this.j = z26;
                                this.k = z26;
                                return;
                            }
                        }
                        z26 = false;
                        this.j = z26;
                        this.k = z26;
                        return;
                    }
                    if (metrics != null) {
                        metrics.f1217e++;
                    }
                    if (this.S != null) {
                        if (t(0)) {
                            ((ConstraintWidgetContainer) this.S).M(this, 0);
                            u5 = true;
                            i24 = 1;
                        } else {
                            u5 = u();
                            i24 = 1;
                        }
                        if (t(i24)) {
                            ((ConstraintWidgetContainer) this.S).M(this, i24);
                            v5 = true;
                        } else {
                            v5 = v();
                        }
                        if (!u5 && z10 && this.f1230f0 != 8 && cVar10.f17081f == null && cVar11.f17081f == null) {
                            cVar9.f(cVar9.k(this.S.J), k5, 0, 1);
                        }
                        if (!v5 && z28 && this.f1230f0 != 8 && cVar12.f17081f == null && cVar13.f17081f == null && cVar2 == null) {
                            cVar9.f(cVar9.k(this.S.K), k10, 0, 1);
                        }
                        boolean z30 = u5;
                        cVar3 = cVar11;
                        z12 = z28;
                        z14 = v5;
                        z13 = z30;
                    } else {
                        cVar3 = cVar11;
                        z12 = z28;
                        z13 = false;
                        z14 = false;
                    }
                    i6 = this.T;
                    i10 = this.a0;
                    if (i6 >= i10) {
                        i10 = i6;
                    }
                    int i28 = this.U;
                    int i29 = this.f1222b0;
                    int i30 = i28 < i29 ? i29 : i28;
                    iArr = this.f1245o0;
                    int i31 = iArr[0];
                    boolean z31 = z12;
                    boolean z32 = i31 != 3;
                    int i32 = iArr[1];
                    boolean z33 = i32 != 3;
                    int i33 = this.W;
                    this.f1256z = i33;
                    f2 = this.V;
                    this.A = f2;
                    int i34 = this.f1247q;
                    int i35 = this.f1248r;
                    if (f2 > 0.0f) {
                        cVar4 = cVar13;
                        if (this.f1230f0 != 8) {
                            int i36 = (i31 == 3 && i34 == 0) ? 3 : i34;
                            if (i32 == 3 && i35 == 0) {
                                eVar = k10;
                                i23 = 3;
                            } else {
                                eVar = k10;
                                i23 = i35;
                            }
                            if (i31 == 3 && i32 == 3 && i36 == 3 && i23 == 3) {
                                if (i33 == -1) {
                                    if (z32 && !z33) {
                                        this.f1256z = 0;
                                    } else if (!z32 && z33) {
                                        this.f1256z = 1;
                                        if (i33 == -1) {
                                            this.A = 1.0f / f2;
                                        }
                                    }
                                }
                                if (this.f1256z == 0 && (!cVar12.h() || !cVar4.h())) {
                                    this.f1256z = 1;
                                } else if (this.f1256z == 1 && (!cVar10.h() || !cVar3.h())) {
                                    this.f1256z = 0;
                                }
                                if (this.f1256z == -1 && (!cVar12.h() || !cVar4.h() || !cVar10.h() || !cVar3.h())) {
                                    if (cVar12.h() && cVar4.h()) {
                                        this.f1256z = 0;
                                    } else if (cVar10.h() && cVar3.h()) {
                                        this.A = 1.0f / this.A;
                                        this.f1256z = 1;
                                    }
                                }
                                if (this.f1256z == -1) {
                                    int i37 = this.f1250t;
                                    if (i37 > 0 && this.f1253w == 0) {
                                        this.f1256z = 0;
                                    } else if (i37 == 0 && this.f1253w > 0) {
                                        this.A = 1.0f / this.A;
                                        this.f1256z = 1;
                                    }
                                }
                            } else if (i31 == 3 && i36 == 3) {
                                this.f1256z = 0;
                                i10 = (int) (i28 * f2);
                                if (i32 != 3) {
                                    i13 = i23;
                                    i11 = i30;
                                    i12 = 4;
                                    z15 = false;
                                    int[] iArr6 = this.f1249s;
                                    iArr6[0] = i12;
                                    iArr6[1] = i13;
                                    if (z15) {
                                    }
                                    z16 = false;
                                    if (z15) {
                                    }
                                    if (iArr[0] != 2) {
                                    }
                                    if (!z17) {
                                    }
                                    cVar5 = this.O;
                                    z18 = !cVar5.h();
                                    c6 = '\b';
                                    z19 = zArr3[0];
                                    boolean z34 = zArr3[1];
                                    i16 = this.f1242n;
                                    iArr2 = this.B;
                                    if (i16 != 2) {
                                    }
                                    cVar6 = cVar5;
                                    z20 = z31;
                                    iArr3 = iArr;
                                    eVar2 = k;
                                    eVar3 = k5;
                                    z21 = z18;
                                    iArr4 = iArr2;
                                    eVar4 = k11;
                                    z22 = z13;
                                    z23 = z10;
                                    i17 = i12;
                                    cVar7 = cVar2;
                                    eVar5 = k7;
                                    cVar8 = cVar4;
                                    eVar6 = eVar;
                                    i18 = i13;
                                    zArr4 = zArr2;
                                    if (z5) {
                                    }
                                    eVar7 = eVar5;
                                    eVar8 = eVar6;
                                    eVar9 = eVar4;
                                    i19 = 0;
                                    i20 = 8;
                                    z24 = true;
                                    i21 = 1;
                                    if (this.f1244o == 2) {
                                    }
                                    if (i21 != 0) {
                                    }
                                    eVar10 = eVar7;
                                    eVar11 = eVar8;
                                    if (z15) {
                                    }
                                    if (cVar6.h()) {
                                    }
                                    this.j = false;
                                    this.k = false;
                                }
                            } else if (i32 == 3 && i23 == 3) {
                                this.f1256z = 1;
                                if (i33 == -1) {
                                    this.A = 1.0f / f2;
                                }
                                i11 = (int) (this.A * i6);
                                i12 = i36;
                                if (i31 == 3) {
                                    i13 = i23;
                                    z15 = true;
                                    int[] iArr62 = this.f1249s;
                                    iArr62[0] = i12;
                                    iArr62[1] = i13;
                                    if (z15) {
                                    }
                                    z16 = false;
                                    if (z15) {
                                    }
                                    if (iArr[0] != 2) {
                                    }
                                    if (!z17) {
                                    }
                                    cVar5 = this.O;
                                    z18 = !cVar5.h();
                                    c6 = '\b';
                                    z19 = zArr3[0];
                                    boolean z342 = zArr3[1];
                                    i16 = this.f1242n;
                                    iArr2 = this.B;
                                    if (i16 != 2) {
                                    }
                                    cVar6 = cVar5;
                                    z20 = z31;
                                    iArr3 = iArr;
                                    eVar2 = k;
                                    eVar3 = k5;
                                    z21 = z18;
                                    iArr4 = iArr2;
                                    eVar4 = k11;
                                    z22 = z13;
                                    z23 = z10;
                                    i17 = i12;
                                    cVar7 = cVar2;
                                    eVar5 = k7;
                                    cVar8 = cVar4;
                                    eVar6 = eVar;
                                    i18 = i13;
                                    zArr4 = zArr2;
                                    if (z5) {
                                    }
                                    eVar7 = eVar5;
                                    eVar8 = eVar6;
                                    eVar9 = eVar4;
                                    i19 = 0;
                                    i20 = 8;
                                    z24 = true;
                                    i21 = 1;
                                    if (this.f1244o == 2) {
                                    }
                                    if (i21 != 0) {
                                    }
                                    eVar10 = eVar7;
                                    eVar11 = eVar8;
                                    if (z15) {
                                    }
                                    if (cVar6.h()) {
                                    }
                                    this.j = false;
                                    this.k = false;
                                }
                                i13 = 4;
                                z15 = false;
                                int[] iArr622 = this.f1249s;
                                iArr622[0] = i12;
                                iArr622[1] = i13;
                                if (z15) {
                                    int i38 = this.f1256z;
                                    i14 = -1;
                                    if (i38 == 0 || i38 == -1) {
                                        z16 = true;
                                        boolean z35 = !z15 && ((i22 = this.f1256z) == 1 || i22 == i14);
                                        z17 = iArr[0] != 2 && (this instanceof ConstraintWidgetContainer);
                                        i15 = !z17 ? 0 : i10;
                                        cVar5 = this.O;
                                        z18 = !cVar5.h();
                                        c6 = '\b';
                                        z19 = zArr3[0];
                                        boolean z3422 = zArr3[1];
                                        i16 = this.f1242n;
                                        iArr2 = this.B;
                                        if (i16 != 2 && !this.j) {
                                            if (z5 && (lVar = this.f1225d) != null) {
                                                gVar2 = lVar.f17733h;
                                                if (gVar2.j || !lVar.f17734i.j) {
                                                    c6 = '\b';
                                                } else if (z5) {
                                                    cVar9.d(k, gVar2.f17715g);
                                                    cVar9.d(k5, this.f1225d.f17734i.f17715g);
                                                    if (this.S != null && z10 && zArr2[0] && !u()) {
                                                        cVar9.f(cVar9.k(this.S.J), k5, 0, 8);
                                                    }
                                                }
                                            }
                                            ConstraintWidget constraintWidget5 = this.S;
                                            e k12 = constraintWidget5 == null ? cVar9.k(constraintWidget5.J) : null;
                                            ConstraintWidget constraintWidget6 = this.S;
                                            e k13 = constraintWidget6 == null ? cVar9.k(constraintWidget6.H) : null;
                                            z23 = z10;
                                            i17 = i12;
                                            i18 = i13;
                                            z22 = z13;
                                            boolean z36 = z18;
                                            iArr4 = iArr2;
                                            cVar6 = cVar5;
                                            z20 = z31;
                                            iArr3 = iArr;
                                            eVar5 = k7;
                                            eVar3 = k5;
                                            cVar8 = cVar4;
                                            eVar6 = eVar;
                                            eVar2 = k;
                                            cVar7 = cVar2;
                                            eVar4 = k11;
                                            zArr4 = zArr2;
                                            cVar9 = cVar;
                                            d(cVar9, true, z23, z20, zArr2[0], k13, k12, iArr[0], z17, this.H, this.J, this.X, i15, this.a0, iArr2[0], this.f1224c0, z16, iArr[1] == 3, z22, z14, z19, i17, i18, this.f1250t, this.f1251u, this.f1252v, z36);
                                            z21 = z36;
                                            if (z5 && (nVar = this.f1227e) != null) {
                                                gVar = nVar.f17733h;
                                                if (gVar.j && nVar.f17734i.j) {
                                                    int i39 = gVar.f17715g;
                                                    eVar7 = eVar5;
                                                    cVar9.d(eVar7, i39);
                                                    eVar8 = eVar6;
                                                    cVar9.d(eVar8, this.f1227e.f17734i.f17715g);
                                                    eVar9 = eVar4;
                                                    cVar9.d(eVar9, this.f1227e.k.f17715g);
                                                    constraintWidget3 = this.S;
                                                    if (constraintWidget3 == null && !z14 && z20) {
                                                        z25 = true;
                                                        z25 = true;
                                                        if (zArr4[1]) {
                                                            i19 = 0;
                                                            i20 = 8;
                                                            cVar9.f(cVar9.k(constraintWidget3.K), eVar8, 0, 8);
                                                        } else {
                                                            i19 = 0;
                                                            i20 = 8;
                                                        }
                                                    } else {
                                                        i19 = 0;
                                                        i20 = 8;
                                                        z25 = true;
                                                    }
                                                    i21 = i19;
                                                    z24 = z25;
                                                    if (this.f1244o == 2) {
                                                        i21 = i19;
                                                    }
                                                    if (i21 != 0 || this.k) {
                                                        eVar10 = eVar7;
                                                        eVar11 = eVar8;
                                                    } else {
                                                        int i40 = (iArr3[z24 ? 1 : 0] == 2 && (this instanceof ConstraintWidgetContainer)) ? z24 ? 1 : 0 : i19;
                                                        int i41 = i40 != 0 ? i19 : i11;
                                                        ConstraintWidget constraintWidget7 = this.S;
                                                        e k14 = constraintWidget7 != null ? cVar9.k(constraintWidget7.K) : null;
                                                        ConstraintWidget constraintWidget8 = this.S;
                                                        e k15 = constraintWidget8 != null ? cVar9.k(constraintWidget8.I) : null;
                                                        int i42 = this.Z;
                                                        if (i42 <= 0) {
                                                            r27 = z21;
                                                        }
                                                        c cVar15 = cVar7;
                                                        if (cVar15.f17081f != null) {
                                                            cVar9.e(eVar9, eVar7, i42, i20);
                                                            cVar9.e(eVar9, cVar9.k(cVar15.f17081f), cVar15.e(), i20);
                                                            if (z20) {
                                                                cVar9.f(k14, cVar9.k(cVar8), i19, 5);
                                                            }
                                                            r27 = i19;
                                                        } else if (this.f1230f0 == i20) {
                                                            cVar9.e(eVar9, eVar7, cVar15.e(), i20);
                                                            r27 = z21;
                                                        } else {
                                                            cVar9.e(eVar9, eVar7, i42, i20);
                                                            r27 = z21;
                                                        }
                                                        boolean z37 = zArr4[z24 ? 1 : 0];
                                                        int i43 = i19;
                                                        int i44 = iArr3[z24 ? 1 : 0];
                                                        int i45 = this.Y;
                                                        int i46 = this.f1222b0;
                                                        int i47 = iArr4[z24 ? 1 : 0];
                                                        float f10 = this.f1226d0;
                                                        if (iArr3[i43] == 3) {
                                                            boolean z38 = z24 ? 1 : 0;
                                                            r18 = z24;
                                                        } else {
                                                            boolean z39 = z24 ? 1 : 0;
                                                            r18 = i43;
                                                        }
                                                        eVar11 = eVar8;
                                                        eVar10 = eVar7;
                                                        cVar9 = cVar;
                                                        d(cVar9, false, z20, z23, z37, k15, k14, i44, i40, this.I, this.K, i45, i41, i46, i47, f10, z35, r18, z14, z22, z3422, i18, i17, this.f1253w, this.f1254x, this.f1255y, r27);
                                                    }
                                                    if (z15) {
                                                        if (this.f1256z == 1) {
                                                            float f11 = this.A;
                                                            b l6 = cVar9.l();
                                                            l6.f16270d.g(eVar11, -1.0f);
                                                            l6.f16270d.g(eVar10, 1.0f);
                                                            l6.f16270d.g(eVar3, f11);
                                                            l6.f16270d.g(eVar2, -f11);
                                                            cVar9.c(l6);
                                                        } else {
                                                            float f12 = this.A;
                                                            b l7 = cVar9.l();
                                                            l7.f16270d.g(eVar3, -1.0f);
                                                            l7.f16270d.g(eVar2, 1.0f);
                                                            l7.f16270d.g(eVar11, f12);
                                                            l7.f16270d.g(eVar10, -f12);
                                                            cVar9.c(l7);
                                                        }
                                                    }
                                                    if (cVar6.h()) {
                                                        c cVar16 = cVar6;
                                                        ConstraintWidget constraintWidget9 = cVar16.f17081f.f17079d;
                                                        float radians = (float) Math.toRadians(this.C + 90.0f);
                                                        int e9 = cVar16.e();
                                                        e k16 = cVar9.k(i(2));
                                                        e k17 = cVar9.k(i(3));
                                                        e k18 = cVar9.k(i(4));
                                                        e k19 = cVar9.k(i(5));
                                                        e k20 = cVar9.k(constraintWidget9.i(2));
                                                        e k21 = cVar9.k(constraintWidget9.i(3));
                                                        e k22 = cVar9.k(constraintWidget9.i(4));
                                                        e k23 = cVar9.k(constraintWidget9.i(5));
                                                        b l10 = cVar9.l();
                                                        double d6 = radians;
                                                        double sin = Math.sin(d6);
                                                        double d7 = e9;
                                                        l10.f16270d.g(k21, 0.5f);
                                                        l10.f16270d.g(k23, 0.5f);
                                                        l10.f16270d.g(k17, -0.5f);
                                                        l10.f16270d.g(k19, -0.5f);
                                                        l10.f16268b = -((float) (sin * d7));
                                                        cVar9.c(l10);
                                                        b l11 = cVar9.l();
                                                        float cos = (float) (Math.cos(d6) * d7);
                                                        l11.f16270d.g(k20, 0.5f);
                                                        l11.f16270d.g(k22, 0.5f);
                                                        l11.f16270d.g(k16, -0.5f);
                                                        l11.f16270d.g(k18, -0.5f);
                                                        l11.f16268b = -cos;
                                                        cVar9.c(l11);
                                                    }
                                                    this.j = false;
                                                    this.k = false;
                                                }
                                            }
                                            eVar7 = eVar5;
                                            eVar8 = eVar6;
                                            eVar9 = eVar4;
                                            i19 = 0;
                                            i20 = 8;
                                            z24 = true;
                                            i21 = 1;
                                            if (this.f1244o == 2) {
                                            }
                                            if (i21 != 0) {
                                            }
                                            eVar10 = eVar7;
                                            eVar11 = eVar8;
                                            if (z15) {
                                            }
                                            if (cVar6.h()) {
                                            }
                                            this.j = false;
                                            this.k = false;
                                        }
                                        cVar6 = cVar5;
                                        z20 = z31;
                                        iArr3 = iArr;
                                        eVar2 = k;
                                        eVar3 = k5;
                                        z21 = z18;
                                        iArr4 = iArr2;
                                        eVar4 = k11;
                                        z22 = z13;
                                        z23 = z10;
                                        i17 = i12;
                                        cVar7 = cVar2;
                                        eVar5 = k7;
                                        cVar8 = cVar4;
                                        eVar6 = eVar;
                                        i18 = i13;
                                        zArr4 = zArr2;
                                        if (z5) {
                                            gVar = nVar.f17733h;
                                            if (gVar.j) {
                                                int i392 = gVar.f17715g;
                                                eVar7 = eVar5;
                                                cVar9.d(eVar7, i392);
                                                eVar8 = eVar6;
                                                cVar9.d(eVar8, this.f1227e.f17734i.f17715g);
                                                eVar9 = eVar4;
                                                cVar9.d(eVar9, this.f1227e.k.f17715g);
                                                constraintWidget3 = this.S;
                                                if (constraintWidget3 == null) {
                                                }
                                                i19 = 0;
                                                i20 = 8;
                                                z25 = true;
                                                i21 = i19;
                                                z24 = z25;
                                                if (this.f1244o == 2) {
                                                }
                                                if (i21 != 0) {
                                                }
                                                eVar10 = eVar7;
                                                eVar11 = eVar8;
                                                if (z15) {
                                                }
                                                if (cVar6.h()) {
                                                }
                                                this.j = false;
                                                this.k = false;
                                            }
                                        }
                                        eVar7 = eVar5;
                                        eVar8 = eVar6;
                                        eVar9 = eVar4;
                                        i19 = 0;
                                        i20 = 8;
                                        z24 = true;
                                        i21 = 1;
                                        if (this.f1244o == 2) {
                                        }
                                        if (i21 != 0) {
                                        }
                                        eVar10 = eVar7;
                                        eVar11 = eVar8;
                                        if (z15) {
                                        }
                                        if (cVar6.h()) {
                                        }
                                        this.j = false;
                                        this.k = false;
                                    }
                                } else {
                                    i14 = -1;
                                }
                                z16 = false;
                                if (z15) {
                                }
                                if (iArr[0] != 2) {
                                }
                                if (!z17) {
                                }
                                cVar5 = this.O;
                                z18 = !cVar5.h();
                                c6 = '\b';
                                z19 = zArr3[0];
                                boolean z34222 = zArr3[1];
                                i16 = this.f1242n;
                                iArr2 = this.B;
                                if (i16 != 2) {
                                    if (z5) {
                                        gVar2 = lVar.f17733h;
                                        if (gVar2.j) {
                                        }
                                        c6 = '\b';
                                    }
                                    ConstraintWidget constraintWidget52 = this.S;
                                    if (constraintWidget52 == null) {
                                    }
                                    ConstraintWidget constraintWidget62 = this.S;
                                    if (constraintWidget62 == null) {
                                    }
                                    z23 = z10;
                                    i17 = i12;
                                    i18 = i13;
                                    z22 = z13;
                                    boolean z362 = z18;
                                    iArr4 = iArr2;
                                    cVar6 = cVar5;
                                    z20 = z31;
                                    iArr3 = iArr;
                                    eVar5 = k7;
                                    eVar3 = k5;
                                    cVar8 = cVar4;
                                    eVar6 = eVar;
                                    eVar2 = k;
                                    cVar7 = cVar2;
                                    eVar4 = k11;
                                    zArr4 = zArr2;
                                    cVar9 = cVar;
                                    d(cVar9, true, z23, z20, zArr2[0], k13, k12, iArr[0], z17, this.H, this.J, this.X, i15, this.a0, iArr2[0], this.f1224c0, z16, iArr[1] == 3, z22, z14, z19, i17, i18, this.f1250t, this.f1251u, this.f1252v, z362);
                                    z21 = z362;
                                    if (z5) {
                                    }
                                    eVar7 = eVar5;
                                    eVar8 = eVar6;
                                    eVar9 = eVar4;
                                    i19 = 0;
                                    i20 = 8;
                                    z24 = true;
                                    i21 = 1;
                                    if (this.f1244o == 2) {
                                    }
                                    if (i21 != 0) {
                                    }
                                    eVar10 = eVar7;
                                    eVar11 = eVar8;
                                    if (z15) {
                                    }
                                    if (cVar6.h()) {
                                    }
                                    this.j = false;
                                    this.k = false;
                                }
                                cVar6 = cVar5;
                                z20 = z31;
                                iArr3 = iArr;
                                eVar2 = k;
                                eVar3 = k5;
                                z21 = z18;
                                iArr4 = iArr2;
                                eVar4 = k11;
                                z22 = z13;
                                z23 = z10;
                                i17 = i12;
                                cVar7 = cVar2;
                                eVar5 = k7;
                                cVar8 = cVar4;
                                eVar6 = eVar;
                                i18 = i13;
                                zArr4 = zArr2;
                                if (z5) {
                                }
                                eVar7 = eVar5;
                                eVar8 = eVar6;
                                eVar9 = eVar4;
                                i19 = 0;
                                i20 = 8;
                                z24 = true;
                                i21 = 1;
                                if (this.f1244o == 2) {
                                }
                                if (i21 != 0) {
                                }
                                eVar10 = eVar7;
                                eVar11 = eVar8;
                                if (z15) {
                                }
                                if (cVar6.h()) {
                                }
                                this.j = false;
                                this.k = false;
                            }
                            i12 = i36;
                            i13 = i23;
                            i11 = i30;
                            z15 = true;
                            int[] iArr6222 = this.f1249s;
                            iArr6222[0] = i12;
                            iArr6222[1] = i13;
                            if (z15) {
                            }
                            z16 = false;
                            if (z15) {
                            }
                            if (iArr[0] != 2) {
                            }
                            if (!z17) {
                            }
                            cVar5 = this.O;
                            z18 = !cVar5.h();
                            c6 = '\b';
                            z19 = zArr3[0];
                            boolean z342222 = zArr3[1];
                            i16 = this.f1242n;
                            iArr2 = this.B;
                            if (i16 != 2) {
                            }
                            cVar6 = cVar5;
                            z20 = z31;
                            iArr3 = iArr;
                            eVar2 = k;
                            eVar3 = k5;
                            z21 = z18;
                            iArr4 = iArr2;
                            eVar4 = k11;
                            z22 = z13;
                            z23 = z10;
                            i17 = i12;
                            cVar7 = cVar2;
                            eVar5 = k7;
                            cVar8 = cVar4;
                            eVar6 = eVar;
                            i18 = i13;
                            zArr4 = zArr2;
                            if (z5) {
                            }
                            eVar7 = eVar5;
                            eVar8 = eVar6;
                            eVar9 = eVar4;
                            i19 = 0;
                            i20 = 8;
                            z24 = true;
                            i21 = 1;
                            if (this.f1244o == 2) {
                            }
                            if (i21 != 0) {
                            }
                            eVar10 = eVar7;
                            eVar11 = eVar8;
                            if (z15) {
                            }
                            if (cVar6.h()) {
                            }
                            this.j = false;
                            this.k = false;
                        }
                    } else {
                        cVar4 = cVar13;
                    }
                    eVar = k10;
                    i11 = i30;
                    i12 = i34;
                    i13 = i35;
                    z15 = false;
                    int[] iArr62222 = this.f1249s;
                    iArr62222[0] = i12;
                    iArr62222[1] = i13;
                    if (z15) {
                    }
                    z16 = false;
                    if (z15) {
                    }
                    if (iArr[0] != 2) {
                    }
                    if (!z17) {
                    }
                    cVar5 = this.O;
                    z18 = !cVar5.h();
                    c6 = '\b';
                    z19 = zArr3[0];
                    boolean z3422222 = zArr3[1];
                    i16 = this.f1242n;
                    iArr2 = this.B;
                    if (i16 != 2) {
                    }
                    cVar6 = cVar5;
                    z20 = z31;
                    iArr3 = iArr;
                    eVar2 = k;
                    eVar3 = k5;
                    z21 = z18;
                    iArr4 = iArr2;
                    eVar4 = k11;
                    z22 = z13;
                    z23 = z10;
                    i17 = i12;
                    cVar7 = cVar2;
                    eVar5 = k7;
                    cVar8 = cVar4;
                    eVar6 = eVar;
                    i18 = i13;
                    zArr4 = zArr2;
                    if (z5) {
                    }
                    eVar7 = eVar5;
                    eVar8 = eVar6;
                    eVar9 = eVar4;
                    i19 = 0;
                    i20 = 8;
                    z24 = true;
                    i21 = 1;
                    if (this.f1244o == 2) {
                    }
                    if (i21 != 0) {
                    }
                    eVar10 = eVar7;
                    eVar11 = eVar8;
                    if (z15) {
                    }
                    if (cVar6.h()) {
                    }
                    this.j = false;
                    this.k = false;
                }
            }
            zArr3 = zArr5;
            if (metrics != null) {
            }
            if (this.S != null) {
            }
            i6 = this.T;
            i10 = this.a0;
            if (i6 >= i10) {
            }
            int i282 = this.U;
            int i292 = this.f1222b0;
            if (i282 < i292) {
            }
            iArr = this.f1245o0;
            int i312 = iArr[0];
            boolean z312 = z12;
            if (i312 != 3) {
            }
            int i322 = iArr[1];
            if (i322 != 3) {
            }
            int i332 = this.W;
            this.f1256z = i332;
            f2 = this.V;
            this.A = f2;
            int i342 = this.f1247q;
            int i352 = this.f1248r;
            if (f2 > 0.0f) {
            }
            eVar = k10;
            i11 = i30;
            i12 = i342;
            i13 = i352;
            z15 = false;
            int[] iArr622222 = this.f1249s;
            iArr622222[0] = i12;
            iArr622222[1] = i13;
            if (z15) {
            }
            z16 = false;
            if (z15) {
            }
            if (iArr[0] != 2) {
            }
            if (!z17) {
            }
            cVar5 = this.O;
            z18 = !cVar5.h();
            c6 = '\b';
            z19 = zArr3[0];
            boolean z34222222 = zArr3[1];
            i16 = this.f1242n;
            iArr2 = this.B;
            if (i16 != 2) {
            }
            cVar6 = cVar5;
            z20 = z312;
            iArr3 = iArr;
            eVar2 = k;
            eVar3 = k5;
            z21 = z18;
            iArr4 = iArr2;
            eVar4 = k11;
            z22 = z13;
            z23 = z10;
            i17 = i12;
            cVar7 = cVar2;
            eVar5 = k7;
            cVar8 = cVar4;
            eVar6 = eVar;
            i18 = i13;
            zArr4 = zArr2;
            if (z5) {
            }
            eVar7 = eVar5;
            eVar8 = eVar6;
            eVar9 = eVar4;
            i19 = 0;
            i20 = 8;
            z24 = true;
            i21 = 1;
            if (this.f1244o == 2) {
            }
            if (i21 != 0) {
            }
            eVar10 = eVar7;
            eVar11 = eVar8;
            if (z15) {
            }
            if (cVar6.h()) {
            }
            this.j = false;
            this.k = false;
        }
        z6 = false;
        z7 = z6 ? 1 : 0;
        z8 = z7;
        r17 = z6;
        i5 = this.f1230f0;
        boolean[] zArr52 = this.R;
        boolean z282 = z7;
        if (i5 != 8) {
        }
        z11 = this.j;
        if (!z11) {
        }
        if (z11) {
        }
        if (this.k) {
        }
        if (this.j) {
            boolean z292 = r17;
            this.j = z292;
            this.k = z292;
            return;
        }
        metrics = p0.c.f16274r;
        if (metrics != null) {
        }
        zArr = this.f1229f;
        if (z5) {
        }
        cVar2 = cVar14;
        zArr2 = zArr;
        zArr3 = zArr52;
        if (metrics != null) {
        }
        if (this.S != null) {
        }
        i6 = this.T;
        i10 = this.a0;
        if (i6 >= i10) {
        }
        int i2822 = this.U;
        int i2922 = this.f1222b0;
        if (i2822 < i2922) {
        }
        iArr = this.f1245o0;
        int i3122 = iArr[0];
        boolean z3122 = z12;
        if (i3122 != 3) {
        }
        int i3222 = iArr[1];
        if (i3222 != 3) {
        }
        int i3322 = this.W;
        this.f1256z = i3322;
        f2 = this.V;
        this.A = f2;
        int i3422 = this.f1247q;
        int i3522 = this.f1248r;
        if (f2 > 0.0f) {
        }
        eVar = k10;
        i11 = i30;
        i12 = i3422;
        i13 = i3522;
        z15 = false;
        int[] iArr6222222 = this.f1249s;
        iArr6222222[0] = i12;
        iArr6222222[1] = i13;
        if (z15) {
        }
        z16 = false;
        if (z15) {
        }
        if (iArr[0] != 2) {
        }
        if (!z17) {
        }
        cVar5 = this.O;
        z18 = !cVar5.h();
        c6 = '\b';
        z19 = zArr3[0];
        boolean z342222222 = zArr3[1];
        i16 = this.f1242n;
        iArr2 = this.B;
        if (i16 != 2) {
        }
        cVar6 = cVar5;
        z20 = z3122;
        iArr3 = iArr;
        eVar2 = k;
        eVar3 = k5;
        z21 = z18;
        iArr4 = iArr2;
        eVar4 = k11;
        z22 = z13;
        z23 = z10;
        i17 = i12;
        cVar7 = cVar2;
        eVar5 = k7;
        cVar8 = cVar4;
        eVar6 = eVar;
        i18 = i13;
        zArr4 = zArr2;
        if (z5) {
        }
        eVar7 = eVar5;
        eVar8 = eVar6;
        eVar9 = eVar4;
        i19 = 0;
        i20 = 8;
        z24 = true;
        i21 = 1;
        if (this.f1244o == 2) {
        }
        if (i21 != 0) {
        }
        eVar10 = eVar7;
        eVar11 = eVar8;
        if (z15) {
        }
        if (cVar6.h()) {
        }
        this.j = false;
        this.k = false;
    }

    public boolean c() {
        return this.f1230f0 != 8;
    }

    /* JADX WARN: Removed duplicated region for block: B:103:0x03bc A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:107:0x03c9  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0411  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x041f  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0440 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:142:0x0458  */
    /* JADX WARN: Removed duplicated region for block: B:172:0x04a5  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x04b5 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:189:0x0402  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x04d4 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:65:? A[ADDED_TO_REGION, RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(p0.c cVar, boolean z5, boolean z6, boolean z7, boolean z8, e eVar, e eVar2, int i5, boolean z10, c cVar2, c cVar3, int i6, int i10, int i11, int i12, float f2, boolean z11, boolean z12, boolean z13, boolean z14, boolean z15, int i13, int i14, int i15, int i16, float f10, boolean z16) {
        boolean z17;
        boolean z18;
        int i17;
        boolean z19;
        boolean z20;
        int i18;
        int i19;
        boolean z21;
        e k;
        e k5;
        c cVar4;
        e eVar3;
        boolean z22;
        int i20;
        e eVar4;
        e eVar5;
        e eVar6;
        e eVar7;
        int i21;
        int i22;
        int i23;
        boolean z23;
        boolean z24;
        boolean z25;
        boolean z26;
        ConstraintWidget constraintWidget;
        int i24;
        int i25;
        c cVar5;
        boolean z27;
        int i26;
        boolean z28;
        int i27;
        int i28;
        HashSet hashSet;
        boolean z29;
        int i29;
        int i30;
        int i31;
        int i32;
        int i33;
        boolean z30;
        boolean z31;
        int i34;
        p0.c cVar6 = cVar;
        int i35 = i15;
        int i36 = i16;
        e k7 = cVar6.k(cVar2);
        e k10 = cVar6.k(cVar3);
        e k11 = cVar6.k(cVar2.f17081f);
        e k12 = cVar6.k(cVar3.f17081f);
        boolean h6 = cVar2.h();
        boolean h7 = cVar3.h();
        boolean h10 = this.O.h();
        int i37 = h7 ? (h6 ? 1 : 0) + 1 : h6 ? 1 : 0;
        if (h10) {
            i37++;
        }
        int i38 = i37;
        int i39 = z11 ? 3 : i13;
        int b10 = f0.e.b(i5);
        boolean z32 = (b10 == 0 || b10 == 1 || b10 != 2 || i39 == 4) ? false : true;
        int i40 = this.f1233h;
        if (i40 == -1 || !z5) {
            i40 = i10;
            z17 = z32;
        } else {
            this.f1233h = -1;
            z17 = false;
        }
        int i41 = this.f1234i;
        if (i41 == -1 || z5) {
            z18 = z17;
        } else {
            this.f1234i = -1;
            i40 = i41;
            z18 = false;
        }
        boolean z33 = z18;
        if (this.f1230f0 == 8) {
            z19 = false;
            i17 = 0;
        } else {
            i17 = i40;
            z19 = z33;
        }
        if (z16) {
            if (!h6 && !h7 && !h10) {
                cVar6.d(k7, i6);
            } else if (h6 && !h7) {
                z20 = z19;
                i18 = 8;
                cVar6.e(k7, k11, cVar2.e(), 8);
            }
            z20 = z19;
            i18 = 8;
        } else {
            z20 = z19;
            i18 = 8;
        }
        if (z20) {
            if (i38 == 2 || z11 || !(i39 == 1 || i39 == 0)) {
                if (i35 == -2) {
                    i35 = i17;
                }
                if (i36 == -2) {
                    i36 = i17;
                }
                if (i17 > 0 && i39 != 1) {
                    i17 = 0;
                }
                if (i35 > 0) {
                    cVar6.f(k10, k7, i35, 8);
                    i17 = Math.max(i17, i35);
                }
                if (i36 > 0) {
                    if (!z6 || i39 != 1) {
                        cVar6.g(k10, k7, i36, 8);
                    }
                    i17 = Math.min(i17, i36);
                }
                if (i39 == 1) {
                    if (z6) {
                        cVar6.e(k10, k7, i17, 8);
                    } else if (z13) {
                        cVar6.e(k10, k7, i17, 5);
                        cVar6.g(k10, k7, i17, 8);
                    } else {
                        cVar6.e(k10, k7, i17, 5);
                        cVar6.g(k10, k7, i17, 8);
                    }
                } else if (i39 == 2) {
                    int i42 = cVar2.f17080e;
                    if (i42 == 3 || i42 == 5) {
                        k = cVar6.k(this.S.i(3));
                        k5 = cVar6.k(this.S.i(5));
                    } else {
                        k = cVar6.k(this.S.i(2));
                        k5 = cVar6.k(this.S.i(4));
                    }
                    b l6 = cVar6.l();
                    int i43 = i35;
                    l6.f16270d.g(k10, -1.0f);
                    l6.f16270d.g(k7, 1.0f);
                    l6.f16270d.g(k5, f10);
                    l6.f16270d.g(k, -f10);
                    cVar6.c(l6);
                    if (z6) {
                        z20 = false;
                    }
                    z21 = z8;
                    i19 = i43;
                } else {
                    i19 = i35;
                    z21 = true;
                }
            } else {
                int max = Math.max(i35, i17);
                if (i36 > 0) {
                    max = Math.min(i36, max);
                }
                cVar6.e(k10, k7, max, 8);
                z21 = z8;
                i19 = i35;
                z20 = false;
            }
            if (z16 || z13) {
                boolean z34 = z21;
                if (i38 >= 2 && z6 && z34) {
                    cVar6.f(k7, eVar, 0, 8);
                    c cVar7 = this.L;
                    boolean z35 = z5 || cVar7.f17081f == null;
                    if (!z5 && (cVar4 = cVar7.f17081f) != null) {
                        ConstraintWidget constraintWidget2 = cVar4.f17079d;
                        if (constraintWidget2.V != 0.0f) {
                            int[] iArr = constraintWidget2.f1245o0;
                            if (iArr[0] == 3 && iArr[1] == 3) {
                                z35 = true;
                            }
                        }
                        z35 = false;
                    }
                    if (z35) {
                        cVar6.f(eVar2, k10, 0, 8);
                        return;
                    }
                    return;
                }
                return;
            }
            if (!h6 && !h7 && !h10) {
                cVar5 = cVar3;
                eVar6 = k10;
                z22 = z21;
                eVar3 = k12;
            } else if (!h6 || h7) {
                if (h6 || !h7) {
                    eVar3 = k12;
                    if (h6 && h7) {
                        ConstraintWidget constraintWidget3 = cVar2.f17081f.f17079d;
                        ConstraintWidget constraintWidget4 = cVar3.f17081f.f17079d;
                        z22 = z21;
                        ConstraintWidget constraintWidget5 = this.S;
                        int i44 = 6;
                        if (z20) {
                            if (i39 == 0) {
                                if (i36 != 0 || i19 != 0) {
                                    i32 = 5;
                                    i33 = 5;
                                    z30 = true;
                                    z31 = false;
                                    z24 = true;
                                } else if (k11.f16296x && eVar3.f16296x) {
                                    cVar6.e(k7, k11, cVar2.e(), 8);
                                    cVar6.e(k10, eVar3, -cVar3.e(), 8);
                                    return;
                                } else {
                                    i32 = 8;
                                    i33 = 8;
                                    z30 = false;
                                    z31 = true;
                                    z24 = false;
                                }
                                if ((constraintWidget3 instanceof a) || (constraintWidget4 instanceof a)) {
                                    cVar6 = cVar;
                                    i20 = i39;
                                    eVar5 = k7;
                                    eVar6 = k10;
                                    z25 = z31;
                                    eVar4 = eVar2;
                                    i22 = i32;
                                    eVar7 = k11;
                                    i21 = 6;
                                    z23 = z30;
                                    i23 = 4;
                                    if (z24 || eVar7 != eVar3 || constraintWidget3 == constraintWidget5) {
                                        z26 = true;
                                    } else {
                                        z24 = false;
                                        z26 = false;
                                    }
                                    if (z23) {
                                        constraintWidget = constraintWidget4;
                                        i24 = i19;
                                        i25 = i20;
                                        cVar5 = cVar3;
                                        z27 = z6;
                                    } else {
                                        if (z20 || z12 || z14 || eVar7 != eVar || eVar3 != eVar4) {
                                            z27 = z6;
                                            z29 = z26;
                                            i29 = i22;
                                        } else {
                                            i21 = 8;
                                            z27 = false;
                                            i29 = 8;
                                            z29 = false;
                                        }
                                        e eVar8 = eVar7;
                                        i24 = i19;
                                        i25 = i20;
                                        constraintWidget = constraintWidget4;
                                        cVar5 = cVar3;
                                        cVar6.b(eVar5, eVar8, cVar2.e(), f2, eVar3, eVar6, cVar3.e(), i21);
                                        eVar7 = eVar8;
                                        i22 = i29;
                                        z26 = z29;
                                    }
                                    if (this.f1230f0 != 8 && ((hashSet = cVar5.a) == null || hashSet.size() <= 0)) {
                                        return;
                                    }
                                    if (z24) {
                                        if (z27 && eVar7 != eVar3 && !z20 && ((constraintWidget3 instanceof a) || (constraintWidget instanceof a))) {
                                            i22 = 6;
                                        }
                                        cVar6.f(eVar5, eVar7, cVar2.e(), i22);
                                        cVar6.g(eVar6, eVar3, -cVar5.e(), i22);
                                    }
                                    if (z27 || !z15 || (constraintWidget3 instanceof a) || (constraintWidget instanceof a) || constraintWidget == constraintWidget5) {
                                        i26 = i23;
                                        z28 = z26;
                                    } else {
                                        i26 = 6;
                                        i22 = 6;
                                        z28 = true;
                                    }
                                    if (z28) {
                                        if (z25 && (!z14 || z7)) {
                                            if (constraintWidget3 != constraintWidget5 && constraintWidget != constraintWidget5) {
                                                i44 = i26;
                                            }
                                            if ((constraintWidget3 instanceof f) || (constraintWidget instanceof f)) {
                                                i44 = 5;
                                            }
                                            if ((constraintWidget3 instanceof a) || (constraintWidget instanceof a)) {
                                                i44 = 5;
                                            }
                                            i26 = Math.max(z14 ? 5 : i44, i26);
                                        }
                                        if (z27) {
                                            i26 = Math.min(i22, i26);
                                            if (z11 && !z14 && (constraintWidget3 == constraintWidget5 || constraintWidget == constraintWidget5)) {
                                                i28 = 4;
                                                cVar6.e(eVar5, eVar7, cVar2.e(), i28);
                                                cVar6.e(eVar6, eVar3, -cVar5.e(), i28);
                                            }
                                        }
                                        i28 = i26;
                                        cVar6.e(eVar5, eVar7, cVar2.e(), i28);
                                        cVar6.e(eVar6, eVar3, -cVar5.e(), i28);
                                    }
                                    if (z27) {
                                        int e9 = eVar == eVar7 ? cVar2.e() : 0;
                                        if (eVar7 != eVar) {
                                            cVar6.f(eVar5, eVar, e9, 5);
                                        }
                                    }
                                    if (z27 && z20 && i11 == 0 && i24 == 0) {
                                        if (z20 || i25 != 3) {
                                            i27 = 5;
                                            cVar6.f(eVar6, eVar5, 0, 5);
                                        } else {
                                            cVar6.f(eVar6, eVar5, 0, 8);
                                        }
                                    }
                                    i27 = 5;
                                } else {
                                    cVar6 = cVar;
                                    eVar5 = k7;
                                    eVar6 = k10;
                                    z25 = z31;
                                    i22 = i32;
                                    eVar7 = k11;
                                    i21 = 6;
                                    z23 = z30;
                                    i23 = i33;
                                    i20 = i39;
                                    eVar4 = eVar2;
                                    if (z24) {
                                    }
                                    z26 = true;
                                    if (z23) {
                                    }
                                    if (this.f1230f0 != 8) {
                                    }
                                    if (z24) {
                                    }
                                    if (z27) {
                                    }
                                    i26 = i23;
                                    z28 = z26;
                                    if (z28) {
                                    }
                                    if (z27) {
                                    }
                                    if (z27) {
                                        if (z20) {
                                        }
                                        i27 = 5;
                                        cVar6.f(eVar6, eVar5, 0, 5);
                                    }
                                    i27 = 5;
                                }
                            } else {
                                if (i39 == 2) {
                                    if ((constraintWidget3 instanceof a) || (constraintWidget4 instanceof a)) {
                                        cVar6 = cVar;
                                        i20 = i39;
                                        eVar5 = k7;
                                        eVar6 = k10;
                                        eVar7 = k11;
                                        i21 = 6;
                                        i22 = 5;
                                    } else {
                                        cVar6 = cVar;
                                        i20 = i39;
                                        eVar5 = k7;
                                        eVar6 = k10;
                                        eVar7 = k11;
                                        i21 = 6;
                                        i22 = 5;
                                        i23 = 5;
                                        z23 = true;
                                        z24 = true;
                                        z25 = false;
                                        eVar4 = eVar2;
                                        if (z24) {
                                        }
                                        z26 = true;
                                        if (z23) {
                                        }
                                        if (this.f1230f0 != 8) {
                                        }
                                        if (z24) {
                                        }
                                        if (z27) {
                                        }
                                        i26 = i23;
                                        z28 = z26;
                                        if (z28) {
                                        }
                                        if (z27) {
                                        }
                                        if (z27) {
                                        }
                                        i27 = 5;
                                    }
                                } else if (i39 == 1) {
                                    cVar6 = cVar;
                                    i20 = i39;
                                    eVar5 = k7;
                                    eVar6 = k10;
                                    eVar7 = k11;
                                    i21 = 6;
                                    i22 = 8;
                                } else if (i39 == 3) {
                                    i20 = i39;
                                    if (this.f1256z != -1) {
                                        if (z11) {
                                            if (i14 == 2 || i14 == 1) {
                                                i30 = 5;
                                                i31 = 4;
                                            } else {
                                                i30 = 8;
                                                i31 = 5;
                                            }
                                            i23 = i31;
                                            eVar5 = k7;
                                            eVar6 = k10;
                                            eVar7 = k11;
                                            i21 = 6;
                                            z23 = true;
                                            z24 = true;
                                            z25 = true;
                                            eVar4 = eVar2;
                                        } else if (i36 > 0) {
                                            cVar6 = cVar;
                                            eVar4 = eVar2;
                                            eVar5 = k7;
                                            eVar6 = k10;
                                            eVar7 = k11;
                                            i21 = 6;
                                            i22 = 5;
                                        } else {
                                            if (i36 != 0 || i19 != 0) {
                                                cVar6 = cVar;
                                                eVar4 = eVar2;
                                                eVar5 = k7;
                                                eVar6 = k10;
                                                eVar7 = k11;
                                                i21 = 6;
                                                i22 = 5;
                                                i23 = 4;
                                            } else if (z14) {
                                                i30 = (constraintWidget3 == constraintWidget5 || constraintWidget4 == constraintWidget5) ? 5 : 4;
                                                eVar4 = eVar2;
                                                eVar5 = k7;
                                                eVar6 = k10;
                                                eVar7 = k11;
                                                i21 = 6;
                                                i23 = 4;
                                                z23 = true;
                                                z24 = true;
                                                z25 = true;
                                            } else {
                                                cVar6 = cVar;
                                                eVar4 = eVar2;
                                                eVar5 = k7;
                                                eVar6 = k10;
                                                eVar7 = k11;
                                                i21 = 6;
                                                i22 = 5;
                                                i23 = 8;
                                            }
                                            z23 = true;
                                            z24 = true;
                                            z25 = true;
                                            if (z24) {
                                            }
                                            z26 = true;
                                            if (z23) {
                                            }
                                            if (this.f1230f0 != 8) {
                                            }
                                            if (z24) {
                                            }
                                            if (z27) {
                                            }
                                            i26 = i23;
                                            z28 = z26;
                                            if (z28) {
                                            }
                                            if (z27) {
                                            }
                                            if (z27) {
                                            }
                                            i27 = 5;
                                        }
                                        i22 = i30;
                                        cVar6 = cVar;
                                        if (z24) {
                                        }
                                        z26 = true;
                                        if (z23) {
                                        }
                                        if (this.f1230f0 != 8) {
                                        }
                                        if (z24) {
                                        }
                                        if (z27) {
                                        }
                                        i26 = i23;
                                        z28 = z26;
                                        if (z28) {
                                        }
                                        if (z27) {
                                        }
                                        if (z27) {
                                        }
                                        i27 = 5;
                                    } else if (z14) {
                                        cVar6 = cVar;
                                        eVar4 = eVar2;
                                        eVar5 = k7;
                                        eVar6 = k10;
                                        eVar7 = k11;
                                        i22 = 8;
                                        i21 = z6 ? 5 : 4;
                                    } else {
                                        cVar6 = cVar;
                                        eVar4 = eVar2;
                                        eVar5 = k7;
                                        eVar6 = k10;
                                        eVar7 = k11;
                                        i22 = 8;
                                        i21 = 8;
                                    }
                                    i23 = 5;
                                    z23 = true;
                                    z24 = true;
                                    z25 = true;
                                    if (z24) {
                                    }
                                    z26 = true;
                                    if (z23) {
                                    }
                                    if (this.f1230f0 != 8) {
                                    }
                                    if (z24) {
                                    }
                                    if (z27) {
                                    }
                                    i26 = i23;
                                    z28 = z26;
                                    if (z28) {
                                    }
                                    if (z27) {
                                    }
                                    if (z27) {
                                    }
                                    i27 = 5;
                                } else {
                                    i20 = i39;
                                    cVar6 = cVar;
                                    eVar4 = eVar2;
                                    eVar5 = k7;
                                    eVar6 = k10;
                                    eVar7 = k11;
                                    i21 = 6;
                                    i22 = 5;
                                    i23 = 4;
                                    z23 = false;
                                    z24 = false;
                                }
                                i23 = 4;
                                z23 = true;
                                z24 = true;
                                z25 = false;
                                eVar4 = eVar2;
                                if (z24) {
                                }
                                z26 = true;
                                if (z23) {
                                }
                                if (this.f1230f0 != 8) {
                                }
                                if (z24) {
                                }
                                if (z27) {
                                }
                                i26 = i23;
                                z28 = z26;
                                if (z28) {
                                }
                                if (z27) {
                                }
                                if (z27) {
                                }
                                i27 = 5;
                            }
                            i34 = i27;
                            if (z27 && z22) {
                                int e10 = cVar5.f17081f != null ? cVar5.e() : 0;
                                if (eVar3 != eVar2) {
                                    cVar6.f(eVar2, eVar6, e10, i34);
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        i20 = i39;
                        if (k11.f16296x && eVar3.f16296x) {
                            cVar.b(k7, k11, cVar2.e(), f2, eVar3, k10, cVar3.e(), 8);
                            if (z6 && z22) {
                                int e11 = cVar3.f17081f != null ? cVar3.e() : 0;
                                if (eVar3 != eVar2) {
                                    cVar.f(eVar2, k10, e11, 5);
                                    return;
                                }
                                return;
                            }
                            return;
                        }
                        cVar6 = cVar;
                        eVar4 = eVar2;
                        eVar5 = k7;
                        eVar6 = k10;
                        eVar7 = k11;
                        i21 = 6;
                        i22 = 5;
                        i23 = 4;
                        z23 = true;
                        z24 = true;
                        z25 = false;
                        if (z24) {
                        }
                        z26 = true;
                        if (z23) {
                        }
                        if (this.f1230f0 != 8) {
                        }
                        if (z24) {
                        }
                        if (z27) {
                        }
                        i26 = i23;
                        z28 = z26;
                        if (z28) {
                        }
                        if (z27) {
                        }
                        if (z27) {
                        }
                        i27 = 5;
                        i34 = i27;
                        if (z27) {
                            return;
                        } else {
                            return;
                        }
                    }
                } else {
                    eVar3 = k12;
                    cVar6.e(k10, eVar3, -cVar3.e(), 8);
                    if (z6) {
                        cVar6.f(k7, eVar, 0, 5);
                        cVar5 = cVar3;
                        i27 = 5;
                        eVar6 = k10;
                        z22 = z21;
                        z27 = z6;
                        i34 = i27;
                        if (z27) {
                        }
                    }
                }
                cVar5 = cVar3;
                eVar6 = k10;
                z22 = z21;
            } else {
                cVar5 = cVar3;
                eVar6 = k10;
                z22 = z21;
                eVar3 = k12;
                z27 = z6;
                i34 = (z6 && (cVar2.f17081f.f17079d instanceof a)) ? 8 : 5;
                if (z27) {
                }
            }
            i27 = 5;
            z27 = z6;
            i34 = i27;
            if (z27) {
            }
        } else if (z10) {
            cVar6.e(k10, k7, 0, 3);
            if (i11 > 0) {
                cVar6.f(k10, k7, i11, i18);
            }
            if (i12 < Integer.MAX_VALUE) {
                cVar6.g(k10, k7, i12, i18);
            }
        } else {
            cVar6.e(k10, k7, i17, i18);
        }
        z21 = z8;
        i19 = i35;
        if (z16) {
        }
        boolean z342 = z21;
        if (i38 >= 2) {
        }
    }

    public final void e(int i5, ConstraintWidget constraintWidget, int i6, int i10) {
        boolean z5;
        if (i5 == 7) {
            if (i6 != 7) {
                if (i6 == 2 || i6 == 4) {
                    e(2, constraintWidget, i6, 0);
                    e(4, constraintWidget, i6, 0);
                    i(7).a(constraintWidget.i(i6), 0);
                    return;
                } else {
                    if (i6 == 3 || i6 == 5) {
                        e(3, constraintWidget, i6, 0);
                        e(5, constraintWidget, i6, 0);
                        i(7).a(constraintWidget.i(i6), 0);
                        return;
                    }
                    return;
                }
            }
            c i11 = i(2);
            c i12 = i(4);
            c i13 = i(3);
            c i14 = i(5);
            boolean z6 = true;
            if ((i11 == null || !i11.h()) && (i12 == null || !i12.h())) {
                e(2, constraintWidget, 2, 0);
                e(4, constraintWidget, 4, 0);
                z5 = true;
            } else {
                z5 = false;
            }
            if ((i13 == null || !i13.h()) && (i14 == null || !i14.h())) {
                e(3, constraintWidget, 3, 0);
                e(5, constraintWidget, 5, 0);
            } else {
                z6 = false;
            }
            if (z5 && z6) {
                i(7).a(constraintWidget.i(7), 0);
                return;
            } else if (z5) {
                i(8).a(constraintWidget.i(8), 0);
                return;
            } else {
                if (z6) {
                    i(9).a(constraintWidget.i(9), 0);
                    return;
                }
                return;
            }
        }
        if (i5 == 8 && (i6 == 2 || i6 == 4)) {
            c i15 = i(2);
            c i16 = constraintWidget.i(i6);
            c i17 = i(4);
            i15.a(i16, 0);
            i17.a(i16, 0);
            i(8).a(i16, 0);
            return;
        }
        if (i5 == 9 && (i6 == 3 || i6 == 5)) {
            c i18 = constraintWidget.i(i6);
            i(3).a(i18, 0);
            i(5).a(i18, 0);
            i(9).a(i18, 0);
            return;
        }
        if (i5 == 8 && i6 == 8) {
            i(2).a(constraintWidget.i(2), 0);
            i(4).a(constraintWidget.i(4), 0);
            i(8).a(constraintWidget.i(i6), 0);
            return;
        }
        if (i5 == 9 && i6 == 9) {
            i(3).a(constraintWidget.i(3), 0);
            i(5).a(constraintWidget.i(5), 0);
            i(9).a(constraintWidget.i(i6), 0);
            return;
        }
        c i19 = i(i5);
        c i20 = constraintWidget.i(i6);
        if (i19.i(i20)) {
            if (i5 == 6) {
                c i21 = i(3);
                c i22 = i(5);
                if (i21 != null) {
                    i21.j();
                }
                if (i22 != null) {
                    i22.j();
                }
            } else if (i5 == 3 || i5 == 5) {
                c i23 = i(6);
                if (i23 != null) {
                    i23.j();
                }
                c i24 = i(7);
                if (i24.f17081f != i20) {
                    i24.j();
                }
                c f2 = i(i5).f();
                c i25 = i(9);
                if (i25.h()) {
                    f2.j();
                    i25.j();
                }
            } else if (i5 == 2 || i5 == 4) {
                c i26 = i(7);
                if (i26.f17081f != i20) {
                    i26.j();
                }
                c f10 = i(i5).f();
                c i27 = i(8);
                if (i27.h()) {
                    f10.j();
                    i27.j();
                }
            }
            i19.a(i20, i10);
        }
    }

    public final void f(c cVar, c cVar2, int i5) {
        if (cVar.f17079d == this) {
            e(cVar.f17080e, cVar2.f17079d, cVar2.f17080e, i5);
        }
    }

    public final void g(p0.c cVar) {
        cVar.k(this.H);
        cVar.k(this.I);
        cVar.k(this.J);
        cVar.k(this.K);
        if (this.Z > 0) {
            cVar.k(this.L);
        }
    }

    public final void h() {
        if (this.f1225d == null) {
            l lVar = new l(this);
            lVar.f17733h.f17713e = 4;
            lVar.f17734i.f17713e = 5;
            lVar.f17731f = 0;
            this.f1225d = lVar;
        }
        if (this.f1227e == null) {
            n nVar = new n(this);
            g gVar = new g(nVar);
            nVar.k = gVar;
            nVar.f17721l = null;
            nVar.f17733h.f17713e = 6;
            nVar.f17734i.f17713e = 7;
            gVar.f17713e = 8;
            nVar.f17731f = 1;
            this.f1227e = nVar;
        }
    }

    public c i(int i5) {
        switch (f0.e.b(i5)) {
            case 0:
                return null;
            case 1:
                return this.H;
            case 2:
                return this.I;
            case 3:
                return this.J;
            case 4:
                return this.K;
            case 5:
                return this.L;
            case 6:
                return this.O;
            case 7:
                return this.M;
            case 8:
                return this.N;
            default:
                throw new AssertionError(k0.d.w(i5));
        }
    }

    public final int j(int i5) {
        int[] iArr = this.f1245o0;
        if (i5 == 0) {
            return iArr[0];
        }
        if (i5 == 1) {
            return iArr[1];
        }
        return 0;
    }

    public final int k() {
        if (this.f1230f0 == 8) {
            return 0;
        }
        return this.U;
    }

    public final ConstraintWidget l(int i5) {
        c cVar;
        c cVar2;
        if (i5 != 0) {
            if (i5 == 1 && (cVar2 = (cVar = this.K).f17081f) != null && cVar2.f17081f == cVar) {
                return cVar2.f17079d;
            }
            return null;
        }
        c cVar3 = this.J;
        c cVar4 = cVar3.f17081f;
        if (cVar4 == null || cVar4.f17081f != cVar3) {
            return null;
        }
        return cVar4.f17079d;
    }

    public final ConstraintWidget m(int i5) {
        c cVar;
        c cVar2;
        if (i5 != 0) {
            if (i5 == 1 && (cVar2 = (cVar = this.I).f17081f) != null && cVar2.f17081f == cVar) {
                return cVar2.f17079d;
            }
            return null;
        }
        c cVar3 = this.H;
        c cVar4 = cVar3.f17081f;
        if (cVar4 == null || cVar4.f17081f != cVar3) {
            return null;
        }
        return cVar4.f17079d;
    }

    public final int n() {
        if (this.f1230f0 == 8) {
            return 0;
        }
        return this.T;
    }

    public final int o() {
        ConstraintWidget constraintWidget = this.S;
        return (constraintWidget == null || !(constraintWidget instanceof ConstraintWidgetContainer)) ? this.X : ((ConstraintWidgetContainer) constraintWidget).f1264w0 + this.X;
    }

    public final int p() {
        ConstraintWidget constraintWidget = this.S;
        return (constraintWidget == null || !(constraintWidget instanceof ConstraintWidgetContainer)) ? this.Y : ((ConstraintWidgetContainer) constraintWidget).f1265x0 + this.Y;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x003b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:13:0x003a A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean q(int i5) {
        if (i5 == 0) {
            return (this.H.f17081f != null ? 1 : 0) + (this.J.f17081f != null ? 1 : 0) < 2;
        }
        if ((this.I.f17081f != null ? 1 : 0) + (this.K.f17081f != null ? 1 : 0) + (this.L.f17081f != null ? 1 : 0) < 2) {
        }
    }

    public final boolean r(int i5, int i6) {
        c cVar;
        c cVar2;
        c cVar3;
        c cVar4;
        if (i5 == 0) {
            c cVar5 = this.H;
            c cVar6 = cVar5.f17081f;
            if (cVar6 == null || !cVar6.f17078c || (cVar4 = (cVar3 = this.J).f17081f) == null || !cVar4.f17078c) {
                return false;
            }
            return (cVar4.d() - cVar3.e()) - (cVar5.e() + cVar5.f17081f.d()) >= i6;
        }
        c cVar7 = this.I;
        c cVar8 = cVar7.f17081f;
        if (cVar8 == null || !cVar8.f17078c || (cVar2 = (cVar = this.K).f17081f) == null || !cVar2.f17078c) {
            return false;
        }
        return (cVar2.d() - cVar.e()) - (cVar7.e() + cVar7.f17081f.d()) >= i6;
    }

    public final void s(int i5, int i6, int i10, int i11, ConstraintWidget constraintWidget) {
        i(i5).b(constraintWidget.i(i6), i10, i11, true);
    }

    public final boolean t(int i5) {
        c cVar;
        c cVar2;
        int i6 = i5 * 2;
        c[] cVarArr = this.P;
        c cVar3 = cVarArr[i6];
        c cVar4 = cVar3.f17081f;
        return (cVar4 == null || cVar4.f17081f == cVar3 || (cVar2 = (cVar = cVarArr[i6 + 1]).f17081f) == null || cVar2.f17081f != cVar) ? false : true;
    }

    public String toString() {
        StringBuilder o6 = k0.d.o("");
        o6.append(this.f1232g0 != null ? com.discord.chat.bridge.botuikit.a.j(new StringBuilder("id: "), this.f1232g0, " ") : "");
        o6.append("(");
        o6.append(this.X);
        o6.append(", ");
        o6.append(this.Y);
        o6.append(") - (");
        o6.append(this.T);
        o6.append(" x ");
        return k0.d.m(o6, this.U, ")");
    }

    public final boolean u() {
        c cVar = this.H;
        c cVar2 = cVar.f17081f;
        if (cVar2 != null && cVar2.f17081f == cVar) {
            return true;
        }
        c cVar3 = this.J;
        c cVar4 = cVar3.f17081f;
        return cVar4 != null && cVar4.f17081f == cVar3;
    }

    public final boolean v() {
        c cVar = this.I;
        c cVar2 = cVar.f17081f;
        if (cVar2 != null && cVar2.f17081f == cVar) {
            return true;
        }
        c cVar3 = this.K;
        c cVar4 = cVar3.f17081f;
        return cVar4 != null && cVar4.f17081f == cVar3;
    }

    public final boolean w() {
        return this.f1231g && this.f1230f0 != 8;
    }

    public boolean x() {
        if (this.j) {
            return true;
        }
        return this.H.f17078c && this.J.f17078c;
    }

    public boolean y() {
        if (this.k) {
            return true;
        }
        return this.I.f17078c && this.K.f17078c;
    }

    public void z() {
        this.H.j();
        this.I.j();
        this.J.j();
        this.K.j();
        this.L.j();
        this.M.j();
        this.N.j();
        this.O.j();
        this.S = null;
        this.C = 0.0f;
        this.T = 0;
        this.U = 0;
        this.V = 0.0f;
        this.W = -1;
        this.X = 0;
        this.Y = 0;
        this.Z = 0;
        this.a0 = 0;
        this.f1222b0 = 0;
        this.f1224c0 = 0.5f;
        this.f1226d0 = 0.5f;
        int[] iArr = this.f1245o0;
        iArr[0] = 1;
        iArr[1] = 1;
        this.f1228e0 = null;
        this.f1230f0 = 0;
        this.h0 = 0;
        this.f1235i0 = 0;
        float[] fArr = this.f1236j0;
        fArr[0] = -1.0f;
        fArr[1] = -1.0f;
        this.f1242n = -1;
        this.f1244o = -1;
        int[] iArr2 = this.B;
        iArr2[0] = Integer.MAX_VALUE;
        iArr2[1] = Integer.MAX_VALUE;
        this.f1247q = 0;
        this.f1248r = 0;
        this.f1252v = 1.0f;
        this.f1255y = 1.0f;
        this.f1251u = Integer.MAX_VALUE;
        this.f1254x = Integer.MAX_VALUE;
        this.f1250t = 0;
        this.f1253w = 0;
        this.f1256z = -1;
        this.A = 1.0f;
        boolean[] zArr = this.f1229f;
        zArr[0] = true;
        zArr[1] = true;
        this.E = false;
        boolean[] zArr2 = this.R;
        zArr2[0] = false;
        zArr2[1] = false;
        this.f1231g = true;
        int[] iArr3 = this.f1249s;
        iArr3[0] = 0;
        iArr3[1] = 0;
        this.f1233h = -1;
        this.f1234i = -1;
    }
}
