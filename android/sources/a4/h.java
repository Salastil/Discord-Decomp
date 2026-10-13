package a4;

import a3.q;
import java.io.Serializable;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import rr.p;
import rr.r;
import rr.v;

/* loaded from: classes.dex */
public final class h implements Flow {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f110d;

    /* renamed from: e, reason: collision with root package name */
    public final Serializable f111e;

    public /* synthetic */ h(int i5, Serializable serializable) {
        this.f110d = i5;
        this.f111e = serializable;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0061  */
    /* JADX WARN: Type inference failed for: r9v9, types: [kotlin.jvm.functions.Function2, lo.h] */
    @Override // kotlinx.coroutines.flow.Flow
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object collect(FlowCollector flowCollector, Continuation frame) {
        qr.a aVar;
        int i5;
        Throwable th2;
        v vVar;
        switch (this.f110d) {
            case 0:
                Flow[] flowArr = (Flow[]) this.f111e;
                p pVar = new p(flowArr, new q(1, flowArr), new g(3, null), flowCollector, null);
                r rVar = new r(frame, frame.getContext());
                Object B = nf.e.B(rVar, true, rVar, pVar);
                ko.a aVar2 = ko.a.f13464d;
                if (B == aVar2) {
                    Intrinsics.checkNotNullParameter(frame, "frame");
                }
                if (B != aVar2) {
                    B = Unit.a;
                }
                return B == aVar2 ? B : Unit.a;
            case 1:
                if (frame instanceof qr.a) {
                    aVar = (qr.a) frame;
                    int i6 = aVar.f16947v;
                    if ((i6 & Integer.MIN_VALUE) != 0) {
                        aVar.f16947v = i6 - Integer.MIN_VALUE;
                        Object obj = aVar.f16945e;
                        Object obj2 = ko.a.f13464d;
                        i5 = aVar.f16947v;
                        if (i5 != 0) {
                            ki.b.R(obj);
                            v vVar2 = new v(flowCollector, aVar.getContext());
                            try {
                                aVar.f16944d = vVar2;
                                aVar.f16947v = 1;
                                Object invoke = ((lo.h) this.f111e).invoke(vVar2, aVar);
                                if (invoke != obj2) {
                                    invoke = Unit.a;
                                }
                                if (invoke == obj2) {
                                    return obj2;
                                }
                                vVar = vVar2;
                            } catch (Throwable th3) {
                                th2 = th3;
                                vVar = vVar2;
                                vVar.releaseIntercepted();
                                throw th2;
                            }
                        } else {
                            if (i5 != 1) {
                                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                            }
                            vVar = aVar.f16944d;
                            try {
                                ki.b.R(obj);
                            } catch (Throwable th4) {
                                th2 = th4;
                                vVar.releaseIntercepted();
                                throw th2;
                            }
                        }
                        vVar.releaseIntercepted();
                        return Unit.a;
                    }
                }
                aVar = new qr.a(this, frame);
                Object obj3 = aVar.f16945e;
                Object obj22 = ko.a.f13464d;
                i5 = aVar.f16947v;
                if (i5 != 0) {
                }
                vVar.releaseIntercepted();
                return Unit.a;
            default:
                k kVar = new k((qr.k) this.f111e, flowCollector, null, 3);
                r rVar2 = new r(frame, frame.getContext());
                Object B2 = nf.e.B(rVar2, true, rVar2, kVar);
                ko.a aVar3 = ko.a.f13464d;
                if (B2 == aVar3) {
                    Intrinsics.checkNotNullParameter(frame, "frame");
                }
                return B2 == aVar3 ? B2 : Unit.a;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public h(Function2 function2) {
        this.f110d = 1;
        this.f111e = (lo.h) function2;
    }
}
