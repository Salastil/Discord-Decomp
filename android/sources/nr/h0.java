package nr;

import java.util.concurrent.ScheduledFuture;

/* loaded from: classes3.dex */
public final class h0 implements i0 {

    /* renamed from: d, reason: collision with root package name */
    public final ScheduledFuture f15622d;

    public h0(ScheduledFuture scheduledFuture) {
        this.f15622d = scheduledFuture;
    }

    @Override // nr.i0
    public final void dispose() {
        this.f15622d.cancel(false);
    }

    public final String toString() {
        return "DisposableFutureHandle[" + this.f15622d + ']';
    }
}
