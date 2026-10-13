package ps;

import et.y;
import io.sentry.e6;
import java.io.IOException;
import java.security.cert.Certificate;
import java.security.cert.CertificateEncodingException;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.Request;
import okhttp3.Response;
import okio.Buffer;
import okio.ByteString;
import okio.Source;

/* loaded from: classes3.dex */
public final class e {
    public static final String k;

    /* renamed from: l, reason: collision with root package name */
    public static final String f16531l;
    public final HttpUrl a;

    /* renamed from: b, reason: collision with root package name */
    public final Headers f16532b;

    /* renamed from: c, reason: collision with root package name */
    public final String f16533c;

    /* renamed from: d, reason: collision with root package name */
    public final s f16534d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16535e;

    /* renamed from: f, reason: collision with root package name */
    public final String f16536f;

    /* renamed from: g, reason: collision with root package name */
    public final Headers f16537g;

    /* renamed from: h, reason: collision with root package name */
    public final q f16538h;

    /* renamed from: i, reason: collision with root package name */
    public final long f16539i;
    public final long j;

    static {
        ys.n nVar = ys.n.a;
        ys.n.a.getClass();
        k = Intrinsics.stringPlus("OkHttp", "-Sent-Millis");
        ys.n.a.getClass();
        f16531l = Intrinsics.stringPlus("OkHttp", "-Received-Millis");
    }

