package ge;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import fi.e0;
import fi.p0;
import fi.x;
import ke.d0;
import nd.z0;

/* loaded from: classes3.dex */
public final class n extends m {
    public final boolean E;
    public final int F;
    public final int G;
    public final int H;
    public final int I;
    public final boolean J;
    public final boolean K;
    public final int L;
    public final boolean M;
    public final boolean N;
    public final int O;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f9197w;

    /* renamed from: x, reason: collision with root package name */
    public final com.google.android.exoplayer2.trackselection.a f9198x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f9199y;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:127:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x00e1  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x00d7 A[EDGE_INSN: B:132:0x00d7->B:70:0x00d7 BREAK  A[LOOP:0: B:62:0x00bc->B:130:0x00d4], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x008e  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00a1 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00b2  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x00c2  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x00f7  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0151  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public n(int i5, z0 z0Var, int i6, com.google.android.exoplayer2.trackselection.a aVar, int i10, int i11, boolean z5) {
        super(i5, z0Var, i6);
        boolean z6;
        boolean z7;
        int i12;
        Format format;
        String str;
        int i13;
        boolean z8;
        com.google.android.exoplayer2.trackselection.a aVar2;
        boolean z10;
        int i14;
        Format format2;
        int i15;
        int i16;
        float f2;
        int i17;
        Format format3;
        int i18;
        int i19;
        int i20;
        this.f9198x = aVar;
        boolean z11 = aVar.Z;
        e0 e0Var = aVar.I;
        int i21 = z11 ? 24 : 16;
        int i22 = 0;
        this.K = aVar.Y && (i11 & i21) != 0;
        if (z5 && (((i18 = (format3 = this.f9196v).N) == -1 || i18 <= aVar.f5468d) && ((i19 = format3.O) == -1 || i19 <= aVar.f5469e))) {
            float f10 = format3.P;
            if ((f10 == -1.0f || f10 <= aVar.f5470i) && ((i20 = format3.E) == -1 || i20 <= aVar.f5471v)) {
                z6 = true;
                this.f9197w = z6;
                if (z5 && (((i15 = (format2 = this.f9196v).N) == -1 || i15 >= aVar.f5472w) && ((i16 = format2.O) == -1 || i16 >= aVar.f5473x))) {
                    f2 = format2.P;
                    if ((f2 != -1.0f || f2 >= aVar.f5474y) && ((i17 = format2.E) == -1 || i17 >= aVar.E)) {
                        z7 = true;
                        this.f9199y = z7;
                        this.E = DefaultTrackSelector.d(i10, false);
                        Format format4 = this.f9196v;
                        this.F = format4.E;
                        int i23 = format4.N;
                        this.G = (i23 != -1 || (i14 = format4.O) == -1) ? -1 : i23 * i14;
                        int i24 = format4.f5231w;
                        int i25 = aVar.J;
                        int i26 = Integer.MAX_VALUE;
                        this.I = (i24 == 0 && i24 == i25) ? Integer.MAX_VALUE : Integer.bitCount(i24 & i25);
                        int i27 = this.f9196v.f5231w;
                        this.J = (i27 == 0 && (i27 & 1) == 0) ? false : true;
                        i12 = 0;
                        while (true) {
                            if (i12 < e0Var.size()) {
                                String str2 = this.f9196v.I;
                                if (str2 != null && str2.equals(e0Var.get(i12))) {
                                    i26 = i12;
                                    break;
                                }
                                i12++;
                            } else {
                                break;
                            }
                        }
                        this.H = i26;
                        this.M = (i10 & 384) != 128;
                        this.N = (i10 & 64) != 64;
                        format = this.f9196v;
                        str = format.I;
                        if (str != null) {
                            i13 = 4;
                            switch (str.hashCode()) {
                                case -1851077871:
                                    if (str.equals("video/dolby-vision")) {
                                        z10 = false;
                                        break;
                                    }
                                    z10 = -1;
                                    break;
                                case -1662735862:
                                    if (str.equals("video/av01")) {
                                        z10 = true;
                                        break;
                                    }
                                    z10 = -1;
                                    break;
                                case -1662541442:
                                    if (str.equals("video/hevc")) {
                                        z10 = 2;
                                        break;
                                    }
                                    z10 = -1;
                                    break;
                                case 1331836730:
                                    if (str.equals("video/avc")) {
                                        z10 = 3;
                                        break;
                                    }
                                    z10 = -1;
                                    break;
                                case 1599127257:
                                    if (str.equals("video/x-vnd.on2.vp9")) {
                                        z10 = 4;
                                        break;
                                    }
                                    z10 = -1;
                                    break;
                                default:
                                    z10 = -1;
                                    break;
                            }
                            switch (z10) {
                                case false:
                                    i13 = 5;
                                    break;
                                case true:
                                    i13 = 3;
                                    break;
                                case true:
                                    i13 = 1;
                                    break;
                                case true:
                                    i13 = 2;
                                    break;
                            }
                            this.O = i13;
                            z8 = this.f9197w;
                            aVar2 = this.f9198x;
                            if ((format.f5231w & 16384) == 0 && DefaultTrackSelector.d(i10, aVar2.h0) && (z8 || aVar2.X)) {
                                i22 = (DefaultTrackSelector.d(i10, false) || !this.f9199y || !z8 || format.E == -1 || aVar2.U || aVar2.T || (i21 & i10) == 0) ? 1 : 2;
                            }
                            this.L = i22;
                        }
                        i13 = 0;
                        this.O = i13;
                        z8 = this.f9197w;
                        aVar2 = this.f9198x;
                        if ((format.f5231w & 16384) == 0) {
                            if (DefaultTrackSelector.d(i10, false)) {
                            }
                        }
                        this.L = i22;
                    }
                }
                z7 = false;
                this.f9199y = z7;
                this.E = DefaultTrackSelector.d(i10, false);
                Format format42 = this.f9196v;
                this.F = format42.E;
                int i232 = format42.N;
                this.G = (i232 != -1 || (i14 = format42.O) == -1) ? -1 : i232 * i14;
                int i242 = format42.f5231w;
                int i252 = aVar.J;
                int i262 = Integer.MAX_VALUE;
                this.I = (i242 == 0 && i242 == i252) ? Integer.MAX_VALUE : Integer.bitCount(i242 & i252);
                int i272 = this.f9196v.f5231w;
                this.J = (i272 == 0 && (i272 & 1) == 0) ? false : true;
                i12 = 0;
                while (true) {
                    if (i12 < e0Var.size()) {
                    }
                    i12++;
                }
                this.H = i262;
                this.M = (i10 & 384) != 128;
                this.N = (i10 & 64) != 64;
                format = this.f9196v;
                str = format.I;
                if (str != null) {
                }
                i13 = 0;
                this.O = i13;
                z8 = this.f9197w;
                aVar2 = this.f9198x;
                if ((format.f5231w & 16384) == 0) {
                }
                this.L = i22;
            }
        }
        z6 = false;
        this.f9197w = z6;
        if (z5) {
            f2 = format2.P;
            if (f2 != -1.0f) {
            }
            z7 = true;
            this.f9199y = z7;
            this.E = DefaultTrackSelector.d(i10, false);
            Format format422 = this.f9196v;
            this.F = format422.E;
            int i2322 = format422.N;
            this.G = (i2322 != -1 || (i14 = format422.O) == -1) ? -1 : i2322 * i14;
            int i2422 = format422.f5231w;
            int i2522 = aVar.J;
            int i2622 = Integer.MAX_VALUE;
            this.I = (i2422 == 0 && i2422 == i2522) ? Integer.MAX_VALUE : Integer.bitCount(i2422 & i2522);
            int i2722 = this.f9196v.f5231w;
            this.J = (i2722 == 0 && (i2722 & 1) == 0) ? false : true;
            i12 = 0;
            while (true) {
                if (i12 < e0Var.size()) {
                }
                i12++;
            }
            this.H = i2622;
            this.M = (i10 & 384) != 128;
            this.N = (i10 & 64) != 64;
            format = this.f9196v;
            str = format.I;
            if (str != null) {
            }
            i13 = 0;
            this.O = i13;
            z8 = this.f9197w;
            aVar2 = this.f9198x;
            if ((format.f5231w & 16384) == 0) {
            }
            this.L = i22;
        }
        z7 = false;
        this.f9199y = z7;
        this.E = DefaultTrackSelector.d(i10, false);
        Format format4222 = this.f9196v;
        this.F = format4222.E;
        int i23222 = format4222.N;
        this.G = (i23222 != -1 || (i14 = format4222.O) == -1) ? -1 : i23222 * i14;
        int i24222 = format4222.f5231w;
        int i25222 = aVar.J;
        int i26222 = Integer.MAX_VALUE;
        this.I = (i24222 == 0 && i24222 == i25222) ? Integer.MAX_VALUE : Integer.bitCount(i24222 & i25222);
        int i27222 = this.f9196v.f5231w;
        this.J = (i27222 == 0 && (i27222 & 1) == 0) ? false : true;
        i12 = 0;
        while (true) {
            if (i12 < e0Var.size()) {
            }
            i12++;
        }
        this.H = i26222;
        this.M = (i10 & 384) != 128;
        this.N = (i10 & 64) != 64;
        format = this.f9196v;
        str = format.I;
        if (str != null) {
        }
        i13 = 0;
        this.O = i13;
        z8 = this.f9197w;
        aVar2 = this.f9198x;
        if ((format.f5231w & 16384) == 0) {
        }
        this.L = i22;
    }

    public static int c(n nVar, n nVar2) {
        x b10 = x.a.c(nVar.E, nVar2.E).a(nVar.I, nVar2.I).c(nVar.J, nVar2.J).c(nVar.f9197w, nVar2.f9197w).c(nVar.f9199y, nVar2.f9199y).b(Integer.valueOf(nVar.H), Integer.valueOf(nVar2.H), p0.f8694i);
        boolean z5 = nVar.M;
        x c6 = b10.c(z5, nVar2.M);
        boolean z6 = nVar.N;
        x c8 = c6.c(z6, nVar2.N);
        if (z5 && z6) {
            c8 = c8.a(nVar.O, nVar2.O);
        }
        return c8.e();
    }

    @Override // ge.m
    public final int a() {
        return this.L;
    }

    @Override // ge.m
    public final boolean b(m mVar) {
        n nVar = (n) mVar;
        if (!this.K && !d0.a(this.f9196v.I, nVar.f9196v.I)) {
            return false;
        }
        if (this.f9198x.a0) {
            return true;
        }
        return this.M == nVar.M && this.N == nVar.N;
    }
}
