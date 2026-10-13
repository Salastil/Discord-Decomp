package kotlinx.coroutines;

import a5.h;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;

/* loaded from: classes3.dex */
public interface CancellableContinuation extends Continuation {
    boolean c();

    h h(Object obj, Function3 function3);

    void j(Object obj, Function3 function3);

    boolean m(Throwable th2);

    void s(Object obj);
}
