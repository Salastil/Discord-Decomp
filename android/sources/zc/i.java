package zc;

import ad.d0;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import hc.f0;
import hc.g1;
import java.util.ArrayList;
import java.util.Arrays;
import jc.o0;
import ke.v;
import ke.w;

/* loaded from: classes3.dex */
public final class i extends h {

    /* renamed from: n, reason: collision with root package name */
    public d0 f21180n;

    /* renamed from: o, reason: collision with root package name */
    public int f21181o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f21182p;

    /* renamed from: q, reason: collision with root package name */
    public o0 f21183q;

    /* renamed from: r, reason: collision with root package name */
    public ve.i f21184r;

    @Override // zc.h
    public final void a(long j) {
        this.f21175g = j;
        this.f21182p = j != 0;
        o0 o0Var = this.f21183q;
        this.f21181o = o0Var != null ? o0Var.f12595e : 0;
    }

    @Override // zc.h
    public final long b(w wVar) {
        byte b10 = wVar.a[0];
        if ((b10 & 1) == 1) {
            return -1L;
        }
        d0 d0Var = this.f21180n;
        ke.b.l(d0Var);
        int i5 = d0Var.f316d;
        o0 o0Var = (o0) d0Var.f317e;
        int i6 = !((com.reactnativecommunity.webview.h[]) d0Var.f320w)[(b10 >> 1) & (255 >>> (8 - i5))].a ? o0Var.f12595e : o0Var.f12596f;
        long j = this.f21182p ? (this.f21181o + i6) / 4 : 0;
        byte[] bArr = wVar.a;
        int length = bArr.length;
        int i10 = wVar.f13364c + 4;
        if (length < i10) {
            byte[] copyOf = Arrays.copyOf(bArr, i10);
            wVar.D(copyOf, copyOf.length);
        } else {
            wVar.E(i10);
        }
        byte[] bArr2 = wVar.a;
        int i11 = wVar.f13364c;
        bArr2[i11 - 4] = (byte) (j & 255);
        bArr2[i11 - 3] = (byte) ((j >>> 8) & 255);
        bArr2[i11 - 2] = (byte) ((j >>> 16) & 255);
        bArr2[i11 - 1] = (byte) ((j >>> 24) & 255);
        this.f21182p = true;
        this.f21181o = i6;
        return j;
    }

