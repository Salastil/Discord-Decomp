package okhttp3;

import e4.f;
import java.net.ProtocolException;
import java.net.ProxySelector;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Random;
import java.util.concurrent.TimeUnit;
import javax.net.SocketFactory;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.X509TrustManager;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.jvm.internal.Intrinsics;
import n1.k;
import okhttp3.Call;
import okhttp3.Request;
import ps.g;
import ps.j;
import ps.m;
import ps.n;
import ps.o;
import ps.s;
import ps.x;
import qa.t;
import ts.h;

/* loaded from: classes3.dex */
public final class OkHttpClient implements Cloneable, Call.Factory {
    public static final List Z = qs.b.k(s.HTTP_2, s.HTTP_1_1);
    public static final List a0 = qs.b.k(m.f16566e, m.f16567f);
    public final boolean E;
    public final boolean F;
    public final CookieJar G;
    public final g H;
    public final n I;
    public final ProxySelector J;
    public final o K;
    public final SocketFactory L;
    public final SSLSocketFactory M;
    public final X509TrustManager N;
    public final List O;
    public final List P;
    public final ct.c Q;
    public final j R;
    public final f S;
    public final int T;
    public final int U;
    public final int V;
    public final int W;
    public final long X;
    public final t Y;

    /* renamed from: d, reason: collision with root package name */
    public final Dispatcher f16046d;

    /* renamed from: e, reason: collision with root package name */
    public final u4.b f16047e;

    /* renamed from: i, reason: collision with root package name */
    public final List f16048i;

    /* renamed from: v, reason: collision with root package name */
    public final List f16049v;

    /* renamed from: w, reason: collision with root package name */
    public final k f16050w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f16051x;

    /* renamed from: y, reason: collision with root package name */
    public final o f16052y;

    public static final class Builder {
        public long A;
        public t B;
        public Dispatcher a = new Dispatcher();

        /* renamed from: b, reason: collision with root package name */
        public u4.b f16053b = new u4.b(29);

        /* renamed from: c, reason: collision with root package name */
        public final ArrayList f16054c = new ArrayList();

        /* renamed from: d, reason: collision with root package name */
        public final ArrayList f16055d = new ArrayList();

        /* renamed from: e, reason: collision with root package name */
        public k f16056e;

        /* renamed from: f, reason: collision with root package name */
        public boolean f16057f;

        /* renamed from: g, reason: collision with root package name */
        public o f16058g;

        /* renamed from: h, reason: collision with root package name */
        public boolean f16059h;

        /* renamed from: i, reason: collision with root package name */
        public boolean f16060i;
        public CookieJar j;
        public g k;

        /* renamed from: l, reason: collision with root package name */
        public n f16061l;

        /* renamed from: m, reason: collision with root package name */
        public ProxySelector f16062m;

        /* renamed from: n, reason: collision with root package name */
        public o f16063n;

        /* renamed from: o, reason: collision with root package name */
        public SocketFactory f16064o;

        /* renamed from: p, reason: collision with root package name */
        public SSLSocketFactory f16065p;

        /* renamed from: q, reason: collision with root package name */
        public X509TrustManager f16066q;

        /* renamed from: r, reason: collision with root package name */
        public List f16067r;

        /* renamed from: s, reason: collision with root package name */
        public List f16068s;

        /* renamed from: t, reason: collision with root package name */
        public ct.c f16069t;

        /* renamed from: u, reason: collision with root package name */
        public j f16070u;

        /* renamed from: v, reason: collision with root package name */
        public f f16071v;

        /* renamed from: w, reason: collision with root package name */
        public int f16072w;

        /* renamed from: x, reason: collision with root package name */
        public int f16073x;

        /* renamed from: y, reason: collision with root package name */
        public int f16074y;

        /* renamed from: z, reason: collision with root package name */
        public int f16075z;

        public Builder() {
            Intrinsics.checkNotNullParameter(o.f16572d, "<this>");
            this.f16056e = new k(25);
            this.f16057f = true;
            o oVar = ps.b.f16524s;
            this.f16058g = oVar;
            this.f16059h = true;
            this.f16060i = true;
            this.j = CookieJar.f16025q;
            this.f16061l = n.f16571t;
            this.f16063n = oVar;
            SocketFactory socketFactory = SocketFactory.getDefault();
            Intrinsics.checkNotNullExpressionValue(socketFactory, "getDefault()");
            this.f16064o = socketFactory;
            this.f16067r = OkHttpClient.a0;
            this.f16068s = OkHttpClient.Z;
            this.f16069t = ct.c.a;
            this.f16070u = j.f16547c;
            this.f16073x = 10000;
            this.f16074y = 10000;
            this.f16075z = 10000;
            this.A = 1024L;
        }

        public final void a(long j, TimeUnit unit) {
            Intrinsics.checkNotNullParameter(unit, "unit");
            this.f16073x = qs.b.b(j, unit);
        }

