package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class g1 implements Flow {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6562d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Flow f6563e;

    public /* synthetic */ g1(qr.a0 a0Var, int i5) {
        this.f6562d = i5;
        this.f6563e = a0Var;
    }

    @Override // kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        switch (this.f6562d) {
            case 0:
                Object collect = this.f6563e.collect(new f1(flowCollector, 0), continuation);
                if (collect != ko.a.f13464d) {
                    break;
                }
                break;
            case 1:
                Object collect2 = this.f6563e.collect(new f1(flowCollector, 1), continuation);
                if (collect2 != ko.a.f13464d) {
                    break;
                }
                break;
            default:
                Object collect3 = this.f6563e.collect(new f1(flowCollector, 2), continuation);
                if (collect3 != ko.a.f13464d) {
                    break;
                }
                break;
        }
        return Unit.a;
    }
}
