package b4;

import androidx.core.performance.play.services.PlayServicesDevicePerformance;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.margelo.nitro.core.Promise;
import com.margelo.nitro.rive.HybridRiveFile;
import com.reactnativedocumentpicker.RNDocumentPickerModule;
import e2.m;
import e2.s;
import e4.i;
import fo.q;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.h;
import nr.g0;
import nr.x;
import pr.j;
import pr.o;
import sr.v;
import v3.p;
import zo.c0;

/* loaded from: classes.dex */
public final class d extends h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2738d;

    /* renamed from: e, reason: collision with root package name */
    public int f2739e;

    /* renamed from: i, reason: collision with root package name */
    public Object f2740i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f2741v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(PlayServicesDevicePerformance playServicesDevicePerformance, int i5, Continuation continuation) {
        super(2, continuation);
        this.f2738d = 5;
        this.f2741v = playServicesDevicePerformance;
        this.f2739e = i5;
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [kotlin.jvm.functions.Function1, lo.h] */
    /* JADX WARN: Type inference failed for: r1v12, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f2738d) {
            case 0:
                d dVar = new d((e) this.f2741v, continuation, 0);
                dVar.f2740i = obj;
                return dVar;
            case 1:
                return new d((Function1) this.f2740i, (Promise) this.f2741v, continuation);
            case 2:
                return new d((ArrayList) this.f2740i, (HybridRiveFile) this.f2741v, continuation, 2);
            case 3:
                d dVar2 = new d((List) this.f2741v, continuation, 3);
                dVar2.f2740i = obj;
                return dVar2;
            case 4:
                return new d((i) this.f2741v, continuation, 4);
            case 5:
                d dVar3 = new d((PlayServicesDevicePerformance) this.f2741v, this.f2739e, continuation);
                dVar3.f2740i = obj;
                return dVar3;
            case 6:
                d dVar4 = new d((h) this.f2741v, continuation);
                dVar4.f2740i = obj;
                return dVar4;
            case 7:
                d dVar5 = new d((d) this.f2741v, continuation, 7);
                dVar5.f2740i = obj;
                return dVar5;
            case 8:
                return new d((RNDocumentPickerModule) this.f2740i, (List) this.f2741v, continuation, 8);
            case 9:
                d dVar6 = new d((Flow) this.f2741v, continuation, 9);
                dVar6.f2740i = obj;
                return dVar6;
            case 10:
                d dVar7 = new d((rr.e) this.f2741v, continuation, 10);
                dVar7.f2740i = obj;
                return dVar7;
            case 11:
                d dVar8 = new d((rr.f) this.f2741v, continuation, 11);
                dVar8.f2740i = obj;
                return dVar8;
            default:
                d dVar9 = new d((FlowCollector) this.f2741v, continuation, 12);
                dVar9.f2740i = obj;
                return dVar9;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        switch (this.f2738d) {
            case 0:
                return ((d) create((ProducerScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 1:
                return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 2:
                return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 3:
                return ((d) create((s) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 4:
                return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 5:
                return ((d) create((h2.b) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 6:
                return ((d) create((h2.b) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 7:
                return ((d) create((h2.b) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 8:
                return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 9:
                return ((d) create((ProducerScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 10:
                return ((d) create((ProducerScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            case 11:
                return ((d) create((FlowCollector) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            default:
                return ((d) create(obj, (Continuation) obj2)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:144:0x033f, code lost:
    
        if (r3 == r6) goto L179;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x034b, code lost:
    
        if (r5.invoke(r3, r20) == r6) goto L179;
     */
    /* JADX WARN: Code restructure failed: missing block: B:149:?, code lost:
    
        return r6;
     */
    /* JADX WARN: Removed duplicated region for block: B:116:0x023f  */
    /* JADX WARN: Type inference failed for: r3v5, types: [kotlin.jvm.functions.Function1, lo.h] */
    /* JADX WARN: Type inference failed for: r4v28, types: [kotlin.jvm.functions.Function2, lo.h] */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:136:0x034b -> B:100:0x034f). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object invoke;
        ko.a aVar;
        m mVar;
        Object obj2;
        pr.h hVar;
        o oVar;
        Object invoke2;
        pl.g gVar;
        pl.f fVar;
        pl.e eVar;
        ReactApplicationContext reactApplicationContext;
        Object A;
        pl.g gVar2;
        int i5 = 1;
        switch (this.f2738d) {
            case 0:
                ko.a aVar2 = ko.a.f13464d;
                int i6 = this.f2739e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    ProducerScope producerScope = (ProducerScope) this.f2740i;
                    e eVar2 = (e) this.f2741v;
                    c listener = new c(eVar2, producerScope);
                    c4.f fVar2 = eVar2.a;
                    fVar2.getClass();
                    Intrinsics.checkNotNullParameter(listener, "listener");
                    synchronized (fVar2.f3305c) {
                        try {
                            if (fVar2.f3306d.add(listener)) {
                                if (fVar2.f3306d.size() == 1) {
                                    fVar2.f3307e = fVar2.a();
                                    p.d().a(c4.g.a, fVar2.getClass().getSimpleName() + ": initial state = " + fVar2.f3307e);
                                    fVar2.c();
                                }
                                producerScope.d().n(eVar2.c(fVar2.f3307e) ? new a4.b(eVar2.a()) : a4.a.a);
                            }
                            Unit unit = Unit.a;
                        } catch (Throwable th2) {
                            throw th2;
                        }
                    }
                    b bVar = new b((e) this.f2741v, listener);
                    this.f2739e = 1;
                    if (c0.f(producerScope, bVar, this) == aVar2) {
                        return aVar2;
                    }
                } else {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 1:
                Promise promise = (Promise) this.f2741v;
                ko.a aVar3 = ko.a.f13464d;
                int i10 = this.f2739e;
                try {
                    if (i10 == 0) {
                        ki.b.R(obj);
                        ?? r32 = (h) this.f2740i;
                        this.f2739e = 1;
                        invoke = r32.invoke(this);
                        if (invoke == aVar3) {
                            return aVar3;
                        }
                    } else {
                        if (i10 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        invoke = obj;
                    }
                    promise.resolve(invoke);
                } catch (Throwable th3) {
                    promise.reject(th3);
                }
                return Unit.a;
            case 2:
                ko.a aVar4 = ko.a.f13464d;
                int i11 = this.f2739e;
                if (i11 == 0) {
                    ki.b.R(obj);
                    ArrayList arrayList = (ArrayList) this.f2740i;
                    this.f2739e = 1;
                    if ((arrayList.isEmpty() ? m0.f13512d : new nr.e((Deferred[]) arrayList.toArray(new Deferred[0])).a(this)) == aVar4) {
                        return aVar4;
                    }
                } else {
                    if (i11 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                ((HybridRiveFile) this.f2741v).refreshAfterAssetChange();
                return Unit.a;
            case 3:
                ko.a aVar5 = ko.a.f13464d;
                int i12 = this.f2739e;
                if (i12 == 0) {
                    ki.b.R(obj);
                    s sVar = (s) this.f2740i;
                    List list = (List) this.f2741v;
                    this.f2739e = 1;
                    if (ki.b.a(list, sVar, this) == aVar5) {
                        return aVar5;
                    }
                } else {
                    if (i12 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 4:
                i iVar = (i) this.f2741v;
                AtomicInteger atomicInteger = (AtomicInteger) iVar.f7955v;
                ko.a aVar6 = ko.a.f13464d;
                int i13 = this.f2739e;
                if (i13 == 0) {
                    ki.b.R(obj);
                    if (atomicInteger.get() <= 0) {
                        throw new IllegalStateException("Check failed.");
                    }
                    x.l(((sr.d) iVar.f7952d).f18103d);
                    mVar = (m) iVar.f7953e;
                    hVar = (pr.h) iVar.f7954i;
                    this.f2740i = mVar;
                    this.f2739e = i5;
                    hVar.getClass();
                    String str = "unexpected";
                    AtomicLongFieldUpdater atomicLongFieldUpdater = pr.h.f16483i;
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = pr.h.f16487y;
                    o oVar2 = (o) atomicReferenceFieldUpdater.get(hVar);
                    while (!hVar.z()) {
                    }
                    Throwable u5 = hVar.u();
                    int i14 = v.a;
                    throw u5;
                }
                if (i13 == 1) {
                    mVar = (m) this.f2740i;
                    ki.b.R(obj);
                    obj2 = obj;
                    aVar = aVar6;
                    this.f2740i = null;
                    this.f2739e = 2;
                    break;
                } else {
                    if (i13 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    aVar = aVar6;
                    if (atomicInteger.decrementAndGet() == 0) {
                        return Unit.a;
                    }
                    aVar6 = aVar;
                    i5 = 1;
                    x.l(((sr.d) iVar.f7952d).f18103d);
                    mVar = (m) iVar.f7953e;
                    hVar = (pr.h) iVar.f7954i;
                    this.f2740i = mVar;
                    this.f2739e = i5;
                    hVar.getClass();
                    String str2 = "unexpected";
                    AtomicLongFieldUpdater atomicLongFieldUpdater2 = pr.h.f16483i;
                    AtomicReferenceFieldUpdater atomicReferenceFieldUpdater2 = pr.h.f16487y;
                    o oVar22 = (o) atomicReferenceFieldUpdater2.get(hVar);
                    while (!hVar.z()) {
                        long andIncrement = atomicLongFieldUpdater2.getAndIncrement(hVar);
                        ko.a aVar7 = aVar6;
                        long j = j.f16490b;
                        String str3 = str2;
                        long j5 = andIncrement / j;
                        int i15 = (int) (andIncrement % j);
                        if (oVar22.f18127i != j5) {
                            o s2 = hVar.s(j5, oVar22);
                            if (s2 == null) {
                                str2 = str3;
                                aVar6 = aVar7;
                            } else {
                                oVar22 = s2;
                            }
                        }
                        o oVar3 = oVar22;
                        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater3 = atomicReferenceFieldUpdater2;
                        Object J = hVar.J(oVar3, i15, andIncrement, null);
                        a5.h hVar2 = j.f16499m;
                        if (J == hVar2) {
                            throw new IllegalStateException(str3);
                        }
                        a5.h hVar3 = j.f16501o;
                        if (J != hVar3) {
                            if (J == j.f16500n) {
                                nr.j p3 = x.p(ko.f.b(this));
                                try {
                                    Object J2 = hVar.J(oVar3, i15, andIncrement, p3);
                                    if (J2 == hVar2) {
                                        p3.a(oVar3, i15);
                                    } else if (J2 != hVar3) {
                                        oVar3.a();
                                        p3.j(J2, null);
                                    } else {
                                        if (andIncrement < hVar.w()) {
                                            oVar3.a();
                                        }
                                        o oVar4 = (o) atomicReferenceFieldUpdater3.get(hVar);
                                        while (true) {
                                            if (hVar.z()) {
                                                q qVar = Result.f13476e;
                                                p3.resumeWith(ki.b.i(hVar.u()));
                                            } else {
                                                long andIncrement2 = atomicLongFieldUpdater2.getAndIncrement(hVar);
                                                long j7 = j.f16490b;
                                                long j10 = andIncrement2 / j7;
                                                int i16 = (int) (andIncrement2 % j7);
                                                if (oVar4.f18127i == j10) {
                                                    oVar = oVar4;
                                                } else {
                                                    o s5 = hVar.s(j10, oVar4);
                                                    if (s5 != null) {
                                                        oVar = s5;
                                                    }
                                                }
                                                Object J3 = hVar.J(oVar, i16, andIncrement2, p3);
                                                o oVar5 = oVar;
                                                if (J3 == j.f16499m) {
                                                    p3.a(oVar5, i16);
                                                } else if (J3 == j.f16501o) {
                                                    if (andIncrement2 < hVar.w()) {
                                                        oVar5.a();
                                                    }
                                                    oVar4 = oVar5;
                                                } else {
                                                    if (J3 == j.f16500n) {
                                                        throw new IllegalStateException(str3);
                                                    }
                                                    oVar5.a();
                                                    p3.j(J3, null);
                                                }
                                            }
                                        }
                                    }
                                    obj2 = p3.r();
                                    if (obj2 == ko.a.f13464d) {
                                        Intrinsics.checkNotNullParameter(this, "frame");
                                    }
                                } catch (Throwable th4) {
                                    p3.A();
                                    throw th4;
                                }
                            } else {
                                oVar3.a();
                                obj2 = J;
                            }
                            aVar = aVar7;
                            break;
                        } else {
                            if (andIncrement < hVar.w()) {
                                oVar3.a();
                            }
                            str2 = str3;
                            oVar22 = oVar3;
                            aVar6 = aVar7;
                            atomicReferenceFieldUpdater2 = atomicReferenceFieldUpdater3;
                        }
                    }
                    Throwable u52 = hVar.u();
                    int i142 = v.a;
                    throw u52;
                }
            case 5:
                ko.a aVar8 = ko.a.f13464d;
                ki.b.R(obj);
                h2.b bVar2 = (h2.b) this.f2740i;
                h2.c key = ((PlayServicesDevicePerformance) this.f2741v).f1526d;
                Integer num = new Integer(this.f2739e);
                bVar2.getClass();
                Intrinsics.checkNotNullParameter(key, "key");
                bVar2.a(key, num);
                return Unit.a;
            case 6:
                ko.a aVar9 = ko.a.f13464d;
                int i17 = this.f2739e;
                if (i17 == 0) {
                    ki.b.R(obj);
                    h2.b bVar3 = (h2.b) this.f2740i;
                    ?? r42 = (h) this.f2741v;
                    this.f2739e = 1;
                    invoke2 = r42.invoke(bVar3, this);
                    if (invoke2 == aVar9) {
                        return aVar9;
                    }
                } else {
                    if (i17 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    invoke2 = obj;
                }
                h2.b bVar4 = (h2.b) invoke2;
                bVar4.f9483b.set(true);
                return bVar4;
            case 7:
                ko.a aVar10 = ko.a.f13464d;
                int i18 = this.f2739e;
                if (i18 != 0) {
                    if (i18 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    h2.b bVar5 = (h2.b) this.f2740i;
                    ki.b.R(obj);
                    return bVar5;
                }
                ki.b.R(obj);
                Map unmodifiableMap = Collections.unmodifiableMap(((h2.b) this.f2740i).a);
                Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "unmodifiableMap(preferencesMap)");
                h2.b bVar6 = new h2.b(v0.o(unmodifiableMap), false);
                d dVar = (d) this.f2741v;
                this.f2740i = bVar6;
                this.f2739e = 1;
                return dVar.invoke(bVar6, this) == aVar10 ? aVar10 : bVar6;
            case 8:
                RNDocumentPickerModule rNDocumentPickerModule = (RNDocumentPickerModule) this.f2740i;
                ko.a aVar11 = ko.a.f13464d;
                int i19 = this.f2739e;
                try {
                    if (i19 == 0) {
                        ki.b.R(obj);
                        fVar = rNDocumentPickerModule.currentPickOptions;
                        if (fVar == null) {
                            throw new IllegalArgumentException("Failed requirement.");
                        }
                        eVar = rNDocumentPickerModule.metadataGetter;
                        reactApplicationContext = rNDocumentPickerModule.getReactApplicationContext();
                        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "access$getReactApplicationContext(...)");
                        List list2 = (List) this.f2741v;
                        this.f2739e = 1;
                        eVar.getClass();
                        ur.e eVar3 = g0.a;
                        A = x.A(ur.d.f19093i, new pl.d(list2, eVar, reactApplicationContext, fVar, null), this);
                        if (A == aVar11) {
                            return aVar11;
                        }
                    } else {
                        if (i19 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        A = obj;
                    }
                    gVar2 = rNDocumentPickerModule.promiseWrapper;
                    gVar2.c((ReadableArray) A);
                } catch (Exception e9) {
                    gVar = rNDocumentPickerModule.promiseWrapper;
                    gVar.getClass();
                    Intrinsics.checkNotNullParameter(e9, "e");
                    String localizedMessage = e9.getLocalizedMessage();
                    if (localizedMessage == null && (localizedMessage = e9.getMessage()) == null) {
                        localizedMessage = "unknown error";
                    }
                    String str4 = gVar.f16452b;
                    if (str4 == null) {
                        str4 = "unknown call in progress";
                    }
                    gVar.b(str4, localizedMessage, e9);
                }
                return Unit.a;
            case 9:
                ko.a aVar12 = ko.a.f13464d;
                int i20 = this.f2739e;
                if (i20 == 0) {
                    ki.b.R(obj);
                    ProducerScope producerScope2 = (ProducerScope) this.f2740i;
                    Flow flow = (Flow) this.f2741v;
                    com.margelo.nitro.rive.c cVar = new com.margelo.nitro.rive.c(1, producerScope2);
                    this.f2739e = 1;
                    if (flow.collect(cVar, this) == aVar12) {
                        return aVar12;
                    }
                } else {
                    if (i20 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 10:
                ko.a aVar13 = ko.a.f13464d;
                int i21 = this.f2739e;
                if (i21 == 0) {
                    ki.b.R(obj);
                    ProducerScope producerScope3 = (ProducerScope) this.f2740i;
                    rr.e eVar4 = (rr.e) this.f2741v;
                    this.f2739e = 1;
                    if (eVar4.c(producerScope3, this) == aVar13) {
                        return aVar13;
                    }
                } else {
                    if (i21 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 11:
                ko.a aVar14 = ko.a.f13464d;
                int i22 = this.f2739e;
                if (i22 == 0) {
                    ki.b.R(obj);
                    FlowCollector flowCollector = (FlowCollector) this.f2740i;
                    rr.f fVar3 = (rr.f) this.f2741v;
                    this.f2739e = 1;
                    if (fVar3.g(flowCollector, this) == aVar14) {
                        return aVar14;
                    }
                } else {
                    if (i22 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                ko.a aVar15 = ko.a.f13464d;
                int i23 = this.f2739e;
                if (i23 == 0) {
                    ki.b.R(obj);
                    Object obj3 = this.f2740i;
                    FlowCollector flowCollector2 = (FlowCollector) this.f2741v;
                    this.f2739e = 1;
                    if (flowCollector2.emit(obj3, this) == aVar15) {
                        return aVar15;
                    }
                } else {
                    if (i23 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(Object obj, Object obj2, Continuation continuation, int i5) {
        super(2, continuation);
        this.f2738d = i5;
        this.f2740i = obj;
        this.f2741v = obj2;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(Object obj, Continuation continuation, int i5) {
        super(2, continuation);
        this.f2738d = i5;
        this.f2741v = obj;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public d(Function1 function1, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.f2738d = 1;
        this.f2740i = (h) function1;
        this.f2741v = promise;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public d(Function2 function2, Continuation continuation) {
        super(2, continuation);
        this.f2738d = 6;
        this.f2741v = (h) function2;
    }
}
