package a4;

import androidx.work.CoroutineWorker;
import e4.o;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import nr.r;
import nr.w;
import pr.s;
import qr.y;

/* loaded from: classes.dex */
public final class k extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f116d;

    /* renamed from: e, reason: collision with root package name */
    public int f117e;

    /* renamed from: i, reason: collision with root package name */
    public Object f118i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f119v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f120w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ k(Object obj, Object obj2, Object obj3, Continuation continuation, int i5) {
        super(2, continuation);
        this.f116d = i5;
        this.f118i = obj;
        this.f119v = obj2;
        this.f120w = obj3;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f116d) {
            case 0:
                return new k((i) this.f118i, (o) this.f119v, (e) this.f120w, continuation, 0);
            case 1:
                k kVar = new k((FlowCollector) this.f119v, (rr.e) this.f120w, continuation, 1);
                kVar.f118i = obj;
                return kVar;
            case 2:
                return new k((rr.k) this.f118i, (FlowCollector) this.f119v, this.f120w, continuation, 2);
            case 3:
                k kVar2 = new k((qr.k) this.f119v, (FlowCollector) this.f120w, continuation, 3);
                kVar2.f118i = obj;
                return kVar2;
            default:
                return new k((v3.j) this.f119v, (CoroutineWorker) this.f120w, continuation, 4);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f116d) {
        }
        return ((k) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Type inference failed for: r12v8, types: [java.io.Serializable, kotlinx.coroutines.flow.Flow[]] */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f116d;
        int i6 = 10;
        Continuation continuation = null;
        Object obj2 = this.f120w;
        Object obj3 = this.f119v;
        switch (i5) {
            case 0:
                o spec = (o) obj3;
                ko.a aVar = ko.a.f13464d;
                int i10 = this.f117e;
                if (i10 == 0) {
                    ki.b.R(obj);
                    i iVar = (i) this.f118i;
                    iVar.getClass();
                    Intrinsics.checkNotNullParameter(spec, "spec");
                    List list = iVar.f112d;
                    ArrayList arrayList = new ArrayList();
                    for (Object obj4 : list) {
                        if (((b4.e) obj4).b(spec)) {
                            arrayList.add(obj4);
                        }
                    }
                    ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
                    Iterator it = arrayList.iterator();
                    while (true) {
                        int i11 = 0;
                        if (it.hasNext()) {
                            b4.e eVar = (b4.e) it.next();
                            eVar.getClass();
                            arrayList2.add(new qr.c(new b4.d(eVar, continuation, i11), kotlin.coroutines.g.f13538d, -2, pr.a.f16467d));
                        } else {
                            Flow h6 = y.h(new h(i11, (Flow[]) CollectionsKt.i0(arrayList2).toArray(new Flow[0])));
                            j jVar = new j(0, (e) obj2, spec);
                            this.f117e = 1;
                            if (h6.collect(jVar, this) == aVar) {
                                return aVar;
                            }
                        }
                    }
                } else {
                    if (i10 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 1:
                Object obj5 = ko.a.f13464d;
                int i12 = this.f117e;
                if (i12 == 0) {
                    ki.b.R(obj);
                    CoroutineScope coroutineScope = (CoroutineScope) this.f118i;
                    FlowCollector flowCollector = (FlowCollector) obj3;
                    rr.e eVar2 = (rr.e) obj2;
                    CoroutineContext coroutineContext = eVar2.f17580d;
                    int i13 = eVar2.f17581e;
                    int i14 = i13 != -3 ? i13 : -2;
                    pr.a aVar2 = eVar2.f17582i;
                    w wVar = w.f15670i;
                    Function2 dVar = new b4.d(eVar2, continuation, i6);
                    s sVar = new s(r.b(coroutineScope, coroutineContext), zk.a.a(i14, 4, aVar2));
                    sVar.n0(wVar, sVar, dVar);
                    this.f117e = 1;
                    Object i15 = y.i(flowCollector, sVar, true, this);
                    if (i15 != obj5) {
                        i15 = Unit.a;
                    }
                    if (i15 == obj5) {
                        return obj5;
                    }
                } else {
                    if (i12 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 2:
                ko.a aVar3 = ko.a.f13464d;
                int i16 = this.f117e;
                if (i16 == 0) {
                    ki.b.R(obj);
                    this.f117e = 1;
                    if (((rr.k) this.f118i).f17598w.invoke((FlowCollector) obj3, obj2, this) == aVar3) {
                        return aVar3;
                    }
                } else {
                    if (i16 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            case 3:
                ko.a aVar4 = ko.a.f13464d;
                int i17 = this.f117e;
                if (i17 == 0) {
                    ki.b.R(obj);
                    qr.k kVar = (qr.k) obj3;
                    this.f117e = 1;
                    if (kVar.invoke((CoroutineScope) this.f118i, (FlowCollector) obj2, this) == aVar4) {
                        return aVar4;
                    }
                } else {
                    if (i17 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                ko.a aVar5 = ko.a.f13464d;
                int i18 = this.f117e;
                if (i18 == 0) {
                    ki.b.R(obj);
                    this.f118i = (v3.j) obj3;
                    this.f117e = 1;
                    throw new IllegalStateException("Not implemented");
                }
                if (i18 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                v3.j jVar2 = (v3.j) this.f118i;
                ki.b.R(obj);
                jVar2.f19205d.j(obj);
                return Unit.a;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ k(Object obj, Object obj2, Continuation continuation, int i5) {
        super(2, continuation);
        this.f116d = i5;
        this.f119v = obj;
        this.f120w = obj2;
    }
}
