package com.margelo.nitro.rive;

import android.util.Log;
import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import androidx.work.CoroutineWorker;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public final class v0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6599d;

    /* renamed from: e, reason: collision with root package name */
    public int f6600e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f6601i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ v0(Object obj, Continuation continuation, int i5) {
        super(2, continuation);
        this.f6599d = i5;
        this.f6601i = obj;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f6599d) {
            case 0:
                return new v0((HybridRiveView) this.f6601i, continuation, 0);
            case 1:
                return new v0((PlayServicesDevicePerformance) this.f6601i, continuation, 1);
            case 2:
                return new v0((h1.b) this.f6601i, continuation, 2);
            default:
                return new v0((CoroutineWorker) this.f6601i, continuation, 3);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f6599d) {
        }
        return ((v0) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        switch (this.f6599d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f6600e;
                if (i5 != 0) {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return obj;
                }
                ki.b.R(obj);
                fm.m view = ((HybridRiveView) this.f6601i).getView();
                this.f6600e = 1;
                Object w5 = view.f8787i.w(this);
                return w5 == aVar ? aVar : w5;
            case 1:
                PlayServicesDevicePerformance playServicesDevicePerformance = (PlayServicesDevicePerformance) this.f6601i;
                g1.a aVar2 = playServicesDevicePerformance.f1525c;
                String str = playServicesDevicePerformance.f1524b;
                ko.a aVar3 = ko.a.f13464d;
                int i6 = this.f6600e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    h1.b bVar = new h1.b(((e2.z) playServicesDevicePerformance.a.f9613d).f7923c, playServicesDevicePerformance);
                    this.f6600e = 1;
                    obj = qr.y.j(bVar, this);
                    if (obj == aVar3) {
                        return aVar3;
                    }
                } else {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                Integer num = (Integer) obj;
                Log.v(str, "Stored mpc is " + num);
                Log.v(str, "Default mpc is " + aVar2.a);
                int max = Math.max(num != null ? num.intValue() : 0, aVar2.a);
                Log.v(str, "Mpc value used " + max);
                return new Integer(max);
            case 2:
                ko.a aVar4 = ko.a.f13464d;
                int i10 = this.f6600e;
                if (i10 == 0) {
                    ki.b.R(obj);
                    h1.b bVar2 = (h1.b) this.f6601i;
                    this.f6600e = 1;
                    Object collect = bVar2.collect(rr.u.f17620d, this);
                    if (collect != aVar4) {
                        collect = Unit.a;
                    }
                    if (collect == aVar4) {
                        return aVar4;
                    }
                } else {
                    if (i10 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                CoroutineWorker coroutineWorker = (CoroutineWorker) this.f6601i;
                g4.j jVar = coroutineWorker.f2562x;
                ko.a aVar5 = ko.a.f13464d;
                int i11 = this.f6600e;
                try {
                    if (i11 == 0) {
                        ki.b.R(obj);
                        this.f6600e = 1;
                        obj = coroutineWorker.f();
                        if (obj == aVar5) {
                            return aVar5;
                        }
                    } else {
                        if (i11 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                    }
                    jVar.j((v3.n) obj);
                } catch (Throwable th2) {
                    jVar.k(th2);
                }
                return Unit.a;
        }
    }
}
