package cc;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class j implements ec.b, dc.f, ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ long f3394d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3395e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3396i;

    public /* synthetic */ j(long j, Object obj, Object obj2) {
        this.f3395e = obj;
        this.f3396i = obj2;
        this.f3394d = j;
    }

    @Override // dc.f
    public Object apply(Object obj) {
        String str = (String) this.f3395e;
        SQLiteDatabase sQLiteDatabase = (SQLiteDatabase) obj;
        int i5 = ((zb.c) this.f3396i).f21144d;
        Cursor rawQuery = sQLiteDatabase.rawQuery("SELECT 1 FROM log_event_dropped WHERE log_source = ? AND reason = ?", new String[]{str, Integer.toString(i5)});
        try {
            boolean z5 = rawQuery.getCount() > 0;
            rawQuery.close();
            long j = this.f3394d;
            if (z5) {
                sQLiteDatabase.execSQL(a3.e.g(j, "UPDATE log_event_dropped SET events_dropped_count = events_dropped_count + ", " WHERE log_source = ? AND reason = ?"), new String[]{str, Integer.toString(i5)});
                return null;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("log_source", str);
            contentValues.put("reason", Integer.valueOf(i5));
            contentValues.put("events_dropped_count", Long.valueOf(j));
            sQLiteDatabase.insert("log_event_dropped", null, contentValues);
            return null;
        } catch (Throwable th2) {
            rawQuery.close();
            throw th2;
        }
    }

    @Override // ec.b
    public Object execute() {
        k kVar = (k) this.f3395e;
        wb.i iVar = (wb.i) this.f3396i;
        dc.d dVar = (dc.d) kVar.f3400v;
        long e9 = ((fc.a) kVar.E).e() + this.f3394d;
        dc.h hVar = (dc.h) dVar;
        hVar.getClass();
        hVar.g(new dc.e(e9, iVar));
        return null;
    }

    @Override // ke.j
    public void invoke(Object obj) {
        ((ic.b) obj).onRenderedFirstFrame((AnalyticsListener$EventTime) this.f3395e, this.f3396i, this.f3394d);
    }
}
