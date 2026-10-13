package je;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.util.SparseArray;
import androidx.appcompat.widget.w;
import bg.y0;
import com.facebook.react.devsupport.StackTraceHelper;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.util.HashMap;
import java.util.Iterator;
import ke.d0;

/* loaded from: classes3.dex */
public final class l implements m {

    /* renamed from: e, reason: collision with root package name */
    public static final String[] f12745e = {StackTraceHelper.ID_KEY, "key", "metadata"};
    public final lc.a a;

    /* renamed from: b, reason: collision with root package name */
    public final SparseArray f12746b = new SparseArray();

    /* renamed from: c, reason: collision with root package name */
    public String f12747c;

    /* renamed from: d, reason: collision with root package name */
    public String f12748d;

    public l(lc.a aVar) {
        this.a = aVar;
    }

    @Override // je.m
    public final void a(HashMap hashMap) {
        try {
            SQLiteDatabase writableDatabase = this.a.getWritableDatabase();
            writableDatabase.beginTransactionNonExclusive();
            try {
                j(writableDatabase);
                Iterator it = hashMap.values().iterator();
                while (it.hasNext()) {
                    i(writableDatabase, (k) it.next());
                }
                writableDatabase.setTransactionSuccessful();
                this.f12746b.clear();
                writableDatabase.endTransaction();
            } catch (Throwable th2) {
                writableDatabase.endTransaction();
                throw th2;
            }
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    @Override // je.m
    public final void b(k kVar, boolean z5) {
        int i5 = kVar.a;
        SparseArray sparseArray = this.f12746b;
        if (z5) {
            sparseArray.delete(i5);
        } else {
            sparseArray.put(i5, null);
        }
    }

    @Override // je.m
    public final void c(k kVar) {
        this.f12746b.put(kVar.a, kVar);
    }

    @Override // je.m
    public final boolean d() {
        try {
            SQLiteDatabase readableDatabase = this.a.getReadableDatabase();
            String str = this.f12747c;
            str.getClass();
            return lc.b.a(readableDatabase, 1, str) != -1;
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    @Override // je.m
    public final void e(HashMap hashMap) {
        SparseArray sparseArray = this.f12746b;
        if (sparseArray.size() == 0) {
            return;
        }
        try {
            SQLiteDatabase writableDatabase = this.a.getWritableDatabase();
            writableDatabase.beginTransactionNonExclusive();
            for (int i5 = 0; i5 < sparseArray.size(); i5++) {
                try {
                    k kVar = (k) sparseArray.valueAt(i5);
                    if (kVar == null) {
                        int keyAt = sparseArray.keyAt(i5);
                        String str = this.f12748d;
                        str.getClass();
                        writableDatabase.delete(str, "id = ?", new String[]{Integer.toString(keyAt)});
                    } else {
                        i(writableDatabase, kVar);
                    }
                } catch (Throwable th2) {
                    writableDatabase.endTransaction();
                    throw th2;
                }
            }
            writableDatabase.setTransactionSuccessful();
            sparseArray.clear();
            writableDatabase.endTransaction();
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    @Override // je.m
    public final void f(long j) {
        String hexString = Long.toHexString(j);
        this.f12747c = hexString;
        this.f12748d = a3.e.k("ExoPlayerCacheIndex", hexString);
    }

    @Override // je.m
    public final void g(HashMap hashMap, SparseArray sparseArray) {
        lc.a aVar = this.a;
        ke.b.k(this.f12746b.size() == 0);
        try {
            SQLiteDatabase readableDatabase = aVar.getReadableDatabase();
            String str = this.f12747c;
            str.getClass();
            if (lc.b.a(readableDatabase, 1, str) != 1) {
                SQLiteDatabase writableDatabase = aVar.getWritableDatabase();
                writableDatabase.beginTransactionNonExclusive();
                try {
                    j(writableDatabase);
                    writableDatabase.setTransactionSuccessful();
                    writableDatabase.endTransaction();
                } catch (Throwable th2) {
                    writableDatabase.endTransaction();
                    throw th2;
                }
            }
            SQLiteDatabase readableDatabase2 = aVar.getReadableDatabase();
            String str2 = this.f12748d;
            str2.getClass();
            Cursor query = readableDatabase2.query(str2, f12745e, null, null, null, null, null);
            while (query.moveToNext()) {
                try {
                    int i5 = query.getInt(0);
                    String string = query.getString(1);
                    string.getClass();
                    hashMap.put(string, new k(i5, string, w.b(new DataInputStream(new ByteArrayInputStream(query.getBlob(2))))));
                    sparseArray.put(i5, string);
                } finally {
                }
            }
            query.close();
        } catch (SQLiteException e9) {
            hashMap.clear();
            sparseArray.clear();
            throw new y0(e9);
        }
    }

    @Override // je.m
    public final void h() {
        lc.a aVar = this.a;
        String str = this.f12747c;
        str.getClass();
        try {
            String concat = "ExoPlayerCacheIndex".concat(str);
            SQLiteDatabase writableDatabase = aVar.getWritableDatabase();
            writableDatabase.beginTransactionNonExclusive();
            try {
                int i5 = lc.b.a;
                try {
                    int i6 = d0.a;
                    if (DatabaseUtils.queryNumEntries(writableDatabase, "sqlite_master", "tbl_name = ?", new String[]{"ExoPlayerVersions"}) > 0) {
                        writableDatabase.delete("ExoPlayerVersions", "feature = ? AND instance_uid = ?", new String[]{Integer.toString(1), str});
                    }
                    writableDatabase.execSQL("DROP TABLE IF EXISTS " + concat);
                    writableDatabase.setTransactionSuccessful();
                } catch (SQLException e9) {
                    throw new y0(e9);
                }
            } finally {
                writableDatabase.endTransaction();
            }
        } catch (SQLException e10) {
            throw new y0(e10);
        }
    }

    public final void i(SQLiteDatabase sQLiteDatabase, k kVar) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        w.d(kVar.f12744e, new DataOutputStream(byteArrayOutputStream));
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        ContentValues contentValues = new ContentValues();
        contentValues.put(StackTraceHelper.ID_KEY, Integer.valueOf(kVar.a));
        contentValues.put("key", kVar.f12741b);
        contentValues.put("metadata", byteArray);
        String str = this.f12748d;
        str.getClass();
        sQLiteDatabase.replaceOrThrow(str, null, contentValues);
    }

    public final void j(SQLiteDatabase sQLiteDatabase) {
        String str = this.f12747c;
        str.getClass();
        lc.b.b(sQLiteDatabase, 1, str);
        String str2 = this.f12748d;
        str2.getClass();
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS ".concat(str2));
        sQLiteDatabase.execSQL("CREATE TABLE " + this.f12748d + " (id INTEGER PRIMARY KEY NOT NULL,key TEXT NOT NULL,metadata BLOB NOT NULL)");
    }
}
