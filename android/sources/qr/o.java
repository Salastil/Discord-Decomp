package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class o implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Ref.BooleanRef f17016d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f17017e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e2.n f17018i;

    public o(Ref.BooleanRef booleanRef, FlowCollector flowCollector, e2.n nVar) {
        this.f17016d = booleanRef;
        this.f17017e = flowCollector;
        this.f17018i = nVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0081, code lost:
    
        if (r8.emit(r7, r0) == r1) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x0052, code lost:
    
        if (r6.f17017e.emit(r7, r0) == r1) goto L33;
     */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        n nVar;
        int i5;
        o oVar;
        if (continuation instanceof n) {
            nVar = (n) continuation;
            int i6 = nVar.f17015w;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                nVar.f17015w = i6 - Integer.MIN_VALUE;
                Object obj2 = nVar.f17013i;
                ko.a aVar = ko.a.f13464d;
                i5 = nVar.f17015w;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    if (this.f17016d.element) {
                        nVar.f17015w = 1;
                    } else {
                        nVar.f17011d = this;
                        nVar.f17012e = obj;
                        nVar.f17015w = 2;
                        obj2 = this.f17018i.invoke(obj, nVar);
                        if (obj2 != aVar) {
                            oVar = this;
                            if (!((Boolean) obj2).booleanValue()) {
                            }
                        }
                    }
                    return aVar;
                }
                if (i5 == 1) {
                    ki.b.R(obj2);
                    return Unit.a;
                }
                if (i5 != 2) {
                    if (i5 != 3) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj2);
                    return Unit.a;
                }
                obj = nVar.f17012e;
                oVar = nVar.f17011d;
                ki.b.R(obj2);
                if (!((Boolean) obj2).booleanValue()) {
                    return Unit.a;
                }
                oVar.f17016d.element = true;
                FlowCollector flowCollector = oVar.f17017e;
                nVar.f17011d = null;
                nVar.f17012e = null;
                nVar.f17015w = 3;
            }
        }
        nVar = new n(this, continuation);
        Object obj22 = nVar.f17013i;
        ko.a aVar2 = ko.a.f13464d;
        i5 = nVar.f17015w;
        if (i5 != 0) {
        }
    }
}
