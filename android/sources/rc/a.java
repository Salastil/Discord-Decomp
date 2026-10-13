package rc;

import com.google.android.exoplayer2.Format;
import ei.d;
import hc.f0;
import hc.g1;
import java.io.EOFException;
import java.nio.charset.Charset;
import java.util.Arrays;
import ke.b;
import ke.d0;
import qc.g;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.n;
import qc.s;
import qc.v;

/* loaded from: classes3.dex */
public final class a implements j {

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f17191n = {13, 14, 16, 18, 20, 21, 27, 32, 6, 7, 6, 6, 1, 1, 1, 1};

    /* renamed from: o, reason: collision with root package name */
    public static final int[] f17192o;

    /* renamed from: p, reason: collision with root package name */
    public static final byte[] f17193p;

    /* renamed from: q, reason: collision with root package name */
    public static final byte[] f17194q;

    /* renamed from: r, reason: collision with root package name */
    public static final int f17195r;

    /* renamed from: b, reason: collision with root package name */
    public boolean f17196b;

    /* renamed from: c, reason: collision with root package name */
    public long f17197c;

    /* renamed from: d, reason: collision with root package name */
    public int f17198d;

    /* renamed from: e, reason: collision with root package name */
    public int f17199e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f17200f;

    /* renamed from: h, reason: collision with root package name */
    public int f17202h;

    /* renamed from: i, reason: collision with root package name */
    public long f17203i;
    public l j;
    public v k;

    /* renamed from: l, reason: collision with root package name */
    public s f17204l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f17205m;
    public final byte[] a = new byte[1];

    /* renamed from: g, reason: collision with root package name */
    public int f17201g = -1;

    static {
        int[] iArr = {18, 24, 33, 37, 41, 47, 51, 59, 61, 6, 1, 1, 1, 1, 1, 1};
        f17192o = iArr;
        int i5 = d0.a;
        Charset charset = d.f8100c;
        f17193p = "#!AMR\n".getBytes(charset);
        f17194q = "#!AMR-WB\n".getBytes(charset);
        f17195r = iArr[8];
    }

    @Override // qc.j
    public final void a(l lVar) {
        this.j = lVar;
        this.k = lVar.y(0, 1);
        lVar.r();
    }

    public final int b(k kVar) {
        boolean z5;
        kVar.t();
        byte[] bArr = this.a;
        kVar.C(bArr, 0, 1);
        byte b10 = bArr[0];
        if ((b10 & 131) > 0) {
            throw g1.a("Invalid padding bits for frame header " + ((int) b10), null);
        }
        int i5 = (b10 >> 3) & 15;
        if (i5 >= 0 && i5 <= 15 && (((z5 = this.f17196b) && (i5 < 10 || i5 > 13)) || (!z5 && (i5 < 12 || i5 > 14)))) {
            return z5 ? f17192o[i5] : f17191n[i5];
        }
        StringBuilder sb2 = new StringBuilder("Illegal AMR ");
        sb2.append(this.f17196b ? "WB" : "NB");
        sb2.append(" frame type ");
        sb2.append(i5);
        throw g1.a(sb2.toString(), null);
    }

    public final boolean c(k kVar) {
        kVar.t();
        byte[] bArr = f17193p;
        byte[] bArr2 = new byte[bArr.length];
        kVar.C(bArr2, 0, bArr.length);
        if (Arrays.equals(bArr2, bArr)) {
            this.f17196b = false;
            kVar.u(bArr.length);
            return true;
        }
        kVar.t();
        byte[] bArr3 = f17194q;
        byte[] bArr4 = new byte[bArr3.length];
        kVar.C(bArr4, 0, bArr3.length);
        if (!Arrays.equals(bArr4, bArr3)) {
            return false;
        }
        this.f17196b = true;
        kVar.u(bArr3.length);
        return true;
    }

    @Override // qc.j
    public final int e(k kVar, m mVar) {
        b.l(this.k);
        int i5 = d0.a;
        if (((g) kVar).f16773v == 0 && !c(kVar)) {
            throw g1.a("Could not find AMR header.", null);
        }
        if (!this.f17205m) {
            this.f17205m = true;
            boolean z5 = this.f17196b;
            String str = z5 ? "audio/amr-wb" : "audio/3gpp";
            int i6 = z5 ? 16000 : 8000;
            v vVar = this.k;
            f0 f0Var = new f0();
            f0Var.k = str;
            f0Var.f9678l = f17195r;
            f0Var.f9690x = 1;
            f0Var.f9691y = i6;
            vVar.e(new Format(f0Var));
        }
        int i10 = -1;
        if (this.f17199e == 0) {
            try {
                int b10 = b(kVar);
                this.f17198d = b10;
                this.f17199e = b10;
                if (this.f17201g == -1) {
                    long j = ((g) kVar).f16773v;
                    this.f17201g = b10;
                }
                if (this.f17201g == b10) {
                    this.f17202h++;
                }
            } catch (EOFException unused) {
            }
        }
        int c6 = this.k.c(kVar, this.f17199e, true);
        if (c6 != -1) {
            int i11 = this.f17199e - c6;
            this.f17199e = i11;
            i10 = 0;
            if (i11 <= 0) {
                this.k.b(this.f17197c + this.f17203i, 1, this.f17198d, 0, null);
                this.f17197c += 20000;
            }
        }
        if (!this.f17200f) {
            n nVar = new n(-9223372036854775807L);
            this.f17204l = nVar;
            this.j.c(nVar);
            this.f17200f = true;
        }
        return i10;
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        return c(kVar);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f17197c = 0L;
        this.f17198d = 0;
        this.f17199e = 0;
        if (j != 0) {
            s sVar = this.f17204l;
            if (sVar instanceof xc.a) {
                this.f17203i = (Math.max(0L, j - ((xc.a) sVar).f20301b) * 8000000) / r0.f20304e;
                return;
            }
        }
        this.f17203i = 0L;
    }

    @Override // qc.j
    public final void release() {
    }
}
