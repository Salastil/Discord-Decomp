package ys;

import android.util.Log;
import com.discord.jank_stats.JankScreenContext;
import java.lang.reflect.Method;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.security.GeneralSecurityException;
import java.security.KeyStore;
import java.security.Security;
import java.security.cert.X509Certificate;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.OkHttpClient;

/* loaded from: classes3.dex */
public class n {
    public static volatile n a;

    /* renamed from: b, reason: collision with root package name */
    public static final Logger f21113b;

    /* JADX WARN: Code restructure failed: missing block: B:39:0x0093, code lost:
    
        if (r1 != null) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x00b5, code lost:
    
        if (r1 != null) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x00d5, code lost:
    
        if (r1 != null) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x00fb, code lost:
    
        if (java.lang.Integer.parseInt(r2) >= 9) goto L65;
     */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0162  */
    static {
        n kVar;
        n nVar;
        if (j8.c.o()) {
            for (Map.Entry entry : zs.c.f21439b.entrySet()) {
                String str = (String) entry.getKey();
                String str2 = (String) entry.getValue();
                Logger logger = Logger.getLogger(str);
                if (zs.c.a.add(logger)) {
                    logger.setUseParentHandlers(false);
                    logger.setLevel(Log.isLoggable(str2, 3) ? Level.FINE : Log.isLoggable(str2, 4) ? Level.INFO : Level.WARNING);
                    logger.addHandler(zs.d.a);
                }
            }
            nVar = a.f21091d ? new a() : null;
            if (nVar == null) {
                r3 = c.f21094e ? new c() : null;
                Intrinsics.checkNotNull(r3);
                nVar = r3;
            }
        } else {
            if (Intrinsics.areEqual("Conscrypt", Security.getProviders()[0].getName())) {
                kVar = h.f21101d ? new h() : null;
            }
            if (Intrinsics.areEqual("BC", Security.getProviders()[0].getName())) {
                kVar = e.f21099d ? new e() : null;
            }
            if (Intrinsics.areEqual("OpenJSSE", Security.getProviders()[0].getName())) {
                kVar = m.f21111d ? new m() : null;
            }
            kVar = k.f21110c ? new k() : null;
            if (kVar == null) {
                String jvmVersion = System.getProperty("java.specification.version", JankScreenContext.UNKNOWN_SCREEN);
                try {
                    Intrinsics.checkNotNullExpressionValue(jvmVersion, "jvmVersion");
                } catch (NumberFormatException unused) {
                }
            }
            nVar = kVar;
        }
        a = nVar;
        f21113b = Logger.getLogger(OkHttpClient.class.getName());
        if (r3 == null) {
            nVar = new n();
            a = nVar;
            f21113b = Logger.getLogger(OkHttpClient.class.getName());
        }
        nVar = r3;
        a = nVar;
        f21113b = Logger.getLogger(OkHttpClient.class.getName());
        try {
            Class<?> cls = Class.forName("org.eclipse.jetty.alpn.ALPN", true, null);
            Class<?> cls2 = Class.forName(Intrinsics.stringPlus("org.eclipse.jetty.alpn.ALPN", "$Provider"), true, null);
            Class<?> clientProviderClass = Class.forName(Intrinsics.stringPlus("org.eclipse.jetty.alpn.ALPN", "$ClientProvider"), true, null);
            Class<?> serverProviderClass = Class.forName(Intrinsics.stringPlus("org.eclipse.jetty.alpn.ALPN", "$ServerProvider"), true, null);
            Method putMethod = cls.getMethod("put", SSLSocket.class, cls2);
            Method getMethod = cls.getMethod("get", SSLSocket.class);
            Method removeMethod = cls.getMethod("remove", SSLSocket.class);
            Intrinsics.checkNotNullExpressionValue(putMethod, "putMethod");
            Intrinsics.checkNotNullExpressionValue(getMethod, "getMethod");
            Intrinsics.checkNotNullExpressionValue(removeMethod, "removeMethod");
            Intrinsics.checkNotNullExpressionValue(clientProviderClass, "clientProviderClass");
            Intrinsics.checkNotNullExpressionValue(serverProviderClass, "serverProviderClass");
            r3 = new j(putMethod, getMethod, removeMethod, clientProviderClass, serverProviderClass);
        } catch (ClassNotFoundException | NoSuchMethodException unused2) {
        }
        if (r3 == null) {
        }
        nVar = r3;
        a = nVar;
        f21113b = Logger.getLogger(OkHttpClient.class.getName());
    }

