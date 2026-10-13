package y8;

import android.util.Pair;
import com.facebook.datasource.DataSource;
import com.facebook.datasource.DataSubscriber;
import ii.o;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public abstract class a implements DataSource {
    public Map a;

    /* renamed from: d, reason: collision with root package name */
    public Object f20670d = null;

    /* renamed from: e, reason: collision with root package name */
    public Throwable f20671e = null;

    /* renamed from: f, reason: collision with root package name */
    public float f20672f = 0.0f;

    /* renamed from: c, reason: collision with root package name */
    public boolean f20669c = false;

    /* renamed from: b, reason: collision with root package name */
    public int f20668b = 1;

    /* renamed from: g, reason: collision with root package name */
    public final ConcurrentLinkedQueue f20673g = new ConcurrentLinkedQueue();

    @Override // com.facebook.datasource.DataSource
    public synchronized boolean a() {
        return this.f20670d != null;
    }

    @Override // com.facebook.datasource.DataSource
    public final synchronized Throwable b() {
        return this.f20671e;
    }

    @Override // com.facebook.datasource.DataSource
    public final synchronized float c() {
        return this.f20672f;
    }

    @Override // com.facebook.datasource.DataSource
    public boolean close() {
        synchronized (this) {
            try {
                if (this.f20669c) {
                    return false;
                }
                this.f20669c = true;
                Object obj = this.f20670d;
                this.f20670d = null;
                if (obj != null) {
                    e(obj);
                }
                if (!isFinished()) {
                    g();
                }
                synchronized (this) {
                    this.f20673g.clear();
                }
                return true;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0050 A[RETURN] */
    @Override // com.facebook.datasource.DataSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(DataSubscriber dataSubscriber, Executor executor) {
        boolean z5;
        boolean z6;
        dataSubscriber.getClass();
        executor.getClass();
        synchronized (this) {
            try {
                if (this.f20669c) {
                    return;
                }
                if (this.f20668b == 1) {
                    this.f20673g.add(Pair.create(dataSubscriber, executor));
                }
                if (!a() && !isFinished() && !k()) {
                    z5 = false;
                    if (z5) {
                        return;
                    }
                    synchronized (this) {
                        z6 = this.f20668b == 3;
                    }
                    executor.execute(new jk.b(this, z6, dataSubscriber, k()));
                    return;
                }
                z5 = true;
                if (z5) {
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final synchronized boolean f() {
        return this.f20669c;
    }

    public final void g() {
        boolean z5;
        synchronized (this) {
            z5 = this.f20668b == 3;
        }
        boolean k = k();
        Iterator it = this.f20673g.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            ((Executor) pair.second).execute(new jk.b(this, z5, (DataSubscriber) pair.first, k));
        }
    }

    @Override // com.facebook.datasource.DataSource
    public final Map getExtras() {
        return this.a;
    }

    @Override // com.facebook.datasource.DataSource
    public synchronized Object getResult() {
        return this.f20670d;
    }

    public final boolean h(Throwable th2, Map map) {
        boolean z5;
        synchronized (this) {
            if (!this.f20669c) {
                z5 = true;
                if (this.f20668b == 1) {
                    this.f20668b = 3;
                    this.f20671e = th2;
                    this.a = map;
                }
            }
            z5 = false;
        }
        if (z5) {
            g();
        }
        return z5;
    }

    public final boolean i(float f2) {
        boolean z5;
        synchronized (this) {
            z5 = false;
            if (!this.f20669c && this.f20668b == 1) {
                if (f2 >= this.f20672f) {
                    this.f20672f = f2;
                    z5 = true;
                }
            }
        }
        if (z5) {
            Iterator it = this.f20673g.iterator();
            while (it.hasNext()) {
                Pair pair = (Pair) it.next();
                ((Executor) pair.second).execute(new o(this, (DataSubscriber) pair.first, 27, false));
            }
        }
        return z5;
    }

    @Override // com.facebook.datasource.DataSource
    public final synchronized boolean isFinished() {
        return this.f20668b != 1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0036, code lost:
    
        if (r1 == false) goto L31;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0038, code lost:
    
        g();
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x003b, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0033, code lost:
    
        if (r3 != null) goto L22;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:39:0x0019 -> B:29:0x003c). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean j(Object obj, boolean z5, Map map) {
        boolean z6;
        this.a = map;
        Object obj2 = null;
        try {
            synchronized (this) {
                try {
                    try {
                        if (!this.f20669c) {
                            z6 = true;
                            if (this.f20668b == 1) {
                                if (z5) {
                                    this.f20668b = 2;
                                    this.f20672f = 1.0f;
                                }
                                Object obj3 = this.f20670d;
                                if (obj3 != obj) {
                                    try {
                                        this.f20670d = obj;
                                        obj = obj3;
                                    } catch (Throwable th2) {
                                        th = th2;
                                        obj2 = obj3;
                                        throw th;
                                    }
                                } else {
                                    obj = null;
                                }
                            }
                        }
                        z6 = false;
                    } catch (Throwable th3) {
                        obj2 = obj;
                        th = th3;
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            }
        } finally {
            if (obj2 != null) {
                e(obj2);
            }
        }
    }

    public final synchronized boolean k() {
        boolean z5;
        if (f()) {
            z5 = isFinished() ? false : true;
        }
        return z5;
    }

    public void e(Object obj) {
    }
}
