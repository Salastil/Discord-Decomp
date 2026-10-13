package yo;

import java.util.NoSuchElementException;
import kotlin.collections.s0;

/* loaded from: classes3.dex */
public final class f extends s0 {

    /* renamed from: d, reason: collision with root package name */
    public final long f21000d;

    /* renamed from: e, reason: collision with root package name */
    public final long f21001e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f21002i;

    /* renamed from: v, reason: collision with root package name */
    public long f21003v;

    public f(long j, long j5, long j7) {
        this.f21000d = j7;
        this.f21001e = j5;
        boolean z5 = false;
        if (j7 <= 0 ? j >= j5 : j <= j5) {
            z5 = true;
        }
        this.f21002i = z5;
        this.f21003v = z5 ? j : j5;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f21002i;
    }

    @Override // kotlin.collections.s0
    public final long nextLong() {
        long j = this.f21003v;
        if (j != this.f21001e) {
            this.f21003v = this.f21000d + j;
            return j;
        }
        if (!this.f21002i) {
            throw new NoSuchElementException();
        }
        this.f21002i = false;
        return j;
    }
}