    public static void i(int i5, String message, Throwable th2) {
        Intrinsics.checkNotNullParameter(message, "message");
        f21113b.log(i5 == 5 ? Level.WARNING : Level.INFO, message, th2);
    }

    public void a(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
    }

    public e4.f b(X509TrustManager trustManager) {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        return new ct.a(c(trustManager));
    }

    public ct.d c(X509TrustManager trustManager) {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        X509Certificate[] acceptedIssuers = trustManager.getAcceptedIssuers();
        Intrinsics.checkNotNullExpressionValue(acceptedIssuers, "trustManager.acceptedIssuers");
        return new ct.b((X509Certificate[]) Arrays.copyOf(acceptedIssuers, acceptedIssuers.length));
    }

    public void d(SSLSocket sslSocket, String str, List protocols) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
    }

    public void e(Socket socket, InetSocketAddress address, int i5) {
        Intrinsics.checkNotNullParameter(socket, "socket");
        Intrinsics.checkNotNullParameter(address, "address");
        socket.connect(address, i5);
    }

    public String f(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        return null;
    }

    public Object g() {
        Intrinsics.checkNotNullParameter("response.body().close()", "closer");
        if (f21113b.isLoggable(Level.FINE)) {
            return new Throwable("response.body().close()");
        }
        return null;
    }

    public boolean h(String hostname) {
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        return true;
    }

    public void j(Object obj, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        if (obj == null) {
            message = Intrinsics.stringPlus(message, " To see where this was allocated, set the OkHttpClient logger level to FINE: Logger.getLogger(OkHttpClient.class.getName()).setLevel(Level.FINE);");
        }
        i(5, message, (Throwable) obj);
    }

    public SSLContext k() {
        SSLContext sSLContext = SSLContext.getInstance("TLS");
        Intrinsics.checkNotNullExpressionValue(sSLContext, "getInstance(\"TLS\")");
        return sSLContext;
    }

    public SSLSocketFactory l(X509TrustManager trustManager) {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        try {
            SSLContext k = k();
            k.init(null, new TrustManager[]{trustManager}, null);
            SSLSocketFactory socketFactory = k.getSocketFactory();
            Intrinsics.checkNotNullExpressionValue(socketFactory, "newSSLContext().apply {\n…ll)\n      }.socketFactory");
            return socketFactory;
        } catch (GeneralSecurityException e9) {
            throw new AssertionError(Intrinsics.stringPlus("No System TLS: ", e9), e9);
        }
    }

    public X509TrustManager m() {
        TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
        trustManagerFactory.init((KeyStore) null);
        TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
        Intrinsics.checkNotNull(trustManagers);
        if (trustManagers.length == 1) {
            TrustManager trustManager = trustManagers[0];
            if (trustManager instanceof X509TrustManager) {
                if (trustManager != null) {
                    return (X509TrustManager) trustManager;
                }
                throw new NullPointerException("null cannot be cast to non-null type javax.net.ssl.X509TrustManager");
            }
        }
        String arrays = Arrays.toString(trustManagers);
        Intrinsics.checkNotNullExpressionValue(arrays, "toString(this)");
        throw new IllegalStateException(Intrinsics.stringPlus("Unexpected default trust managers: ", arrays).toString());
    }

    public final String toString() {
        String simpleName = getClass().getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "javaClass.simpleName");
        return simpleName;
    }
}
