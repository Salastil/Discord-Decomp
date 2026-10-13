package qc;

/* loaded from: classes3.dex */
public final class w {
    public final byte[] a = new byte[10];

    /* renamed from: b, reason: collision with root package name */
    public boolean f16803b;

    /* renamed from: c, reason: collision with root package name */
    public int f16804c;

    /* renamed from: d, reason: collision with root package name */
    public long f16805d;

    /* renamed from: e, reason: collision with root package name */
    public int f16806e;

    /* renamed from: f, reason: collision with root package name */
    public int f16807f;

    /* renamed from: g, reason: collision with root package name */
    public int f16808g;

    public final void a(v vVar, u uVar) {
        if (this.f16804c > 0) {
            vVar.b(this.f16805d, this.f16806e, this.f16807f, this.f16808g, uVar);
            this.f16804c = 0;
        }
    }

    public final void b(v vVar, long j, int i5, int i6, int i10, u uVar) {
        if (!(this.f16808g <= i6 + i10)) {
            throw new IllegalStateException("TrueHD chunk samples must be contiguous in the sample queue.");
        }
        if (this.f16803b) {
            int i11 = this.f16804c;
            int i12 = i11 + 1;
            this.f16804c = i12;
            if (i11 == 0) {
                this.f16805d = j;
                this.f16806e = i5;
                this.f16807f = 0;
            }
            this.f16807f += i6;
            this.f16808g = i10;
            if (i12 >= 16) {
                a(vVar, uVar);
            }
        }
    }

    public final void c(k kVar) {
        if (this.f16803b) {
            return;
        }
        byte[] bArr = this.a;
        kVar.C(bArr, 0, 10);
        kVar.t();
        if (bArr[4] == -8 && bArr[5] == 114 && bArr[6] == 111) {
            byte b10 = bArr[7];
            if ((b10 & 254) == 186) {
                r2 = 40 << ((bArr[((b10 & 255) == 187 ? 1 : 0) != 0 ? '\t' : '\b'] >> 4) & 7);
            }
        }
        if (r2 == 0) {
            return;
        }
        this.f16803b = true;
    }
}
