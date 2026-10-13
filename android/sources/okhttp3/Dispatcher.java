package okhttp3;

import java.io.InterruptedIOException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import ts.f;
import ts.h;

/* loaded from: classes3.dex */
public final class Dispatcher {

    /* renamed from: c, reason: collision with root package name */
    public ThreadPoolExecutor f16027c;
    public int a = 64;

    /* renamed from: b, reason: collision with root package name */
    public int f16026b = 5;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayDeque f16028d = new ArrayDeque();

    /* renamed from: e, reason: collision with root package name */
    public final ArrayDeque f16029e = new ArrayDeque();

    /* renamed from: f, reason: collision with root package name */
    public final ArrayDeque f16030f = new ArrayDeque();

    public final synchronized void a() {
        try {
            Iterator it = this.f16028d.iterator();
            while (it.hasNext()) {
                ((f) it.next()).f18725i.cancel();
            }
            Iterator it2 = this.f16029e.iterator();
            while (it2.hasNext()) {
                ((f) it2.next()).f18725i.cancel();
            }
            Iterator it3 = this.f16030f.iterator();
            while (it3.hasNext()) {
                ((h) it3.next()).cancel();
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized ExecutorService b() {
        ThreadPoolExecutor threadPoolExecutor;
        try {
            if (this.f16027c == null) {
                TimeUnit timeUnit = TimeUnit.SECONDS;
                SynchronousQueue synchronousQueue = new SynchronousQueue();
                String name = Intrinsics.stringPlus(qs.b.f17056g, " Dispatcher");
                Intrinsics.checkNotNullParameter(name, "name");
                this.f16027c = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, timeUnit, synchronousQueue, new qs.a(name, false));
            }
            threadPoolExecutor = this.f16027c;
            Intrinsics.checkNotNull(threadPoolExecutor);
        } catch (Throwable th2) {
            throw th2;
        }
        return threadPoolExecutor;
    }

    public final void c(ArrayDeque arrayDeque, Object obj) {
        synchronized (this) {
            if (!arrayDeque.remove(obj)) {
                throw new AssertionError("Call wasn't in-flight!");
            }
            synchronized (this) {
            }
            e();
        }
        Unit unit = Unit.a;
        e();
    }

    public final void d(f call) {
        Intrinsics.checkNotNullParameter(call, "call");
        call.f18724e.decrementAndGet();
        c(this.f16029e, call);
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0036, code lost:
    
        if (r3 < r4) goto L62;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0039, code lost:
    
        r1.remove();
        r2.f18724e.incrementAndGet();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, "asyncCall");
        r0.add(r2);
        r8.f16029e.add(r2);
     */
    /* JADX WARN: Removed duplicated region for block: B:41:0x006d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e() {
        int size;
        int i5;
        byte[] bArr = qs.b.a;
        ArrayList arrayList = new ArrayList();
        synchronized (this) {
            Iterator it = this.f16028d.iterator();
            Intrinsics.checkNotNullExpressionValue(it, "readyAsyncCalls.iterator()");
            while (it.hasNext()) {
                f asyncCall = (f) it.next();
                int size2 = this.f16029e.size();
                synchronized (this) {
                    int i6 = this.a;
                    if (size2 >= i6) {
                        break;
                    }
                    int i10 = asyncCall.f18724e.get();
                    synchronized (this) {
                        int i11 = this.f16026b;
                    }
                }
                size = arrayList.size();
                i5 = 0;
                while (i5 < size) {
                    int i12 = i5 + 1;
                    f fVar = (f) arrayList.get(i5);
                    ExecutorService executorService = b();
                    fVar.getClass();
                    Intrinsics.checkNotNullParameter(executorService, "executorService");
                    h hVar = fVar.f18725i;
                    byte[] bArr2 = qs.b.a;
                    try {
                        try {
                            ((ThreadPoolExecutor) executorService).execute(fVar);
                        } catch (RejectedExecutionException e9) {
                            InterruptedIOException interruptedIOException = new InterruptedIOException("executor rejected");
                            interruptedIOException.initCause(e9);
                            hVar.j(interruptedIOException);
                            fVar.f18723d.onFailure(hVar, interruptedIOException);
                            hVar.f18726d.f16046d.d(fVar);
                        }
                        i5 = i12;
                    } catch (Throwable th2) {
                        hVar.f18726d.f16046d.d(fVar);
                        throw th2;
                    }
                }
            }
            synchronized (this) {
                this.f16029e.size();
                this.f16030f.size();
            }
        }
        Unit unit = Unit.a;
        size = arrayList.size();
        i5 = 0;
        while (i5 < size) {
        }
    }
}
