package hc;

import com.google.android.exoplayer2.PlaybackParameters;
import java.io.IOException;
import java.net.Socket;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;

/* loaded from: classes3.dex */
public final class k implements ke.n {

    /* renamed from: d, reason: collision with root package name */
    public boolean f9760d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f9761e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f9762i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f9763v;

    /* renamed from: w, reason: collision with root package name */
    public Object f9764w;

    /* renamed from: x, reason: collision with root package name */
    public Object f9765x;

    public k(ts.h call, ts.e finder, us.d codec) {
        Intrinsics.checkNotNullParameter(call, "call");
        ps.o eventListener = ps.o.f16572d;
        Intrinsics.checkNotNullParameter(eventListener, "eventListener");
        Intrinsics.checkNotNullParameter(finder, "finder");
        Intrinsics.checkNotNullParameter(codec, "codec");
        this.f9762i = call;
        this.f9763v = finder;
        this.f9764w = codec;
        this.f9765x = codec.e();
    }

    @Override // ke.n
    public long a() {
        if (this.f9760d) {
            return ((io.sentry.android.core.q) this.f9762i).a();
        }
        ke.n nVar = (ke.n) this.f9765x;
        nVar.getClass();
        return nVar.a();
    }

    @Override // ke.n
    public PlaybackParameters b() {
        ke.n nVar = (ke.n) this.f9765x;
        return nVar != null ? nVar.b() : (PlaybackParameters) ((io.sentry.android.core.q) this.f9762i).f11305w;
    }

    public IOException c(boolean z5, boolean z6, IOException ioe) {
        ts.h call = (ts.h) this.f9762i;
        if (ioe != null) {
            i(ioe);
        }
        if (z6) {
            if (ioe != null) {
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(ioe, "ioe");
            } else {
                Intrinsics.checkNotNullParameter(call, "call");
            }
        }
        if (z5) {
            if (ioe != null) {
                Intrinsics.checkNotNullParameter(call, "call");
                Intrinsics.checkNotNullParameter(ioe, "ioe");
            } else {
                Intrinsics.checkNotNullParameter(call, "call");
            }
        }
        return call.h(this, z6, z5, ioe);
    }

    @Override // ke.n
    public void d(PlaybackParameters playbackParameters) {
        ke.n nVar = (ke.n) this.f9765x;
        if (nVar != null) {
            nVar.d(playbackParameters);
            playbackParameters = ((ke.n) this.f9765x).b();
        }
        ((io.sentry.android.core.q) this.f9762i).d(playbackParameters);
    }

    public ts.c e(Request request, boolean z5) {
        Intrinsics.checkNotNullParameter(request, "request");
        this.f9760d = z5;
        RequestBody requestBody = request.f16078d;
        Intrinsics.checkNotNull(requestBody);
        long contentLength = requestBody.contentLength();
        ts.h call = (ts.h) this.f9762i;
        Intrinsics.checkNotNullParameter(call, "call");
        return new ts.c(this, ((us.d) this.f9764w).h(request, contentLength), contentLength);
    }

    public ts.j f() {
        ts.h hVar = (ts.h) this.f9762i;
        if (hVar.G) {
            throw new IllegalStateException("Check failed.");
        }
        hVar.G = true;
        hVar.f18730w.j();
        ts.k e9 = ((us.d) this.f9764w).e();
        e9.getClass();
        Intrinsics.checkNotNullParameter(this, "exchange");
        Socket socket = e9.f18740d;
        Intrinsics.checkNotNull(socket);
        et.r rVar = e9.f18744h;
        Intrinsics.checkNotNull(rVar);
        et.q qVar = e9.f18745i;
        Intrinsics.checkNotNull(qVar);
        socket.setSoTimeout(0);
        e9.k();
        return new ts.j(rVar, qVar, this);
    }

    public us.g g(Response response) {
        us.d dVar = (us.d) this.f9764w;
        Intrinsics.checkNotNullParameter(response, "response");
        try {
            String f2 = response.f("Content-Type", null);
            long g6 = dVar.g(response);
            return new us.g(f2, g6, et.y.d(new ts.d(this, dVar.c(response), g6)));
        } catch (IOException ioe) {
            ts.h call = (ts.h) this.f9762i;
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(ioe, "ioe");
            i(ioe);
            throw ioe;
        }
    }

    public ps.t h(boolean z5) {
        try {
            ps.t d6 = ((us.d) this.f9764w).d(z5);
            if (d6 == null) {
                return d6;
            }
            Intrinsics.checkNotNullParameter(this, "deferredTrailers");
            d6.f16595m = this;
            return d6;
        } catch (IOException ioe) {
            ts.h call = (ts.h) this.f9762i;
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(ioe, "ioe");
            i(ioe);
            throw ioe;
        }
    }

    public void i(IOException iOException) {
        this.f9761e = true;
        ((ts.e) this.f9763v).c(iOException);
        ts.k e9 = ((us.d) this.f9764w).e();
        ts.h call = (ts.h) this.f9762i;
        synchronized (e9) {
            try {
                Intrinsics.checkNotNullParameter(call, "call");
                if (!(iOException instanceof ws.b0)) {
                    if (!(e9.f18743g != null) || (iOException instanceof ws.a)) {
                        e9.j = true;
                        if (e9.f18747m == 0) {
                            ts.k.d(call.f18726d, e9.f18738b, iOException);
                            e9.f18746l++;
                        }
                    }
                } else if (((ws.b0) iOException).f20066d == ws.b.REFUSED_STREAM) {
                    int i5 = e9.f18748n + 1;
                    e9.f18748n = i5;
                    if (i5 > 1) {
                        e9.j = true;
                        e9.f18746l++;
                    }
                } else if (((ws.b0) iOException).f20066d != ws.b.CANCEL || !call.L) {
                    e9.j = true;
                    e9.f18746l++;
                }
            } finally {
            }
        }
    }

    public k(com.google.android.exoplayer2.e eVar, ke.y yVar) {
        this.f9763v = eVar;
        this.f9762i = new io.sentry.android.core.q(yVar);
        this.f9760d = true;
    }
}
