package nr;

import java.util.concurrent.ScheduledFuture;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class h implements i {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15620d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f15621e;

    public /* synthetic */ h(int i5, Object obj) {
        this.f15620d = i5;
        this.f15621e = obj;
    }

    @Override // nr.i
    public final void b(Throwable th2) {
        switch (this.f15620d) {
            case 0:
                ((ScheduledFuture) this.f15621e).cancel(false);
                break;
            case 1:
                ((Function1) this.f15621e).invoke(th2);
                break;
            default:
                ((i0) this.f15621e).dispose();
                break;
        }
    }

    public final String toString() {
        switch (this.f15620d) {
            case 0:
                return "CancelFutureOnCancel[" + ((ScheduledFuture) this.f15621e) + ']';
            case 1:
                return "CancelHandler.UserSupplied[" + ((Function1) this.f15621e).getClass().getSimpleName() + '@' + x.o(this) + ']';
            default:
                return "DisposeOnCancel[" + ((i0) this.f15621e) + ']';
        }
    }
}
