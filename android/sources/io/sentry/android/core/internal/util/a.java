package io.sentry.android.core.internal.util;

import android.net.ConnectivityManager;
import io.sentry.android.core.e0;
import io.sentry.k0;
import io.sentry.l0;
import io.sentry.r;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11212d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f11213e;

    public /* synthetic */ a(c cVar, int i5) {
        this.f11212d = i5;
        this.f11213e = cVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        r a;
        r a10;
        switch (this.f11212d) {
            case 0:
                c cVar = this.f11213e;
                cVar.x(true);
                a = c.K.a();
                try {
                    c.L.clear();
                    a.close();
                    a10 = c.I.a();
                    try {
                        c.J = null;
                        a10.close();
                        e0.f11119w.i(cVar);
                        return;
                    } finally {
                        try {
                            a10.close();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                    }
                } finally {
                    try {
                        a.close();
                    } catch (Throwable th3) {
                        th.addSuppressed(th3);
                    }
                }
            case 1:
                this.f11213e.i();
                return;
            case 2:
                this.f11213e.x(false);
                return;
            default:
                c cVar2 = this.f11213e;
                cVar2.A(null);
                k0 l6 = cVar2.l();
                if (l6 == k0.DISCONNECTED) {
                    cVar2.H.set(false);
                    a = c.K.a();
                    try {
                        Iterator it = c.L.iterator();
                        while (it.hasNext()) {
                            ((ConnectivityManager.NetworkCallback) it.next()).onLost(null);
                        }
                        a.close();
                    } finally {
                    }
                }
                a10 = cVar2.f11219x.a();
                try {
                    Iterator it2 = cVar2.f11218w.iterator();
                    while (it2.hasNext()) {
                        ((l0) it2.next()).onConnectionStatusChanged(l6);
                    }
                    a10.close();
                    cVar2.i();
                    return;
                } finally {
                }
        }
    }
}
