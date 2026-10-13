package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public abstract class k0 {
    public static final Object a(Lifecycle lifecycle, Lifecycle.State state, Function2 function2, Continuation continuation) {
        if (state == Lifecycle.State.f2138e) {
            throw new IllegalArgumentException("repeatOnLifecycle cannot start work with the INITIALIZED lifecycle state.");
        }
        if (lifecycle.b() == Lifecycle.State.f2137d) {
            return Unit.a;
        }
        Object i5 = nr.x.i(new j0(lifecycle, state, function2, null), continuation);
        return i5 == ko.a.f13464d ? i5 : Unit.a;
    }
}
