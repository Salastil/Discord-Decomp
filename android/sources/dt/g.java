package dt;

import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.facebook.react.devsupport.CxxInspectorPackagerConnection;
import com.reactnativecommunity.webview.RNCWebViewManager;
import et.m;
import java.io.IOException;
import java.net.ProtocolException;
import java.util.ArrayDeque;
import java.util.List;
import java.util.Random;
import java.util.concurrent.TimeUnit;
import java.util.zip.Inflater;
import kotlin.Unit;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.WebSocket;
import okio.Buffer;
import okio.ByteString;
import ps.s;
import ps.x;

/* loaded from: classes3.dex */
public final class g implements WebSocket, i {

    /* renamed from: w, reason: collision with root package name */
    public static final List f7772w = b0.c(s.HTTP_1_1);
    public final x a;

    /* renamed from: b, reason: collision with root package name */
    public final Random f7773b;

    /* renamed from: c, reason: collision with root package name */
    public final long f7774c;

    /* renamed from: d, reason: collision with root package name */
    public h f7775d;

    /* renamed from: e, reason: collision with root package name */
    public final long f7776e;

    /* renamed from: f, reason: collision with root package name */
    public final String f7777f;

    /* renamed from: g, reason: collision with root package name */
    public ts.h f7778g;

    /* renamed from: h, reason: collision with root package name */
    public e f7779h;

    /* renamed from: i, reason: collision with root package name */
    public j f7780i;
    public k j;
    public final ss.b k;

    /* renamed from: l, reason: collision with root package name */
    public String f7781l;

    /* renamed from: m, reason: collision with root package name */
    public ts.j f7782m;

    /* renamed from: n, reason: collision with root package name */
    public final ArrayDeque f7783n;

    /* renamed from: o, reason: collision with root package name */
    public final ArrayDeque f7784o;

    /* renamed from: p, reason: collision with root package name */
    public long f7785p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f7786q;

    /* renamed from: r, reason: collision with root package name */
    public int f7787r;

    /* renamed from: s, reason: collision with root package name */
    public String f7788s;

    /* renamed from: t, reason: collision with root package name */
    public boolean f7789t;

    /* renamed from: u, reason: collision with root package name */
    public int f7790u;

    /* renamed from: v, reason: collision with root package name */
    public boolean f7791v;

