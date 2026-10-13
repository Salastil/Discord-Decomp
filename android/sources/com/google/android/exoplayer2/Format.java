package com.google.android.exoplayer2;

import com.google.android.exoplayer2.metadata.Metadata;
import hc.f0;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.UUID;
import ke.d0;
import ke.o;

/* loaded from: classes3.dex */
public final class Format implements hc.g {
    public final int E;
    public final String F;
    public final Metadata G;
    public final String H;
    public final String I;
    public final int J;
    public final List K;
    public final nc.i L;
    public final long M;
    public final int N;
    public final int O;
    public final float P;
    public final int Q;
    public final float R;
    public final byte[] S;
    public final int T;
    public final le.b U;
    public final int V;
    public final int W;
    public final int X;
    public final int Y;
    public final int Z;
    public final int a0;

    /* renamed from: b0, reason: collision with root package name */
    public final int f5223b0;

    /* renamed from: c0, reason: collision with root package name */
    public final int f5224c0;

    /* renamed from: d, reason: collision with root package name */
    public final String f5225d;

    /* renamed from: d0, reason: collision with root package name */
    public final int f5226d0;

    /* renamed from: e, reason: collision with root package name */
    public final String f5227e;

    /* renamed from: e0, reason: collision with root package name */
    public int f5228e0;

    /* renamed from: i, reason: collision with root package name */
    public final String f5229i;

    /* renamed from: v, reason: collision with root package name */
    public final int f5230v;

    /* renamed from: w, reason: collision with root package name */
    public final int f5231w;

    /* renamed from: x, reason: collision with root package name */
    public final int f5232x;

    /* renamed from: y, reason: collision with root package name */
    public final int f5233y;

    /* renamed from: f0, reason: collision with root package name */
    public static final Format f5203f0 = new Format(new f0());

    /* renamed from: g0, reason: collision with root package name */
    public static final String f5204g0 = Integer.toString(0, 36);
    public static final String h0 = Integer.toString(1, 36);

    /* renamed from: i0, reason: collision with root package name */
    public static final String f5205i0 = Integer.toString(2, 36);

    /* renamed from: j0, reason: collision with root package name */
    public static final String f5206j0 = Integer.toString(3, 36);

    /* renamed from: k0, reason: collision with root package name */
    public static final String f5207k0 = Integer.toString(4, 36);

    /* renamed from: l0, reason: collision with root package name */
    public static final String f5208l0 = Integer.toString(5, 36);

    /* renamed from: m0, reason: collision with root package name */
    public static final String f5209m0 = Integer.toString(6, 36);

    /* renamed from: n0, reason: collision with root package name */
    public static final String f5210n0 = Integer.toString(7, 36);

    /* renamed from: o0, reason: collision with root package name */
    public static final String f5211o0 = Integer.toString(8, 36);

    /* renamed from: p0, reason: collision with root package name */
    public static final String f5212p0 = Integer.toString(9, 36);

    /* renamed from: q0, reason: collision with root package name */
    public static final String f5213q0 = Integer.toString(10, 36);

    /* renamed from: r0, reason: collision with root package name */
    public static final String f5214r0 = Integer.toString(11, 36);

    /* renamed from: s0, reason: collision with root package name */
    public static final String f5215s0 = Integer.toString(12, 36);

    /* renamed from: t0, reason: collision with root package name */
    public static final String f5216t0 = Integer.toString(13, 36);

    /* renamed from: u0, reason: collision with root package name */
    public static final String f5217u0 = Integer.toString(14, 36);

    /* renamed from: v0, reason: collision with root package name */
    public static final String f5218v0 = Integer.toString(15, 36);

    /* renamed from: w0, reason: collision with root package name */
    public static final String f5219w0 = Integer.toString(16, 36);

    /* renamed from: x0, reason: collision with root package name */
    public static final String f5220x0 = Integer.toString(17, 36);

    /* renamed from: y0, reason: collision with root package name */
    public static final String f5221y0 = Integer.toString(18, 36);

