package wr;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.sync.Mutex;
import nr.j;
import nr.x;

/* loaded from: classes3.dex */
public final class b extends f implements Mutex {

    /* renamed from: g, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f20044g = AtomicReferenceFieldUpdater.newUpdater(b.class, Object.class, "owner$volatile");
    private volatile /* synthetic */ Object owner$volatile = c.a;

    @Override // kotlinx.coroutines.sync.Mutex
    public final Object a(lo.c frame) {
        int i5;
        while (true) {
            AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f.f20051f;
            int i6 = atomicIntegerFieldUpdater.get(this);
            if (i6 > 1) {
                do {
                    i5 = atomicIntegerFieldUpdater.get(this);
                    if (i5 > 1) {
                    }
                } while (!atomicIntegerFieldUpdater.compareAndSet(this, i5, 1));
            } else {
                if (i6 <= 0) {
                    j p3 = x.p(ko.f.b(frame));
                    try {
                        c(new a(this, p3));
                        Object r5 = p3.r();
                        ko.a aVar = ko.a.f13464d;
                        if (r5 == aVar) {
                            Intrinsics.checkNotNullParameter(frame, "frame");
                        }
                        if (r5 != aVar) {
                            r5 = Unit.a;
                        }
                        return r5 == aVar ? r5 : Unit.a;
                    } catch (Throwable th2) {
                        p3.A();
                        throw th2;
                    }
                }
                if (atomicIntegerFieldUpdater.compareAndSet(this, i6, i6 - 1)) {
                    f20044g.set(this, null);
                    return Unit.a;
                }
            }
        }
    }

    @Override // kotlinx.coroutines.sync.Mutex
    public final void b(Object obj) {
        while (Math.max(f.f20051f.get(this), 0) == 0) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f20044g;
            Object obj2 = atomicReferenceFieldUpdater.get(this);
            a5.h hVar = c.a;
            if (obj2 != hVar) {
                if (obj2 == obj || obj == null) {
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, obj2, hVar)) {
                        if (atomicReferenceFieldUpdater.get(this) != obj2) {
                            break;
                        }
                    }
                    d();
                    return;
                }
                throw new IllegalStateException(("This mutex is locked by " + obj2 + ", but " + obj + " is expected").toString());
            }
        }
        throw new IllegalStateException("This mutex is not locked");
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Mutex@");
        sb2.append(x.o(this));
        sb2.append("[isLocked=");
        sb2.append(Math.max(f.f20051f.get(this), 0) == 0);
        sb2.append(",owner=");
        sb2.append(f20044g.get(this));
        sb2.append(']');
        return sb2.toString();
    }
}
