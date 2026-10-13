package qr;

import java.util.NoSuchElementException;
import java.util.concurrent.CancellationException;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public abstract class y {
    public static final a5.h a = new a5.h("NO_VALUE");

    /* renamed from: b, reason: collision with root package name */
    public static final a5.h f17047b = new a5.h("NONE");

    /* renamed from: c, reason: collision with root package name */
    public static final a5.h f17048c = new a5.h("PENDING");

    public static final x a(int i5, int i6, pr.a aVar) {
        if (i5 < 0) {
            throw new IllegalArgumentException(k0.d.i(i5, "replay cannot be negative, but was ").toString());
        }
        if (i6 < 0) {
            throw new IllegalArgumentException(k0.d.i(i6, "extraBufferCapacity cannot be negative, but was ").toString());
        }
        if (i5 <= 0 && i6 <= 0 && aVar != pr.a.f16467d) {
            throw new IllegalArgumentException(("replay or extraBufferCapacity must be positive with non-default onBufferOverflow strategy " + aVar).toString());
        }
        int i10 = i6 + i5;
        if (i10 < 0) {
            i10 = Integer.MAX_VALUE;
        }
        return new x(i5, i10, aVar);
    }

    public static final c0 b(Object obj) {
        if (obj == null) {
            obj = rr.c.f17577b;
        }
        return new c0(obj);
    }

    public static final Object c(Object[] objArr, long j) {
        return objArr[((int) j) & (objArr.length - 1)];
    }

    public static final void d(Object[] objArr, long j, Object obj) {
        objArr[((int) j) & (objArr.length - 1)] = obj;
    }

    public static final Flow e(Flow flow, int i5, pr.a aVar) {
        if (i5 < 0 && i5 != -2 && i5 != -1) {
            throw new IllegalArgumentException(k0.d.i(i5, "Buffer size should be non-negative, BUFFERED, or CONFLATED, but was ").toString());
        }
        if (i5 == -1 && aVar != pr.a.f16467d) {
            throw new IllegalArgumentException("CONFLATED capacity cannot be used with non-default onBufferOverflow");
        }
        if (i5 == -1) {
            aVar = pr.a.f16468e;
            i5 = 0;
        }
        int i6 = i5;
        pr.a aVar2 = aVar;
        return flow instanceof rr.s ? rr.c.a((rr.s) flow, null, i6, aVar2, 1) : new rr.g(flow, null, i6, aVar2, 2);
    }

    public static final Object f(Flow flow, Function2 function2, lo.h hVar) {
        int i5 = q.a;
        p pVar = new p(function2, null);
        kotlin.coroutines.g gVar = kotlin.coroutines.g.f13538d;
        pr.a aVar = pr.a.f16467d;
        Object collect = e(new rr.k(pVar, flow, gVar, -2, aVar), 0, aVar).collect(rr.u.f17620d, hVar);
        ko.a aVar2 = ko.a.f13464d;
        if (collect != aVar2) {
            collect = Unit.a;
        }
        return collect == aVar2 ? collect : Unit.a;
    }

    public static final Flow g(Flow flow, long j) {
        if (j < 0) {
            throw new IllegalArgumentException("Debounce timeout should not be negative");
        }
        if (j == 0) {
            return flow;
        }
        return new a4.h(2, new k(new c7.a(j, 1), flow, null));
    }

    public static final Flow h(Flow flow) {
        return flow instanceof a0 ? flow : flow instanceof f ? flow : new f(flow);
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x0090, code lost:
    
        if (r2.emit(r11, r0) == r1) goto L36;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:16:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0076 A[Catch: all -> 0x0036, TryCatch #0 {all -> 0x0036, blocks: (B:12:0x002f, B:14:0x005a, B:20:0x006e, B:22:0x0076, B:24:0x007c, B:26:0x0082, B:28:0x0093, B:29:0x009b, B:30:0x009c, B:31:0x00a3, B:39:0x0049, B:41:0x0050), top: B:7:0x0021 }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00a4  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0023  */
    /* JADX WARN: Type inference failed for: r9v4, types: [pr.u] */
    /* JADX WARN: Type inference failed for: r9v6, types: [pr.u] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:27:0x0090 -> B:13:0x0032). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object i(FlowCollector flowCollector, pr.s sVar, boolean z5, lo.c cVar) {
        g gVar;
        int i5;
        pr.c cVar2;
        pr.s sVar2;
        pr.c cVar3;
        FlowCollector flowCollector2;
        pr.s sVar3;
        try {
            if (cVar instanceof g) {
                gVar = (g) cVar;
                int i6 = gVar.f16981x;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    gVar.f16981x = i6 - Integer.MIN_VALUE;
                    Object obj = gVar.f16980w;
                    ko.a aVar = ko.a.f13464d;
                    i5 = gVar.f16981x;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        pr.h hVar = sVar.f16514v;
                        hVar.getClass();
                        cVar2 = new pr.c(hVar);
                        sVar3 = sVar;
                        gVar.f16976d = flowCollector;
                        gVar.f16977e = sVar3;
                        gVar.f16978i = cVar2;
                        gVar.f16979v = z5;
                        gVar.f16981x = 1;
                        obj = cVar2.b(gVar);
                        if (obj != aVar) {
                        }
                    } else if (i5 == 1) {
                        z5 = gVar.f16979v;
                        cVar3 = gVar.f16978i;
                        ?? r92 = gVar.f16977e;
                        flowCollector2 = gVar.f16976d;
                        ki.b.R(obj);
                        sVar2 = r92;
                        if (!((Boolean) obj).booleanValue()) {
                        }
                    } else {
                        if (i5 != 2) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        z5 = gVar.f16979v;
                        cVar3 = gVar.f16978i;
                        ?? r93 = gVar.f16977e;
                        flowCollector2 = gVar.f16976d;
                        ki.b.R(obj);
                        pr.s sVar4 = r93;
                        FlowCollector flowCollector3 = flowCollector2;
                        cVar2 = cVar3;
                        flowCollector = flowCollector3;
                        sVar3 = sVar4;
                        gVar.f16976d = flowCollector;
                        gVar.f16977e = sVar3;
                        gVar.f16978i = cVar2;
                        gVar.f16979v = z5;
                        gVar.f16981x = 1;
                        obj = cVar2.b(gVar);
                        if (obj != aVar) {
                            return aVar;
                        }
                        pr.c cVar4 = cVar2;
                        flowCollector2 = flowCollector;
                        cVar3 = cVar4;
                        sVar2 = sVar3;
                        if (!((Boolean) obj).booleanValue()) {
                            if (z5) {
                                sVar2.f(null);
                            }
                            return Unit.a;
                        }
                        Object obj2 = cVar3.f16471d;
                        a5.h hVar2 = pr.j.f16502p;
                        if (obj2 == hVar2) {
                            throw new IllegalStateException("`hasNext()` has not been invoked");
                        }
                        cVar3.f16471d = hVar2;
                        if (obj2 == pr.j.f16498l) {
                            Throwable u5 = cVar3.f16473i.u();
                            int i10 = sr.v.a;
                            throw u5;
                        }
                        gVar.f16976d = flowCollector2;
                        gVar.f16977e = sVar2;
                        gVar.f16978i = cVar3;
                        gVar.f16979v = z5;
                        gVar.f16981x = 2;
                        sVar4 = sVar2;
                    }
                }
            }
            if (i5 != 0) {
            }
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                if (z5) {
                    CancellationException cancellationException = th2 instanceof CancellationException ? th2 : null;
                    if (cancellationException == null) {
                        cancellationException = new CancellationException("Channel was consumed, consumer had failed");
                        cancellationException.initCause(th2);
                    }
                    sVar.f(cancellationException);
                }
                throw th3;
            }
        }
        gVar = new g(cVar);
        Object obj3 = gVar.f16980w;
        ko.a aVar2 = ko.a.f13464d;
        i5 = gVar.f16981x;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0069 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /* JADX WARN: Type inference failed for: r0v0, types: [T, a5.h] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object j(h1.b bVar, lo.c cVar) {
        r rVar;
        int i5;
        Ref.ObjectRef objectRef;
        rr.a e9;
        com.margelo.nitro.rive.c cVar2;
        T t5;
        ?? r02 = rr.c.f17577b;
        if (cVar instanceof r) {
            rVar = (r) cVar;
            int i6 = rVar.f17026v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                rVar.f17026v = i6 - Integer.MIN_VALUE;
                Object obj = rVar.f17025i;
                Object obj2 = ko.a.f13464d;
                i5 = rVar.f17026v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    Ref.ObjectRef objectRef2 = new Ref.ObjectRef();
                    objectRef2.element = r02;
                    com.margelo.nitro.rive.c cVar3 = new com.margelo.nitro.rive.c(2, objectRef2);
                    try {
                        rVar.f17023d = objectRef2;
                        rVar.f17024e = cVar3;
                        rVar.f17026v = 1;
                        if (bVar.collect(cVar3, rVar) == obj2) {
                            return obj2;
                        }
                        objectRef = objectRef2;
                    } catch (rr.a e10) {
                        objectRef = objectRef2;
                        e9 = e10;
                        cVar2 = cVar3;
                        if (e9.f17569d == cVar2) {
                        }
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    cVar2 = rVar.f17024e;
                    objectRef = rVar.f17023d;
                    try {
                        ki.b.R(obj);
                    } catch (rr.a e11) {
                        e9 = e11;
                        if (e9.f17569d == cVar2) {
                            throw e9;
                        }
                        nr.x.l(rVar.getContext());
                        t5 = objectRef.element;
                        if (t5 != r02) {
                        }
                    }
                }
                t5 = objectRef.element;
                if (t5 != r02) {
                    return t5;
                }
                throw new NoSuchElementException("Expected at least one element");
            }
        }
        rVar = new r(cVar);
        Object obj3 = rVar.f17025i;
        Object obj22 = ko.a.f13464d;
        i5 = rVar.f17026v;
        if (i5 != 0) {
        }
        t5 = objectRef.element;
        if (t5 != r02) {
        }
    }
}
