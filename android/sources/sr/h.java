package sr;

import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.Job;
import nr.c0;
import nr.o1;
import nr.p0;
import nr.t1;

/* loaded from: classes3.dex */
public abstract class h {
    public static final a5.h a = new a5.h("UNDEFINED");

    /* renamed from: b, reason: collision with root package name */
    public static final a5.h f18109b = new a5.h("REUSABLE_CLAIMED");

    public static final void a(int i5) {
        if (i5 < 1) {
            throw new IllegalArgumentException(k0.d.i(i5, "Expected positive parallelism level, but got ").toString());
        }
    }

    public static final u b(Object obj) {
        if (obj == b.a) {
            throw new IllegalStateException("Does not contain segment");
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type S of kotlinx.coroutines.internal.SegmentOrClosed");
        return (u) obj;
    }

    public static final void c(Throwable th2, CoroutineContext coroutineContext) {
        Throwable runtimeException;
        Iterator it = e.a.iterator();
        while (it.hasNext()) {
            try {
                ((nr.u) it.next()).j0(th2, coroutineContext);
            } catch (Throwable th3) {
                if (th2 == th3) {
                    runtimeException = th2;
                } else {
                    runtimeException = new RuntimeException("Exception while trying to handle coroutine exception", th3);
                    fo.f.a(runtimeException, th2);
                }
                Thread currentThread = Thread.currentThread();
                currentThread.getUncaughtExceptionHandler().uncaughtException(currentThread, runtimeException);
            }
        }
        try {
            fo.f.a(th2, new f(coroutineContext));
        } catch (Throwable unused) {
        }
        Thread currentThread2 = Thread.currentThread();
        currentThread2.getUncaughtExceptionHandler().uncaughtException(currentThread2, th2);
    }

    public static final boolean d(Object obj) {
        return obj == b.a;
    }

    public static final Object e(Object obj, Object obj2) {
        if (obj == null) {
            return obj2;
        }
        if (obj instanceof ArrayList) {
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type java.util.ArrayList<E of kotlinx.coroutines.internal.InlineList>");
            ((ArrayList) obj).add(obj2);
            return obj;
        }
        ArrayList arrayList = new ArrayList(4);
        arrayList.add(obj);
        arrayList.add(obj2);
        return arrayList;
    }

    public static final void f(Object obj, Continuation continuation) {
        if (!(continuation instanceof g)) {
            continuation.resumeWith(obj);
            return;
        }
        g gVar = (g) continuation;
        CoroutineDispatcher coroutineDispatcher = gVar.f18105v;
        lo.c cVar = gVar.f18106w;
        Throwable a10 = Result.a(obj);
        Object qVar = a10 == null ? obj : new nr.q(a10, false);
        if (h(coroutineDispatcher, cVar.getContext())) {
            gVar.f18107x = qVar;
            gVar.f15613i = 1;
            g(coroutineDispatcher, cVar.getContext(), gVar);
            return;
        }
        p0 a11 = o1.a();
        if (a11.f15647i >= 4294967296L) {
            gVar.f18107x = qVar;
            gVar.f15613i = 1;
            a11.q0(gVar);
            return;
        }
        a11.s0(true);
        try {
            Job job = (Job) cVar.getContext().o(nr.t.f15661e);
            if (job == null || job.c()) {
                Object obj2 = gVar.f18108y;
                CoroutineContext context = cVar.getContext();
                Object c6 = y.c(context, obj2);
                t1 c8 = c6 != y.a ? nr.r.c(cVar, context, c6) : null;
                try {
                    cVar.resumeWith(obj);
                    Unit unit = Unit.a;
                } finally {
                    if (c8 == null || c8.p0()) {
                        y.a(context, c6);
                    }
                }
            } else {
                gVar.resumeWith(ki.b.i(job.x()));
            }
            while (a11.u0()) {
            }
        } finally {
            try {
            } finally {
            }
        }
    }

    public static final void g(CoroutineDispatcher coroutineDispatcher, CoroutineContext coroutineContext, Runnable runnable) {
        try {
            coroutineDispatcher.l0(coroutineContext, runnable);
        } catch (Throwable th2) {
            throw new c0(th2, coroutineDispatcher, coroutineContext);
        }
    }

    public static final boolean h(CoroutineDispatcher coroutineDispatcher, CoroutineContext coroutineContext) {
        try {
            return coroutineDispatcher.n0(coroutineContext);
        } catch (Throwable th2) {
            throw new c0(th2, coroutineDispatcher, coroutineContext);
        }
    }

    public static final long i(long j, long j5, long j7, String str) {
        String str2;
        int i5 = w.a;
        try {
            str2 = System.getProperty(str);
        } catch (SecurityException unused) {
            str2 = null;
        }
        if (str2 == null) {
            return j;
        }
        Long a0 = StringsKt.a0(str2);
        if (a0 == null) {
            throw new IllegalStateException(("System property '" + str + "' has unrecognized value '" + str2 + '\'').toString());
        }
        long longValue = a0.longValue();
        if (j5 <= longValue && longValue <= j7) {
            return longValue;
        }
        throw new IllegalStateException(("System property '" + str + "' should be in range " + j5 + ".." + j7 + ", but is '" + longValue + '\'').toString());
    }

    public static int j(int i5, int i6, String str) {
        return (int) i(i5, 1, (i6 & 8) != 0 ? Integer.MAX_VALUE : 2097150, str);
    }
}
