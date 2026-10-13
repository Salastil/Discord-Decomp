package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class k extends lo.h implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public Ref.ObjectRef f16998d;

    /* renamed from: e, reason: collision with root package name */
    public Ref.LongRef f16999e;

    /* renamed from: i, reason: collision with root package name */
    public int f17000i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ Object f17001v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f17002w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ c7.a f17003x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Flow f17004y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(c7.a aVar, Flow flow, Continuation continuation) {
        super(3, continuation);
        this.f17003x = aVar;
        this.f17004y = flow;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        k kVar = new k(this.f17003x, this.f17004y, (Continuation) obj3);
        kVar.f17001v = (CoroutineScope) obj;
        kVar.f17002w = (FlowCollector) obj2;
        return kVar.invokeSuspend(Unit.a);
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x00a6, code lost:
    
        if (r9.emit(r11, r19) == r1) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0138, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0136, code lost:
    
        if (r11.c(r19) == r1) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x006b, code lost:
    
        if (r11.d(r19) == r1) goto L36;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x012d  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0139  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0072  */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v12 */
    /* JADX WARN: Type inference failed for: r8v13 */
    /* JADX WARN: Type inference failed for: r8v14 */
    /* JADX WARN: Type inference failed for: r8v2, types: [java.lang.Object, pr.u] */
    /* JADX WARN: Type inference failed for: r8v4, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r8v9 */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Ref.ObjectRef objectRef;
        ?? r82;
        FlowCollector flowCollector;
        Ref.ObjectRef objectRef2;
        Ref.LongRef longRef;
        vr.e eVar;
        pr.u uVar;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f17000i;
        Continuation continuation = null;
        if (i5 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.f17001v;
            FlowCollector flowCollector2 = (FlowCollector) this.f17002w;
            b4.d dVar = new b4.d(this.f17004y, continuation, 9);
            kotlin.coroutines.g gVar = kotlin.coroutines.g.f13538d;
            pr.a aVar2 = pr.a.f16467d;
            nr.w wVar = nr.w.f15668d;
            nr.a sVar = new pr.s(nr.r.b(coroutineScope, gVar), zk.a.a(0, 4, aVar2));
            sVar.n0(wVar, sVar, dVar);
            objectRef = new Ref.ObjectRef();
            r82 = sVar;
            flowCollector = flowCollector2;
        } else if (i5 == 1) {
            longRef = this.f16999e;
            objectRef2 = this.f16998d;
            pr.u uVar2 = (pr.u) this.f17002w;
            flowCollector = (FlowCollector) this.f17001v;
            ki.b.R(obj);
            uVar = uVar2;
            objectRef2.element = null;
            r82 = uVar;
            Ref.ObjectRef objectRef3 = objectRef2;
            Ref.LongRef longRef2 = longRef;
            objectRef = objectRef3;
            eVar = new vr.e(getContext());
            if (objectRef.element != null) {
                long j = longRef2.element;
                h hVar = new h(null, objectRef, flowCollector);
                vr.b bVar = new vr.b(j);
                vr.a aVar3 = vr.a.f19543d;
                Intrinsics.checkNotNull(aVar3, "null cannot be cast to non-null type kotlin.Function3<@[ParameterName(name = \"clauseObject\")] kotlin.Any, @[ParameterName(name = \"select\")] kotlinx.coroutines.selects.SelectInstance<*>, @[ParameterName(name = \"param\")] kotlin.Any?, kotlin.Unit>");
                eVar.f(new vr.c(eVar, bVar, (Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(aVar3, 3), vr.g.f19562d, vr.h.f19566e, hVar, null), false);
            }
            com.google.firebase.messaging.r b10 = r82.b();
            eVar.f(new vr.c(eVar, (pr.h) b10.f6259e, (Function3) b10.f6260i, (Function3) b10.f6261v, null, new i(null, objectRef, flowCollector), (Function3) b10.f6262w), false);
            this.f17001v = flowCollector;
            this.f17002w = r82;
            this.f16998d = objectRef;
            this.f16999e = null;
            this.f17000i = 2;
            if (!(vr.e.f19556x.get(eVar) instanceof vr.c)) {
            }
        } else {
            if (i5 != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            objectRef = this.f16998d;
            pr.u uVar3 = (pr.u) this.f17002w;
            FlowCollector flowCollector3 = (FlowCollector) this.f17001v;
            ki.b.R(obj);
            flowCollector = flowCollector3;
            r82 = uVar3;
        }
        objectRef2 = objectRef;
        if (objectRef2.element == rr.c.f17579d) {
            longRef = new Ref.LongRef();
            r82 = r82;
            if (objectRef2.element != null) {
                a5.h hVar2 = rr.c.f17577b;
                long longValue = Long.valueOf(this.f17003x.f3361e).longValue();
                longRef.element = longValue;
                r82 = r82;
                if (longValue < 0) {
                    throw new IllegalArgumentException("Debounce timeout should not be negative");
                }
                if (longValue == 0) {
                    Object obj2 = objectRef2.element;
                    if (obj2 == hVar2) {
                        obj2 = null;
                    }
                    this.f17001v = flowCollector;
                    this.f17002w = r82;
                    this.f16998d = objectRef2;
                    this.f16999e = longRef;
                    this.f17000i = 1;
                    uVar = r82;
                }
            }
            Ref.ObjectRef objectRef32 = objectRef2;
            Ref.LongRef longRef22 = longRef;
            objectRef = objectRef32;
            eVar = new vr.e(getContext());
            if (objectRef.element != null) {
            }
            com.google.firebase.messaging.r b102 = r82.b();
            eVar.f(new vr.c(eVar, (pr.h) b102.f6259e, (Function3) b102.f6260i, (Function3) b102.f6261v, null, new i(null, objectRef, flowCollector), (Function3) b102.f6262w), false);
            this.f17001v = flowCollector;
            this.f17002w = r82;
            this.f16998d = objectRef;
            this.f16999e = null;
            this.f17000i = 2;
            if (!(vr.e.f19556x.get(eVar) instanceof vr.c)) {
            }
            objectRef2 = objectRef;
            if (objectRef2.element == rr.c.f17579d) {
                return Unit.a;
            }
        }
    }
}
