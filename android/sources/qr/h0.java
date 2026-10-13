package qr;

import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class h0 implements u {

    /* renamed from: d, reason: collision with root package name */
    public final u f16988d;

    /* renamed from: e, reason: collision with root package name */
    public final lo.h f16989e;

    /* JADX WARN: Multi-variable type inference failed */
    public h0(u uVar, Function2 function2) {
        this.f16988d = uVar;
        this.f16989e = (lo.h) function2;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /* JADX WARN: Type inference failed for: r2v1, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // kotlinx.coroutines.flow.Flow
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        g0 g0Var;
        int i5;
        if (continuation instanceof g0) {
            g0Var = (g0) continuation;
            int i6 = g0Var.f16984i;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                g0Var.f16984i = i6 - Integer.MIN_VALUE;
                Object obj = g0Var.f16982d;
                ko.a aVar = ko.a.f13464d;
                i5 = g0Var.f16984i;
                if (i5 != 0) {
                    ki.b.R(obj);
                    f0 f0Var = new f0(flowCollector, this.f16989e);
                    g0Var.f16984i = 1;
                    if (this.f16988d.collect(f0Var, g0Var) == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                throw new fo.h();
            }
        }
        g0Var = new g0(this, continuation);
        Object obj2 = g0Var.f16982d;
        ko.a aVar2 = ko.a.f13464d;
        i5 = g0Var.f16984i;
        if (i5 != 0) {
        }
        throw new fo.h();
    }
}
