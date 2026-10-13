package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* loaded from: classes.dex */
public final class p extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f2213d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ q f2214e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(q qVar, Continuation continuation) {
        super(2, continuation);
        this.f2214e = qVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        p pVar = new p(this.f2214e, continuation);
        pVar.f2213d = obj;
        return pVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((p) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        CoroutineScope coroutineScope = (CoroutineScope) this.f2213d;
        q qVar = this.f2214e;
        Lifecycle lifecycle = qVar.f2218d;
        if (lifecycle.b().compareTo(Lifecycle.State.f2138e) >= 0) {
            lifecycle.a(qVar);
        } else {
            Job job = (Job) coroutineScope.getCoroutineContext().o(nr.t.f15661e);
            if (job != null) {
                job.f(null);
            }
        }
        return Unit.a;
    }
}
