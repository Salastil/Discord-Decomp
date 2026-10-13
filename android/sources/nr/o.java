package nr;

import kotlin.coroutines.Continuation;
import kotlinx.coroutines.CompletableDeferred;

/* loaded from: classes3.dex */
public final class o extends e1 implements CompletableDeferred {
    @Override // kotlinx.coroutines.Deferred
    public final Object A(Continuation continuation) {
        Object w5 = w(continuation);
        ko.a aVar = ko.a.f13464d;
        return w5;
    }

    @Override // kotlinx.coroutines.CompletableDeferred
    public final boolean U(Throwable th2) {
        return S(new q(th2, false));
    }
}
