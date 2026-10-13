package kotlinx.coroutines;

import java.util.concurrent.CancellationException;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function1;
import kotlin.sequences.Sequence;
import nr.e1;
import nr.i0;
import nr.m;
import nr.y0;

/* loaded from: classes3.dex */
public interface Job extends CoroutineContext.Element {
    i0 P(Function1 function1);

    Object X(lo.c cVar);

    boolean c();

    m d0(e1 e1Var);

    void f(CancellationException cancellationException);

    i0 i(boolean z5, boolean z6, y0 y0Var);

    boolean isCompleted();

    boolean start();

    Sequence t();

    CancellationException x();
}
