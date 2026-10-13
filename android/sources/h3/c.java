package h3;

import a5.m;
import android.database.Cursor;
import android.database.sqlite.SQLiteCursorDriver;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteQuery;
import android.database.sqlite.SQLiteStatement;
import java.io.Closeable;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c implements Closeable {

    /* renamed from: i, reason: collision with root package name */
    public static final String[] f9485i = {"", " OR ROLLBACK ", " OR ABORT ", " OR FAIL ", " OR IGNORE ", " OR REPLACE "};

    /* renamed from: v, reason: collision with root package name */
    public static final String[] f9486v = new String[0];

    /* renamed from: d, reason: collision with root package name */
    public final SQLiteDatabase f9487d;

    /* renamed from: e, reason: collision with root package name */
    public final List f9488e;

    public c(SQLiteDatabase delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f9487d = delegate;
        this.f9488e = delegate.getAttachedDbs();
    }

    public final void A() {
        this.f9487d.setTransactionSuccessful();
    }

    public final void c() {
        this.f9487d.beginTransaction();
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f9487d.close();
    }

    public final void f() {
        this.f9487d.beginTransactionNonExclusive();
    }

    public final j g(String sql) {
        Intrinsics.checkNotNullParameter(sql, "sql");
        SQLiteStatement compileStatement = this.f9487d.compileStatement(sql);
        Intrinsics.checkNotNullExpressionValue(compileStatement, "delegate.compileStatement(sql)");
        return new j(compileStatement);
    }

    public final void i() {
        this.f9487d.endTransaction();
    }

    public final void l(String sql) {
        Intrinsics.checkNotNullParameter(sql, "sql");
        this.f9487d.execSQL(sql);
    }

    public final void o(Object[] bindArgs) {
        Intrinsics.checkNotNullParameter("INSERT OR REPLACE INTO `Preference` (`key`, `long_value`) VALUES (@key, @long_value)", "sql");
        Intrinsics.checkNotNullParameter(bindArgs, "bindArgs");
        this.f9487d.execSQL("INSERT OR REPLACE INTO `Preference` (`key`, `long_value`) VALUES (@key, @long_value)", bindArgs);
    }

    public final boolean q() {
        return this.f9487d.inTransaction();
    }

    public final boolean r() {
        SQLiteDatabase sQLiteDatabase = this.f9487d;
        Intrinsics.checkNotNullParameter(sQLiteDatabase, "sQLiteDatabase");
        return sQLiteDatabase.isWriteAheadLoggingEnabled();
    }

    public final Cursor t(g3.e query) {
        Intrinsics.checkNotNullParameter(query, "query");
        final b bVar = new b(query);
        Cursor rawQueryWithFactory = this.f9487d.rawQueryWithFactory(new SQLiteDatabase.CursorFactory() { // from class: h3.a
            @Override // android.database.sqlite.SQLiteDatabase.CursorFactory
            public final Cursor newCursor(SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
                b tmp0 = b.this;
                Intrinsics.checkNotNullParameter(tmp0, "$tmp0");
                return (Cursor) tmp0.invoke(sQLiteDatabase, sQLiteCursorDriver, str, sQLiteQuery);
            }
        }, query.c(), f9486v, null);
        Intrinsics.checkNotNullExpressionValue(rawQueryWithFactory, "delegate.rawQueryWithFac…EMPTY_STRING_ARRAY, null)");
        return rawQueryWithFactory;
    }

    public final Cursor x(String query) {
        Intrinsics.checkNotNullParameter(query, "query");
        return t(new m(query, 1));
    }
}
