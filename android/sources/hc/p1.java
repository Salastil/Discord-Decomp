package hc;

import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class p1 {

    /* renamed from: c, reason: collision with root package name */
    public static final p1 f9840c;
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f9841b;

    static {
        p1 p1Var = new p1(0L, 0L);
        new p1(LongCompanionObject.MAX_VALUE, LongCompanionObject.MAX_VALUE);
        new p1(LongCompanionObject.MAX_VALUE, 0L);
        new p1(0L, LongCompanionObject.MAX_VALUE);
        f9840c = p1Var;
    }

    public p1(long j, long j5) {
        ke.b.g(j >= 0);
        ke.b.g(j5 >= 0);
        this.a = j;
        this.f9841b = j5;
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x005d A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long a(long j, long j5, long j7) {
        long j10 = this.a;
        long j11 = this.f9841b;
        if (j10 == 0 && j11 == 0) {
            return j;
        }
        int i5 = ke.d0.a;
        long j12 = j - j10;
        if (((j10 ^ j) & (j ^ j12)) < 0) {
            j12 = Long.MIN_VALUE;
        }
        long j13 = j + j11;
        if (((j11 ^ j13) & (j ^ j13)) < 0) {
            j13 = LongCompanionObject.MAX_VALUE;
        }
        boolean z5 = false;
        boolean z6 = j12 <= j5 && j5 <= j13;
        if (j12 <= j7 && j7 <= j13) {
            z5 = true;
        }
        if (!z6 || !z5) {
            if (!z6) {
                return z5 ? j7 : j12;
            }
            return j5;
        }
        if (Math.abs(j5 - j) <= Math.abs(j7 - j)) {
            return j5;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && p1.class == obj.getClass()) {
            p1 p1Var = (p1) obj;
            if (this.a == p1Var.a && this.f9841b == p1Var.f9841b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((int) this.a) * 31) + ((int) this.f9841b);
    }
}
