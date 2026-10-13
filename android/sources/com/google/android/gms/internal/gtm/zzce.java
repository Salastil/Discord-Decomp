package com.google.android.gms.internal.gtm;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.text.TextUtils;
import bf.t;
import com.google.android.gms.common.util.VisibleForTesting;
import gf.b;
import gf.d;
import java.io.Closeable;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import qe.i;

/* loaded from: classes3.dex */
final class zzce extends zzbs implements Closeable {
    private static final String zza = "CREATE TABLE IF NOT EXISTS hits2 ( 'hit_id' INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, 'hit_time' INTEGER NOT NULL, 'hit_url' TEXT NOT NULL, 'hit_string' TEXT NOT NULL, 'hit_app_id' INTEGER);";
    private static final String zzb = "SELECT MAX(hit_time) FROM hits2 WHERE 1;";
    private final zzcd zzc;
    private final zzfo zzd;
    private final zzfo zze;

    public zzce(zzbv zzbvVar) {
        super(zzbvVar);
        this.zzd = new zzfo(zzC());
        this.zze = new zzfo(zzC());
        this.zzc = new zzcd(this, zzbvVar.zza(), zzae());
    }

    private final long zzad(String str, String[] strArr, long j) {
        Cursor cursor = null;
        try {
            try {
                cursor = zzf().rawQuery(str, strArr);
                if (!cursor.moveToFirst()) {
                    cursor.close();
                    return 0L;
                }
                long j5 = cursor.getLong(0);
                cursor.close();
                return j5;
            } catch (SQLiteException e9) {
                zzL("Database error", str, e9);
                throw e9;
            }
        } catch (Throwable th2) {
            if (cursor != null) {
                cursor.close();
            }
            throw th2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String zzae() {
        zzw();
        zzw();
        return "google_analytics_v4.db";
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        try {
            this.zzc.close();
        } catch (SQLiteException e9) {
            zzK("Sql error closing database", e9);
        } catch (IllegalStateException e10) {
            zzK("Error closing database", e10);
        }
    }

    public final void zzZ(List<Long> list) {
        t.g(list);
        i.a();
        zzW();
        if (list.isEmpty()) {
            return;
        }
        StringBuilder sb2 = new StringBuilder("hit_id in (");
        for (int i5 = 0; i5 < list.size(); i5++) {
            Long l6 = list.get(i5);
            if (l6 == null || l6.longValue() == 0) {
                throw new SQLiteException("Invalid hit id");
            }
            if (i5 > 0) {
                sb2.append(",");
            }
            sb2.append(l6);
        }
        sb2.append(")");
        String sb3 = sb2.toString();
        try {
            SQLiteDatabase zzf = zzf();
            zzP("Deleting dispatched hits. count", Integer.valueOf(list.size()));
            int delete = zzf.delete("hits2", sb3, null);
            if (delete != list.size()) {
                zzU("Deleted fewer hits then expected", Integer.valueOf(list.size()), Integer.valueOf(delete), sb3);
            }
        } catch (SQLiteException e9) {
            zzK("Error deleting hits", e9);
            throw e9;
        }
    }

    public final int zza() {
        i.a();
        zzW();
        if (!this.zzd.zzc(86400000L)) {
            return 0;
        }
        this.zzd.zzb();
        zzO("Deleting stale hits (if any)");
        SQLiteDatabase zzf = zzf();
        ((b) zzC()).getClass();
        int delete = zzf.delete("hits2", "hit_time < ?", new String[]{Long.toString(System.currentTimeMillis() - 2592000000L)});
        zzP("Deleted stale hits, count", Integer.valueOf(delete));
        return delete;
    }

    public final void zzaa() {
        zzW();
        zzf().endTransaction();
    }

    public final void zzab() {
        zzW();
        zzf().setTransactionSuccessful();
    }

    public final boolean zzac() {
        return zzb() == 0;
    }

    public final long zzb() {
        i.a();
        zzW();
        Cursor cursor = null;
        try {
            try {
                Cursor rawQuery = zzf().rawQuery("SELECT COUNT(*) FROM hits2", null);
                if (!rawQuery.moveToFirst()) {
                    throw new SQLiteException("Database returned empty set");
                }
                long j = rawQuery.getLong(0);
                rawQuery.close();
                return j;
            } catch (SQLiteException e9) {
                zzL("Database error", "SELECT COUNT(*) FROM hits2", e9);
                throw e9;
            }
        } catch (Throwable th2) {
            if (0 != 0) {
                cursor.close();
            }
            throw th2;
        }
    }

    public final long zzc() {
        i.a();
        zzW();
        return zzad(zzb, null, 0L);
    }

    @Override // com.google.android.gms.internal.gtm.zzbs
    public final void zzd() {
    }

    @VisibleForTesting
    public final SQLiteDatabase zzf() {
        try {
            return this.zzc.getWritableDatabase();
        } catch (SQLiteException e9) {
            zzS("Error opening database", e9);
            throw e9;
        }
    }

    public final List<zzex> zzj(long j) {
        Cursor query;
        Map<String, String> map;
        boolean z5;
        t.b(j >= 0);
        i.a();
        zzW();
        Cursor cursor = null;
        try {
            try {
                query = zzf().query("hits2", new String[]{"hit_id", "hit_time", "hit_string", "hit_url", "hit_app_id"}, null, null, null, null, "hit_id ASC", Long.toString(j));
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (SQLiteException e9) {
            e = e9;
        }
        try {
            ArrayList arrayList = new ArrayList();
            if (query.moveToFirst()) {
                do {
                    long j5 = query.getLong(0);
                    long j7 = query.getLong(1);
                    String string = query.getString(2);
                    String string2 = query.getString(3);
                    int i5 = query.getInt(4);
                    Map<String, String> zzk = zzk(string);
                    if (!TextUtils.isEmpty(string2) && string2.startsWith("http:")) {
                        map = zzk;
                        z5 = false;
                        arrayList.add(new zzex(this, map, j7, z5, j5, i5, null));
                    }
                    map = zzk;
                    z5 = true;
                    arrayList.add(new zzex(this, map, j7, z5, j5, i5, null));
                } while (query.moveToNext());
            }
            query.close();
            return arrayList;
        } catch (SQLiteException e10) {
            e = e10;
            zzK("Error loading hits from the database", e);
            throw e;
        } catch (Throwable th3) {
            th = th3;
            cursor = query;
            if (cursor != null) {
                cursor.close();
            }
            throw th;
        }
    }

    @VisibleForTesting
    public final Map<String, String> zzk(String str) {
        if (TextUtils.isEmpty(str)) {
            return new HashMap(0);
        }
        try {
            if (!str.startsWith("?")) {
                str = str.length() != 0 ? "?".concat(str) : new String("?");
            }
            return d.a(new URI(str));
        } catch (URISyntaxException e9) {
            zzK("Error parsing hit parameters", e9);
            return new HashMap(0);
        }
    }

    public final void zzm() {
        zzW();
        zzf().beginTransaction();
    }

    public final void zzn(long j) {
        i.a();
        zzW();
        ArrayList arrayList = new ArrayList(1);
        Long valueOf = Long.valueOf(j);
        arrayList.add(valueOf);
        zzP("Deleting hit, id", valueOf);
        zzZ(arrayList);
    }
}
