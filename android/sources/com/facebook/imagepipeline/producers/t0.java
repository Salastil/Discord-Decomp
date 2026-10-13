package com.facebook.imagepipeline.producers;

import android.util.Pair;
import com.facebook.imagepipeline.common.Priority;
import java.io.Closeable;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArraySet;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t0 {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final CopyOnWriteArraySet f4809b = new CopyOnWriteArraySet();

    /* renamed from: c, reason: collision with root package name */
    public Closeable f4810c;

    /* renamed from: d, reason: collision with root package name */
    public float f4811d;

    /* renamed from: e, reason: collision with root package name */
    public int f4812e;

    /* renamed from: f, reason: collision with root package name */
    public e f4813f;

    /* renamed from: g, reason: collision with root package name */
    public s0 f4814g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ u0 f4815h;

    public t0(u0 u0Var, Object obj) {
        this.f4815h = u0Var;
        this.a = obj;
    }

    public static void b(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException e9) {
                throw new RuntimeException(e9);
            }
        }
    }

    public final boolean a(Consumer consumer, ProducerContext producerContext) {
        t0 t0Var;
        Pair create = Pair.create(consumer, producerContext);
        synchronized (this) {
            try {
                u0 u0Var = this.f4815h;
                Object obj = this.a;
                synchronized (u0Var) {
                    t0Var = (t0) u0Var.a.get(obj);
                }
                if (t0Var != this) {
                    return false;
                }
                this.f4809b.add(create);
                ArrayList k = k();
                ArrayList l6 = l();
                ArrayList j = j();
                Closeable closeable = this.f4810c;
                float f2 = this.f4811d;
                int i5 = this.f4812e;
                e.b(k);
                e.d(l6);
                e.a(j);
                synchronized (create) {
                    try {
                        synchronized (this) {
                            if (closeable != this.f4810c) {
                                closeable = null;
                            } else if (closeable != null) {
                                closeable = this.f4815h.c(closeable);
                            }
                        }
                        if (closeable != null) {
                            if (f2 > 0.0f) {
                                consumer.c(f2);
                            }
                            consumer.b(i5, closeable);
                            b(closeable);
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    } finally {
                    }
                }
                producerContext.i(new r0(0, this, create));
                return true;
            } finally {
            }
        }
    }

    public final synchronized boolean c() {
        Iterator it = this.f4809b.iterator();
        while (it.hasNext()) {
            if (((ProducerContext) ((Pair) it.next()).second).P()) {
                return true;
            }
        }
        return false;
    }

    public final synchronized boolean d() {
        Iterator it = this.f4809b.iterator();
        while (it.hasNext()) {
            if (!((ProducerContext) ((Pair) it.next()).second).r()) {
                return false;
            }
        }
        return true;
    }

    public final synchronized Priority e() {
        Priority priority1;
        priority1 = Priority.f4580e;
        Iterator it = this.f4809b.iterator();
        while (it.hasNext()) {
            Priority priority2 = ((ProducerContext) ((Pair) it.next()).second).f();
            Priority.f4579d.getClass();
            Intrinsics.checkNotNullParameter(priority1, "priority1");
            Intrinsics.checkNotNullParameter(priority2, "priority2");
            if (priority1.ordinal() <= priority2.ordinal()) {
                priority1 = priority2;
            }
        }
        return priority1;
    }

    public final void f(s0 s0Var, Throwable th2) {
        synchronized (this) {
            try {
                if (this.f4814g != s0Var) {
                    return;
                }
                Iterator it = this.f4809b.iterator();
                this.f4809b.clear();
                this.f4815h.e(this.a, this);
                b(this.f4810c);
                this.f4810c = null;
                while (it.hasNext()) {
                    Pair pair = (Pair) it.next();
                    synchronized (pair) {
                        try {
                            ((ProducerContext) pair.second).C().k((ProducerContext) pair.second, this.f4815h.f4819c, th2, null);
                            e eVar = this.f4813f;
                            if (eVar != null) {
                                ((ProducerContext) pair.second).q(eVar.f4721x);
                            }
                            ((Consumer) pair.first).onFailure(th2);
                        } finally {
                        }
                    }
                }
            } finally {
            }
        }
    }

    public final void g(s0 s0Var, Closeable closeable, int i5) {
        synchronized (this) {
            try {
                if (this.f4814g != s0Var) {
                    return;
                }
                b(this.f4810c);
                this.f4810c = null;
                Iterator it = this.f4809b.iterator();
                int size = this.f4809b.size();
                if (c.e(i5)) {
                    this.f4810c = this.f4815h.c(closeable);
                    this.f4812e = i5;
                } else {
                    this.f4809b.clear();
                    this.f4815h.e(this.a, this);
                }
                while (it.hasNext()) {
                    Pair pair = (Pair) it.next();
                    synchronized (pair) {
                        try {
                            if (c.d(i5)) {
                                ((ProducerContext) pair.second).C().i((ProducerContext) pair.second, this.f4815h.f4819c, null);
                                e eVar = this.f4813f;
                                if (eVar != null) {
                                    ((ProducerContext) pair.second).q(eVar.f4721x);
                                }
                                ((ProducerContext) pair.second).A(Integer.valueOf(size), this.f4815h.f4820d);
                            }
                            ((Consumer) pair.first).b(i5, closeable);
                        } finally {
                        }
                    }
                }
            } finally {
            }
        }
    }

    public final void h(s0 s0Var, float f2) {
        synchronized (this) {
            try {
                if (this.f4814g != s0Var) {
                    return;
                }
                this.f4811d = f2;
                Iterator it = this.f4809b.iterator();
                while (it.hasNext()) {
                    Pair pair = (Pair) it.next();
                    synchronized (pair) {
                        ((Consumer) pair.first).c(f2);
                    }
                }
            } finally {
            }
        }
    }

    public final void i(int i5) {
        synchronized (this) {
            try {
                boolean z5 = false;
                if (!(this.f4813f == null)) {
                    throw new IllegalArgumentException();
                }
                if (!(this.f4814g == null)) {
                    throw new IllegalArgumentException();
                }
                if (this.f4809b.isEmpty()) {
                    this.f4815h.e(this.a, this);
                    return;
                }
                ProducerContext producerContext = (ProducerContext) ((Pair) this.f4809b.iterator().next()).second;
                e eVar = new e(producerContext.g(), producerContext.getId(), null, producerContext.C(), producerContext.c(), producerContext.Q(), d(), c(), e(), producerContext.l());
                this.f4813f = eVar;
                eVar.q(producerContext.getExtras());
                if (i5 == 0) {
                    throw null;
                }
                if (i5 != 3) {
                    e eVar2 = this.f4813f;
                    int b10 = f0.e.b(i5);
                    if (b10 == 0) {
                        z5 = true;
                    } else if (b10 != 1) {
                        if (b10 == 2) {
                            throw new IllegalStateException("No boolean equivalent for UNSET");
                        }
                        throw new IllegalStateException("Unrecognized TriState value: ".concat(i5 != 1 ? i5 != 2 ? i5 != 3 ? "null" : "UNSET" : "NO" : "YES"));
                    }
                    eVar2.A(Boolean.valueOf(z5), "started_as_prefetch");
                }
                s0 s0Var = new s0(0, this);
                this.f4814g = s0Var;
                this.f4815h.f4818b.b(s0Var, this.f4813f);
            } finally {
            }
        }
    }

    public final synchronized ArrayList j() {
        e eVar = this.f4813f;
        ArrayList arrayList = null;
        if (eVar == null) {
            return null;
        }
        boolean c6 = c();
        synchronized (eVar) {
            if (c6 != eVar.F) {
                eVar.F = c6;
                arrayList = new ArrayList(eVar.H);
            }
        }
        return arrayList;
    }

    public final synchronized ArrayList k() {
        e eVar = this.f4813f;
        ArrayList arrayList = null;
        if (eVar == null) {
            return null;
        }
        boolean d6 = d();
        synchronized (eVar) {
            if (d6 != eVar.f4722y) {
                eVar.f4722y = d6;
                arrayList = new ArrayList(eVar.H);
            }
        }
        return arrayList;
    }

    public final synchronized ArrayList l() {
        ArrayList arrayList;
        e eVar = this.f4813f;
        if (eVar == null) {
            return null;
        }
        Priority e9 = e();
        synchronized (eVar) {
            if (e9 == eVar.E) {
                arrayList = null;
            } else {
                eVar.E = e9;
                arrayList = new ArrayList(eVar.H);
            }
        }
        return arrayList;
    }
}