    @Override // zc.h
    public final boolean c(w wVar, long j, e4.c cVar) {
        d0 d0Var;
        if (this.f21180n != null) {
            ((Format) cVar.f7939e).getClass();
            return false;
        }
        o0 o0Var = this.f21183q;
        int i5 = 4;
        if (o0Var == null) {
            zk.a.N(1, wVar, false);
            wVar.m();
            int u5 = wVar.u();
            int m5 = wVar.m();
            int i6 = wVar.i();
            if (i6 <= 0) {
                i6 = -1;
            }
            int i10 = wVar.i();
            int i11 = i10 > 0 ? i10 : -1;
            wVar.i();
            int u6 = wVar.u();
            int pow = (int) Math.pow(2.0d, u6 & 15);
            int pow2 = (int) Math.pow(2.0d, (u6 & 240) >> 4);
            wVar.u();
            byte[] copyOf = Arrays.copyOf(wVar.a, wVar.f13364c);
            o0 o0Var2 = new o0();
            o0Var2.a = u5;
            o0Var2.f12592b = m5;
            o0Var2.f12593c = i6;
            o0Var2.f12594d = i11;
            o0Var2.f12595e = pow;
            o0Var2.f12596f = pow2;
            o0Var2.f12597g = copyOf;
            this.f21183q = o0Var2;
        } else {
            ve.i iVar = this.f21184r;
            if (iVar == null) {
                this.f21184r = zk.a.z(wVar, true, true);
            } else {
                int i12 = wVar.f13364c;
                byte[] bArr = new byte[i12];
                System.arraycopy(wVar.a, 0, bArr, 0, i12);
                int i13 = o0Var.a;
                int i14 = 5;
                zk.a.N(5, wVar, false);
                int u10 = wVar.u() + 1;
                v vVar = new v(wVar.a);
                int i15 = 8;
                vVar.s(wVar.f13363b * 8);
                int i16 = 0;
                while (true) {
                    int i17 = 16;
                    if (i16 < u10) {
                        int i18 = i15;
                        if (vVar.i(24) != 5653314) {
                            throw g1.a("expected code book to start with [0x56, 0x43, 0x42] at " + ((vVar.f13358d * 8) + vVar.f13359e), null);
                        }
                        int i19 = vVar.i(16);
                        int i20 = vVar.i(24);
                        if (vVar.h()) {
                            vVar.s(i14);
                            int i21 = 0;
                            while (i21 < i20) {
                                int i22 = 0;
                                for (int i23 = i20 - i21; i23 > 0; i23 >>>= 1) {
                                    i22++;
                                }
                                i21 += vVar.i(i22);
                            }
                        } else {
                            boolean h6 = vVar.h();
                            for (int i24 = 0; i24 < i20; i24++) {
                                if (!h6) {
                                    vVar.s(i14);
                                } else if (vVar.h()) {
                                    vVar.s(i14);
                                }
                            }
                        }
                        int i25 = vVar.i(4);
                        if (i25 > 2) {
                            throw g1.a("lookup type greater than 2 not decodable: " + i25, null);
                        }
                        if (i25 == 1 || i25 == 2) {
                            vVar.s(32);
                            vVar.s(32);
                            int i26 = vVar.i(4) + 1;
                            vVar.s(1);
                            vVar.s((int) ((i25 == 1 ? i19 != 0 ? (long) Math.floor(Math.pow(i20, 1.0d / i19)) : 0L : i20 * i19) * i26));
                        }
                        i16++;
                        i15 = i18;
                        i14 = 5;
                    } else {
                        int i27 = i15;
                        int i28 = 6;
                        int i29 = vVar.i(6) + 1;
                        for (int i30 = 0; i30 < i29; i30++) {
                            if (vVar.i(16) != 0) {
                                throw g1.a("placeholder of time domain transforms not zeroed out", null);
                            }
                        }
                        int i31 = 1;
                        int i32 = vVar.i(6) + 1;
                        int i33 = 0;
                        while (true) {
                            int i34 = 3;
                            if (i33 < i32) {
                                int i35 = vVar.i(i17);
                                if (i35 == 0) {
                                    int i36 = i27;
                                    vVar.s(i36);
                                    vVar.s(16);
                                    vVar.s(16);
                                    vVar.s(6);
                                    vVar.s(i36);
                                    int i37 = vVar.i(4) + 1;
                                    int i38 = 0;
                                    while (i38 < i37) {
                                        vVar.s(i36);
                                        i38++;
                                        i36 = 8;
                                    }
                                } else {
                                    if (i35 != i31) {
                                        throw g1.a("floor type greater than 1 not decodable: " + i35, null);
                                    }
                                    int i39 = vVar.i(5);
                                    int[] iArr = new int[i39];
                                    int i40 = -1;
                                    for (int i41 = 0; i41 < i39; i41++) {
                                        int i42 = vVar.i(i5);
                                        iArr[i41] = i42;
                                        if (i42 > i40) {
                                            i40 = i42;
                                        }
                                    }
                                    int i43 = i40 + 1;
                                    int[] iArr2 = new int[i43];
                                    int i44 = 0;
                                    while (i44 < i43) {
                                        iArr2[i44] = vVar.i(i34) + 1;
                                        int i45 = vVar.i(2);
                                        int i46 = i27;
                                        if (i45 > 0) {
                                            vVar.s(i46);
                                        }
                                        int[] iArr3 = iArr2;
                                        int i47 = 0;
                                        for (int i48 = 1; i47 < (i48 << i45); i48 = 1) {
                                            vVar.s(i46);
                                            i47++;
                                            i46 = 8;
                                        }
                                        i44++;
                                        iArr2 = iArr3;
                                        i27 = 8;
                                        i34 = 3;
                                    }
                                    int[] iArr4 = iArr2;
                                    vVar.s(2);
                                    int i49 = vVar.i(4);
                                    int i50 = 0;
                                    int i51 = 0;
                                    for (int i52 = 0; i52 < i39; i52++) {
                                        i50 += iArr4[iArr[i52]];
                                        while (i51 < i50) {
                                            vVar.s(i49);
                                            i51++;
                                        }
                                    }
                                }
                                i33++;
                                i27 = 8;
                                i28 = 6;
                                i5 = 4;
                                i17 = 16;
                                i31 = 1;
                            } else {
                                int i53 = vVar.i(i28) + 1;
                                int i54 = 0;
                                while (i54 < i53) {
                                    if (vVar.i(16) > 2) {
                                        throw g1.a("residueType greater than 2 is not decodable", null);
                                    }
                                    vVar.s(24);
                                    vVar.s(24);
                                    vVar.s(24);
                                    int i55 = vVar.i(i28) + 1;
                                    int i56 = 8;
                                    vVar.s(8);
                                    int[] iArr5 = new int[i55];
                                    for (int i57 = 0; i57 < i55; i57++) {
                                        iArr5[i57] = ((vVar.h() ? vVar.i(5) : 0) * 8) + vVar.i(3);
                                    }
                                    int i58 = 0;
                                    while (i58 < i55) {
                                        int i59 = 0;
                                        while (i59 < i56) {
                                            if ((iArr5[i58] & (1 << i59)) != 0) {
                                                vVar.s(i56);
                                            }
                                            i59++;
                                            i56 = 8;
                                        }
                                        i58++;
                                        i56 = 8;
                                    }
                                    i54++;
                                    i28 = 6;
                                }
                                int i60 = vVar.i(i28) + 1;
                                for (int i61 = 0; i61 < i60; i61++) {
                                    int i62 = vVar.i(16);
                                    if (i62 != 0) {
                                        ke.b.r("VorbisUtil", "mapping type other than 0 not supported: " + i62);
                                    } else {
                                        int i63 = vVar.h() ? vVar.i(4) + 1 : 1;
                                        if (vVar.h()) {
                                            int i64 = vVar.i(8) + 1;
                                            for (int i65 = 0; i65 < i64; i65++) {
                                                int i66 = i13 - 1;
                                                int i67 = 0;
                                                for (int i68 = i66; i68 > 0; i68 >>>= 1) {
                                                    i67++;
                                                }
                                                vVar.s(i67);
                                                int i69 = 0;
                                                while (i66 > 0) {
                                                    i69++;
                                                    i66 >>>= 1;
                                                }
                                                vVar.s(i69);
                                            }
                                        }
                                        if (vVar.i(2) != 0) {
                                            throw g1.a("to reserved bits must be zero after mapping coupling steps", null);
                                        }
                                        if (i63 > 1) {
                                            for (int i70 = 0; i70 < i13; i70++) {
                                                vVar.s(4);
                                            }
                                        }
                                        for (int i71 = 0; i71 < i63; i71++) {
                                            vVar.s(8);
                                            vVar.s(8);
                                            vVar.s(8);
                                        }
                                    }
                                }
                                int i72 = vVar.i(6);
                                int i73 = i72 + 1;
                                com.reactnativecommunity.webview.h[] hVarArr = new com.reactnativecommunity.webview.h[i73];
                                for (int i74 = 0; i74 < i73; i74++) {
                                    boolean h7 = vVar.h();
                                    vVar.i(16);
                                    vVar.i(16);
                                    vVar.i(8);
                                    com.reactnativecommunity.webview.h hVar = new com.reactnativecommunity.webview.h();
                                    hVar.a = h7;
                                    hVarArr[i74] = hVar;
                                }
                                if (!vVar.h()) {
                                    throw g1.a("framing bit after modes not set as expected", null);
                                }
                                int i75 = 0;
                                while (i72 > 0) {
                                    i75++;
                                    i72 >>>= 1;
                                }
                                d0Var = new d0(o0Var, iVar, bArr, hVarArr, i75);
                            }
                        }
                    }
                }
            }
        }
        d0Var = null;
        this.f21180n = d0Var;
        if (d0Var == null) {
            return true;
        }
        o0 o0Var3 = (o0) d0Var.f317e;
        ArrayList arrayList = new ArrayList();
        arrayList.add((byte[]) o0Var3.f12597g);
        arrayList.add((byte[]) d0Var.f319v);
        Metadata y5 = zk.a.y(e0.m((String[]) ((ve.i) d0Var.f318i).f19405d));
        f0 f0Var = new f0();
        f0Var.k = "audio/vorbis";
        f0Var.f9674f = o0Var3.f12594d;
        f0Var.f9675g = o0Var3.f12593c;
        f0Var.f9690x = o0Var3.a;
        f0Var.f9691y = o0Var3.f12592b;
        f0Var.f9679m = arrayList;
        f0Var.f9677i = y5;
        cVar.f7939e = new Format(f0Var);
        return true;
    }

    @Override // zc.h
    public final void d(boolean z5) {
        super.d(z5);
        if (z5) {
            this.f21180n = null;
            this.f21183q = null;
            this.f21184r = null;
        }
        this.f21181o = 0;
        this.f21182p = false;
    }
}
