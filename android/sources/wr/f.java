package wr;

import com.discord.chat.presentation.message.k;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceArray;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuation;
import sr.u;

/* loaded from: classes3.dex */
public class f {

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f20047b = AtomicReferenceFieldUpdater.newUpdater(f.class, Object.class, "head$volatile");

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f20048c = AtomicLongFieldUpdater.newUpdater(f.class, "deqIdx$volatile");

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f20049d = AtomicReferenceFieldUpdater.newUpdater(f.class, Object.class, "tail$volatile");

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicLongFieldUpdater f20050e = AtomicLongFieldUpdater.newUpdater(f.class, "enqIdx$volatile");

    /* renamed from: f, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f20051f = AtomicIntegerFieldUpdater.newUpdater(f.class, "_availablePermits$volatile");
    private volatile /* synthetic */ int _availablePermits$volatile;
    public final k a;
    private volatile /* synthetic */ long deqIdx$volatile;
    private volatile /* synthetic */ long enqIdx$volatile;
    private volatile /* synthetic */ Object head$volatile;
    private volatile /* synthetic */ Object tail$volatile;

    public f() {
        h hVar = new h(0L, null, 2);
        this.head$volatile = hVar;
        this.tail$volatile = hVar;
        this._availablePermits$volatile = 1;
        this.a = new k(6, this);
    }

    public final void c(a aVar) {
        Object a;
        long j;
        h hVar;
        while (true) {
            int andDecrement = f20051f.getAndDecrement(this);
            if (andDecrement <= 1) {
                Function3 function3 = this.a;
                if (andDecrement > 0) {
                    aVar.j(Unit.a, function3);
                    return;
                }
                Intrinsics.checkNotNull(aVar, "null cannot be cast to non-null type kotlinx.coroutines.Waiter");
                AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f20049d;
                h hVar2 = (h) atomicReferenceFieldUpdater.get(this);
                long andIncrement = f20050e.getAndIncrement(this);
                d dVar = d.f20045d;
                long j5 = andIncrement / g.f20056f;
                while (true) {
                    a = sr.b.a(hVar2, j5, dVar);
                    if (!sr.h.d(a)) {
                        u b10 = sr.h.b(a);
                        while (true) {
                            u uVar = (u) atomicReferenceFieldUpdater.get(this);
                            hVar = hVar2;
                            j = andIncrement;
                            if (uVar.f18127i >= b10.f18127i) {
                                break;
                            }
                            if (!b10.j()) {
                                break;
                            }
                            while (!atomicReferenceFieldUpdater.compareAndSet(this, uVar, b10)) {
                                if (atomicReferenceFieldUpdater.get(this) != uVar) {
                                    if (b10.f()) {
                                        b10.e();
                                    }
                                    hVar2 = hVar;
                                    andIncrement = j;
                                }
                            }
                            if (uVar.f()) {
                                uVar.e();
                            }
                        }
                    } else {
                        j = andIncrement;
                        break;
                    }
                    hVar2 = hVar;
                    andIncrement = j;
                }
                h hVar3 = (h) sr.h.b(a);
                AtomicReferenceArray atomicReferenceArray = hVar3.f20057w;
                int i5 = (int) (j % g.f20056f);
                while (!atomicReferenceArray.compareAndSet(i5, null, aVar)) {
                    if (atomicReferenceArray.get(i5) != null) {
                        a5.h hVar4 = g.f20052b;
                        a5.h hVar5 = g.f20053c;
                        while (!atomicReferenceArray.compareAndSet(i5, hVar4, hVar5)) {
                            if (atomicReferenceArray.get(i5) != hVar4) {
                                break;
                            }
                        }
                        Intrinsics.checkNotNull(aVar, "null cannot be cast to non-null type kotlinx.coroutines.CancellableContinuation<kotlin.Unit>");
                        aVar.j(Unit.a, function3);
                        return;
                    }
                }
                aVar.a(hVar3, i5);
                return;
            }
        }
    }

    public final void d() {
        boolean z5;
        int i5;
        Object a;
        do {
            AtomicIntegerFieldUpdater atomicIntegerFieldUpdater = f20051f;
            int andIncrement = atomicIntegerFieldUpdater.getAndIncrement(this);
            z5 = true;
            if (andIncrement >= 1) {
                do {
                    i5 = atomicIntegerFieldUpdater.get(this);
                    if (i5 <= 1) {
                        break;
                    }
                } while (!atomicIntegerFieldUpdater.compareAndSet(this, i5, 1));
                throw new IllegalStateException("The number of released permits cannot be greater than 1".toString());
            }
            if (andIncrement >= 0) {
                return;
            }
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f20047b;
            h hVar = (h) atomicReferenceFieldUpdater.get(this);
            long andIncrement2 = f20048c.getAndIncrement(this);
            long j = andIncrement2 / g.f20056f;
            e eVar = e.f20046d;
            while (true) {
                a = sr.b.a(hVar, j, eVar);
                if (!sr.h.d(a)) {
                    u b10 = sr.h.b(a);
                    while (true) {
                        u uVar = (u) atomicReferenceFieldUpdater.get(this);
                        if (uVar.f18127i >= b10.f18127i) {
                            break;
                        }
                        if (!b10.j()) {
                            break;
                        }
                        while (!atomicReferenceFieldUpdater.compareAndSet(this, uVar, b10)) {
                            if (atomicReferenceFieldUpdater.get(this) != uVar) {
                                if (b10.f()) {
                                    b10.e();
                                }
                            }
                        }
                        if (uVar.f()) {
                            uVar.e();
                        }
                    }
                } else {
                    break;
                }
            }
            h hVar2 = (h) sr.h.b(a);
            hVar2.a();
            AtomicReferenceArray atomicReferenceArray = hVar2.f20057w;
            boolean z6 = false;
            if (hVar2.f18127i <= j) {
                int i6 = (int) (andIncrement2 % g.f20056f);
                Object andSet = atomicReferenceArray.getAndSet(i6, g.f20052b);
                if (andSet == null) {
                    int i10 = g.a;
                    int i11 = 0;
                    while (true) {
                        if (i11 >= i10) {
                            a5.h hVar3 = g.f20052b;
                            a5.h hVar4 = g.f20054d;
                            while (true) {
                                if (atomicReferenceArray.compareAndSet(i6, hVar3, hVar4)) {
                                    z6 = true;
                                    break;
                                } else if (atomicReferenceArray.get(i6) != hVar3) {
                                    break;
                                }
                            }
                            z5 = true ^ z6;
                        } else if (atomicReferenceArray.get(i6) == g.f20053c) {
                            break;
                        } else {
                            i11++;
                        }
                    }
                } else if (andSet != g.f20055e) {
                    if (andSet instanceof CancellableContinuation) {
                        Intrinsics.checkNotNull(andSet, "null cannot be cast to non-null type kotlinx.coroutines.CancellableContinuation<kotlin.Unit>");
                        CancellableContinuation cancellableContinuation = (CancellableContinuation) andSet;
                        a5.h h6 = cancellableContinuation.h(Unit.a, this.a);
                        if (h6 != null) {
                            cancellableContinuation.s(h6);
                        }
                    } else {
                        if (!(andSet instanceof vr.f)) {
                            throw new IllegalStateException(("unexpected: " + andSet).toString());
                        }
                        if (((vr.e) ((vr.f) andSet)).g(this, Unit.a) == 0) {
                        }
                    }
                }
            }
            z5 = false;
        } while (!z5);
    }
}
