package vr;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CancellableContinuation;
import nr.j;
import nr.v1;
import sr.u;

/* loaded from: classes3.dex */
public final class e implements nr.i, f, v1 {

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f19556x = AtomicReferenceFieldUpdater.newUpdater(e.class, Object.class, "state$volatile");

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f19557d;

    /* renamed from: i, reason: collision with root package name */
    public Object f19559i;
    private volatile /* synthetic */ Object state$volatile = h.a;

    /* renamed from: e, reason: collision with root package name */
    public ArrayList f19558e = new ArrayList(2);

    /* renamed from: v, reason: collision with root package name */
    public int f19560v = -1;

    /* renamed from: w, reason: collision with root package name */
    public Object f19561w = h.f19565d;

    public e(CoroutineContext coroutineContext) {
        this.f19557d = coroutineContext;
    }

    @Override // nr.v1
    public final void a(u uVar, int i5) {
        this.f19559i = uVar;
        this.f19560v = i5;
    }

    @Override // nr.i
    public final void b(Throwable th2) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f19556x;
            Object obj = atomicReferenceFieldUpdater.get(this);
            if (obj == h.f19563b) {
                return;
            }
            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj, h.f19564c)) {
                if (atomicReferenceFieldUpdater.get(this) != obj) {
                    break;
                }
            }
            ArrayList arrayList = this.f19558e;
            if (arrayList == null) {
                return;
            }
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((c) it.next()).a();
            }
            this.f19561w = h.f19565d;
            this.f19558e = null;
            return;
        }
    }

    public final Object c(lo.c cVar) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f19556x;
        Object obj = atomicReferenceFieldUpdater.get(this);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.selects.SelectImplementation.ClauseData<R of kotlinx.coroutines.selects.SelectImplementation>");
        c cVar2 = (c) obj;
        Object obj2 = this.f19561w;
        ArrayList arrayList = this.f19558e;
        if (arrayList != null) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                c cVar3 = (c) it.next();
                if (cVar3 != cVar2) {
                    cVar3.a();
                }
            }
            atomicReferenceFieldUpdater.set(this, h.f19563b);
            this.f19561w = h.f19565d;
            this.f19558e = null;
        }
        Object invoke = cVar2.f19545c.invoke(cVar2.a, cVar2.f19546d, obj2);
        Continuation continuation = cVar2.f19547e;
        if (cVar2.f19546d == h.f19566e) {
            Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlin.coroutines.SuspendFunction0<R of kotlinx.coroutines.selects.SelectImplementation>");
            return ((Function1) continuation).invoke(cVar);
        }
        Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlin.coroutines.SuspendFunction1<kotlin.Any?, R of kotlinx.coroutines.selects.SelectImplementation>");
        return ((Function2) continuation).invoke(invoke, cVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x00d4 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x00d5 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object d(lo.c cVar) {
        d frame;
        int i5;
        e eVar;
        if (cVar instanceof d) {
            frame = (d) cVar;
            int i6 = frame.f19555v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                frame.f19555v = i6 - Integer.MIN_VALUE;
                Object obj = frame.f19553e;
                ko.a aVar = ko.a.f13464d;
                i5 = frame.f19555v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    frame.f19552d = this;
                    frame.f19555v = 1;
                    j jVar = new j(1, ko.f.b(frame));
                    jVar.t();
                    loop0: while (true) {
                        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f19556x;
                        Object obj2 = atomicReferenceFieldUpdater.get(this);
                        a5.h hVar = h.a;
                        if (obj2 == hVar) {
                            while (!atomicReferenceFieldUpdater.compareAndSet(this, obj2, jVar)) {
                                if (atomicReferenceFieldUpdater.get(this) != obj2) {
                                    break;
                                }
                            }
                            jVar.w(this);
                            break loop0;
                        }
                        if (obj2 instanceof List) {
                            while (true) {
                                if (atomicReferenceFieldUpdater.compareAndSet(this, obj2, hVar)) {
                                    Iterator it = ((Iterable) obj2).iterator();
                                    while (it.hasNext()) {
                                        c e9 = e(it.next());
                                        Intrinsics.checkNotNull(e9);
                                        e9.f19549g = null;
                                        e9.f19550h = -1;
                                        f(e9, true);
                                    }
                                } else if (atomicReferenceFieldUpdater.get(this) != obj2) {
                                    break;
                                }
                            }
                        } else {
                            if (!(obj2 instanceof c)) {
                                throw new IllegalStateException(("unexpected state: " + obj2).toString());
                            }
                            Unit unit = Unit.a;
                            c cVar2 = (c) obj2;
                            Object obj3 = this.f19561w;
                            Function3 function3 = cVar2.f19548f;
                            jVar.j(unit, function3 != null ? (Function3) function3.invoke(this, cVar2.f19546d, obj3) : null);
                        }
                    }
                    Object r5 = jVar.r();
                    ko.a aVar2 = ko.a.f13464d;
                    if (r5 == aVar2) {
                        Intrinsics.checkNotNullParameter(frame, "frame");
                    }
                    if (r5 != aVar2) {
                        r5 = Unit.a;
                    }
                    if (r5 != aVar) {
                        eVar = this;
                    }
                }
                if (i5 != 1) {
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return obj;
                }
                eVar = frame.f19552d;
                ki.b.R(obj);
                frame.f19552d = null;
                frame.f19555v = 2;
                Object c6 = eVar.c(frame);
                return c6 != aVar ? aVar : c6;
            }
        }
        frame = new d(this, cVar);
        Object obj4 = frame.f19553e;
        ko.a aVar3 = ko.a.f13464d;
        i5 = frame.f19555v;
        if (i5 != 0) {
        }
        frame.f19552d = null;
        frame.f19555v = 2;
        Object c62 = eVar.c(frame);
        if (c62 != aVar3) {
        }
    }

    public final c e(Object obj) {
        ArrayList arrayList = this.f19558e;
        Object obj2 = null;
        if (arrayList == null) {
            return null;
        }
        Iterator it = arrayList.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            if (((c) next).a == obj) {
                obj2 = next;
                break;
            }
        }
        c cVar = (c) obj2;
        if (cVar != null) {
            return cVar;
        }
        throw new IllegalStateException(("Clause with object " + obj + " is not found").toString());
    }

    public final void f(c cVar, boolean z5) {
        Object obj = cVar.a;
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f19556x;
        if (atomicReferenceFieldUpdater.get(this) instanceof c) {
            return;
        }
        if (!z5) {
            ArrayList arrayList = this.f19558e;
            Intrinsics.checkNotNull(arrayList);
            if (arrayList == null || !arrayList.isEmpty()) {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    if (((c) it.next()).a == obj) {
                        throw new IllegalStateException(("Cannot use select clauses on the same object: " + obj).toString());
                    }
                }
            }
        }
        cVar.f19544b.invoke(obj, this, cVar.f19546d);
        if (this.f19561w != h.f19565d) {
            atomicReferenceFieldUpdater.set(this, cVar);
            return;
        }
        if (!z5) {
            ArrayList arrayList2 = this.f19558e;
            Intrinsics.checkNotNull(arrayList2);
            arrayList2.add(cVar);
        }
        cVar.f19549g = this.f19559i;
        cVar.f19550h = this.f19560v;
        this.f19559i = null;
        this.f19560v = -1;
    }

    public final int g(Object obj, Object obj2) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f19556x;
            Object obj3 = atomicReferenceFieldUpdater.get(this);
            if (!(obj3 instanceof CancellableContinuation)) {
                if (Intrinsics.areEqual(obj3, h.f19563b) || (obj3 instanceof c)) {
                    return 3;
                }
                if (Intrinsics.areEqual(obj3, h.f19564c)) {
                    return 2;
                }
                if (Intrinsics.areEqual(obj3, h.a)) {
                    List c6 = b0.c(obj);
                    while (!atomicReferenceFieldUpdater.compareAndSet(this, obj3, c6)) {
                        if (atomicReferenceFieldUpdater.get(this) != obj3) {
                            break;
                        }
                    }
                    return 1;
                }
                if (!(obj3 instanceof List)) {
                    throw new IllegalStateException(("Unexpected state: " + obj3).toString());
                }
                ArrayList W = CollectionsKt.W((Collection) obj3, obj);
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj3, W)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj3) {
                        break;
                    }
                }
                return 1;
            }
            c e9 = e(obj);
            if (e9 != null) {
                Function3 function3 = e9.f19548f;
                Function3 function32 = function3 != null ? (Function3) function3.invoke(this, e9.f19546d, obj2) : null;
                while (!atomicReferenceFieldUpdater.compareAndSet(this, obj3, e9)) {
                    if (atomicReferenceFieldUpdater.get(this) != obj3) {
                        break;
                    }
                }
                CancellableContinuation cancellableContinuation = (CancellableContinuation) obj3;
                this.f19561w = obj2;
                a5.h h6 = cancellableContinuation.h(Unit.a, function32);
                if (h6 == null) {
                    this.f19561w = h.f19565d;
                    return 2;
                }
                cancellableContinuation.s(h6);
                return 0;
            }
            continue;
        }
    }
}
