package ps;

import java.net.ProxySelector;
import java.util.List;
import java.util.Objects;
import javax.net.SocketFactory;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSocketFactory;
import kotlin.jvm.internal.Intrinsics;
import lh.y;
import okhttp3.HttpUrl;

/* loaded from: classes3.dex */
public final class a {
    public final n a;

    /* renamed from: b, reason: collision with root package name */
    public final SocketFactory f16516b;

    /* renamed from: c, reason: collision with root package name */
    public final SSLSocketFactory f16517c;

    /* renamed from: d, reason: collision with root package name */
    public final HostnameVerifier f16518d;

    /* renamed from: e, reason: collision with root package name */
    public final j f16519e;

    /* renamed from: f, reason: collision with root package name */
    public final b f16520f;

    /* renamed from: g, reason: collision with root package name */
    public final ProxySelector f16521g;

    /* renamed from: h, reason: collision with root package name */
    public final HttpUrl f16522h;

    /* renamed from: i, reason: collision with root package name */
    public final List f16523i;
    public final List j;

    public a(String uriHost, int i5, n dns, SocketFactory socketFactory, SSLSocketFactory sSLSocketFactory, HostnameVerifier hostnameVerifier, j jVar, o proxyAuthenticator, List protocols, List connectionSpecs, ProxySelector proxySelector) {
        Intrinsics.checkNotNullParameter(uriHost, "uriHost");
        Intrinsics.checkNotNullParameter(dns, "dns");
        Intrinsics.checkNotNullParameter(socketFactory, "socketFactory");
        Intrinsics.checkNotNullParameter(proxyAuthenticator, "proxyAuthenticator");
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        Intrinsics.checkNotNullParameter(connectionSpecs, "connectionSpecs");
        Intrinsics.checkNotNullParameter(proxySelector, "proxySelector");
        this.a = dns;
        this.f16516b = socketFactory;
        this.f16517c = sSLSocketFactory;
        this.f16518d = hostnameVerifier;
        this.f16519e = jVar;
        this.f16520f = proxyAuthenticator;
        this.f16521g = proxySelector;
        y yVar = new y(1);
        yVar.h(sSLSocketFactory != null ? "https" : "http");
        yVar.e(uriHost);
        if (1 > i5 || i5 >= 65536) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("unexpected port: ", Integer.valueOf(i5)).toString());
        }
        yVar.f14050b = i5;
        this.f16522h = yVar.b();
        this.f16523i = qs.b.w(protocols);
        this.j = qs.b.w(connectionSpecs);
    }

    public final boolean a(a that) {
        Intrinsics.checkNotNullParameter(that, "that");
        return Intrinsics.areEqual(this.a, that.a) && Intrinsics.areEqual(this.f16520f, that.f16520f) && Intrinsics.areEqual(this.f16523i, that.f16523i) && Intrinsics.areEqual(this.j, that.j) && Intrinsics.areEqual(this.f16521g, that.f16521g) && Intrinsics.areEqual((Object) null, (Object) null) && Intrinsics.areEqual(this.f16517c, that.f16517c) && Intrinsics.areEqual(this.f16518d, that.f16518d) && Intrinsics.areEqual(this.f16519e, that.f16519e) && this.f16522h.f16035e == that.f16522h.f16035e;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Intrinsics.areEqual(this.f16522h, aVar.f16522h) && a(aVar);
    }

    public final int hashCode() {
        return Objects.hashCode(this.f16519e) + ((Objects.hashCode(this.f16518d) + ((Objects.hashCode(this.f16517c) + ((this.f16521g.hashCode() + a3.e.e(this.j, a3.e.e(this.f16523i, (this.f16520f.hashCode() + ((this.a.hashCode() + a3.e.d(527, 31, this.f16522h.f16038h)) * 31)) * 31, 31), 31)) * 961)) * 31)) * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Address{");
        HttpUrl httpUrl = this.f16522h;
        sb2.append(httpUrl.f16034d);
        sb2.append(':');
        sb2.append(httpUrl.f16035e);
        sb2.append(", ");
        sb2.append(Intrinsics.stringPlus("proxySelector=", this.f16521g));
        sb2.append('}');
        return sb2.toString();
    }
}
