package ad;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f375e = {0, 0, 1};
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public int f376b;

    /* renamed from: c, reason: collision with root package name */
    public int f377c;

    /* renamed from: d, reason: collision with root package name */
    public byte[] f378d;

    public final void a(byte[] bArr, int i5, int i6) {
        if (this.a) {
            int i10 = i6 - i5;
            byte[] bArr2 = this.f378d;
            int length = bArr2.length;
            int i11 = this.f376b + i10;
            if (length < i11) {
                this.f378d = Arrays.copyOf(bArr2, i11 * 2);
            }
            System.arraycopy(bArr, i5, this.f378d, this.f376b, i10);
            this.f376b += i10;
        }
    }
}
