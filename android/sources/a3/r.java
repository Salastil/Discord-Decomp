package a3;

import androidx.work.impl.WorkDatabase;
import fo.u;
import ip.o0;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class r {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f100b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f101c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f102d;

    public r(eq.g gVar, a4.i iVar, o0 o0Var) {
        this.f100b = gVar;
        this.f101c = iVar;
        this.f102d = o0Var;
    }

    public h3.j a() {
        ((WorkDatabase) this.f100b).a();
        return ((AtomicBoolean) this.f101c).compareAndSet(false, true) ? (h3.j) ((u) this.f102d).getValue() : b();
    }

    public h3.j b() {
        String sql = c();
        WorkDatabase workDatabase = (WorkDatabase) this.f100b;
        workDatabase.getClass();
        Intrinsics.checkNotNullParameter(sql, "sql");
        workDatabase.a();
        workDatabase.b();
        return workDatabase.h().D().g(sql);
    }

    public abstract String c();

    public abstract hq.c d();

    public void e(h3.j statement) {
        Intrinsics.checkNotNullParameter(statement, "statement");
        if (statement == ((h3.j) ((u) this.f102d).getValue())) {
            ((AtomicBoolean) this.f101c).set(false);
        }
    }

    public String toString() {
        switch (this.a) {
            case 1:
                return getClass().getSimpleName() + ": " + d();
            default:
                return super.toString();
        }
    }

    public r(WorkDatabase database) {
        Intrinsics.checkNotNullParameter(database, "database");
        this.f100b = database;
        this.f101c = new AtomicBoolean(false);
        this.f102d = fo.l.a(new q(0, this));
    }
}
