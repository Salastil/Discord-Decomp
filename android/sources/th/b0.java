package th;

import androidx.recyclerview.widget.RecyclerView;
import java.io.FilterInputStream;
import java.io.InputStream;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b0 extends FilterInputStream {

    /* renamed from: d, reason: collision with root package name */
    public final z0 f18401d;

    /* renamed from: e, reason: collision with root package name */
    public byte[] f18402e;

    /* renamed from: i, reason: collision with root package name */
    public long f18403i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f18404v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f18405w;

    public b0(InputStream inputStream) {
        super(inputStream);
        this.f18401d = new z0();
        this.f18402e = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        this.f18404v = false;
        this.f18405w = false;
    }

    public final z c() {
        byte[] bArr;
        if (this.f18403i > 0) {
            do {
                bArr = this.f18402e;
            } while (read(bArr, 0, bArr.length) != -1);
        }
        if (this.f18404v || this.f18405w) {
            return new z(null, -1L, -1, false, false, null);
        }
        boolean f2 = f(30);
        z0 z0Var = this.f18401d;
        if (!f2) {
            this.f18404v = true;
            return z0Var.b();
        }
        z b10 = z0Var.b();
        if (b10.f18633e) {
            this.f18405w = true;
            return b10;
        }
        if (b10.f18630b == 4294967295L) {
            throw new l0("Files bigger than 4GiB are not supported.");
        }
        int i5 = z0Var.f18639f - 30;
        int length = this.f18402e.length;
        long j = i5;
        if (j > length) {
            do {
                length += length;
            } while (length < j);
            this.f18402e = Arrays.copyOf(this.f18402e, length);
        }
        if (!f(i5)) {
            this.f18404v = true;
            return z0Var.b();
        }
        z b11 = z0Var.b();
        this.f18403i = b11.f18630b;
        return b11;
    }

    public final boolean f(int i5) {
        int max = Math.max(0, super.read(this.f18402e, 0, i5));
        z0 z0Var = this.f18401d;
        if (max != i5) {
            int i6 = i5 - max;
            if (Math.max(0, super.read(this.f18402e, max, i6)) != i6) {
                z0Var.a(this.f18402e, 0, max);
                return false;
            }
        }
        z0Var.a(this.f18402e, 0, i5);
        return true;
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.FilterInputStream, java.io.InputStream
    public final int read(byte[] bArr, int i5, int i6) {
        long j = this.f18403i;
        if (j <= 0 || this.f18404v) {
            return -1;
        }
        int max = Math.max(0, super.read(bArr, i5, (int) Math.min(j, i6)));
        this.f18403i -= max;
        if (max != 0) {
            return max;
        }
        this.f18404v = true;
        return 0;
    }
}
