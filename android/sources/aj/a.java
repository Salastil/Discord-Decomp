package aj;

import androidx.recyclerview.widget.h;
import eq.f;
import et.g;
import et.j;
import et.r;
import et.w;
import io.sentry.e6;
import java.io.EOFException;
import java.io.IOException;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.Socket;
import java.net.URI;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Call;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okio.BufferedSink;
import okio.BufferedSource;
import okio.Sink;
import okio.Source;
import okio.Timeout;
import ps.o;
import ps.s;
import ps.t;
import ts.k;
import us.d;
import us.e;
import w3.q;

/* loaded from: classes3.dex */
public final class a implements d {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public Object f634b;

    /* renamed from: c, reason: collision with root package name */
    public int f635c;

    /* renamed from: d, reason: collision with root package name */
    public Object f636d;

    /* renamed from: e, reason: collision with root package name */
    public Object f637e;

    /* renamed from: f, reason: collision with root package name */
    public Object f638f;

    /* renamed from: g, reason: collision with root package name */
    public Object f639g;

    /* renamed from: h, reason: collision with root package name */
    public Object f640h;

    public /* synthetic */ a() {
    }

    public static final void i(a aVar, j jVar) {
        Timeout timeout = jVar.f8249e;
        w delegate = Timeout.f16119d;
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        jVar.f8249e = delegate;
        timeout.a();
        timeout.b();
    }

    @Override // us.d
    public void a() {
        ((BufferedSink) this.f638f).flush();
    }

    @Override // us.d
    public void b(Request request) {
        Intrinsics.checkNotNullParameter(request, "request");
        Proxy.Type proxyType = ((k) this.f636d).f18738b.f16600b.type();
        Intrinsics.checkNotNullExpressionValue(proxyType, "connection.route().proxy.type()");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(proxyType, "proxyType");
        StringBuilder sb2 = new StringBuilder();
        sb2.append(request.f16076b);
        sb2.append(' ');
        HttpUrl url = request.a;
        if (url.f16039i || proxyType != Proxy.Type.HTTP) {
            Intrinsics.checkNotNullParameter(url, "url");
            String b10 = url.b();
            String d6 = url.d();
            if (d6 != null) {
                b10 = b10 + '?' + ((Object) d6);
            }
            sb2.append(b10);
        } else {
            sb2.append(url);
        }
        sb2.append(" HTTP/1.1");
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        m(request.f16077c, sb3);
    }