    /* renamed from: z0, reason: collision with root package name */
    public static final String f5222z0 = Integer.toString(19, 36);
    public static final String A0 = Integer.toString(20, 36);
    public static final String B0 = Integer.toString(21, 36);
    public static final String C0 = Integer.toString(22, 36);
    public static final String D0 = Integer.toString(23, 36);
    public static final String E0 = Integer.toString(24, 36);
    public static final String F0 = Integer.toString(25, 36);
    public static final String G0 = Integer.toString(26, 36);
    public static final String H0 = Integer.toString(27, 36);
    public static final String I0 = Integer.toString(28, 36);
    public static final String J0 = Integer.toString(29, 36);
    public static final String K0 = Integer.toString(30, 36);
    public static final String L0 = Integer.toString(31, 36);
    public static final hb.a M0 = new hb.a(8);

    public Format(f0 f0Var) {
        this.f5225d = f0Var.a;
        this.f5227e = f0Var.f9670b;
        this.f5229i = d0.J(f0Var.f9671c);
        this.f5230v = f0Var.f9672d;
        this.f5231w = f0Var.f9673e;
        int i5 = f0Var.f9674f;
        this.f5232x = i5;
        int i6 = f0Var.f9675g;
        this.f5233y = i6;
        this.E = i6 != -1 ? i6 : i5;
        this.F = f0Var.f9676h;
        this.G = f0Var.f9677i;
        this.H = f0Var.j;
        this.I = f0Var.k;
        this.J = f0Var.f9678l;
        List list = f0Var.f9679m;
        this.K = list == null ? Collections.EMPTY_LIST : list;
        nc.i iVar = f0Var.f9680n;
        this.L = iVar;
        this.M = f0Var.f9681o;
        this.N = f0Var.f9682p;
        this.O = f0Var.f9683q;
        this.P = f0Var.f9684r;
        int i10 = f0Var.f9685s;
        this.Q = i10 == -1 ? 0 : i10;
        float f2 = f0Var.f9686t;
        this.R = f2 == -1.0f ? 1.0f : f2;
        this.S = f0Var.f9687u;
        this.T = f0Var.f9688v;
        this.U = f0Var.f9689w;
        this.V = f0Var.f9690x;
        this.W = f0Var.f9691y;
        this.X = f0Var.f9692z;
        int i11 = f0Var.A;
        this.Y = i11 == -1 ? 0 : i11;
        int i12 = f0Var.B;
        this.Z = i12 != -1 ? i12 : 0;
        this.a0 = f0Var.C;
        this.f5223b0 = f0Var.D;
        this.f5224c0 = f0Var.E;
        int i13 = f0Var.F;
        if (i13 != 0 || iVar == null) {
            this.f5226d0 = i13;
        } else {
            this.f5226d0 = 1;
        }
    }

    public final f0 a() {
        f0 f0Var = new f0();
        f0Var.a = this.f5225d;
        f0Var.f9670b = this.f5227e;
        f0Var.f9671c = this.f5229i;
        f0Var.f9672d = this.f5230v;
        f0Var.f9673e = this.f5231w;
        f0Var.f9674f = this.f5232x;
        f0Var.f9675g = this.f5233y;
        f0Var.f9676h = this.F;
        f0Var.f9677i = this.G;
        f0Var.j = this.H;
        f0Var.k = this.I;
        f0Var.f9678l = this.J;
        f0Var.f9679m = this.K;
        f0Var.f9680n = this.L;
        f0Var.f9681o = this.M;
        f0Var.f9682p = this.N;
        f0Var.f9683q = this.O;
        f0Var.f9684r = this.P;
        f0Var.f9685s = this.Q;
        f0Var.f9686t = this.R;
        f0Var.f9687u = this.S;
        f0Var.f9688v = this.T;
        f0Var.f9689w = this.U;
        f0Var.f9690x = this.V;
        f0Var.f9691y = this.W;
        f0Var.f9692z = this.X;
        f0Var.A = this.Y;
        f0Var.B = this.Z;
        f0Var.C = this.a0;
        f0Var.D = this.f5223b0;
        f0Var.E = this.f5224c0;
        f0Var.F = this.f5226d0;
        return f0Var;
    }

