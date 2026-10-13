package g4;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes.dex */
public final class d extends ys.d {

    /* renamed from: d, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f9097d;

    /* renamed from: e, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f9098e;

    /* renamed from: f, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f9099f;

    /* renamed from: g, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f9100g;

    /* renamed from: h, reason: collision with root package name */
    public final AtomicReferenceFieldUpdater f9101h;

    public d(AtomicReferenceFieldUpdater atomicReferenceFieldUpdater, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater4, AtomicReferenceFieldUpdater atomicReferenceFieldUpdater5) {
        this.f9097d = atomicReferenceFieldUpdater;
        this.f9098e = atomicReferenceFieldUpdater2;
        this.f9099f = atomicReferenceFieldUpdater3;
        this.f9100g = atomicReferenceFieldUpdater4;
        this.f9101h = atomicReferenceFieldUpdater5;
    }

    @Override // ys.d
    public final void R(g gVar, g gVar2) {
        this.f9098e.lazySet(gVar, gVar2);
    }

    @Override // ys.d
    public final void S(g gVar, Thread thread) {
        this.f9097d.lazySet(gVar, thread);
    }

    @Override // ys.d
    public final boolean m(h hVar, c cVar, c cVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f9100g;
            if (atomicReferenceFieldUpdater.compareAndSet(hVar, cVar, cVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(hVar) == cVar);
        return false;
    }

    @Override // ys.d
    public final boolean n(h hVar, Object obj, Object obj2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f9101h;
            if (atomicReferenceFieldUpdater.compareAndSet(hVar, obj, obj2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(hVar) == obj);
        return false;
    }

    @Override // ys.d
    public final boolean o(h hVar, g gVar, g gVar2) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater;
        do {
            atomicReferenceFieldUpdater = this.f9099f;
            if (atomicReferenceFieldUpdater.compareAndSet(hVar, gVar, gVar2)) {
                return true;
            }
        } while (atomicReferenceFieldUpdater.get(hVar) == gVar);
        return false;
    }
}