    public g(ss.c taskRunner, Request originalRequest, x listener, Random random, long j, long j5) {
        Intrinsics.checkNotNullParameter(taskRunner, "taskRunner");
        Intrinsics.checkNotNullParameter(originalRequest, "originalRequest");
        Intrinsics.checkNotNullParameter(listener, "listener");
        Intrinsics.checkNotNullParameter(random, "random");
        this.a = listener;
        this.f7773b = random;
        this.f7774c = j;
        this.f7775d = null;
        this.f7776e = j5;
        this.k = taskRunner.e();
        this.f7783n = new ArrayDeque();
        this.f7784o = new ArrayDeque();
        this.f7787r = -1;
        String str = originalRequest.f16076b;
        if (!Intrinsics.areEqual("GET", str)) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("Request must be GET: ", str).toString());
        }
        ByteString byteString = ByteString.f16115v;
        byte[] bArr = new byte[16];
        random.nextBytes(bArr);
        Unit unit = Unit.a;
        this.f7777f = io.sentry.hints.j.F(bArr).a();
    }

    @Override // okhttp3.WebSocket
    public final boolean a(ByteString bytes) {
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        return j(bytes, 2);
    }

    @Override // okhttp3.WebSocket
    public final boolean b(String text) {
        Intrinsics.checkNotNullParameter(text, "text");
        ByteString byteString = ByteString.f16115v;
        return j(io.sentry.hints.j.D(text), 1);
    }

    @Override // okhttp3.WebSocket
    public final boolean c(int i5, String str) {
        String stringPlus;
        synchronized (this) {
            ByteString byteString = null;
            try {
                if (i5 < 1000 || i5 >= 5000) {
                    stringPlus = Intrinsics.stringPlus("Code must be in range [1000,5000): ", Integer.valueOf(i5));
                } else if ((1004 > i5 || i5 >= 1007) && (1015 > i5 || i5 >= 3000)) {
                    stringPlus = null;
                } else {
                    stringPlus = "Code " + i5 + " is reserved and may not be used.";
                }
                if (stringPlus != null) {
                    Intrinsics.checkNotNull(stringPlus);
                    throw new IllegalArgumentException(stringPlus.toString());
                }
                if (str != null) {
                    ByteString byteString2 = ByteString.f16115v;
                    byteString = io.sentry.hints.j.D(str);
                    if (byteString.f16116d.length > 123) {
                        throw new IllegalArgumentException(Intrinsics.stringPlus("reason.size() > 123: ", str).toString());
                    }
                }
                if (!this.f7789t && !this.f7786q) {
                    this.f7786q = true;
                    this.f7784o.add(new c(byteString, i5));
                    i();
                    return true;
                }
                return false;
            } finally {
            }
        }
    }

    @Override // okhttp3.WebSocket
    public final synchronized long d() {
        return this.f7785p;
    }

    public final void e(Response response, hc.k kVar) {
        Intrinsics.checkNotNullParameter(response, "response");
        int i5 = response.f16088v;
        if (i5 != 101) {
            StringBuilder sb2 = new StringBuilder("Expected HTTP 101 response but was '");
            sb2.append(i5);
            sb2.append(' ');
            throw new ProtocolException(s4.h.h(sb2, response.f16087i, '\''));
        }
        String f2 = response.f("Connection", null);
        if (!"Upgrade".equalsIgnoreCase(f2)) {
            throw new ProtocolException("Expected 'Connection' header value 'Upgrade' but was '" + ((Object) f2) + '\'');
        }
        String f10 = response.f("Upgrade", null);
        if (!"websocket".equalsIgnoreCase(f10)) {
            throw new ProtocolException("Expected 'Upgrade' header value 'websocket' but was '" + ((Object) f10) + '\'');
        }
        String f11 = response.f("Sec-WebSocket-Accept", null);
        ByteString byteString = ByteString.f16115v;
        String a = io.sentry.hints.j.D(Intrinsics.stringPlus(this.f7777f, "258EAFA5-E914-47DA-95CA-C5AB0DC85B11")).b("SHA-1").a();
        if (Intrinsics.areEqual(a, f11)) {
            if (kVar == null) {
                throw new ProtocolException("Web Socket exchange missing: bad interceptor?");
            }
            return;
        }
        throw new ProtocolException("Expected 'Sec-WebSocket-Accept' header value '" + a + "' but was '" + ((Object) f11) + '\'');
    }

    public final void f(Exception e9, Response response) {
        Intrinsics.checkNotNullParameter(e9, "e");
        synchronized (this) {
            if (this.f7789t) {
                return;
            }
            this.f7789t = true;
            ts.j jVar = this.f7782m;
            this.f7782m = null;
            j jVar2 = this.f7780i;
            this.f7780i = null;
            k kVar = this.j;
            this.j = null;
            this.k.f();
            Unit unit = Unit.a;
            try {
                this.a.onFailure(this, e9, response);
                if (jVar != null) {
                    qs.b.c(jVar);
                }
                if (jVar2 != null) {
                    qs.b.c(jVar2);
                }
                if (kVar == null) {
                    return;
                }
                qs.b.c(kVar);
            } catch (Throwable th2) {
                if (jVar != null) {
                    qs.b.c(jVar);
                }
                if (jVar2 != null) {
                    qs.b.c(jVar2);
                }
                if (kVar != null) {
                    qs.b.c(kVar);
                }
                throw th2;
            }
        }
    }

    public final void g(String name, ts.j streams) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(streams, "streams");
        h hVar = this.f7775d;
        Intrinsics.checkNotNull(hVar);
        synchronized (this) {
            try {
                this.f7781l = name;
                this.f7782m = streams;
                this.j = new k(streams.f18734e, this.f7773b, hVar.a, hVar.f7793c, this.f7776e);
                this.f7779h = new e(this);
                long j = this.f7774c;
                if (j != 0) {
                    long nanos = TimeUnit.MILLISECONDS.toNanos(j);
                    this.k.c(new f(Intrinsics.stringPlus(name, " ping"), this, nanos), nanos);
                }
                if (!this.f7784o.isEmpty()) {
                    i();
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f7780i = new j(streams.f18733d, this, hVar.a, hVar.f7795e);
    }

    public final void h() {
        while (this.f7787r == -1) {
            j jVar = this.f7780i;
            Intrinsics.checkNotNull(jVar);
            jVar.f();
            if (!jVar.F) {
                i iVar = jVar.f7798e;
                Buffer buffer = jVar.I;
                int i5 = jVar.f7802x;
                if (i5 != 1 && i5 != 2) {
                    byte[] bArr = qs.b.a;
                    String hexString = Integer.toHexString(i5);
                    Intrinsics.checkNotNullExpressionValue(hexString, "toHexString(this)");
                    throw new ProtocolException(Intrinsics.stringPlus("Unknown opcode: ", hexString));
                }
                while (!jVar.f7801w) {
                    long j = jVar.f7803y;
                    if (j > 0) {
                        jVar.f7797d.w(buffer, j);
                    }
                    if (jVar.E) {
                        if (jVar.G) {
                            a aVar = jVar.J;
                            if (aVar == null) {
                                aVar = new a(jVar.f7800v, 1);
                                jVar.J = aVar;
                            }
                            Inflater inflater = (Inflater) aVar.f7764v;
                            Intrinsics.checkNotNullParameter(buffer, "buffer");
                            Buffer buffer2 = aVar.f7763i;
                            if (buffer2.f16114e != 0) {
                                throw new IllegalArgumentException("Failed requirement.");
                            }
                            if (aVar.f7762e) {
                                inflater.reset();
                            }
                            buffer2.J(buffer);
                            buffer2.b0(65535);
                            long bytesRead = inflater.getBytesRead() + buffer2.f16114e;
                            do {
                                ((m) aVar.f7765w).c(buffer, LongCompanionObject.MAX_VALUE);
                            } while (inflater.getBytesRead() < bytesRead);
                        }
                        if (i5 == 1) {
                            String text = buffer.W();
                            g gVar = (g) iVar;
                            gVar.getClass();
                            Intrinsics.checkNotNullParameter(text, "text");
                            gVar.a.onMessage(gVar, text);
                        } else {
                            ByteString bytes = buffer.m(buffer.f16114e);
                            g gVar2 = (g) iVar;
                            gVar2.getClass();
                            Intrinsics.checkNotNullParameter(bytes, "bytes");
                            gVar2.a.onMessage(gVar2, bytes);
                        }
                    } else {
                        while (!jVar.f7801w) {
                            jVar.f();
                            if (!jVar.F) {
                                break;
                            } else {
                                jVar.c();
                            }
                        }
                        if (jVar.f7802x != 0) {
                            int i6 = jVar.f7802x;
                            byte[] bArr2 = qs.b.a;
                            String hexString2 = Integer.toHexString(i6);
                            Intrinsics.checkNotNullExpressionValue(hexString2, "toHexString(this)");
                            throw new ProtocolException(Intrinsics.stringPlus("Expected continuation opcode. Got: ", hexString2));
                        }
                    }
                }
                throw new IOException("closed");
            }
            jVar.c();
        }
    }

    public final void i() {
        byte[] bArr = qs.b.a;
        e eVar = this.f7779h;
        if (eVar != null) {
            this.k.c(eVar, 0L);
        }
    }

    public final synchronized boolean j(ByteString byteString, int i5) {
        if (!this.f7789t && !this.f7786q) {
            if (this.f7785p + byteString.c() > CxxInspectorPackagerConnection.MAX_QUEUE_SIZE) {
                c(RNCWebViewManager.COMMAND_CLEAR_CACHE, null);
                return false;
            }
            this.f7785p += byteString.c();
            this.f7784o.add(new d(byteString, i5));
            i();
            return true;
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:76:0x00d5, code lost:
    
        if (r2 < 3000) goto L62;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006b A[Catch: all -> 0x007f, TRY_ENTER, TryCatch #3 {all -> 0x007f, blocks: (B:21:0x006b, B:30:0x0082, B:32:0x0086, B:33:0x0092, B:36:0x009f, B:40:0x00a3, B:41:0x00a4, B:42:0x00a5, B:44:0x00a9, B:50:0x011d, B:52:0x0121, B:55:0x013d, B:56:0x013f, B:68:0x00d7, B:71:0x00f8, B:72:0x0104, B:77:0x00eb, B:78:0x0105, B:80:0x010f, B:81:0x0112, B:82:0x0140, B:83:0x0145, B:35:0x0093, B:49:0x011a), top: B:19:0x0069, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x012c  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0137 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0082 A[Catch: all -> 0x007f, TryCatch #3 {all -> 0x007f, blocks: (B:21:0x006b, B:30:0x0082, B:32:0x0086, B:33:0x0092, B:36:0x009f, B:40:0x00a3, B:41:0x00a4, B:42:0x00a5, B:44:0x00a9, B:50:0x011d, B:52:0x0121, B:55:0x013d, B:56:0x013f, B:68:0x00d7, B:71:0x00f8, B:72:0x0104, B:77:0x00eb, B:78:0x0105, B:80:0x010f, B:81:0x0112, B:82:0x0140, B:83:0x0145, B:35:0x0093, B:49:0x011a), top: B:19:0x0069, inners: #0, #2 }] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x00f7  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x00f8 A[Catch: all -> 0x007f, TryCatch #3 {all -> 0x007f, blocks: (B:21:0x006b, B:30:0x0082, B:32:0x0086, B:33:0x0092, B:36:0x009f, B:40:0x00a3, B:41:0x00a4, B:42:0x00a5, B:44:0x00a9, B:50:0x011d, B:52:0x0121, B:55:0x013d, B:56:0x013f, B:68:0x00d7, B:71:0x00f8, B:72:0x0104, B:77:0x00eb, B:78:0x0105, B:80:0x010f, B:81:0x0112, B:82:0x0140, B:83:0x0145, B:35:0x0093, B:49:0x011a), top: B:19:0x0069, inners: #0, #2 }] */
    /* JADX WARN: Type inference failed for: r7v1, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v6 */
    /* JADX WARN: Type inference failed for: r7v7 */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r8v5 */
    /* JADX WARN: Type inference failed for: r8v6, types: [dt.k] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean k() {
        Object obj;
        String str;
        ?? r82;
        int i5;
        ts.j jVar;
        ?? r7;
        synchronized (this) {
            try {
                if (this.f7789t) {
                    return false;
                }
                k kVar = this.j;
                Object poll = this.f7783n.poll();
                String str2 = null;
                try {
                    if (poll == null) {
                        obj = this.f7784o.poll();
                        if (obj instanceof c) {
                            i5 = this.f7787r;
                            str = this.f7788s;
                            if (i5 != -1) {
                                jVar = this.f7782m;
                                this.f7782m = null;
                                j jVar2 = this.f7780i;
                                this.f7780i = null;
                                r82 = this.j;
                                this.j = null;
                                this.k.f();
                                r7 = jVar2;
                            } else {
                                this.k.c(new e(Intrinsics.stringPlus(this.f7781l, " cancel"), this), TimeUnit.MILLISECONDS.toNanos(LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE));
                                jVar = null;
                                r7 = 0;
                                r82 = null;
                            }
                            Unit unit = Unit.a;
                            if (poll == null) {
                                Intrinsics.checkNotNull(kVar);
                                ByteString payload = (ByteString) poll;
                                kVar.getClass();
                                Intrinsics.checkNotNullParameter(payload, "payload");
                                kVar.c(payload, 10);
                            } else if (obj instanceof d) {
                                d dVar = (d) obj;
                                Intrinsics.checkNotNull(kVar);
                                kVar.f(dVar.f7767b, dVar.a);
                                synchronized (this) {
                                    this.f7785p -= dVar.f7767b.c();
                                }
                            } else {
                                if (!(obj instanceof c)) {
                                    throw new AssertionError();
                                }
                                c cVar = (c) obj;
                                Intrinsics.checkNotNull(kVar);
                                int i6 = cVar.a;
                                ByteString byteString = cVar.f7766b;
                                kVar.getClass();
                                ByteString byteString2 = ByteString.f16115v;
                                if (i6 != 0 || byteString != null) {
                                    if (i6 != 0) {
                                        if (i6 >= 1000 && i6 < 5000) {
                                            if (1004 <= i6) {
                                                if (i6 < 1007) {
                                                    str2 = "Code " + i6 + " is reserved and may not be used.";
                                                    if (str2 != null) {
                                                        Intrinsics.checkNotNull(str2);
                                                        throw new IllegalArgumentException(str2.toString());
                                                    }
                                                }
                                            }
                                            if (1015 <= i6) {
                                            }
                                            if (str2 != null) {
                                            }
                                        }
                                        str2 = Intrinsics.stringPlus("Code must be in range [1000,5000): ", Integer.valueOf(i6));
                                        if (str2 != null) {
                                        }
                                    }
                                    Buffer buffer = new Buffer();
                                    buffer.d0(i6);
                                    if (byteString != null) {
                                        buffer.R(byteString);
                                    }
                                    byteString2 = buffer.m(buffer.f16114e);
                                }
                                try {
                                    kVar.c(byteString2, 8);
                                    if (jVar != null) {
                                        x xVar = this.a;
                                        Intrinsics.checkNotNull(str);
                                        xVar.onClosed(this, i5, str);
                                    }
                                } finally {
                                    kVar.E = true;
                                }
                            }
                            if (jVar != null) {
                                qs.b.c(jVar);
                            }
                            if (r7 != 0) {
                                qs.b.c(r7);
                            }
                            if (r82 != null) {
                                return true;
                            }
                            qs.b.c(r82);
                            return true;
                        }
                        if (obj == null) {
                            return false;
                        }
                        str = null;
                    } else {
                        obj = null;
                        str = null;
                    }
                    if (poll == null) {
                    }
                    if (jVar != null) {
                    }
                    if (r7 != 0) {
                    }
                    if (r82 != null) {
                    }
                } catch (Throwable th2) {
                    if (jVar != null) {
                        qs.b.c(jVar);
                    }
                    if (r7 != 0) {
                        qs.b.c(r7);
                    }
                    if (r82 != null) {
                        qs.b.c(r82);
                    }
                    throw th2;
                }
                String str3 = str;
                r82 = str3;
                i5 = -1;
                jVar = r82;
                r7 = str3;
                Unit unit2 = Unit.a;
            } catch (Throwable th3) {
                throw th3;
            }
        }
    }
}
