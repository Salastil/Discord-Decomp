package dc;

import android.content.ContentValues;
import android.database.sqlite.SQLiteDatabase;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements f, ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ long f7473d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f7474e;

    public /* synthetic */ e(long j, wb.i iVar) {
        this.f7473d = j;
        this.f7474e = iVar;
    }

    @Override // dc.f
    public Object apply(Object obj) {
        wb.i iVar = (wb.i) this.f7474e;
        SQLiteDatabase sQLiteDatabase = (SQLiteDatabase) obj;
        ContentValues contentValues = new ContentValues();
        contentValues.put("next_request_ms", Long.valueOf(this.f7473d));
        String str = iVar.a;
        tb.d dVar = iVar.f19705c;
        if (sQLiteDatabase.update("transport_contexts", contentValues, "backend_name = ? and priority = ?", new String[]{str, String.valueOf(gc.a.a(dVar))}) < 1) {
            contentValues.put("backend_name", str);
            contentValues.put("priority", Integer.valueOf(gc.a.a(dVar)));
            sQLiteDatabase.insert("transport_contexts", null, contentValues);
        }
        return null;
    }

    @Override // ke.j
    public void invoke(Object obj) {
        ((ic.b) obj).onAudioPositionAdvancing((AnalyticsListener$EventTime) this.f7474e, this.f7473d);
    }

    public /* synthetic */ e(AnalyticsListener$EventTime analyticsListener$EventTime, long j) {
        this.f7474e = analyticsListener$EventTime;
        this.f7473d = j;
    }
}
