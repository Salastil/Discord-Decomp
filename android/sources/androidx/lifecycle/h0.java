package androidx.lifecycle;

import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* loaded from: classes.dex */
public final class h0 implements t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ n f2192d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f2193e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ CoroutineScope f2194i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ n f2195v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ nr.j f2196w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ wr.b f2197x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Function2 f2198y;

    public h0(n nVar, Ref.ObjectRef objectRef, CoroutineScope coroutineScope, n nVar2, nr.j jVar, wr.b bVar, Function2 function2) {
        this.f2192d = nVar;
        this.f2193e = objectRef;
        this.f2194i = coroutineScope;
        this.f2195v = nVar2;
        this.f2196w = jVar;
        this.f2197x = bVar;
        this.f2198y = function2;
    }

    /* JADX WARN: Type inference failed for: r4v10, types: [T, nr.l1] */
    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner lifecycleOwner, n event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        n nVar = this.f2192d;
        Ref.ObjectRef objectRef = this.f2193e;
        if (event == nVar) {
            objectRef.element = nr.x.t(this.f2194i, null, new g0(this.f2197x, this.f2198y, null), 3);
            return;
        }
        if (event == this.f2195v) {
            Job job = (Job) objectRef.element;
            if (job != null) {
                job.f(null);
            }
            objectRef.element = null;
        }
        if (event == n.ON_DESTROY) {
            fo.q qVar = Result.f13476e;
            this.f2196w.resumeWith(Unit.a);
        }
    }
}
