package ws;

import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.ProtocolException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.TimeUnit;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okio.ByteString;
import okio.Sink;
import okio.Source;

/* loaded from: classes3.dex */
public final class q implements us.d {

    /* renamed from: g, reason: collision with root package name */
    public static final List f20120g = qs.b.k("connection", "host", "keep-alive", "proxy-connection", "te", "transfer-encoding", "encoding", "upgrade", ":method", ":path", ":scheme", ":authority");

    /* renamed from: h, reason: collision with root package name */
    public static final List f20121h = qs.b.k("connection", "host", "keep-alive", "proxy-connection", "te", "transfer-encoding", "encoding", "upgrade");
    public final ts.k a;

    /* renamed from: b, reason: collision with root package name */
    public final us.f f20122b;

    /* renamed from: c, reason: collision with root package name */
    public final p f20123c;

    /* renamed from: d, reason: collision with root package name */
    public volatile w f20124d;

    /* renamed from: e, reason: collision with root package name */
    public final ps.s f20125e;

    /* renamed from: f, reason: collision with root package name */
    public volatile boolean f20126f;

    public q(OkHttpClient client, ts.k connection, us.f chain, p http2Connection) {
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(connection, "connection");
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(http2Connection, "http2Connection");
        this.a = connection;
        this.f20122b = chain;
        this.f20123c = http2Connection;
        List list = client.P;
        ps.s sVar = ps.s.H2_PRIOR_KNOWLEDGE;
        this.f20125e = list.contains(sVar) ? sVar : ps.s.HTTP_2;
    }

    @Override // us.d
    public final void a() {
        w wVar = this.f20124d;
        Intrinsics.checkNotNull(wVar);
        wVar.g().close();
    }

