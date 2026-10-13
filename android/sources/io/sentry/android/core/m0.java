package io.sentry.android.core;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Looper;
import io.sentry.Hint;
import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.e6;
import io.sentry.f4;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.x5;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.RejectedExecutionException;

/* loaded from: classes3.dex */
public final class m0 implements io.sentry.b0 {

    /* renamed from: d, reason: collision with root package name */
    public final Context f11267d;

    /* renamed from: e, reason: collision with root package name */
    public final j0 f11268e;

    /* renamed from: i, reason: collision with root package name */
    public final SentryAndroidOptions f11269i;

    /* renamed from: v, reason: collision with root package name */
    public final Future f11270v;

    public m0(Context context, j0 j0Var, SentryAndroidOptions sentryAndroidOptions) {
        Future future;
        new io.sentry.util.a();
        Context applicationContext = context.getApplicationContext();
        this.f11267d = applicationContext != null ? applicationContext : context;
        this.f11268e = j0Var;
        d9.a.L(sentryAndroidOptions, "The options object is required.");
        this.f11269i = sentryAndroidOptions;
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        try {
            future = newSingleThreadExecutor.submit(new com.facebook.react.runtime.o(8, this, sentryAndroidOptions));
        } catch (RejectedExecutionException e9) {
            sentryAndroidOptions.getLogger().k(SentryLevel.WARNING, "Device info caching task rejected.", e9);
            future = null;
        }
        this.f11270v = future;
        newSingleThreadExecutor.shutdown();
    }

    public final void a(f4 f4Var, Hint hint) {
        Boolean bool;
        io.sentry.protocol.a d6 = f4Var.f11544e.d();
        if (d6 == null) {
            d6 = new io.sentry.protocol.a();
        }
        d6.f11752w = (String) k0.f11260c.a(this.f11267d);
        io.sentry.android.core.performance.g a = io.sentry.android.core.performance.f.b().a(this.f11269i);
        o0 o0Var = null;
        if (a.c()) {
            d6.f11749e = a.b() == null ? null : ki.b.s(Double.valueOf(r1.f11013d / 1000000.0d).longValue());
        }
        if (!a5.k0.D(hint) && d6.H == null && (bool = e0.f11119w.f11123v) != null) {
            d6.H = Boolean.valueOf(!bool.booleanValue());
        }
        Context context = this.f11267d;
        SentryAndroidOptions sentryAndroidOptions = this.f11269i;
        ILogger logger = sentryAndroidOptions.getLogger();
        j0 j0Var = this.f11268e;
        PackageInfo f2 = k0.f(context, logger, j0Var);
        if (f2 != null) {
            String h6 = k0.h(f2, j0Var);
            if (f4Var.I == null) {
                f4Var.I = h6;
            }
            Future future = this.f11270v;
            if (future != null) {
                try {
                    o0Var = (o0) future.get();
                } catch (Throwable th2) {
                    sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to retrieve device info", th2);
                }
            } else {
                sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to retrieve device info", new Object[0]);
            }
            k0.k(f2, j0Var, o0Var, d6);
        }
        f4Var.f11544e.n(d6);
    }

