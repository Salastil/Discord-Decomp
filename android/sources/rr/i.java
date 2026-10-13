package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class i implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f17590d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ CoroutineScope f17591e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ k f17592i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f17593v;

    public i(Ref.ObjectRef objectRef, CoroutineScope coroutineScope, k kVar, FlowCollector flowCollector) {
        this.f17590d = objectRef;
        this.f17591e = coroutineScope;
        this.f17592i = kVar;
        this.f17593v = flowCollector;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /* JADX WARN: Type inference failed for: r12v7, types: [T, nr.l1] */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        h hVar;
        int i5;
        i iVar;
        if (continuation instanceof h) {
            hVar = (h) continuation;
            int i6 = hVar.f17589x;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                hVar.f17589x = i6 - Integer.MIN_VALUE;
                Object obj2 = hVar.f17587v;
                ko.a aVar = ko.a.f13464d;
                i5 = hVar.f17589x;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    Job job = (Job) this.f17590d.element;
                    if (job != null) {
                        job.f(new l("Child of the scoped flow was cancelled"));
                        hVar.f17584d = this;
                        hVar.f17585e = obj;
                        hVar.f17586i = job;
                        hVar.f17589x = 1;
                        if (job.X(hVar) == aVar) {
                            return aVar;
                        }
                    }
                    iVar = this;
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    obj = hVar.f17585e;
                    iVar = hVar.f17584d;
                    ki.b.R(obj2);
                }
                Object obj3 = obj;
                Ref.ObjectRef objectRef = iVar.f17590d;
                CoroutineScope coroutineScope = iVar.f17591e;
                nr.w wVar = nr.w.f15668d;
                objectRef.element = nr.x.t(coroutineScope, null, new a4.k(iVar.f17592i, iVar.f17593v, obj3, null, 2), 1);
                return Unit.a;
            }
        }
        hVar = new h(this, continuation);
        Object obj22 = hVar.f17587v;
        ko.a aVar2 = ko.a.f13464d;
        i5 = hVar.f17589x;
        if (i5 != 0) {
        }
        Object obj32 = obj;
        Ref.ObjectRef objectRef2 = iVar.f17590d;
        CoroutineScope coroutineScope2 = iVar.f17591e;
        nr.w wVar2 = nr.w.f15668d;
        objectRef2.element = nr.x.t(coroutineScope2, null, new a4.k(iVar.f17592i, iVar.f17593v, obj32, null, 2), 1);
        return Unit.a;
    }
}
