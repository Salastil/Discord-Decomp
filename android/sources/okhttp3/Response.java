package okhttp3;

import a5.k0;
import hc.k;
import java.io.Closeable;
import kotlin.jvm.internal.Intrinsics;
import ps.q;
import ps.s;
import ps.t;

/* loaded from: classes3.dex */
public final class Response implements Closeable {
    public final Response E;
    public final Response F;
    public final Response G;
    public final long H;
    public final long I;
    public final k J;
    public CacheControl K;

    /* renamed from: d, reason: collision with root package name */
    public final Request f16085d;

    /* renamed from: e, reason: collision with root package name */
    public final s f16086e;

    /* renamed from: i, reason: collision with root package name */
    public final String f16087i;

    /* renamed from: v, reason: collision with root package name */
    public final int f16088v;

    /* renamed from: w, reason: collision with root package name */
    public final q f16089w;

    /* renamed from: x, reason: collision with root package name */
    public final Headers f16090x;

    /* renamed from: y, reason: collision with root package name */
    public final ResponseBody f16091y;

    public Response(Request request, s protocol, String message, int i5, q qVar, Headers headers, ResponseBody responseBody, Response response, Response response2, Response response3, long j, long j5, k kVar) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(headers, "headers");
        this.f16085d = request;
        this.f16086e = protocol;
        this.f16087i = message;
        this.f16088v = i5;
        this.f16089w = qVar;
        this.f16090x = headers;
        this.f16091y = responseBody;
        this.E = response;
        this.F = response2;
        this.G = response3;
        this.H = j;
        this.I = j5;
        this.J = kVar;
    }

    public final CacheControl c() {
        CacheControl cacheControl = this.K;
        if (cacheControl != null) {
            return cacheControl;
        }
        int i5 = CacheControl.f16004n;
        CacheControl N = k0.N(this.f16090x);
        this.K = N;
        return N;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        ResponseBody responseBody = this.f16091y;
        if (responseBody == null) {
            throw new IllegalStateException("response is not eligible for a body and must not be closed");
        }
        responseBody.close();
    }

    public final String f(String name, String str) {
        Intrinsics.checkNotNullParameter(name, "name");
        String a = this.f16090x.a(name);
        return a == null ? str : a;
    }

    public final boolean g() {
        int i5 = this.f16088v;
        return 200 <= i5 && i5 < 300;
    }

    public final t i() {
        Intrinsics.checkNotNullParameter(this, "response");
        t tVar = new t();
        tVar.a = this.f16085d;
        tVar.f16586b = this.f16086e;
        tVar.f16587c = this.f16088v;
        tVar.f16588d = this.f16087i;
        tVar.f16589e = this.f16089w;
        tVar.f16590f = this.f16090x.d();
        tVar.f16591g = this.f16091y;
        tVar.f16592h = this.E;
        tVar.f16593i = this.F;
        tVar.j = this.G;
        tVar.k = this.H;
        tVar.f16594l = this.I;
        tVar.f16595m = this.J;
        return tVar;
    }

    public final String toString() {
        return "Response{protocol=" + this.f16086e + ", code=" + this.f16088v + ", message=" + this.f16087i + ", url=" + this.f16085d.a + '}';
    }
}
