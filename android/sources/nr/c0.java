package nr;

import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes3.dex */
public final class c0 extends Exception {

    /* renamed from: d, reason: collision with root package name */
    public final Throwable f15600d;

    public c0(Throwable th2, CoroutineDispatcher coroutineDispatcher, CoroutineContext coroutineContext) {
        super("Coroutine dispatcher " + coroutineDispatcher + " threw an exception, context = " + coroutineContext, th2);
        this.f15600d = th2;
    }

    @Override // java.lang.Throwable
    public final Throwable getCause() {
        return this.f15600d;
    }
}
