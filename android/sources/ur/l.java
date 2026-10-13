package ur;

import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes3.dex */
public final class l extends CoroutineDispatcher {

    /* renamed from: i, reason: collision with root package name */
    public static final l f19105i = new l();

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        e.f19095v.f19096i.f(runnable, true, false);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void m0(CoroutineContext coroutineContext, Runnable runnable) {
        e.f19095v.f19096i.f(runnable, true, true);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final CoroutineDispatcher o0(int i5) {
        sr.h.a(i5);
        return i5 >= k.f19102d ? this : super.o0(i5);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return "Dispatchers.IO";
    }
}
