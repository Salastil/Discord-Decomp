package io.sentry.android.core;

import android.app.ActivityManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.util.DisplayMetrics;
import com.discord.js_watchdog.SharedPreferencesKey;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.e6;
import io.sentry.i6;
import io.sentry.protocol.DebugImage;
import io.sentry.v5;
import java.io.File;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/* loaded from: classes3.dex */
public final class g0 implements io.sentry.b0 {

    /* renamed from: d, reason: collision with root package name */
    public final Context f11138d;

    /* renamed from: e, reason: collision with root package name */
    public final SentryAndroidOptions f11139e;

    /* renamed from: i, reason: collision with root package name */
    public final j0 f11140i;

    /* renamed from: v, reason: collision with root package name */
    public final gj.c f11141v;

    /* renamed from: w, reason: collision with root package name */
    public final io.sentry.cache.g f11142w;

    /* renamed from: x, reason: collision with root package name */
    public final List f11143x = Collections.singletonList(new f0(this));

    public g0(Context context, j0 j0Var, SentryAndroidOptions sentryAndroidOptions) {
        Context applicationContext = context.getApplicationContext();
        this.f11138d = applicationContext != null ? applicationContext : context;
        this.f11139e = sentryAndroidOptions;
        this.f11140i = j0Var;
        this.f11142w = sentryAndroidOptions.findPersistingScopeObserver();
        this.f11141v = new gj.c(17, new ha.l(sentryAndroidOptions));
    }

