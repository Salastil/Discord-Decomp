package jj;

/* loaded from: classes3.dex */
public final class e extends eq.d {

    /* renamed from: d, reason: collision with root package name */
    public final eq.d f12793d;

    public e(eq.d dVar) {
        super(dVar.f8191b, dVar.f8192c, 1);
        this.f12793d = dVar;
    }

    @Override // eq.d
    public final byte[] c() {
        byte[] c6 = this.f12793d.c();
        int i5 = this.f8191b * this.f8192c;
        byte[] bArr = new byte[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            bArr[i6] = (byte) (255 - (c6[i6] & 255));
        }
        return bArr;
    }

    @Override // eq.d
    public final byte[] d(byte[] bArr, int i5) {
        byte[] d6 = this.f12793d.d(bArr, i5);
        for (int i6 = 0; i6 < this.f8191b; i6++) {
            d6[i6] = (byte) (255 - (d6[i6] & 255));
        }
        return d6;
    }

    @Override // eq.d
    public final boolean e() {
        return this.f12793d.e();
    }

    @Override // eq.d
    public final eq.d f() {
        return new e(this.f12793d.f());
    }
}
