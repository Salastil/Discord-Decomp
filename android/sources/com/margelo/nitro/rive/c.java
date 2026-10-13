package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class c implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6537d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6538e;

    public /* synthetic */ c(int i5, Object obj) {
        this.f6537d = i5;
        this.f6538e = obj;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0040  */
    @Override // kotlinx.coroutines.flow.FlowCollector
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object emit(Object obj, Continuation continuation) {
        qr.j jVar;
        int i5;
        switch (this.f6537d) {
            case 0:
                ((BaseHybridViewModelPropertyImpl) this.f6538e).onChanged(obj);
                return Unit.a;
            case 1:
                if (continuation instanceof qr.j) {
                    jVar = (qr.j) continuation;
                    int i6 = jVar.f16997i;
                    if ((i6 & Integer.MIN_VALUE) != 0) {
                        jVar.f16997i = i6 - Integer.MIN_VALUE;
                        Object obj2 = jVar.f16995d;
                        ko.a aVar = ko.a.f13464d;
                        i5 = jVar.f16997i;
                        if (i5 != 0) {
                            ki.b.R(obj2);
                            ProducerScope producerScope = (ProducerScope) this.f6538e;
                            a5.h hVar = obj;
                            if (obj == 0) {
                                hVar = rr.c.f17577b;
                            }
                            jVar.f16997i = 1;
                            if (producerScope.p(hVar, jVar) == aVar) {
                                return aVar;
                            }
                        } else {
                            if (i5 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            ki.b.R(obj2);
                        }
                        return Unit.a;
                    }
                }
                jVar = new qr.j(this, continuation);
                Object obj22 = jVar.f16995d;
                ko.a aVar2 = ko.a.f13464d;
                i5 = jVar.f16997i;
                if (i5 != 0) {
                }
                return Unit.a;
            default:
                ((Ref.ObjectRef) this.f6538e).element = obj;
                throw new rr.a(this);
        }
    }
}
