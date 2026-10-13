package ij;

/* loaded from: classes3.dex */
public final class f extends g {

    /* renamed from: w, reason: collision with root package name */
    public final int f10856w;

    /* renamed from: x, reason: collision with root package name */
    public final int f10857x;

    public f(byte[] bArr, int i5, int i6) {
        super(bArr);
        g.b(i5, i5 + i6, bArr.length);
        this.f10856w = i5;
        this.f10857x = i6;
    }

    @Override // ij.g
    public final byte a(int i5) {
        int i6 = this.f10857x;
        if (((i6 - (i5 + 1)) | i5) >= 0) {
            return this.f10861e[this.f10856w + i5];
        }
        if (i5 < 0) {
            throw new ArrayIndexOutOfBoundsException(k0.d.i(i5, "Index < 0: "));
        }
        throw new ArrayIndexOutOfBoundsException(a3.e.f(i5, i6, "Index > length: ", ", "));
    }

    @Override // ij.g
    public final int e() {
        return this.f10856w;
    }

    @Override // ij.g
    public final byte h(int i5) {
        return this.f10861e[this.f10856w + i5];
    }

    @Override // ij.g
    public final int size() {
        return this.f10857x;
    }
}
