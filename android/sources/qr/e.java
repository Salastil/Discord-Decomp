package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class e implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16966d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f16967e;

    public e(f fVar, Ref.ObjectRef objectRef, FlowCollector flowCollector) {
        this.f16966d = objectRef;
        this.f16967e = flowCollector;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        d dVar;
        int i5;
        if (continuation instanceof d) {
            dVar = (d) continuation;
            int i6 = dVar.f16965i;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                dVar.f16965i = i6 - Integer.MIN_VALUE;
                Object obj2 = dVar.f16963d;
                ko.a aVar = ko.a.f13464d;
                i5 = dVar.f16965i;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    Ref.ObjectRef objectRef = this.f16966d;
                    T t5 = objectRef.element;
                    if (t5 != rr.c.f17577b && Intrinsics.areEqual(t5, obj)) {
                        return Unit.a;
                    }
                    objectRef.element = obj;
                    dVar.f16965i = 1;
                    if (this.f16967e.emit(obj, dVar) == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj2);
                }
                return Unit.a;
            }
        }
        dVar = new d(this, continuation);
        Object obj22 = dVar.f16963d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = dVar.f16965i;
        if (i5 != 0) {
        }
        return Unit.a;
    }
}
