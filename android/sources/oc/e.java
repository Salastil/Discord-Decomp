package oc;

import a5.h0;
import android.net.Uri;
import android.os.SystemClock;
import com.facebook.react.animated.InterpolationAnimatedNode;
import e4.r;
import hc.e0;
import ie.a0;
import ie.b0;
import ie.h;
import ie.m;
import ie.p;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.SocketTimeoutException;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;
import ke.d0;
import ke.y;
import kotlin.jvm.internal.LongCompanionObject;
import org.chromium.net.CronetEngine;
import org.chromium.net.UrlRequest;
import org.chromium.net.UrlResponseInfo;
import org.webrtc.PeerConnection;
import tn.g;

/* loaded from: classes3.dex */
public final class e extends h {
    public final int E;
    public final int F;
    public final int G;
    public final r H;
    public final r I;
    public final h0 J;
    public final y K;
    public boolean L;
    public long M;
    public UrlRequest N;
    public p O;
    public ByteBuffer P;
    public UrlResponseInfo Q;
    public IOException R;
    public boolean S;
    public volatile long T;

    /* renamed from: w, reason: collision with root package name */
    public final d f15820w;

    /* renamed from: x, reason: collision with root package name */
    public final CronetEngine f15821x;

    /* renamed from: y, reason: collision with root package name */
    public final Executor f15822y;

    static {
        e0.a("goog.exo.cronet");
    }

    public e(CronetEngine cronetEngine, Executor executor, int i5, int i6, int i10, r rVar) {
        super(true);
        cronetEngine.getClass();
        this.f15821x = cronetEngine;
        executor.getClass();
        this.f15822y = executor;
        this.E = i5;
        this.F = i6;
        this.G = i10;
        this.H = rVar;
        this.K = y.a;
        this.f15820w = new d(this);
        this.I = new r(11);
        this.J = new h0(0);
    }

