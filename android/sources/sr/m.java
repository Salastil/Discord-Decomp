package sr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class m {

    /* renamed from: d, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18116d = AtomicReferenceFieldUpdater.newUpdater(m.class, Object.class, "_next$volatile");

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18117e = AtomicReferenceFieldUpdater.newUpdater(m.class, Object.class, "_prev$volatile");

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f18118i = AtomicReferenceFieldUpdater.newUpdater(m.class, Object.class, "_removedRef$volatile");
    private volatile /* synthetic */ Object _next$volatile = this;
    private volatile /* synthetic */ Object _prev$volatile = this;
    private volatile /* synthetic */ Object _removedRef$volatile;

    public final boolean d(m mVar, int i5) {
        while (true) {
            m e9 = e();
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f18117e;
            if (e9 == null) {
                Object obj = atomicReferenceFieldUpdater.get(this);
                while (true) {
                    e9 = (m) obj;
                    if (!e9.h()) {
                        break;
                    }
                    obj = atomicReferenceFieldUpdater.get(e9);
                }
            }
            if (e9 instanceof j) {
                return (((j) e9).f18115v & i5) == 0 && e9.d(mVar, i5);
            }
            atomicReferenceFieldUpdater.set(mVar, e9);
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = f18116d;
            atomicReferenceFieldUpdater2.set(mVar, this);
            while (!atomicReferenceFieldUpdater2.compareAndSet(e9, this, mVar)) {
                if (atomicReferenceFieldUpdater2.get(e9) != this) {
                    break;
                }
            }
            mVar.f(this);
            return true;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0031, code lost:
    
        r6 = ((sr.r) r6).a;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0039, code lost:
    
        if (r5.compareAndSet(r4, r3, r6) == false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0041, code lost:
    
        if (r5.get(r4) == r3) goto L43;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final m e() {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f18117e;
            m mVar = (m) atomicReferenceFieldUpdater.get(this);
            m mVar2 = mVar;
            while (true) {
                m mVar3 = null;
                while (true) {
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = f18116d;
                    Object obj = atomicReferenceFieldUpdater2.get(mVar2);
                    if (obj == this) {
                        if (mVar == mVar2) {
                            return mVar2;
                        }
                        while (!atomicReferenceFieldUpdater.compareAndSet(this, mVar, mVar2)) {
                            if (atomicReferenceFieldUpdater.get(this) != mVar) {
                                break;
                            }
                        }
                        return mVar2;
                    }
                    if (h()) {
                        return null;
                    }
                    if (!(obj instanceof r)) {
                        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
                        mVar3 = mVar2;
                        mVar2 = (m) obj;
                    } else {
                        if (mVar3 != null) {
                            break;
                        }
                        mVar2 = (m) atomicReferenceFieldUpdater.get(mVar2);
                    }
                }
                mVar2 = mVar3;
            }
        }
    }

    public final void f(m mVar) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f18117e;
            m mVar2 = (m) atomicReferenceFieldUpdater.get(mVar);
            if (f18116d.get(this) != mVar) {
                return;
            }
            while (!atomicReferenceFieldUpdater.compareAndSet(mVar, mVar2, this)) {
                if (atomicReferenceFieldUpdater.get(mVar) != mVar2) {
                    break;
                }
            }
            if (h()) {
                mVar.e();
                return;
            }
            return;
        }
    }

    public final m g() {
        m mVar;
        Object obj = f18116d.get(this);
        r rVar = obj instanceof r ? (r) obj : null;
        if (rVar != null && (mVar = rVar.a) != null) {
            return mVar;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
        return (m) obj;
    }

    public boolean h() {
        return f18116d.get(this) instanceof r;
    }

    public String toString() {
        return new l(this, nr.x.class, "classSimpleName", "getClassSimpleName(Ljava/lang/Object;)Ljava/lang/String;", 1) + '@' + nr.x.o(this);
    }
}
