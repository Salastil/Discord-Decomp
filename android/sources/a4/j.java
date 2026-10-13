package a4;

import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import e4.o;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.FlowCollector;
import qr.s;

/* loaded from: classes.dex */
public final class j implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f113d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f114e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f115i;

    public /* synthetic */ j(int i5, Object obj, Object obj2) {
        this.f113d = i5;
        this.f114e = obj;
        this.f115i = obj2;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0027  */
    /* JADX WARN: Removed duplicated region for block: B:21:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00a1  */
    /* JADX WARN: Type inference failed for: r2v7, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        h1.a aVar;
        int i5;
        s sVar;
        ko.a aVar2;
        int i6;
        Object obj2;
        FlowCollector flowCollector;
        switch (this.f113d) {
            case 0:
                ((e) this.f114e).b((o) this.f115i, (c) obj);
                return Unit.a;
            case 1:
                if (continuation instanceof h1.a) {
                    aVar = (h1.a) continuation;
                    int i10 = aVar.f9470e;
                    if ((i10 & Integer.MIN_VALUE) != 0) {
                        aVar.f9470e = i10 - Integer.MIN_VALUE;
                        Object obj3 = aVar.f9469d;
                        ko.a aVar3 = ko.a.f13464d;
                        i5 = aVar.f9470e;
                        if (i5 != 0) {
                            ki.b.R(obj3);
                            FlowCollector flowCollector2 = (FlowCollector) this.f114e;
                            h2.b bVar = (h2.b) obj;
                            h2.c key = ((PlayServicesDevicePerformance) this.f115i).f1526d;
                            bVar.getClass();
                            Intrinsics.checkNotNullParameter(key, "key");
                            Object obj4 = bVar.a.get(key);
                            aVar.f9470e = 1;
                            if (flowCollector2.emit(obj4, aVar) == aVar3) {
                                return aVar3;
                            }
                        } else {
                            if (i5 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj3);
                        }
                        return Unit.a;
                    }
                }
                aVar = new h1.a(this, continuation);
                Object obj32 = aVar.f9469d;
                ko.a aVar32 = ko.a.f13464d;
                i5 = aVar.f9470e;
                if (i5 != 0) {
                }
                return Unit.a;
            default:
                if (continuation instanceof s) {
                    sVar = (s) continuation;
                    int i11 = sVar.f17028e;
                    if ((i11 & Integer.MIN_VALUE) != 0) {
                        sVar.f17028e = i11 - Integer.MIN_VALUE;
                        Object obj5 = sVar.f17027d;
                        aVar2 = ko.a.f13464d;
                        i6 = sVar.f17028e;
                        if (i6 != 0) {
                            ki.b.R(obj5);
                            FlowCollector flowCollector3 = (FlowCollector) this.f114e;
                            ?? r22 = (lo.h) this.f115i;
                            sVar.f17030v = obj;
                            sVar.f17031w = flowCollector3;
                            sVar.f17028e = 1;
                            InlineMarker.mark(6);
                            Object invoke = r22.invoke(obj, sVar);
                            InlineMarker.mark(7);
                            if (invoke == aVar2) {
                                return aVar2;
                            }
                            obj2 = obj;
                            flowCollector = flowCollector3;
                        } else {
                            if (i6 != 1) {
                                if (i6 != 2) {
                                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                }
                                ki.b.R(obj5);
                                return Unit.a;
                            }
                            flowCollector = sVar.f17031w;
                            obj2 = sVar.f17030v;
                            ki.b.R(obj5);
                        }
                        sVar.f17030v = null;
                        sVar.f17031w = null;
                        sVar.f17028e = 2;
                        if (flowCollector.emit(obj2, sVar) == aVar2) {
                            return aVar2;
                        }
                        return Unit.a;
                    }
                }
                sVar = new s(this, continuation);
                Object obj52 = sVar.f17027d;
                aVar2 = ko.a.f13464d;
                i6 = sVar.f17028e;
                if (i6 != 0) {
                }
                sVar.f17030v = null;
                sVar.f17031w = null;
                sVar.f17028e = 2;
                if (flowCollector.emit(obj2, sVar) == aVar2) {
                }
                return Unit.a;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public j(FlowCollector flowCollector, Function2 function2) {
        this.f113d = 2;
        this.f114e = flowCollector;
        this.f115i = (lo.h) function2;
    }
}
