package qc;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import hc.e0;
import java.io.EOFException;
import java.io.InterruptedIOException;
import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class g implements k {

    /* renamed from: e, reason: collision with root package name */
    public final ie.k f16771e;

    /* renamed from: i, reason: collision with root package name */
    public final long f16772i;

    /* renamed from: v, reason: collision with root package name */
    public long f16773v;

    /* renamed from: x, reason: collision with root package name */
    public int f16775x;

    /* renamed from: y, reason: collision with root package name */
    public int f16776y;

    /* renamed from: w, reason: collision with root package name */
    public byte[] f16774w = new byte[KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT];

    /* renamed from: d, reason: collision with root package name */
    public final byte[] f16770d = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];

    static {
        e0.a("goog.exo.extractor");
    }

    public g(ie.k kVar, long j, long j5) {
        this.f16771e = kVar;
        this.f16773v = j;
        this.f16772i = j5;
    }

    @Override // qc.k
    public final void C(byte[] bArr, int i5, int i6) {
        j(bArr, i5, i6, false);
    }

    @Override // qc.k
    public final int D() {
        g gVar;
        int min = Math.min(this.f16776y, 1);
        e(min);
        if (min == 0) {
            byte[] bArr = this.f16770d;
            gVar = this;
            min = gVar.d(bArr, 0, Math.min(1, bArr.length), 0, true);
        } else {
            gVar = this;
        }
        if (min != -1) {
            gVar.f16773v += min;
        }
        return min;
    }

    @Override // qc.k
    public final boolean a(byte[] bArr, int i5, int i6, boolean z5) {
        int min;
        int i10 = this.f16776y;
        if (i10 == 0) {
            min = 0;
        } else {
            min = Math.min(i10, i6);
            System.arraycopy(this.f16774w, 0, bArr, i5, min);
            e(min);
        }
        int i11 = min;
        while (i11 < i6 && i11 != -1) {
            i11 = d(bArr, i5, i6, i11, z5);
        }
        if (i11 != -1) {
            this.f16773v += i11;
        }
        return i11 != -1;
    }

    public final boolean b(int i5, boolean z5) {
        c(i5);
        int i6 = this.f16776y - this.f16775x;
        while (i6 < i5) {
            int i10 = i5;
            boolean z6 = z5;
            i6 = d(this.f16774w, this.f16775x, i10, i6, z6);
            if (i6 == -1) {
                return false;
            }
            this.f16776y = this.f16775x + i6;
            i5 = i10;
            z5 = z6;
        }
        this.f16775x += i5;
        return true;
    }

    public final void c(int i5) {
        int i6 = this.f16775x + i5;
        byte[] bArr = this.f16774w;
        if (i6 > bArr.length) {
            this.f16774w = Arrays.copyOf(this.f16774w, d0.i(bArr.length * 2, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT + i6, i6 + KeyCommandDescriptor.ModifierFlags.ALTERNATE));
        }
    }

    public final int d(byte[] bArr, int i5, int i6, int i10, boolean z5) {
        if (Thread.interrupted()) {
            throw new InterruptedIOException();
        }
        int read = this.f16771e.read(bArr, i5 + i10, i6 - i10);
        if (read != -1) {
            return i10 + read;
        }
        if (i10 == 0 && z5) {
            return -1;
        }
        throw new EOFException();
    }

    public final void e(int i5) {
        int i6 = this.f16776y - i5;
        this.f16776y = i6;
        this.f16775x = 0;
        byte[] bArr = this.f16774w;
        byte[] bArr2 = i6 < bArr.length - KeyCommandDescriptor.ModifierFlags.ALTERNATE ? new byte[KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT + i6] : bArr;
        System.arraycopy(bArr, i5, bArr2, 0, i6);
        this.f16774w = bArr2;
    }

    @Override // qc.k
    public final long getLength() {
        return this.f16772i;
    }

    @Override // qc.k
    public final long getPosition() {
        return this.f16773v;
    }

    @Override // qc.k
    public final boolean j(byte[] bArr, int i5, int i6, boolean z5) {
        if (!b(i6, z5)) {
            return false;
        }
        System.arraycopy(this.f16774w, this.f16775x - i6, bArr, i5, i6);
        return true;
    }

    @Override // qc.k
    public final long k() {
        return this.f16773v + this.f16775x;
    }

    @Override // qc.k
    public final void l(int i5) {
        b(i5, false);
    }

    @Override // qc.k
    public final int p(byte[] bArr, int i5, int i6) {
        g gVar;
        int min;
        c(i6);
        int i10 = this.f16776y;
        int i11 = this.f16775x;
        int i12 = i10 - i11;
        if (i12 == 0) {
            gVar = this;
            min = gVar.d(this.f16774w, i11, i6, 0, true);
            if (min == -1) {
                return -1;
            }
            gVar.f16776y += min;
        } else {
            gVar = this;
            min = Math.min(i6, i12);
        }
        System.arraycopy(gVar.f16774w, gVar.f16775x, bArr, i5, min);
        gVar.f16775x += min;
        return min;
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        g gVar;
        int i10 = this.f16776y;
        int i11 = 0;
        if (i10 != 0) {
            int min = Math.min(i10, i6);
            System.arraycopy(this.f16774w, 0, bArr, i5, min);
            e(min);
            i11 = min;
        }
        if (i11 == 0) {
            gVar = this;
            i11 = gVar.d(bArr, i5, i6, 0, true);
        } else {
            gVar = this;
        }
        if (i11 != -1) {
            gVar.f16773v += i11;
        }
        return i11;
    }

    @Override // qc.k
    public final void readFully(byte[] bArr, int i5, int i6) {
        a(bArr, i5, i6, false);
    }

    @Override // qc.k
    public final void t() {
        this.f16775x = 0;
    }

    @Override // qc.k
    public final void u(int i5) {
        int min = Math.min(this.f16776y, i5);
        e(min);
        int i6 = min;
        while (i6 < i5 && i6 != -1) {
            byte[] bArr = this.f16770d;
            i6 = d(bArr, -i6, Math.min(i5, bArr.length + i6), i6, false);
        }
        if (i6 != -1) {
            this.f16773v += i6;
        }
    }
}
