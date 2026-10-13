package androidx.work.impl;

import a3.b;
import a3.i;
import android.database.Cursor;
import android.os.Looper;
import e4.e;
import e4.l;
import e4.m;
import e4.p;
import e4.r;
import h3.c;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.Callable;
import java.util.concurrent.Executor;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.collections.o0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

@Metadata(d1 = {"\u0000\b\n\u0002\u0018\u0002\n\u0002\b\u0003\b'\u0018\u0000B\u0007¢\u0006\u0004\b\u0001\u0010\u0002¨\u0006\u0003"}, d2 = {"Landroidx/work/impl/WorkDatabase;", "<init>", "()V", "work-runtime_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public abstract class WorkDatabase {
    public volatile c a;

    /* renamed from: b, reason: collision with root package name */
    public Executor f2569b;

    /* renamed from: c, reason: collision with root package name */
    public g3.c f2570c;

    /* renamed from: e, reason: collision with root package name */
    public boolean f2572e;

    /* renamed from: f, reason: collision with root package name */
    public List f2573f;
    public final LinkedHashMap j;

    /* renamed from: d, reason: collision with root package name */
    public final i f2571d = d();

    /* renamed from: g, reason: collision with root package name */
    public final LinkedHashMap f2574g = new LinkedHashMap();

    /* renamed from: h, reason: collision with root package name */
    public final ReentrantReadWriteLock f2575h = new ReentrantReadWriteLock();

    /* renamed from: i, reason: collision with root package name */
    public final ThreadLocal f2576i = new ThreadLocal();

    public WorkDatabase() {
        Intrinsics.checkNotNullExpressionValue(Collections.synchronizedMap(new LinkedHashMap()), "synchronizedMap(mutableMapOf())");
        this.j = new LinkedHashMap();
    }

    public static Object q(Class cls, g3.c cVar) {
        if (cls.isInstance(cVar)) {
            return cVar;
        }
        if (cVar instanceof a3.c) {
            return q(cls, ((a3.c) cVar).getDelegate());
        }
        return null;
    }

    public final void a() {
        if (!this.f2572e && Looper.getMainLooper().getThread() == Thread.currentThread()) {
            throw new IllegalStateException("Cannot access database on the main thread since it may potentially lock the UI for a long period of time.");
        }
    }

    public final void b() {
        if (!h().D().q() && this.f2576i.get() != null) {
            throw new IllegalStateException("Cannot access database on a different coroutine context inherited from a suspending transaction.");
        }
    }

    public final void c() {
        a();
        a();
        c D = h().D();
        this.f2571d.c(D);
        if (D.r()) {
            D.f();
        } else {
            D.c();
        }
    }

    public abstract i d();

    public abstract g3.c e(b bVar);

    public abstract e4.c f();

    public List g(Map autoMigrationSpecs) {
        Intrinsics.checkNotNullParameter(autoMigrationSpecs, "autoMigrationSpecs");
        return m0.f13512d;
    }

    public final g3.c h() {
        g3.c cVar = this.f2570c;
        if (cVar != null) {
            return cVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("internalOpenHelper");
        return null;
    }

    public Set i() {
        return o0.f13515d;
    }

    public Map j() {
        return v0.d();
    }

    public final void k() {
        h().D().i();
        if (h().D().q()) {
            return;
        }
        i iVar = this.f2571d;
        if (iVar.f65e.compareAndSet(false, true)) {
            Executor executor = iVar.a.f2569b;
            if (executor == null) {
                Intrinsics.throwUninitializedPropertyAccessException("internalQueryExecutor");
                executor = null;
            }
            executor.execute(iVar.f70l);
        }
    }

    public abstract e l();

    public final Cursor m(g3.e query) {
        Intrinsics.checkNotNullParameter(query, "query");
        a();
        b();
        return h().D().t(query);
    }

    public final Object n(Callable body) {
        Intrinsics.checkNotNullParameter(body, "body");
        c();
        try {
            Object call = body.call();
            o();
            return call;
        } finally {
            k();
        }
    }

    public final void o() {
        h().D().A();
    }

    public abstract e4.i p();

    public abstract l r();

    public abstract m s();

    public abstract p t();

    public abstract r u();
}
