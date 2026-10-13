package bg;

/* loaded from: classes3.dex */
public final class v0 extends w0 {

    /* renamed from: v, reason: collision with root package name */
    public final int f2999v;

    /* renamed from: w, reason: collision with root package name */
    public final int f3000w;

    public v0(byte[] bArr, int i5, int i6) {
        super(bArr);
        w0.j(i5, i5 + i6, bArr.length);
        this.f2999v = i5;
        this.f3000w = i6;
    }

    @Override // bg.w0
    public final byte a(int i5) {
        int i6 = this.f3000w;
        if (((i6 - (i5 + 1)) | i5) >= 0) {
            return this.f3005e[this.f2999v + i5];
        }
        if (i5 < 0) {
            throw new ArrayIndexOutOfBoundsException(k0.d.i(i5, "Index < 0: "));
        }
        throw new ArrayIndexOutOfBoundsException(a3.e.f(i5, i6, "Index > length: ", ", "));
    }

    @Override // bg.w0
    public final byte b(int i5) {
        return this.f3005e[this.f2999v + i5];
    }

    @Override // bg.w0
    public final int d() {
        return this.f2999v;
    }

    @Override // bg.w0
    public final int e() {
        return this.f3000w;
    }

    @Override // bg.w0
    public final void h(byte[] bArr, int i5) {
        System.arraycopy(this.f3005e, this.f2999v, bArr, 0, i5);
    }
}
