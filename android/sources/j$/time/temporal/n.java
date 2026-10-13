package j$.time.temporal;

import java.io.Serializable;

/* loaded from: classes2.dex */
public final class n implements Serializable {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f12344b;

    /* renamed from: c, reason: collision with root package name */
    public final long f12345c;

    /* renamed from: d, reason: collision with root package name */
    public final long f12346d;

    public static n d(long j, long j5) {
        if (j > j5) {
            throw new IllegalArgumentException("Minimum value must be less than maximum value");
        }
        return new n(j, j, j5, j5);
    }

    public static n e(long j, long j5) {
        if (j > j5) {
            throw new IllegalArgumentException("Smallest maximum value must be less than largest maximum value");
        }
        if (1 > j5) {
            throw new IllegalArgumentException("Minimum value must be less than maximum value");
        }
        return new n(1L, 1L, j, j5);
    }

    public n(long j, long j5, long j7, long j10) {
        this.a = j;
        this.f12344b = j5;
        this.f12345c = j7;
        this.f12346d = j10;
    }

    public final int a(long j, j jVar) {
        if (this.a < -2147483648L || this.f12346d > 2147483647L || !c(j)) {
            throw new j$.time.a(b(j, jVar));
        }
        return (int) j;
    }

    public final boolean c(long j) {
        return j >= this.a && j <= this.f12346d;
    }

    public final String b(long j, j jVar) {
        if (jVar != null) {
            return "Invalid value for " + jVar + " (valid values " + this + "): " + j;
        }
        return "Invalid value (valid values " + this + "): " + j;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof n) {
            n nVar = (n) obj;
            if (this.a == nVar.a && this.f12344b == nVar.f12344b && this.f12345c == nVar.f12345c && this.f12346d == nVar.f12346d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        long j5 = this.f12344b;
        long j7 = j + (j5 << 16) + (j5 >> 48);
        long j10 = this.f12345c;
        long j11 = j7 + (j10 << 32) + (j10 >> 32);
        long j12 = this.f12346d;
        long j13 = j11 + (j12 << 48) + (j12 >> 16);
        return (int) (j13 ^ (j13 >>> 32));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.a);
        if (this.a != this.f12344b) {
            sb2.append('/');
            sb2.append(this.f12344b);
        }
        sb2.append(" - ");
        sb2.append(this.f12345c);
        if (this.f12345c != this.f12346d) {
            sb2.append('/');
            sb2.append(this.f12346d);
        }
        return sb2.toString();
    }
}
