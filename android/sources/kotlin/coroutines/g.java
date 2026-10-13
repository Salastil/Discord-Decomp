package kotlin.coroutines;

import java.io.Serializable;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class g implements CoroutineContext, Serializable {

    /* renamed from: d, reason: collision with root package name */
    @NotNull
    public static final g f13538d = new g();

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return this;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 operation) {
        Intrinsics.checkNotNullParameter(operation, "operation");
        return obj;
    }

    public final int hashCode() {
        return 0;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        return null;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return context;
    }

    public final String toString() {
        return "EmptyCoroutineContext";
    }
}
