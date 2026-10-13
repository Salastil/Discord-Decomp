package com.google.android.exoplayer2;

import android.net.Uri;
import android.os.Bundle;
import hc.n1;
import hc.u0;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class MediaMetadata implements hc.g {
    public static final String A0;
    public static final String B0;
    public static final String C0;
    public static final String D0;
    public static final String E0;
    public static final String F0;
    public static final String G0;
    public static final String H0;
    public static final String I0;
    public static final String J0;
    public static final String K0;
    public static final String L0;
    public static final String M0;
    public static final hb.a N0;

    /* renamed from: f0, reason: collision with root package name */
    public static final MediaMetadata f5241f0 = new MediaMetadata(new u0());

    /* renamed from: g0, reason: collision with root package name */
    public static final String f5242g0;
    public static final String h0;

    /* renamed from: i0, reason: collision with root package name */
    public static final String f5243i0;

    /* renamed from: j0, reason: collision with root package name */
    public static final String f5244j0;

    /* renamed from: k0, reason: collision with root package name */
    public static final String f5245k0;

    /* renamed from: l0, reason: collision with root package name */
    public static final String f5246l0;

    /* renamed from: m0, reason: collision with root package name */
    public static final String f5247m0;

    /* renamed from: n0, reason: collision with root package name */
    public static final String f5248n0;

    /* renamed from: o0, reason: collision with root package name */
    public static final String f5249o0;

    /* renamed from: p0, reason: collision with root package name */
    public static final String f5250p0;

    /* renamed from: q0, reason: collision with root package name */
    public static final String f5251q0;

    /* renamed from: r0, reason: collision with root package name */
    public static final String f5252r0;

    /* renamed from: s0, reason: collision with root package name */
    public static final String f5253s0;

    /* renamed from: t0, reason: collision with root package name */
    public static final String f5254t0;

    /* renamed from: u0, reason: collision with root package name */
    public static final String f5255u0;

    /* renamed from: v0, reason: collision with root package name */
    public static final String f5256v0;

    /* renamed from: w0, reason: collision with root package name */
    public static final String f5257w0;

    /* renamed from: x0, reason: collision with root package name */
    public static final String f5258x0;

    /* renamed from: y0, reason: collision with root package name */
    public static final String f5259y0;

    /* renamed from: z0, reason: collision with root package name */
    public static final String f5260z0;
    public final n1 E;
    public final n1 F;
    public final byte[] G;
    public final Integer H;
    public final Uri I;
    public final Integer J;
    public final Integer K;
    public final Integer L;
    public final Boolean M;
    public final Boolean N;
    public final Integer O;
    public final Integer P;
    public final Integer Q;
    public final Integer R;
    public final Integer S;
    public final Integer T;
    public final Integer U;
    public final CharSequence V;
    public final CharSequence W;
    public final CharSequence X;
    public final Integer Y;
    public final Integer Z;
    public final CharSequence a0;

    /* renamed from: b0, reason: collision with root package name */
    public final CharSequence f5261b0;

    /* renamed from: c0, reason: collision with root package name */
    public final CharSequence f5262c0;

    /* renamed from: d, reason: collision with root package name */
    public final CharSequence f5263d;

    /* renamed from: d0, reason: collision with root package name */
    public final Integer f5264d0;

    /* renamed from: e, reason: collision with root package name */
    public final CharSequence f5265e;

    /* renamed from: e0, reason: collision with root package name */
    public final Bundle f5266e0;

    /* renamed from: i, reason: collision with root package name */
    public final CharSequence f5267i;

    /* renamed from: v, reason: collision with root package name */
    public final CharSequence f5268v;

    /* renamed from: w, reason: collision with root package name */
    public final CharSequence f5269w;

    /* renamed from: x, reason: collision with root package name */
    public final CharSequence f5270x;

    /* renamed from: y, reason: collision with root package name */
    public final CharSequence f5271y;

    static {
        int i5 = d0.a;
        f5242g0 = Integer.toString(0, 36);
        h0 = Integer.toString(1, 36);
        f5243i0 = Integer.toString(2, 36);
        f5244j0 = Integer.toString(3, 36);
        f5245k0 = Integer.toString(4, 36);
        f5246l0 = Integer.toString(5, 36);
        f5247m0 = Integer.toString(6, 36);
        f5248n0 = Integer.toString(8, 36);
        f5249o0 = Integer.toString(9, 36);
        f5250p0 = Integer.toString(10, 36);
        f5251q0 = Integer.toString(11, 36);
        f5252r0 = Integer.toString(12, 36);
        f5253s0 = Integer.toString(13, 36);
        f5254t0 = Integer.toString(14, 36);
        f5255u0 = Integer.toString(15, 36);
        f5256v0 = Integer.toString(16, 36);
        f5257w0 = Integer.toString(17, 36);
        f5258x0 = Integer.toString(18, 36);
        f5259y0 = Integer.toString(19, 36);
        f5260z0 = Integer.toString(20, 36);
        A0 = Integer.toString(21, 36);
        B0 = Integer.toString(22, 36);
        C0 = Integer.toString(23, 36);
        D0 = Integer.toString(24, 36);
        E0 = Integer.toString(25, 36);
        F0 = Integer.toString(26, 36);
        G0 = Integer.toString(27, 36);
        H0 = Integer.toString(28, 36);
        I0 = Integer.toString(29, 36);
        J0 = Integer.toString(30, 36);
        K0 = Integer.toString(31, 36);
        L0 = Integer.toString(32, 36);
        M0 = Integer.toString(1000, 36);
        N0 = new hb.a(18);
    }

    public MediaMetadata(u0 u0Var) {
        Boolean bool = u0Var.f9906p;
        Integer num = u0Var.f9905o;
        Integer num2 = u0Var.F;
        int i5 = 1;
        int i6 = 0;
        if (bool != null) {
            if (!bool.booleanValue()) {
                num = -1;
            } else if (num == null || num.intValue() == -1) {
                if (num2 != null) {
                    switch (num2.intValue()) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                        case 13:
                        case 14:
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                        case 31:
                        case 32:
                        case 33:
                        case 34:
                        case 35:
                            break;
                        case 20:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                        case 30:
                        default:
                            i5 = 0;
                            break;
                        case 21:
                            i5 = 2;
                            break;
                        case 22:
                            i5 = 3;
                            break;
                        case 23:
                            i5 = 4;
                            break;
                        case 24:
                            i5 = 5;
                            break;
                        case 25:
                            i5 = 6;
                            break;
                    }
                    i6 = i5;
                }
                num = Integer.valueOf(i6);
            }
        } else if (num != null) {
            boolean z5 = num.intValue() != -1;
            bool = Boolean.valueOf(z5);
            if (z5 && num2 == null) {
                switch (num.intValue()) {
                    case 1:
                        break;
                    case 2:
                        i6 = 21;
                        break;
                    case 3:
                        i6 = 22;
                        break;
                    case 4:
                        i6 = 23;
                        break;
                    case 5:
                        i6 = 24;
                        break;
                    case 6:
                        i6 = 25;
                        break;
                    default:
                        i6 = 20;
                        break;
                }
                num2 = Integer.valueOf(i6);
            }
        }
        this.f5263d = u0Var.a;
        this.f5265e = u0Var.f9894b;
        this.f5267i = u0Var.f9895c;
        this.f5268v = u0Var.f9896d;
        this.f5269w = u0Var.f9897e;
        this.f5270x = u0Var.f9898f;
        this.f5271y = u0Var.f9899g;
        this.E = u0Var.f9900h;
        this.F = u0Var.f9901i;
        this.G = u0Var.j;
        this.H = u0Var.k;
        this.I = u0Var.f9902l;
        this.J = u0Var.f9903m;
        this.K = u0Var.f9904n;
        this.L = num;
        this.M = bool;
        this.N = u0Var.f9907q;
        Integer num3 = u0Var.f9908r;
        this.O = num3;
        this.P = num3;
        this.Q = u0Var.f9909s;
        this.R = u0Var.f9910t;
        this.S = u0Var.f9911u;
        this.T = u0Var.f9912v;
        this.U = u0Var.f9913w;
        this.V = u0Var.f9914x;
        this.W = u0Var.f9915y;
        this.X = u0Var.f9916z;
        this.Y = u0Var.A;
        this.Z = u0Var.B;
        this.a0 = u0Var.C;
        this.f5261b0 = u0Var.D;
        this.f5262c0 = u0Var.E;
        this.f5264d0 = num2;
        this.f5266e0 = u0Var.G;
    }

    public final u0 a() {
        u0 u0Var = new u0();
        u0Var.a = this.f5263d;
        u0Var.f9894b = this.f5265e;
        u0Var.f9895c = this.f5267i;
        u0Var.f9896d = this.f5268v;
        u0Var.f9897e = this.f5269w;
        u0Var.f9898f = this.f5270x;
        u0Var.f9899g = this.f5271y;
        u0Var.f9900h = this.E;
        u0Var.f9901i = this.F;
        u0Var.j = this.G;
        u0Var.k = this.H;
        u0Var.f9902l = this.I;
        u0Var.f9903m = this.J;
        u0Var.f9904n = this.K;
        u0Var.f9905o = this.L;
        u0Var.f9906p = this.M;
        u0Var.f9907q = this.N;
        u0Var.f9908r = this.P;
        u0Var.f9909s = this.Q;
        u0Var.f9910t = this.R;
        u0Var.f9911u = this.S;
        u0Var.f9912v = this.T;
        u0Var.f9913w = this.U;
        u0Var.f9914x = this.V;
        u0Var.f9915y = this.W;
        u0Var.f9916z = this.X;
        u0Var.A = this.Y;
        u0Var.B = this.Z;
        u0Var.C = this.a0;
        u0Var.D = this.f5261b0;
        u0Var.E = this.f5262c0;
        u0Var.F = this.f5264d0;
        u0Var.G = this.f5266e0;
        return u0Var;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && MediaMetadata.class == obj.getClass()) {
            MediaMetadata mediaMetadata = (MediaMetadata) obj;
            if (d0.a(this.f5263d, mediaMetadata.f5263d) && d0.a(this.f5265e, mediaMetadata.f5265e) && d0.a(this.f5267i, mediaMetadata.f5267i) && d0.a(this.f5268v, mediaMetadata.f5268v) && d0.a(this.f5269w, mediaMetadata.f5269w) && d0.a(this.f5270x, mediaMetadata.f5270x) && d0.a(this.f5271y, mediaMetadata.f5271y) && d0.a(this.E, mediaMetadata.E) && d0.a(this.F, mediaMetadata.F) && Arrays.equals(this.G, mediaMetadata.G) && d0.a(this.H, mediaMetadata.H) && d0.a(this.I, mediaMetadata.I) && d0.a(this.J, mediaMetadata.J) && d0.a(this.K, mediaMetadata.K) && d0.a(this.L, mediaMetadata.L) && d0.a(this.M, mediaMetadata.M) && d0.a(this.N, mediaMetadata.N) && d0.a(this.P, mediaMetadata.P) && d0.a(this.Q, mediaMetadata.Q) && d0.a(this.R, mediaMetadata.R) && d0.a(this.S, mediaMetadata.S) && d0.a(this.T, mediaMetadata.T) && d0.a(this.U, mediaMetadata.U) && d0.a(this.V, mediaMetadata.V) && d0.a(this.W, mediaMetadata.W) && d0.a(this.X, mediaMetadata.X) && d0.a(this.Y, mediaMetadata.Y) && d0.a(this.Z, mediaMetadata.Z) && d0.a(this.a0, mediaMetadata.a0) && d0.a(this.f5261b0, mediaMetadata.f5261b0) && d0.a(this.f5262c0, mediaMetadata.f5262c0) && d0.a(this.f5264d0, mediaMetadata.f5264d0)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f5263d, this.f5265e, this.f5267i, this.f5268v, this.f5269w, this.f5270x, this.f5271y, this.E, this.F, Integer.valueOf(Arrays.hashCode(this.G)), this.H, this.I, this.J, this.K, this.L, this.M, this.N, this.P, this.Q, this.R, this.S, this.T, this.U, this.V, this.W, this.X, this.Y, this.Z, this.a0, this.f5261b0, this.f5262c0, this.f5264d0});
    }
}
