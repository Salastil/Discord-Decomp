package qr;

import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableStateFlow;

/* loaded from: classes3.dex */
public final class c0 extends rr.b implements MutableStateFlow, Flow, rr.s {

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ AtomicReferenceFieldUpdater f16961x = AtomicReferenceFieldUpdater.newUpdater(c0.class, Object.class, "_state$volatile");
    private volatile /* synthetic */ Object _state$volatile;

    /* renamed from: w, reason: collision with root package name */
    public int f16962w;

    public c0(Object obj) {
        this._state$volatile = obj;
    }

    @Override // kotlinx.coroutines.flow.MutableStateFlow
    public final boolean a(Object obj, Object obj2) {
        a5.h hVar = rr.c.f17577b;
        if (obj == null) {
            obj = hVar;
        }
        if (obj2 == null) {
            obj2 = hVar;
        }
        return i(obj, obj2);
    }

    @Override // rr.s
    public final Flow b(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return ((((i5 < 0 || i5 >= 2) && i5 != -2) || aVar != pr.a.f16468e) && !((i5 == 0 || i5 == -3) && aVar == pr.a.f16467d)) ? new rr.g(this, coroutineContext, i5, aVar) : this;
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x00a8, code lost:
    
        r6 = r6;
        r8 = r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x00ac, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r11, r12) != false) goto L54;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00e9, code lost:
    
        if (r12 == r1) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0078, code lost:
    
        if (((qr.f0) r11).b(r0) == r1) goto L59;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:16:0x009a A[Catch: all -> 0x0038, TryCatch #0 {all -> 0x0038, blocks: (B:13:0x0034, B:14:0x0092, B:16:0x009a, B:19:0x00a1, B:20:0x00a5, B:24:0x00a8, B:26:0x00c9, B:29:0x00d9, B:32:0x00ae, B:35:0x00b5, B:43:0x004d, B:45:0x0058, B:46:0x0083), top: B:7:0x0022 }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00d9 A[Catch: all -> 0x0038, TRY_LEAVE, TryCatch #0 {all -> 0x0038, blocks: (B:13:0x0034, B:14:0x0092, B:16:0x009a, B:19:0x00a1, B:20:0x00a5, B:24:0x00a8, B:26:0x00c9, B:29:0x00d9, B:32:0x00ae, B:35:0x00b5, B:43:0x004d, B:45:0x0058, B:46:0x0083), top: B:7:0x0022 }] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00b2  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x005c  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0024  */
    /* JADX WARN: Type inference failed for: r6v0 */
    /* JADX WARN: Type inference failed for: r6v1 */
    /* JADX WARN: Type inference failed for: r6v11 */
    /* JADX WARN: Type inference failed for: r6v12 */
    /* JADX WARN: Type inference failed for: r6v13 */
    /* JADX WARN: Type inference failed for: r6v14 */
    /* JADX WARN: Type inference failed for: r6v2, types: [rr.d] */
    /* JADX WARN: Type inference failed for: r6v3 */
    /* JADX WARN: Type inference failed for: r6v7, types: [qr.d0] */
    /* JADX WARN: Type inference failed for: r8v1, types: [rr.b] */
    /* JADX WARN: Type inference failed for: r8v10 */
    /* JADX WARN: Type inference failed for: r8v11 */
    /* JADX WARN: Type inference failed for: r8v12 */
    /* JADX WARN: Type inference failed for: r8v13 */
    /* JADX WARN: Type inference failed for: r8v2 */
    /* JADX WARN: Type inference failed for: r8v6, types: [java.lang.Object, qr.c0] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:28:0x00d8 -> B:14:0x0092). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:30:0x00e9 -> B:14:0x0092). Please report as a decompilation issue!!! */
    @Override // kotlinx.coroutines.flow.Flow
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        b0 b0Var;
        ko.a aVar;
        int i5;
        ?? r82;
        c0 c0Var;
        d0 d0Var;
        FlowCollector flowCollector2;
        Job job;
        Object obj;
        c0 c0Var2;
        d0 d0Var2;
        Object andSet;
        Object obj2;
        try {
            if (continuation instanceof b0) {
                b0Var = (b0) continuation;
                int i6 = b0Var.E;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    b0Var.E = i6 - Integer.MIN_VALUE;
                    Object obj3 = b0Var.f16957x;
                    aVar = ko.a.f13464d;
                    i5 = b0Var.E;
                    ?? r62 = 1;
                    if (i5 != 0) {
                        ki.b.R(obj3);
                        d0 d0Var3 = (d0) c();
                        try {
                            if (flowCollector instanceof f0) {
                                b0Var.f16952d = this;
                                b0Var.f16953e = flowCollector;
                                b0Var.f16954i = d0Var3;
                                b0Var.E = 1;
                            }
                            c0Var = this;
                            d0Var = d0Var3;
                        } catch (Throwable th2) {
                            th = th2;
                            r82 = this;
                            r62 = d0Var3;
                            r82.h(r62);
                            throw th;
                        }
                    } else if (i5 == 1) {
                        d0 d0Var4 = b0Var.f16954i;
                        flowCollector = b0Var.f16953e;
                        c0 c0Var3 = b0Var.f16952d;
                        ki.b.R(obj3);
                        d0Var = d0Var4;
                        c0Var = c0Var3;
                    } else if (i5 == 2) {
                        obj = b0Var.f16956w;
                        job = b0Var.f16955v;
                        d0 d0Var5 = b0Var.f16954i;
                        flowCollector2 = b0Var.f16953e;
                        c0 c0Var4 = b0Var.f16952d;
                        ki.b.R(obj3);
                        d0Var2 = d0Var5;
                        c0Var2 = c0Var4;
                        andSet = d0Var2.a.getAndSet(y.f17047b);
                        Intrinsics.checkNotNull(andSet);
                        if (andSet != y.f17048c) {
                        }
                        Object obj4 = f16961x.get(r82);
                        if (job != null) {
                        }
                        if (obj4 == rr.c.f17577b) {
                        }
                        b0Var.f16952d = r82;
                        b0Var.f16953e = flowCollector2;
                        b0Var.f16954i = r62;
                        b0Var.f16955v = job;
                        b0Var.f16956w = obj4;
                        b0Var.E = 2;
                        if (flowCollector2.emit(obj2, b0Var) == aVar) {
                        }
                    } else {
                        if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        obj = b0Var.f16956w;
                        job = b0Var.f16955v;
                        d0 d0Var6 = b0Var.f16954i;
                        flowCollector2 = b0Var.f16953e;
                        c0 c0Var5 = b0Var.f16952d;
                        ki.b.R(obj3);
                        r62 = d0Var6;
                        r82 = c0Var5;
                        Object obj42 = f16961x.get(r82);
                        if (job != null && !job.c()) {
                            throw job.x();
                        }
                        obj2 = obj42 == rr.c.f17577b ? null : obj42;
                        b0Var.f16952d = r82;
                        b0Var.f16953e = flowCollector2;
                        b0Var.f16954i = r62;
                        b0Var.f16955v = job;
                        b0Var.f16956w = obj42;
                        b0Var.E = 2;
                        if (flowCollector2.emit(obj2, b0Var) == aVar) {
                            return aVar;
                        }
                        obj = obj42;
                        d0Var2 = r62;
                        c0Var2 = r82;
                        andSet = d0Var2.a.getAndSet(y.f17047b);
                        Intrinsics.checkNotNull(andSet);
                        if (andSet != y.f17048c) {
                            r62 = d0Var2;
                            r82 = c0Var2;
                        } else {
                            b0Var.f16952d = c0Var2;
                            b0Var.f16953e = flowCollector2;
                            b0Var.f16954i = d0Var2;
                            b0Var.f16955v = job;
                            b0Var.f16956w = obj;
                            b0Var.E = 3;
                            Object c6 = d0Var2.c(b0Var);
                            r62 = d0Var2;
                            r82 = c0Var2;
                        }
                        Object obj422 = f16961x.get(r82);
                        if (job != null) {
                            throw job.x();
                        }
                        if (obj422 == rr.c.f17577b) {
                        }
                        b0Var.f16952d = r82;
                        b0Var.f16953e = flowCollector2;
                        b0Var.f16954i = r62;
                        b0Var.f16955v = job;
                        b0Var.f16956w = obj422;
                        b0Var.E = 2;
                        if (flowCollector2.emit(obj2, b0Var) == aVar) {
                        }
                    }
                    flowCollector2 = flowCollector;
                    job = (Job) b0Var.getContext().o(nr.t.f15661e);
                    obj = null;
                    r62 = d0Var;
                    r82 = c0Var;
                    Object obj4222 = f16961x.get(r82);
                    if (job != null) {
                    }
                    if (obj4222 == rr.c.f17577b) {
                    }
                    b0Var.f16952d = r82;
                    b0Var.f16953e = flowCollector2;
                    b0Var.f16954i = r62;
                    b0Var.f16955v = job;
                    b0Var.f16956w = obj4222;
                    b0Var.E = 2;
                    if (flowCollector2.emit(obj2, b0Var) == aVar) {
                    }
                }
            }
            if (i5 != 0) {
            }
            flowCollector2 = flowCollector;
            job = (Job) b0Var.getContext().o(nr.t.f15661e);
            obj = null;
            r62 = d0Var;
            r82 = c0Var;
            Object obj42222 = f16961x.get(r82);
            if (job != null) {
            }
            if (obj42222 == rr.c.f17577b) {
            }
            b0Var.f16952d = r82;
            b0Var.f16953e = flowCollector2;
            b0Var.f16954i = r62;
            b0Var.f16955v = job;
            b0Var.f16956w = obj42222;
            b0Var.E = 2;
            if (flowCollector2.emit(obj2, b0Var) == aVar) {
            }
        } catch (Throwable th3) {
            th = th3;
        }
        b0Var = new b0(this, continuation);
        Object obj32 = b0Var.f16957x;
        aVar = ko.a.f13464d;
        i5 = b0Var.E;
        ?? r622 = 1;
    }

    @Override // kotlinx.coroutines.flow.MutableSharedFlow
    public final boolean d(Object obj) {
        setValue(obj);
        return true;
    }

    @Override // kotlinx.coroutines.flow.MutableSharedFlow, kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation continuation) {
        setValue(obj);
        return Unit.a;
    }

    @Override // rr.b
    public final rr.d f() {
        return new d0();
    }

    @Override // rr.b
    public final rr.d[] g() {
        return new d0[2];
    }

    @Override // kotlinx.coroutines.flow.MutableStateFlow
    public final Object getValue() {
        a5.h hVar = rr.c.f17577b;
        Object obj = f16961x.get(this);
        if (obj == hVar) {
            return null;
        }
        return obj;
    }

    public final boolean i(Object obj, Object obj2) {
        int i5;
        rr.d[] dVarArr;
        a5.h hVar;
        synchronized (this) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = f16961x;
            Object obj3 = atomicReferenceFieldUpdater.get(this);
            if (obj != null && !Intrinsics.areEqual(obj3, obj)) {
                return false;
            }
            if (Intrinsics.areEqual(obj3, obj2)) {
                return true;
            }
            atomicReferenceFieldUpdater.set(this, obj2);
            int i6 = this.f16962w;
            if ((i6 & 1) != 0) {
                this.f16962w = i6 + 2;
                return true;
            }
            int i10 = i6 + 1;
            this.f16962w = i10;
            rr.d[] dVarArr2 = this.f17570d;
            Unit unit = Unit.a;
            while (true) {
                d0[] d0VarArr = (d0[]) dVarArr2;
                if (d0VarArr != null) {
                    for (d0 d0Var : d0VarArr) {
                        if (d0Var != null) {
                            AtomicReference atomicReference = d0Var.a;
                            while (true) {
                                Object obj4 = atomicReference.get();
                                if (obj4 != null && obj4 != (hVar = y.f17048c)) {
                                    a5.h hVar2 = y.f17047b;
                                    if (obj4 != hVar2) {
                                        while (!atomicReference.compareAndSet(obj4, hVar2)) {
                                            if (atomicReference.get() != obj4) {
                                                break;
                                            }
                                        }
                                        fo.q qVar = Result.f13476e;
                                        ((nr.j) obj4).resumeWith(Unit.a);
                                        break;
                                    }
                                    while (!atomicReference.compareAndSet(obj4, hVar)) {
                                        if (atomicReference.get() != obj4) {
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                synchronized (this) {
                    i5 = this.f16962w;
                    if (i5 == i10) {
                        this.f16962w = i10 + 1;
                        return true;
                    }
                    dVarArr = this.f17570d;
                    Unit unit2 = Unit.a;
                }
                dVarArr2 = dVarArr;
                i10 = i5;
            }
        }
    }

    @Override // kotlinx.coroutines.flow.MutableStateFlow
    public final void setValue(Object obj) {
        if (obj == null) {
            obj = rr.c.f17577b;
        }
        i(null, obj);
    }
}
