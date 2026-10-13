package rr;

import java.util.ArrayList;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public abstract class e implements s {

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f17580d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17581e;

    /* renamed from: i, reason: collision with root package name */
    public final pr.a f17582i;

    public e(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        this.f17580d = coroutineContext;
        this.f17581e = i5;
        this.f17582i = aVar;
    }

    @Override // rr.s
    public final Flow b(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        CoroutineContext coroutineContext2 = this.f17580d;
        CoroutineContext r5 = coroutineContext.r(coroutineContext2);
        pr.a aVar2 = pr.a.f16467d;
        pr.a aVar3 = this.f17582i;
        int i6 = this.f17581e;
        if (aVar == aVar2) {
            if (i6 != -3) {
                if (i5 != -3) {
                    if (i6 != -2) {
                        if (i5 != -2) {
                            i5 += i6;
                            if (i5 < 0) {
                                i5 = Integer.MAX_VALUE;
                            }
                        }
                    }
                }
                i5 = i6;
            }
            aVar = aVar3;
        }
        return (Intrinsics.areEqual(r5, coroutineContext2) && i5 == i6 && aVar == aVar3) ? this : f(r5, i5, aVar);
    }

    public abstract Object c(ProducerScope producerScope, Continuation continuation);

    @Override // kotlinx.coroutines.flow.Flow
    public Object collect(FlowCollector flowCollector, Continuation continuation) {
        Object i5 = nr.x.i(new a4.k(flowCollector, this, null, 1), continuation);
        return i5 == ko.a.f13464d ? i5 : Unit.a;
    }

    public abstract e f(CoroutineContext coroutineContext, int i5, pr.a aVar);

    public String toString() {
        ArrayList arrayList = new ArrayList(4);
        kotlin.coroutines.g gVar = kotlin.coroutines.g.f13538d;
        CoroutineContext coroutineContext = this.f17580d;
        if (coroutineContext != gVar) {
            arrayList.add("context=" + coroutineContext);
        }
        int i5 = this.f17581e;
        if (i5 != -3) {
            arrayList.add("capacity=" + i5);
        }
        pr.a aVar = pr.a.f16467d;
        pr.a aVar2 = this.f17582i;
        if (aVar2 != aVar) {
            arrayList.add("onBufferOverflow=" + aVar2);
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(getClass().getSimpleName());
        sb2.append('[');
        return s4.h.h(sb2, CollectionsKt.O(arrayList, ", ", null, null, null, 62), ']');
    }
}
