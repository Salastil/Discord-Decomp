package pr;

import java.util.concurrent.atomic.AtomicReferenceArray;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import nr.v1;

/* loaded from: classes3.dex */
public final class o extends sr.u {

    /* renamed from: w, reason: collision with root package name */
    public final h f16508w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ AtomicReferenceArray f16509x;

    public o(long j, o oVar, h hVar, int i5) {
        super(j, oVar, i5);
        this.f16508w = hVar;
        this.f16509x = new AtomicReferenceArray(j.f16490b * 2);
    }

    @Override // sr.u
    public final int g() {
        return j.f16490b;
    }

    /* JADX WARN: Code restructure failed: missing block: B:51:0x0059, code lost:
    
        n(r5, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x005c, code lost:
    
        if (r0 == false) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x005e, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNull(r2);
        r2.getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0064, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:?, code lost:
    
        return;
     */
    @Override // sr.u
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h(int i5, CoroutineContext coroutineContext) {
        int i6 = j.f16490b;
        boolean z5 = i5 >= i6;
        if (z5) {
            i5 -= i6;
        }
        this.f16509x.get(i5 * 2);
        while (true) {
            Object l6 = l(i5);
            boolean z6 = l6 instanceof v1;
            h hVar = this.f16508w;
            if (z6 || (l6 instanceof w)) {
                if (k(i5, l6, z5 ? j.j : j.k)) {
                    n(i5, null);
                    m(i5, !z5);
                    if (z5) {
                        Intrinsics.checkNotNull(hVar);
                        hVar.getClass();
                        return;
                    }
                    return;
                }
            } else {
                if (l6 == j.j || l6 == j.k) {
                    break;
                }
                if (l6 != j.f16495g && l6 != j.f16494f) {
                    if (l6 == j.f16497i || l6 == j.f16492d || l6 == j.f16498l) {
                        return;
                    }
                    throw new IllegalStateException(("unexpected state: " + l6).toString());
                }
            }
        }
    }

    public final boolean k(int i5, Object obj, Object obj2) {
        AtomicReferenceArray atomicReferenceArray;
        int i6 = (i5 * 2) + 1;
        do {
            atomicReferenceArray = this.f16509x;
            if (atomicReferenceArray.compareAndSet(i6, obj, obj2)) {
                return true;
            }
        } while (atomicReferenceArray.get(i6) == obj);
        return false;
    }

    public final Object l(int i5) {
        return this.f16509x.get((i5 * 2) + 1);
    }

    public final void m(int i5, boolean z5) {
        if (z5) {
            h hVar = this.f16508w;
            Intrinsics.checkNotNull(hVar);
            hVar.L((this.f18127i * j.f16490b) + i5);
        }
        i();
    }

    public final void n(int i5, Object obj) {
        this.f16509x.set(i5 * 2, obj);
    }

    public final void o(int i5, Object obj) {
        this.f16509x.set((i5 * 2) + 1, obj);
    }
}
