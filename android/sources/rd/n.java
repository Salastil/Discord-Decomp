package rd;

import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class n extends s {

    /* renamed from: d, reason: collision with root package name */
    public final long f17258d;

    /* renamed from: e, reason: collision with root package name */
    public final long f17259e;

    /* renamed from: f, reason: collision with root package name */
    public final List f17260f;

    /* renamed from: g, reason: collision with root package name */
    public final long f17261g;

    /* renamed from: h, reason: collision with root package name */
    public final long f17262h;

    /* renamed from: i, reason: collision with root package name */
    public final long f17263i;

    public n(j jVar, long j, long j5, long j7, long j10, List list, long j11, long j12, long j13) {
        super(jVar, j, j5);
        this.f17258d = j7;
        this.f17259e = j10;
        this.f17260f = list;
        this.f17263i = j11;
        this.f17261g = j12;
        this.f17262h = j13;
    }

    public final long b(long j, long j5) {
        long d6 = d(j);
        return d6 != -1 ? d6 : (int) (f((j5 - this.f17262h) + this.f17263i, j) - c(j, j5));
    }

    public final long c(long j, long j5) {
        long d6 = d(j);
        long j7 = this.f17258d;
        if (d6 == -1) {
            long j10 = this.f17261g;
            if (j10 != -9223372036854775807L) {
                return Math.max(j7, f((j5 - this.f17262h) - j10, j));
            }
        }
        return j7;
    }

    public abstract long d(long j);

    public final long e(long j, long j5) {
        long j7 = this.f17268b;
        long j10 = this.f17258d;
        List list = this.f17260f;
        if (list != null) {
            return (((q) list.get((int) (j - j10))).f17265b * 1000000) / j7;
        }
        long d6 = d(j5);
        return (d6 == -1 || j != (j10 + d6) - 1) ? (this.f17259e * 1000000) / j7 : j5 - g(j);
    }

    public final long f(long j, long j5) {
        long d6 = d(j5);
        long j7 = this.f17258d;
        if (d6 != 0) {
            if (this.f17260f != null) {
                long j10 = (d6 + j7) - 1;
                long j11 = j7;
                while (j11 <= j10) {
                    long j12 = ((j10 - j11) / 2) + j11;
                    long g6 = g(j12);
                    if (g6 < j) {
                        j11 = j12 + 1;
                    } else {
                        if (g6 <= j) {
                            return j12;
                        }
                        j10 = j12 - 1;
                    }
                }
                return j11 == j7 ? j11 : j10;
            }
            long j13 = (j / ((this.f17259e * 1000000) / this.f17268b)) + j7;
            if (j13 >= j7) {
                return d6 == -1 ? j13 : Math.min(j13, (j7 + d6) - 1);
            }
        }
        return j7;
    }

    public final long g(long j) {
        long j5 = this.f17258d;
        List list = this.f17260f;
        return d0.P(list != null ? ((q) list.get((int) (j - j5))).a - this.f17269c : (j - j5) * this.f17259e, 1000000L, this.f17268b);
    }

    public abstract j h(k kVar, long j);

    public boolean i() {
        return this.f17260f != null;
    }
}
