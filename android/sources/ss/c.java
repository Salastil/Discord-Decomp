package ss;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.logging.Logger;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import rd.u;
import sg.d;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: h, reason: collision with root package name */
    public static final c f18141h;

    /* renamed from: i, reason: collision with root package name */
    public static final Logger f18142i;
    public final u a;

    /* renamed from: b, reason: collision with root package name */
    public int f18143b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f18144c;

    /* renamed from: d, reason: collision with root package name */
    public long f18145d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f18146e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f18147f;

    /* renamed from: g, reason: collision with root package name */
    public final d f18148g;

    static {
        String name = Intrinsics.stringPlus(qs.b.f17056g, " TaskRunner");
        Intrinsics.checkNotNullParameter(name, "name");
        f18141h = new c(new u(new qs.a(name, true)));
        Logger logger = Logger.getLogger(c.class.getName());
        Intrinsics.checkNotNullExpressionValue(logger, "getLogger(TaskRunner::class.java.name)");
        f18142i = logger;
    }

    public c(u backend) {
        Intrinsics.checkNotNullParameter(backend, "backend");
        this.a = backend;
        this.f18143b = 10000;
        this.f18146e = new ArrayList();
        this.f18147f = new ArrayList();
        this.f18148g = new d(1, this);
    }

    public static final void a(c cVar, a aVar) {
        byte[] bArr = qs.b.a;
        Thread currentThread = Thread.currentThread();
        String name = currentThread.getName();
        currentThread.setName(aVar.a);
        try {
            long a = aVar.a();
            synchronized (cVar) {
                cVar.b(aVar, a);
                Unit unit = Unit.a;
            }
            currentThread.setName(name);
        } catch (Throwable th2) {
            synchronized (cVar) {
                cVar.b(aVar, -1L);
                Unit unit2 = Unit.a;
                currentThread.setName(name);
                throw th2;
            }
        }
    }

    public final void b(a aVar, long j) {
        byte[] bArr = qs.b.a;
        b bVar = aVar.f18134c;
        Intrinsics.checkNotNull(bVar);
        if (bVar.f18138d != aVar) {
            throw new IllegalStateException("Check failed.");
        }
        boolean z5 = bVar.f18140f;
        bVar.f18140f = false;
        bVar.f18138d = null;
        this.f18146e.remove(bVar);
        if (j != -1 && !z5 && !bVar.f18137c) {
            bVar.e(aVar, j, true);
        }
        if (bVar.f18139e.isEmpty()) {
            return;
        }
        this.f18147f.add(bVar);
    }

    /* JADX WARN: Code restructure failed: missing block: B:55:0x0098, code lost:
    
        return null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final a c() {
        boolean z5;
        byte[] bArr = qs.b.a;
        while (true) {
            ArrayList arrayList = this.f18147f;
            if (arrayList.isEmpty()) {
                break;
            }
            long nanoTime = System.nanoTime();
            Iterator it = arrayList.iterator();
            long j = LongCompanionObject.MAX_VALUE;
            a aVar = null;
            while (true) {
                if (!it.hasNext()) {
                    z5 = false;
                    break;
                }
                a aVar2 = (a) ((b) it.next()).f18139e.get(0);
                long max = Math.max(0L, aVar2.f18135d - nanoTime);
                if (max > 0) {
                    j = Math.min(max, j);
                } else {
                    if (aVar != null) {
                        z5 = true;
                        break;
                    }
                    aVar = aVar2;
                }
            }
            ArrayList arrayList2 = this.f18146e;
            if (aVar != null) {
                byte[] bArr2 = qs.b.a;
                aVar.f18135d = -1L;
                b bVar = aVar.f18134c;
                Intrinsics.checkNotNull(bVar);
                bVar.f18139e.remove(aVar);
                arrayList.remove(bVar);
                bVar.f18138d = aVar;
                arrayList2.add(bVar);
                if (z5 || (!this.f18144c && !arrayList.isEmpty())) {
                    d runnable = this.f18148g;
                    Intrinsics.checkNotNullParameter(runnable, "runnable");
                    ((ThreadPoolExecutor) this.a.f17275e).execute(runnable);
                }
                return aVar;
            }
            if (!this.f18144c) {
                this.f18144c = true;
                this.f18145d = nanoTime + j;
                try {
                    try {
                        Intrinsics.checkNotNullParameter(this, "taskRunner");
                        long j5 = j / 1000000;
                        long j7 = j - (1000000 * j5);
                        if (j5 > 0 || j > 0) {
                            wait(j5, (int) j7);
                        }
                    } catch (InterruptedException unused) {
                        int size = arrayList2.size() - 1;
                        if (size >= 0) {
                            while (true) {
                                int i5 = size - 1;
                                ((b) arrayList2.get(size)).b();
                                if (i5 < 0) {
                                    break;
                                }
                                size = i5;
                            }
                        }
                        int size2 = arrayList.size() - 1;
                        if (size2 >= 0) {
                            while (true) {
                                int i6 = size2 - 1;
                                b bVar2 = (b) arrayList.get(size2);
                                bVar2.b();
                                if (bVar2.f18139e.isEmpty()) {
                                    arrayList.remove(size2);
                                }
                                if (i6 < 0) {
                                    break;
                                }
                                size2 = i6;
                            }
                        }
                    }
                } finally {
                    this.f18144c = false;
                }
            } else if (j < this.f18145d - nanoTime) {
                Intrinsics.checkNotNullParameter(this, "taskRunner");
                notify();
            }
        }
    }

    public final void d(b taskQueue) {
        Intrinsics.checkNotNullParameter(taskQueue, "taskQueue");
        byte[] bArr = qs.b.a;
        if (taskQueue.f18138d == null) {
            boolean isEmpty = taskQueue.f18139e.isEmpty();
            ArrayList arrayList = this.f18147f;
            if (isEmpty) {
                arrayList.remove(taskQueue);
            } else {
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                if (!arrayList.contains(taskQueue)) {
                    arrayList.add(taskQueue);
                }
            }
        }
        if (this.f18144c) {
            Intrinsics.checkNotNullParameter(this, "taskRunner");
            notify();
        } else {
            d runnable = this.f18148g;
            Intrinsics.checkNotNullParameter(runnable, "runnable");
            ((ThreadPoolExecutor) this.a.f17275e).execute(runnable);
        }
    }

    public final b e() {
        int i5;
        synchronized (this) {
            i5 = this.f18143b;
            this.f18143b = i5 + 1;
        }
        return new b(this, Intrinsics.stringPlus("Q", Integer.valueOf(i5)));
    }
}
