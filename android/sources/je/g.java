package je;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import bg.y0;
import com.facebook.react.devsupport.StackTraceHelper;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f12732c = {StackTraceHelper.NAME_KEY, "length", "last_touch_timestamp"};
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public Serializable f12733b;

    public g() {
        this.a = new HashMap();
        this.f12733b = new ArrayList();
    }

    public void a(Object obj, String str) {
        HashMap hashMap = (HashMap) this.a;
        obj.getClass();
        hashMap.put(str, obj);
        ((ArrayList) this.f12733b).remove(str);
    }

    public HashMap b() {
        try {
            ((String) this.f12733b).getClass();
            Cursor query = ((lc.a) this.a).getReadableDatabase().query((String) this.f12733b, f12732c, null, null, null, null, null);
            try {
                HashMap hashMap = new HashMap(query.getCount());
                while (query.moveToNext()) {
                    String string = query.getString(0);
                    string.getClass();
                    hashMap.put(string, new f(query.getLong(1), query.getLong(2)));
                }
                query.close();
                return hashMap;
            } finally {
            }
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    public void c(long j) {
        lc.a aVar = (lc.a) this.a;
        try {
            String hexString = Long.toHexString(j);
            this.f12733b = "ExoPlayerCacheFileMetadata" + hexString;
            if (lc.b.a(aVar.getReadableDatabase(), 2, hexString) != 1) {
                SQLiteDatabase writableDatabase = aVar.getWritableDatabase();
                writableDatabase.beginTransactionNonExclusive();
                try {
                    lc.b.b(writableDatabase, 2, hexString);
                    writableDatabase.execSQL("DROP TABLE IF EXISTS " + ((String) this.f12733b));
                    writableDatabase.execSQL("CREATE TABLE " + ((String) this.f12733b) + " (name TEXT PRIMARY KEY NOT NULL,length INTEGER NOT NULL,last_touch_timestamp INTEGER NOT NULL)");
                    writableDatabase.setTransactionSuccessful();
                } finally {
                    writableDatabase.endTransaction();
                }
            }
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    public void d(Set set) {
        ((String) this.f12733b).getClass();
        try {
            SQLiteDatabase writableDatabase = ((lc.a) this.a).getWritableDatabase();
            writableDatabase.beginTransactionNonExclusive();
            try {
                Iterator it = set.iterator();
                while (it.hasNext()) {
                    writableDatabase.delete((String) this.f12733b, "name = ?", new String[]{(String) it.next()});
                }
                writableDatabase.setTransactionSuccessful();
                writableDatabase.endTransaction();
            } catch (Throwable th2) {
                writableDatabase.endTransaction();
                throw th2;
            }
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    public void e(long j, long j5, String str) {
        ((String) this.f12733b).getClass();
        try {
            SQLiteDatabase writableDatabase = ((lc.a) this.a).getWritableDatabase();
            ContentValues contentValues = new ContentValues();
            contentValues.put(StackTraceHelper.NAME_KEY, str);
            contentValues.put("length", Long.valueOf(j));
            contentValues.put("last_touch_timestamp", Long.valueOf(j5));
            writableDatabase.replaceOrThrow((String) this.f12733b, null, contentValues);
        } catch (SQLException e9) {
            throw new y0(e9);
        }
    }

    public g(lc.a aVar) {
        this.a = aVar;
    }
}