    public final boolean b(Format format) {
        List list = this.K;
        if (list.size() != format.K.size()) {
            return false;
        }
        for (int i5 = 0; i5 < list.size(); i5++) {
            if (!Arrays.equals((byte[]) list.get(i5), (byte[]) format.K.get(i5))) {
                return false;
            }
        }
        return true;
    }

    public final Format c(Format format) {
        String str;
        String str2;
        int i5;
        int i6;
        if (this == format) {
            return this;
        }
        int h6 = o.h(this.I);
        String str3 = format.f5225d;
        Metadata metadata = format.G;
        String str4 = format.f5227e;
        if (str4 == null) {
            str4 = this.f5227e;
        }
        if ((h6 != 3 && h6 != 1) || (str = format.f5229i) == null) {
            str = this.f5229i;
        }
        int i10 = this.f5232x;
        if (i10 == -1) {
            i10 = format.f5232x;
        }
        int i11 = this.f5233y;
        if (i11 == -1) {
            i11 = format.f5233y;
        }
        String str5 = this.F;
        if (str5 == null) {
            String q5 = d0.q(h6, format.F);
            if (d0.S(q5).length == 1) {
                str5 = q5;
            }
        }
        Metadata metadata2 = this.G;
        if (metadata2 != null) {
            metadata = metadata == null ? metadata2 : metadata2.a(metadata.f5427d);
        }
        float f2 = this.P;
        if (f2 == -1.0f && h6 == 2) {
            f2 = format.P;
        }
        int i12 = this.f5230v | format.f5230v;
        int i13 = this.f5231w | format.f5231w;
        nc.i iVar = format.L;
        ArrayList arrayList = new ArrayList();
        if (iVar != null) {
            str2 = iVar.f15039i;
            nc.h[] hVarArr = iVar.f15037d;
            int length = hVarArr.length;
            int i14 = 0;
            while (i14 < length) {
                nc.h[] hVarArr2 = hVarArr;
                nc.h hVar = hVarArr2[i14];
                int i15 = length;
                if (hVar.f15036w != null) {
                    arrayList.add(hVar);
                }
                i14++;
                hVarArr = hVarArr2;
                length = i15;
            }
        } else {
            str2 = null;
        }
        nc.i iVar2 = this.L;
        if (iVar2 != null) {
            if (str2 == null) {
                str2 = iVar2.f15039i;
            }
            int size = arrayList.size();
            nc.h[] hVarArr3 = iVar2.f15037d;
            int length2 = hVarArr3.length;
            int i16 = 0;
            while (i16 < length2) {
                int i17 = i16;
                nc.h hVar2 = hVarArr3[i17];
                nc.h[] hVarArr4 = hVarArr3;
                if (hVar2.f15036w != null) {
                    UUID uuid = hVar2.f15033e;
                    i6 = length2;
                    int i18 = 0;
                    while (true) {
                        if (i18 >= size) {
                            i5 = size;
                            arrayList.add(hVar2);
                            break;
                        }
                        i5 = size;
                        if (((nc.h) arrayList.get(i18)).f15033e.equals(uuid)) {
                            break;
                        }
                        i18++;
                        size = i5;
                    }
                } else {
                    i5 = size;
                    i6 = length2;
                }
                i16 = i17 + 1;
                hVarArr3 = hVarArr4;
                length2 = i6;
                size = i5;
            }
        }
        nc.i iVar3 = arrayList.isEmpty() ? null : new nc.i(str2, arrayList);
        f0 a = a();
        a.a = str3;
        a.f9670b = str4;
        a.f9671c = str;
        a.f9672d = i12;
        a.f9673e = i13;
        a.f9674f = i10;
        a.f9675g = i11;
        a.f9676h = str5;
        a.f9677i = metadata;
        a.f9680n = iVar3;
        a.f9684r = f2;
        return new Format(a);
    }

