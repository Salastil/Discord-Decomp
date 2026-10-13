package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;

/* loaded from: classes3.dex */
public final class j0 implements Comparable, Serializable {
    private static final long serialVersionUID = -4150291820807606229L;

    /* renamed from: v, reason: collision with root package name */
    public static final j0 f15259v = new j0(0, 0, ns.e.f15694d);

    /* renamed from: w, reason: collision with root package name */
    public static final j0 f15260w = new j0(0, 0, ns.e.f15695e);

    /* renamed from: d, reason: collision with root package name */
    public final transient long f15261d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15262e;

    /* renamed from: i, reason: collision with root package name */
    public final transient ns.e f15263i;

    public j0(long j, int i5, ns.e eVar) {
        while (i5 < 0) {
            i5 += 1000000000;
            j = w3.q.D(j, 1L);
        }
        while (i5 >= 1000000000) {
            i5 -= 1000000000;
            j = w3.q.z(j, 1L);
        }
        if (j < 0 && i5 > 0) {
            j++;
            i5 -= 1000000000;
        }
        this.f15261d = j;
        this.f15262e = i5;
        this.f15263i = eVar;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(5, this);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        j0 j0Var = (j0) obj;
        if (this.f15263i != j0Var.f15263i) {
            throw new ClassCastException("Different time scales.");
        }
        long j = this.f15261d;
        long j5 = j0Var.f15261d;
        if (j < j5) {
            return -1;
        }
        if (j > j5) {
            return 1;
        }
        return this.f15262e - j0Var.f15262e;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof j0) {
            j0 j0Var = (j0) obj;
            if (this.f15261d == j0Var.f15261d && this.f15262e == j0Var.f15262e && this.f15263i == j0Var.f15263i) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.f15261d;
        return this.f15263i.hashCode() + ((((161 + ((int) (j ^ (j >>> 32)))) * 23) + this.f15262e) * 23);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        long j = this.f15261d;
        int i5 = this.f15262e;
        if (j < 0 || i5 < 0) {
            sb2.append('-');
            sb2.append(Math.abs(j));
        } else {
            sb2.append(j);
        }
        if (i5 != 0) {
            sb2.append('.');
            String valueOf = String.valueOf(Math.abs(i5));
            for (int length = 9 - valueOf.length(); length > 0; length--) {
                sb2.append('0');
            }
            sb2.append(valueOf);
        }
        sb2.append("s [");
        sb2.append(this.f15263i.name());
        sb2.append(']');
        return sb2.toString();
    }
}
