package v4;

import android.graphics.Color;
import android.view.animation.BaseInterpolator;
import java.util.ArrayList;
import java.util.Collections;

/* loaded from: classes.dex */
public abstract class q {
    public static final e4.e a = e4.e.x("nm", "ind", "refId", "ty", "parent", "sw", "sh", "sc", "ks", "tt", "masksProperties", "shapes", "t", "ef", "sr", "st", "w", "h", "ip", "op", "tm", "cl", "hd", "ao", "bm");

    /* renamed from: b, reason: collision with root package name */
    public static final e4.e f19257b = e4.e.x("d", "a");

    /* renamed from: c, reason: collision with root package name */
    public static final e4.e f19258c = e4.e.x("ty", "nm");

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to find 'out' block for switch in B:6:0x0060. Please report as an issue. */
    /* JADX WARN: Removed duplicated region for block: B:5:0x0058  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static t4.e a(w4.b bVar, l4.i iVar) {
        String str;
        boolean z5;
        r4.d dVar;
        Float f2;
        String str2;
        boolean z6;
        long j;
        char c6;
        char c8;
        Float f10;
        Float f11;
        String str3;
        long j5;
        boolean z7;
        long j7;
        r4.a aVar;
        r4.b bVar2;
        r4.b bVar3;
        r4.b bVar4;
        r4.b bVar5;
        char c10;
        Float valueOf = Float.valueOf(0.0f);
        Float valueOf2 = Float.valueOf(1.0f);
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        bVar.f();
        float f12 = 0.0f;
        float f13 = 0.0f;
        float f14 = 0.0f;
        float f15 = 0.0f;
        float f16 = 0.0f;
        long j10 = -1;
        r4.d dVar2 = null;
        int i5 = 0;
        String str4 = null;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        boolean z8 = false;
        r3.g gVar = null;
        am.f fVar = null;
        int i12 = 1;
        int i13 = 1;
        r4.a aVar2 = null;
        e4.r rVar = null;
        r4.b bVar6 = null;
        float f17 = 1.0f;
        long j11 = 0;
        String str5 = null;
        String str6 = "UNSET";
        while (true) {
            boolean z10 = false;
            while (bVar.o()) {
                switch (bVar.P(a)) {
                    case 0:
                        str6 = bVar.x();
                    case 1:
                        f10 = valueOf;
                        j11 = bVar.t();
                        valueOf = f10;
                    case 2:
                        str4 = bVar.x();
                    case 3:
                        f2 = valueOf;
                        str2 = str5;
                        z6 = z10;
                        j = j10;
                        int t5 = bVar.t();
                        i5 = 7;
                        if (t5 < 6) {
                            i5 = f0.e.c(7)[t5];
                        }
                        valueOf = f2;
                        str5 = str2;
                        z10 = z6;
                        j10 = j;
                    case 4:
                        f10 = valueOf;
                        j10 = bVar.t();
                        valueOf = f10;
                    case 5:
                        f11 = valueOf;
                        str3 = str5;
                        i6 = (int) (x4.h.c() * bVar.t());
                        valueOf = f11;
                        str5 = str3;
                    case 6:
                        f11 = valueOf;
                        str3 = str5;
                        i10 = (int) (x4.h.c() * bVar.t());
                        valueOf = f11;
                        str5 = str3;
                    case 7:
                        f10 = valueOf;
                        i11 = Color.parseColor(bVar.x());
                        valueOf = f10;
                    case 8:
                        dVar2 = c.a(bVar, iVar);
                    case 9:
                        f2 = valueOf;
                        str2 = str5;
                        z6 = z10;
                        j = j10;
                        int t10 = bVar.t();
                        if (t10 >= f0.e.c(6).length) {
                            iVar.a("Unsupported matte type: " + t10);
                        } else {
                            i12 = f0.e.c(6)[t10];
                            int b10 = f0.e.b(i12);
                            if (b10 == 3) {
                                iVar.a("Unsupported matte type: Luma");
                            } else if (b10 == 4) {
                                iVar.a("Unsupported matte type: Luma Inverted");
                            }
                            iVar.f13754p++;
                        }
                        valueOf = f2;
                        str5 = str2;
                        z10 = z6;
                        j10 = j;
                    case 10:
                        f2 = valueOf;
                        str2 = str5;
                        z6 = z10;
                        j = j10;
                        bVar.c();
                        while (bVar.o()) {
                            bVar.f();
                            boolean z11 = false;
                            r4.a aVar3 = null;
                            int i14 = 0;
                            r4.a aVar4 = null;
                            while (bVar.o()) {
                                String j02 = bVar.j0();
                                j02.getClass();
                                switch (j02.hashCode()) {
                                    case 111:
                                        if (j02.equals("o")) {
                                            c6 = 0;
                                            break;
                                        }
                                        c6 = 65535;
                                        break;
                                    case 3588:
                                        if (j02.equals("pt")) {
                                            c6 = 1;
                                            break;
                                        }
                                        c6 = 65535;
                                        break;
                                    case 104433:
                                        if (j02.equals("inv")) {
                                            c6 = 2;
                                            break;
                                        }
                                        c6 = 65535;
                                        break;
                                    case 3357091:
                                        if (j02.equals("mode")) {
                                            c6 = 3;
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
                                        aVar4 = m3.n.B0(bVar, iVar);
                                        break;
                                    case 1:
                                        aVar3 = new r4.a(p.a(bVar, iVar, x4.h.c(), x.f19262d, false), 5);
                                        break;
                                    case 2:
                                        z11 = bVar.q();
                                        break;
                                    case 3:
                                        String x5 = bVar.x();
                                        x5.getClass();
                                        switch (x5.hashCode()) {
                                            case 97:
                                                if (x5.equals("a")) {
                                                    c8 = 0;
                                                    break;
                                                }
                                                c8 = 65535;
                                                break;
                                            case 105:
                                                if (x5.equals("i")) {
                                                    c8 = 1;
                                                    break;
                                                }
                                                c8 = 65535;
                                                break;
                                            case 110:
                                                if (x5.equals("n")) {
                                                    c8 = 2;
                                                    break;
                                                }
                                                c8 = 65535;
                                                break;
                                            case 115:
                                                if (x5.equals("s")) {
                                                    c8 = 3;
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
                                                i14 = 1;
                                                break;
                                            case 1:
                                                iVar.a("Animation contains intersect masks. They are not supported but will be treated like add masks.");
                                                i14 = 3;
                                                break;
                                            case 2:
                                                i14 = 4;
                                                break;
                                            case 3:
                                                i14 = 2;
                                                break;
                                            default:
                                                x4.c.b("Unknown mask mode " + j02 + ". Defaulting to Add.");
                                                i14 = 1;
                                                break;
                                        }
                                        break;
                                    default:
                                        bVar.R();
                                        break;
                                }
                            }
                            bVar.i();
                            arrayList.add(new s4.f(i14, aVar3, aVar4, z11));
                        }
                        iVar.f13754p += arrayList.size();
                        bVar.g();
                        valueOf = f2;
                        str5 = str2;
                        z10 = z6;
                        j10 = j;
                    case 11:
                        f2 = valueOf;
                        str2 = str5;
                        z6 = z10;
                        j = j10;
                        bVar.c();
                        while (bVar.o()) {
                            s4.b a10 = g.a(bVar, iVar);
                            if (a10 != null) {
                                arrayList2.add(a10);
                            }
                        }
                        bVar.g();
                        valueOf = f2;
                        str5 = str2;
                        z10 = z6;
                        j10 = j;
                    case 12:
                        f11 = valueOf;
                        str3 = str5;
                        bVar.f();
                        while (bVar.o()) {
                            int P = bVar.P(f19257b);
                            if (P == 0) {
                                j5 = j10;
                                aVar2 = new r4.a(p.a(bVar, iVar, x4.h.c(), h.f19243d, false), 6);
                            } else if (P != 1) {
                                bVar.Q();
                                bVar.R();
                            } else {
                                bVar.c();
                                if (bVar.o()) {
                                    e4.e eVar = b.a;
                                    bVar.f();
                                    f9.b bVar7 = null;
                                    xe.k kVar = null;
                                    while (bVar.o()) {
                                        int P2 = bVar.P(b.a);
                                        if (P2 != 0) {
                                            boolean z12 = true;
                                            if (P2 != 1) {
                                                bVar.Q();
                                                bVar.R();
                                            } else {
                                                bVar.f();
                                                r4.a aVar5 = null;
                                                r4.a aVar6 = null;
                                                r4.b bVar8 = null;
                                                r4.b bVar9 = null;
                                                r4.a aVar7 = null;
                                                while (bVar.o()) {
                                                    int P3 = bVar.P(b.f19232c);
                                                    if (P3 == 0) {
                                                        aVar5 = m3.n.y0(bVar, iVar);
                                                    } else if (P3 == z12) {
                                                        aVar6 = m3.n.y0(bVar, iVar);
                                                    } else if (P3 == 2) {
                                                        bVar8 = m3.n.z0(bVar, iVar, z12);
                                                    } else if (P3 == 3) {
                                                        bVar9 = m3.n.z0(bVar, iVar, z12);
                                                    } else if (P3 != 4) {
                                                        bVar.Q();
                                                        bVar.R();
                                                    } else {
                                                        aVar7 = m3.n.B0(bVar, iVar);
                                                    }
                                                    z12 = true;
                                                }
                                                bVar.i();
                                                bVar7 = new f9.b(aVar5, aVar6, bVar8, bVar9, aVar7);
                                            }
                                        } else {
                                            bVar.f();
                                            int i15 = 0;
                                            r4.a aVar8 = null;
                                            r4.a aVar9 = null;
                                            r4.a aVar10 = null;
                                            while (bVar.o()) {
                                                r4.a aVar11 = aVar8;
                                                int P4 = bVar.P(b.f19231b);
                                                if (P4 != 0) {
                                                    boolean z13 = z10;
                                                    if (P4 == 1) {
                                                        aVar9 = m3.n.B0(bVar, iVar);
                                                    } else if (P4 == 2) {
                                                        aVar10 = m3.n.B0(bVar, iVar);
                                                    } else if (P4 != 3) {
                                                        bVar.Q();
                                                        bVar.R();
                                                    } else {
                                                        int t11 = bVar.t();
                                                        if (t11 == 1 || t11 == 2) {
                                                            i15 = t11 == 1 ? 1 : 2;
                                                        } else {
                                                            iVar.a("Unsupported text range units: " + t11);
                                                            aVar8 = aVar11;
                                                            z10 = z13;
                                                            i15 = 2;
                                                        }
                                                    }
                                                    aVar8 = aVar11;
                                                    z10 = z13;
                                                } else {
                                                    aVar8 = m3.n.B0(bVar, iVar);
                                                }
                                            }
                                            r4.a aVar12 = aVar8;
                                            boolean z14 = z10;
                                            bVar.i();
                                            if (aVar12 != null || aVar9 == null) {
                                                j7 = j10;
                                                aVar = aVar12;
                                            } else {
                                                j7 = j10;
                                                aVar = new r4.a(Collections.singletonList(new y4.a(0)), 2);
                                            }
                                            kVar = new xe.k(aVar, aVar9, aVar10, i15);
                                            z10 = z14;
                                            j10 = j7;
                                        }
                                    }
                                    z7 = z10;
                                    j5 = j10;
                                    bVar.i();
                                    rVar = new e4.r(19, bVar7, kVar);
                                } else {
                                    z7 = z10;
                                    j5 = j10;
                                }
                                while (bVar.o()) {
                                    bVar.R();
                                }
                                bVar.g();
                                z10 = z7;
                            }
                            j10 = j5;
                        }
                        bVar.i();
                        valueOf = f11;
                        str5 = str3;
                        break;
                    case 13:
                        f11 = valueOf;
                        str3 = str5;
                        bVar.c();
                        ArrayList arrayList3 = new ArrayList();
                        while (bVar.o()) {
                            bVar.f();
                            while (bVar.o()) {
                                int P5 = bVar.P(f19258c);
                                if (P5 == 0) {
                                    int t12 = bVar.t();
                                    if (t12 == 29) {
                                        e4.e eVar2 = d.a;
                                        gVar = null;
                                        while (bVar.o()) {
                                            if (bVar.P(d.a) != 0) {
                                                bVar.Q();
                                                bVar.R();
                                            } else {
                                                bVar.c();
                                                while (bVar.o()) {
                                                    bVar.f();
                                                    boolean z15 = false;
                                                    r3.g gVar2 = null;
                                                    while (bVar.o()) {
                                                        int P6 = bVar.P(d.f19235b);
                                                        if (P6 == 0) {
                                                            z15 = bVar.t() == 0;
                                                        } else if (P6 != 1) {
                                                            bVar.Q();
                                                            bVar.R();
                                                        } else if (z15) {
                                                            gVar2 = new r3.g(1, m3.n.z0(bVar, iVar, true));
                                                        } else {
                                                            bVar.R();
                                                        }
                                                    }
                                                    bVar.i();
                                                    if (gVar2 != null) {
                                                        gVar = gVar2;
                                                    }
                                                }
                                                bVar.g();
                                            }
                                        }
                                    } else if (t12 == 25) {
                                        i iVar2 = new i();
                                        while (bVar.o()) {
                                            if (bVar.P(i.f19245f) != 0) {
                                                bVar.Q();
                                                bVar.R();
                                            } else {
                                                bVar.c();
                                                while (bVar.o()) {
                                                    bVar.f();
                                                    String str7 = "";
                                                    while (bVar.o()) {
                                                        int P7 = bVar.P(i.f19246g);
                                                        if (P7 == 0) {
                                                            str7 = bVar.x();
                                                        } else if (P7 == 1) {
                                                            str7.getClass();
                                                            switch (str7.hashCode()) {
                                                                case 353103893:
                                                                    if (str7.equals("Distance")) {
                                                                        c10 = 0;
                                                                        break;
                                                                    }
                                                                    c10 = 65535;
                                                                    break;
                                                                case 397447147:
                                                                    if (str7.equals("Opacity")) {
                                                                        c10 = 1;
                                                                        break;
                                                                    }
                                                                    c10 = 65535;
                                                                    break;
                                                                case 1041377119:
                                                                    if (str7.equals("Direction")) {
                                                                        c10 = 2;
                                                                        break;
                                                                    }
                                                                    c10 = 65535;
                                                                    break;
                                                                case 1379387491:
                                                                    if (str7.equals("Shadow Color")) {
                                                                        c10 = 3;
                                                                        break;
                                                                    }
                                                                    c10 = 65535;
                                                                    break;
                                                                case 1383710113:
                                                                    if (str7.equals("Softness")) {
                                                                        c10 = 4;
                                                                        break;
                                                                    }
                                                                    c10 = 65535;
                                                                    break;
                                                                default:
                                                                    c10 = 65535;
                                                                    break;
                                                            }
                                                            switch (c10) {
                                                                case 0:
                                                                    iVar2.f19249d = m3.n.z0(bVar, iVar, true);
                                                                    break;
                                                                case 1:
                                                                    iVar2.f19247b = m3.n.z0(bVar, iVar, false);
                                                                    break;
                                                                case 2:
                                                                    iVar2.f19248c = m3.n.z0(bVar, iVar, false);
                                                                    break;
                                                                case 3:
                                                                    iVar2.a = m3.n.y0(bVar, iVar);
                                                                    break;
                                                                case 4:
                                                                    iVar2.f19250e = m3.n.z0(bVar, iVar, true);
                                                                    break;
                                                                default:
                                                                    bVar.R();
                                                                    break;
                                                            }
                                                        } else {
                                                            bVar.Q();
                                                            bVar.R();
                                                        }
                                                    }
                                                    bVar.i();
                                                }
                                                bVar.g();
                                            }
                                        }
                                        r4.a aVar13 = iVar2.a;
                                        fVar = (aVar13 == null || (bVar2 = iVar2.f19247b) == null || (bVar3 = iVar2.f19248c) == null || (bVar4 = iVar2.f19249d) == null || (bVar5 = iVar2.f19250e) == null) ? null : new am.f(aVar13, bVar2, bVar3, bVar4, bVar5);
                                    }
                                } else if (P5 != 1) {
                                    bVar.Q();
                                    bVar.R();
                                } else {
                                    arrayList3.add(bVar.x());
                                }
                            }
                            bVar.i();
                        }
                        bVar.g();
                        iVar.a("Lottie doesn't support layer effects. If you are using them for  fills, strokes, trim paths etc. then try adding them directly as contents  in your shape. Found: " + arrayList3);
                        valueOf = f11;
                        str5 = str3;
                        break;
                    case 14:
                        f11 = valueOf;
                        str3 = str5;
                        f17 = (float) bVar.r();
                        valueOf = f11;
                        str5 = str3;
                    case 15:
                        f11 = valueOf;
                        str3 = str5;
                        f16 = (float) bVar.r();
                        valueOf = f11;
                        str5 = str3;
                    case 16:
                        f11 = valueOf;
                        str3 = str5;
                        f14 = (float) (bVar.r() * x4.h.c());
                        valueOf = f11;
                        str5 = str3;
                    case 17:
                        f11 = valueOf;
                        str3 = str5;
                        f15 = (float) (bVar.r() * x4.h.c());
                        valueOf = f11;
                        str5 = str3;
                    case 18:
                        f12 = (float) bVar.r();
                    case 19:
                        f13 = (float) bVar.r();
                    case 20:
                        bVar6 = m3.n.z0(bVar, iVar, false);
                    case 21:
                        str5 = bVar.x();
                    case 22:
                        z8 = bVar.q();
                    case 23:
                        if (bVar.t() == 1) {
                            z10 = true;
                        }
                        break;
                    case 24:
                        int t13 = bVar.t();
                        if (t13 >= f0.e.c(18).length) {
                            iVar.a("Unsupported Blend Mode: " + t13);
                            i13 = 1;
                        } else {
                            i13 = f0.e.c(18)[t13];
                        }
                    default:
                        bVar.Q();
                        bVar.R();
                        f2 = valueOf;
                        str2 = str5;
                        z6 = z10;
                        j = j10;
                        valueOf = f2;
                        str5 = str2;
                        z10 = z6;
                        j10 = j;
                }
                while (bVar.o()) {
                }
            }
            Float f18 = valueOf;
            String str8 = str5;
            boolean z16 = z10;
            long j12 = j10;
            bVar.i();
            ArrayList arrayList4 = new ArrayList();
            if (f12 > 0.0f) {
                str = str8;
                z5 = z16;
                arrayList4.add(new y4.a(iVar, f18, f18, (BaseInterpolator) null, 0.0f, Float.valueOf(f12)));
            } else {
                str = str8;
                z5 = z16;
            }
            if (f13 <= 0.0f) {
                f13 = iVar.f13751m;
            }
            arrayList4.add(new y4.a(iVar, valueOf2, valueOf2, (BaseInterpolator) null, f12, Float.valueOf(f13)));
            arrayList4.add(new y4.a(iVar, f18, f18, (BaseInterpolator) null, f13, Float.valueOf(Float.MAX_VALUE)));
            if (str6.endsWith(".ai") || "ai".equals(str)) {
                iVar.a("Convert your Illustrator layers to shape layers.");
            }
            if (z5) {
                if (dVar2 == null) {
                    dVar2 = new r4.d();
                }
                r4.d dVar3 = dVar2;
                dVar3.j = z5;
                dVar = dVar3;
            } else {
                dVar = dVar2;
            }
            return new t4.e(arrayList2, iVar, str6, j11, i5, j12, str4, arrayList, dVar, i6, i10, i11, f17, f16, f14, f15, aVar2, rVar, arrayList4, i12, bVar6, z8, gVar, fVar, i13);
        }
    }
}
