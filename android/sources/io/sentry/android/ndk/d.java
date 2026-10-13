package io.sentry.android.ndk;

import io.sentry.Breadcrumb;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.i6;
import io.sentry.ndk.NativeScope;
import io.sentry.p3;
import io.sentry.protocol.h0;
import io.sentry.s3;
import io.sentry.v5;

/* loaded from: classes3.dex */
public final class d extends s3 {
    public final v5 a;

    /* renamed from: b, reason: collision with root package name */
    public final NativeScope f11375b;

    public d(SentryAndroidOptions sentryAndroidOptions) {
        NativeScope nativeScope = new NativeScope();
        d9.a.L(sentryAndroidOptions, "The SentryOptions object is required.");
        this.a = sentryAndroidOptions;
        this.f11375b = nativeScope;
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void b(String str) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new c(this, str, 1));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync removeExtra(%s) has an error.", str);
        }
    }

    @Override // io.sentry.w0
    public final void c(Breadcrumb breadcrumb) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new com.mkuczera.haptic.a(15, this, breadcrumb));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync addBreadcrumb has an error.", new Object[0]);
        }
    }

    @Override // io.sentry.w0
    public final void e(i6 i6Var, p3 p3Var) {
        v5 v5Var = this.a;
        if (i6Var == null) {
            return;
        }
        try {
            v5Var.getExecutorService().submit(new com.mkuczera.haptic.a(17, this, i6Var));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync setTrace failed.", new Object[0]);
        }
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void f(String str, String str2) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new b(this, str, str2, 1));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync setTag(%s) has an error.", str);
        }
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void j(String str, String str2) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new b(this, str, str2, 0));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync setExtra(%s) has an error.", str);
        }
    }

    @Override // io.sentry.w0
    public final void m(h0 h0Var) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new com.mkuczera.haptic.a(16, this, h0Var));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync setUser has an error.", new Object[0]);
        }
    }

    @Override // io.sentry.s3, io.sentry.w0
    public final void n(String str) {
        v5 v5Var = this.a;
        try {
            v5Var.getExecutorService().submit(new c(this, str, 0));
        } catch (Throwable th2) {
            v5Var.getLogger().i(SentryLevel.ERROR, th2, "Scope sync removeTag(%s) has an error.", str);
        }
    }
}
