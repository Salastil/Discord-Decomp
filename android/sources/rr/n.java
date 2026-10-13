package rr;

import kotlin.Unit;
import kotlin.collections.IndexedValue;
import kotlin.coroutines.Continuation;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class n implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ pr.h f17602d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f17603e;

    public n(pr.h hVar, int i5) {
        this.f17602d = hVar;
        this.f17603e = i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0051, code lost:
    
        if (nr.x.B(r0) != r1) goto L22;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0053, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0048, code lost:
    
        if (r5.f17602d.p(r7, r0) == r1) goto L21;
     */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0022  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        m mVar;
        int i5;
        if (continuation instanceof m) {
            mVar = (m) continuation;
            int i6 = mVar.f17601i;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                mVar.f17601i = i6 - Integer.MIN_VALUE;
                Object obj2 = mVar.f17599d;
                ko.a aVar = ko.a.f13464d;
                i5 = mVar.f17601i;
                if (i5 != 0) {
                    ki.b.R(obj2);
                    IndexedValue indexedValue = new IndexedValue(this.f17603e, obj);
                    mVar.f17601i = 1;
                } else {
                    if (i5 != 1) {
                        if (i5 != 2) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj2);
                        return Unit.a;
                    }
                    ki.b.R(obj2);
                }
                mVar.f17601i = 2;
            }
        }
        mVar = new m(this, continuation);
        Object obj22 = mVar.f17599d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = mVar.f17601i;
        if (i5 != 0) {
        }
        mVar.f17601i = 2;
    }
}
