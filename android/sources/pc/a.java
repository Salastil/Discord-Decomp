package pc;

import android.net.Uri;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.animated.InterpolationAnimatedNode;
import com.google.common.util.concurrent.SettableFuture;
import e4.r;
import hc.e0;
import ie.b0;
import ie.h;
import ie.m;
import ie.p;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.ExecutionException;
import ke.d0;
import kotlin.jvm.internal.Intrinsics;
import lh.y;
import okhttp3.Call;
import okhttp3.HttpUrl;
import okhttp3.MediaType;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import ve.i;

/* loaded from: classes3.dex */
public final class a extends h {
    public final r E;
    public Response F;
    public InputStream G;
    public boolean H;
    public long I;
    public long J;

    /* renamed from: w, reason: collision with root package name */
    public final Call.Factory f16339w;

    /* renamed from: x, reason: collision with root package name */
    public final r f16340x;

    /* renamed from: y, reason: collision with root package name */
    public final String f16341y;

    static {
        e0.a("goog.exo.okhttp");
    }

    public a(Call.Factory factory, String str, r rVar) {
        super(true);
        factory.getClass();
        this.f16339w = factory;
        this.f16341y = str;
        this.E = rVar;
        this.f16340x = new r(11);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        if (this.H) {
            this.H = false;
            c();
            f();
        }
    }

    public final void f() {
        Response response = this.F;
        if (response != null) {
            ResponseBody responseBody = response.f16091y;
            responseBody.getClass();
            responseBody.close();
            this.F = null;
        }
        this.G = null;
    }

    public final void g(long j) {
        if (j == 0) {
            return;
        }
        byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        while (j > 0) {
            try {
                int min = (int) Math.min(j, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                InputStream inputStream = this.G;
                int i5 = d0.a;
                int read = inputStream.read(bArr, 0, min);
                if (Thread.currentThread().isInterrupted()) {
                    throw new InterruptedIOException();
                }
                if (read == -1) {
                    throw new b0(2008);
                }
                j -= read;
                b(read);
            } catch (IOException e9) {
                if (!(e9 instanceof b0)) {
                    throw new b0(2000);
                }
                throw ((b0) e9);
            }
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        HttpUrl url;
        this.J = 0L;
        this.I = 0L;
        d();
        long j = pVar.f10715f;
        int i5 = pVar.f10712c;
        long j5 = pVar.f10716g;
        String uri = pVar.a.toString();
        Intrinsics.checkNotNullParameter(uri, "<this>");
        try {
            Intrinsics.checkNotNullParameter(uri, "<this>");
            y yVar = new y(1);
            yVar.g(null, uri);
            url = yVar.b();
        } catch (IllegalArgumentException unused) {
            url = null;
        }
        if (url == null) {
            throw new b0("Malformed URL", 1004);
        }
        Request.Builder builder = new Request.Builder();
        Intrinsics.checkNotNullParameter(url, "url");
        builder.a = url;
        HashMap hashMap = new HashMap();
        r rVar = this.E;
        if (rVar != null) {
            hashMap.putAll(rVar.m());
        }
        hashMap.putAll(this.f16340x.m());
        hashMap.putAll(pVar.f10714e);
        for (Map.Entry entry : hashMap.entrySet()) {
            builder.d((String) entry.getKey(), (String) entry.getValue());
        }
        String a = ie.e0.a(j, j5);
        if (a != null) {
            builder.a("Range", a);
        }
        String str = this.f16341y;
        if (str != null) {
            builder.a("User-Agent", str);
        }
        if ((pVar.f10718i & 1) != 1) {
            builder.a("Accept-Encoding", InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY);
        }
        byte[] bArr = pVar.f10713d;
        builder.f(p.b(i5), bArr != null ? RequestBody.create((MediaType) null, bArr) : i5 == 2 ? RequestBody.create((MediaType) null, d0.f13298f) : null);
        ts.h a10 = this.f16339w.a(builder.b());
        try {
            SettableFuture settableFuture = new SettableFuture();
            a10.d(new i(settableFuture));
            try {
                Response response = (Response) settableFuture.get();
                this.F = response;
                ResponseBody responseBody = response.f16091y;
                responseBody.getClass();
                this.G = responseBody.byteStream();
                int i6 = response.f16088v;
                if (response.g()) {
                    responseBody.contentType();
                    long j7 = (i6 != 200 || j == 0) ? 0L : j;
                    if (j5 != -1) {
                        this.I = j5;
                    } else {
                        long contentLength = responseBody.contentLength();
                        this.I = contentLength != -1 ? contentLength - j7 : -1L;
                    }
                    this.H = true;
                    e(pVar);
                    try {
                        g(j7);
                        return this.I;
                    } catch (b0 e9) {
                        f();
                        throw e9;
                    }
                }
                if (i6 == 416 && j == ie.e0.c(response.f16090x.a("Content-Range"))) {
                    this.H = true;
                    e(pVar);
                    if (j5 != -1) {
                        return j5;
                    }
                    return 0L;
                }
                try {
                    InputStream inputStream = this.G;
                    inputStream.getClass();
                    d0.T(inputStream);
                } catch (IOException unused2) {
                    int i10 = d0.a;
                }
                TreeMap e10 = response.f16090x.e();
                f();
                throw new ie.d0(i6, i6 == 416 ? new m(2008) : null, e10);
            } catch (InterruptedException unused3) {
                a10.cancel();
                throw new InterruptedIOException();
            } catch (ExecutionException e11) {
                throw new IOException(e11);
            }
        } catch (IOException e12) {
            throw b0.a(e12, 1);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        try {
            long j = this.I;
            if (j != -1) {
                long j5 = j - this.J;
                if (j5 == 0) {
                    return -1;
                }
                i6 = (int) Math.min(i6, j5);
            }
            InputStream inputStream = this.G;
            int i10 = d0.a;
            int read = inputStream.read(bArr, i5, i6);
            if (read != -1) {
                this.J += read;
                b(read);
                return read;
            }
            return -1;
        } catch (IOException e9) {
            int i11 = d0.a;
            throw b0.a(e9, 2);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        Response response = this.F;
        return response == null ? Collections.EMPTY_MAP : response.f16090x.e();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        Response response = this.F;
        if (response == null) {
            return null;
        }
        return Uri.parse(response.f16085d.a.f16038h);
    }
}
