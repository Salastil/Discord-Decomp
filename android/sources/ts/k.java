package ts;

import com.facebook.react.devsupport.StackTraceHelper;
import et.r;
import et.y;
import io.sentry.e6;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ConnectException;
import java.net.InetSocketAddress;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.net.UnknownServiceException;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.concurrent.TimeUnit;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLException;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocket;
import javax.net.ssl.SSLSocketFactory;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import okhttp3.Call;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okio.Timeout;
import ps.o;
import ps.q;
import ps.s;
import ps.v;
import qa.t;
import ws.a0;
import ws.p;
import ws.w;
import ws.x;
import ys.n;

/* loaded from: classes3.dex */
public final class k extends ws.i {

    /* renamed from: b, reason: collision with root package name */
    public final v f18738b;

    /* renamed from: c, reason: collision with root package name */
    public Socket f18739c;

    /* renamed from: d, reason: collision with root package name */
    public Socket f18740d;

    /* renamed from: e, reason: collision with root package name */
    public q f18741e;

    /* renamed from: f, reason: collision with root package name */
    public s f18742f;

    /* renamed from: g, reason: collision with root package name */
    public p f18743g;

    /* renamed from: h, reason: collision with root package name */
    public r f18744h;

    /* renamed from: i, reason: collision with root package name */
    public et.q f18745i;
    public boolean j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public int f18746l;

    /* renamed from: m, reason: collision with root package name */
    public int f18747m;

    /* renamed from: n, reason: collision with root package name */
    public int f18748n;

    /* renamed from: o, reason: collision with root package name */
    public int f18749o;

    /* renamed from: p, reason: collision with root package name */
    public final ArrayList f18750p;

    /* renamed from: q, reason: collision with root package name */
    public long f18751q;

    public k(l connectionPool, v route) {
        Intrinsics.checkNotNullParameter(connectionPool, "connectionPool");
        Intrinsics.checkNotNullParameter(route, "route");
        this.f18738b = route;
        this.f18749o = 1;
        this.f18750p = new ArrayList();
        this.f18751q = LongCompanionObject.MAX_VALUE;
    }

    public static void d(OkHttpClient client, v failedRoute, IOException failure) {
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(failedRoute, "failedRoute");
        Intrinsics.checkNotNullParameter(failure, "failure");
        if (failedRoute.f16600b.type() != Proxy.Type.DIRECT) {
            ps.a aVar = failedRoute.a;
            aVar.f16521g.connectFailed(aVar.f16522h.g(), failedRoute.f16600b.address(), failure);
        }
        t tVar = client.Y;
        synchronized (tVar) {
            Intrinsics.checkNotNullParameter(failedRoute, "failedRoute");
            ((LinkedHashSet) tVar.f16718e).add(failedRoute);
        }
    }

    @Override // ws.i
    public final synchronized void a(p connection, a0 settings) {
        Intrinsics.checkNotNullParameter(connection, "connection");
        Intrinsics.checkNotNullParameter(settings, "settings");
        this.f18749o = (settings.a & 16) != 0 ? settings.f20058b[4] : Integer.MAX_VALUE;
    }

    @Override // ws.i
    public final void b(w stream) {
        Intrinsics.checkNotNullParameter(stream, "stream");
        stream.c(ws.b.REFUSED_STREAM, null);
    }

