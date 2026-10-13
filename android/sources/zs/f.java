package zs;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.List;
import javax.net.ssl.SSLSocket;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* loaded from: classes3.dex */
public class f implements m {

    /* renamed from: f, reason: collision with root package name */
    public static final e f21440f;
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final Method f21441b;

    /* renamed from: c, reason: collision with root package name */
    public final Method f21442c;

    /* renamed from: d, reason: collision with root package name */
    public final Method f21443d;

    /* renamed from: e, reason: collision with root package name */
    public final Method f21444e;

    static {
        Intrinsics.checkNotNullParameter("com.google.android.gms.org.conscrypt", "packageName");
        f21440f = new e();
    }

    public f(Class sslSocketClass) {
        Intrinsics.checkNotNullParameter(sslSocketClass, "sslSocketClass");
        this.a = sslSocketClass;
        Method declaredMethod = sslSocketClass.getDeclaredMethod("setUseSessionTickets", Boolean.TYPE);
        Intrinsics.checkNotNullExpressionValue(declaredMethod, "sslSocketClass.getDeclar…:class.javaPrimitiveType)");
        this.f21441b = declaredMethod;
        this.f21442c = sslSocketClass.getMethod("setHostname", String.class);
        this.f21443d = sslSocketClass.getMethod("getAlpnSelectedProtocol", null);
        this.f21444e = sslSocketClass.getMethod("setAlpnProtocols", byte[].class);
    }

    @Override // zs.m
    public final boolean a(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        return this.a.isInstance(sslSocket);
    }

    @Override // zs.m
    public final boolean b() {
        boolean z5 = ys.c.f21094e;
        return ys.c.f21094e;
    }

    @Override // zs.m
    public final String c(SSLSocket sslSocket) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        if (a(sslSocket)) {
            try {
                byte[] bArr = (byte[]) this.f21443d.invoke(sslSocket, null);
                if (bArr != null) {
                    return new String(bArr, Charsets.UTF_8);
                }
            } catch (IllegalAccessException e9) {
                throw new AssertionError(e9);
            } catch (InvocationTargetException e10) {
                Throwable cause = e10.getCause();
                if (!(cause instanceof NullPointerException) || !Intrinsics.areEqual(((NullPointerException) cause).getMessage(), "ssl == null")) {
                    throw new AssertionError(e10);
                }
            }
        }
        return null;
    }

    @Override // zs.m
    public final void d(SSLSocket sslSocket, String str, List protocols) {
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        if (a(sslSocket)) {
            try {
                this.f21441b.invoke(sslSocket, Boolean.TRUE);
                if (str != null) {
                    this.f21442c.invoke(sslSocket, str);
                }
                Method method = this.f21444e;
                ys.n nVar = ys.n.a;
                method.invoke(sslSocket, j8.c.h(protocols));
            } catch (IllegalAccessException e9) {
                throw new AssertionError(e9);
            } catch (InvocationTargetException e10) {
                throw new AssertionError(e10);
            }
        }
    }
}
