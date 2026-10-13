package ii;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public final class d extends com.facebook.imagepipeline.nativecode.b {
    public final AtomicReferenceFieldUpdater E;

    /* renamed from: v, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f10820v;

    /* renamed from: w, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f10821w;

    /* renamed from: x, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f10822x;

    /* renamed from: y, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f10823y;

    public d(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater4, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater5) {
        super(9);
        this.f10820v = atomicReferenceFieldUpdater;
        this.f10821w = atomicReferenceFieldUpdater2;
        this.f10822x = atomicReferenceFieldUpdater3;
        this.f10823y = atomicReferenceFieldUpdater4;
        this.E = atomicReferenceFieldUpdater5;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final void C(l lVar, l lVar2) {
        this.f10821w.lazySet(lVar, lVar2);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final void D(l lVar, Thread thread) {
        this.f10820v.lazySet(lVar, thread);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean d(m mVar, c cVar, c cVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f10823y;
            if (atomicReferenceFieldUpdater.compareAndSet(mVar, cVar, cVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(mVar) == cVar);
        return false;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean e(m mVar, Object obj, Object obj2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.E;
            if (atomicReferenceFieldUpdater.compareAndSet(mVar, obj, obj2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(mVar) == obj);
        return false;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean f(m mVar, l lVar, l lVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f10822x;
            if (atomicReferenceFieldUpdater.compareAndSet(mVar, lVar, lVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(mVar) == lVar);
        return false;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final c n(m mVar) {
        return (c) this.f10823y.getAndSet(mVar, c.f10817d);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final l o(m mVar) {
        return (l) this.f10822x.getAndSet(mVar, l.f10828c);
    }
}
