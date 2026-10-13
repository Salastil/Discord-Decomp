package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes.dex */
public final class j0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f2206d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f2207e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Lifecycle f2208i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Lifecycle.State f2209v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Function2 f2210w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j0(Lifecycle lifecycle, Lifecycle.State state, Function2 function2, Continuation continuation) {
        super(2, continuation);
        this.f2208i = lifecycle;
        this.f2209v = state;
        this.f2210w = function2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        j0 j0Var = new j0(this.f2208i, this.f2209v, this.f2210w, continuation);
        j0Var.f2207e = obj;
        return j0Var;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((j0) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f2206d;
        if (i5 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.f2207e;
            ur.e eVar = nr.g0.a;
            or.d dVar = sr.q.a.f16185w;
            i0 i0Var = new i0(this.f2208i, this.f2209v, coroutineScope, this.f2210w, null);
            this.f2206d = 1;
            if (nr.x.A(dVar, i0Var, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }
}
