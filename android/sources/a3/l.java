package a3;

import android.content.Context;
import androidx.work.impl.WorkDatabase;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final String f73b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f74c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f75d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f76e;

    /* renamed from: f, reason: collision with root package name */
    public Executor f77f;

    /* renamed from: g, reason: collision with root package name */
    public Executor f78g;

    /* renamed from: h, reason: collision with root package name */
    public com.discord.chat.input.views.d f79h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f80i;
    public final m j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f81l;

    /* renamed from: m, reason: collision with root package name */
    public final long f82m;

    /* renamed from: n, reason: collision with root package name */
    public final gj.c f83n;

    /* renamed from: o, reason: collision with root package name */
    public final LinkedHashSet f84o;

    /* renamed from: p, reason: collision with root package name */
    public HashSet f85p;

    public l(Context context, String str) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(WorkDatabase.class, "klass");
        this.a = context;
        this.f73b = str;
        this.f74c = new ArrayList();
        this.f75d = new ArrayList();
        this.f76e = new ArrayList();
        this.j = m.f86d;
        this.k = true;
        this.f82m = -1L;
        this.f83n = new gj.c(1);
        this.f84o = new LinkedHashSet();
    }

    public final void a(b3.a... migrations) {
        Intrinsics.checkNotNullParameter(migrations, "migrations");
        if (this.f85p == null) {
            this.f85p = new HashSet();
        }
        for (b3.a aVar : migrations) {
            HashSet hashSet = this.f85p;
            Intrinsics.checkNotNull(hashSet);
            hashSet.add(Integer.valueOf(aVar.a));
            HashSet hashSet2 = this.f85p;
            Intrinsics.checkNotNull(hashSet2);
            hashSet2.add(Integer.valueOf(aVar.f2732b));
        }
        this.f83n.s((b3.a[]) Arrays.copyOf(migrations, migrations.length));
    }
}
