package lc;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import bg.y0;
import hc.e0;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class b {
    public static final /* synthetic */ int a = 0;

    static {
        e0.a("goog.exo.database");
    }

    public static int a(SQLiteDatabase sQLiteDatabase, int i5, String str) {
        try {
            int i6 = d0.a;
            if (!(DatabaseUtils.queryNumEntries(sQLiteDatabase, "sqlite_master", "tbl_name = ?", new String[]{"ExoPlayerVersions"}) > 0)) {
                return -1;
            }
            Cursor query = sQLiteDatabase.query("ExoPlayerVersions", new String[]{"version"}, "feature = ? AND instance_uid = ?", new String[]{Integer.toString(i5), str}, null, null, null);
            try {
                if (query.getCount() == 0) {
                    query.close();
                    return -1;
                }
                query.moveToNext();
                int i10 = query.getInt(0);
                query.close();
                return i10;
            } finally {
            }
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    public static void b(SQLiteDatabase sQLiteDatabase, int i5, String str) {
        try {
            sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS ExoPlayerVersions (feature INTEGER NOT NULL,instance_uid TEXT NOT NULL,version INTEGER NOT NULL,PRIMARY KEY (feature, instance_uid))");
            ContentValues contentValues = new ContentValues();
            contentValues.put("feature", Integer.valueOf(i5));
            contentValues.put("instance_uid", str);
            contentValues.put("version", (Integer) 1);
            sQLiteDatabase.replaceOrThrow("ExoPlayerVersions", null, contentValues);
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }
}
