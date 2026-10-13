package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class m implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Ref.IntRef f17008d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f17009e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f17010i;

    public m(Ref.IntRef intRef, int i5, FlowCollector flowCollector) {
        this.f17008d = intRef;
        this.f17009e = i5;
        this.f17010i = flowCollector;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        l lVar;
        int i5;
        if (continuation instanceof l) {
            lVar = (l) continuation;
            int i6 = lVar.f17007i;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                lVar.f17007i = i6 - Integer.MIN_VALUE;
                Object obj2 = lVar.f17005d;
                ko.a aVar = ko.a.f13464d;
                i5 = lVar.f17007i;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    Ref.IntRef intRef = this.f17008d;
                    int i10 = intRef.element;
                    if (i10 < this.f17009e) {
                        intRef.element = i10 + 1;
                        return Unit.a;
                    }
                    lVar.f17007i = 1;
                    if (this.f17010i.emit(obj, lVar) == aVar) {
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
        lVar = new l(this, continuation);
        Object obj22 = lVar.f17005d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = lVar.f17007i;
        if (i5 != 0) {
        }
        return Unit.a;
    }
}
