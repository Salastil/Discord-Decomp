package zs;

import javax.net.ssl.SSLSocket;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class e implements k {
    @Override // zs.k
    public final boolean a(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        String name = sslSocket.getClass().getName();
        Intrinsics.checkNotNullExpressionValue(name, "sslSocket.javaClass.name");
        return x.o(name, Intrinsics.stringPlus("com.google.android.gms.org.conscrypt", "."), false);
    }

    @Override // zs.k
    public final m b(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        e eVar = f.f21440f;
        Class<?> cls = sslSocket.getClass();
        Class<?> cls2 = cls;
        while (!Intrinsics.areEqual(cls2.getSimpleName(), "OpenSSLSocketImpl")) {
            cls2 = cls2.getSuperclass();
            if (cls2 == null) {
                throw new AssertionError(Intrinsics.stringPlus("No OpenSSLSocketImpl superclass of socket of type ", cls));
            }
        }
        Intrinsics.checkNotNull(cls2);
        return new f(cls2);
    }
}
