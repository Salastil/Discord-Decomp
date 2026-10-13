package ge;

import android.os.SystemClock;
import com.google.android.exoplayer2.Format;
import java.util.Arrays;
import java.util.List;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;
import nd.z0;

/* loaded from: classes3.dex */
public abstract class c implements p {
    public final z0 a;

    /* renamed from: b, reason: collision with root package name */
    public final int f9170b;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f9171c;

    /* renamed from: d, reason: collision with root package name */
    public final Format[] f9172d;

    /* renamed from: e, reason: collision with root package name */
    public final long[] f9173e;

    /* renamed from: f, reason: collision with root package name */
    public int f9174f;

    public c(z0 z0Var, int[] iArr) {
        int i5 = 0;
        ke.b.k(iArr.length > 0);
        z0Var.getClass();
        this.a = z0Var;
        int length = iArr.length;
        this.f9170b = length;
        this.f9172d = new Format[length];
        for (int i6 = 0; i6 < iArr.length; i6++) {
            this.f9172d[i6] = z0Var.f15211v[iArr[i6]];
        }
        Arrays.sort(this.f9172d, new com.facebook.react.uimanager.a(5));
        this.f9171c = new int[this.f9170b];
        while (true) {
            int i10 = this.f9170b;
            if (i5 >= i10) {
                this.f9173e = new long[i10];
                return;
            } else {
                this.f9171c[i5] = z0Var.a(this.f9172d[i5]);
                i5++;
            }
        }
    }

    @Override // ge.p
    public final boolean a(int i5, long j) {
        return this.f9173e[i5] > j;
    }

    @Override // ge.p
    public final z0 b() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            c cVar = (c) obj;
            if (this.a == cVar.a && Arrays.equals(this.f9171c, cVar.f9171c)) {
                return true;
            }
        }
        return false;
    }

    @Override // ge.p
    public final Format g(int i5) {
        return this.f9172d[i5];
    }

    @Override // ge.p
    public final int h(int i5) {
        return this.f9171c[i5];
    }

    public final int hashCode() {
        if (this.f9174f == 0) {
            this.f9174f = Arrays.hashCode(this.f9171c) + (System.identityHashCode(this.a) * 31);
        }
        return this.f9174f;
    }

    @Override // ge.p
    public int i(long j, List list) {
        return list.size();
    }

    @Override // ge.p
    public final int j(Format format) {
        for (int i5 = 0; i5 < this.f9170b; i5++) {
            if (this.f9172d[i5] == format) {
                return i5;
            }
        }
        return -1;
    }

    @Override // ge.p
    public final int k() {
        return this.f9171c[d()];
    }

    @Override // ge.p
    public final Format l() {
        return this.f9172d[d()];
    }

    @Override // ge.p
    public final int length() {
        return this.f9171c.length;
    }

    @Override // ge.p
    public final boolean n(int i5, long j) {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        boolean a = a(i5, elapsedRealtime);
        int i6 = 0;
        while (i6 < this.f9170b && !a) {
            a = (i6 == i5 || a(i6, elapsedRealtime)) ? false : true;
            i6++;
        }
        if (!a) {
            return false;
        }
        long[] jArr = this.f9173e;
        long j5 = jArr[i5];
        int i10 = d0.a;
        long j7 = elapsedRealtime + j;
        if (((j ^ j7) & (elapsedRealtime ^ j7)) < 0) {
            j7 = LongCompanionObject.MAX_VALUE;
        }
        jArr[i5] = Math.max(j5, j7);
        return true;
    }

    @Override // ge.p
    public final int s(int i5) {
        for (int i6 = 0; i6 < this.f9170b; i6++) {
            if (this.f9171c[i6] == i5) {
                return i6;
            }
        }
        return -1;
    }

    @Override // ge.p
    public void disable() {
    }

    @Override // ge.p
    public void enable() {
    }

    @Override // ge.p
    public void o(float f2) {
    }
}
