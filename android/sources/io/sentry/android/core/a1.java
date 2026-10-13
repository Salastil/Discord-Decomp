package io.sentry.android.core;

import androidx.appcompat.widget.b4;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.b2;
import io.sentry.i6;
import io.sentry.k6;
import io.sentry.l6;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a1 implements io.sentry.b0 {

    /* renamed from: d, reason: collision with root package name */
    public final b4 f11093d;

    /* renamed from: e, reason: collision with root package name */
    public final SentryAndroidOptions f11094e;

    /* renamed from: i, reason: collision with root package name */
    public final io.sentry.util.a f11095i = new io.sentry.util.a();

    public a1(SentryAndroidOptions sentryAndroidOptions, b4 b4Var) {
        d9.a.L(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.f11094e = sentryAndroidOptions;
        this.f11093d = b4Var;
    }

    public static void a(io.sentry.android.core.performance.f fVar, io.sentry.protocol.d0 d0Var) {
        k6 k6Var;
        if (fVar.f11289d != io.sentry.android.core.performance.e.COLD) {
            return;
        }
        io.sentry.protocol.c cVar = d0Var.f11544e;
        ArrayList arrayList = d0Var.P;
        i6 i5 = cVar.i();
        if (i5 == null) {
            return;
        }
        io.sentry.protocol.v vVar = i5.f11610d;
        Iterator it = arrayList.iterator();
        while (true) {
            if (!it.hasNext()) {
                k6Var = null;
                break;
            }
            io.sentry.protocol.y yVar = (io.sentry.protocol.y) it.next();
            if (yVar.f11909x.contentEquals("app.start.cold")) {
                k6Var = yVar.f11907v;
                break;
            }
        }
        io.sentry.android.core.performance.g gVar = new io.sentry.android.core.performance.g();
        io.sentry.android.core.performance.g gVar2 = fVar.f11291i;
        long j = gVar2.f11297e;
        long j5 = gVar2.f11298i;
        long j7 = io.sentry.android.core.performance.f.L;
        gVar.f11296d = "Process Initialization";
        gVar.f11297e = j;
        gVar.f11298i = j5;
        gVar.f11299v = j7;
        if (gVar.c() && Math.abs(gVar.a()) <= 10000) {
            arrayList.add(e(gVar, k6Var, vVar, "process.load"));
        }
        ArrayList arrayList2 = new ArrayList(fVar.f11294x.values());
        Collections.sort(arrayList2);
        if (!arrayList2.isEmpty()) {
            Iterator it2 = arrayList2.iterator();
            while (it2.hasNext()) {
                arrayList.add(e((io.sentry.android.core.performance.g) it2.next(), k6Var, vVar, "contentprovider.load"));
            }
        }
        io.sentry.android.core.performance.g gVar3 = fVar.f11293w;
        if (gVar3.f11299v != 0) {
            arrayList.add(e(gVar3, k6Var, vVar, "application.load"));
        }
    }

    public static boolean b(io.sentry.protocol.d0 d0Var) {
        Iterator it = d0Var.P.iterator();
        while (it.hasNext()) {
            io.sentry.protocol.y yVar = (io.sentry.protocol.y) it.next();
            if (yVar.f11909x.contentEquals("app.start.cold") || yVar.f11909x.contentEquals("app.start.warm")) {
                return true;
            }
        }
        i6 i5 = d0Var.f11544e.i();
        if (i5 == null) {
            return false;
        }
        String str = i5.f11614w;
        return str.equals("app.start.cold") || str.equals("app.start.warm");
    }

    /* JADX WARN: Removed duplicated region for block: B:40:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x00ac  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00b5  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x00be A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0039 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void d(io.sentry.protocol.d0 d0Var) {
        boolean z5;
        Map map;
        Double d6;
        Double d7;
        Object obj;
        ArrayList arrayList = d0Var.P;
        Iterator it = arrayList.iterator();
        io.sentry.protocol.y yVar = null;
        io.sentry.protocol.y yVar2 = null;
        while (it.hasNext()) {
            io.sentry.protocol.y yVar3 = (io.sentry.protocol.y) it.next();
            if ("ui.load.initial_display".equals(yVar3.f11909x)) {
                yVar = yVar3;
            } else if ("ui.load.full_display".equals(yVar3.f11909x)) {
                yVar2 = yVar3;
            }
            if (yVar != null && yVar2 != null) {
                break;
            }
        }
        if (yVar == null && yVar2 == null) {
            return;
        }
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            io.sentry.protocol.y yVar4 = (io.sentry.protocol.y) it2.next();
            if (yVar4 != yVar && yVar4 != yVar2) {
                Map map2 = yVar4.H;
                Double d8 = yVar4.f11904d;
                boolean z6 = false;
                boolean z7 = map2 == null || (obj = map2.get("thread.name")) == null || "main".equals(obj);
                if (yVar != null) {
                    double doubleValue = d8.doubleValue();
                    if (doubleValue >= yVar.f11904d.doubleValue() && (((d7 = yVar.f11905e) == null || doubleValue <= d7.doubleValue()) && z7)) {
                        z5 = true;
                        if (yVar2 != null) {
                            double doubleValue2 = d8.doubleValue();
                            if (doubleValue2 >= yVar2.f11904d.doubleValue() && ((d6 = yVar2.f11905e) == null || doubleValue2 <= d6.doubleValue())) {
                                z6 = true;
                            }
                        }
                        if (!z5 || z6) {
                            map = yVar4.H;
                            if (map == null) {
                                map = new ConcurrentHashMap();
                                yVar4.H = map;
                            }
                            if (z5) {
                                map.put("ui.contributes_to_ttid", Boolean.TRUE);
                            }
                            if (!z6) {
                                map.put("ui.contributes_to_ttfd", Boolean.TRUE);
                            }
                        }
                    }
                }
                z5 = false;
                if (yVar2 != null) {
                }
                if (!z5) {
                }
                map = yVar4.H;
                if (map == null) {
                }
                if (z5) {
                }
                if (!z6) {
                }
            }
        }
    }

    public static io.sentry.protocol.y e(io.sentry.android.core.performance.g gVar, k6 k6Var, io.sentry.protocol.v vVar, String str) {
        long j;
        HashMap hashMap = new HashMap(2);
        hashMap.put("thread.id", Long.valueOf(io.sentry.android.core.internal.util.e.f11222b));
        hashMap.put("thread.name", "main");
        Boolean bool = Boolean.TRUE;
        hashMap.put("ui.contributes_to_ttid", bool);
        hashMap.put("ui.contributes_to_ttfd", bool);
        Double valueOf = Double.valueOf(gVar.f11297e / 1000.0d);
        if (gVar.c()) {
            j = gVar.a() + gVar.f11297e;
        } else {
            j = 0;
        }
        return new io.sentry.protocol.y(valueOf, Double.valueOf(j / 1000.0d), vVar, new k6(), k6Var, str, gVar.f11296d, l6.OK, "auto.ui", new ConcurrentHashMap(), new ConcurrentHashMap(), hashMap);
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        Map map;
        SentryAndroidOptions sentryAndroidOptions = this.f11094e;
        io.sentry.r a = this.f11095i.a();
        try {
            if (!sentryAndroidOptions.isTracingEnabled()) {
                a.close();
                return d0Var;
            }
            io.sentry.android.core.performance.f b10 = io.sentry.android.core.performance.f.b();
            boolean b11 = b(d0Var);
            HashMap hashMap = d0Var.Q;
            io.sentry.protocol.c cVar = d0Var.f11544e;
            if (b11) {
                if (b10.I && b10.f11290e) {
                    long a10 = b10.a(sentryAndroidOptions).a();
                    if (a10 != 0) {
                        hashMap.put(b10.f11289d == io.sentry.android.core.performance.e.COLD ? "app_start_cold" : "app_start_warm", new io.sentry.protocol.l(Float.valueOf(a10), b2.MILLISECOND.apiName()));
                        a(b10, d0Var);
                        b10.I = false;
                        b10.f11294x.clear();
                        b10.f11295y.clear();
                    }
                }
                io.sentry.protocol.a d6 = cVar.d();
                if (d6 == null) {
                    d6 = new io.sentry.protocol.a();
                    cVar.n(d6);
                }
                d6.G = b10.f11289d == io.sentry.android.core.performance.e.COLD ? "cold" : "warm";
            }
            d(d0Var);
            io.sentry.protocol.v vVar = d0Var.f11543d;
            i6 i5 = cVar.i();
            if (vVar != null && i5 != null && i5.f11614w.contentEquals("ui.load")) {
                b4 b4Var = this.f11093d;
                ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) b4Var.f929i;
                io.sentry.r a11 = ((io.sentry.util.a) b4Var.f932x).a();
                try {
                    if (b4Var.d()) {
                        Map map2 = (Map) concurrentHashMap.get(vVar);
                        concurrentHashMap.remove(vVar);
                        a11.close();
                        map = map2;
                    } else {
                        a11.close();
                        map = null;
                    }
                    if (map != null) {
                        hashMap.putAll(map);
                    }
                } finally {
                }
            }
            a.close();
            return d0Var;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