    public e(Source rawSource) {
        HttpUrl httpUrl;
        Intrinsics.checkNotNullParameter(rawSource, "rawSource");
        try {
            et.r d6 = y.d(rawSource);
            String y5 = d6.y(LongCompanionObject.MAX_VALUE);
            Intrinsics.checkNotNullParameter(y5, "<this>");
            try {
                Intrinsics.checkNotNullParameter(y5, "<this>");
                lh.y yVar = new lh.y(1);
                yVar.g(null, y5);
                httpUrl = yVar.b();
            } catch (IllegalArgumentException unused) {
                httpUrl = null;
            }
            if (httpUrl == null) {
                IOException iOException = new IOException(Intrinsics.stringPlus("Cache corruption for ", y5));
                ys.n nVar = ys.n.a;
                ys.n.a.getClass();
                ys.n.i(5, "cache corruption", iOException);
                throw iOException;
            }
            this.a = httpUrl;
            this.f16533c = d6.y(LongCompanionObject.MAX_VALUE);
            e6 e6Var = new e6();
            int G0 = m3.n.G0(d6);
            int i5 = 0;
            while (i5 < G0) {
                i5++;
                e6Var.b(d6.y(LongCompanionObject.MAX_VALUE));
            }
            this.f16532b = e6Var.d();
            a1.d u5 = w3.q.u(d6.y(LongCompanionObject.MAX_VALUE));
            this.f16534d = (s) u5.f15i;
            this.f16535e = u5.f14e;
            this.f16536f = (String) u5.f16v;
            e6 e6Var2 = new e6();
            int G02 = m3.n.G0(d6);
            int i6 = 0;
            while (i6 < G02) {
                i6++;
                e6Var2.b(d6.y(LongCompanionObject.MAX_VALUE));
            }
            String str = k;
            String e9 = e6Var2.e(str);
            String str2 = f16531l;
            String e10 = e6Var2.e(str2);
            e6Var2.f(str);
            e6Var2.f(str2);
            long j = 0;
            this.f16539i = e9 == null ? 0L : Long.parseLong(e9);
            if (e10 != null) {
                j = Long.parseLong(e10);
            }
            this.j = j;
            this.f16537g = e6Var2.d();
            if (Intrinsics.areEqual(this.a.a, "https")) {
                String y6 = d6.y(LongCompanionObject.MAX_VALUE);
                if (y6.length() > 0) {
                    throw new IOException("expected \"\" but was \"" + y6 + '\"');
                }
                l cipherSuite = l.f16549b.c(d6.y(LongCompanionObject.MAX_VALUE));
                List peerCertificates = a(d6);
                List localCertificates = a(d6);
                w tlsVersion = !d6.c() ? jb.a.j(d6.y(LongCompanionObject.MAX_VALUE)) : w.SSL_3_0;
                Intrinsics.checkNotNullParameter(tlsVersion, "tlsVersion");
                Intrinsics.checkNotNullParameter(cipherSuite, "cipherSuite");
                Intrinsics.checkNotNullParameter(peerCertificates, "peerCertificates");
                Intrinsics.checkNotNullParameter(localCertificates, "localCertificates");
                this.f16538h = new q(tlsVersion, cipherSuite, qs.b.w(localCertificates), new p(qs.b.w(peerCertificates), 0));
            } else {
                this.f16538h = null;
            }
            Unit unit = Unit.a;
            rawSource.close();
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                com.facebook.imagepipeline.nativecode.c.j(rawSource, th2);
                throw th3;
            }
        }
    }

    public static List a(et.r rVar) {
        int G0 = m3.n.G0(rVar);
        if (G0 == -1) {
            return m0.f13512d;
        }
        try {
            CertificateFactory certificateFactory = CertificateFactory.getInstance("X.509");
            ArrayList arrayList = new ArrayList(G0);
            int i5 = 0;
            while (i5 < G0) {
                i5++;
                String y5 = rVar.y(LongCompanionObject.MAX_VALUE);
                Buffer buffer = new Buffer();
                ByteString byteString = ByteString.f16115v;
                ByteString B = io.sentry.hints.j.B(y5);
                Intrinsics.checkNotNull(B);
                buffer.R(B);
                arrayList.add(certificateFactory.generateCertificate(new et.f(buffer, 0)));
            }
            return arrayList;
        } catch (CertificateException e9) {
            throw new IOException(e9.getMessage());
        }
    }

    public static void b(et.q qVar, List list) {
        try {
            qVar.f0(list.size());
            qVar.writeByte(10);
            Iterator it = list.iterator();
            while (it.hasNext()) {
                byte[] bytes = ((Certificate) it.next()).getEncoded();
                ByteString byteString = ByteString.f16115v;
                Intrinsics.checkNotNullExpressionValue(bytes, "bytes");
                qVar.B(io.sentry.hints.j.F(bytes).a());
                qVar.writeByte(10);
            }
        } catch (CertificateEncodingException e9) {
            throw new IOException(e9.getMessage());
        }
    }

    public final void c(a3.f editor) {
        HttpUrl httpUrl = this.a;
        q qVar = this.f16538h;
        Headers headers = this.f16537g;
        Headers headers2 = this.f16532b;
        Intrinsics.checkNotNullParameter(editor, "editor");
        et.q c6 = y.c(editor.p(0));
        try {
            c6.B(httpUrl.f16038h);
            c6.writeByte(10);
            c6.B(this.f16533c);
            c6.writeByte(10);
            c6.f0(headers2.size());
            c6.writeByte(10);
            int size = headers2.size();
            int i5 = 0;
            while (i5 < size) {
                int i6 = i5 + 1;
                c6.B(headers2.b(i5));
                c6.B(": ");
                c6.B(headers2.h(i5));
                c6.writeByte(10);
                i5 = i6;
            }
            s protocol = this.f16534d;
            int i10 = this.f16535e;
            String message = this.f16536f;
            Intrinsics.checkNotNullParameter(protocol, "protocol");
            Intrinsics.checkNotNullParameter(message, "message");
            StringBuilder sb2 = new StringBuilder();
            if (protocol == s.HTTP_1_0) {
                sb2.append("HTTP/1.0");
            } else {
                sb2.append("HTTP/1.1");
            }
            sb2.append(' ');
            sb2.append(i10);
            sb2.append(' ');
            sb2.append(message);
            String sb3 = sb2.toString();
            Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
            c6.B(sb3);
            c6.writeByte(10);
            c6.f0(headers.size() + 2);
            c6.writeByte(10);
            int size2 = headers.size();
            for (int i11 = 0; i11 < size2; i11++) {
                c6.B(headers.b(i11));
                c6.B(": ");
                c6.B(headers.h(i11));
                c6.writeByte(10);
            }
            c6.B(k);
            c6.B(": ");
            c6.f0(this.f16539i);
            c6.writeByte(10);
            c6.B(f16531l);
            c6.B(": ");
            c6.f0(this.j);
            c6.writeByte(10);
            if (Intrinsics.areEqual(httpUrl.a, "https")) {
                c6.writeByte(10);
                Intrinsics.checkNotNull(qVar);
                c6.B(qVar.f16575b.a);
                c6.writeByte(10);
                b(c6, qVar.a());
                b(c6, qVar.f16576c);
                c6.B(qVar.a.f16608d);
                c6.writeByte(10);
            }
            Unit unit = Unit.a;
            c6.close();
        } finally {
        }
    }

    public e(Response response) {
        Headers d6;
        Intrinsics.checkNotNullParameter(response, "response");
        Request request = response.f16085d;
        this.a = request.a;
        Intrinsics.checkNotNullParameter(response, "<this>");
        Response response2 = response.E;
        Intrinsics.checkNotNull(response2);
        Headers headers = response2.f16085d.f16077c;
        Headers headers2 = response.f16090x;
        Set U0 = m3.n.U0(headers2);
        if (U0.isEmpty()) {
            d6 = qs.b.f17051b;
        } else {
            e6 e6Var = new e6();
            int size = headers.size();
            int i5 = 0;
            while (i5 < size) {
                int i6 = i5 + 1;
                String b10 = headers.b(i5);
                if (U0.contains(b10)) {
                    e6Var.a(b10, headers.h(i5));
                }
                i5 = i6;
            }
            d6 = e6Var.d();
        }
        this.f16532b = d6;
        this.f16533c = request.f16076b;
        this.f16534d = response.f16086e;
        this.f16535e = response.f16088v;
        this.f16536f = response.f16087i;
        this.f16537g = headers2;
        this.f16538h = response.f16089w;
        this.f16539i = response.H;
        this.j = response.I;
    }
}
