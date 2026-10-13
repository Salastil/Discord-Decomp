package kotlin.coroutines;

import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a implements CoroutineContext.Element {

    /* renamed from: d, reason: collision with root package name */
    public final f f13532d;

    public a(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.f13532d = key;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public CoroutineContext C(f fVar) {
        return e.b(this, fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return operation.invoke(obj, this);
    }

    @Override // kotlin.coroutines.CoroutineContext.Element
    public final f getKey() {
        return this.f13532d;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public CoroutineContext.Element o(f fVar) {
        return e.a(this, fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext coroutineContext) {
        return e.c(this, coroutineContext);
    }
}
