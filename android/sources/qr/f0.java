package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class f0 implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final FlowCollector f16974d;

    /* renamed from: e, reason: collision with root package name */
    public final lo.h f16975e;

    /* JADX WARN: Multi-variable type inference failed */
    public f0(FlowCollector flowCollector, Function2 function2) {
        this.f16974d = flowCollector;
        this.f16975e = (lo.h) function2;
    }

    /* JADX WARN: Code restructure failed: missing block: B:22:0x0070, code lost:
    
        if (((qr.f0) r7).b(r0) == r1) goto L29;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0063  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0022  */
    /* JADX WARN: Type inference failed for: r2v0, types: [int] */
    /* JADX WARN: Type inference failed for: r2v1, types: [lo.c] */
    /* JADX WARN: Type inference failed for: r2v4, types: [boolean] */
    /* JADX WARN: Type inference failed for: r7v4, types: [kotlin.jvm.functions.Function2, lo.h] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(lo.c cVar) {
        e0 e0Var;
        ?? r22;
        rr.v vVar;
        f0 f0Var;
        try {
            if (cVar instanceof e0) {
                e0Var = (e0) cVar;
                int i5 = e0Var.f16972w;
                if ((i5 & Integer.MIN_VALUE) != 0) {
                    e0Var.f16972w = i5 - Integer.MIN_VALUE;
                    Object obj = e0Var.f16970i;
                    ko.a aVar = ko.a.f13464d;
                    r22 = e0Var.f16972w;
                    if (r22 != 0) {
                        ki.b.R(obj);
                        vVar = new rr.v(this.f16974d, e0Var.getContext());
                        ?? r7 = this.f16975e;
                        e0Var.f16968d = this;
                        e0Var.f16969e = vVar;
                        e0Var.f16972w = 1;
                        if (r7.invoke(vVar, e0Var) != aVar) {
                            f0Var = this;
                        }
                        return aVar;
                    }
                    if (r22 != 1) {
                        if (r22 != 2) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        return Unit.a;
                    }
                    vVar = e0Var.f16969e;
                    f0Var = e0Var.f16968d;
                    ki.b.R(obj);
                    vVar.releaseIntercepted();
                    FlowCollector flowCollector = f0Var.f16974d;
                    r22 = flowCollector instanceof f0;
                    if (r22 != 0) {
                        return Unit.a;
                    }
                    e0Var.f16968d = null;
                    e0Var.f16969e = null;
                    e0Var.f16972w = 2;
                }
            }
            if (r22 != 0) {
            }
            vVar.releaseIntercepted();
            FlowCollector flowCollector2 = f0Var.f16974d;
            r22 = flowCollector2 instanceof f0;
            if (r22 != 0) {
            }
        } catch (Throwable th2) {
            r22.releaseIntercepted();
            throw th2;
        }
        e0Var = new e0(this, cVar);
        Object obj2 = e0Var.f16970i;
        ko.a aVar2 = ko.a.f13464d;
        r22 = e0Var.f16972w;
    }

    @Override // kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation continuation) {
        return this.f16974d.emit(obj, continuation);
    }
}
