package nr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlinx.coroutines.CompletableJob;

/* loaded from: classes3.dex */
public class x0 extends e1 implements CompletableJob {

    /* renamed from: i, reason: collision with root package name */
    public final boolean f15684i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x0() {
        super(true);
        e1 i5;
        boolean z5 = true;
        O(null);
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = e1.f15615e;
        m mVar = (m) atomicReferenceFieldUpdater.get(this);
        n nVar = mVar instanceof n ? (n) mVar : null;
        if (nVar != null && (i5 = nVar.i()) != null) {
            while (!i5.J()) {
                m mVar2 = (m) atomicReferenceFieldUpdater.get(i5);
                n nVar2 = mVar2 instanceof n ? (n) mVar2 : null;
                if (nVar2 != null && (i5 = nVar2.i()) != null) {
                }
            }
            this.f15684i = z5;
        }
        z5 = false;
        this.f15684i = z5;
    }

    @Override // nr.e1
    public final boolean J() {
        return this.f15684i;
    }

    @Override // nr.e1
    public final boolean K() {
        return true;
    }
}
