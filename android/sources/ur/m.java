package ur;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceArray;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f19106b = AtomicReferenceFieldUpdater.newUpdater(m.class, Object.class, "lastScheduledTask$volatile");

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f19107c = AtomicIntegerFieldUpdater.newUpdater(m.class, "producerIndex$volatile");

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f19108d = AtomicIntegerFieldUpdater.newUpdater(m.class, "consumerIndex$volatile");

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f19109e = AtomicIntegerFieldUpdater.newUpdater(m.class, "blockingTasksInBuffer$volatile");
    public final AtomicReferenceArray a = new AtomicReferenceArray(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
    private volatile /* synthetic */ int blockingTasksInBuffer$volatile;
    private volatile /* synthetic */ int consumerIndex$volatile;
    private volatile /* synthetic */ Object lastScheduledTask$volatile;
    private volatile /* synthetic */ int producerIndex$volatile;

    public final i a(i iVar) {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f19107c;
        if (atomicIntegerFieldUpdater.get(this) - f19108d.get(this) == 127) {
            return iVar;
        }
        if (iVar.f19098e) {
            f19109e.incrementAndGet(this);
        }
        int i5 = atomicIntegerFieldUpdater.get(this) & 127;
        while (true) {
            AtomicReferenceArray atomicReferenceArray = this.a;
            if (atomicReferenceArray.get(i5) == null) {
                atomicReferenceArray.lazySet(i5, iVar);
                atomicIntegerFieldUpdater.incrementAndGet(this);
                return null;
            }
            Thread.yield();
        }
    }

    public final i b() {
        i iVar;
        while (true) {
            AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f19108d;
            int i5 = atomicIntegerFieldUpdater.get(this);
            if (i5 - f19107c.get(this) == 0) {
                return null;
            }
            int i6 = i5 & 127;
            if (atomicIntegerFieldUpdater.compareAndSet(this, i5, i5 + 1) && (iVar = (i) this.a.getAndSet(i6, null)) != null) {
                if (iVar.f19098e) {
                    f19109e.decrementAndGet(this);
                }
                return iVar;
            }
        }
    }

    public final i c(int i5, boolean z5) {
        int i6 = i5 & 127;
        AtomicReferenceArray atomicReferenceArray = this.a;
        i iVar = (i) atomicReferenceArray.get(i6);
        if (iVar != null && iVar.f19098e == z5) {
            while (!atomicReferenceArray.compareAndSet(i6, iVar, null)) {
                if (atomicReferenceArray.get(i6) != iVar) {
                }
            }
            if (z5) {
                f19109e.decrementAndGet(this);
            }
            return iVar;
        }
        return null;
    }
}
