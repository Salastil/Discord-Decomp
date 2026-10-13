package androidx.lifecycle;

import androidx.lifecycle.Lifecycle;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* loaded from: classes.dex */
public final class i0 extends lo.h implements Function2 {
    public final /* synthetic */ CoroutineScope E;
    public final /* synthetic */ Function2 F;

    /* renamed from: d, reason: collision with root package name */
    public Ref.ObjectRef f2199d;

    /* renamed from: e, reason: collision with root package name */
    public Ref.ObjectRef f2200e;

    /* renamed from: i, reason: collision with root package name */
    public CoroutineScope f2201i;

    /* renamed from: v, reason: collision with root package name */
    public Function2 f2202v;

    /* renamed from: w, reason: collision with root package name */
    public int f2203w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Lifecycle f2204x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Lifecycle.State f2205y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i0(Lifecycle lifecycle, Lifecycle.State state, CoroutineScope coroutineScope, Function2 function2, Continuation continuation) {
        super(2, continuation);
        this.f2204x = lifecycle;
        this.f2205y = state;
        this.E = coroutineScope;
        this.F = function2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new i0(this.f2204x, this.f2205y, this.E, this.F, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((i0) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00c1  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00ca  */
    /* JADX WARN: Removed duplicated region for block: B:26:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0097 A[Catch: all -> 0x00b8, TRY_LEAVE, TryCatch #1 {all -> 0x00b8, blocks: (B:35:0x0039, B:42:0x0079, B:44:0x0097, B:49:0x006f, B:51:0x0073, B:52:0x0076), top: B:34:0x0039 }] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00a1 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00a2  */
    /* JADX WARN: Type inference failed for: r4v7, types: [T, androidx.lifecycle.h0, androidx.lifecycle.u, java.lang.Object] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Ref.ObjectRef objectRef;
        Throwable th2;
        Ref.ObjectRef objectRef2;
        n nVar;
        n nVar2;
        Object r5;
        Job job;
        t tVar;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f2203w;
        Lifecycle lifecycle = this.f2204x;
        if (i5 == 0) {
            ki.b.R(obj);
            if (lifecycle.b() == Lifecycle.State.f2137d) {
                return Unit.a;
            }
            Ref.ObjectRef objectRef3 = new Ref.ObjectRef();
            objectRef = new Ref.ObjectRef();
            try {
                Lifecycle.State state = this.f2205y;
                CoroutineScope coroutineScope = this.E;
                Function2 function2 = this.F;
                this.f2199d = objectRef3;
                this.f2200e = objectRef;
                this.f2201i = coroutineScope;
                this.f2202v = function2;
                this.f2203w = 1;
                nr.j jVar = new nr.j(1, ko.f.b(this));
                jVar.t();
                n.Companion.getClass();
                Intrinsics.checkNotNullParameter(state, "state");
                int ordinal = state.ordinal();
                if (ordinal == 2) {
                    nVar = n.ON_CREATE;
                } else if (ordinal == 3) {
                    nVar = n.ON_START;
                } else if (ordinal != 4) {
                    nVar2 = null;
                    ?? h0Var = new h0(nVar2, objectRef3, coroutineScope, l.a(state), jVar, new wr.b(), function2);
                    objectRef.element = h0Var;
                    Intrinsics.checkNotNull(h0Var, "null cannot be cast to non-null type androidx.lifecycle.LifecycleEventObserver");
                    lifecycle.a(h0Var);
                    r5 = jVar.r();
                    if (r5 == aVar) {
                        Intrinsics.checkNotNullParameter(this, "frame");
                    }
                    if (r5 != aVar) {
                        return aVar;
                    }
                    objectRef2 = objectRef3;
                } else {
                    nVar = n.ON_RESUME;
                }
                nVar2 = nVar;
                ?? h0Var2 = new h0(nVar2, objectRef3, coroutineScope, l.a(state), jVar, new wr.b(), function2);
                objectRef.element = h0Var2;
                Intrinsics.checkNotNull(h0Var2, "null cannot be cast to non-null type androidx.lifecycle.LifecycleEventObserver");
                lifecycle.a(h0Var2);
                r5 = jVar.r();
                if (r5 == aVar) {
                }
                if (r5 != aVar) {
                }
            } catch (Throwable th3) {
                th2 = th3;
                objectRef2 = objectRef3;
                job = (Job) objectRef2.element;
                if (job != null) {
                }
                tVar = (t) objectRef.element;
                if (tVar != null) {
                }
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            objectRef = this.f2200e;
            objectRef2 = this.f2199d;
            try {
                ki.b.R(obj);
            } catch (Throwable th4) {
                th2 = th4;
                job = (Job) objectRef2.element;
                if (job != null) {
                    job.f(null);
                }
                tVar = (t) objectRef.element;
                if (tVar != null) {
                    throw th2;
                }
                lifecycle.c(tVar);
                throw th2;
            }
        }
        Job job2 = (Job) objectRef2.element;
        if (job2 != null) {
            job2.f(null);
        }
        t tVar2 = (t) objectRef.element;
        if (tVar2 != null) {
            lifecycle.c(tVar2);
        }
        return Unit.a;
    }
}
