package n1;

import android.os.CancellationSignal;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14716d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CancellationSignal f14717e;

    public /* synthetic */ g(CancellationSignal cancellationSignal, int i5) {
        this.f14716d = i5;
        this.f14717e = cancellationSignal;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f14716d) {
            case 0:
                this.f14717e.cancel();
                break;
            default:
                this.f14717e.cancel();
                break;
        }
        return Unit.a;
    }
}
