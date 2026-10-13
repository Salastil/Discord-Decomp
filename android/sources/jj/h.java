package jj;

/* loaded from: classes3.dex */
public final class h extends eq.d {

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f12796d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12797e;

    /* renamed from: f, reason: collision with root package name */
    public final int f12798f;

    /* renamed from: g, reason: collision with root package name */
    public final int f12799g;

    /* renamed from: h, reason: collision with root package name */
    public final int f12800h;

    public h(byte[] bArr, int i5, int i6, int i10, int i11, int i12, int i13, boolean z5) {
        super(i12, i13, 1);
        if (i10 + i12 > i5 || i11 + i13 > i6) {
            throw new IllegalArgumentException("Crop rectangle does not fit within image data.");
        }
        this.f12796d = bArr;
        this.f12797e = i5;
        this.f12798f = i6;
        this.f12799g = i10;
        this.f12800h = i11;
        if (z5) {
            int i14 = (i11 * i5) + i10;
            int i15 = 0;
            while (i15 < i13) {
                int i16 = (i12 / 2) + i14;
                int i17 = (i14 + i12) - 1;
                int i18 = i14;
                while (i18 < i16) {
                    byte b10 = bArr[i18];
                    bArr[i18] = bArr[i17];
                    bArr[i17] = b10;
                    i18++;
                    i17--;
                }
                i15++;
                i14 += i5;
            }
        }
    }

    @Override // eq.d
    public final byte[] c() {
        byte[] bArr = this.f12796d;
        int i5 = this.f8191b;
        int i6 = this.f8192c;
        int i10 = this.f12797e;
        if (i5 == i10 && i6 == this.f12798f) {
            return bArr;
        }
        int i11 = i5 * i6;
        byte[] bArr2 = new byte[i11];
        int i12 = (this.f12800h * i10) + this.f12799g;
        if (i5 == i10) {
            System.arraycopy(bArr, i12, bArr2, 0, i11);
            return bArr2;
        }
        for (int i13 = 0; i13 < i6; i13++) {
            System.arraycopy(bArr, i12, bArr2, i13 * i5, i5);
            i12 += i10;
        }
        return bArr2;
    }

    @Override // eq.d
    public final byte[] d(byte[] bArr, int i5) {
        if (i5 < 0 || i5 >= this.f8192c) {
            throw new IllegalArgumentException("Requested row is outside the image: ".concat(String.valueOf(i5)));
        }
        int i6 = this.f8191b;
        if (bArr == null || bArr.length < i6) {
            bArr = new byte[i6];
        }
        System.arraycopy(this.f12796d, ((i5 + this.f12800h) * this.f12797e) + this.f12799g, bArr, 0, i6);
        return bArr;
    }
}
