package a3;

import android.database.sqlite.SQLiteException;
import android.util.Log;
import androidx.work.impl.WorkDatabase_Impl;
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.LinkedHashMap;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class i {

    /* renamed from: m, reason: collision with root package name */
    public static final String[] f61m = {"UPDATE", "DELETE", "INSERT"};
    public final WorkDatabase_Impl a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f62b;

    /* renamed from: c, reason: collision with root package name */
    public final LinkedHashMap f63c;

    /* renamed from: d, reason: collision with root package name */
    public final String[] f64d;

    /* renamed from: e, reason: collision with root package name */
    public final AtomicBoolean f65e;

    /* renamed from: f, reason: collision with root package name */
    public volatile boolean f66f;

    /* renamed from: g, reason: collision with root package name */
    public volatile h3.j f67g;

    /* renamed from: h, reason: collision with root package name */
    public final f f68h;

    /* renamed from: i, reason: collision with root package name */
    public final p.f f69i;
    public final Object j;
    public final Object k;

    /* renamed from: l, reason: collision with root package name */
    public final h f70l;

    public i(WorkDatabase_Impl database, HashMap shadowTablesMap, HashMap viewTables, String... tableNames) {
        Intrinsics.checkNotNullParameter(database, "database");
        Intrinsics.checkNotNullParameter(shadowTablesMap, "shadowTablesMap");
        Intrinsics.checkNotNullParameter(viewTables, "viewTables");
        Intrinsics.checkNotNullParameter(tableNames, "tableNames");
        this.a = database;
        this.f62b = shadowTablesMap;
        this.f65e = new AtomicBoolean(false);
        int length = tableNames.length;
        f fVar = new f();
        fVar.f56b = new long[length];
        fVar.f57c = new boolean[length];
        fVar.f58d = new int[length];
        this.f68h = fVar;
        Intrinsics.checkNotNullParameter(database, "database");
        Intrinsics.checkNotNullExpressionValue(Collections.newSetFromMap(new IdentityHashMap()), "newSetFromMap(IdentityHashMap())");
        this.f69i = new p.f();
        this.j = new Object();
        this.k = new Object();
        this.f63c = new LinkedHashMap();
        int length2 = tableNames.length;
        String[] strArr = new String[length2];
        for (int i5 = 0; i5 < length2; i5++) {
            String str = tableNames[i5];
            Locale locale = Locale.US;
            String o6 = e.o(locale, "US", str, locale, "this as java.lang.String).toLowerCase(locale)");
            this.f63c.put(o6, Integer.valueOf(i5));
            String str2 = (String) this.f62b.get(tableNames[i5]);
            String o7 = str2 != null ? e.o(locale, "US", str2, locale, "this as java.lang.String).toLowerCase(locale)") : null;
            if (o7 != null) {
                o6 = o7;
            }
            strArr[i5] = o6;
        }
        this.f64d = strArr;
        for (Map.Entry entry : this.f62b.entrySet()) {
            String str3 = (String) entry.getValue();
            Locale locale2 = Locale.US;
            String o10 = e.o(locale2, "US", str3, locale2, "this as java.lang.String).toLowerCase(locale)");
            if (this.f63c.containsKey(o10)) {
                String o11 = e.o(locale2, "US", (String) entry.getKey(), locale2, "this as java.lang.String).toLowerCase(locale)");
                LinkedHashMap linkedHashMap = this.f63c;
                linkedHashMap.put(o11, v0.e(linkedHashMap, o10));
            }
        }
        this.f70l = new h(0, this);
    }

    public final boolean a() {
        h3.c cVar = this.a.a;
        if (!Intrinsics.areEqual(cVar != null ? Boolean.valueOf(cVar.f9487d.isOpen()) : null, Boolean.TRUE)) {
            return false;
        }
        if (!this.f66f) {
            this.a.h().D();
        }
        if (this.f66f) {
            return true;
        }
        Log.e("ROOM", "database is not initialized even though it is open");
        return false;
    }

    public final void b(h3.c cVar, int i5) {
        cVar.l("INSERT OR IGNORE INTO room_table_modification_log VALUES(" + i5 + ", 0)");
        String str = this.f64d[i5];
        for (int i6 = 0; i6 < 3; i6++) {
            String str2 = f61m[i6];
            String str3 = "CREATE TEMP TRIGGER IF NOT EXISTS " + m3.n.O(str, str2) + " AFTER " + str2 + " ON `" + str + "` BEGIN UPDATE room_table_modification_log SET invalidated = 1 WHERE table_id = " + i5 + " AND invalidated = 0; END";
            Intrinsics.checkNotNullExpressionValue(str3, "StringBuilder().apply(builderAction).toString()");
            cVar.l(str3);
        }
    }

    public final void c(h3.c database) {
        Intrinsics.checkNotNullParameter(database, "database");
        if (database.q()) {
            return;
        }
        try {
            ReentrantReadWriteLock.ReadLock readLock = this.a.f2575h.readLock();
            Intrinsics.checkNotNullExpressionValue(readLock, "readWriteLock.readLock()");
            readLock.lock();
            try {
                synchronized (this.j) {
                    int[] j = this.f68h.j();
                    if (j != null) {
                        Intrinsics.checkNotNullParameter(database, "database");
                        if (database.r()) {
                            database.f();
                        } else {
                            database.c();
                        }
                        try {
                            int length = j.length;
                            int i5 = 0;
                            int i6 = 0;
                            while (i5 < length) {
                                int i10 = j[i5];
                                int i11 = i6 + 1;
                                if (i10 == 1) {
                                    b(database, i6);
                                } else if (i10 == 2) {
                                    String str = this.f64d[i6];
                                    String[] strArr = f61m;
                                    for (int i12 = 0; i12 < 3; i12++) {
                                        String str2 = "DROP TRIGGER IF EXISTS " + m3.n.O(str, strArr[i12]);
                                        Intrinsics.checkNotNullExpressionValue(str2, "StringBuilder().apply(builderAction).toString()");
                                        database.l(str2);
                                    }
                                }
                                i5++;
                                i6 = i11;
                            }
                            database.A();
                            database.i();
                            Unit unit = Unit.a;
                        } catch (Throwable th2) {
                            database.i();
                            throw th2;
                        }
                    }
                }
            } finally {
                readLock.unlock();
            }
        } catch (SQLiteException e9) {
            Log.e("ROOM", "Cannot run invalidation tracker. Is the db closed?", e9);
        } catch (IllegalStateException e10) {
            Log.e("ROOM", "Cannot run invalidation tracker. Is the db closed?", e10);
        }
    }
}
