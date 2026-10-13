package h1;

import android.util.Log;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import e2.a0;
import e2.i;
import e2.z;
import ha.l;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.o;
import nr.x;

/* loaded from: classes.dex */
public final class c extends h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f9475d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ PlayServicesDevicePerformance f9476e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f9477i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(PlayServicesDevicePerformance playServicesDevicePerformance, int i5, Continuation continuation) {
        super(2, continuation);
        this.f9476e = playServicesDevicePerformance;
        this.f9477i = i5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new c(this.f9476e, this.f9477i, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((c) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f9475d;
        int i6 = this.f9477i;
        PlayServicesDevicePerformance playServicesDevicePerformance = this.f9476e;
        if (i5 == 0) {
            ki.b.R(obj);
            this.f9475d = 1;
            l lVar = playServicesDevicePerformance.a;
            b4.d dVar = new b4.d(new b4.d(playServicesDevicePerformance, i6, (Continuation) null), (Continuation) null, 7);
            z zVar = (z) lVar.f9613d;
            b4.d dVar2 = new b4.d(dVar, null);
            zVar.getClass();
            o a = x.a();
            zVar.f7928h.E(new i(dVar2, a, (a0) zVar.f7926f.getValue(), getContext()));
            Object w5 = a.w(this);
            ko.a aVar2 = ko.a.f13464d;
            if (w5 != aVar) {
                w5 = Unit.a;
            }
            if (w5 == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        Log.v(playServicesDevicePerformance.f1524b, "Saved mediaPerformanceClass " + i6);
        return Unit.a;
    }
}
