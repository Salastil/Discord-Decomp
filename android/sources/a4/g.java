package a4;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes.dex */
public final class g extends lo.h implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public int f107d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ FlowCollector f108e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object[] f109i;

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        g gVar = new g(3, (Continuation) obj3);
        gVar.f108e = (FlowCollector) obj;
        gVar.f109i = (Object[]) obj2;
        return gVar.invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        c cVar;
        c cVar2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f107d;
        if (i5 == 0) {
            ki.b.R(obj);
            FlowCollector flowCollector = this.f108e;
            c[] cVarArr = (c[]) this.f109i;
            int length = cVarArr.length;
            int i6 = 0;
            while (true) {
                cVar = a.a;
                if (i6 >= length) {
                    cVar2 = null;
                    break;
                }
                cVar2 = cVarArr[i6];
                if (!Intrinsics.areEqual(cVar2, cVar)) {
                    break;
                }
                i6++;
            }
            if (cVar2 != null) {
                cVar = cVar2;
            }
            this.f107d = 1;
            if (flowCollector.emit(cVar, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }
}