    public final String a() {
        SentryAndroidOptions sentryAndroidOptions = this.f11139e;
        try {
            return (String) sentryAndroidOptions.getRuntimeManager().i(new hc.m(11, this));
        } catch (Throwable th2) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting installationId.", th2);
            return null;
        }
    }

    public final Object b(v5 v5Var, String str, Class cls) {
        io.sentry.cache.g gVar = this.f11142w;
        if (gVar == null) {
            return null;
        }
        return gVar.p(v5Var, str, cls);
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        f0 f0Var;
        f0 f0Var2;
        String str;
        File[] fileArr;
        io.sentry.hints.b bVar;
        String str2;
        DisplayMetrics displayMetrics;
        io.sentry.protocol.c0 c0Var;
        ArrayList arrayList;
        Object b10 = hint.b("sentry:typeCheckHint");
        boolean z5 = b10 instanceof io.sentry.hints.b;
        SentryAndroidOptions sentryAndroidOptions = this.f11139e;
        if (!z5) {
            sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "The event is not Backfillable, but has been passed to BackfillingEventProcessor, skipping.", new Object[0]);
            return sentryEvent;
        }
        io.sentry.hints.b bVar2 = (io.sentry.hints.b) b10;
        Iterator it = this.f11143x.iterator();
        while (true) {
            if (!it.hasNext()) {
                f0Var = null;
                break;
            }
            f0Var = (f0) it.next();
            f0Var.getClass();
            if (b10 instanceof io.sentry.hints.a) {
                break;
            }
        }
        boolean z6 = true;
        if (f0Var != null) {
            boolean equals = bVar2 instanceof io.sentry.hints.a ? "anr_background".equals(((io.sentry.hints.a) bVar2).c()) : false;
            g0 g0Var = f0Var.a;
            if (sentryEvent.E == null) {
                sentryEvent.E = "java";
            }
            if (sentryEvent.d() == null) {
                io.sentry.protocol.m mVar = new io.sentry.protocol.m();
                if (bVar2.shouldEnrich()) {
                    mVar.f11835d = "AppExitInfo";
                } else {
                    mVar.f11835d = "HistoricalAppExitInfo";
                }
                ApplicationNotResponding applicationNotResponding = new ApplicationNotResponding(equals ? "Background ANR" : "ANR", Thread.currentThread());
                e6 e6Var = sentryEvent.P;
                ArrayList arrayList2 = e6Var != null ? e6Var.a : null;
                if (arrayList2 != null) {
                    Iterator it2 = arrayList2.iterator();
                    while (it2.hasNext()) {
                        c0Var = (io.sentry.protocol.c0) it2.next();
                        String str3 = c0Var.f11767i;
                        if (str3 != null && str3.equals("main")) {
                            break;
                        }
                    }
                }
                c0Var = null;
                if (c0Var == null) {
                    c0Var = new io.sentry.protocol.c0();
                    c0Var.F = new io.sentry.protocol.a0();
                }
                g0Var.f11141v.getClass();
                io.sentry.protocol.a0 a0Var = c0Var.F;
                if (a0Var == null) {
                    arrayList = new ArrayList(0);
                } else {
                    ArrayList arrayList3 = new ArrayList(1);
                    arrayList3.add(gj.c.N(applicationNotResponding, mVar, c0Var.f11765d, a0Var.f11755d, true));
                    arrayList = arrayList3;
                }
                sentryEvent.Q = new e6(arrayList);
            }
        }
        io.sentry.protocol.c cVar = sentryEvent.f11544e;
        io.sentry.protocol.o g6 = cVar.g();
        Context context = this.f11138d;
        cVar.s(o0.c(context, sentryAndroidOptions).f11277g);
        if (g6 != null) {
            String str4 = g6.f11846d;
            cVar.k(g6, (str4 == null || str4.isEmpty()) ? "os_1" : "os_" + str4.trim().toLowerCase(Locale.ROOT));
        }
        io.sentry.protocol.f e9 = cVar.e();
        j0 j0Var = this.f11140i;
        if (e9 == null) {
            io.sentry.protocol.f fVar = new io.sentry.protocol.f();
            fVar.f11781e = Build.MANUFACTURER;
            fVar.f11784i = Build.BRAND;
            fVar.f11785v = k0.d(sentryAndroidOptions.getLogger());
            fVar.f11786w = Build.MODEL;
            fVar.f11787x = Build.ID;
            fVar.f11788y = Build.SUPPORTED_ABIS;
            ActivityManager.MemoryInfo e10 = k0.e(context, sentryAndroidOptions.getLogger());
            if (e10 != null) {
                fVar.J = Long.valueOf(e10.totalMem);
            }
            fVar.I = j0Var.a();
            ILogger logger = sentryAndroidOptions.getLogger();
            try {
                displayMetrics = context.getResources().getDisplayMetrics();
            } catch (Throwable th2) {
                logger.k(SentryLevel.ERROR, "Error getting DisplayMetrics.", th2);
                displayMetrics = null;
            }
            if (displayMetrics != null) {
                fVar.R = Integer.valueOf(displayMetrics.widthPixels);
                fVar.S = Integer.valueOf(displayMetrics.heightPixels);
                fVar.T = Float.valueOf(displayMetrics.density);
                fVar.U = Integer.valueOf(displayMetrics.densityDpi);
            }
            if (fVar.X == null) {
                fVar.X = a();
            }
            ArrayList a = io.sentry.android.core.internal.util.f.f11223c.a();
            if (!a.isEmpty()) {
                fVar.f11778c0 = Double.valueOf(((Integer) Collections.max(a)).doubleValue());
                fVar.f11777b0 = Integer.valueOf(a.size());
            }
            cVar.p(fVar);
        }
        if (!bVar2.shouldEnrich()) {
            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "The event is Backfillable, but should not be enriched, skipping.", new Object[0]);
            return sentryEvent;
        }
        if (sentryEvent.f11546v == null) {
            sentryEvent.f11546v = (io.sentry.protocol.p) b(sentryAndroidOptions, "request.json", io.sentry.protocol.p.class);
        }
        if (sentryEvent.F == null) {
            sentryEvent.F = (io.sentry.protocol.h0) b(sentryAndroidOptions, "user.json", io.sentry.protocol.h0.class);
        }
        Map map = (Map) b(sentryAndroidOptions, "tags.json", Map.class);
        if (map != null) {
            if (sentryEvent.f11547w == null) {
                sentryEvent.f11547w = new HashMap(new HashMap(map));
            } else {
                for (Map.Entry entry : map.entrySet()) {
                    if (!sentryEvent.f11547w.containsKey(entry.getKey())) {
                        sentryEvent.c((String) entry.getKey(), (String) entry.getValue());
                    }
                }
            }
        }
        List list = (List) b(sentryAndroidOptions, "breadcrumbs.json", List.class);
        if (list != null) {
            List list2 = sentryEvent.J;
            if (list2 == null) {
                sentryEvent.J = new ArrayList(list);
            } else {
                list2.addAll(list);
            }
        }
        Map map2 = (Map) b(sentryAndroidOptions, "extras.json", Map.class);
        if (map2 != null) {
            if (sentryEvent.L == null) {
                sentryEvent.L = new HashMap(new HashMap(map2));
            } else {
                for (Map.Entry entry2 : map2.entrySet()) {
                    boolean z7 = z6;
                    if (!sentryEvent.L.containsKey(entry2.getKey())) {
                        sentryEvent.L.put((String) entry2.getKey(), entry2.getValue());
                    }
                    z6 = z7;
                }
            }
        }
        io.sentry.protocol.c cVar2 = (io.sentry.protocol.c) b(sentryAndroidOptions, "contexts.json", io.sentry.protocol.c.class);
        if (cVar2 != null) {
            Iterator it3 = new io.sentry.protocol.c(cVar2).f11763d.entrySet().iterator();
            while (it3.hasNext()) {
                Map.Entry entry3 = (Map.Entry) it3.next();
                Object value = entry3.getValue();
                Iterator it4 = it3;
                if ((!SharedPreferencesKey.TRACE.equals(entry3.getKey()) || !(value instanceof i6)) && !cVar.a(entry3.getKey())) {
                    cVar.k(value, (String) entry3.getKey());
                }
                it3 = it4;
            }
        }
        String str5 = (String) b(sentryAndroidOptions, "transaction.json", String.class);
        if (sentryEvent.S == null) {
            sentryEvent.S = str5;
        }
        List list3 = (List) b(sentryAndroidOptions, "fingerprint.json", List.class);
        if (sentryEvent.T == null) {
            sentryEvent.T = list3 != null ? new ArrayList(list3) : null;
        }
        SentryLevel sentryLevel = (SentryLevel) b(sentryAndroidOptions, "level.json", SentryLevel.class);
        if (sentryEvent.R == null) {
            sentryEvent.R = sentryLevel;
        }
        i6 i6Var = (i6) b(sentryAndroidOptions, "trace.json", i6.class);
        if (cVar.i() == null && i6Var != null) {
            cVar.w(i6Var);
        }
        String str6 = (String) b(sentryAndroidOptions, "replay.json", String.class);
        String cacheDirPath = sentryAndroidOptions.getCacheDirPath();
        if (cacheDirPath == null) {
            str = "anr_background";
            f0Var2 = f0Var;
        } else {
            f0Var2 = f0Var;
            str = "anr_background";
            if (!new File(cacheDirPath, a3.e.k("replay_", str6)).exists()) {
                String str7 = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "replay-error-sample-rate.json", String.class);
                if (str7 != null) {
                    try {
                        if (Double.parseDouble(str7) < io.sentry.util.j.a().c()) {
                            sentryAndroidOptions.getLogger().u(SentryLevel.DEBUG, "Not capturing replay for ANR %s due to not being sampled.", sentryEvent.f11543d);
                        } else {
                            File[] listFiles = new File(cacheDirPath).listFiles();
                            if (listFiles != null) {
                                int length = listFiles.length;
                                long j = Long.MIN_VALUE;
                                String str8 = null;
                                int i5 = 0;
                                while (i5 < length) {
                                    File file = listFiles[i5];
                                    if (file.isDirectory()) {
                                        fileArr = listFiles;
                                        if (file.getName().startsWith("replay_") && file.lastModified() > j && file.lastModified() <= ((Date) sentryEvent.M.clone()).getTime()) {
                                            j = file.lastModified();
                                            str8 = file.getName().substring(7);
                                        }
                                    } else {
                                        fileArr = listFiles;
                                    }
                                    i5++;
                                    listFiles = fileArr;
                                }
                                str6 = str8;
                            } else {
                                str6 = null;
                            }
                        }
                    } catch (Throwable th3) {
                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error parsing replay sample rate.", th3);
                    }
                }
            }
            if (str6 != null) {
                Charset charset = io.sentry.cache.g.f11441c;
                io.sentry.cache.a.d(sentryAndroidOptions, str6, ".scope-cache", "replay.json");
                cVar.k(str6, "replay_id");
            }
        }
        if (sentryEvent.f11548x == null) {
            sentryEvent.f11548x = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "release.json", String.class);
        }
        if (sentryEvent.f11549y == null) {
            String str9 = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "environment.json", String.class);
            if (str9 == null) {
                str9 = sentryAndroidOptions.getEnvironment();
            }
            sentryEvent.f11549y = str9;
        }
        if (sentryEvent.I == null) {
            sentryEvent.I = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "dist.json", String.class);
        }
        if (sentryEvent.I == null && (str2 = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "release.json", String.class)) != null) {
            try {
                sentryEvent.I = str2.substring(str2.indexOf(43) + 1);
            } catch (Throwable unused) {
                sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Failed to parse release from scope cache: %s", str2);
            }
        }
        io.sentry.protocol.d dVar = sentryEvent.K;
        if (dVar == null) {
            dVar = new io.sentry.protocol.d();
        }
        if (dVar.f11773e == null) {
            dVar.f11773e = new ArrayList(new ArrayList());
        }
        List list4 = dVar.f11773e;
        if (list4 != null) {
            String str10 = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "proguard-uuid.json", String.class);
            if (str10 != null) {
                DebugImage debugImage = new DebugImage();
                bVar = bVar2;
                debugImage.setType(DebugImage.PROGUARD);
                debugImage.setUuid(str10);
                list4.add(debugImage);
            } else {
                bVar = bVar2;
            }
            sentryEvent.K = dVar;
        } else {
            bVar = bVar2;
        }
        if (sentryEvent.f11545i == null) {
            sentryEvent.f11545i = (io.sentry.protocol.t) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "sdk-version.json", io.sentry.protocol.t.class);
        }
        io.sentry.protocol.a d6 = cVar.d();
        if (d6 == null) {
            d6 = new io.sentry.protocol.a();
        }
        io.sentry.protocol.a aVar = d6;
        aVar.f11752w = (String) k0.f11260c.a(context);
        PackageInfo g10 = k0.g(context, j0Var);
        if (g10 != null) {
            aVar.f11748d = g10.packageName;
        }
        String str11 = sentryEvent.f11548x;
        if (str11 == null) {
            str11 = (String) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "release.json", String.class);
        }
        if (str11 != null) {
            try {
                String substring = str11.substring(str11.indexOf(64) + 1, str11.indexOf(43));
                String substring2 = str11.substring(str11.indexOf(43) + 1);
                aVar.f11753x = substring;
                aVar.f11754y = substring2;
            } catch (Throwable unused2) {
                sentryAndroidOptions.getLogger().u(SentryLevel.WARNING, "Failed to parse release from scope cache: %s", str11);
            }
        }
        try {
            a5.h0 h0Var = o0.c(context, sentryAndroidOptions).f11276f;
            if (h0Var != null) {
                aVar.I = Boolean.valueOf(h0Var.f175e);
                String[] strArr = (String[]) h0Var.f176i;
                if (strArr != null) {
                    aVar.J = Arrays.asList(strArr);
                }
            }
        } catch (Throwable th4) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting split apks info.", th4);
        }
        cVar.n(aVar);
        Map map3 = (Map) io.sentry.cache.a.c(sentryAndroidOptions, ".options-cache", "tags.json", Map.class);
        if (map3 != null) {
            if (sentryEvent.f11547w == null) {
                sentryEvent.f11547w = new HashMap(new HashMap(map3));
            } else {
                for (Map.Entry entry4 : map3.entrySet()) {
                    if (!sentryEvent.f11547w.containsKey(entry4.getKey())) {
                        sentryEvent.c((String) entry4.getKey(), (String) entry4.getValue());
                    }
                }
            }
        }
        io.sentry.protocol.h0 h0Var2 = sentryEvent.F;
        if (h0Var2 == null) {
            h0Var2 = new io.sentry.protocol.h0();
            sentryEvent.F = h0Var2;
        }
        if (h0Var2.f11797e == null) {
            h0Var2.f11797e = a();
        }
        if (h0Var2.f11799v == null && sentryAndroidOptions.isSendDefaultPii()) {
            h0Var2.f11799v = "{{auto}}";
        }
        try {
            a3.n nVar = o0.c(context, sentryAndroidOptions).f11275e;
            if (nVar != null) {
                HashMap hashMap = new HashMap();
                hashMap.put("isSideLoaded", String.valueOf(nVar.f90b));
                String str12 = nVar.a;
                if (str12 != null) {
                    hashMap.put("installerStore", str12);
                }
                for (Map.Entry entry5 : hashMap.entrySet()) {
                    sentryEvent.c((String) entry5.getKey(), (String) entry5.getValue());
                }
            }
        } catch (Throwable th5) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting side loaded info.", th5);
        }
        if (f0Var2 != null) {
            io.sentry.hints.b bVar3 = bVar;
            boolean equals2 = bVar3 instanceof io.sentry.hints.a ? str.equals(((io.sentry.hints.a) bVar3).c()) : false;
            boolean z8 = !equals2;
            io.sentry.protocol.a d7 = cVar.d();
            if (d7 == null) {
                d7 = new io.sentry.protocol.a();
                cVar.n(d7);
            }
            if (d7.H == null) {
                d7.H = Boolean.valueOf(z8);
            }
            if (sentryEvent.T == null) {
                List asList = Arrays.asList("{{ default }}", equals2 ? "background-anr" : "foreground-anr");
                sentryEvent.T = asList != null ? new ArrayList(asList) : null;
            }
        }
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        return d0Var;
    }
}
