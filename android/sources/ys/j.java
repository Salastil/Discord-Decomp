package ys;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.SSLSocket;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import ps.s;

/* loaded from: classes3.dex */
public final class j extends n {

    /* renamed from: c, reason: collision with root package name */
    public final Method f21105c;

    /* renamed from: d, reason: collision with root package name */
    public final Method f21106d;

    /* renamed from: e, reason: collision with root package name */
    public final Method f21107e;

    /* renamed from: f, reason: collision with root package name */
    public final Class f21108f;

    /* renamed from: g, reason: collision with root package name */
    public final Class f21109g;

    public j(Method putMethod, Method getMethod, Method removeMethod, Class clientProviderClass, Class serverProviderClass) {
        Intrinsics.checkNotNullParameter(putMethod, "putMethod");
        Intrinsics.checkNotNullParameter(getMethod, "getMethod");
        Intrinsics.checkNotNullParameter(removeMethod, "removeMethod");
        Intrinsics.checkNotNullParameter(clientProviderClass, "clientProviderClass");
        Intrinsics.checkNotNullParameter(serverProviderClass, "serverProviderClass");
        this.f21105c = putMethod;
        this.f21106d = getMethod;
        this.f21107e = removeMethod;
        this.f21108f = clientProviderClass;
        this.f21109g = serverProviderClass;
    }

    @Override // ys.n
    public final void a(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        try {
            this.f21107e.invoke(null, sslSocket);
        } catch (IllegalAccessException e9) {
            throw new AssertionError("failed to remove ALPN", e9);
        } catch (InvocationTargetException e10) {
            throw new AssertionError("failed to remove ALPN", e10);
        }
    }

    @Override // ys.n
    public final void d(SSLSocket sslSocket, String str, List protocols) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        ArrayList arrayList = new ArrayList();
        for (Object obj : protocols) {
            if (((s) obj) != s.HTTP_1_0) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(((s) it.next()).f16585d);
        }
        try {
            this.f21105c.invoke(null, sslSocket, Proxy.newProxyInstance(n.class.getClassLoader(), new Class[]{this.f21108f, this.f21109g}, new i(arrayList2)));
        } catch (IllegalAccessException e9) {
            throw new AssertionError("failed to set ALPN", e9);
        } catch (InvocationTargetException e10) {
            throw new AssertionError("failed to set ALPN", e10);
        }
    }

    @Override // ys.n
    public final String f(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        try {
            InvocationHandler invocationHandler = Proxy.getInvocationHandler(this.f21106d.invoke(null, sslSocket));
            if (invocationHandler == null) {
                throw new NullPointerException("null cannot be cast to non-null type okhttp3.internal.platform.Jdk8WithJettyBootPlatform.AlpnProvider");
            }
            i iVar = (i) invocationHandler;
            boolean z5 = iVar.f21103b;
            if (!z5 && iVar.f21104c == null) {
                n.i(4, "ALPN callback dropped: HTTP/2 is disabled. Is alpn-boot on the boot class path?", null);
                return null;
            }
            if (z5) {
                return null;
            }
            return iVar.f21104c;
        } catch (IllegalAccessException e9) {
            throw new AssertionError("failed to get ALPN selected protocol", e9);
        } catch (InvocationTargetException e10) {
            throw new AssertionError("failed to get ALPN selected protocol", e10);
        }
    }
}
