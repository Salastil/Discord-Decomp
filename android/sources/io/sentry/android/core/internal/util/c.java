package io.sentry.android.core.internal.util;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.SystemClock;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.android.core.b0;
import io.sentry.android.core.e0;
import io.sentry.android.core.j0;
import io.sentry.k0;
import io.sentry.l0;
import io.sentry.m0;
import io.sentry.r;
import io.sentry.v5;
import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class c implements m0, b0 {
    public static volatile ConnectivityManager J;
    public volatile NetworkCapabilities E;
    public volatile Network F;
    public volatile long G;
    public final AtomicBoolean H;

    /* renamed from: d, reason: collision with root package name */
    public final Context f11214d;

    /* renamed from: e, reason: collision with root package name */
    public final v5 f11215e;

    /* renamed from: i, reason: collision with root package name */
    public final j0 f11216i;

    /* renamed from: v, reason: collision with root package name */
    public final d f11217v;

    /* renamed from: w, reason: collision with root package name */
    public final ArrayList f11218w;

    /* renamed from: x, reason: collision with root package name */
    public final io.sentry.util.a f11219x;

    /* renamed from: y, reason: collision with root package name */
    public volatile b f11220y;
    public static final io.sentry.util.a I = new io.sentry.util.a();
    public static final io.sentry.util.a K = new io.sentry.util.a();
    public static final ArrayList L = new ArrayList();
    public static final int[] M = {1, 0, 3, 2};
    public static final int[] N = new int[2];

    public c(Context context, j0 j0Var, SentryAndroidOptions sentryAndroidOptions) {
        d dVar = d.f11221d;
        this.f11219x = new io.sentry.util.a();
        this.G = 0L;
        this.H = new AtomicBoolean(false);
        Context applicationContext = context.getApplicationContext();
        this.f11214d = applicationContext != null ? applicationContext : context;
        this.f11215e = sentryAndroidOptions;
        this.f11216i = j0Var;
        this.f11217v = dVar;
        this.f11218w = new ArrayList();
        int[] iArr = N;
        iArr[0] = 12;
        iArr[1] = 16;
        t(new a(this, 1));
        e0.f11119w.c(this);
    }

    public static boolean g(Context context, ILogger iLogger, j0 j0Var, ConnectivityManager.NetworkCallback networkCallback) {
        j0Var.getClass();
        if (!tn.g.m(context)) {
            iLogger.u(SentryLevel.INFO, "No permission (ACCESS_NETWORK_STATE) to check network status.", new Object[0]);
            return false;
        }
        r a = K.a();
        try {
            L.add(networkCallback);
            a.close();
            return true;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static String o(NetworkCapabilities networkCapabilities) {
        if (networkCapabilities.hasTransport(3)) {
            return "ethernet";
        }
        if (networkCapabilities.hasTransport(1)) {
            return "wifi";
        }
        if (networkCapabilities.hasTransport(0)) {
            return "cellular";
        }
        return null;
    }

    public static ConnectivityManager r(Context context, ILogger iLogger) {
        if (J != null) {
            return J;
        }
        r a = I.a();
        try {
            if (J != null) {
                ConnectivityManager connectivityManager = J;
                a.close();
                return connectivityManager;
            }
            J = (ConnectivityManager) context.getSystemService("connectivity");
            if (J == null) {
                iLogger.u(SentryLevel.INFO, "ConnectivityManager is null and cannot check network status", new Object[0]);
            }
            ConnectivityManager connectivityManager2 = J;
            a.close();
            return connectivityManager2;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final void A(NetworkCapabilities networkCapabilities) {
        r a = this.f11219x.a();
        try {
            if (networkCapabilities != null) {
                this.E = networkCapabilities;
            } else {
                if (!tn.g.m(this.f11214d)) {
                    this.f11215e.getLogger().u(SentryLevel.INFO, "No permission (ACCESS_NETWORK_STATE) to check network status.", new Object[0]);
                    this.E = null;
                    this.f11217v.getClass();
                    this.G = SystemClock.uptimeMillis();
                    a.close();
                    return;
                }
                this.f11216i.getClass();
                ConnectivityManager r5 = r(this.f11214d, this.f11215e.getLogger());
                if (r5 != null) {
                    Network activeNetwork = r5.getActiveNetwork();
                    this.E = activeNetwork != null ? r5.getNetworkCapabilities(activeNetwork) : null;
                } else {
                    this.E = null;
                }
            }
            this.f11217v.getClass();
            this.G = SystemClock.uptimeMillis();
            this.f11215e.getLogger().u(SentryLevel.DEBUG, "Cache updated - Status: " + l() + ", Type: " + q(), new Object[0]);
        } catch (Throwable th2) {
            try {
                this.f11215e.getLogger().k(SentryLevel.WARNING, "Failed to update connection status cache", th2);
                this.E = null;
                this.f11217v.getClass();
                this.G = SystemClock.uptimeMillis();
            } catch (Throwable th3) {
                try {
                    a.close();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        }
        a.close();
    }

    @Override // io.sentry.m0
    public final k0 I() {
        this.f11217v.getClass();
        if (SystemClock.uptimeMillis() - this.G >= 120000) {
            A(null);
        }
        return l();
    }

    @Override // io.sentry.m0
    public final boolean M(l0 l0Var) {
        r a = this.f11219x.a();
        try {
            this.f11218w.add(l0Var);
            a.close();
            i();
            return this.f11220y != null;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.m0
    public final void Z(l0 l0Var) {
        r a = this.f11219x.a();
        try {
            this.f11218w.remove(l0Var);
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // io.sentry.android.core.b0
    public final void c() {
        if (this.f11220y != null) {
            return;
        }
        t(new a(this, 3));
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        t(new a(this, 0));
    }

    @Override // io.sentry.android.core.b0
    public final void f() {
        if (this.f11220y == null) {
            return;
        }
        t(new a(this, 2));
    }

    public final void i() {
        if (io.sentry.android.core.k0.i() && this.f11220y == null) {
            r a = this.f11219x.a();
            try {
                if (this.f11220y != null) {
                    a.close();
                    return;
                }
                b bVar = new b(this);
                Context context = this.f11214d;
                ILogger logger = this.f11215e.getLogger();
                this.f11216i.getClass();
                ConnectivityManager r5 = r(context, logger);
                if (r5 != null) {
                    if (tn.g.m(context)) {
                        try {
                            r5.registerDefaultNetworkCallback(bVar);
                            this.f11220y = bVar;
                            this.f11215e.getLogger().u(SentryLevel.DEBUG, "Network callback registered successfully", new Object[0]);
                        } catch (Throwable th2) {
                            logger.k(SentryLevel.WARNING, "registerDefaultNetworkCallback failed", th2);
                        }
                        a.close();
                    }
                    logger.u(SentryLevel.INFO, "No permission (ACCESS_NETWORK_STATE) to check network status.", new Object[0]);
                }
                this.f11215e.getLogger().u(SentryLevel.WARNING, "Failed to register network callback", new Object[0]);
                a.close();
            } catch (Throwable th3) {
                try {
                    a.close();
                } catch (Throwable th4) {
                    th3.addSuppressed(th4);
                }
                throw th3;
            }
        }
    }

    public final k0 l() {
        if (this.E != null) {
            NetworkCapabilities networkCapabilities = this.E;
            if (networkCapabilities != null) {
                boolean hasCapability = networkCapabilities.hasCapability(12);
                this.f11216i.getClass();
                if (hasCapability && networkCapabilities.hasCapability(16)) {
                    for (int i5 : M) {
                        if (networkCapabilities.hasTransport(i5)) {
                            return k0.CONNECTED;
                        }
                    }
                }
            }
            return k0.DISCONNECTED;
        }
        ConnectivityManager r5 = r(this.f11214d, this.f11215e.getLogger());
        if (r5 == null) {
            return k0.UNKNOWN;
        }
        Context context = this.f11214d;
        ILogger logger = this.f11215e.getLogger();
        if (!tn.g.m(context)) {
            logger.u(SentryLevel.INFO, "No permission (ACCESS_NETWORK_STATE) to check network status.", new Object[0]);
            return k0.NO_PERMISSION;
        }
        try {
            NetworkInfo activeNetworkInfo = r5.getActiveNetworkInfo();
            if (activeNetworkInfo != null) {
                return activeNetworkInfo.isConnected() ? k0.CONNECTED : k0.DISCONNECTED;
            }
            logger.u(SentryLevel.INFO, "NetworkInfo is null, there's no active network.", new Object[0]);
            return k0.DISCONNECTED;
        } catch (Throwable th2) {
            logger.k(SentryLevel.WARNING, "Could not retrieve Connection Status", th2);
            return k0.UNKNOWN;
        }
    }

    public final String q() {
        NetworkCapabilities networkCapabilities = this.E;
        if (networkCapabilities != null) {
            return o(networkCapabilities);
        }
        Context context = this.f11214d;
        ILogger logger = this.f11215e.getLogger();
        j0 j0Var = this.f11216i;
        ConnectivityManager r5 = r(context, logger);
        if (r5 != null) {
            if (!tn.g.m(context)) {
                logger.u(SentryLevel.INFO, "No permission (ACCESS_NETWORK_STATE) to check network status.", new Object[0]);
                return null;
            }
            try {
                j0Var.getClass();
                Network activeNetwork = r5.getActiveNetwork();
                if (activeNetwork == null) {
                    logger.u(SentryLevel.INFO, "Network is null and cannot check network status", new Object[0]);
                    return null;
                }
                NetworkCapabilities networkCapabilities2 = r5.getNetworkCapabilities(activeNetwork);
                if (networkCapabilities2 == null) {
                    logger.u(SentryLevel.INFO, "NetworkCapabilities is null and cannot check network type", new Object[0]);
                    return null;
                }
                boolean hasTransport = networkCapabilities2.hasTransport(3);
                boolean hasTransport2 = networkCapabilities2.hasTransport(1);
                boolean hasTransport3 = networkCapabilities2.hasTransport(0);
                if (hasTransport) {
                    return "ethernet";
                }
                if (hasTransport2) {
                    return "wifi";
                }
                if (hasTransport3) {
                    return "cellular";
                }
            } catch (Throwable th2) {
                logger.k(SentryLevel.ERROR, "Failed to retrieve network info", th2);
                return null;
            }
        }
        return null;
    }

    @Override // io.sentry.m0
    public final String s() {
        this.f11217v.getClass();
        if (SystemClock.uptimeMillis() - this.G >= 120000) {
            A(null);
        }
        return q();
    }

    public final void t(Runnable runnable) {
        v5 v5Var = this.f11215e;
        try {
            v5Var.getExecutorService().submit(runnable);
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "AndroidConnectionStatusProvider submit failed", th2);
        }
    }

    public final void x(boolean z5) {
        r a = this.f11219x.a();
        if (z5) {
            try {
                this.f11218w.clear();
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        b bVar = this.f11220y;
        this.f11220y = null;
        if (bVar != null) {
            Context context = this.f11214d;
            ILogger logger = this.f11215e.getLogger();
            ConnectivityManager r5 = r(context, logger);
            if (r5 != null) {
                try {
                    r5.unregisterNetworkCallback(bVar);
                } catch (Throwable th4) {
                    logger.k(SentryLevel.WARNING, "unregisterNetworkCallback failed", th4);
                }
            }
        }
        this.E = null;
        this.F = null;
        this.G = 0L;
        a.close();
        this.f11215e.getLogger().u(SentryLevel.DEBUG, "Network callback unregistered", new Object[0]);
    }
}
