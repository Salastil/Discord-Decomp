package m0;

import s4.h;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f14309b = {18, 20, 17, 15};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f14310c = {65535, 262143, 32767, 8191};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f14311d = {32767, 8191, 65535, 262143};
    public final long a;

    public static final int a(long j) {
        int i5 = (int) (3 & j);
        int i6 = ((int) (j >> (f14309b[i5] + 31))) & f14311d[i5];
        if (i6 == 0) {
            return Integer.MAX_VALUE;
        }
        return i6 - 1;
    }

    public static final int b(long j) {
        int i5 = ((int) (j >> 33)) & f14310c[(int) (3 & j)];
        if (i5 == 0) {
            return Integer.MAX_VALUE;
        }
        return i5 - 1;
    }

    public static final int c(long j) {
        int i5 = (int) (3 & j);
        return ((int) (j >> f14309b[i5])) & f14311d[i5];
    }

    public static final int d(long j) {
        return ((int) (j >> 2)) & f14310c[(int) (3 & j)];
    }

    public final boolean equals(Object obj) {
        if (obj instanceof a) {
            return this.a == ((a) obj).a;
        }
        return false;
    }

    public final int hashCode() {
        return Long.hashCode(this.a);
    }

    public final String toString() {
        long j = this.a;
        int b10 = b(j);
        String valueOf = b10 == Integer.MAX_VALUE ? "Infinity" : String.valueOf(b10);
        int a = a(j);
        String valueOf2 = a != Integer.MAX_VALUE ? String.valueOf(a) : "Infinity";
        StringBuilder sb2 = new StringBuilder("Constraints(minWidth = ");
        sb2.append(d(j));
        sb2.append(", maxWidth = ");
        sb2.append(valueOf);
        sb2.append(", minHeight = ");
        sb2.append(c(j));
        sb2.append(", maxHeight = ");
        return h.h(sb2, valueOf2, ')');
    }
}
