package rs;

import a5.k0;
import com.facebook.react.devsupport.StackTraceHelper;
import et.y;
import io.sentry.e6;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.List;
import java.util.Set;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.x;
import m3.n;
import okhttp3.CacheControl;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.Interceptor;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import okio.Source;
import ps.o;
import ps.s;
import ps.t;

/* loaded from: classes3.dex */
public final class b implements Interceptor {
    public final ps.g a;

    public b(ps.g gVar) {
        this.a = gVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:177:0x0679  */
    /* JADX WARN: Removed duplicated region for block: B:179:0x06b1  */
    /* JADX WARN: Removed duplicated region for block: B:246:0x02ce  */
    /* JADX WARN: Removed duplicated region for block: B:249:0x02e1  */
    /* JADX WARN: Removed duplicated region for block: B:252:0x02ef  */
    /* JADX WARN: Removed duplicated region for block: B:257:0x0306  */
    /* JADX WARN: Removed duplicated region for block: B:270:0x0361  */
    /* JADX WARN: Removed duplicated region for block: B:272:0x0365  */
    /* JADX WARN: Removed duplicated region for block: B:278:0x02e9  */
    /* JADX WARN: Removed duplicated region for block: B:279:0x02db  */
    @Override // okhttp3.Interceptor
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Response intercept(Interceptor.Chain chain) {
        Response cachedResponse;
        Response response;
        e snapshot;
        Headers cachedRequest;
        String str;
        HttpUrl url;
        long j;
        int i5;
        Date date;
        long j5;
        long j7;
        Date date2;
        Date date3;
        String str2;
        String str3;
        String str4;
        io.sentry.internal.debugmeta.c cacheStrategy;
        long j10;
        long j11;
        Date date4;
        long j12;
        String str5;
        long j13;
        long j14;
        long j15;
        String sb2;
        int i6;
        String str6;
        long j16;
        long j17;
        String str7;
        String str8;
        int i10;
        ResponseBody responseBody;
        s9.a aVar;
        a3.f fVar;
        a3.f g6;
        int i11;
        a3.f fVar2;
        ResponseBody responseBody2;
        Intrinsics.checkNotNullParameter(chain, "chain");
        us.f fVar3 = (us.f) chain;
        ts.h call = fVar3.a;
        ps.g gVar = this.a;
        if (gVar == null) {
            response = null;
        } else {
            Request newRequest = fVar3.f19116e;
            Intrinsics.checkNotNullParameter(newRequest, "request");
            try {
                snapshot = gVar.f16542d.i(n.p0(newRequest.a));
            } catch (IOException unused) {
            }
            if (snapshot != null) {
                try {
                    ps.e eVar = new ps.e((Source) snapshot.f17647i.get(0));
                    cachedRequest = eVar.f16532b;
                    str = eVar.f16533c;
                    url = eVar.a;
                    Intrinsics.checkNotNullParameter(snapshot, "snapshot");
                    Headers headers = eVar.f16537g;
                    String a = headers.a("Content-Type");
                    String a10 = headers.a("Content-Length");
                    Request.Builder builder = new Request.Builder();
                    Intrinsics.checkNotNullParameter(url, "url");
                    builder.a = url;
                    builder.f(str, null);
                    builder.e(cachedRequest);
                    Request request = builder.b();
                    t tVar = new t();
                    Intrinsics.checkNotNullParameter(request, "request");
                    tVar.a = request;
                    s protocol = eVar.f16534d;
                    Intrinsics.checkNotNullParameter(protocol, "protocol");
                    tVar.f16586b = protocol;
                    tVar.f16587c = eVar.f16535e;
                    String message = eVar.f16536f;
                    Intrinsics.checkNotNullParameter(message, "message");
                    tVar.f16588d = message;
                    tVar.c(headers);
                    tVar.f16591g = new ps.d(snapshot, a, a10);
                    tVar.f16589e = eVar.f16538h;
                    tVar.k = eVar.f16539i;
                    tVar.f16594l = eVar.j;
                    cachedResponse = tVar.a();
                    Intrinsics.checkNotNullParameter(newRequest, "request");
                    Intrinsics.checkNotNullParameter(cachedResponse, "response");
                } catch (IOException unused2) {
                    qs.b.c(snapshot);
                }
                if (Intrinsics.areEqual(url, newRequest.a) && Intrinsics.areEqual(str, newRequest.f16076b)) {
                    Intrinsics.checkNotNullParameter(cachedResponse, "cachedResponse");
                    Intrinsics.checkNotNullParameter(cachedRequest, "cachedRequest");
                    Intrinsics.checkNotNullParameter(newRequest, "newRequest");
                    Set<String> U0 = n.U0(cachedResponse.f16090x);
                    if (!(U0 instanceof Collection) || !U0.isEmpty()) {
                        for (String name : U0) {
                            List i12 = cachedRequest.i(name);
                            Intrinsics.checkNotNullParameter(name, "name");
                            if (!Intrinsics.areEqual(i12, newRequest.f16077c.i(name))) {
                            }
                        }
                    }
                    response = cachedResponse;
                }
                ResponseBody responseBody3 = cachedResponse.f16091y;
                if (responseBody3 != null) {
                    qs.b.c(responseBody3);
                }
            }
            cachedResponse = null;
            response = cachedResponse;
        }
        long currentTimeMillis = System.currentTimeMillis();
        Request request2 = fVar3.f19116e;
        Intrinsics.checkNotNullParameter(request2, "request");
        if (response != null) {
            j5 = response.H;
            j7 = response.I;
            Headers headers2 = response.f16090x;
            int size = headers2.size();
            int i13 = 0;
            date = null;
            date2 = null;
            date3 = null;
            str2 = null;
            str3 = null;
            str4 = null;
            int i14 = -1;
            while (i13 < size) {
                int i15 = i13 + 1;
                String b10 = headers2.b(i13);
                String h6 = headers2.h(i13);
                long j18 = currentTimeMillis;
                if (x.i(b10, "Date", true)) {
                    date3 = us.c.a(h6);
                    str4 = h6;
                } else if (x.i(b10, "Expires", true)) {
                    date = us.c.a(h6);
                } else if (x.i(b10, "Last-Modified", true)) {
                    date2 = us.c.a(h6);
                    str3 = h6;
                } else if (x.i(b10, "ETag", true)) {
                    str2 = h6;
                } else if (x.i(b10, "Age", true)) {
                    i14 = qs.b.x(-1, h6);
                }
                i13 = i15;
                currentTimeMillis = j18;
            }
            j = currentTimeMillis;
            i5 = i14;
        } else {
            j = currentTimeMillis;
            i5 = -1;
            date = null;
            j5 = 0;
            j7 = 0;
            date2 = null;
            date3 = null;
            str2 = null;
            str3 = null;
            str4 = null;
        }
        int i16 = 20;
        if (response == null) {
            cacheStrategy = new io.sentry.internal.debugmeta.c((Object) request2, (Object) null, i16, false);
        } else {
            boolean z5 = false;
            Object obj = null;
            if (request2.a.f16039i && response.f16089w == null) {
                cacheStrategy = new io.sentry.internal.debugmeta.c(request2, obj, 20, z5);
            } else {
                int i17 = 20;
                if (android.support.v4.media.session.b.q(response, request2)) {
                    CacheControl cacheControl = request2.f16080f;
                    if (cacheControl == null) {
                        int i18 = CacheControl.f16004n;
                        cacheControl = k0.N(request2.f16077c);
                        request2.f16080f = cacheControl;
                    }
                    if (!cacheControl.a && request2.a("If-Modified-Since") == null && request2.a("If-None-Match") == null) {
                        CacheControl c6 = response.c();
                        if (date3 != null) {
                            j10 = j5;
                            j11 = j7;
                            date4 = date;
                            j12 = Math.max(0L, j7 - date3.getTime());
                        } else {
                            j10 = j5;
                            j11 = j7;
                            date4 = date;
                            j12 = 0;
                        }
                        if (i5 != -1) {
                            str5 = "If-None-Match";
                            j12 = Math.max(j12, TimeUnit.SECONDS.toMillis(i5));
                        } else {
                            str5 = "If-None-Match";
                        }
                        long j19 = j12 + (j11 - j10) + (j - j11);
                        Intrinsics.checkNotNull(response);
                        int i19 = response.c().f16006c;
                        if (i19 != -1) {
                            j13 = j19;
                            j15 = TimeUnit.SECONDS.toMillis(i19);
                        } else {
                            j13 = j19;
                            if (date4 != null) {
                                Long valueOf = date3 == null ? null : Long.valueOf(date3.getTime());
                                if (valueOf != null) {
                                    j11 = valueOf.longValue();
                                }
                                j15 = date4.getTime() - j11;
                                if (j15 <= 0) {
                                    j15 = 0;
                                }
                            } else {
                                if (date2 != null) {
                                    List list = response.f16085d.a.f16036f;
                                    if (list == null) {
                                        sb2 = null;
                                    } else {
                                        StringBuilder sb3 = new StringBuilder();
                                        o.g(sb3, list);
                                        sb2 = sb3.toString();
                                    }
                                    if (sb2 == null) {
                                        Long valueOf2 = date3 == null ? null : Long.valueOf(date3.getTime());
                                        long longValue = valueOf2 == null ? j10 : valueOf2.longValue();
                                        Intrinsics.checkNotNull(date2);
                                        long time = longValue - date2.getTime();
                                        j14 = 0;
                                        if (time > 0) {
                                            j15 = time / 10;
                                            i6 = cacheControl.f16006c;
                                            if (i6 == -1) {
                                                str6 = str5;
                                                j15 = Math.min(j15, TimeUnit.SECONDS.toMillis(i6));
                                            } else {
                                                str6 = str5;
                                            }
                                            int i20 = cacheControl.f16012i;
                                            long millis = i20 == -1 ? TimeUnit.SECONDS.toMillis(i20) : j14;
                                            if (!c6.f16010g || (i10 = cacheControl.f16011h) == -1) {
                                                j16 = j15;
                                                j17 = j14;
                                            } else {
                                                j16 = j15;
                                                j17 = TimeUnit.SECONDS.toMillis(i10);
                                            }
                                            if (!c6.a) {
                                                long j20 = j13 + millis;
                                                if (j20 < j16 + j17) {
                                                    t i21 = response.i();
                                                    if (j20 >= j16) {
                                                        Intrinsics.checkNotNullParameter("Warning", StackTraceHelper.NAME_KEY);
                                                        Intrinsics.checkNotNullParameter("110 HttpURLConnection \"Response is stale\"", "value");
                                                        i21.f16590f.a("Warning", "110 HttpURLConnection \"Response is stale\"");
                                                    }
                                                    if (j13 > 86400000) {
                                                        Intrinsics.checkNotNull(response);
                                                        if (response.c().f16006c == -1 && date4 == null) {
                                                            Intrinsics.checkNotNullParameter("Warning", StackTraceHelper.NAME_KEY);
                                                            Intrinsics.checkNotNullParameter("113 HttpURLConnection \"Heuristic expiration\"", "value");
                                                            i21.f16590f.a("Warning", "113 HttpURLConnection \"Heuristic expiration\"");
                                                        }
                                                    }
                                                    cacheStrategy = new io.sentry.internal.debugmeta.c((Object) null, (Object) i21.a(), 20, false);
                                                }
                                            }
                                            if (str2 == null) {
                                                str7 = str6;
                                                str8 = str2;
                                            } else if (date2 != null) {
                                                str7 = "If-Modified-Since";
                                                str8 = str3;
                                            } else if (date3 != null) {
                                                str7 = "If-Modified-Since";
                                                str8 = str4;
                                            } else {
                                                cacheStrategy = new io.sentry.internal.debugmeta.c((Object) request2, (Object) null, 20, false);
                                            }
                                            e6 d6 = request2.f16077c.d();
                                            Intrinsics.checkNotNull(str8);
                                            d6.c(str7, str8);
                                            Request.Builder b11 = request2.b();
                                            b11.e(d6.d());
                                            cacheStrategy = new io.sentry.internal.debugmeta.c((Object) b11.b(), (Object) response, 20, false);
                                        }
                                        j15 = j14;
                                        i6 = cacheControl.f16006c;
                                        if (i6 == -1) {
                                        }
                                        int i202 = cacheControl.f16012i;
                                        if (i202 == -1) {
                                        }
                                        if (c6.f16010g) {
                                        }
                                        j16 = j15;
                                        j17 = j14;
                                        if (!c6.a) {
                                        }
                                        if (str2 == null) {
                                        }
                                        e6 d62 = request2.f16077c.d();
                                        Intrinsics.checkNotNull(str8);
                                        d62.c(str7, str8);
                                        Request.Builder b112 = request2.b();
                                        b112.e(d62.d());
                                        cacheStrategy = new io.sentry.internal.debugmeta.c((Object) b112.b(), (Object) response, 20, false);
                                    }
                                }
                                j14 = 0;
                                j15 = j14;
                                i6 = cacheControl.f16006c;
                                if (i6 == -1) {
                                }
                                int i2022 = cacheControl.f16012i;
                                if (i2022 == -1) {
                                }
                                if (c6.f16010g) {
                                }
                                j16 = j15;
                                j17 = j14;
                                if (!c6.a) {
                                }
                                if (str2 == null) {
                                }
                                e6 d622 = request2.f16077c.d();
                                Intrinsics.checkNotNull(str8);
                                d622.c(str7, str8);
                                Request.Builder b1122 = request2.b();
                                b1122.e(d622.d());
                                cacheStrategy = new io.sentry.internal.debugmeta.c((Object) b1122.b(), (Object) response, 20, false);
                            }
                        }
                        j14 = 0;
                        i6 = cacheControl.f16006c;
                        if (i6 == -1) {
                        }
                        int i20222 = cacheControl.f16012i;
                        if (i20222 == -1) {
                        }
                        if (c6.f16010g) {
                        }
                        j16 = j15;
                        j17 = j14;
                        if (!c6.a) {
                        }
                        if (str2 == null) {
                        }
                        e6 d6222 = request2.f16077c.d();
                        Intrinsics.checkNotNull(str8);
                        d6222.c(str7, str8);
                        Request.Builder b11222 = request2.b();
                        b11222.e(d6222.d());
                        cacheStrategy = new io.sentry.internal.debugmeta.c((Object) b11222.b(), (Object) response, 20, false);
                    } else {
                        cacheStrategy = new io.sentry.internal.debugmeta.c((Object) request2, (Object) null, 20, false);
                    }
                } else {
                    cacheStrategy = new io.sentry.internal.debugmeta.c(request2, obj, i17, z5);
                }
            }
        }
        if (((Request) cacheStrategy.f11622e) != null) {
            CacheControl cacheControl2 = request2.f16080f;
            if (cacheControl2 == null) {
                int i22 = CacheControl.f16004n;
                cacheControl2 = k0.N(request2.f16077c);
                request2.f16080f = cacheControl2;
            }
            if (cacheControl2.j) {
                Object obj2 = null;
                cacheStrategy = new io.sentry.internal.debugmeta.c(obj2, obj2, 20, false);
            }
        }
        Request request3 = (Request) cacheStrategy.f11622e;
        Response cached = (Response) cacheStrategy.f11623i;
        ps.g gVar2 = this.a;
        if (gVar2 != null) {
            synchronized (gVar2) {
                Intrinsics.checkNotNullParameter(cacheStrategy, "cacheStrategy");
            }
        }
        if (response != null && cached == null && (responseBody2 = response.f16091y) != null) {
            qs.b.c(responseBody2);
        }
        if (request3 == null && cached == null) {
            ArrayList arrayList = new ArrayList(20);
            Request request4 = fVar3.f19116e;
            Intrinsics.checkNotNullParameter(request4, "request");
            s protocol2 = s.HTTP_1_1;
            Intrinsics.checkNotNullParameter(protocol2, "protocol");
            Intrinsics.checkNotNullParameter("Unsatisfiable Request (only-if-cached)", "message");
            okhttp3.e eVar2 = qs.b.f17052c;
            long currentTimeMillis2 = System.currentTimeMillis();
            if (request4 == null) {
                throw new IllegalStateException("request == null");
            }
            Object[] array = arrayList.toArray(new String[0]);
            if (array == null) {
                throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
            }
            Response response2 = new Response(request4, protocol2, "Unsatisfiable Request (only-if-cached)", 504, null, new Headers((String[]) array), eVar2, null, null, null, -1L, currentTimeMillis2, null);
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(response2, "response");
            return response2;
        }
        if (request3 == null) {
            Intrinsics.checkNotNull(cached);
            t i23 = cached.i();
            Response i24 = wi.d.i(cached);
            t.b("cacheResponse", i24);
            i23.f16593i = i24;
            Response response3 = i23.a();
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(response3, "response");
            return response3;
        }
        if (cached != null) {
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(cached, "cachedResponse");
        } else if (this.a != null) {
            Intrinsics.checkNotNullParameter(call, "call");
        }
        try {
            Response a11 = ((us.f) chain).a(request3);
            if (cached != null) {
                if (a11.f16088v == 304) {
                    t i25 = cached.i();
                    Headers headers3 = cached.f16090x;
                    Headers headers4 = a11.f16090x;
                    e6 e6Var = new e6();
                    int size2 = headers3.size();
                    while (i11 < size2) {
                        int i26 = i11 + 1;
                        String b12 = headers3.b(i11);
                        String h7 = headers3.h(i11);
                        i11 = ("Warning".equalsIgnoreCase(b12) && x.o(h7, "1", false)) ? i26 : 0;
                        if ("Content-Length".equalsIgnoreCase(b12) || "Content-Encoding".equalsIgnoreCase(b12) || "Content-Type".equalsIgnoreCase(b12) || !wi.d.j(b12) || headers4.a(b12) == null) {
                            e6Var.c(b12, h7);
                        }
                    }
                    int i27 = 0;
                    int size3 = headers4.size();
                    while (i27 < size3) {
                        int i28 = i27 + 1;
                        String b13 = headers4.b(i27);
                        if (!"Content-Length".equalsIgnoreCase(b13) && !"Content-Encoding".equalsIgnoreCase(b13) && !"Content-Type".equalsIgnoreCase(b13) && wi.d.j(b13)) {
                            e6Var.c(b13, headers4.h(i27));
                        }
                        i27 = i28;
                    }
                    i25.c(e6Var.d());
                    i25.k = a11.H;
                    i25.f16594l = a11.I;
                    Response i29 = wi.d.i(cached);
                    t.b("cacheResponse", i29);
                    i25.f16593i = i29;
                    Response i30 = wi.d.i(a11);
                    t.b("networkResponse", i30);
                    i25.f16592h = i30;
                    Response response4 = i25.a();
                    ResponseBody responseBody4 = a11.f16091y;
                    Intrinsics.checkNotNull(responseBody4);
                    responseBody4.close();
                    ps.g gVar3 = this.a;
                    Intrinsics.checkNotNull(gVar3);
                    synchronized (gVar3) {
                    }
                    this.a.getClass();
                    Intrinsics.checkNotNullParameter(cached, "cached");
                    Intrinsics.checkNotNullParameter(response4, "network");
                    ps.e eVar3 = new ps.e(response4);
                    ResponseBody responseBody5 = cached.f16091y;
                    if (responseBody5 == null) {
                        throw new NullPointerException("null cannot be cast to non-null type okhttp3.Cache.CacheResponseBody");
                    }
                    e eVar4 = ((ps.d) responseBody5).f16527d;
                    try {
                        fVar2 = eVar4.f17648v.g(eVar4.f17646e, eVar4.f17645d);
                        if (fVar2 != null) {
                            try {
                                eVar3.c(fVar2);
                                fVar2.d();
                            } catch (IOException unused3) {
                                if (fVar2 != null) {
                                    try {
                                        fVar2.a();
                                    } catch (IOException unused4) {
                                    }
                                }
                                Intrinsics.checkNotNullParameter(call, "call");
                                Intrinsics.checkNotNullParameter(response4, "response");
                                return response4;
                            }
                        }
                    } catch (IOException unused5) {
                        fVar2 = null;
                    }
                    Intrinsics.checkNotNullParameter(call, "call");
                    Intrinsics.checkNotNullParameter(response4, "response");
                    return response4;
                }
                ResponseBody responseBody6 = cached.f16091y;
                if (responseBody6 != null) {
                    qs.b.c(responseBody6);
                }
            }
            Intrinsics.checkNotNull(a11);
            t i31 = a11.i();
            Response i32 = wi.d.i(cached);
            t.b("cacheResponse", i32);
            i31.f16593i = i32;
            Response i33 = wi.d.i(a11);
            t.b("networkResponse", i33);
            i31.f16592h = i33;
            Response response5 = i31.a();
            if (this.a != null) {
                if (us.e.a(response5) && android.support.v4.media.session.b.q(response5, request3)) {
                    ps.g gVar4 = this.a;
                    gVar4.getClass();
                    Intrinsics.checkNotNullParameter(response5, "response");
                    Request request5 = response5.f16085d;
                    String method = request5.f16076b;
                    Intrinsics.checkNotNullParameter(method, "method");
                    if (!Intrinsics.areEqual(method, "POST") && !Intrinsics.areEqual(method, "PATCH") && !Intrinsics.areEqual(method, "PUT") && !Intrinsics.areEqual(method, "DELETE") && !Intrinsics.areEqual(method, "MOVE")) {
                        if (Intrinsics.areEqual(method, "GET")) {
                            Intrinsics.checkNotNullParameter(response5, "<this>");
                            if (!n.U0(response5.f16090x).contains("*")) {
                                ps.e eVar5 = new ps.e(response5);
                                try {
                                    g gVar5 = gVar4.f16542d;
                                    String p02 = n.p0(request5.a);
                                    Regex regex = g.P;
                                    g6 = gVar5.g(-1L, p02);
                                } catch (IOException unused6) {
                                    fVar = null;
                                }
                                if (g6 != null) {
                                    try {
                                        eVar5.c(g6);
                                        aVar = new s9.a(gVar4, g6);
                                    } catch (IOException unused7) {
                                        fVar = g6;
                                        if (fVar != null) {
                                            fVar.a();
                                        }
                                        aVar = null;
                                        if (aVar != null) {
                                        }
                                        if (cached != null) {
                                        }
                                        return response5;
                                    }
                                    if (aVar != null) {
                                        ps.f fVar4 = (ps.f) aVar.f17829d;
                                        ResponseBody responseBody7 = response5.f16091y;
                                        Intrinsics.checkNotNull(responseBody7);
                                        a aVar2 = new a(responseBody7.source(), aVar, y.c(fVar4));
                                        String f2 = response5.f("Content-Type", null);
                                        long contentLength = response5.f16091y.contentLength();
                                        t i34 = response5.i();
                                        i34.f16591g = new us.g(f2, contentLength, y.d(aVar2));
                                        response5 = i34.a();
                                    }
                                    if (cached != null) {
                                        Intrinsics.checkNotNullParameter(call, "call");
                                    }
                                    return response5;
                                }
                            }
                        }
                        aVar = null;
                        if (aVar != null) {
                        }
                        if (cached != null) {
                        }
                        return response5;
                    }
                    gVar4.c(request5);
                    aVar = null;
                    if (aVar != null) {
                    }
                    if (cached != null) {
                    }
                    return response5;
                }
                String method2 = request3.f16076b;
                Intrinsics.checkNotNullParameter(method2, "method");
                if (Intrinsics.areEqual(method2, "POST") || Intrinsics.areEqual(method2, "PATCH") || Intrinsics.areEqual(method2, "PUT") || Intrinsics.areEqual(method2, "DELETE") || Intrinsics.areEqual(method2, "MOVE")) {
                    try {
                        this.a.c(request3);
                    } catch (IOException unused8) {
                    }
                }
            }
            return response5;
        } catch (Throwable th2) {
            if (response != null && (responseBody = response.f16091y) != null) {
                qs.b.c(responseBody);
            }
            throw th2;
        }
    }
}
