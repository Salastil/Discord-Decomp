package th;

import androidx.recyclerview.widget.RecyclerView;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class z0 {
    public byte[] a = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];

    /* renamed from: b, reason: collision with root package name */
    public int f18635b = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f18638e = -1;

    /* renamed from: c, reason: collision with root package name */
    public long f18636c = -1;

    /* renamed from: h, reason: collision with root package name */
    public boolean f18641h = false;

    /* renamed from: f, reason: collision with root package name */
    public int f18639f = 30;

    /* renamed from: d, reason: collision with root package name */
    public long f18637d = -1;

    /* renamed from: g, reason: collision with root package name */
    public int f18640g = -1;

    /* renamed from: i, reason: collision with root package name */
    public String f18642i = null;

    public final int a(byte[] bArr, int i5, int i6) {
        int c6 = c(30, i5, i6, bArr);
        if (c6 != -1) {
            if (this.f18636c == -1) {
                byte[] bArr2 = this.a;
                long a = ((m0.a(bArr2, 2) << 16) | m0.a(bArr2, 0)) & 4294967295L;
                this.f18636c = a;
                if (a == 67324752) {
                    this.f18641h = false;
                    byte[] bArr3 = this.a;
                    this.f18637d = ((m0.a(bArr3, 20) << 16) | m0.a(bArr3, 18)) & 4294967295L;
                    this.f18640g = m0.a(this.a, 8);
                    this.f18638e = m0.a(this.a, 26);
                    int a10 = this.f18638e + 30 + m0.a(this.a, 28);
                    this.f18639f = a10;
                    int length = this.a.length;
                    if (length < a10) {
                        do {
                            length += length;
                        } while (length < a10);
                        this.a = Arrays.copyOf(this.a, length);
                    }
                } else {
                    this.f18641h = true;
                }
            }
            int c8 = c(this.f18639f, i5 + c6, i6 - c6, bArr);
            if (c8 != -1) {
                int i10 = c6 + c8;
                if (!this.f18641h && this.f18642i == null) {
                    this.f18642i = new String(this.a, 30, this.f18638e);
                }
                return i10;
            }
        }
        return -1;
    }

    public final z b() {
        int i5 = this.f18635b;
        int i6 = this.f18639f;
        if (i5 < i6) {
            return new z(this.f18642i, this.f18637d, this.f18640g, true, this.f18641h, Arrays.copyOf(this.a, i5));
        }
        z zVar = new z(this.f18642i, this.f18637d, this.f18640g, false, this.f18641h, Arrays.copyOf(this.a, i6));
        this.f18635b = 0;
        this.f18638e = -1;
        this.f18636c = -1L;
        this.f18641h = false;
        this.f18639f = 30;
        this.f18637d = -1L;
        this.f18640g = -1;
        this.f18642i = null;
        return zVar;
    }

    public final int c(int i5, int i6, int i10, byte[] bArr) {
        int i11 = this.f18635b;
        if (i11 >= i5) {
            return 0;
        }
        int min = Math.min(i10, i5 - i11);
        System.arraycopy(bArr, i6, this.a, this.f18635b, min);
        int i12 = this.f18635b + min;
        this.f18635b = i12;
        if (i12 < i5) {
            return -1;
        }
        return min;
    }
}
