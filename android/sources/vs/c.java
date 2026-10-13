package vs;

import androidx.recyclerview.widget.h;
import io.sentry.e6;
import java.io.IOException;
import java.net.ProtocolException;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import okhttp3.CookieJar;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okio.Buffer;
import okio.BufferedSource;
import ts.k;

/* loaded from: classes3.dex */
public final class c extends a {

    /* renamed from: v, reason: collision with root package name */
    public final HttpUrl f19578v;

    /* renamed from: w, reason: collision with root package name */
    public long f19579w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f19580x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ aj.a f19581y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(aj.a this$0, HttpUrl url) {
        super(this$0);
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(url, "url");
        this.f19581y = this$0;
        this.f19578v = url;
        this.f19579w = -1L;
        this.f19580x = true;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        boolean z5;
        if (this.f19573e) {
            return;
        }
        if (this.f19580x) {
            TimeUnit timeUnit = TimeUnit.MILLISECONDS;
            byte[] bArr = qs.b.a;
            Intrinsics.checkNotNullParameter(this, "<this>");
            Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
            try {
                z5 = qs.b.t(this, 100);
            } catch (IOException unused) {
                z5 = false;
            }
            if (!z5) {
                ((k) this.f19581y.f636d).k();
                c();
            }
        }
        this.f19573e = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x00ae, code lost:
    
        if (r11.f19580x == false) goto L34;
     */
    @Override // vs.a, okio.Source
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long read(Buffer sink, long j) {
        aj.a aVar = this.f19581y;
        BufferedSource bufferedSource = (BufferedSource) aVar.f637e;
        Intrinsics.checkNotNullParameter(sink, "sink");
        if (j < 0) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("byteCount < 0: ", Long.valueOf(j)).toString());
        }
        if (this.f19573e) {
            throw new IllegalStateException("closed");
        }
        if (this.f19580x) {
            long j5 = this.f19579w;
            if (j5 == 0 || j5 == -1) {
                if (j5 != -1) {
                    bufferedSource.T();
                }
                try {
                    this.f19579w = bufferedSource.i0();
                    String obj = StringsKt.b0(bufferedSource.T()).toString();
                    if (this.f19579w < 0 || (obj.length() > 0 && !x.o(obj, ";", false))) {
                        throw new ProtocolException("expected chunk size and optional extensions but was \"" + this.f19579w + obj + '\"');
                    }
                    if (this.f19579w == 0) {
                        this.f19580x = false;
                        h hVar = (h) aVar.f639g;
                        hVar.getClass();
                        e6 e6Var = new e6();
                        while (true) {
                            String y5 = ((BufferedSource) hVar.f2402i).y(hVar.f2401e);
                            hVar.f2401e -= y5.length();
                            if (y5.length() == 0) {
                                break;
                            }
                            e6Var.b(y5);
                        }
                        aVar.f640h = e6Var.d();
                        OkHttpClient okHttpClient = (OkHttpClient) aVar.f634b;
                        Intrinsics.checkNotNull(okHttpClient);
                        CookieJar cookieJar = okHttpClient.G;
                        Headers headers = (Headers) aVar.f640h;
                        Intrinsics.checkNotNull(headers);
                        us.e.b(cookieJar, this.f19578v, headers);
                        c();
                    }
                } catch (NumberFormatException e9) {
                    throw new ProtocolException(e9.getMessage());
                }
            }
            long read = super.read(sink, Math.min(j, this.f19579w));
            if (read != -1) {
                this.f19579w -= read;
                return read;
            }
            ((k) aVar.f636d).k();
            ProtocolException protocolException = new ProtocolException("unexpected end of stream");
            c();
            throw protocolException;
        }
        return -1L;
    }
}