    public final boolean equals(Object obj) {
        int i5;
        if (this == obj) {
            return true;
        }
        if (obj != null && Format.class == obj.getClass()) {
            Format format = (Format) obj;
            int i6 = this.f5228e0;
            if ((i6 == 0 || (i5 = format.f5228e0) == 0 || i6 == i5) && this.f5230v == format.f5230v && this.f5231w == format.f5231w && this.f5232x == format.f5232x && this.f5233y == format.f5233y && this.J == format.J && this.M == format.M && this.N == format.N && this.O == format.O && this.Q == format.Q && this.T == format.T && this.V == format.V && this.W == format.W && this.X == format.X && this.Y == format.Y && this.Z == format.Z && this.a0 == format.a0 && this.f5223b0 == format.f5223b0 && this.f5224c0 == format.f5224c0 && this.f5226d0 == format.f5226d0 && Float.compare(this.P, format.P) == 0 && Float.compare(this.R, format.R) == 0 && d0.a(this.f5225d, format.f5225d) && d0.a(this.f5227e, format.f5227e) && d0.a(this.F, format.F) && d0.a(this.H, format.H) && d0.a(this.I, format.I) && d0.a(this.f5229i, format.f5229i) && Arrays.equals(this.S, format.S) && d0.a(this.G, format.G) && d0.a(this.U, format.U) && d0.a(this.L, format.L) && b(format)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f5228e0 == 0) {
            String str = this.f5225d;
            int hashCode = (527 + (str == null ? 0 : str.hashCode())) * 31;
            String str2 = this.f5227e;
            int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
            String str3 = this.f5229i;
            int hashCode3 = (((((((((hashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31) + this.f5230v) * 31) + this.f5231w) * 31) + this.f5232x) * 31) + this.f5233y) * 31;
            String str4 = this.F;
            int hashCode4 = (hashCode3 + (str4 == null ? 0 : str4.hashCode())) * 31;
            Metadata metadata = this.G;
            int hashCode5 = (hashCode4 + (metadata == null ? 0 : metadata.hashCode())) * 31;
            String str5 = this.H;
            int hashCode6 = (hashCode5 + (str5 == null ? 0 : str5.hashCode())) * 31;
            String str6 = this.I;
            this.f5228e0 = ((((((((((((((((((((Float.floatToIntBits(this.R) + ((((Float.floatToIntBits(this.P) + ((((((((((hashCode6 + (str6 != null ? str6.hashCode() : 0)) * 31) + this.J) * 31) + ((int) this.M)) * 31) + this.N) * 31) + this.O) * 31)) * 31) + this.Q) * 31)) * 31) + this.T) * 31) + this.V) * 31) + this.W) * 31) + this.X) * 31) + this.Y) * 31) + this.Z) * 31) + this.a0) * 31) + this.f5223b0) * 31) + this.f5224c0) * 31) + this.f5226d0;
        }
        return this.f5228e0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Format(");
        sb2.append(this.f5225d);
        sb2.append(", ");
        sb2.append(this.f5227e);
        sb2.append(", ");
        sb2.append(this.H);
        sb2.append(", ");
        sb2.append(this.I);
        sb2.append(", ");
        sb2.append(this.F);
        sb2.append(", ");
        sb2.append(this.E);
        sb2.append(", ");
        sb2.append(this.f5229i);
        sb2.append(", [");
        sb2.append(this.N);
        sb2.append(", ");
        sb2.append(this.O);
        sb2.append(", ");
        sb2.append(this.P);
        sb2.append(", ");
        sb2.append(this.U);
        sb2.append("], [");
        sb2.append(this.V);
        sb2.append(", ");
        return k0.d.m(sb2, this.W, "])");
    }
}
