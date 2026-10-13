package ss;

import e4.f;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.RejectedExecutionException;
import java.util.logging.Level;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import rd.u;

/* loaded from: classes3.dex */
public final class b {
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final String f18136b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f18137c;

    /* renamed from: d, reason: collision with root package name */
    public a f18138d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f18139e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f18140f;

    public b(c taskRunner, String name) {
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = taskRunner;
        this.f18136b = name;
        this.f18139e = new ArrayList();
    }

    public final void a() {
        byte[] bArr = qs.b.a;
        synchronized (this.a) {
            try {
                if (b()) {
                    this.a.d(this);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final boolean b() {
        a aVar = this.f18138d;
        if (aVar != null) {
            Intrinsics.checkNotNull(aVar);
            if (aVar.f18133b) {
                this.f18140f = true;
            }
        }
        ArrayList arrayList = this.f18139e;
        int size = arrayList.size() - 1;
        boolean z5 = false;
        if (size < 0) {
            return false;
        }
        while (true) {
            int i5 = size - 1;
            if (((a) arrayList.get(size)).f18133b) {
                a aVar2 = (a) arrayList.get(size);
                if (c.f18142i.isLoggable(Level.FINE)) {
                    f.a(aVar2, this, "canceled");
                }
                arrayList.remove(size);
                z5 = true;
            }
            if (i5 < 0) {
                return z5;
            }
            size = i5;
        }
    }

    public final void c(a task, long j) {
        Intrinsics.checkNotNullParameter(task, "task");
        synchronized (this.a) {
            if (!this.f18137c) {
                if (e(task, j, false)) {
                    this.a.d(this);
                }
                Unit unit = Unit.a;
            } else if (task.f18133b) {
                if (c.f18142i.isLoggable(Level.FINE)) {
                    f.a(task, this, "schedule canceled (queue is shutdown)");
                }
            } else {
                if (c.f18142i.isLoggable(Level.FINE)) {
                    f.a(task, this, "schedule failed (queue is shutdown)");
                }
                throw new RejectedExecutionException();
            }
        }
    }

    public final boolean e(a task, long j, boolean z5) {
        Intrinsics.checkNotNullParameter(task, "task");
        task.getClass();
        Intrinsics.checkNotNullParameter(this, "queue");
        b bVar = task.f18134c;
        if (bVar != this) {
            if (bVar != null) {
                throw new IllegalStateException("task is in multiple queues");
            }
            task.f18134c = this;
        }
        u uVar = this.a.a;
        long nanoTime = System.nanoTime();
        long j5 = nanoTime + j;
        ArrayList arrayList = this.f18139e;
        int indexOf = arrayList.indexOf(task);
        if (indexOf != -1) {
            if (task.f18135d <= j5) {
                if (c.f18142i.isLoggable(Level.FINE)) {
                    f.a(task, this, "already scheduled");
                    return false;
                }
            }
            arrayList.remove(indexOf);
        }
        task.f18135d = j5;
        if (c.f18142i.isLoggable(Level.FINE)) {
            f.a(task, this, z5 ? Intrinsics.stringPlus("run again after ", f.p(j5 - nanoTime)) : Intrinsics.stringPlus("scheduled after ", f.p(j5 - nanoTime)));
        }
        Iterator it = arrayList.iterator();
        int i5 = 0;
        while (true) {
            if (!it.hasNext()) {
                i5 = -1;
                break;
            }
            if (((a) it.next()).f18135d - nanoTime > j) {
                break;
            }
            i5++;
        }
        if (i5 == -1) {
            i5 = arrayList.size();
        }
        arrayList.add(i5, task);
        return i5 == 0;
    }

    public final void f() {
        byte[] bArr = qs.b.a;
        synchronized (this.a) {
            try {
                this.f18137c = true;
                if (b()) {
                    this.a.d(this);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final String toString() {
        return this.f18136b;
    }
}
