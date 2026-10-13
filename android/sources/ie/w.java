package ie;

import android.net.Uri;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.animated.InterpolationAnimatedNode;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.io.OutputStream;
import java.lang.reflect.Method;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.zip.GZIPInputStream;

/* loaded from: classes3.dex */
public final class w extends h {
    public final e4.r E;
    public HttpURLConnection F;
    public InputStream G;
    public boolean H;
    public int I;
    public long J;
    public long K;

    /* renamed from: w, reason: collision with root package name */
    public final int f10771w;

    /* renamed from: x, reason: collision with root package name */
    public final int f10772x;

    /* renamed from: y, reason: collision with root package name */
    public final e4.r f10773y;

    public w(int i5, int i6, e4.r rVar) {
        super(true);
        this.f10771w = i5;
        this.f10772x = i6;
        this.f10773y = rVar;
        this.E = new e4.r(11);
    }

    public static void h(HttpURLConnection httpURLConnection, long j) {
        int i5;
        if (httpURLConnection == null || (i5 = ke.d0.a) < 19 || i5 > 20) {
            return;
        }
        try {
            InputStream inputStream = httpURLConnection.getInputStream();
            if (j == -1) {
                if (inputStream.read() == -1) {
                    return;
                }
            } else if (j <= 2048) {
                return;
            }
            String name = inputStream.getClass().getName();
            if ("com.android.okhttp.internal.http.HttpTransport$ChunkedInputStream".equals(name) || "com.android.okhttp.internal.http.HttpTransport$FixedLengthInputStream".equals(name)) {
                Class<? super Object> superclass = inputStream.getClass().getSuperclass();
                superclass.getClass();
                Method declaredMethod = superclass.getDeclaredMethod("unexpectedEndOfInput", null);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(inputStream, null);
            }
        } catch (Exception unused) {
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        try {
            InputStream inputStream = this.G;
            if (inputStream != null) {
                long j = this.J;
                long j5 = -1;
                if (j != -1) {
                    j5 = j - this.K;
                }
                h(this.F, j5);
                try {
                    inputStream.close();
                } catch (IOException e9) {
                    int i5 = ke.d0.a;
                    throw new b0(e9, 2000, 3);
                }
            }
        } finally {
            this.G = null;
            f();
            if (this.H) {
                this.H = false;
                c();
            }
        }
    }

    public final void f() {
        HttpURLConnection httpURLConnection = this.F;
        if (httpURLConnection != null) {
            try {
                httpURLConnection.disconnect();
            } catch (Exception e9) {
                ke.b.s("DefaultHttpDataSource", "Unexpected error while disconnecting", e9);
            }
            this.F = null;
        }
    }

    public final HttpURLConnection g(URL url, int i5, byte[] bArr, long j, long j5, boolean z5, boolean z6, Map map) {
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
        httpURLConnection.setConnectTimeout(this.f10771w);
        httpURLConnection.setReadTimeout(this.f10772x);
        HashMap hashMap = new HashMap();
        e4.r rVar = this.f10773y;
        if (rVar != null) {
            hashMap.putAll(rVar.m());
        }
        hashMap.putAll(this.E.m());
        hashMap.putAll(map);
        for (Map.Entry entry : hashMap.entrySet()) {
            httpURLConnection.setRequestProperty((String) entry.getKey(), (String) entry.getValue());
        }
        String a = e0.a(j, j5);
        if (a != null) {
            httpURLConnection.setRequestProperty("Range", a);
        }
        httpURLConnection.setRequestProperty("Accept-Encoding", z5 ? "gzip" : InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY);
        httpURLConnection.setInstanceFollowRedirects(z6);
        httpURLConnection.setDoOutput(bArr != null);
        httpURLConnection.setRequestMethod(p.b(i5));
        if (bArr == null) {
            httpURLConnection.connect();
            return httpURLConnection;
        }
        httpURLConnection.setFixedLengthStreamingMode(bArr.length);
        httpURLConnection.connect();
        OutputStream outputStream = httpURLConnection.getOutputStream();
        outputStream.write(bArr);
        outputStream.close();
        return httpURLConnection;
    }

    public final void i(long j) {
        if (j == 0) {
            return;
        }
        byte[] bArr = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
        while (j > 0) {
            int min = (int) Math.min(j, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
            InputStream inputStream = this.G;
            int i5 = ke.d0.a;
            int read = inputStream.read(bArr, 0, min);
            if (Thread.currentThread().isInterrupted()) {
                throw new b0(new InterruptedIOException(), 2000, 1);
            }
            if (read == -1) {
                throw new b0(2008);
            }
            j -= read;
            b(read);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        long j = 0;
        this.K = 0L;
        this.J = 0L;
        d();
        try {
            HttpURLConnection g6 = g(new URL(pVar.a.toString()), pVar.f10712c, pVar.f10713d, pVar.f10715f, pVar.f10716g, (pVar.f10718i & 1) == 1, true, pVar.f10714e);
            long j5 = pVar.f10715f;
            long j7 = pVar.f10716g;
            this.F = g6;
            this.I = g6.getResponseCode();
            g6.getResponseMessage();
            int i5 = this.I;
            if (i5 < 200 || i5 > 299) {
                Map<String, List<String>> headerFields = g6.getHeaderFields();
                if (this.I == 416 && j5 == e0.c(g6.getHeaderField("Content-Range"))) {
                    this.H = true;
                    e(pVar);
                    if (j7 != -1) {
                        return j7;
                    }
                    return 0L;
                }
                InputStream errorStream = g6.getErrorStream();
                try {
                    if (errorStream != null) {
                        ke.d0.T(errorStream);
                    } else {
                        int i6 = ke.d0.a;
                    }
                } catch (IOException unused) {
                    int i10 = ke.d0.a;
                }
                f();
                throw new d0(this.I, this.I == 416 ? new m(2008) : null, headerFields);
            }
            g6.getContentType();
            if (this.I == 200 && j5 != 0) {
                j = j5;
            }
            boolean equalsIgnoreCase = "gzip".equalsIgnoreCase(g6.getHeaderField("Content-Encoding"));
            if (equalsIgnoreCase) {
                this.J = j7;
            } else if (j7 != -1) {
                this.J = j7;
            } else {
                long b10 = e0.b(g6.getHeaderField("Content-Length"), g6.getHeaderField("Content-Range"));
                this.J = b10 != -1 ? b10 - j : -1L;
            }
            try {
                this.G = g6.getInputStream();
                if (equalsIgnoreCase) {
                    this.G = new GZIPInputStream(this.G);
                }
                this.H = true;
                e(pVar);
                try {
                    i(j);
                    return this.J;
                } catch (IOException e9) {
                    f();
                    if (e9 instanceof b0) {
                        throw ((b0) e9);
                    }
                    throw new b0(e9, 2000, 1);
                }
            } catch (IOException e10) {
                f();
                throw new b0(e10, 2000, 1);
            }
        } catch (IOException e11) {
            f();
            throw b0.a(e11, 1);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        try {
            long j = this.J;
            if (j != -1) {
                long j5 = j - this.K;
                if (j5 == 0) {
                    return -1;
                }
                i6 = (int) Math.min(i6, j5);
            }
            InputStream inputStream = this.G;
            int i10 = ke.d0.a;
            int read = inputStream.read(bArr, i5, i6);
            if (read != -1) {
                this.K += read;
                b(read);
                return read;
            }
            return -1;
        } catch (IOException e9) {
            int i11 = ke.d0.a;
            throw b0.a(e9, 2);
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Map s() {
        HttpURLConnection httpURLConnection = this.F;
        return httpURLConnection == null ? fi.w0.f8728y : new v(httpURLConnection.getHeaderFields());
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        HttpURLConnection httpURLConnection = this.F;
        if (httpURLConnection == null) {
            return null;
        }
        return Uri.parse(httpURLConnection.getURL().toString());
    }
}
