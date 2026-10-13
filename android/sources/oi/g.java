package oi;

import java.util.concurrent.Delayed;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class g extends o0.g implements ScheduledFuture {
    public final ScheduledFuture E;

    public g(f fVar) {
        this.E = fVar.a(new u4.b(28, this));
    }

    @Override // java.lang.Comparable
    public final int compareTo(Delayed delayed) {
        return this.E.compareTo(delayed);
    }

    @Override // o0.g
    public final void d() {
        ScheduledFuture scheduledFuture = this.E;
        Object obj = this.f15723d;
        scheduledFuture.cancel((obj instanceof o0.a) && ((o0.a) obj).a);
    }

    @Override // java.util.concurrent.Delayed
    public final long getDelay(TimeUnit timeUnit) {
        return this.E.getDelay(timeUnit);
    }
}
