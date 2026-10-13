package eq;

/* loaded from: classes3.dex */
public abstract class d {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f8191b;

    /* renamed from: c, reason: collision with root package name */
    public final int f8192c;

    public /* synthetic */ d(int i5, int i6, int i10) {
        this.a = i10;
        this.f8191b = i5;
        this.f8192c = i6;
    }

    public static b a(d dVar) {
        return new b(dVar.f8191b + dVar.f8192c, 1, 0);
    }

    public static b b() {
        return new b(0, 1, 0);
    }

    public abstract byte[] c();

    public abstract byte[] d(byte[] bArr, int i5);

    public boolean e() {
        return false;
    }

    public d f() {
        throw new UnsupportedOperationException("This luminance source does not support rotation by 90 degrees.");
    }

    public String toString() {
        switch (this.a) {
            case 1:
                int i5 = this.f8191b;
                byte[] bArr = new byte[i5];
                int i6 = this.f8192c;
                StringBuilder sb2 = new StringBuilder((i5 + 1) * i6);
                for (int i10 = 0; i10 < i6; i10++) {
                    bArr = d(bArr, i10);
                    for (int i11 = 0; i11 < i5; i11++) {
                        int i12 = bArr[i11] & 255;
                        sb2.append(i12 < 64 ? '#' : i12 < 128 ? '+' : i12 < 192 ? '.' : ' ');
                    }
                    sb2.append('\n');
                }
                return sb2.toString();
            default:
                return super.toString();
        }
    }
}
