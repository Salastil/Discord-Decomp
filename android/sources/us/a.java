package us;

import a5.a0;
import hc.k;
import io.sentry.e6;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ProtocolException;
import java.net.Proxy;
import java.net.SocketTimeoutException;
import java.security.cert.CertificateException;
import java.util.List;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSocketFactory;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import lh.y;
import okhttp3.Cookie;
import okhttp3.CookieJar;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.Interceptor;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import ps.j;
import ps.t;
import ps.v;
import ts.h;
import ts.l;
import ts.m;

/* loaded from: classes3.dex */
public final class a implements Interceptor {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f19110b;

    public a(CookieJar cookieJar) {
        Intrinsics.checkNotNullParameter(cookieJar, "cookieJar");
        this.f19110b = cookieJar;
    }

    public static int c(Response response, int i5) {
        String f2 = response.f("Retry-After", null);
        if (f2 == null) {
            return i5;
        }
        if (!new Regex("\\d+").d(f2)) {
            return Integer.MAX_VALUE;
        }
        Integer valueOf = Integer.valueOf(f2);
        Intrinsics.checkNotNullExpressionValue(valueOf, "valueOf(header)");
        return valueOf.intValue();
    }

    public Request a(Response response, k kVar) {
        ts.k kVar2;
        y yVar;
        RequestBody requestBody;
        Response response2;
        v vVar = (kVar == null || (kVar2 = (ts.k) kVar.f9765x) == null) ? null : kVar2.f18738b;
        int i5 = response.f16088v;
        Request request = response.f16085d;
        String method = request.f16076b;
        if (i5 != 307 && i5 != 308) {
            if (i5 == 401) {
                ((OkHttpClient) this.f19110b).f16052y.getClass();
                Intrinsics.checkNotNullParameter(response, "response");
                return null;
            }
            if (i5 == 421) {
                RequestBody requestBody2 = request.f16078d;
                if ((requestBody2 == null || !requestBody2.isOneShot()) && kVar != null && !Intrinsics.areEqual(((ts.e) kVar.f9763v).f18715b.f16522h.f16034d, ((ts.k) kVar.f9765x).f18738b.a.f16522h.f16034d)) {
                    ts.k kVar3 = (ts.k) kVar.f9765x;
                    synchronized (kVar3) {
                        kVar3.k = true;
                    }
                    return response.f16085d;
                }
            } else if (i5 == 503) {
                Response response3 = response.G;
                if ((response3 == null || response3.f16088v != 503) && c(response, Integer.MAX_VALUE) == 0) {
                    return response.f16085d;
                }
            } else {
                if (i5 == 407) {
                    Intrinsics.checkNotNull(vVar);
                    if (vVar.f16600b.type() != Proxy.Type.HTTP) {
                        throw new ProtocolException("Received HTTP_PROXY_AUTH (407) code while not using proxy");
                    }
                    ((OkHttpClient) this.f19110b).K.getClass();
                    Intrinsics.checkNotNullParameter(response, "response");
                    return null;
                }
                if (i5 != 408) {
                    switch (i5) {
                    }
                } else if (((OkHttpClient) this.f19110b).f16051x && (((requestBody = request.f16078d) == null || !requestBody.isOneShot()) && (((response2 = response.G) == null || response2.f16088v != 408) && c(response, 0) <= 0))) {
                    return response.f16085d;
                }
            }
            return null;
        }
        OkHttpClient okHttpClient = (OkHttpClient) this.f19110b;
        if (okHttpClient.E) {
            String link = response.f("Location", null);
            Request request2 = response.f16085d;
            if (link != null) {
                HttpUrl httpUrl = request2.a;
                httpUrl.getClass();
                Intrinsics.checkNotNullParameter(link, "link");
                Intrinsics.checkNotNullParameter(link, "link");
                try {
                    yVar = new y(1);
                    yVar.g(httpUrl, link);
                } catch (IllegalArgumentException unused) {
                    yVar = null;
                }
                HttpUrl url = yVar == null ? null : yVar.b();
                if (url != null && (Intrinsics.areEqual(url.a, request2.a.a) || okHttpClient.F)) {
                    Request.Builder b10 = request2.b();
                    if (tn.g.t(method)) {
                        int i6 = response.f16088v;
                        Intrinsics.checkNotNullParameter(method, "method");
                        boolean z5 = Intrinsics.areEqual(method, "PROPFIND") || i6 == 308 || i6 == 307;
                        Intrinsics.checkNotNullParameter(method, "method");
                        if (Intrinsics.areEqual(method, "PROPFIND") || i6 == 308 || i6 == 307) {
                            b10.f(method, z5 ? request2.f16078d : null);
                        } else {
                            b10.f("GET", null);
                        }
                        if (!z5) {
                            b10.g("Transfer-Encoding");
                            b10.g("Content-Length");
                            b10.g("Content-Type");
                        }
                    }
                    if (!qs.b.a(request2.a, url)) {
                        b10.g("Authorization");
                    }
                    Intrinsics.checkNotNullParameter(url, "url");
                    b10.a = url;
                    return b10.b();
                }
            }
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0029, code lost:
    
        if (r7 == false) goto L30;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean b(IOException iOException, h hVar, Request request, boolean z5) {
        boolean z6;
        aj.a aVar;
        ts.k kVar;
        RequestBody requestBody;
        if (!((OkHttpClient) this.f19110b).f16051x || ((z5 && (((requestBody = request.f16078d) != null && requestBody.isOneShot()) || (iOException instanceof FileNotFoundException))) || (iOException instanceof ProtocolException))) {
            return false;
        }
        if (iOException instanceof InterruptedIOException) {
            if (iOException instanceof SocketTimeoutException) {
            }
        }
        if (((iOException instanceof SSLHandshakeException) && (iOException.getCause() instanceof CertificateException)) || (iOException instanceof SSLPeerUnverifiedException)) {
            return false;
        }
        ts.e eVar = hVar.E;
        Intrinsics.checkNotNull(eVar);
        int i5 = eVar.f18719f;
        if (i5 == 0 && eVar.f18720g == 0 && eVar.f18721h == 0) {
            z6 = false;
        } else {
            if (eVar.f18722i == null) {
                v vVar = null;
                if (i5 <= 1 && eVar.f18720g <= 1 && eVar.f18721h <= 0 && (kVar = eVar.f18716c.F) != null) {
                    synchronized (kVar) {
                        if (kVar.f18746l == 0) {
                            if (qs.b.a(kVar.f18738b.a.f16522h, eVar.f18715b.f16522h)) {
                                vVar = kVar.f18738b;
                            }
                        }
                    }
                }
                if (vVar != null) {
                    eVar.f18722i = vVar;
                } else {
                    a0 a0Var = eVar.f18717d;
                    if ((a0Var == null || !a0Var.r()) && (aVar = eVar.f18718e) != null) {
                        z6 = aVar.k();
                    }
                }
            }
            z6 = true;
        }
        return z6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:51:0x00dd, code lost:
    
        r6.f(r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x00ed, code lost:
    
        return r9;
     */
    @Override // okhttp3.Interceptor
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Response intercept(Interceptor.Chain chain) {
        boolean z5;
        ResponseBody responseBody;
        boolean z6;
        SSLSocketFactory sSLSocketFactory;
        ct.c cVar;
        j jVar;
        switch (this.a) {
            case 0:
                CookieJar cookieJar = (CookieJar) this.f19110b;
                Intrinsics.checkNotNullParameter(chain, "chain");
                f fVar = (f) chain;
                Request request = fVar.f19116e;
                Request.Builder b10 = request.b();
                HttpUrl httpUrl = request.a;
                RequestBody requestBody = request.f16078d;
                if (requestBody != null) {
                    MediaType mediaType = requestBody.get$mediaType();
                    if (mediaType != null) {
                        b10.d("Content-Type", mediaType.a);
                    }
                    long contentLength = requestBody.contentLength();
                    if (contentLength != -1) {
                        b10.d("Content-Length", String.valueOf(contentLength));
                        b10.g("Transfer-Encoding");
                    } else {
                        b10.d("Transfer-Encoding", "chunked");
                        b10.g("Content-Length");
                    }
                }
                int i5 = 0;
                if (request.a("Host") == null) {
                    b10.d("Host", qs.b.v(httpUrl, false));
                }
                if (request.a("Connection") == null) {
                    b10.d("Connection", "Keep-Alive");
                }
                if (request.a("Accept-Encoding") == null && request.a("Range") == null) {
                    b10.d("Accept-Encoding", "gzip");
                    z5 = true;
                } else {
                    z5 = false;
                }
                List loadForRequest = cookieJar.loadForRequest(httpUrl);
                if (!loadForRequest.isEmpty()) {
                    StringBuilder sb2 = new StringBuilder();
                    for (Object obj : loadForRequest) {
                        int i6 = i5 + 1;
                        if (i5 < 0) {
                            c0.k();
                            throw null;
                        }
                        Cookie cookie = (Cookie) obj;
                        if (i5 > 0) {
                            sb2.append("; ");
                        }
                        sb2.append(cookie.a);
                        sb2.append('=');
                        sb2.append(cookie.f16017b);
                        i5 = i6;
                    }
                    String sb3 = sb2.toString();
                    Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
                    b10.d("Cookie", sb3);
                }
                if (request.a("User-Agent") == null) {
                    b10.d("User-Agent", "okhttp/4.11.0");
                }
                Response a = fVar.a(b10.b());
                Headers headers = a.f16090x;
                e.b(cookieJar, httpUrl, headers);
                t i10 = a.i();
                Intrinsics.checkNotNullParameter(request, "request");
                i10.a = request;
                if (z5 && "gzip".equalsIgnoreCase(a.f("Content-Encoding", null)) && e.a(a) && (responseBody = a.f16091y) != null) {
                    et.k kVar = new et.k(responseBody.source());
                    e6 d6 = headers.d();
                    d6.f("Content-Encoding");
                    d6.f("Content-Length");
                    i10.c(d6.d());
                    i10.f16591g = new g(a.f("Content-Type", null), -1L, et.y.d(kVar));
                }
                return i10.a();
            default:
                Intrinsics.checkNotNullParameter(chain, "chain");
                f fVar2 = (f) chain;
                Request request2 = fVar2.f19116e;
                h hVar = fVar2.a;
                List list = m0.f13512d;
                Response response = null;
                int i11 = 0;
                Request request3 = request2;
                while (true) {
                    boolean z7 = true;
                    while (true) {
                        Intrinsics.checkNotNullParameter(request3, "request");
                        if (hVar.H != null) {
                            throw new IllegalStateException("Check failed.");
                        }
                        synchronized (hVar) {
                            if (hVar.J) {
                                throw new IllegalStateException("cannot make a new request because the previous response is still open: please call response.close()");
                            }
                            if (hVar.I) {
                                throw new IllegalStateException("Check failed.");
                            }
                            Unit unit = Unit.a;
                        }
                        if (z7) {
                            l lVar = hVar.f18729v;
                            HttpUrl httpUrl2 = request3.a;
                            OkHttpClient okHttpClient = hVar.f18726d;
                            if (httpUrl2.f16039i) {
                                SSLSocketFactory sSLSocketFactory2 = okHttpClient.M;
                                if (sSLSocketFactory2 == null) {
                                    throw new IllegalStateException("CLEARTEXT-only client");
                                }
                                ct.c cVar2 = okHttpClient.Q;
                                jVar = okHttpClient.R;
                                sSLSocketFactory = sSLSocketFactory2;
                                cVar = cVar2;
                            } else {
                                sSLSocketFactory = null;
                                cVar = null;
                                jVar = null;
                            }
                            hVar.E = new ts.e(lVar, new ps.a(httpUrl2.f16034d, httpUrl2.f16035e, okHttpClient.I, okHttpClient.L, sSLSocketFactory, cVar, jVar, okHttpClient.K, okHttpClient.P, okHttpClient.O, okHttpClient.J), hVar);
                        }
                        try {
                            if (hVar.L) {
                                throw new IOException("Canceled");
                            }
                            try {
                                Response a10 = fVar2.a(request3);
                                if (response != null) {
                                    t i12 = a10.i();
                                    t i13 = response.i();
                                    i13.f16591g = null;
                                    Response a11 = i13.a();
                                    if (a11.f16091y != null) {
                                        throw new IllegalArgumentException("priorResponse.body != null");
                                    }
                                    i12.j = a11;
                                    a10 = i12.a();
                                }
                                response = a10;
                                k kVar2 = hVar.H;
                                request3 = a(response, kVar2);
                                if (request3 == null) {
                                    if (kVar2 != null && kVar2.f9760d) {
                                        if (hVar.G) {
                                            throw new IllegalStateException("Check failed.");
                                        }
                                        hVar.G = true;
                                        hVar.f18730w.j();
                                    }
                                    z6 = false;
                                    break;
                                } else {
                                    z6 = false;
                                    RequestBody requestBody2 = request3.f16078d;
                                    if (requestBody2 != null && requestBody2.isOneShot()) {
                                        break;
                                    } else {
                                        ResponseBody responseBody2 = response.f16091y;
                                        if (responseBody2 != null) {
                                            qs.b.c(responseBody2);
                                        }
                                        i11++;
                                        if (i11 > 20) {
                                            throw new ProtocolException(Intrinsics.stringPlus("Too many follow-up requests: ", Integer.valueOf(i11)));
                                        }
                                        hVar.f(true);
                                    }
                                }
                            } catch (IOException e9) {
                                if (!b(e9, hVar, request3, !(e9 instanceof ws.a))) {
                                    qs.b.z(e9, list);
                                    throw e9;
                                }
                                list = CollectionsKt.W(list, e9);
                                hVar.f(true);
                            } catch (m e10) {
                                if (!b(e10.f18756e, hVar, request3, false)) {
                                    IOException iOException = e10.f18755d;
                                    qs.b.z(iOException, list);
                                    throw iOException;
                                }
                                list = CollectionsKt.W(list, e10.f18755d);
                                hVar.f(true);
                            }
                        } catch (Throwable th2) {
                            hVar.f(true);
                            throw th2;
                        }
                        z7 = false;
                    }
                }
                break;
        }
    }

    public a(OkHttpClient client) {
        Intrinsics.checkNotNullParameter(client, "client");
        this.f19110b = client;
    }
}
