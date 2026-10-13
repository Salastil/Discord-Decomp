package sr;

import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public final class d implements CoroutineScope {

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f18103d;

    public d(CoroutineContext coroutineContext) {
        this.f18103d = coroutineContext;
    }

    @Override // kotlinx.coroutines.CoroutineScope
    public final CoroutineContext getCoroutineContext() {
        return this.f18103d;
    }

    public final String toString() {
        return "CoroutineScope(coroutineContext=" + this.f18103d + ')';
    }
}
