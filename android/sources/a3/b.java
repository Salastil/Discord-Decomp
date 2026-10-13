package a3;

import android.content.Context;
import java.util.List;
import java.util.Set;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class b {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final String f44b;

    /* renamed from: c, reason: collision with root package name */
    public final g3.b f45c;

    /* renamed from: d, reason: collision with root package name */
    public final gj.c f46d;

    /* renamed from: e, reason: collision with root package name */
    public final List f47e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f48f;

    /* renamed from: g, reason: collision with root package name */
    public final m f49g;

    /* renamed from: h, reason: collision with root package name */
    public final Executor f50h;

    /* renamed from: i, reason: collision with root package name */
    public final Executor f51i;
    public final boolean j;
    public final boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final Set f52l;

    /* renamed from: m, reason: collision with root package name */
    public final List f53m;

    /* renamed from: n, reason: collision with root package name */
    public final List f54n;

    public b(Context context, String str, g3.b sqliteOpenHelperFactory, gj.c migrationContainer, List list, boolean z5, m journalMode, Executor queryExecutor, Executor transactionExecutor, boolean z6, boolean z7, Set set, List typeConverters, List autoMigrationSpecs) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(sqliteOpenHelperFactory, "sqliteOpenHelperFactory");
        Intrinsics.checkNotNullParameter(migrationContainer, "migrationContainer");
        Intrinsics.checkNotNullParameter(journalMode, "journalMode");
        Intrinsics.checkNotNullParameter(queryExecutor, "queryExecutor");
        Intrinsics.checkNotNullParameter(transactionExecutor, "transactionExecutor");
        Intrinsics.checkNotNullParameter(typeConverters, "typeConverters");
        Intrinsics.checkNotNullParameter(autoMigrationSpecs, "autoMigrationSpecs");
        this.a = context;
        this.f44b = str;
        this.f45c = sqliteOpenHelperFactory;
        this.f46d = migrationContainer;
        this.f47e = list;
        this.f48f = z5;
        this.f49g = journalMode;
        this.f50h = queryExecutor;
        this.f51i = transactionExecutor;
        this.j = z6;
        this.k = z7;
        this.f52l = set;
        this.f53m = typeConverters;
        this.f54n = autoMigrationSpecs;
    }
}
