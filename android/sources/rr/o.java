package rr;

import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;

/* loaded from: classes3.dex */
public final class o extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f17604d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Flow[] f17605e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f17606i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ AtomicInteger f17607v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ pr.h f17608w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(Flow[] flowArr, int i5, AtomicInteger atomicInteger, pr.h hVar, Continuation continuation) {
        super(2, continuation);
        this.f17605e = flowArr;
        this.f17606i = i5;
        this.f17607v = atomicInteger;
        this.f17608w = hVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new o(this.f17605e, this.f17606i, this.f17607v, this.f17608w, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((o) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f17604d;
        AtomicInteger atomicInteger = this.f17607v;
        pr.h hVar = this.f17608w;
        try {
            if (i5 == 0) {
                ki.b.R(obj);
                Flow[] flowArr = this.f17605e;
                int i6 = this.f17606i;
                Flow flow = flowArr[i6];
                n nVar = new n(hVar, i6);
                this.f17604d = 1;
                if (flow.collect(nVar, this) == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
            }
            if (atomicInteger.decrementAndGet() == 0) {
                hVar.k(null);
            }
            return Unit.a;
        } finally {
            if (atomicInteger.decrementAndGet() == 0) {
                hVar.k(null);
            }
        }
    }
}