        public final void b(CookieJar cookieJar) {
            Intrinsics.checkNotNullParameter(cookieJar, "cookieJar");
            Intrinsics.checkNotNullParameter(cookieJar, "<set-?>");
            this.j = cookieJar;
        }

        public final void c(long j, TimeUnit unit) {
            Intrinsics.checkNotNullParameter(unit, "unit");
            this.f16074y = qs.b.b(j, unit);
        }

        public final void d(long j, TimeUnit unit) {
            Intrinsics.checkNotNullParameter(unit, "unit");
            this.f16075z = qs.b.b(j, unit);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0133  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x01b2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public OkHttpClient(Builder builder) {
        List list;
        Intrinsics.checkNotNullParameter(builder, "builder");
        this.f16046d = builder.a;
        this.f16047e = builder.f16053b;
        this.f16048i = qs.b.w(builder.f16054c);
        this.f16049v = qs.b.w(builder.f16055d);
        this.f16050w = builder.f16056e;
        this.f16051x = builder.f16057f;
        this.f16052y = builder.f16058g;
        this.E = builder.f16059h;
        this.F = builder.f16060i;
        this.G = builder.j;
        this.H = builder.k;
        this.I = builder.f16061l;
        ProxySelector proxySelector = builder.f16062m;
        proxySelector = proxySelector == null ? ProxySelector.getDefault() : proxySelector;
        this.J = proxySelector == null ? at.a.a : proxySelector;
        this.K = builder.f16063n;
        this.L = builder.f16064o;
        List list2 = builder.f16067r;
        this.O = list2;
        this.P = builder.f16068s;
        this.Q = builder.f16069t;
        this.T = builder.f16072w;
        this.U = builder.f16073x;
        this.V = builder.f16074y;
        this.W = builder.f16075z;
        this.X = builder.A;
        t tVar = builder.B;
        this.Y = tVar == null ? new t() : tVar;
        if (list2 == null || !list2.isEmpty()) {
            Iterator it = list2.iterator();
            while (it.hasNext()) {
                if (((m) it.next()).a) {
                    SSLSocketFactory sSLSocketFactory = builder.f16065p;
                    if (sSLSocketFactory != null) {
                        this.M = sSLSocketFactory;
                        f certificateChainCleaner = builder.f16071v;
                        Intrinsics.checkNotNull(certificateChainCleaner);
                        this.S = certificateChainCleaner;
                        X509TrustManager x509TrustManager = builder.f16066q;
                        Intrinsics.checkNotNull(x509TrustManager);
                        this.N = x509TrustManager;
                        j jVar = builder.f16070u;
                        Intrinsics.checkNotNull(certificateChainCleaner);
                        jVar.getClass();
                        Intrinsics.checkNotNullParameter(certificateChainCleaner, "certificateChainCleaner");
                        this.R = Intrinsics.areEqual(jVar.f16548b, certificateChainCleaner) ? jVar : new j(jVar.a, certificateChainCleaner);
                    } else {
                        ys.n nVar = ys.n.a;
                        X509TrustManager trustManager = ys.n.a.m();
                        this.N = trustManager;
                        ys.n nVar2 = ys.n.a;
                        Intrinsics.checkNotNull(trustManager);
                        this.M = nVar2.l(trustManager);
                        Intrinsics.checkNotNull(trustManager);
                        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
                        f certificateChainCleaner2 = ys.n.a.b(trustManager);
                        this.S = certificateChainCleaner2;
                        j jVar2 = builder.f16070u;
                        Intrinsics.checkNotNull(certificateChainCleaner2);
                        jVar2.getClass();
                        Intrinsics.checkNotNullParameter(certificateChainCleaner2, "certificateChainCleaner");
                        this.R = Intrinsics.areEqual(jVar2.f16548b, certificateChainCleaner2) ? jVar2 : new j(jVar2.a, certificateChainCleaner2);
                    }
                    X509TrustManager x509TrustManager2 = this.N;
                    f fVar = this.S;
                    SSLSocketFactory sSLSocketFactory2 = this.M;
                    List list3 = this.f16049v;
                    list = this.f16048i;
                    if (!list.contains(null)) {
                        throw new IllegalStateException(Intrinsics.stringPlus("Null interceptor: ", list).toString());
                    }
                    if (list3.contains(null)) {
                        throw new IllegalStateException(Intrinsics.stringPlus("Null network interceptor: ", list3).toString());
                    }
                    List list4 = this.O;
                    if (list4 == null || !list4.isEmpty()) {
                        Iterator it2 = list4.iterator();
                        while (it2.hasNext()) {
                            if (((m) it2.next()).a) {
                                if (sSLSocketFactory2 == null) {
                                    throw new IllegalStateException("sslSocketFactory == null");
                                }
                                if (fVar == null) {
                                    throw new IllegalStateException("certificateChainCleaner == null");
                                }
                                if (x509TrustManager2 == null) {
                                    throw new IllegalStateException("x509TrustManager == null");
                                }
                                return;
                            }
                        }
                    }
                    if (sSLSocketFactory2 != null) {
                        throw new IllegalStateException("Check failed.");
                    }
                    if (fVar != null) {
                        throw new IllegalStateException("Check failed.");
                    }
                    if (x509TrustManager2 != null) {
                        throw new IllegalStateException("Check failed.");
                    }
                    if (!Intrinsics.areEqual(this.R, j.f16547c)) {
                        throw new IllegalStateException("Check failed.");
                    }
                    return;
                }
            }
        }
        this.M = null;
        this.S = null;
        this.N = null;
        this.R = j.f16547c;
        X509TrustManager x509TrustManager22 = this.N;
        f fVar2 = this.S;
        SSLSocketFactory sSLSocketFactory22 = this.M;
        List list32 = this.f16049v;
        list = this.f16048i;
        if (!list.contains(null)) {
        }
    }

    @Override // okhttp3.Call.Factory
    public final h a(Request request) {
        Intrinsics.checkNotNullParameter(request, "request");
        return new h(this, request, false);
    }

    public final Builder b() {
        Intrinsics.checkNotNullParameter(this, "okHttpClient");
        Builder builder = new Builder();
        builder.a = this.f16046d;
        builder.f16053b = this.f16047e;
        h0.o(builder.f16054c, this.f16048i);
        h0.o(builder.f16055d, this.f16049v);
        builder.f16056e = this.f16050w;
        builder.f16057f = this.f16051x;
        builder.f16058g = this.f16052y;
        builder.f16059h = this.E;
        builder.f16060i = this.F;
        builder.j = this.G;
        builder.k = this.H;
        builder.f16061l = this.I;
        builder.f16062m = this.J;
        builder.f16063n = this.K;
        builder.f16064o = this.L;
        builder.f16065p = this.M;
        builder.f16066q = this.N;
        builder.f16067r = this.O;
        builder.f16068s = this.P;
        builder.f16069t = this.Q;
        builder.f16070u = this.R;
        builder.f16071v = this.S;
        builder.f16072w = this.T;
        builder.f16073x = this.U;
        builder.f16074y = this.V;
        builder.f16075z = this.W;
        builder.A = this.X;
        builder.B = this.Y;
        return builder;
    }

    public final dt.g c(Request request, x listener) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(listener, "listener");
        dt.g gVar = new dt.g(ss.c.f18141h, request, listener, new Random(), 0, this.X);
        Intrinsics.checkNotNullParameter(this, "client");
        if (request.a("Sec-WebSocket-Extensions") != null) {
            gVar.f(new ProtocolException("Request header not permitted: 'Sec-WebSocket-Extensions'"), null);
            return gVar;
        }
        Builder b10 = b();
        o eventListener = o.f16572d;
        Intrinsics.checkNotNullParameter(eventListener, "eventListener");
        Intrinsics.checkNotNullParameter(eventListener, "<this>");
        k kVar = new k(25);
        Intrinsics.checkNotNullParameter(kVar, "<set-?>");
        b10.f16056e = kVar;
        List protocols = dt.g.f7772w;
        Intrinsics.checkNotNullParameter(protocols, "protocols");
        ArrayList j02 = CollectionsKt.j0(protocols);
        s sVar = s.H2_PRIOR_KNOWLEDGE;
        if (!j02.contains(sVar) && !j02.contains(s.HTTP_1_1)) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("protocols must contain h2_prior_knowledge or http/1.1: ", j02).toString());
        }
        if (j02.contains(sVar) && j02.size() > 1) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("protocols containing h2_prior_knowledge cannot use other protocols: ", j02).toString());
        }
        if (j02.contains(s.HTTP_1_0)) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("protocols must not contain http/1.0: ", j02).toString());
        }
        if (j02.contains(null)) {
            throw new IllegalArgumentException("protocols must not contain null");
        }
        j02.remove(s.SPDY_3);
        if (!Intrinsics.areEqual(j02, b10.f16068s)) {
            b10.B = null;
        }
        List unmodifiableList = Collections.unmodifiableList(j02);
        Intrinsics.checkNotNullExpressionValue(unmodifiableList, "unmodifiableList(protocolsCopy)");
        Intrinsics.checkNotNullParameter(unmodifiableList, "<set-?>");
        b10.f16068s = unmodifiableList;
        OkHttpClient okHttpClient = new OkHttpClient(b10);
        Request.Builder b11 = request.b();
        b11.d("Upgrade", "websocket");
        b11.d("Connection", "Upgrade");
        b11.d("Sec-WebSocket-Key", gVar.f7777f);
        b11.d("Sec-WebSocket-Version", "13");
        b11.d("Sec-WebSocket-Extensions", "permessage-deflate");
        Request b12 = b11.b();
        h hVar = new h(okHttpClient, b12, true);
        gVar.f7778g = hVar;
        Intrinsics.checkNotNull(hVar);
        hVar.d(new e4.c(9, gVar, b12));
        return gVar;
    }

    public final Object clone() {
        return super.clone();
    }

    public OkHttpClient() {
        this(new Builder());
    }
}
