package yo;

import java.util.Iterator;
import kotlin.jvm.internal.markers.KMappedMarker;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public class e implements Iterable, KMappedMarker {

    /* renamed from: v, reason: collision with root package name */
    @NotNull
    public static final d f20996v = new d(null);

    /* renamed from: d, reason: collision with root package name */
    public final long f20997d;

    /* renamed from: e, reason: collision with root package name */
    public final long f20998e;

    /* renamed from: i, reason: collision with root package name */
    public final long f20999i;

    public e(long j, long j5, long j7) {
        if (j7 == 0) {
            throw new IllegalArgumentException("Step must be non-zero.");
        }
        if (j7 == Long.MIN_VALUE) {
            throw new IllegalArgumentException("Step must be greater than Long.MIN_VALUE to avoid overflow on negation.");
        }
        this.f20997d = j;
        if (j7 > 0) {
            if (j < j5) {
                long j10 = j5 % j7;
                long j11 = j % j7;
                long j12 = ((j10 < 0 ? j10 + j7 : j10) - (j11 < 0 ? j11 + j7 : j11)) % j7;
                j5 -= j12 < 0 ? j12 + j7 : j12;
            }
        } else {
            if (j7 >= 0) {
                throw new IllegalArgumentException("Step is zero.");
            }
            if (j > j5) {
                long j13 = -j7;
                long j14 = j % j13;
                long j15 = j5 % j13;
                long j16 = ((j14 < 0 ? j14 + j13 : j14) - (j15 < 0 ? j15 + j13 : j15)) % j13;
                j5 += j16 < 0 ? j16 + j13 : j16;
            }
        }
        this.f20998e = j5;
        this.f20999i = j7;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof e)) {
            return false;
        }
        if (isEmpty() && ((e) obj).isEmpty()) {
            return true;
        }
        e eVar = (e) obj;
        return this.f20997d == eVar.f20997d && this.f20998e == eVar.f20998e && this.f20999i == eVar.f20999i;
    }

    public int hashCode() {
        if (isEmpty()) {
            return -1;
        }
        long j = 31;
        long j5 = this.f20997d;
        long j7 = this.f20998e;
        long j10 = (((j5 ^ (j5 >>> 32)) * j) + (j7 ^ (j7 >>> 32))) * j;
        long j11 = this.f20999i;
        return (int) (j10 + (j11 ^ (j11 >>> 32)));
    }

    public boolean isEmpty() {
        long j = this.f20999i;
        long j5 = this.f20998e;
        long j7 = this.f20997d;
        return j > 0 ? j7 > j5 : j7 < j5;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new f(this.f20997d, this.f20998e, this.f20999i);
    }

    public String toString() {
        StringBuilder sb2;
        long j = this.f20999i;
        long j5 = this.f20998e;
        long j7 = this.f20997d;
        if (j > 0) {
            sb2 = new StringBuilder();
            sb2.append(j7);
            sb2.append("..");
            sb2.append(j5);
            sb2.append(" step ");
            sb2.append(j);
        } else {
            sb2 = new StringBuilder();
            sb2.append(j7);
            sb2.append(" downTo ");
            sb2.append(j5);
            sb2.append(" step ");
            sb2.append(-j);
        }
        return sb2.toString();
    }
}
