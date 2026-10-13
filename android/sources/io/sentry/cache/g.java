package io.sentry.cache;

import hc.m;
import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.h1;
import io.sentry.i6;
import io.sentry.p3;
import io.sentry.protocol.h0;
import io.sentry.protocol.v;
import io.sentry.s3;
import io.sentry.v5;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class g extends s3 {

    /* renamed from: c, reason: collision with root package name */
    public static final Charset f11441c = Charset.forName("UTF-8");
    public final v5 a;

    /* renamed from: b, reason: collision with root package name */
    public final io.sentry.util.e f11442b = new io.sentry.util.e(new m(21, this));

    public g(SentryAndroidOptions sentryAndroidOptions) {
        this.a = sentryAndroidOptions;
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void a(Collection collection) {
        if (collection.isEmpty()) {
            q(new h1(5, this));
        }
    }

    @Override // io.sentry.w0
    public final void c(Breadcrumb breadcrumb) {
        q(new com.mkuczera.haptic.a(24, this, breadcrumb));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void d(ConcurrentHashMap concurrentHashMap) {
        q(new f(this, concurrentHashMap, 0));
    }

    @Override // io.sentry.w0
    public final void e(i6 i6Var, p3 p3Var) {
        q(new androidx.fragment.app.e(this, i6Var, p3Var, 23));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void g(io.sentry.protocol.c cVar) {
        q(new com.mkuczera.haptic.a(25, this, cVar));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void h(ConcurrentHashMap concurrentHashMap) {
        q(new f(this, concurrentHashMap, 1));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void i(List list) {
        q(new com.mkuczera.haptic.a(23, this, list));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void k(v vVar) {
        q(new com.mkuczera.haptic.a(20, this, vVar));
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void l(String str) {
        q(new com.mkuczera.haptic.a(21, this, str));
    }

    @Override // io.sentry.w0
    public final void m(h0 h0Var) {
        q(new com.mkuczera.haptic.a(22, this, h0Var));
    }

    public final void o(String str) {
        a.a(this.a, ".scope-cache", str);
    }

    public final Object p(v5 v5Var, String str, Class cls) {
        if (!str.equals("breadcrumbs.json")) {
            return a.c(v5Var, ".scope-cache", str, cls);
        }
        try {
            io.sentry.cache.tape.f fVar = (io.sentry.cache.tape.f) this.f11442b.a();
            int min = Math.min(fVar.size(), fVar.size());
            ArrayList arrayList = new ArrayList(min);
            Iterator it = fVar.iterator();
            for (int i5 = 0; i5 < min; i5++) {
                arrayList.add(it.next());
            }
            return cls.cast(Collections.unmodifiableList(arrayList));
        } catch (IOException unused) {
            v5Var.getLogger().u(SentryLevel.ERROR, "Unable to read serialized breadcrumbs from QueueFile", new Object[0]);
            return null;
        }
    }

    public final void q(Runnable runnable) {
        v5 v5Var = this.a;
        if (v5Var.isEnableScopePersistence()) {
            if (Thread.currentThread().getName().contains("SentryExecutor")) {
                try {
                    runnable.run();
                    return;
                } catch (Throwable th2) {
                    v5Var.getLogger().k(SentryLevel.ERROR, "Serialization task failed", th2);
                    return;
                }
            }
            try {
                v5Var.getExecutorService().submit(new com.mkuczera.haptic.a(26, this, runnable));
            } catch (Throwable th3) {
                v5Var.getLogger().k(SentryLevel.ERROR, "Serialization task could not be scheduled", th3);
            }
        }
    }

    public final void r(Object obj, String str) {
        a.d(this.a, obj, ".scope-cache", str);
    }
}
