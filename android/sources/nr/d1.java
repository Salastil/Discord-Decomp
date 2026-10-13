package nr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d1 extends lo.g implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public sr.k f15607e;

    /* renamed from: i, reason: collision with root package name */
    public n f15608i;

    /* renamed from: v, reason: collision with root package name */
    public int f15609v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f15610w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ e1 f15611x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d1(Continuation continuation, e1 e1Var) {
        super(2, continuation);
        this.f15611x = e1Var;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        d1 d1Var = new d1(continuation, this.f15611x);
        d1Var.f15610w = obj;
        return d1Var;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((d1) create((kr.k) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x0064  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:10:0x0066 -> B:6:0x007a). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        g1 b10;
        sr.k kVar;
        sr.m mVar;
        kr.k kVar2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f15609v;
        if (i5 == 0) {
            ki.b.R(obj);
            kr.k kVar3 = (kr.k) this.f15610w;
            Object obj2 = e1.f15614d.get(this.f15611x);
            if (obj2 instanceof n) {
                e1 e1Var = ((n) obj2).f15638w;
                this.f15609v = 1;
                kVar3.a(e1Var, this);
                return aVar;
            }
            if ((obj2 instanceof t0) && (b10 = ((t0) obj2).b()) != null) {
                Object obj3 = sr.m.f18116d.get(b10);
                Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlinx.coroutines.internal.LockFreeLinkedListNode");
                sr.m mVar2 = (sr.m) obj3;
                kVar = b10;
                mVar = mVar2;
                kVar2 = kVar3;
                if (!Intrinsics.areEqual(mVar, kVar)) {
                }
            }
        } else if (i5 == 1) {
            ki.b.R(obj);
        } else {
            if (i5 != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            mVar = this.f15608i;
            kVar = this.f15607e;
            kVar2 = (kr.k) this.f15610w;
            ki.b.R(obj);
            mVar = mVar.g();
            if (!Intrinsics.areEqual(mVar, kVar)) {
                if (mVar instanceof n) {
                    n nVar = (n) mVar;
                    e1 e1Var2 = nVar.f15638w;
                    this.f15610w = kVar2;
                    this.f15607e = kVar;
                    this.f15608i = nVar;
                    this.f15609v = 2;
                    kVar2.a(e1Var2, this);
                    ko.a aVar2 = ko.a.f13464d;
                    return aVar;
                }
                mVar = mVar.g();
                if (!Intrinsics.areEqual(mVar, kVar)) {
                }
            }
        }
        return Unit.a;
    }
}
