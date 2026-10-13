package ys;

import android.net.http.X509TrustManagerExtensions;
import android.os.Build;
import android.security.NetworkSecurityPolicy;
import androidx.appcompat.widget.b3;
import java.io.IOException;
import java.lang.reflect.Method;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.X509TrustManager;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends n {

    /* renamed from: e, reason: collision with root package name */
    public static final boolean f21094e;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f21095c;

    /* renamed from: d, reason: collision with root package name */
    public final b3 f21096d;

    static {
        boolean z5 = false;
        if (j8.c.o() && Build.VERSION.SDK_INT < 30) {
            z5 = true;
        }
        f21094e = z5;
    }

    public c() {
        zs.n nVar;
        Method method;
        Method method2;
        int i5 = zs.n.f21446g;
        Intrinsics.checkNotNullParameter("com.android.org.conscrypt", "packageName");
        Method method3 = null;
        try {
            Class<?> sslSocketClass = Class.forName(Intrinsics.stringPlus("com.android.org.conscrypt", ".OpenSSLSocketImpl"));
            Class<?> sslSocketFactoryClass = Class.forName(Intrinsics.stringPlus("com.android.org.conscrypt", ".OpenSSLSocketFactoryImpl"));
            Class<?> paramClass = Class.forName(Intrinsics.stringPlus("com.android.org.conscrypt", ".SSLParametersImpl"));
            Intrinsics.checkNotNullExpressionValue(paramClass, "paramsClass");
            Intrinsics.checkNotNullParameter(sslSocketClass, "sslSocketClass");
            Intrinsics.checkNotNullParameter(sslSocketFactoryClass, "sslSocketFactoryClass");
            Intrinsics.checkNotNullParameter(paramClass, "paramClass");
            nVar = new zs.n(sslSocketClass);
        } catch (Exception e9) {
            n.a.getClass();
            n.i(5, "unable to load android socket classes", e9);
            nVar = null;
        }
        zs.m[] elements = {nVar, new zs.l(zs.f.f21440f), new zs.l(zs.j.a), new zs.l(zs.h.a)};
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
        this.f21095c = arrayList;
        try {
            Class<?> cls = Class.forName("dalvik.system.CloseGuard");
            Method method4 = cls.getMethod("get", null);
            method2 = cls.getMethod("open", String.class);
            method = cls.getMethod("warnIfOpen", null);
            method3 = method4;
        } catch (Exception unused) {
            method = null;
            method2 = null;
        }
        this.f21096d = new b3(method3, method2, method);
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
    public final ct.d c(X509TrustManager trustManager) {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        try {
            Method method = trustManager.getClass().getDeclaredMethod("findTrustAnchorByIssuerAndSignature", X509Certificate.class);
            method.setAccessible(true);
            Intrinsics.checkNotNullExpressionValue(method, "method");
            return new b(trustManager, method);
        } catch (NoSuchMethodException unused) {
            return super.c(trustManager);
        }
    }

    @Override // ys.n
    public final void d(SSLSocket sslSocket, String str, List protocols) {
        Object obj;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        Iterator it = this.f21095c.iterator();
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
    public final void e(Socket socket, InetSocketAddress address, int i5) {
        Intrinsics.checkNotNullParameter(socket, "socket");
        Intrinsics.checkNotNullParameter(address, "address");
        try {
            socket.connect(address, i5);
        } catch (ClassCastException e9) {
            if (Build.VERSION.SDK_INT != 26) {
                throw e9;
            }
            throw new IOException("Exception in connect", e9);
        }
    }

    @Override // ys.n
    public final String f(SSLSocket sslSocket) {
        Object obj;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Iterator it = this.f21095c.iterator();
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
    public final Object g() {
        Intrinsics.checkNotNullParameter("response.body().close()", "closer");
        b3 b3Var = this.f21096d;
        b3Var.getClass();
        Intrinsics.checkNotNullParameter("response.body().close()", "closer");
        Method method = b3Var.a;
        if (method != null) {
            try {
                Object invoke = method.invoke(null, null);
                Method method2 = b3Var.f925b;
                Intrinsics.checkNotNull(method2);
                method2.invoke(invoke, "response.body().close()");
                return invoke;
            } catch (Exception unused) {
            }
        }
        return null;
    }

    @Override // ys.n
    public final boolean h(String hostname) {
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        return NetworkSecurityPolicy.getInstance().isCleartextTrafficPermitted(hostname);
    }

    @Override // ys.n
    public final void j(Object obj, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        b3 b3Var = this.f21096d;
        b3Var.getClass();
        if (obj != null) {
            try {
                Method method = b3Var.f926c;
                Intrinsics.checkNotNull(method);
                method.invoke(obj, null);
                return;
            } catch (Exception unused) {
            }
        }
        n.i(5, message, null);
    }
}
