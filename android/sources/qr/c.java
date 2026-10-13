package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.channels.ProducerScope;

/* loaded from: classes3.dex */
public final class c extends rr.e {

    /* renamed from: v, reason: collision with root package name */
    public final lo.h f16959v;

    /* renamed from: w, reason: collision with root package name */
    public final lo.h f16960w;

    /* JADX WARN: Multi-variable type inference failed */
    public c(Function2 function2, CoroutineContext coroutineContext, int i5, pr.a aVar) {
        super(coroutineContext, i5, aVar);
        lo.h hVar = (lo.h) function2;
        this.f16959v = hVar;
        this.f16960w = hVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0051  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0023  */
    /* JADX WARN: Type inference failed for: r6v3, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // rr.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object c(ProducerScope producerScope, Continuation continuation) {
        b bVar;
        int i5;
        if (continuation instanceof b) {
            bVar = (b) continuation;
            int i6 = bVar.f16951v;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                bVar.f16951v = i6 - Integer.MIN_VALUE;
                Object obj = bVar.f16949e;
                Object obj2 = ko.a.f13464d;
                i5 = bVar.f16951v;
                if (i5 != 0) {
                    ki.b.R(obj);
                    bVar.f16948d = producerScope;
                    bVar.f16951v = 1;
                    Object invoke = this.f16959v.invoke(producerScope, bVar);
                    if (invoke != obj2) {
                        invoke = Unit.a;
                    }
                    if (invoke == obj2) {
                        return obj2;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    producerScope = bVar.f16948d;
                    ki.b.R(obj);
                }
                if (producerScope.q()) {
                    throw new IllegalStateException("'awaitClose { yourCallbackOrListener.cancel() }' should be used in the end of callbackFlow block.\nOtherwise, a callback/listener may leak in case of external cancellation.\nSee callbackFlow API documentation for the details.");
                }
                return Unit.a;
            }
        }
        bVar = new b(this, (lo.c) continuation);
        Object obj3 = bVar.f16949e;
        Object obj22 = ko.a.f13464d;
        i5 = bVar.f16951v;
        if (i5 != 0) {
        }
        if (producerScope.q()) {
        }
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // rr.e
    public final rr.e f(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return new c(this.f16960w, coroutineContext, i5, aVar);
    }

    @Override // rr.e
    public final String toString() {
        return "block[" + this.f16959v + "] -> " + super.toString();
    }
}
