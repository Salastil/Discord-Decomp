package io.sentry.android.core.internal.util;

import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.os.SystemClock;
import io.sentry.SentryLevel;
import io.sentry.k0;
import io.sentry.l0;
import io.sentry.r;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class b extends ConnectivityManager.NetworkCallback {
    public final /* synthetic */ c a;

    public b(c cVar) {
        this.a = cVar;
    }

    public final void a() {
        this.a.H.set(false);
        r a = this.a.f11219x.a();
        try {
            this.a.E = null;
            this.a.F = null;
            c cVar = this.a;
            cVar.f11217v.getClass();
            cVar.G = SystemClock.uptimeMillis();
            this.a.f11215e.getLogger().u(SentryLevel.DEBUG, "Cache cleared - network lost/unavailable", new Object[0]);
            Iterator it = this.a.f11218w.iterator();
            while (it.hasNext()) {
                ((l0) it.next()).onConnectionStatusChanged(k0.DISCONNECTED);
            }
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

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onAvailable(Network network) {
        this.a.F = network;
        if (this.a.H.getAndSet(true)) {
            return;
        }
        r a = c.K.a();
        try {
            Iterator it = c.L.iterator();
            while (it.hasNext()) {
                ((ConnectivityManager.NetworkCallback) it.next()).onAvailable(network);
            }
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

    /* JADX WARN: Removed duplicated region for block: B:18:0x009a A[Catch: all -> 0x00a4, LOOP:0: B:16:0x0094->B:18:0x009a, LOOP_END, TRY_LEAVE, TryCatch #1 {all -> 0x00a4, blocks: (B:15:0x008e, B:16:0x0094, B:18:0x009a), top: B:14:0x008e }] */
    @Override // android.net.ConnectivityManager.NetworkCallback
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
        k0 l6;
        r a;
        Iterator it;
        if (!network.equals(this.a.F)) {
            return;
        }
        NetworkCapabilities networkCapabilities2 = this.a.E;
        try {
            try {
                if ((networkCapabilities2 == null) == (networkCapabilities == null)) {
                    if (networkCapabilities2 != null || networkCapabilities != null) {
                        int[] iArr = c.N;
                        int length = iArr.length;
                        int i5 = 0;
                        while (true) {
                            if (i5 < length) {
                                int i6 = iArr[i5];
                                if (i6 != 0 && networkCapabilities2.hasCapability(i6) != networkCapabilities.hasCapability(i6)) {
                                    break;
                                } else {
                                    i5++;
                                }
                            } else {
                                for (int i10 : c.M) {
                                    if (networkCapabilities2.hasTransport(i10) == networkCapabilities.hasTransport(i10)) {
                                    }
                                }
                            }
                        }
                    }
                    a = c.K.a();
                    it = c.L.iterator();
                    while (it.hasNext()) {
                        ((ConnectivityManager.NetworkCallback) it.next()).onCapabilitiesChanged(network, networkCapabilities);
                    }
                    a.close();
                    return;
                }
                it = c.L.iterator();
                while (it.hasNext()) {
                }
                a.close();
                return;
            } finally {
            }
            Iterator it2 = this.a.f11218w.iterator();
            while (it2.hasNext()) {
                ((l0) it2.next()).onConnectionStatusChanged(l6);
            }
            a.close();
            a = c.K.a();
        } finally {
        }
        this.a.A(networkCapabilities);
        l6 = this.a.l();
        a = this.a.f11219x.a();
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onLost(Network network) {
        if (network.equals(this.a.F)) {
            a();
            r a = c.K.a();
            try {
                Iterator it = c.L.iterator();
                while (it.hasNext()) {
                    ((ConnectivityManager.NetworkCallback) it.next()).onLost(network);
                }
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
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public final void onUnavailable() {
        a();
        r a = c.K.a();
        try {
            Iterator it = c.L.iterator();
            while (it.hasNext()) {
                ((ConnectivityManager.NetworkCallback) it.next()).onUnavailable();
            }
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
}
