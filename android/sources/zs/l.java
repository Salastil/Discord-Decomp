package zs;

import java.util.List;
import javax.net.ssl.SSLSocket;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l implements m {
    public final k a;

    /* renamed from: b, reason: collision with root package name */
    public m f21445b;

    public l(k socketAdapterFactory) {
        Intrinsics.checkNotNullParameter(socketAdapterFactory, "socketAdapterFactory");
        this.a = socketAdapterFactory;
    }

    @Override // zs.m
    public final boolean a(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        return this.a.a(sslSocket);
    }

    @Override // zs.m
    public final boolean b() {
        return true;
    }

    @Override // zs.m
    public final String c(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        m e9 = e(sslSocket);
        if (e9 == null) {
            return null;
        }
        return e9.c(sslSocket);
    }

    @Override // zs.m
    public final void d(SSLSocket sslSocket, String str, List protocols) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        m e9 = e(sslSocket);
        if (e9 == null) {
            return;
        }
        e9.d(sslSocket, str, protocols);
    }

    public final synchronized m e(SSLSocket sSLSocket) {
        try {
            if (this.f21445b == null && this.a.a(sSLSocket)) {
                this.f21445b = this.a.b(sSLSocket);
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return this.f21445b;
    }
}
