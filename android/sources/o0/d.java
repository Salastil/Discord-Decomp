package o0;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes.dex */
public final class d extends e4.f {

    /* renamed from: f, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f15713f;

    /* renamed from: g, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f15714g;

    /* renamed from: h, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f15715h;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f15716i;
    public final AtomicReferenceFieldUpdater j;

    public d(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater4, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater5) {
        this.f15713f = atomicReferenceFieldUpdater;
        this.f15714g = atomicReferenceFieldUpdater2;
        this.f15715h = atomicReferenceFieldUpdater3;
        this.f15716i = atomicReferenceFieldUpdater4;
        this.j = atomicReferenceFieldUpdater5;
    }

    @Override // e4.f
    public final void F(f fVar, f fVar2) {
        this.f15714g.lazySet(fVar, fVar2);
    }

    @Override // e4.f
    public final void G(f fVar, Thread thread) {
        this.f15713f.lazySet(fVar, thread);
    }

    @Override // e4.f
    public final boolean g(g gVar, c cVar, c cVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f15716i;
            if (atomicReferenceFieldUpdater.compareAndSet(gVar, cVar, cVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(gVar) == cVar);
        return false;
    }

    @Override // e4.f
    public final boolean h(g gVar, Object obj, Object obj2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.j;
            if (atomicReferenceFieldUpdater.compareAndSet(gVar, obj, obj2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(gVar) == obj);
        return false;
    }

    @Override // e4.f
    public final boolean i(g gVar, f fVar, f fVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f15715h;
            if (atomicReferenceFieldUpdater.compareAndSet(gVar, fVar, fVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(gVar) == fVar);
        return false;
    }
}
