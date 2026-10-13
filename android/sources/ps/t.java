package ps;

import io.sentry.e6;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Headers;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

/* loaded from: classes3.dex */
public final class t {
    public Request a;

    /* renamed from: b, reason: collision with root package name */
    public s f16586b;

    /* renamed from: d, reason: collision with root package name */
    public String f16588d;

    /* renamed from: e, reason: collision with root package name */
    public q f16589e;

    /* renamed from: g, reason: collision with root package name */
    public ResponseBody f16591g;

    /* renamed from: h, reason: collision with root package name */
    public Response f16592h;

    /* renamed from: i, reason: collision with root package name */
    public Response f16593i;
    public Response j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public long f16594l;

    /* renamed from: m, reason: collision with root package name */
    public hc.k f16595m;

    /* renamed from: c, reason: collision with root package name */
    public int f16587c = -1;

    /* renamed from: f, reason: collision with root package name */
    public e6 f16590f = new e6();

    public static void b(String str, Response response) {
        if (response == null) {
            return;
        }
        if (response.f16091y != null) {
            throw new IllegalArgumentException(Intrinsics.stringPlus(str, ".body != null").toString());
        }
        if (response.E != null) {
            throw new IllegalArgumentException(Intrinsics.stringPlus(str, ".networkResponse != null").toString());
        }
        if (response.F != null) {
            throw new IllegalArgumentException(Intrinsics.stringPlus(str, ".cacheResponse != null").toString());
        }
        if (response.G != null) {
            throw new IllegalArgumentException(Intrinsics.stringPlus(str, ".priorResponse != null").toString());
        }
    }

    public final Response a() {
        int i5 = this.f16587c;
        if (i5 < 0) {
            throw new IllegalStateException(Intrinsics.stringPlus("code < 0: ", Integer.valueOf(i5)).toString());
        }
        Request request = this.a;
        if (request == null) {
            throw new IllegalStateException("request == null");
        }
        s sVar = this.f16586b;
        if (sVar == null) {
            throw new IllegalStateException("protocol == null");
        }
        String str = this.f16588d;
        if (str != null) {
            return new Response(request, sVar, str, i5, this.f16589e, this.f16590f.d(), this.f16591g, this.f16592h, this.f16593i, this.j, this.k, this.f16594l, this.f16595m);
        }
        throw new IllegalStateException("message == null");
    }

    public final void c(Headers headers) {
        Intrinsics.checkNotNullParameter(headers, "headers");
        e6 d6 = headers.d();
        Intrinsics.checkNotNullParameter(d6, "<set-?>");
        this.f16590f = d6;
    }
}
