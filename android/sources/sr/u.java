package sr;

import com.discord.key_commands.KeyCommandDescriptor;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import kotlin.coroutines.CoroutineContext;
import nr.j1;

/* loaded from: classes3.dex */
public abstract class u extends c implements j1 {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f18126v = AtomicIntegerFieldUpdater.newUpdater(u.class, "cleanedAndPointers$volatile");
    private volatile /* synthetic */ int cleanedAndPointers$volatile;

    /* renamed from: i, reason: collision with root package name */
    public final long f18127i;

    public u(long j, u uVar, int i5) {
        super(uVar);
        this.f18127i = j;
        this.cleanedAndPointers$volatile = i5 << 16;
    }

    @Override // sr.c
    public final boolean d() {
        return f18126v.get(this) == g() && c() != null;
    }

    public final boolean f() {
        return f18126v.addAndGet(this, -65536) == g() && c() != null;
    }

    public abstract int g();

    public abstract void h(int i5, CoroutineContext coroutineContext);

    public final void i() {
        if (f18126v.incrementAndGet(this) == g()) {
            e();
        }
    }

    public final boolean j() {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater;
        int i5;
        do {
            atomicIntegerFieldUpdater = f18126v;
            i5 = atomicIntegerFieldUpdater.get(this);
            if (i5 == g() && c() != null) {
                return false;
            }
        } while (!atomicIntegerFieldUpdater.compareAndSet(this, i5, KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT + i5));
        return true;
    }
}
