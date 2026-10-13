package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class p extends lo.h implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public int f17019d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ FlowCollector f17020e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f17021i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ lo.h f17022v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public p(Function2 function2, Continuation continuation) {
        super(3, continuation);
        this.f17022v = (lo.h) function2;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        p pVar = new p(this.f17022v, (Continuation) obj3);
        pVar.f17020e = (FlowCollector) obj;
        pVar.f17021i = obj2;
        return pVar.invokeSuspend(Unit.a);
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x003b, code lost:
    
        if (r1.emit(r5, r4) == r0) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x003d, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x002f, code lost:
    
        if (r5 == r0) goto L15;
     */
    /* JADX WARN: Type inference failed for: r3v1, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        FlowCollector flowCollector;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f17019d;
        if (i5 == 0) {
            ki.b.R(obj);
            flowCollector = this.f17020e;
            Object obj2 = this.f17021i;
            this.f17020e = flowCollector;
            this.f17019d = 1;
            obj = this.f17022v.invoke(obj2, this);
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return Unit.a;
            }
            flowCollector = this.f17020e;
            ki.b.R(obj);
        }
        this.f17020e = null;
        this.f17019d = 2;
    }
}
