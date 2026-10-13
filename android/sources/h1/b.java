package h1;

import a4.j;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.h;

/* loaded from: classes.dex */
public final class b implements Flow {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9472d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Flow f9473e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f9474i;

    /* JADX WARN: Multi-variable type inference failed */
    public b(Flow flow, Function2 function2) {
        this.f9473e = flow;
        this.f9474i = (h) function2;
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        switch (this.f9472d) {
            case 0:
                Object collect = this.f9473e.collect(new j(1, flowCollector, (PlayServicesDevicePerformance) this.f9474i), continuation);
                if (collect != ko.a.f13464d) {
                    break;
                }
                break;
            default:
                Object collect2 = this.f9473e.collect(new j(flowCollector, (h) this.f9474i), continuation);
                if (collect2 != ko.a.f13464d) {
                    break;
                }
                break;
        }
        return Unit.a;
    }

    public b(Flow flow, PlayServicesDevicePerformance playServicesDevicePerformance) {
        this.f9473e = flow;
        this.f9474i = playServicesDevicePerformance;
    }
}
