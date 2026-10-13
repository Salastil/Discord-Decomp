package ys;

import android.net.http.X509TrustManagerExtensions;
import android.os.Build;
import android.security.NetworkSecurityPolicy;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.X509TrustManager;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends n {

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f21091d;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f21092c;

    static {
        f21091d = j8.c.o() && Build.VERSION.SDK_INT >= 29;
    }

    public a() {
        zs.m[] elements = {(!j8.c.o() || Build.VERSION.SDK_INT < 29) ? null : new zs.a(), new zs.l(zs.f.f21440f), new zs.l(zs.j.a), new zs.l(zs.h.a)};
        Intrinsics.checkNotNullParameter(elements, "elements");
        ArrayList r5 = x.r(elements);
        ArrayList arrayList = new ArrayList();
        Iterator it = r5.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            if (((zs.m) next).b()) {
                arrayList.add(next);
            }
        }
        this.f21092c = arrayList;
    }

    @Override // ys.n
    public final e4.f b(X509TrustManager trustManager) {
        X509TrustManagerExtensions x509TrustManagerExtensions;
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        try {
            x509TrustManagerExtensions = new X509TrustManagerExtensions(trustManager);
        } catch (IllegalArgumentException unused) {
            x509TrustManagerExtensions = null;
        }
        zs.b bVar = x509TrustManagerExtensions != null ? new zs.b(trustManager, x509TrustManagerExtensions) : null;
        return bVar == null ? super.b(trustManager) : bVar;
    }

    @Override // ys.n
    public final void d(SSLSocket sslSocket, String str, List protocols) {
        Object obj;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        Iterator it = this.f21092c.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            } else {
                obj = it.next();
                if (((zs.m) obj).a(sslSocket)) {
                    break;
                }
            }
        }
        zs.m mVar = (zs.m) obj;
        if (mVar == null) {
            return;
        }
        mVar.d(sslSocket, str, protocols);
    }

    @Override // ys.n
    public final String f(SSLSocket sslSocket) {
        Object obj;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Iterator it = this.f21092c.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (((zs.m) obj).a(sslSocket)) {
                break;
            }
        }
        zs.m mVar = (zs.m) obj;
        if (mVar == null) {
            return null;
        }
        return mVar.c(sslSocket);
    }

    @Override // ys.n
    public final boolean h(String hostname) {
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        return NetworkSecurityPolicy.getInstance().isCleartextTrafficPermitted(hostname);
    }
}
