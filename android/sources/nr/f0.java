package nr;

import java.util.concurrent.Executor;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes3.dex */
public final class f0 implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineDispatcher f15618d;

    public f0(CoroutineDispatcher coroutineDispatcher) {
        this.f15618d = coroutineDispatcher;
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        kotlin.coroutines.g gVar = kotlin.coroutines.g.f13538d;
        CoroutineDispatcher coroutineDispatcher = this.f15618d;
        if (sr.h.h(coroutineDispatcher, gVar)) {
            sr.h.g(coroutineDispatcher, gVar, runnable);
        } else {
            runnable.run();
        }
    }

    public final String toString() {
        return this.f15618d.toString();
    }
}
