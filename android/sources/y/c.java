package y;

import k2.r;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public abstract class c {
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final long f20569b;

    /* renamed from: c, reason: collision with root package name */
    public int f20570c;

    public c(long j, e eVar) {
        int i5;
        int numberOfTrailingZeros;
        this.a = eVar;
        this.f20569b = j;
        r rVar = f.a;
        if (j != 0) {
            e b10 = b();
            long j5 = b10.f20580i;
            long[] jArr = b10.f20581v;
            if (jArr != null) {
                j = jArr[0];
            } else {
                long j7 = b10.f20579e;
                if (j7 != 0) {
                    numberOfTrailingZeros = Long.numberOfTrailingZeros(j7);
                } else {
                    long j10 = b10.f20578d;
                    if (j10 != 0) {
                        j5 += 64;
                        numberOfTrailingZeros = Long.numberOfTrailingZeros(j10);
                    }
                }
                j = numberOfTrailingZeros + j5;
            }
            synchronized (f.f20582b) {
                i5 = f.f20585e.a(j);
            }
        } else {
            i5 = -1;
        }
        this.f20570c = i5;
    }

    public abstract void a();

    public e b() {
        return this.a;
    }

    public abstract Function1 c();

    public abstract boolean d();

    public long e() {
        return this.f20569b;
    }

    public int f() {
        return 0;
    }

    public abstract Function1 g();

    public abstract void h(g gVar);

    public void i(int i5) {
        throw new IllegalStateException("Updating write count is not supported for this snapshot");
    }
}
