package nd;

import android.net.Uri;
import com.google.android.exoplayer2.upstream.DataSource;
import java.util.Map;

/* loaded from: classes3.dex */
public final class k implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public final DataSource f15115d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15116e;

    /* renamed from: i, reason: collision with root package name */
    public final e0 f15117i;

    /* renamed from: v, reason: collision with root package name */
    public final byte[] f15118v;

    /* renamed from: w, reason: collision with root package name */
    public int f15119w;

    public k(DataSource dataSource, int i5, e0 e0Var) {
        ke.b.g(i5 > 0);
        this.f15115d = dataSource;
        this.f15116e = i5;
        this.f15117i = e0Var;
        this.f15118v = new byte[1];
        this.f15119w = i5;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        throw new UnsupportedOperationException();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(ie.u0 u0Var) {
        u0Var.getClass();
        this.f15115d.n(u0Var);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(ie.p pVar) {
        throw new UnsupportedOperationException();
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        int i10 = this.f15119w;
        DataSource dataSource = this.f15115d;
        if (i10 == 0) {
            byte[] bArr2 = this.f15118v;
            int i11 = 0;
            if (dataSource.read(bArr2, 0, 1) != -1) {
                int i12 = (bArr2[0] & 255) << 4;
                if (i12 != 0) {
                    byte[] bArr3 = new byte[i12];
                    int i13 = i12;
                    while (i13 > 0) {
                        int read = dataSource.read(bArr3, i11, i13);
                        if (read != -1) {
                            i11 += read;
                            i13 -= read;
                        }
                    }
                    while (i12 > 0 && bArr3[i12 - 1] == 0) {
                        i12--;
                    }
                    if (i12 > 0) {
                        ke.w wVar = new ke.w(bArr3, i12);
                        e0 e0Var = this.f15117i;
                        long max = !e0Var.I ? e0Var.F : Math.max(e0Var.J.i(true), e0Var.F);
                        int a = wVar.a();
                        p0 p0Var = e0Var.H;
                        p0Var.getClass();
                        p0Var.d(a, wVar);
                        p0Var.b(max, 1, a, 0, null);
                        e0Var.I = true;
                    }
                }
                this.f15119w = this.f15116e;
            }
            return -1;
        }
        int read2 = dataSource.read(bArr, i5, Math.min(this.f15119w, i6));
        if (read2 != -1) {
            this.f15119w -= read2;
        }
        return read2;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        return this.f15115d.s();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f15115d.x();
    }
}
