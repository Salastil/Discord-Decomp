package v4;

import android.graphics.Path;
import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes.dex */
public abstract class g {
    public static final e4.e a = e4.e.x("ty", "d");

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0779 A[LOOP:1: B:27:0x0773->B:29:0x0779, LOOP_END] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static s4.b a(w4.b bVar, l4.i iVar) {
        String str;
        char c6;
        s4.b aVar;
        s4.b mVar;
        s4.b nVar;
        s4.b eVar;
        int i5;
        int i6;
        char c8;
        bVar.f();
        int i10 = 2;
        while (true) {
            if (!bVar.o()) {
                str = null;
                break;
            }
            int P = bVar.P(a);
            if (P == 0) {
                str = bVar.x();
                break;
            }
            if (P != 1) {
                bVar.Q();
                bVar.R();
            } else {
                i10 = bVar.t();
            }
        }
        if (str == null) {
            return null;
        }
        boolean z5 = false;
        boolean z6 = false;
        int i11 = 0;
        int i12 = 3;
        switch (str.hashCode()) {
            case 3239:
                if (str.equals("el")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case 3270:
                if (str.equals("fl")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case 3295:
                if (str.equals("gf")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case 3307:
                if (str.equals("gr")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case 3308:
                if (str.equals("gs")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case 3488:
                if (str.equals("mm")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case 3633:
                if (str.equals("rc")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case 3634:
                if (str.equals("rd")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case 3646:
                if (str.equals("rp")) {
                    c6 = '\b';
                    break;
                }
                c6 = 65535;
                break;
            case 3669:
                if (str.equals("sh")) {
                    c6 = '\t';
                    break;
                }
                c6 = 65535;
                break;
            case 3679:
                if (str.equals("sr")) {
                    c6 = '\n';
                    break;
                }
                c6 = 65535;
                break;
            case 3681:
                if (str.equals("st")) {
                    c6 = 11;
                    break;
                }
                c6 = 65535;
                break;
            case 3705:
                if (str.equals("tm")) {
                    c6 = '\f';
                    break;
                }
                c6 = 65535;
                break;
            case 3710:
                if (str.equals("tr")) {
                    c6 = '\r';
                    break;
                }
                c6 = 65535;
                break;
            default:
                c6 = 65535;
                break;
        }
        switch (c6) {
            case 0:
                e4.e eVar2 = e.a;
                boolean z7 = i10 == 3;
                boolean z8 = false;
                String str2 = null;
                r4.e eVar3 = null;
                r4.a aVar2 = null;
                while (bVar.o()) {
                    int P2 = bVar.P(e.a);
                    if (P2 == 0) {
                        str2 = bVar.x();
                    } else if (P2 == 1) {
                        eVar3 = a.b(bVar, iVar);
                    } else if (P2 == 2) {
                        aVar2 = m3.n.C0(bVar, iVar);
                    } else if (P2 == 3) {
                        z8 = bVar.q();
                    } else if (P2 != 4) {
                        bVar.Q();
                        bVar.R();
                    } else {
                        z7 = bVar.t() == 3;
                    }
                }
                aVar = new s4.a(str2, eVar3, aVar2, z7, z8);
                mVar = aVar;
                while (bVar.o()) {
                    bVar.R();
                }
                bVar.i();
                return mVar;
            case 1:
                e4.e eVar4 = y.a;
                int i13 = 1;
                boolean z10 = false;
                boolean z11 = false;
                r4.a aVar3 = null;
                String str3 = null;
                r4.a aVar4 = null;
                while (bVar.o()) {
                    int P3 = bVar.P(y.a);
                    if (P3 == 0) {
                        str3 = bVar.x();
                    } else if (P3 == 1) {
                        aVar4 = m3.n.y0(bVar, iVar);
                    } else if (P3 == 2) {
                        aVar3 = m3.n.B0(bVar, iVar);
                    } else if (P3 == 3) {
                        z10 = bVar.q();
                    } else if (P3 == 4) {
                        i13 = bVar.t();
                    } else if (P3 != 5) {
                        bVar.Q();
                        bVar.R();
                    } else {
                        z11 = bVar.q();
                    }
                }
                if (aVar3 == null) {
                    aVar3 = new r4.a(Collections.singletonList(new y4.a(100)), 2);
                }
                mVar = new s4.m(str3, z10, i13 == 1 ? Path.FillType.WINDING : Path.FillType.EVEN_ODD, aVar4, aVar3, z11);
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 2:
                e4.e eVar5 = l.a;
                Path.FillType fillType = Path.FillType.WINDING;
                int i14 = 0;
                boolean z12 = false;
                r4.a aVar5 = null;
                String str4 = null;
                r4.a aVar6 = null;
                r4.a aVar7 = null;
                r4.a aVar8 = null;
                while (bVar.o()) {
                    switch (bVar.P(l.a)) {
                        case 0:
                            str4 = bVar.x();
                            break;
                        case 1:
                            bVar.f();
                            int i15 = -1;
                            while (bVar.o()) {
                                int P4 = bVar.P(l.f19252b);
                                if (P4 == 0) {
                                    i15 = bVar.t();
                                } else if (P4 != 1) {
                                    bVar.Q();
                                    bVar.R();
                                } else {
                                    aVar6 = m3.n.A0(bVar, iVar, i15);
                                }
                            }
                            bVar.i();
                            break;
                        case 2:
                            aVar5 = m3.n.B0(bVar, iVar);
                            break;
                        case 3:
                            if (bVar.t() != 1) {
                                i14 = 2;
                                break;
                            } else {
                                i14 = 1;
                                break;
                            }
                        case 4:
                            aVar7 = m3.n.C0(bVar, iVar);
                            break;
                        case 5:
                            aVar8 = m3.n.C0(bVar, iVar);
                            break;
                        case 6:
                            fillType = bVar.t() == 1 ? Path.FillType.WINDING : Path.FillType.EVEN_ODD;
                            break;
                        case 7:
                            z12 = bVar.q();
                            break;
                        default:
                            bVar.Q();
                            bVar.R();
                            break;
                    }
                }
                if (aVar5 == null) {
                    aVar5 = new r4.a(Collections.singletonList(new y4.a(100)), 2);
                }
                mVar = new s4.d(str4, i14, fillType, aVar6, aVar5, aVar7, aVar8, z12);
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 3:
                e4.e eVar6 = z.a;
                ArrayList arrayList = new ArrayList();
                String str5 = null;
                while (bVar.o()) {
                    int P5 = bVar.P(z.a);
                    if (P5 == 0) {
                        str5 = bVar.x();
                    } else if (P5 == 1) {
                        z5 = bVar.q();
                    } else if (P5 != 2) {
                        bVar.R();
                    } else {
                        bVar.c();
                        while (bVar.o()) {
                            s4.b a10 = a(bVar, iVar);
                            if (a10 != null) {
                                arrayList.add(a10);
                            }
                        }
                        bVar.g();
                    }
                }
                nVar = new s4.n(str5, arrayList, z5);
                mVar = nVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 4:
                e4.e eVar7 = m.a;
                ArrayList arrayList2 = new ArrayList();
                int i16 = 0;
                int i17 = 0;
                int i18 = 0;
                boolean z13 = false;
                r4.a aVar9 = null;
                String str6 = null;
                r4.a aVar10 = null;
                r4.a aVar11 = null;
                r4.a aVar12 = null;
                r4.b bVar2 = null;
                r4.b bVar3 = null;
                float f2 = 0.0f;
                while (bVar.o()) {
                    switch (bVar.P(m.a)) {
                        case 0:
                            str6 = bVar.x();
                            break;
                        case 1:
                            bVar.f();
                            int i19 = -1;
                            while (bVar.o()) {
                                int P6 = bVar.P(m.f19253b);
                                if (P6 == 0) {
                                    i19 = bVar.t();
                                } else if (P6 != 1) {
                                    bVar.Q();
                                    bVar.R();
                                } else {
                                    aVar10 = m3.n.A0(bVar, iVar, i19);
                                }
                            }
                            bVar.i();
                            break;
                        case 2:
                            aVar9 = m3.n.B0(bVar, iVar);
                            break;
                        case 3:
                            if (bVar.t() != 1) {
                                i16 = 2;
                                break;
                            } else {
                                i16 = 1;
                                break;
                            }
                        case 4:
                            aVar11 = m3.n.C0(bVar, iVar);
                            break;
                        case 5:
                            aVar12 = m3.n.C0(bVar, iVar);
                            break;
                        case 6:
                            bVar2 = m3.n.z0(bVar, iVar, true);
                            break;
                        case 7:
                            i17 = f0.e.c(3)[bVar.t() - 1];
                            break;
                        case 8:
                            i18 = f0.e.c(3)[bVar.t() - 1];
                            break;
                        case 9:
                            f2 = (float) bVar.r();
                            break;
                        case 10:
                            z13 = bVar.q();
                            break;
                        case 11:
                            bVar.c();
                            while (bVar.o()) {
                                bVar.f();
                                String str7 = null;
                                r4.b bVar4 = null;
                                while (bVar.o()) {
                                    int P7 = bVar.P(m.f19254c);
                                    if (P7 == 0) {
                                        str7 = bVar.x();
                                    } else if (P7 != 1) {
                                        bVar.Q();
                                        bVar.R();
                                    } else {
                                        bVar4 = m3.n.z0(bVar, iVar, true);
                                    }
                                }
                                bVar.i();
                                if (str7.equals("o")) {
                                    bVar3 = bVar4;
                                } else if (str7.equals("d") || str7.equals("g")) {
                                    iVar.f13753o = true;
                                    arrayList2.add(bVar4);
                                }
                            }
                            bVar.g();
                            if (arrayList2.size() != 1) {
                                break;
                            } else {
                                arrayList2.add((r4.b) arrayList2.get(0));
                                break;
                            }
                            break;
                        default:
                            bVar.Q();
                            bVar.R();
                            break;
                    }
                }
                if (aVar9 == null) {
                    aVar9 = new r4.a(Collections.singletonList(new y4.a(100)), 2);
                }
                eVar = new s4.e(str6, i16, aVar10, aVar9, aVar11, aVar12, bVar2, i17, i18, f2, arrayList2, bVar3, z13);
                mVar = eVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 5:
                e4.e eVar8 = s.a;
                boolean z14 = false;
                String str8 = null;
                while (bVar.o()) {
                    int P8 = bVar.P(s.a);
                    if (P8 == 0) {
                        str8 = bVar.x();
                    } else if (P8 == 1) {
                        int t5 = bVar.t();
                        if (t5 != 1) {
                            if (t5 == 2) {
                                i11 = 2;
                            } else if (t5 == 3) {
                                i11 = 3;
                            } else if (t5 == 4) {
                                i11 = 4;
                            } else if (t5 == 5) {
                                i11 = 5;
                            }
                        }
                        i11 = 1;
                    } else if (P8 != 2) {
                        bVar.Q();
                        bVar.R();
                    } else {
                        z14 = bVar.q();
                    }
                }
                s4.g gVar = new s4.g(str8, i11, z14);
                iVar.a("Animation contains merge paths. Merge paths are only supported on KitKat+ and must be manually enabled by calling enableMergePathsForKitKatAndAbove().");
                mVar = gVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 6:
                e4.e eVar9 = u.a;
                boolean z15 = false;
                String str9 = null;
                r4.e eVar10 = null;
                r4.a aVar13 = null;
                r4.b bVar5 = null;
                while (bVar.o()) {
                    int P9 = bVar.P(u.a);
                    if (P9 == 0) {
                        str9 = bVar.x();
                    } else if (P9 == 1) {
                        eVar10 = a.b(bVar, iVar);
                    } else if (P9 == 2) {
                        aVar13 = m3.n.C0(bVar, iVar);
                    } else if (P9 == 3) {
                        bVar5 = m3.n.z0(bVar, iVar, true);
                    } else if (P9 != 4) {
                        bVar.R();
                    } else {
                        z15 = bVar.q();
                    }
                }
                eVar = new s4.j(str9, eVar10, aVar13, bVar5, z15);
                mVar = eVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 7:
                e4.e eVar11 = w.a;
                String str10 = null;
                r4.b bVar6 = null;
                while (bVar.o()) {
                    int P10 = bVar.P(w.a);
                    if (P10 == 0) {
                        str10 = bVar.x();
                    } else if (P10 == 1) {
                        bVar6 = m3.n.z0(bVar, iVar, true);
                    } else if (P10 != 2) {
                        bVar.R();
                    } else {
                        z6 = bVar.q();
                    }
                }
                if (!z6) {
                    mVar = new s4.k(str10, bVar6);
                    while (bVar.o()) {
                    }
                    bVar.i();
                    return mVar;
                }
                mVar = null;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case '\b':
                e4.e eVar12 = v.a;
                boolean z16 = false;
                String str11 = null;
                r4.b bVar7 = null;
                r4.b bVar8 = null;
                r4.d dVar = null;
                while (bVar.o()) {
                    int P11 = bVar.P(v.a);
                    if (P11 == 0) {
                        str11 = bVar.x();
                    } else if (P11 == 1) {
                        bVar7 = m3.n.z0(bVar, iVar, false);
                    } else if (P11 == 2) {
                        bVar8 = m3.n.z0(bVar, iVar, false);
                    } else if (P11 == 3) {
                        dVar = c.a(bVar, iVar);
                    } else if (P11 != 4) {
                        bVar.R();
                    } else {
                        z16 = bVar.q();
                    }
                }
                eVar = new s4.j(str11, bVar7, bVar8, dVar, z16);
                mVar = eVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case '\t':
                e4.e eVar13 = a0.a;
                int i20 = 0;
                boolean z17 = false;
                r4.a aVar14 = null;
                String str12 = null;
                while (bVar.o()) {
                    int P12 = bVar.P(a0.a);
                    if (P12 == 0) {
                        str12 = bVar.x();
                    } else if (P12 == 1) {
                        i20 = bVar.t();
                    } else if (P12 == 2) {
                        aVar14 = new r4.a(p.a(bVar, iVar, x4.h.c(), x.f19262d, false), 5);
                    } else if (P12 != 3) {
                        bVar.R();
                    } else {
                        z17 = bVar.q();
                    }
                }
                nVar = new s4.o(str12, i20, aVar14, z17);
                mVar = nVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case '\n':
                e4.e eVar14 = t.a;
                boolean z18 = i10 == 3;
                int i21 = 0;
                boolean z19 = false;
                String str13 = null;
                r4.b bVar9 = null;
                r4.e eVar15 = null;
                r4.b bVar10 = null;
                r4.b bVar11 = null;
                r4.b bVar12 = null;
                r4.b bVar13 = null;
                r4.b bVar14 = null;
                while (bVar.o()) {
                    switch (bVar.P(t.a)) {
                        case 0:
                            str13 = bVar.x();
                            break;
                        case 1:
                            int t10 = bVar.t();
                            int[] c10 = f0.e.c(2);
                            int length = c10.length;
                            int i22 = 0;
                            while (true) {
                                if (i22 >= length) {
                                    i21 = 0;
                                    break;
                                } else {
                                    int i23 = c10[i22];
                                    if (i23 == 1) {
                                        i5 = 1;
                                    } else {
                                        if (i23 != 2) {
                                            throw null;
                                        }
                                        i5 = 2;
                                    }
                                    if (i5 == t10) {
                                        i21 = i23;
                                        break;
                                    } else {
                                        i22++;
                                    }
                                }
                            }
                        case 2:
                            bVar9 = m3.n.z0(bVar, iVar, false);
                            break;
                        case 3:
                            eVar15 = a.b(bVar, iVar);
                            break;
                        case 4:
                            bVar10 = m3.n.z0(bVar, iVar, false);
                            break;
                        case 5:
                            bVar12 = m3.n.z0(bVar, iVar, true);
                            break;
                        case 6:
                            bVar14 = m3.n.z0(bVar, iVar, false);
                            break;
                        case 7:
                            bVar11 = m3.n.z0(bVar, iVar, true);
                            break;
                        case 8:
                            bVar13 = m3.n.z0(bVar, iVar, false);
                            break;
                        case 9:
                            z19 = bVar.q();
                            break;
                        case 10:
                            if (bVar.t() != 3) {
                                z18 = false;
                                break;
                            } else {
                                z18 = true;
                                break;
                            }
                        default:
                            bVar.Q();
                            bVar.R();
                            break;
                    }
                }
                eVar = new s4.i(str13, i21, bVar9, eVar15, bVar10, bVar11, bVar12, bVar13, bVar14, z19, z18);
                mVar = eVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case 11:
                e4.e eVar16 = b0.a;
                ArrayList arrayList3 = new ArrayList();
                int i24 = 0;
                int i25 = 0;
                boolean z20 = false;
                r4.a aVar15 = null;
                String str14 = null;
                r4.b bVar15 = null;
                r4.a aVar16 = null;
                r4.b bVar16 = null;
                float f10 = 0.0f;
                while (bVar.o()) {
                    switch (bVar.P(b0.a)) {
                        case 0:
                            str14 = bVar.x();
                            continue;
                        case 1:
                            aVar16 = m3.n.y0(bVar, iVar);
                            continue;
                        case 2:
                            bVar16 = m3.n.z0(bVar, iVar, true);
                            continue;
                        case 3:
                            aVar15 = m3.n.B0(bVar, iVar);
                            continue;
                        case 4:
                            i24 = f0.e.c(i12)[bVar.t() - 1];
                            continue;
                        case 5:
                            i25 = f0.e.c(i12)[bVar.t() - 1];
                            continue;
                        case 6:
                            i6 = i12;
                            f10 = (float) bVar.r();
                            break;
                        case 7:
                            z20 = bVar.q();
                            continue;
                        case 8:
                            bVar.c();
                            while (bVar.o()) {
                                bVar.f();
                                r4.b bVar17 = null;
                                String str15 = null;
                                while (bVar.o()) {
                                    int i26 = i12;
                                    int P13 = bVar.P(b0.f19233b);
                                    if (P13 == 0) {
                                        str15 = bVar.x();
                                    } else if (P13 != 1) {
                                        bVar.Q();
                                        bVar.R();
                                    } else {
                                        bVar17 = m3.n.z0(bVar, iVar, true);
                                    }
                                    i12 = i26;
                                }
                                int i27 = i12;
                                bVar.i();
                                str15.getClass();
                                switch (str15.hashCode()) {
                                    case 100:
                                        if (str15.equals("d")) {
                                            c8 = 0;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 103:
                                        if (str15.equals("g")) {
                                            c8 = 1;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    case 111:
                                        if (str15.equals("o")) {
                                            c8 = 2;
                                            break;
                                        }
                                        c8 = 65535;
                                        break;
                                    default:
                                        c8 = 65535;
                                        break;
                                }
                                switch (c8) {
                                    case 0:
                                    case 1:
                                        iVar.f13753o = true;
                                        arrayList3.add(bVar17);
                                        break;
                                    case 2:
                                        bVar15 = bVar17;
                                        break;
                                }
                                i12 = i27;
                            }
                            i6 = i12;
                            bVar.g();
                            if (arrayList3.size() == 1) {
                                arrayList3.add((r4.b) arrayList3.get(0));
                                break;
                            }
                            break;
                        default:
                            bVar.R();
                            continue;
                    }
                    i12 = i6;
                }
                if (aVar15 == null) {
                    aVar15 = new r4.a(Collections.singletonList(new y4.a(100)), 2);
                }
                mVar = new s4.p(str14, bVar15, arrayList3, aVar16, aVar15, bVar16, i24 == 0 ? 1 : i24, i25 == 0 ? 1 : i25, f10, z20);
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case '\f':
                e4.e eVar17 = c0.a;
                int i28 = 0;
                boolean z21 = false;
                String str16 = null;
                r4.b bVar18 = null;
                r4.b bVar19 = null;
                r4.b bVar20 = null;
                while (bVar.o()) {
                    int P14 = bVar.P(c0.a);
                    if (P14 == 0) {
                        bVar18 = m3.n.z0(bVar, iVar, false);
                    } else if (P14 == 1) {
                        bVar19 = m3.n.z0(bVar, iVar, false);
                    } else if (P14 == 2) {
                        bVar20 = m3.n.z0(bVar, iVar, false);
                    } else if (P14 == 3) {
                        str16 = bVar.x();
                    } else if (P14 == 4) {
                        int t11 = bVar.t();
                        if (t11 == 1) {
                            i28 = 1;
                        } else {
                            if (t11 != 2) {
                                throw new IllegalArgumentException(k0.d.i(t11, "Unknown trim path type "));
                            }
                            i28 = 2;
                        }
                    } else if (P14 != 5) {
                        bVar.R();
                    } else {
                        z21 = bVar.q();
                    }
                }
                aVar = new s4.q(str16, i28, bVar18, bVar19, bVar20, z21);
                mVar = aVar;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            case '\r':
                mVar = c.a(bVar, iVar);
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
            default:
                x4.c.b("Unknown shape type ".concat(str));
                mVar = null;
                while (bVar.o()) {
                }
                bVar.i();
                return mVar;
        }
    }
}
