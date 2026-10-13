package io.sentry.android.core;

import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.SentryLevel;
import io.sentry.j4;
import io.sentry.v3;

/* loaded from: classes3.dex */
public final class z0 extends ConnectivityManager.NetworkCallback {

    /* renamed from: b, reason: collision with root package name */
    public final j0 f11364b;

    /* renamed from: e, reason: collision with root package name */
    public final j4 f11367e;

    /* renamed from: c, reason: collision with root package name */
    public NetworkCapabilities f11365c = null;

    /* renamed from: d, reason: collision with root package name */
    public long f11366d = 0;
    public final v3 a = v3.a;

    public z0(j0 j0Var, j4 j4Var) {
        d9.a.L(j0Var, "BuildInfoProvider is required");
        this.f11364b = j0Var;
        d9.a.L(j4Var, "SentryDateProvider is required");
        this.f11367e = j4Var;
    }

    public static Breadcrumb a(String str) {
        Breadcrumb breadcrumb = new Breadcrumb();
        breadcrumb.f10976w = "system";
        breadcrumb.f10978y = "network.event";
        breadcrumb.c(str, "action");
        breadcrumb.F = SentryLevel.INFO;
        return breadcrumb;
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onAvailable(Network network) {
        this.a.c(a("NETWORK_AVAILABLE"));
        this.f11365c = null;
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
        y0 y0Var;
        long d6 = this.f11367e.now().d();
        NetworkCapabilities networkCapabilities2 = this.f11365c;
        long j = this.f11366d;
        j0 j0Var = this.f11364b;
        if (networkCapabilities2 == null) {
            y0Var = new y0(networkCapabilities, j0Var, d6);
        } else {
            y0 y0Var2 = new y0(networkCapabilities2, j0Var, j);
            y0Var = new y0(networkCapabilities, j0Var, d6);
            int abs = Math.abs(y0Var2.f11359c - y0Var.f11359c);
            int i5 = y0Var.a;
            int i6 = y0Var2.a;
            int abs2 = Math.abs(i6 - i5);
            int i10 = y0Var.f11358b;
            int i11 = y0Var2.f11358b;
            int abs3 = Math.abs(i11 - i10);
            boolean z5 = ((double) Math.abs(y0Var2.f11360d - y0Var.f11360d)) / 1000000.0d < 5000.0d;
            boolean z6 = z5 || abs <= 5;
            boolean z7 = z5 || ((double) abs2) <= Math.max(1000.0d, ((double) Math.abs(i6)) * 0.1d);
            boolean z8 = z5 || ((double) abs3) <= Math.max(1000.0d, ((double) Math.abs(i11)) * 0.1d);
            if (y0Var2.f11361e == y0Var.f11361e && y0Var2.f11362f.equals(y0Var.f11362f) && z6 && z7 && z8) {
                y0Var = null;
            }
        }
        if (y0Var == null) {
            return;
        }
        this.f11365c = networkCapabilities;
        this.f11366d = d6;
        Breadcrumb a = a("NETWORK_CAPABILITIES_CHANGED");
        a.c(Integer.valueOf(y0Var.a), "download_bandwidth");
        a.c(Integer.valueOf(y0Var.f11358b), "upload_bandwidth");
        a.c(Boolean.valueOf(y0Var.f11361e), "vpn_active");
        a.c(y0Var.f11362f, "network_type");
        int i12 = y0Var.f11359c;
        if (i12 != 0) {
            a.c(Integer.valueOf(i12), "signal_strength");
        }
        Hint hint = new Hint();
        hint.d(y0Var, "android:networkCapabilities");
        this.a.g(a, hint);
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onLost(Network network) {
        this.a.c(a("NETWORK_LOST"));
        this.f11365c = null;
    }
}