    @Override // us.d
    public Source c(Response response) {
        Intrinsics.checkNotNullParameter(response, "response");
        if (!e.a(response)) {
            return l(0L);
        }
        if ("chunked".equalsIgnoreCase(response.f("Transfer-Encoding", null))) {
            HttpUrl httpUrl = response.f16085d.a;
            int i5 = this.f635c;
            if (i5 != 4) {
                throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i5)).toString());
            }
            this.f635c = 5;
            return new vs.c(this, httpUrl);
        }
        long j = qs.b.j(response);
        if (j != -1) {
            return l(j);
        }
        int i6 = this.f635c;
        if (i6 != 4) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i6)).toString());
        }
        this.f635c = 5;
        ((k) this.f636d).k();
        Intrinsics.checkNotNullParameter(this, "this$0");
        return new vs.e(this);
    }

    @Override // us.d
    public void cancel() {
        Socket socket = ((k) this.f636d).f18739c;
        if (socket == null) {
            return;
        }
        qs.b.d(socket);
    }

    @Override // us.d
    public t d(boolean z5) {
        h hVar = (h) this.f639g;
        int i5 = this.f635c;
        if (i5 != 1 && i5 != 2 && i5 != 3) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i5)).toString());
        }
        try {
            String y5 = ((BufferedSource) hVar.f2402i).y(hVar.f2401e);
            hVar.f2401e -= y5.length();
            a1.d u5 = q.u(y5);
            int i6 = u5.f14e;
            t tVar = new t();
            s protocol = (s) u5.f15i;
            Intrinsics.checkNotNullParameter(protocol, "protocol");
            tVar.f16586b = protocol;
            tVar.f16587c = i6;
            String message = (String) u5.f16v;
            Intrinsics.checkNotNullParameter(message, "message");
            tVar.f16588d = message;
            e6 e6Var = new e6();
            while (true) {
                String y6 = ((BufferedSource) hVar.f2402i).y(hVar.f2401e);
                hVar.f2401e -= y6.length();
                if (y6.length() == 0) {
                    break;
                }
                e6Var.b(y6);
            }
            tVar.c(e6Var.d());
            if (z5 && i6 == 100) {
                return null;
            }
            if (i6 == 100) {
                this.f635c = 3;
                return tVar;
            }
            if (102 > i6 || i6 >= 200) {
                this.f635c = 4;
                return tVar;
            }
            this.f635c = 3;
            return tVar;
        } catch (EOFException e9) {
            throw new IOException(Intrinsics.stringPlus("unexpected end of stream on ", ((k) this.f636d).f18738b.a.f16522h.f()), e9);
        }
    }

    @Override // us.d
    public k e() {
        return (k) this.f636d;
    }

    @Override // us.d
    public void f() {
        ((BufferedSink) this.f638f).flush();
    }

    @Override // us.d
    public long g(Response response) {
        Intrinsics.checkNotNullParameter(response, "response");
        if (!e.a(response)) {
            return 0L;
        }
        if ("chunked".equalsIgnoreCase(response.f("Transfer-Encoding", null))) {
            return -1L;
        }
        return qs.b.j(response);
    }

    @Override // us.d
    public Sink h(Request request, long j) {
        Intrinsics.checkNotNullParameter(request, "request");
        RequestBody requestBody = request.f16078d;
        if (requestBody != null && requestBody.isDuplex()) {
            throw new ProtocolException("Duplex connections are not supported for HTTP/1");
        }
        if ("chunked".equalsIgnoreCase(request.a("Transfer-Encoding"))) {
            int i5 = this.f635c;
            if (i5 != 1) {
                throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i5)).toString());
            }
            this.f635c = 2;
            return new vs.b(this);
        }
        if (j == -1) {
            throw new IllegalStateException("Cannot stream a request body without chunked encoding or a known content length!");
        }
        int i6 = this.f635c;
        if (i6 != 1) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i6)).toString());
        }
        this.f635c = 2;
        return new g(this);
    }

    public b j() {
        String str = this.f635c == 0 ? " registrationStatus" : "";
        if (((Long) this.f639g) == null) {
            str = str.concat(" expiresInSecs");
        }
        if (((Long) this.f640h) == null) {
            str = k0.d.k(str, " tokenCreationEpochInSecs");
        }
        if (str.isEmpty()) {
            return new b((String) this.f634b, this.f635c, (String) this.f636d, (String) this.f637e, ((Long) this.f639g).longValue(), ((Long) this.f640h).longValue(), (String) this.f638f);
        }
        throw new IllegalStateException("Missing required properties:".concat(str));
    }

    public boolean k() {
        return this.f635c < ((List) this.f638f).size() || !((ArrayList) this.f640h).isEmpty();
    }

    public vs.d l(long j) {
        int i5 = this.f635c;
        if (i5 != 4) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i5)).toString());
        }
        this.f635c = 5;
        return new vs.d(this, j);
    }

    public void m(Headers headers, String requestLine) {
        BufferedSink bufferedSink = (BufferedSink) this.f638f;
        Intrinsics.checkNotNullParameter(headers, "headers");
        Intrinsics.checkNotNullParameter(requestLine, "requestLine");
        int i5 = this.f635c;
        if (i5 != 0) {
            throw new IllegalStateException(Intrinsics.stringPlus("state: ", Integer.valueOf(i5)).toString());
        }
        bufferedSink.B(requestLine).B("\r\n");
        int size = headers.size();
        for (int i6 = 0; i6 < size; i6++) {
            bufferedSink.B(headers.b(i6)).B(": ").B(headers.h(i6)).B("\r\n");
        }
        bufferedSink.B("\r\n");
        this.f635c = 1;
    }

    public String toString() {
        switch (this.a) {
            case 1:
                return ((bq.a) this.f636d) + " version=" + ((f) this.f637e);
            default:
                return super.toString();
        }
    }

    public a(bq.a kind, f metadataVersion, String[] strArr, String[] strArr2, String[] strArr3, String str, int i5) {
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        this.f636d = kind;
        this.f637e = metadataVersion;
        this.f638f = strArr;
        this.f639g = strArr2;
        this.f640h = strArr3;
        this.f634b = str;
        this.f635c = i5;
    }

    public a(ps.a address, qa.t routeDatabase, Call call) {
        List proxies;
        Intrinsics.checkNotNullParameter(address, "address");
        Intrinsics.checkNotNullParameter(routeDatabase, "routeDatabase");
        Intrinsics.checkNotNullParameter(call, "call");
        o eventListener = o.f16572d;
        Intrinsics.checkNotNullParameter(eventListener, "eventListener");
        this.f634b = address;
        this.f636d = routeDatabase;
        this.f637e = call;
        m0 m0Var = m0.f13512d;
        this.f638f = m0Var;
        this.f639g = m0Var;
        this.f640h = new ArrayList();
        HttpUrl url = address.f16522h;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(url, "url");
        URI g6 = url.g();
        if (g6.getHost() == null) {
            proxies = qs.b.k(Proxy.NO_PROXY);
        } else {
            List<Proxy> proxiesOrNull = address.f16521g.select(g6);
            if (proxiesOrNull != null && !proxiesOrNull.isEmpty()) {
                Intrinsics.checkNotNullExpressionValue(proxiesOrNull, "proxiesOrNull");
                proxies = qs.b.w(proxiesOrNull);
            } else {
                proxies = qs.b.k(Proxy.NO_PROXY);
            }
        }
        this.f638f = proxies;
        this.f635c = 0;
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(proxies, "proxies");
    }

    public a(OkHttpClient okHttpClient, k connection, r source, et.q sink) {
        Intrinsics.checkNotNullParameter(connection, "connection");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(sink, "sink");
        this.f634b = okHttpClient;
        this.f636d = connection;
        this.f637e = source;
        this.f638f = sink;
        this.f639g = new h(source);
    }
}
