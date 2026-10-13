package ad;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class l {

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f393f = {0, 0, 1};
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public int f394b;

    /* renamed from: c, reason: collision with root package name */
    public int f395c;

    /* renamed from: d, reason: collision with root package name */
    public int f396d;

    /* renamed from: e, reason: collision with root package name */
    public byte[] f397e;

    public final void a(byte[] bArr, int i5, int i6) {
        if (this.a) {
            int i10 = i6 - i5;
            byte[] bArr2 = this.f397e;
            int length = bArr2.length;
            int i11 = this.f395c + i10;
            if (length < i11) {
                this.f397e = Arrays.copyOf(bArr2, i11 * 2);
            }
            System.arraycopy(bArr, i5, this.f397e, this.f395c, i10);
            this.f395c += i10;
        }
    }
}
