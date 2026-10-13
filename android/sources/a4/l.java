package a4;

import e4.o;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.x;
import nr.x0;
import v3.p;

/* loaded from: classes.dex */
public abstract class l {
    public static final String a;

    static {
        String f2 = p.f("WorkConstraintsTracker");
        Intrinsics.checkNotNullExpressionValue(f2, "tagWithPrefix(\"WorkConstraintsTracker\")");
        a = f2;
    }

    public static final x0 a(i iVar, o spec, CoroutineDispatcher dispatcher, e listener) {
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(spec, "spec");
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        Intrinsics.checkNotNullParameter(listener, "listener");
        x0 x0Var = new x0();
        dispatcher.getClass();
        x.t(x.b(kotlin.coroutines.e.c(dispatcher, x0Var)), null, new k(iVar, spec, listener, null, 0), 3);
        return x0Var;
    }
}
