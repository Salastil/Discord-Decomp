package pr;

import java.util.concurrent.atomic.AtomicLongFieldUpdater;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import nr.v1;

/* loaded from: classes3.dex */
public final /* synthetic */ class d extends FunctionReferenceImpl implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public static final d f16474d = new d(3, h.class, "registerSelectForReceive", "registerSelectForReceive(Lkotlinx/coroutines/selects/SelectInstance;Ljava/lang/Object;)V", 0);

    /* JADX WARN: Code restructure failed: missing block: B:26:0x0075, code lost:
    
        return kotlin.Unit.a;
     */
    @Override // kotlin.jvm.functions.Function3
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        o oVar;
        h hVar = (h) obj;
        vr.f fVar = (vr.f) obj2;
        AtomicLongFieldUpdater atomicLongFieldUpdater = h.f16482e;
        hVar.getClass();
        o oVar2 = (o) h.f16487y.get(hVar);
        while (true) {
            if (hVar.z()) {
                ((vr.e) fVar).f19561w = j.f16498l;
                break;
            }
            long andIncrement = h.f16483i.getAndIncrement(hVar);
            long j = j.f16490b;
            long j5 = andIncrement / j;
            int i5 = (int) (andIncrement % j);
            if (oVar2.f18127i != j5) {
                o s2 = hVar.s(j5, oVar2);
                if (s2 == null) {
                    continue;
                } else {
                    oVar = s2;
                }
            } else {
                oVar = oVar2;
            }
            Object J = hVar.J(oVar, i5, andIncrement, fVar);
            o oVar3 = oVar;
            if (J == j.f16499m) {
                v1 v1Var = fVar instanceof v1 ? (v1) fVar : null;
                if (v1Var != null) {
                    v1Var.a(oVar3, i5);
                }
            } else if (J == j.f16501o) {
                if (andIncrement < hVar.w()) {
                    oVar3.a();
                }
                oVar2 = oVar3;
            } else {
                if (J == j.f16500n) {
                    throw new IllegalStateException("unexpected");
                }
                oVar3.a();
                ((vr.e) fVar).f19561w = J;
            }
        }
    }
}