    public final void c(int i5, int i6, int i10, boolean z5, Call call) {
        v vVar;
        o eventListener = o.f16572d;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(eventListener, "eventListener");
        if (this.f18742f != null) {
            throw new IllegalStateException("already connected");
        }
        List list = this.f18738b.a.j;
        b bVar = new b(list);
        ps.a aVar = this.f18738b.a;
        if (aVar.f16517c == null) {
            if (!list.contains(ps.m.f16567f)) {
                throw new m(new UnknownServiceException("CLEARTEXT communication not enabled for client"));
            }
            String str = this.f18738b.a.f16522h.f16034d;
            n nVar = n.a;
            if (!n.a.h(str)) {
                throw new m(new UnknownServiceException(s4.h.f("CLEARTEXT communication to ", str, " not permitted by network security policy")));
            }
        } else if (aVar.f16523i.contains(s.H2_PRIOR_KNOWLEDGE)) {
            throw new m(new UnknownServiceException("H2_PRIOR_KNOWLEDGE cannot be used with HTTPS"));
        }
        m mVar = null;
        do {
            try {
                v vVar2 = this.f18738b;
                if (vVar2.a.f16517c != null && vVar2.f16600b.type() == Proxy.Type.HTTP) {
                    f(i5, i6, i10, call);
                    if (this.f18739c == null) {
                        vVar = this.f18738b;
                        if (vVar.a.f16517c == null && vVar.f16600b.type() == Proxy.Type.HTTP && this.f18739c == null) {
                            throw new m(new ProtocolException("Too many tunnel connections attempted: 21"));
                        }
                        this.f18751q = System.nanoTime();
                        return;
                    }
                } else {
                    e(i5, i6, call);
                }
                g(bVar, call);
                v vVar3 = this.f18738b;
                InetSocketAddress inetSocketAddress = vVar3.f16601c;
                Proxy proxy = vVar3.f16600b;
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(inetSocketAddress, "inetSocketAddress");
                Intrinsics.checkNotNullParameter(proxy, "proxy");
                vVar = this.f18738b;
                if (vVar.a.f16517c == null) {
                }
                this.f18751q = System.nanoTime();
                return;
            } catch (IOException e9) {
                Socket socket = this.f18740d;
                if (socket != null) {
                    qs.b.d(socket);
                }
                Socket socket2 = this.f18739c;
                if (socket2 != null) {
                    qs.b.d(socket2);
                }
                this.f18740d = null;
                this.f18739c = null;
                this.f18744h = null;
                this.f18745i = null;
                this.f18741e = null;
                this.f18742f = null;
                this.f18743g = null;
                this.f18749o = 1;
                v vVar4 = this.f18738b;
                InetSocketAddress inetSocketAddress2 = vVar4.f16601c;
                Proxy proxy2 = vVar4.f16600b;
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(inetSocketAddress2, "inetSocketAddress");
                Intrinsics.checkNotNullParameter(proxy2, "proxy");
                Intrinsics.checkNotNullParameter(e9, "ioe");
                if (mVar == null) {
                    mVar = new m(e9);
                } else {
                    Intrinsics.checkNotNullParameter(e9, "e");
                    fo.f.a(mVar.f18755d, e9);
                    mVar.f18756e = e9;
                }
                if (!z5) {
                    throw mVar;
                }
                Intrinsics.checkNotNullParameter(e9, "e");
                bVar.f18703d = true;
                if (!bVar.f18702c) {
                    throw mVar;
                }
                if (e9 instanceof ProtocolException) {
                    throw mVar;
                }
                if (e9 instanceof InterruptedIOException) {
                    throw mVar;
                }
                if ((e9 instanceof SSLHandshakeException) && (e9.getCause() instanceof CertificateException)) {
                    throw mVar;
                }
                if (e9 instanceof SSLPeerUnverifiedException) {
                    throw mVar;
                }
            }
        } while (e9 instanceof SSLException);
        throw mVar;
    }

    public final void e(int i5, int i6, Call call) {
        Socket createSocket;
        v vVar = this.f18738b;
        Proxy proxy = vVar.f16600b;
        ps.a aVar = vVar.a;
        Proxy.Type type = proxy.type();
        int i10 = type == null ? -1 : i.a[type.ordinal()];
        if (i10 == 1 || i10 == 2) {
            createSocket = aVar.f16516b.createSocket();
            Intrinsics.checkNotNull(createSocket);
        } else {
            createSocket = new Socket(proxy);
        }
        this.f18739c = createSocket;
        InetSocketAddress inetSocketAddress = this.f18738b.f16601c;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(inetSocketAddress, "inetSocketAddress");
        Intrinsics.checkNotNullParameter(proxy, "proxy");
        createSocket.setSoTimeout(i6);
        try {
            n nVar = n.a;
            n.a.e(createSocket, this.f18738b.f16601c, i5);
            try {
                this.f18744h = y.d(y.n(createSocket));
                this.f18745i = y.c(y.j(createSocket));
            } catch (NullPointerException e9) {
                if (Intrinsics.areEqual(e9.getMessage(), "throw with null exception")) {
                    throw new IOException(e9);
                }
            }
        } catch (ConnectException e10) {
            ConnectException connectException = new ConnectException(Intrinsics.stringPlus("Failed to connect to ", this.f18738b.f16601c));
            connectException.initCause(e10);
            throw connectException;
        }
    }

