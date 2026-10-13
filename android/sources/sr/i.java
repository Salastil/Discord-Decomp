package sr;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.i0;

/* loaded from: classes3.dex */
public final class i extends CoroutineDispatcher implements nr.a0 {
    public static final /* synthetic */ AtomicIntegerFieldUpdater E = AtomicIntegerFieldUpdater.newUpdater(i.class, "runningWorkers$volatile");

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ nr.a0 f18110i;
    private volatile /* synthetic */ int runningWorkers$volatile;

    /* renamed from: v, reason: collision with root package name */
    public final CoroutineDispatcher f18111v;

    /* renamed from: w, reason: collision with root package name */
    public final int f18112w;

    /* renamed from: x, reason: collision with root package name */
    public final n f18113x;

    /* renamed from: y, reason: collision with root package name */
    public final Object f18114y;

    /* JADX WARN: Multi-variable type inference failed */
    public i(CoroutineDispatcher coroutineDispatcher, int i5) {
        nr.a0 a0Var = coroutineDispatcher instanceof nr.a0 ? (nr.a0) coroutineDispatcher : null;
        this.f18110i = a0Var == null ? nr.y.a : a0Var;
        this.f18111v = coroutineDispatcher;
        this.f18112w = i5;
        this.f18113x = new n();
        this.f18114y = new Object();
    }

    @Override // nr.a0
    public final i0 Q(long j, Runnable runnable, CoroutineContext coroutineContext) {
        return this.f18110i.Q(j, runnable, coroutineContext);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        Runnable p02;
        this.f18113x.a(runnable);
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = E;
        if (atomicIntegerFieldUpdater.get(this) >= this.f18112w || !q0() || (p02 = p0()) == null) {
            return;
        }
        try {
            h.g(this.f18111v, this, new ii.o(this, p02, 18, false));
        } catch (Throwable th2) {
            atomicIntegerFieldUpdater.decrementAndGet(this);
            throw th2;
        }
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void m0(CoroutineContext coroutineContext, Runnable runnable) {
        Runnable p02;
        this.f18113x.a(runnable);
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = E;
        if (atomicIntegerFieldUpdater.get(this) >= this.f18112w || !q0() || (p02 = p0()) == null) {
            return;
        }
        try {
            this.f18111v.m0(this, new ii.o(this, p02, 18, false));
        } catch (Throwable th2) {
            atomicIntegerFieldUpdater.decrementAndGet(this);
            throw th2;
        }
    }

    public final Runnable p0() {
        while (true) {
            Runnable runnable = (Runnable) this.f18113x.d();
            if (runnable != null) {
                return runnable;
            }
            synchronized (this.f18114y) {
                AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = E;
                atomicIntegerFieldUpdater.decrementAndGet(this);
                if (this.f18113x.c() == 0) {
                    return null;
                }
                atomicIntegerFieldUpdater.incrementAndGet(this);
            }
        }
    }

    @Override // nr.a0
    public final void q(long j, nr.j jVar) {
        this.f18110i.q(j, jVar);
    }

    public final boolean q0() {
        synchronized (this.f18114y) {
            AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = E;
            if (atomicIntegerFieldUpdater.get(this) >= this.f18112w) {
                return false;
            }
            atomicIntegerFieldUpdater.incrementAndGet(this);
            return true;
        }
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f18111v);
        sb2.append(".limitedParallelism(");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f18112w, ')');
    }
}
