package okhttp3;

import io.sentry.e6;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import lh.y;
import s4.h;
import tn.g;

/* loaded from: classes3.dex */
public final class Request {
    public final HttpUrl a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16076b;

    /* renamed from: c, reason: collision with root package name */
    public final Headers f16077c;

    /* renamed from: d, reason: collision with root package name */
    public final RequestBody f16078d;

    /* renamed from: e, reason: collision with root package name */
    public final Map f16079e;

    /* renamed from: f, reason: collision with root package name */
    public CacheControl f16080f;

    public static class Builder {
        public HttpUrl a;

        /* renamed from: d, reason: collision with root package name */
        public RequestBody f16083d;

        /* renamed from: e, reason: collision with root package name */
        public LinkedHashMap f16084e = new LinkedHashMap();

        /* renamed from: b, reason: collision with root package name */
        public String f16081b = "GET";

        /* renamed from: c, reason: collision with root package name */
        public e6 f16082c = new e6();

        public final void a(String name, String value) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            this.f16082c.a(name, value);
        }

        public final Request b() {
            Map unmodifiableMap;
            HttpUrl httpUrl = this.a;
            if (httpUrl == null) {
                throw new IllegalStateException("url == null");
            }
            String str = this.f16081b;
            Headers d6 = this.f16082c.d();
            RequestBody requestBody = this.f16083d;
            LinkedHashMap linkedHashMap = this.f16084e;
            byte[] bArr = qs.b.a;
            Intrinsics.checkNotNullParameter(linkedHashMap, "<this>");
            if (linkedHashMap.isEmpty()) {
                unmodifiableMap = v0.d();
            } else {
                unmodifiableMap = Collections.unmodifiableMap(new LinkedHashMap(linkedHashMap));
                Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "{\n    Collections.unmodi…(LinkedHashMap(this))\n  }");
            }
            return new Request(httpUrl, str, d6, requestBody, unmodifiableMap);
        }

        public final void c(CacheControl cacheControl) {
            Intrinsics.checkNotNullParameter(cacheControl, "cacheControl");
            String cacheControl2 = cacheControl.toString();
            if (cacheControl2.length() == 0) {
                g("Cache-Control");
            } else {
                d("Cache-Control", cacheControl2);
            }
        }

        public final void d(String name, String value) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            e6 e6Var = this.f16082c;
            e6Var.getClass();
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            d9.a.f(name);
            d9.a.g(value, name);
            e6Var.f(name);
            e6Var.c(name, value);
        }

        public final void e(Headers headers) {
            Intrinsics.checkNotNullParameter(headers, "headers");
            e6 d6 = headers.d();
            Intrinsics.checkNotNullParameter(d6, "<set-?>");
            this.f16082c = d6;
        }

        public final void f(String method, RequestBody requestBody) {
            Intrinsics.checkNotNullParameter(method, "method");
            if (method.length() <= 0) {
                throw new IllegalArgumentException("method.isEmpty() == true");
            }
            if (requestBody == null) {
                Intrinsics.checkNotNullParameter(method, "method");
                if (Intrinsics.areEqual(method, "POST") || Intrinsics.areEqual(method, "PUT") || Intrinsics.areEqual(method, "PATCH") || Intrinsics.areEqual(method, "PROPPATCH") || Intrinsics.areEqual(method, "REPORT")) {
                    throw new IllegalArgumentException(h.f("method ", method, " must have a request body.").toString());
                }
            } else if (!g.t(method)) {
                throw new IllegalArgumentException(h.f("method ", method, " must not have a request body.").toString());
            }
            Intrinsics.checkNotNullParameter(method, "<set-?>");
            this.f16081b = method;
            this.f16083d = requestBody;
        }

        public final void g(String name) {
            Intrinsics.checkNotNullParameter(name, "name");
            this.f16082c.f(name);
        }

        public final void h(Integer num) {
            Intrinsics.checkNotNullParameter(Object.class, "type");
            if (this.f16084e.isEmpty()) {
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                Intrinsics.checkNotNullParameter(linkedHashMap, "<set-?>");
                this.f16084e = linkedHashMap;
            }
            LinkedHashMap linkedHashMap2 = this.f16084e;
            Object cast = Object.class.cast(num);
            Intrinsics.checkNotNull(cast);
            linkedHashMap2.put(Object.class, cast);
        }

        public final void i(String url) {
            Intrinsics.checkNotNullParameter(url, "url");
            if (x.o(url, "ws:", true)) {
                String substring = url.substring(3);
                Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
                url = Intrinsics.stringPlus("http:", substring);
            } else if (x.o(url, "wss:", true)) {
                String substring2 = url.substring(4);
                Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String).substring(startIndex)");
                url = Intrinsics.stringPlus("https:", substring2);
            }
            Intrinsics.checkNotNullParameter(url, "<this>");
            y yVar = new y(1);
            yVar.g(null, url);
            HttpUrl url2 = yVar.b();
            Intrinsics.checkNotNullParameter(url2, "url");
            this.a = url2;
        }
    }

    public Request(HttpUrl url, String method, Headers headers, RequestBody requestBody, Map tags) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(headers, "headers");
        Intrinsics.checkNotNullParameter(tags, "tags");
        this.a = url;
        this.f16076b = method;
        this.f16077c = headers;
        this.f16078d = requestBody;
        this.f16079e = tags;
    }

    public final String a(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.f16077c.a(name);
    }

    public final Builder b() {
        Intrinsics.checkNotNullParameter(this, "request");
        Builder builder = new Builder();
        builder.f16084e = new LinkedHashMap();
        builder.a = this.a;
        builder.f16081b = this.f16076b;
        builder.f16083d = this.f16078d;
        Map map = this.f16079e;
        builder.f16084e = map.isEmpty() ? new LinkedHashMap() : v0.o(map);
        builder.f16082c = this.f16077c.d();
        return builder;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Request{method=");
        sb2.append(this.f16076b);
        sb2.append(", url=");
        sb2.append(this.a);
        Headers headers = this.f16077c;
        if (headers.size() != 0) {
            sb2.append(", headers=[");
            int i5 = 0;
            for (Object obj : headers) {
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                Pair pair = (Pair) obj;
                String str = (String) pair.f13474d;
                String str2 = (String) pair.f13475e;
                if (i5 > 0) {
                    sb2.append(", ");
                }
                sb2.append(str);
                sb2.append(':');
                sb2.append(str2);
                i5 = i6;
            }
            sb2.append(']');
        }
        Map map = this.f16079e;
        if (!map.isEmpty()) {
            sb2.append(", tags=");
            sb2.append(map);
        }
        sb2.append('}');
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        return sb3;
    }
}