    public final void f(int i5, int i6, int i10, Call call) {
        Request.Builder builder = new Request.Builder();
        v vVar = this.f18738b;
        HttpUrl url = vVar.a.f16522h;
        Intrinsics.checkNotNullParameter(url, "url");
        builder.a = url;
        builder.f("CONNECT", null);
        ps.a aVar = vVar.a;
        builder.d("Host", qs.b.v(aVar.f16522h, true));
        builder.d("Proxy-Connection", "Keep-Alive");
        builder.d("User-Agent", "okhttp/4.11.0");
        Request request = builder.b();
        e6 e6Var = new e6();
        Intrinsics.checkNotNullParameter(request, "request");
        s protocol = s.HTTP_1_1;
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        Intrinsics.checkNotNullParameter("Preemptive Authenticate", "message");
        okhttp3.e eVar = qs.b.f17052c;
        Intrinsics.checkNotNullParameter("Proxy-Authenticate", StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullParameter("OkHttp-Preemptive", "value");
        Intrinsics.checkNotNullParameter("Proxy-Authenticate", StackTraceHelper.NAME_KEY);
        Intrinsics.checkNotNullParameter("OkHttp-Preemptive", "value");
        d9.a.f("Proxy-Authenticate");
        d9.a.g("OkHttp-Preemptive", "Proxy-Authenticate");
        e6Var.f("Proxy-Authenticate");
        e6Var.c("Proxy-Authenticate", "OkHttp-Preemptive");
        Response response = new Response(request, protocol, "Preemptive Authenticate", 407, null, e6Var.d(), eVar, null, null, null, -1L, -1L, null);
        ((o) aVar.f16520f).getClass();
        Intrinsics.checkNotNullParameter(response, "response");
        HttpUrl httpUrl = request.a;
        e(i5, i6, call);
        String str = "CONNECT " + qs.b.v(httpUrl, true) + " HTTP/1.1";
        r rVar = this.f18744h;
        Intrinsics.checkNotNull(rVar);
        et.q qVar = this.f18745i;
        Intrinsics.checkNotNull(qVar);
        aj.a aVar2 = new aj.a(null, this, rVar, qVar);
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        rVar.f8272d.timeout().g(i6, timeUnit);
        qVar.f8269d.timeout().g(i10, timeUnit);
        aVar2.m(request.f16077c, str);
        aVar2.a();
        ps.t d6 = aVar2.d(false);
        Intrinsics.checkNotNull(d6);
        d6.getClass();
        Intrinsics.checkNotNullParameter(request, "request");
        d6.a = request;
        Response response2 = d6.a();
        int i11 = response2.f16088v;
        Intrinsics.checkNotNullParameter(response2, "response");
        long j = qs.b.j(response2);
        if (j != -1) {
            vs.d l6 = aVar2.l(j);
            qs.b.t(l6, Integer.MAX_VALUE);
            l6.close();
        }
        if (i11 == 200) {
            if (!rVar.f8273e.l() || !qVar.f8270e.l()) {
                throw new IOException("TLS tunnel buffered too many bytes!");
            }
        } else {
            if (i11 != 407) {
                throw new IOException(Intrinsics.stringPlus("Unexpected response code for CONNECT: ", Integer.valueOf(i11)));
            }
            ((o) aVar.f16520f).getClass();
            Intrinsics.checkNotNullParameter(response2, "response");
            throw new IOException("Failed to authenticate with proxy");
        }
    }

    public final void g(b bVar, Call call) {
        s sVar = s.HTTP_1_1;
        ps.a aVar = this.f18738b.a;
        if (aVar.f16517c == null) {
            List list = aVar.f16523i;
            s sVar2 = s.H2_PRIOR_KNOWLEDGE;
            if (!list.contains(sVar2)) {
                this.f18740d = this.f18739c;
                this.f18742f = sVar;
                return;
            } else {
                this.f18740d = this.f18739c;
                this.f18742f = sVar2;
                l();
                return;
            }
        }
        Intrinsics.checkNotNullParameter(call, "call");
        ps.a aVar2 = this.f18738b.a;
        SSLSocketFactory sSLSocketFactory = aVar2.f16517c;
        SSLSocket sSLSocket = null;
        String str = null;
        try {
            Intrinsics.checkNotNull(sSLSocketFactory);
            Socket socket = this.f18739c;
            HttpUrl httpUrl = aVar2.f16522h;
            int i5 = 1;
            Socket createSocket = sSLSocketFactory.createSocket(socket, httpUrl.f16034d, httpUrl.f16035e, true);
            if (createSocket == null) {
                throw new NullPointerException("null cannot be cast to non-null type javax.net.ssl.SSLSocket");
            }
            SSLSocket sSLSocket2 = (SSLSocket) createSocket;
            try {
                ps.m a = bVar.a(sSLSocket2);
                if (a.f16568b) {
                    n nVar = n.a;
                    n.a.d(sSLSocket2, aVar2.f16522h.f16034d, aVar2.f16523i);
                }
                sSLSocket2.startHandshake();
                SSLSession sslSocketSession = sSLSocket2.getSession();
                Intrinsics.checkNotNullExpressionValue(sslSocketSession, "sslSocketSession");
                q t5 = com.facebook.imagepipeline.nativecode.c.t(sslSocketSession);
                HostnameVerifier hostnameVerifier = aVar2.f16518d;
                Intrinsics.checkNotNull(hostnameVerifier);
                if (!hostnameVerifier.verify(aVar2.f16522h.f16034d, sslSocketSession)) {
                    List a10 = t5.a();
                    if (a10.isEmpty()) {
                        throw new SSLPeerUnverifiedException("Hostname " + aVar2.f16522h.f16034d + " not verified (no certificates)");
                    }
                    X509Certificate certificate = (X509Certificate) a10.get(0);
                    StringBuilder sb2 = new StringBuilder("\n              |Hostname ");
                    sb2.append(aVar2.f16522h.f16034d);
                    sb2.append(" not verified:\n              |    certificate: ");
                    ps.j jVar = ps.j.f16547c;
                    sb2.append(android.support.v4.media.session.b.u(certificate));
                    sb2.append("\n              |    DN: ");
                    sb2.append((Object) certificate.getSubjectDN().getName());
                    sb2.append("\n              |    subjectAltNames: ");
                    Intrinsics.checkNotNullParameter(certificate, "certificate");
                    sb2.append(CollectionsKt.V(ct.c.a(certificate, 7), ct.c.a(certificate, 2)));
                    sb2.append("\n              ");
                    throw new SSLPeerUnverifiedException(kotlin.text.r.c(sb2.toString()));
                }
                ps.j jVar2 = aVar2.f16519e;
                Intrinsics.checkNotNull(jVar2);
                this.f18741e = new q(t5.a, t5.f16575b, t5.f16576c, new ps.i(jVar2, t5, aVar2, i5));
                jVar2.a(aVar2.f16522h.f16034d, new a3.q(10, this));
                if (a.f16568b) {
                    n nVar2 = n.a;
                    str = n.a.f(sSLSocket2);
                }
                this.f18740d = sSLSocket2;
                this.f18744h = y.d(y.n(sSLSocket2));
                this.f18745i = y.c(y.j(sSLSocket2));
                if (str != null) {
                    sVar = io.sentry.config.a.p(str);
                }
                this.f18742f = sVar;
                n nVar3 = n.a;
                n.a.a(sSLSocket2);
                Intrinsics.checkNotNullParameter(call, "call");
                if (this.f18742f == s.HTTP_2) {
                    l();
                }
            } catch (Throwable th2) {
                th = th2;
                sSLSocket = sSLSocket2;
                if (sSLSocket != null) {
                    n nVar4 = n.a;
                    n.a.a(sSLSocket);
                }
                if (sSLSocket != null) {
                    qs.b.d(sSLSocket);
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x00ae, code lost:
    
        if (ct.c.c(r5, (java.security.cert.X509Certificate) r11.get(0)) != false) goto L50;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean h(ps.a address, List list) {
        q qVar;
        Intrinsics.checkNotNullParameter(address, "address");
        byte[] bArr = qs.b.a;
        int i5 = 0;
        if (this.f18750p.size() < this.f18749o && !this.j) {
            v vVar = this.f18738b;
            ps.a aVar = vVar.a;
            ps.a aVar2 = vVar.a;
            boolean a = aVar.a(address);
            HttpUrl httpUrl = address.f16522h;
            if (a) {
                String str = httpUrl.f16034d;
                String hostname = httpUrl.f16034d;
                if (Intrinsics.areEqual(str, aVar2.f16522h.f16034d)) {
                    return true;
                }
                if (this.f18743g != null && list != null && !list.isEmpty()) {
                    Iterator it = list.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        v vVar2 = (v) it.next();
                        Proxy.Type type = vVar2.f16600b.type();
                        Proxy.Type type2 = Proxy.Type.DIRECT;
                        if (type == type2 && vVar.f16600b.type() == type2 && Intrinsics.areEqual(vVar.f16601c, vVar2.f16601c)) {
                            if (address.f16518d == ct.c.a) {
                                byte[] bArr2 = qs.b.a;
                                HttpUrl httpUrl2 = aVar2.f16522h;
                                if (httpUrl.f16035e == httpUrl2.f16035e) {
                                    if (!Intrinsics.areEqual(hostname, httpUrl2.f16034d)) {
                                        if (!this.k && (qVar = this.f18741e) != null) {
                                            Intrinsics.checkNotNull(qVar);
                                            List a10 = qVar.a();
                                            if (!a10.isEmpty()) {
                                            }
                                        }
                                    }
                                    try {
                                        ps.j jVar = address.f16519e;
                                        Intrinsics.checkNotNull(jVar);
                                        q qVar2 = this.f18741e;
                                        Intrinsics.checkNotNull(qVar2);
                                        List peerCertificates = qVar2.a();
                                        jVar.getClass();
                                        Intrinsics.checkNotNullParameter(hostname, "hostname");
                                        Intrinsics.checkNotNullParameter(peerCertificates, "peerCertificates");
                                        jVar.a(hostname, new ps.i(jVar, peerCertificates, hostname, i5));
                                        return true;
                                    } catch (SSLPeerUnverifiedException unused) {
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return false;
    }

    public final boolean i(boolean z5) {
        long j;
        byte[] bArr = qs.b.a;
        long nanoTime = System.nanoTime();
        Socket socket = this.f18739c;
        Intrinsics.checkNotNull(socket);
        Socket socket2 = this.f18740d;
        Intrinsics.checkNotNull(socket2);
        r source = this.f18744h;
        Intrinsics.checkNotNull(source);
        if (socket.isClosed() || socket2.isClosed() || socket2.isInputShutdown() || socket2.isOutputShutdown()) {
            return false;
        }
        p pVar = this.f18743g;
        if (pVar != null) {
            synchronized (pVar) {
                if (pVar.f20118x) {
                    return false;
                }
                if (pVar.K < pVar.J) {
                    if (nanoTime >= pVar.L) {
                        return false;
                    }
                }
                return true;
            }
        }
        synchronized (this) {
            j = nanoTime - this.f18751q;
        }
        if (j < 10000000000L || !z5) {
            return true;
        }
        Intrinsics.checkNotNullParameter(socket2, "<this>");
        Intrinsics.checkNotNullParameter(source, "source");
        try {
            int soTimeout = socket2.getSoTimeout();
            try {
                socket2.setSoTimeout(1);
                return !source.c();
            } finally {
                socket2.setSoTimeout(soTimeout);
            }
        } catch (SocketTimeoutException unused) {
            return true;
        } catch (IOException unused2) {
            return false;
        }
    }

    public final us.d j(OkHttpClient client, us.f chain) {
        int i5 = chain.f19118g;
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(chain, "chain");
        Socket socket = this.f18740d;
        Intrinsics.checkNotNull(socket);
        r rVar = this.f18744h;
        Intrinsics.checkNotNull(rVar);
        et.q qVar = this.f18745i;
        Intrinsics.checkNotNull(qVar);
        p pVar = this.f18743g;
        if (pVar != null) {
            return new ws.q(client, this, chain, pVar);
        }
        socket.setSoTimeout(i5);
        Timeout timeout = rVar.f8272d.timeout();
        long j = i5;
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        timeout.g(j, timeUnit);
        qVar.f8269d.timeout().g(chain.f19119h, timeUnit);
        return new aj.a(client, this, rVar, qVar);
    }

    public final synchronized void k() {
        this.j = true;
    }

    public final void l() {
        Socket socket = this.f18740d;
        Intrinsics.checkNotNull(socket);
        r source = this.f18744h;
        Intrinsics.checkNotNull(source);
        et.q sink = this.f18745i;
        Intrinsics.checkNotNull(sink);
        socket.setSoTimeout(0);
        ss.c taskRunner = ss.c.f18141h;
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        androidx.appcompat.widget.w wVar = new androidx.appcompat.widget.w();
        wVar.f1141d = taskRunner;
        wVar.f1146x = ws.i.a;
        String peerName = this.f18738b.a.f16522h.f16034d;
        Intrinsics.checkNotNullParameter(socket, "socket");
        Intrinsics.checkNotNullParameter(peerName, "peerName");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(sink, "sink");
        Intrinsics.checkNotNullParameter(socket, "<set-?>");
        wVar.f1142e = socket;
        String str = qs.b.f17056g + ' ' + peerName;
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        wVar.f1143i = str;
        Intrinsics.checkNotNullParameter(source, "<set-?>");
        wVar.f1144v = source;
        Intrinsics.checkNotNullParameter(sink, "<set-?>");
        wVar.f1145w = sink;
        Intrinsics.checkNotNullParameter(this, "listener");
        Intrinsics.checkNotNullParameter(this, "<set-?>");
        wVar.f1146x = this;
        p pVar = new p(wVar);
        this.f18743g = pVar;
        a0 a0Var = p.W;
        this.f18749o = (a0Var.a & 16) != 0 ? a0Var.f20058b[4] : Integer.MAX_VALUE;
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        x xVar = pVar.T;
        synchronized (xVar) {
            try {
                if (xVar.f20162v) {
                    throw new IOException("closed");
                }
                Logger logger = x.f20158x;
                if (logger.isLoggable(Level.FINE)) {
                    logger.fine(qs.b.h(Intrinsics.stringPlus(">> CONNECTION ", ws.g.a.d()), new Object[0]));
                }
                xVar.f20159d.a0(ws.g.a);
                xVar.f20159d.flush();
            } finally {
            }
        }
        x xVar2 = pVar.T;
        a0 settings = pVar.M;
        synchronized (xVar2) {
            try {
                Intrinsics.checkNotNullParameter(settings, "settings");
                if (xVar2.f20162v) {
                    throw new IOException("closed");
                }
                xVar2.g(0, Integer.bitCount(settings.a) * 6, 4, 0);
                int i5 = 0;
                while (i5 < 10) {
                    int i6 = i5 + 1;
                    boolean z5 = true;
                    if (((1 << i5) & settings.a) == 0) {
                        z5 = false;
                    }
                    if (z5) {
                        xVar2.f20159d.writeShort(i5 != 4 ? i5 != 7 ? i5 : 4 : 3);
                        xVar2.f20159d.writeInt(settings.f20058b[i5]);
                    }
                    i5 = i6;
                }
                xVar2.f20159d.flush();
            } finally {
            }
        }
        if (pVar.M.a() != 65535) {
            pVar.T.r(0, r1 - 65535);
        }
        taskRunner.e().c(new rs.f(pVar.f20115i, pVar.U, 1), 0L);
    }

    public final String toString() {
        ps.l lVar;
        StringBuilder sb2 = new StringBuilder("Connection{");
        v vVar = this.f18738b;
        sb2.append(vVar.a.f16522h.f16034d);
        sb2.append(':');
        sb2.append(vVar.a.f16522h.f16035e);
        sb2.append(", proxy=");
        sb2.append(vVar.f16600b);
        sb2.append(" hostAddress=");
        sb2.append(vVar.f16601c);
        sb2.append(" cipherSuite=");
        q qVar = this.f18741e;
        Object obj = "none";
        if (qVar != null && (lVar = qVar.f16575b) != null) {
            obj = lVar;
        }
        sb2.append(obj);
        sb2.append(" protocol=");
        sb2.append(this.f18742f);
        sb2.append('}');
        return sb2.toString();
    }
}
