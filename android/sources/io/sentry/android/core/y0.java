package io.sentry.android.core;

import android.net.NetworkCapabilities;
import android.os.Build;

/* loaded from: classes3.dex */
public final class y0 {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f11358b;

    /* renamed from: c, reason: collision with root package name */
    public final int f11359c;

    /* renamed from: d, reason: collision with root package name */
    public final long f11360d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f11361e;

    /* renamed from: f, reason: collision with root package name */
    public final String f11362f;

    public y0(NetworkCapabilities networkCapabilities, j0 j0Var, long j) {
        d9.a.L(networkCapabilities, "NetworkCapabilities is required");
        d9.a.L(j0Var, "BuildInfoProvider is required");
        this.a = networkCapabilities.getLinkDownstreamBandwidthKbps();
        this.f11358b = networkCapabilities.getLinkUpstreamBandwidthKbps();
        int signalStrength = Build.VERSION.SDK_INT >= 29 ? networkCapabilities.getSignalStrength() : 0;
        this.f11359c = signalStrength > -100 ? signalStrength : 0;
        this.f11361e = networkCapabilities.hasTransport(4);
        String o6 = io.sentry.android.core.internal.util.c.o(networkCapabilities);
        this.f11362f = o6 == null ? "" : o6;
        this.f11360d = j;
    }
}
