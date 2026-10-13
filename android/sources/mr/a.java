package mr;

import fo.e0;
import fo.f0;
import java.io.Serializable;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import ks.n;
import wi.d;

/* loaded from: classes3.dex */
public final class a implements Comparable, Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final d f14584i = new d(13);

    /* renamed from: v, reason: collision with root package name */
    public static final a f14585v = new a(0, 0);

    /* renamed from: d, reason: collision with root package name */
    public final long f14586d;

    /* renamed from: e, reason: collision with root package name */
    public final long f14587e;

    public a(long j, long j5) {
        this.f14586d = j;
        this.f14587e = j5;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        a other = (a) obj;
        Intrinsics.checkNotNullParameter(other, "other");
        long j = other.f14586d;
        long j5 = this.f14586d;
        if (j5 != j) {
            e0 e0Var = f0.f8814e;
            return Long.compare(j5 ^ Long.MIN_VALUE, j ^ Long.MIN_VALUE);
        }
        e0 e0Var2 = f0.f8814e;
        return Long.compare(this.f14587e ^ Long.MIN_VALUE, other.f14587e ^ Long.MIN_VALUE);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return this.f14586d == aVar.f14586d && this.f14587e == aVar.f14587e;
    }

    public final int hashCode() {
        return Long.hashCode(this.f14586d ^ this.f14587e);
    }

    public final String toString() {
        byte[] bArr = new byte[36];
        n.l(this.f14586d, bArr, 0, 0, 4);
        bArr[8] = 45;
        n.l(this.f14586d, bArr, 9, 4, 6);
        bArr[13] = 45;
        n.l(this.f14586d, bArr, 14, 6, 8);
        bArr[18] = 45;
        n.l(this.f14587e, bArr, 19, 0, 2);
        bArr[23] = 45;
        n.l(this.f14587e, bArr, 24, 2, 8);
        return x.g(bArr);
    }
}
