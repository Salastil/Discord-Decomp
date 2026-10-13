package qc;

import java.util.Arrays;
import ke.d0;

/* loaded from: classes3.dex */
public final class f implements s {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f16765b;

    /* renamed from: c, reason: collision with root package name */
    public final long[] f16766c;

    /* renamed from: d, reason: collision with root package name */
    public final long[] f16767d;

    /* renamed from: e, reason: collision with root package name */
    public final long[] f16768e;

    /* renamed from: f, reason: collision with root package name */
    public final long f16769f;

    public f(int[] iArr, long[] jArr, long[] jArr2, long[] jArr3) {
        this.f16765b = iArr;
        this.f16766c = jArr;
        this.f16767d = jArr2;
        this.f16768e = jArr3;
        int length = iArr.length;
        this.a = length;
        if (length > 0) {
            this.f16769f = jArr2[length - 1] + jArr3[length - 1];
        } else {
            this.f16769f = 0L;
        }
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        long[] jArr = this.f16768e;
        int e9 = d0.e(jArr, j, true);
        long j5 = jArr[e9];
        long[] jArr2 = this.f16766c;
        t tVar = new t(j5, jArr2[e9]);
        if (j5 >= j || e9 == this.a - 1) {
            return new r(tVar, tVar);
        }
        int i5 = e9 + 1;
        return new r(tVar, new t(jArr[i5], jArr2[i5]));
    }

    @Override // qc.s
    public final long i() {
        return this.f16769f;
    }

    public final String toString() {
        return "ChunkIndex(length=" + this.a + ", sizes=" + Arrays.toString(this.f16765b) + ", offsets=" + Arrays.toString(this.f16766c) + ", timeUs=" + Arrays.toString(this.f16768e) + ", durationsUs=" + Arrays.toString(this.f16767d) + ")";
    }
}
