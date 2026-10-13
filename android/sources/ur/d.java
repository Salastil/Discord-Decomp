package ur;

import java.util.concurrent.Executor;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineDispatcher;
import sr.w;

/* loaded from: classes3.dex */
public final class d extends kotlinx.coroutines.c implements Executor {

    /* renamed from: i, reason: collision with root package name */
    public static final d f19093i = new d();

    /* renamed from: v, reason: collision with root package name */
    public static final CoroutineDispatcher f19094v;

    static {
        l lVar = l.f19105i;
        int i5 = w.a;
        if (64 >= i5) {
            i5 = 64;
        }
        f19094v = lVar.o0(sr.h.j(i5, 12, "kotlinx.coroutines.io.parallelism"));
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        throw new IllegalStateException("Cannot be invoked on Dispatchers.IO");
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        l0(kotlin.coroutines.g.f13538d, runnable);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        f19094v.l0(coroutineContext, runnable);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void m0(CoroutineContext coroutineContext, Runnable runnable) {
        f19094v.m0(coroutineContext, runnable);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return "Dispatchers.IO";
    }
}