    public static String g(String str, Map map) {
        List list = (List) map.get(str);
        if (list == null || list.isEmpty()) {
            return null;
        }
        return (String) list.get(0);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final synchronized void close() {
        try {
            UrlRequest urlRequest = this.N;
            if (urlRequest != null) {
                urlRequest.cancel();
                this.N = null;
            }
            ByteBuffer byteBuffer = this.P;
            if (byteBuffer != null) {
                byteBuffer.limit(0);
            }
            this.O = null;
            this.Q = null;
            this.R = null;
            this.S = false;
            if (this.L) {
                this.L = false;
                c();
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final UrlRequest.Builder f(p pVar) {
        Uri uri = pVar.a;
        byte[] bArr = pVar.f10713d;
        String uri2 = uri.toString();
        CronetEngine cronetEngine = this.f15821x;
        d dVar = this.f15820w;
        Executor executor = this.f15822y;
        UrlRequest.Builder allowDirectExecutor = cronetEngine.newUrlRequestBuilder(uri2, dVar, executor).setPriority(this.E).allowDirectExecutor();
        HashMap hashMap = new HashMap();
        r rVar = this.H;
        if (rVar != null) {
            hashMap.putAll(rVar.m());
        }
        hashMap.putAll(this.I.m());
        hashMap.putAll(pVar.f10714e);
        for (Map.Entry entry : hashMap.entrySet()) {
            allowDirectExecutor.addHeader((String) entry.getKey(), (String) entry.getValue());
        }
        if (bArr != null && !hashMap.containsKey("Content-Type")) {
            throw new c("HTTP request with non-empty body must set Content-Type", 1004);
        }
        String a = ie.e0.a(pVar.f10715f, pVar.f10716g);
        if (a != null) {
            allowDirectExecutor.addHeader("Range", a);
        }
        allowDirectExecutor.setHttpMethod(p.b(pVar.f10712c));
        if (bArr != null) {
            allowDirectExecutor.setUploadDataProvider(new a(bArr), executor);
        }
        return allowDirectExecutor;
    }

    public final ByteBuffer h() {
        if (this.P == null) {
            ByteBuffer allocateDirect = ByteBuffer.allocateDirect(PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
            this.P = allocateDirect;
            allocateDirect.limit(0);
        }
        return this.P;
    }

    public final void i(ByteBuffer byteBuffer) {
        UrlRequest urlRequest = this.N;
        int i5 = d0.a;
        urlRequest.read(byteBuffer);
        try {
        } catch (InterruptedException unused) {
            if (byteBuffer == this.P) {
                this.P = null;
            }
            Thread.currentThread().interrupt();
            this.R = new InterruptedIOException();
        } catch (SocketTimeoutException e9) {
            if (byteBuffer == this.P) {
                this.P = null;
            }
            this.R = new b0(e9, 2002, 2);
        }
        if (!this.J.g(this.G)) {
            throw new SocketTimeoutException();
        }
        IOException iOException = this.R;
        if (iOException != null) {
            if (!(iOException instanceof b0)) {
                throw b0.a(iOException, 2);
            }
            throw ((b0) iOException);
        }
    }

    public final byte[] m() {
        byte[] bArr = d0.f13298f;
        ByteBuffer h6 = h();
        while (!this.S) {
            this.J.l();
            h6.clear();
            i(h6);
            h6.flip();
            if (h6.remaining() > 0) {
                int length = bArr.length;
                bArr = Arrays.copyOf(bArr, h6.remaining() + bArr.length);
                h6.get(bArr, length, h6.remaining());
            }
        }
        return bArr;
    }

    /* JADX WARN: Code restructure failed: missing block: B:32:0x00be, code lost:
    
        if (r12 != 0) goto L33;
     */
    @Override // com.google.android.exoplayer2.upstream.DataSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long o(p pVar) {
        long j;
        pVar.getClass();
        ke.b.k(!this.L);
        this.J.l();
        this.K.getClass();
        this.T = SystemClock.elapsedRealtime() + this.F;
        this.O = pVar;
        try {
            UrlRequest build = f(pVar).build();
            this.N = build;
            build.start();
            d();
            try {
                this.K.getClass();
                boolean z5 = false;
                boolean z6 = false;
                for (long elapsedRealtime = SystemClock.elapsedRealtime(); !z6 && elapsedRealtime < this.T; elapsedRealtime = SystemClock.elapsedRealtime()) {
                    z6 = this.J.g((this.T - elapsedRealtime) + 5);
                    this.K.getClass();
                }
                IOException iOException = this.R;
                if (iOException != null) {
                    String message = iOException.getMessage();
                    if (message != null && g.x(message).contains("err_cleartext_not_permitted")) {
                        throw new a0(iOException);
                    }
                    h0 h0Var = new h0(0);
                    build.getStatus(new b(new int[1], h0Var));
                    h0Var.f();
                    throw new c(iOException, 2001, 1);
                }
                if (!z6) {
                    SocketTimeoutException socketTimeoutException = new SocketTimeoutException();
                    h0 h0Var2 = new h0(0);
                    build.getStatus(new b(new int[1], h0Var2));
                    h0Var2.f();
                    throw new c(socketTimeoutException, 2002, 1);
                }
                UrlResponseInfo urlResponseInfo = this.Q;
                urlResponseInfo.getClass();
                int httpStatusCode = urlResponseInfo.getHttpStatusCode();
                Map<String, List<String>> allHeaders = urlResponseInfo.getAllHeaders();
                if (httpStatusCode < 200 || httpStatusCode > 299) {
                    if (httpStatusCode == 416) {
                        if (pVar.f10715f == ie.e0.c(g("Content-Range", allHeaders))) {
                            this.L = true;
                            e(pVar);
                            long j5 = pVar.f10716g;
                            if (j5 != -1) {
                                return j5;
                            }
                            return 0L;
                        }
                    }
                    try {
                        m();
                    } catch (IOException unused) {
                        int i5 = d0.a;
                    }
                    m mVar = httpStatusCode == 416 ? new m(2008) : null;
                    urlResponseInfo.getHttpStatusText();
                    throw new ie.d0(httpStatusCode, mVar, allHeaders);
                }
                if (httpStatusCode == 200) {
                    j = pVar.f10715f;
                }
                j = 0;
                Iterator<Map.Entry<String, String>> it = urlResponseInfo.getAllHeadersAsList().iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    Map.Entry<String, String> next = it.next();
                    if (next.getKey().equalsIgnoreCase("Content-Encoding")) {
                        z5 = !next.getValue().equalsIgnoreCase(InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY);
                        break;
                    }
                }
                if (z5) {
                    this.M = pVar.f10716g;
                } else {
                    long j7 = pVar.f10716g;
                    if (j7 != -1) {
                        this.M = j7;
                    } else {
                        long b10 = ie.e0.b(g("Content-Length", allHeaders), g("Content-Range", allHeaders));
                        this.M = b10 != -1 ? b10 - j : -1L;
                    }
                }
                this.L = true;
                e(pVar);
                if (j != 0) {
                    ByteBuffer h6 = h();
                    while (j > 0) {
                        try {
                            this.J.l();
                            h6.clear();
                            i(h6);
                            if (Thread.currentThread().isInterrupted()) {
                                throw new InterruptedIOException();
                            }
                            if (this.S) {
                                throw new c(2008);
                            }
                            h6.flip();
                            ke.b.k(h6.hasRemaining());
                            int min = (int) Math.min(h6.remaining(), j);
                            h6.position(h6.position() + min);
                            j -= min;
                        } catch (IOException e9) {
                            if (e9 instanceof b0) {
                                throw ((b0) e9);
                            }
                            throw new c(e9, e9 instanceof SocketTimeoutException ? 2002 : 2001, 1);
                        }
                    }
                }
                return this.M;
            } catch (InterruptedException unused2) {
                Thread.currentThread().interrupt();
                throw new c(new InterruptedIOException(), 1004, 1);
            }
        } catch (IOException e10) {
            if (e10 instanceof b0) {
                throw ((b0) e10);
            }
            throw new c(e10, 2000, 1);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        ke.b.k(this.L);
        if (i6 == 0) {
            return 0;
        }
        if (this.M == 0) {
            return -1;
        }
        ByteBuffer h6 = h();
        if (!h6.hasRemaining()) {
            this.J.l();
            h6.clear();
            int i10 = d0.a;
            i(h6);
            if (this.S) {
                this.M = 0L;
                return -1;
            }
            h6.flip();
            ke.b.k(h6.hasRemaining());
        }
        long j = this.M;
        if (j == -1) {
            j = LongCompanionObject.MAX_VALUE;
        }
        long[] jArr = {j, h6.remaining(), i6};
        long j5 = jArr[0];
        for (int i11 = 1; i11 < 3; i11++) {
            long j7 = jArr[i11];
            if (j7 < j5) {
                j5 = j7;
            }
        }
        int i12 = (int) j5;
        h6.get(bArr, i5, i12);
        long j10 = this.M;
        if (j10 != -1) {
            this.M = j10 - i12;
        }
        b(i12);
        return i12;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        UrlResponseInfo urlResponseInfo = this.Q;
        return urlResponseInfo == null ? Collections.EMPTY_MAP : urlResponseInfo.getAllHeaders();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        UrlResponseInfo urlResponseInfo = this.Q;
        if (urlResponseInfo == null) {
            return null;
        }
        return Uri.parse(urlResponseInfo.getUrl());
    }
}
