package cc;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.facebook.react.runtime.p;
import java.util.concurrent.Callable;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements ec.b, oi.f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3386d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f3387e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3388i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3389v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3390w;

    public /* synthetic */ h(k kVar, Iterable iterable, wb.i iVar, long j) {
        this.f3386d = 0;
        this.f3388i = kVar;
        this.f3389v = iterable;
        this.f3390w = iVar;
        this.f3387e = j;
    }

    @Override // oi.f
    public ScheduledFuture a(u4.b bVar) {
        switch (this.f3386d) {
            case 1:
                oi.e eVar = (oi.e) this.f3388i;
                Runnable runnable = (Runnable) this.f3389v;
                return eVar.f15990e.schedule(new oi.d(eVar, runnable, bVar, 1), this.f3387e, (TimeUnit) this.f3390w);
            default:
                oi.e eVar2 = (oi.e) this.f3388i;
                Callable callable = (Callable) this.f3389v;
                return eVar2.f15990e.schedule(new p(eVar2, callable, bVar, 2), this.f3387e, (TimeUnit) this.f3390w);
        }
    }

    @Override // ec.b
    public Object execute() {
        k kVar = (k) this.f3388i;
        Iterable iterable = (Iterable) this.f3389v;
        wb.i iVar = (wb.i) this.f3390w;
        dc.h hVar = (dc.h) ((dc.d) kVar.f3400v);
        hVar.getClass();
        if (iterable.iterator().hasNext()) {
            String str = "UPDATE events SET num_attempts = num_attempts + 1 WHERE _id in " + dc.h.q(iterable);
            SQLiteDatabase c6 = hVar.c();
            c6.beginTransaction();
            try {
                c6.compileStatement(str).execute();
                Cursor rawQuery = c6.rawQuery("SELECT COUNT(*), transport_name FROM events WHERE num_attempts >= 16 GROUP BY transport_name", null);
                while (rawQuery.moveToNext()) {
                    try {
                        hVar.l(rawQuery.getInt(0), zb.c.MAX_RETRIES_REACHED, rawQuery.getString(1));
                    } catch (Throwable th2) {
                        rawQuery.close();
                        throw th2;
                    }
                }
                rawQuery.close();
                c6.compileStatement("DELETE FROM events WHERE num_attempts >= 16").execute();
                c6.setTransactionSuccessful();
            } finally {
                c6.endTransaction();
            }
        }
        hVar.g(new dc.e(((fc.a) kVar.E).e() + this.f3387e, iVar));
        return null;
    }

    public /* synthetic */ h(oi.e eVar, Object obj, long j, TimeUnit timeUnit, int i5) {
        this.f3386d = i5;
        this.f3388i = eVar;
        this.f3389v = obj;
        this.f3387e = j;
        this.f3390w = timeUnit;
    }
}