    @Override // us.d
    public final void b(Request request) {
        int i5;
        w wVar;
        boolean z5;
        Intrinsics.checkNotNullParameter(request, "request");
        if (this.f20124d != null) {
            return;
        }
        boolean z6 = request.f16078d != null;
        Intrinsics.checkNotNullParameter(request, "request");
        Headers headers = request.f16077c;
        ArrayList requestHeaders = new ArrayList(headers.size() + 4);
        requestHeaders.add(new c(c.f20069f, request.f16076b));
        ByteString byteString = c.f20070g;
        HttpUrl url = request.a;
        Intrinsics.checkNotNullParameter(url, "url");
        String b10 = url.b();
        String d6 = url.d();
        if (d6 != null) {
            b10 = b10 + '?' + ((Object) d6);
        }
        requestHeaders.add(new c(byteString, b10));
        String a = request.a("Host");
        if (a != null) {
            requestHeaders.add(new c(c.f20072i, a));
        }
        requestHeaders.add(new c(c.f20071h, url.a));
        int size = headers.size();
        int i6 = 0;
        while (i6 < size) {
            int i10 = i6 + 1;
            String b11 = headers.b(i6);
            Locale locale = Locale.US;
            String o6 = a3.e.o(locale, "US", b11, locale, "this as java.lang.String).toLowerCase(locale)");
            if (!f20120g.contains(o6) || (Intrinsics.areEqual(o6, "te") && Intrinsics.areEqual(headers.h(i6), "trailers"))) {
                requestHeaders.add(new c(o6, headers.h(i6)));
            }
            i6 = i10;
        }
        p pVar = this.f20123c;
        pVar.getClass();
        Intrinsics.checkNotNullParameter(requestHeaders, "requestHeaders");
        boolean z7 = !z6;
        synchronized (pVar.T) {
            synchronized (pVar) {
                try {
                    if (pVar.f20117w > 1073741823) {
                        pVar.l(b.REFUSED_STREAM);
                    }
                    if (pVar.f20118x) {
                        throw new a();
                    }
                    i5 = pVar.f20117w;
                    pVar.f20117w = i5 + 2;
                    wVar = new w(i5, pVar, z7, false, null);
                    z5 = !z6 || pVar.Q >= pVar.R || wVar.f20150e >= wVar.f20151f;
                    if (wVar.i()) {
                        pVar.f20114e.put(Integer.valueOf(i5), wVar);
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            pVar.T.l(z7, i5, requestHeaders);
        }
        if (z5) {
            pVar.T.flush();
        }
        this.f20124d = wVar;
        if (this.f20126f) {
            w wVar2 = this.f20124d;
            Intrinsics.checkNotNull(wVar2);
            wVar2.e(b.CANCEL);
            throw new IOException("Canceled");
        }
        w wVar3 = this.f20124d;
        Intrinsics.checkNotNull(wVar3);
        et.v vVar = wVar3.k;
        long j = this.f20122b.f19118g;
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        vVar.g(j, timeUnit);
        w wVar4 = this.f20124d;
        Intrinsics.checkNotNull(wVar4);
        wVar4.f20155l.g(this.f20122b.f19119h, timeUnit);
    }

    @Override // us.d
    public final Source c(Response response) {
        Intrinsics.checkNotNullParameter(response, "response");
        w wVar = this.f20124d;
        Intrinsics.checkNotNull(wVar);
        return wVar.f20154i;
    }

    @Override // us.d
    public final void cancel() {
        this.f20126f = true;
        w wVar = this.f20124d;
        if (wVar == null) {
            return;
        }
        wVar.e(b.CANCEL);
    }

    @Override // us.d
    public final ps.t d(boolean z5) {
        Headers headerBlock;
        w wVar = this.f20124d;
        if (wVar == null) {
            throw new IOException("stream wasn't created");
        }
        synchronized (wVar) {
            wVar.k.i();
            while (wVar.f20152g.isEmpty() && wVar.f20156m == null) {
                try {
                    try {
                        wVar.wait();
                    } catch (InterruptedException unused) {
                        Thread.currentThread().interrupt();
                        throw new InterruptedIOException();
                    }
                } catch (Throwable th2) {
                    wVar.k.l();
                    throw th2;
                }
            }
            wVar.k.l();
            if (wVar.f20152g.isEmpty()) {
                IOException iOException = wVar.f20157n;
                if (iOException != null) {
                    throw iOException;
                }
                b bVar = wVar.f20156m;
                Intrinsics.checkNotNull(bVar);
                throw new b0(bVar);
            }
            Object removeFirst = wVar.f20152g.removeFirst();
            Intrinsics.checkNotNullExpressionValue(removeFirst, "headersQueue.removeFirst()");
            headerBlock = (Headers) removeFirst;
        }
        ps.s protocol = this.f20125e;
        Intrinsics.checkNotNullParameter(headerBlock, "headerBlock");
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        ArrayList arrayList = new ArrayList(20);
        int size = headerBlock.size();
        a1.d dVar = null;
        int i5 = 0;
        while (i5 < size) {
            int i6 = i5 + 1;
            String name = headerBlock.b(i5);
            String value = headerBlock.h(i5);
            if (Intrinsics.areEqual(name, ":status")) {
                dVar = w3.q.u(Intrinsics.stringPlus("HTTP/1.1 ", value));
            } else if (!f20121h.contains(name)) {
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(value, "value");
                arrayList.add(name);
                arrayList.add(StringsKt.b0(value).toString());
            }
            i5 = i6;
        }
        if (dVar == null) {
            throw new ProtocolException("Expected ':status' header not present");
        }
        ps.t tVar = new ps.t();
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        tVar.f16586b = protocol;
        tVar.f16587c = dVar.f14e;
        String message = (String) dVar.f16v;
        Intrinsics.checkNotNullParameter(message, "message");
        tVar.f16588d = message;
        Object[] array = arrayList.toArray(new String[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        tVar.c(new Headers((String[]) array));
        if (z5 && tVar.f16587c == 100) {
            return null;
        }
        return tVar;
    }

    @Override // us.d
    public final ts.k e() {
        return this.a;
    }

    @Override // us.d
    public final void f() {
        this.f20123c.flush();
    }

    @Override // us.d
    public final long g(Response response) {
        Intrinsics.checkNotNullParameter(response, "response");
        if (us.e.a(response)) {
            return qs.b.j(response);
        }
        return 0L;
    }

    @Override // us.d
    public final Sink h(Request request, long j) {
        Intrinsics.checkNotNullParameter(request, "request");
        w wVar = this.f20124d;
        Intrinsics.checkNotNull(wVar);
        return wVar.g();
    }
}
