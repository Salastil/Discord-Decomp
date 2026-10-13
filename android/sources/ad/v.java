package ad;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class v {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f502b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f503c;

    /* renamed from: d, reason: collision with root package name */
    public byte[] f504d;

    /* renamed from: e, reason: collision with root package name */
    public int f505e;

    public v(int i5) {
        this.a = i5;
        byte[] bArr = new byte[131];
        this.f504d = bArr;
        bArr[2] = 1;
    }

    public final void a(byte[] bArr, int i5, int i6) {
        if (this.f502b) {
            int i10 = i6 - i5;
            byte[] bArr2 = this.f504d;
            int length = bArr2.length;
            int i11 = this.f505e;
            if (length < i11 + i10) {
                this.f504d = Arrays.copyOf(bArr2, (i11 + i10) * 2);
            }
            System.arraycopy(bArr, i5, this.f504d, this.f505e, i10);
            this.f505e += i10;
        }
    }

    public final boolean b(int i5) {
        if (!this.f502b) {
            return false;
        }
        this.f505e -= i5;
        this.f502b = false;
        this.f503c = true;
        return true;
    }

    public final void c() {
        this.f502b = false;
        this.f503c = false;
    }

    public final void d(int i5) {
        ke.b.k(!this.f502b);
        boolean z5 = i5 == this.a;
        this.f502b = z5;
        if (z5) {
            this.f505e = 3;
            this.f503c = false;
        }
    }
}
