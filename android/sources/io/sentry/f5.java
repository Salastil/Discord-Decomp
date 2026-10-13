package io.sentry;

import io.sentry.android.core.SentryAndroidOptions;

/* loaded from: classes3.dex */
public final /* synthetic */ class f5 implements io.sentry.util.d {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11550d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ v5 f11551e;

    public /* synthetic */ f5(v5 v5Var, int i5) {
        this.f11550d = i5;
        this.f11551e = v5Var;
    }

    @Override // io.sentry.util.d
    public final Object b() {
        switch (this.f11550d) {
            case 0:
                return v5.a(this.f11551e);
            case 1:
                v5 v5Var = this.f11551e;
                v5Var.getClass();
                return new z1(v5Var);
            case 2:
                return v5.b(this.f11551e);
            default:
                return Boolean.valueOf(io.sentry.util.f.a(this.f11551e, "androidx.core.view.ScrollingView"));
        }
    }

    public /* synthetic */ f5(io.sentry.util.f fVar, SentryAndroidOptions sentryAndroidOptions) {
        this.f11550d = 3;
        this.f11551e = sentryAndroidOptions;
    }
}