    public final void b(f4 f4Var, boolean z5, boolean z6) {
        io.sentry.protocol.h0 h0Var = f4Var.F;
        if (h0Var == null) {
            h0Var = new io.sentry.protocol.h0();
            f4Var.F = h0Var;
        }
        String str = h0Var.f11797e;
        SentryAndroidOptions sentryAndroidOptions = this.f11269i;
        if (str == null) {
            h0Var.f11797e = (String) sentryAndroidOptions.getRuntimeManager().i(new hc.m(12, this));
        }
        if (h0Var.f11799v == null && sentryAndroidOptions.isSendDefaultPii()) {
            h0Var.f11799v = "{{auto}}";
        }
        io.sentry.protocol.c cVar = f4Var.f11544e;
        io.sentry.protocol.f e9 = cVar.e();
        Future future = this.f11270v;
        if (e9 == null) {
            if (future != null) {
                try {
                    cVar.p(((o0) future.get()).a(z5, z6));
                } catch (Throwable th2) {
                    sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to retrieve device info", th2);
                }
            } else {
                sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to retrieve device info", new Object[0]);
            }
            io.sentry.protocol.o g6 = cVar.g();
            if (future != null) {
                try {
                    cVar.s(((o0) future.get()).f11277g);
                } catch (Throwable th3) {
                    sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Failed to retrieve os system", th3);
                }
            } else {
                sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to retrieve device info", new Object[0]);
            }
            if (g6 != null) {
                String str2 = g6.f11846d;
                cVar.k(g6, (str2 == null || str2.isEmpty()) ? "os_1" : "os_" + str2.trim().toLowerCase(Locale.ROOT));
            }
        }
        if (future == null) {
            sentryAndroidOptions.getLogger().u(SentryLevel.ERROR, "Failed to retrieve device info", new Object[0]);
            return;
        }
        try {
            a3.n nVar = ((o0) future.get()).f11275e;
            if (nVar != null) {
                HashMap hashMap = new HashMap();
                hashMap.put("isSideLoaded", String.valueOf(nVar.f90b));
                String str3 = nVar.a;
                if (str3 != null) {
                    hashMap.put("installerStore", str3);
                }
                for (Map.Entry entry : hashMap.entrySet()) {
                    f4Var.c((String) entry.getKey(), (String) entry.getValue());
                }
            }
        } catch (Throwable th4) {
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting side loaded info.", th4);
        }
    }

    @Override // io.sentry.b0
    public final x5 c(x5 x5Var, Hint hint) {
        boolean d6 = d(x5Var, hint);
        if (d6) {
            a(x5Var, hint);
        }
        b(x5Var, false, d6);
        return x5Var;
    }

    public final boolean d(f4 f4Var, Hint hint) {
        if (a5.k0.U(hint)) {
            return true;
        }
        this.f11269i.getLogger().u(SentryLevel.DEBUG, "Event was cached so not applying data relevant to the current app execution/version: %s", f4Var.f11543d);
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0053  */
    @Override // io.sentry.b0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        io.sentry.protocol.a0 a0Var;
        List list;
        boolean z5;
        boolean d6 = d(sentryEvent, hint);
        if (d6) {
            a(sentryEvent, hint);
            e6 e6Var = sentryEvent.P;
            if ((e6Var != null ? e6Var.a : null) != null) {
                boolean D = a5.k0.D(hint);
                e6 e6Var2 = sentryEvent.P;
                Iterator it = (e6Var2 != null ? e6Var2.a : null).iterator();
                while (it.hasNext()) {
                    io.sentry.protocol.c0 c0Var = (io.sentry.protocol.c0) it.next();
                    io.sentry.android.core.internal.util.e.a.getClass();
                    Long l6 = c0Var.f11765d;
                    if (l6 != null) {
                        if (Looper.getMainLooper().getThread().getId() == l6.longValue()) {
                            z5 = true;
                            if (c0Var.f11770x == null) {
                                c0Var.f11770x = Boolean.valueOf(z5);
                            }
                            if (!D && c0Var.E == null) {
                                c0Var.E = Boolean.valueOf(z5);
                            }
                        }
                    }
                    z5 = false;
                    if (c0Var.f11770x == null) {
                    }
                    if (!D) {
                        c0Var.E = Boolean.valueOf(z5);
                    }
                }
            }
        }
        b(sentryEvent, true, d6);
        ArrayList d7 = sentryEvent.d();
        if (d7 != null && d7.size() > 1) {
            io.sentry.protocol.u uVar = (io.sentry.protocol.u) k0.d.f(1, d7);
            if ("java.lang".equals(uVar.f11890i) && (a0Var = uVar.f11892w) != null && (list = a0Var.f11755d) != null) {
                Iterator it2 = list.iterator();
                while (true) {
                    if (!it2.hasNext()) {
                        break;
                    }
                    if ("com.android.internal.os.RuntimeInit$MethodAndArgsCaller".equals(((SentryStackFrame) it2.next()).f11746x)) {
                        Collections.reverse(d7);
                        break;
                    }
                }
            }
        }
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        boolean d6 = d(d0Var, hint);
        if (d6) {
            a(d0Var, hint);
        }
        b(d0Var, false, d6);
        return d0Var;
    }
}
