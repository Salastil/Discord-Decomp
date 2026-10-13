package dc;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteDatabaseLockedException;
import android.os.SystemClock;
import android.util.Base64;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Objects;
import javax.inject.Provider;

/* loaded from: classes3.dex */
public final class h implements d, ec.c, c {

    /* renamed from: x, reason: collision with root package name */
    public static final tb.c f7476x = new tb.c("proto");

    /* renamed from: d, reason: collision with root package name */
    public final j f7477d;

    /* renamed from: e, reason: collision with root package name */
    public final fc.a f7478e;

    /* renamed from: i, reason: collision with root package name */
    public final fc.a f7479i;

    /* renamed from: v, reason: collision with root package name */
    public final a f7480v;

    /* renamed from: w, reason: collision with root package name */
    public final Provider f7481w;

    public h(fc.a aVar, fc.a aVar2, a aVar3, j jVar, Provider provider) {
        this.f7477d = jVar;
        this.f7478e = aVar;
        this.f7479i = aVar2;
        this.f7480v = aVar3;
        this.f7481w = provider;
    }

    public static Long f(SQLiteDatabase sQLiteDatabase, wb.i iVar) {
        StringBuilder sb2 = new StringBuilder("backend_name = ? and priority = ?");
        ArrayList arrayList = new ArrayList(Arrays.asList(iVar.a, String.valueOf(gc.a.a(iVar.f19705c))));
        byte[] bArr = iVar.f19704b;
        if (bArr != null) {
            sb2.append(" and extras = ?");
            arrayList.add(Base64.encodeToString(bArr, 0));
        } else {
            sb2.append(" and extras is null");
        }
        Cursor query = sQLiteDatabase.query("transport_contexts", new String[]{"_id"}, sb2.toString(), (String[]) arrayList.toArray(new String[0]), null, null, null);
        try {
            return !query.moveToNext() ? null : Long.valueOf(query.getLong(0));
        } finally {
            query.close();
        }
    }

    public static String q(Iterable iterable) {
        StringBuilder sb2 = new StringBuilder("(");
        Iterator it = iterable.iterator();
        while (it.hasNext()) {
            sb2.append(((b) it.next()).a);
            if (it.hasNext()) {
                sb2.append(',');
            }
        }
        sb2.append(')');
        return sb2.toString();
    }

    public static Object r(Cursor cursor, f fVar) {
        try {
            return fVar.apply(cursor);
        } finally {
            cursor.close();
        }
    }

    public final SQLiteDatabase c() {
        j jVar = this.f7477d;
        Objects.requireNonNull(jVar);
        fc.a aVar = this.f7479i;
        long e9 = aVar.e();
        while (true) {
            try {
                return jVar.getWritableDatabase();
            } catch (SQLiteDatabaseLockedException e10) {
                if (aVar.e() >= this.f7480v.f7468c + e9) {
                    throw new ec.a("Timed out while trying to open db.", e10);
                }
                SystemClock.sleep(50L);
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f7477d.close();
    }

    public final Object g(f fVar) {
        SQLiteDatabase c6 = c();
        c6.beginTransaction();
        try {
            Object apply = fVar.apply(c6);
            c6.setTransactionSuccessful();
            return apply;
        } finally {
            c6.endTransaction();
        }
    }

    public final ArrayList i(SQLiteDatabase sQLiteDatabase, wb.i iVar, int i5) {
        ArrayList arrayList = new ArrayList();
        Long f2 = f(sQLiteDatabase, iVar);
        if (f2 == null) {
            return arrayList;
        }
        r(sQLiteDatabase.query("events", new String[]{"_id", "transport_name", "timestamp_ms", "uptime_ms", "payload_encoding", "payload", "code", "inline"}, "context_id = ?", new String[]{f2.toString()}, null, null, null, String.valueOf(i5)), new bc.a(this, (Object) arrayList, iVar, 5));
        return arrayList;
    }

    public final void l(long j, zb.c cVar, String str) {
        g(new cc.j(j, str, cVar));
    }

    public final Object o(ec.b bVar) {
        SQLiteDatabase c6 = c();
        fc.a aVar = this.f7479i;
        long e9 = aVar.e();
        while (true) {
            try {
                c6.beginTransaction();
                try {
                    Object execute = bVar.execute();
                    c6.setTransactionSuccessful();
                    return execute;
                } finally {
                    c6.endTransaction();
                }
            } catch (SQLiteDatabaseLockedException e10) {
                if (aVar.e() >= this.f7480v.f7468c + e9) {
                    throw new ec.a("Timed out while trying to acquire the lock.", e10);
                }
                SystemClock.sleep(50L);
            }
        }
    }
}
