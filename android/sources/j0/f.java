package j0;

import android.view.Choreographer;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import u.j;

/* loaded from: classes.dex */
public final class f implements j {

    /* renamed from: d, reason: collision with root package name */
    public final Choreographer f12369d;

    /* renamed from: e, reason: collision with root package name */
    public final d f12370e;

    public f(Choreographer choreographer, d dVar) {
        Intrinsics.checkNotNullParameter(choreographer, "choreographer");
        this.f12369d = choreographer;
        this.f12370e = dVar;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(kotlin.coroutines.f fVar) {
        return kotlin.coroutines.e.b(this, fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return operation.invoke(obj, this);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(kotlin.coroutines.f fVar) {
        return kotlin.coroutines.e.a(this, fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext coroutineContext) {
        return kotlin.coroutines.e.c(this, coroutineContext);
    }
}
