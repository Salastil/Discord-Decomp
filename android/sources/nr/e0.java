package nr;

import java.util.concurrent.CancellationException;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public abstract class e0 extends ur.i {

    /* renamed from: i, reason: collision with root package name */
    public int f15613i;

    public e0(int i5) {
        super(0L, false);
        this.f15613i = i5;
    }

    public abstract Continuation d();

    public Throwable e(Object obj) {
        q qVar = obj instanceof q ? (q) obj : null;
        if (qVar != null) {
            return qVar.a;
        }
        return null;
    }

    public final void g(Throwable th2) {
        x.q(new cp.u1("Fatal exception in coroutines machinery for " + this + ". Please read KDoc to 'handleFatalException' method and report this incident to maintainers", th2), d().getContext());
    }

    public abstract Object i();

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0042, code lost:
    
        r4 = (kotlinx.coroutines.Job) r5.o(nr.t.f15661e);
     */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        try {
            Continuation d6 = d();
            Intrinsics.checkNotNull(d6, "null cannot be cast to non-null type kotlinx.coroutines.internal.DispatchedContinuation<T of kotlinx.coroutines.DispatchedTask>");
            sr.g gVar = (sr.g) d6;
            lo.c cVar = gVar.f18106w;
            Object obj = gVar.f18108y;
            CoroutineContext context = cVar.getContext();
            Object c6 = sr.y.c(context, obj);
            Job job = null;
            t1 c8 = c6 != sr.y.a ? r.c(cVar, context, c6) : null;
            try {
                CoroutineContext context2 = cVar.getContext();
                Object i5 = i();
                Throwable e9 = e(i5);
                if (e9 == null) {
                    int i6 = this.f15613i;
                    boolean z5 = true;
                    if (i6 != 1 && i6 != 2) {
                        z5 = false;
                    }
                }
                if (job != null && !job.c()) {
                    CancellationException x5 = job.x();
                    b(x5);
                    fo.q qVar = Result.f13476e;
                    cVar.resumeWith(ki.b.i(x5));
                } else if (e9 != null) {
                    fo.q qVar2 = Result.f13476e;
                    cVar.resumeWith(ki.b.i(e9));
                } else {
                    fo.q qVar3 = Result.f13476e;
                    cVar.resumeWith(f(i5));
                }
                Unit unit = Unit.a;
                if (c8 == null || c8.p0()) {
                    sr.y.a(context, c6);
                }
            } catch (Throwable th2) {
                if (c8 == null || c8.p0()) {
                    sr.y.a(context, c6);
                }
                throw th2;
            }
        } catch (c0 e10) {
            x.q(e10.f15600d, d().getContext());
        } catch (Throwable th3) {
            g(th3);
        }
    }

    public void b(CancellationException cancellationException) {
    }

    public Object f(Object obj) {
        return obj;
    }
}
