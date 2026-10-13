package nr;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c1 implements t0 {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f15601e = AtomicIntegerFieldUpdater.newUpdater(c1.class, "_isCompleting$volatile");

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f15602i = AtomicReferenceFieldUpdater.newUpdater(c1.class, Object.class, "_rootCause$volatile");

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f15603v = AtomicReferenceFieldUpdater.newUpdater(c1.class, Object.class, "_exceptionsHolder$volatile");
    private volatile /* synthetic */ Object _exceptionsHolder$volatile;
    private volatile /* synthetic */ int _isCompleting$volatile = 0;
    private volatile /* synthetic */ Object _rootCause$volatile;

    /* renamed from: d, reason: collision with root package name */
    public final g1 f15604d;

    public c1(g1 g1Var, Throwable th2) {
        this.f15604d = g1Var;
        this._rootCause$volatile = th2;
    }

    public final void a(Throwable th2) {
        Throwable d6 = d();
        if (d6 == null) {
            f15602i.set(this, th2);
            return;
        }
        if (th2 == d6) {
            return;
        }
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15603v;
        Object obj = atomicReferenceFieldUpdater.get(this);
        if (obj == null) {
            atomicReferenceFieldUpdater.set(this, th2);
            return;
        }
        if (!(obj instanceof Throwable)) {
            if (obj instanceof ArrayList) {
                ((ArrayList) obj).add(th2);
                return;
            } else {
                throw new IllegalStateException(("State is " + obj).toString());
            }
        }
        if (th2 == obj) {
            return;
        }
        ArrayList arrayList = new ArrayList(4);
        arrayList.add(obj);
        arrayList.add(th2);
        atomicReferenceFieldUpdater.set(this, arrayList);
    }

    @Override // nr.t0
    public final g1 b() {
        return this.f15604d;
    }

    @Override // nr.t0
    public final boolean c() {
        return d() == null;
    }

    public final Throwable d() {
        return (Throwable) f15602i.get(this);
    }

    public final boolean e() {
        return d() != null;
    }

    public final ArrayList f(Throwable th2) {
        ArrayList arrayList;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f15603v;
        Object obj = atomicReferenceFieldUpdater.get(this);
        if (obj == null) {
            arrayList = new ArrayList(4);
        } else if (obj instanceof Throwable) {
            ArrayList arrayList2 = new ArrayList(4);
            arrayList2.add(obj);
            arrayList = arrayList2;
        } else {
            if (!(obj instanceof ArrayList)) {
                throw new IllegalStateException(("State is " + obj).toString());
            }
            arrayList = (ArrayList) obj;
        }
        Throwable d6 = d();
        if (d6 != null) {
            arrayList.add(0, d6);
        }
        if (th2 != null && !Intrinsics.areEqual(th2, d6)) {
            arrayList.add(th2);
        }
        atomicReferenceFieldUpdater.set(this, x.f15682h);
        return arrayList;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Finishing[cancelling=");
        sb2.append(e());
        sb2.append(", completing=");
        sb2.append(f15601e.get(this) == 1);
        sb2.append(", rootCause=");
        sb2.append(d());
        sb2.append(", exceptions=");
        sb2.append(f15603v.get(this));
        sb2.append(", list=");
        sb2.append(this.f15604d);
        sb2.append(']');
        return sb2.toString();
    }
}
