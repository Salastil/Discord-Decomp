package sr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18101d = AtomicReferenceFieldUpdater.newUpdater(c.class, Object.class, "_next$volatile");

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18102e = AtomicReferenceFieldUpdater.newUpdater(c.class, Object.class, "_prev$volatile");
    private volatile /* synthetic */ Object _next$volatile;
    private volatile /* synthetic */ Object _prev$volatile;

    public c(u uVar) {
        this._prev$volatile = uVar;
    }

    public final void a() {
        f18102e.set(this, null);
    }

    public final c c() {
        Object obj = f18101d.get(this);
        if (obj == b.a) {
            return null;
        }
        return (c) obj;
    }

    public abstract boolean d();

    public final void e() {
        c c6;
        if (c() == null) {
            return;
        }
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f18102e;
            c cVar = (c) atomicReferenceFieldUpdater.get(this);
            while (cVar != null && cVar.d()) {
                cVar = (c) atomicReferenceFieldUpdater.get(cVar);
            }
            c c8 = c();
            Intrinsics.checkNotNull(c8);
            while (c8.d() && (c6 = c8.c()) != null) {
                c8 = c6;
            }
            while (true) {
                Object obj = atomicReferenceFieldUpdater.get(c8);
                c cVar2 = ((c) obj) == null ? null : cVar;
                while (!atomicReferenceFieldUpdater.compareAndSet(c8, obj, cVar2)) {
                    if (atomicReferenceFieldUpdater.get(c8) != obj) {
                        break;
                    }
                }
            }
            if (cVar != null) {
                f18101d.set(cVar, c8);
            }
            if (!c8.d() || c8.c() == null) {
                if (cVar == null || !cVar.d()) {
                    return;
                }
            }
        }
    }
}
