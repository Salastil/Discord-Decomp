package h3;

import android.content.Context;
import android.database.DatabaseErrorHandler;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteException;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;
import android.util.Pair;
import java.io.File;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class g extends SQLiteOpenHelper {
    public static final /* synthetic */ int E = 0;

    /* renamed from: d, reason: collision with root package name */
    public final Context f9498d;

    /* renamed from: e, reason: collision with root package name */
    public final u4.b f9499e;

    /* renamed from: i, reason: collision with root package name */
    public final a1.d f9500i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f9501v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f9502w;

    /* renamed from: x, reason: collision with root package name */
    public final i3.a f9503x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f9504y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(Context context, String str, final u4.b dbRef, final a1.d callback, boolean z5) {
        super(context, str, null, callback.f14e, new DatabaseErrorHandler() { // from class: h3.d
            @Override // android.database.DatabaseErrorHandler
            public final void onCorruption(SQLiteDatabase dbObj) {
                a1.d callback2 = a1.d.this;
                Intrinsics.checkNotNullParameter(callback2, "$callback");
                u4.b dbRef2 = dbRef;
                Intrinsics.checkNotNullParameter(dbRef2, "$dbRef");
                int i5 = g.E;
                Intrinsics.checkNotNullExpressionValue(dbObj, "dbObj");
                c db = d9.a.y(dbRef2, dbObj);
                callback2.getClass();
                Intrinsics.checkNotNullParameter(db, "db");
                Log.e("SupportSQLite", "Corruption reported by sqlite on database: " + db + ".path");
                SQLiteDatabase sQLiteDatabase = db.f9487d;
                if (!sQLiteDatabase.isOpen()) {
                    String path = sQLiteDatabase.getPath();
                    if (path != null) {
                        a1.d.d(path);
                        return;
                    }
                    return;
                }
                List list = null;
                try {
                    try {
                        list = db.f9488e;
                    } finally {
                        if (list != null) {
                            Iterator it = list.iterator();
                            while (it.hasNext()) {
                                Object obj = ((Pair) it.next()).second;
                                Intrinsics.checkNotNullExpressionValue(obj, "p.second");
                                a1.d.d((String) obj);
                            }
                        } else {
                            String path2 = sQLiteDatabase.getPath();
                            if (path2 != null) {
                                a1.d.d(path2);
                            }
                        }
                    }
                } catch (SQLiteException unused) {
                }
                try {
                    db.close();
                } catch (IOException unused2) {
                }
                if (list != null) {
                    return;
                }
            }
        });
        String str2;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(dbRef, "dbRef");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.f9498d = context;
        this.f9499e = dbRef;
        this.f9500i = callback;
        this.f9501v = z5;
        if (str == null) {
            str2 = UUID.randomUUID().toString();
            Intrinsics.checkNotNullExpressionValue(str2, "randomUUID().toString()");
        } else {
            str2 = str;
        }
        File cacheDir = context.getCacheDir();
        Intrinsics.checkNotNullExpressionValue(cacheDir, "context.cacheDir");
        this.f9503x = new i3.a(str2, cacheDir, false);
    }

    public final c c(boolean z5) {
        i3.a aVar = this.f9503x;
        try {
            aVar.a((this.f9504y || getDatabaseName() == null) ? false : true);
            this.f9502w = false;
            SQLiteDatabase i5 = i(z5);
            if (!this.f9502w) {
                c f2 = f(i5);
                aVar.b();
                return f2;
            }
            close();
            c c6 = c(z5);
            aVar.b();
            return c6;
        } catch (Throwable th2) {
            aVar.b();
            throw th2;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper, java.lang.AutoCloseable
    public final void close() {
        i3.a aVar = this.f9503x;
        try {
            aVar.a(aVar.a);
            super.close();
            this.f9499e.f18810e = null;
            this.f9504y = false;
        } finally {
            aVar.b();
        }
    }

    public final c f(SQLiteDatabase sqLiteDatabase) {
        Intrinsics.checkNotNullParameter(sqLiteDatabase, "sqLiteDatabase");
        return d9.a.y(this.f9499e, sqLiteDatabase);
    }

    public final SQLiteDatabase g(boolean z5) {
        if (z5) {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            Intrinsics.checkNotNullExpressionValue(writableDatabase, "{\n                super.…eDatabase()\n            }");
            return writableDatabase;
        }
        SQLiteDatabase readableDatabase = getReadableDatabase();
        Intrinsics.checkNotNullExpressionValue(readableDatabase, "{\n                super.…eDatabase()\n            }");
        return readableDatabase;
    }

    public final SQLiteDatabase i(boolean z5) {
        File parentFile;
        String databaseName = getDatabaseName();
        Context context = this.f9498d;
        if (databaseName != null && (parentFile = context.getDatabasePath(databaseName).getParentFile()) != null) {
            parentFile.mkdirs();
            if (!parentFile.isDirectory()) {
                Log.w("SupportSQLite", "Invalid database parent file, not a directory: " + parentFile);
            }
        }
        try {
            return g(z5);
        } catch (Throwable unused) {
            super.close();
            try {
                Thread.sleep(500L);
            } catch (InterruptedException unused2) {
            }
            try {
                return g(z5);
            } catch (Throwable th2) {
                super.close();
                if (th2 instanceof e) {
                    e eVar = th2;
                    int ordinal = eVar.f9490d.ordinal();
                    Throwable th3 = eVar.f9491e;
                    if (ordinal == 0 || ordinal == 1 || ordinal == 2 || ordinal == 3) {
                        throw th3;
                    }
                    if (!(th3 instanceof SQLiteException)) {
                        throw th3;
                    }
                } else {
                    if (!(th2 instanceof SQLiteException)) {
                        throw th2;
                    }
                    if (databaseName == null || !this.f9501v) {
                        throw th2;
                    }
                }
                context.deleteDatabase(databaseName);
                try {
                    return g(z5);
                } catch (e e9) {
                    throw e9.f9491e;
                }
            }
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onConfigure(SQLiteDatabase db) {
        Intrinsics.checkNotNullParameter(db, "db");
        try {
            a1.d dVar = this.f9500i;
            c db2 = f(db);
            dVar.getClass();
            Intrinsics.checkNotNullParameter(db2, "db");
            Intrinsics.checkNotNullParameter(db2, "db");
        } catch (Throwable th2) {
            throw new e(f.f9492d, th2);
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sqLiteDatabase) {
        Intrinsics.checkNotNullParameter(sqLiteDatabase, "sqLiteDatabase");
        try {
            this.f9500i.t(f(sqLiteDatabase));
        } catch (Throwable th2) {
            throw new e(f.f9493e, th2);
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onDowngrade(SQLiteDatabase db, int i5, int i6) {
        Intrinsics.checkNotNullParameter(db, "db");
        this.f9502w = true;
        try {
            a1.d dVar = this.f9500i;
            c db2 = f(db);
            dVar.getClass();
            Intrinsics.checkNotNullParameter(db2, "db");
            dVar.v(db2, i5, i6);
        } catch (Throwable th2) {
            throw new e(f.f9495v, th2);
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onOpen(SQLiteDatabase db) {
        Intrinsics.checkNotNullParameter(db, "db");
        if (!this.f9502w) {
            try {
                this.f9500i.u(f(db));
            } catch (Throwable th2) {
                throw new e(f.f9496w, th2);
            }
        }
        this.f9504y = true;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sqLiteDatabase, int i5, int i6) {
        Intrinsics.checkNotNullParameter(sqLiteDatabase, "sqLiteDatabase");
        this.f9502w = true;
        try {
            this.f9500i.v(f(sqLiteDatabase), i5, i6);
        } catch (Throwable th2) {
            throw new e(f.f9494i, th2);
        }
    }
}
