package kotlinx.coroutines.flow;

import kotlin.coroutines.Continuation;
import qr.u;
import rr.a0;

/* loaded from: classes3.dex */
public interface MutableSharedFlow extends u, FlowCollector {
    boolean d(Object obj);

    a0 e();

    @Override // kotlinx.coroutines.flow.FlowCollector
    Object emit(Object obj, Continuation continuation);
}
