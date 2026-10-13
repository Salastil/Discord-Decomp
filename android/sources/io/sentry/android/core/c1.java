package io.sentry.android.core;

import android.content.Context;
import android.os.SystemClock;
import io.sentry.SentryLevel;
import io.sentry.android.fragment.FragmentLifecycleIntegration;
import io.sentry.android.timber.SentryTimberIntegration;
import io.sentry.b4;
import io.sentry.c4;
import io.sentry.g2;
import io.sentry.l1;
import io.sentry.v5;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public abstract class c1 {
    public static final long a = SystemClock.uptimeMillis();

    /* renamed from: b, reason: collision with root package name */
    public static final io.sentry.util.a f11106b = new io.sentry.util.a();

    public static void a(v5 v5Var, boolean z5, boolean z6) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        for (l1 l1Var : v5Var.getIntegrations()) {
            if (z5 && (l1Var instanceof FragmentLifecycleIntegration)) {
                arrayList2.add(l1Var);
            }
            if (z6 && (l1Var instanceof SentryTimberIntegration)) {
                arrayList.add(l1Var);
            }
            if (l1Var instanceof SystemEventsBreadcrumbsIntegration) {
                arrayList3.add(l1Var);
            }
        }
        if (arrayList2.size() > 1) {
            for (int i5 = 0; i5 < arrayList2.size() - 1; i5++) {
                v5Var.getIntegrations().remove((l1) arrayList2.get(i5));
            }
        }
        if (arrayList.size() > 1) {
            for (int i6 = 0; i6 < arrayList.size() - 1; i6++) {
                v5Var.getIntegrations().remove((l1) arrayList.get(i6));
            }
        }
        if (arrayList3.size() > 1) {
            for (int i10 = 0; i10 < arrayList3.size() - 1; i10++) {
                v5Var.getIntegrations().remove((l1) arrayList3.get(i10));
            }
        }
    }

    public static void b(Context context, l0 l0Var, b4 b4Var) {
        try {
            io.sentry.r a10 = f11106b.a();
            try {
                c4.g(new g2(5), new e(l0Var, context, b4Var));
                io.sentry.x0 f2 = c4.f();
                if (k0.i()) {
                    if (f2.l().isEnableAutoSessionTracking()) {
                        AtomicBoolean atomicBoolean = new AtomicBoolean(false);
                        f2.q(null, new hc.m(16, atomicBoolean));
                        if (!atomicBoolean.get()) {
                            f2.p();
                        }
                    }
                    f2.l().getReplayController().start();
                }
                a10.close();
            } catch (Throwable th2) {
                try {
                    a10.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } catch (IllegalAccessException e9) {
            l0Var.k(SentryLevel.FATAL, "Fatal error during SentryAndroid.init(...)", e9);
            throw new RuntimeException("Failed to initialize Sentry's SDK", e9);
        } catch (InstantiationException e10) {
            l0Var.k(SentryLevel.FATAL, "Fatal error during SentryAndroid.init(...)", e10);
            throw new RuntimeException("Failed to initialize Sentry's SDK", e10);
        } catch (NoSuchMethodException e11) {
            l0Var.k(SentryLevel.FATAL, "Fatal error during SentryAndroid.init(...)", e11);
            throw new RuntimeException("Failed to initialize Sentry's SDK", e11);
        } catch (InvocationTargetException e12) {
            l0Var.k(SentryLevel.FATAL, "Fatal error during SentryAndroid.init(...)", e12);
            throw new RuntimeException("Failed to initialize Sentry's SDK", e12);
        }
    }
}
