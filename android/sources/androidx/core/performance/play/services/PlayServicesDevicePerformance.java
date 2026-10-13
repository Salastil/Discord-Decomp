package androidx.core.performance.play.services;

import a3.q;
import af.k;
import android.util.Log;
import androidx.fragment.app.s;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.devsupport.StackTraceHelper;
import e2.z;
import fo.u;
import g1.a;
import h2.c;
import h2.f;
import ha.l;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import lf.d;
import lf.g;
import lf.h;
import nr.g0;
import nr.m1;
import nr.x;
import ur.e;
import ze.b;

/* loaded from: classes.dex */
public final class PlayServicesDevicePerformance {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final String f1524b;

    /* renamed from: c, reason: collision with root package name */
    public final a f1525c;

    /* renamed from: d, reason: collision with root package name */
    public final c f1526d;

    /* renamed from: e, reason: collision with root package name */
    public final u f1527e;

    public PlayServicesDevicePerformance(ReactApplicationContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        h client = new h(context, null, d.a, b.D, ze.h.f21206c);
        int i5 = 3;
        q produceFile = new q(i5, context);
        m0 migrations = m0.f13512d;
        e eVar = g0.a;
        ur.d dVar = ur.d.f19093i;
        m1 m1Var = new m1();
        dVar.getClass();
        sr.d scope = x.b(kotlin.coroutines.e.c(dVar, m1Var));
        Intrinsics.checkNotNullParameter(migrations, "migrations");
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(produceFile, "produceFile");
        q produceFile2 = new q(5, produceFile);
        f serializer = f.a;
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        Intrinsics.checkNotNullParameter(migrations, "migrations");
        Intrinsics.checkNotNullParameter(scope, "scope");
        Intrinsics.checkNotNullParameter(produceFile2, "produceFile");
        j8.b bVar = new j8.b(6, (byte) 0);
        Intrinsics.checkNotNullParameter(migrations, "migrations");
        z delegate = new z(produceFile2, b0.c(new b4.d(migrations, (Continuation) null, i5)), bVar, scope);
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        l performanceStore = new l();
        performanceStore.f9613d = delegate;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(performanceStore, "performanceStore");
        this.a = performanceStore;
        this.f1524b = "PlayServicesDevicePerformance";
        this.f1525c = new a();
        Intrinsics.checkNotNullParameter("mpc_value", StackTraceHelper.NAME_KEY);
        this.f1526d = new c("mpc_value");
        this.f1527e = fo.l.a(new q(4, this));
        Log.v("PlayServicesDevicePerformance", "Getting mediaPerformanceClass from com.google.android.gms.deviceperformance.DevicePerformanceClient");
        k f2 = k.f();
        f2.f564b = new ye.d[]{ag.c.a};
        f2.f567e = g.f13952d;
        f2.f566d = 28601;
        jg.l b10 = client.b(0, f2.e());
        Intrinsics.checkNotNullExpressionValue(b10, "doRead(\n      TaskApiCal…Y)\n        .build()\n    )");
        app.rive.runtime.kotlin.core.a aVar = new app.rive.runtime.kotlin.core.a(25, new s(2, this));
        b10.getClass();
        b10.d(jg.h.a, aVar);
        b10.o(new app.rive.runtime.kotlin.core.a(26, this));
    }
}
