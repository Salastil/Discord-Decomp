package nr;

import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public abstract class a extends e1 implements Continuation, CoroutineScope {

    /* renamed from: i, reason: collision with root package name */
    public final CoroutineContext f15590i;

    public a(CoroutineContext coroutineContext, boolean z5) {
        super(z5);
        O((Job) coroutineContext.o(t.f15661e));
        this.f15590i = coroutineContext.r(this);
    }

    @Override // nr.e1
    public final String D() {
        return getClass().getSimpleName().concat(" was cancelled");
    }

    @Override // nr.e1
    public final void N(ai.k kVar) {
        x.q(kVar, this.f15590i);
    }

    @Override // nr.e1
    public final void a0(Object obj) {
        if (!(obj instanceof q)) {
            m0(obj);
        } else {
            q qVar = (q) obj;
            l0(qVar.a, q.f15651b.get(qVar) == 1);
        }
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f15590i;
    }

    @Override // kotlinx.coroutines.CoroutineScope
    public final CoroutineContext getCoroutineContext() {
        return this.f15590i;
    }

    public final void n0(w wVar, a aVar, Function2 function2) {
        int ordinal = wVar.ordinal();
        if (ordinal == 0) {
            ks.n.y(function2, aVar, this);
            return;
        }
        if (ordinal != 1) {
            if (ordinal == 2) {
                Intrinsics.checkNotNullParameter(function2, "<this>");
                Intrinsics.checkNotNullParameter(this, "completion");
                Continuation b10 = ko.f.b(ko.f.a(aVar, this, function2));
                fo.q qVar = Result.f13476e;
                b10.resumeWith(Unit.a);
                return;
            }
            if (ordinal != 3) {
                throw new fo.n();
            }
            Intrinsics.checkNotNullParameter(this, "completion");
            try {
                CoroutineContext coroutineContext = this.f15590i;
                Object c6 = sr.y.c(coroutineContext, null);
                try {
                    Intrinsics.checkNotNullParameter(this, "frame");
                    Object c8 = !(function2 instanceof lo.a) ? ko.f.c(function2, aVar, this) : ((Function2) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function2, 2)).invoke(aVar, this);
                    sr.y.a(coroutineContext, c6);
                    if (c8 != ko.a.f13464d) {
                        fo.q qVar2 = Result.f13476e;
                        resumeWith(c8);
                    }
                } catch (Throwable th2) {
                    sr.y.a(coroutineContext, c6);
                    throw th2;
                }
            } catch (Throwable th3) {
                th = th3;
                if (th instanceof c0) {
                    th = ((c0) th).f15600d;
                }
                fo.q qVar3 = Result.f13476e;
                resumeWith(ki.b.i(th));
            }
        }
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        Throwable a = Result.a(obj);
        if (a != null) {
            obj = new q(a, false);
        }
        Object T = T(obj);
        if (T == x.f15679e) {
            return;
        }
        v(T);
    }

    public void m0(Object obj) {
    }

    public void l0(Throwable th2, boolean z5) {
    }
}
