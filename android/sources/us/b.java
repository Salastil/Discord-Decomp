package us;

import et.q;
import et.y;
import hc.k;
import java.io.IOException;
import java.net.ProtocolException;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Interceptor;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import ps.t;
import ts.h;

/* loaded from: classes3.dex */
public final class b implements Interceptor {
    public final boolean a;

    public b(boolean z5) {
        this.a = z5;
    }

    /* JADX WARN: Removed duplicated region for block: B:104:0x0234  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0119  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x022c  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0230  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x0168 A[Catch: IOException -> 0x0130, TryCatch #8 {IOException -> 0x0130, blocks: (B:29:0x011a, B:31:0x0123, B:40:0x0132, B:43:0x015f, B:45:0x0168, B:46:0x016f, B:47:0x018d), top: B:28:0x011a }] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01a2  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01d0 A[Catch: IOException -> 0x01b3, TryCatch #4 {IOException -> 0x01b3, blocks: (B:50:0x019e, B:54:0x01a6, B:55:0x01c4, B:57:0x01d0, B:60:0x01dd, B:66:0x01f0, B:71:0x0201, B:74:0x021e, B:75:0x0228, B:77:0x0216, B:78:0x01f7, B:80:0x01b6), top: B:49:0x019e }] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x01ec  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0201 A[Catch: IOException -> 0x01b3, TryCatch #4 {IOException -> 0x01b3, blocks: (B:50:0x019e, B:54:0x01a6, B:55:0x01c4, B:57:0x01d0, B:60:0x01dd, B:66:0x01f0, B:71:0x0201, B:74:0x021e, B:75:0x0228, B:77:0x0216, B:78:0x01f7, B:80:0x01b6), top: B:49:0x019e }] */
    /* JADX WARN: Removed duplicated region for block: B:78:0x01f7 A[Catch: IOException -> 0x01b3, TryCatch #4 {IOException -> 0x01b3, blocks: (B:50:0x019e, B:54:0x01a6, B:55:0x01c4, B:57:0x01d0, B:60:0x01dd, B:66:0x01f0, B:71:0x0201, B:74:0x021e, B:75:0x0228, B:77:0x0216, B:78:0x01f7, B:80:0x01b6), top: B:49:0x019e }] */
    /* JADX WARN: Removed duplicated region for block: B:79:0x01dc  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x0156  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0112  */
    @Override // okhttp3.Interceptor
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Response intercept(Interceptor.Chain chain) {
        t tVar;
        IOException iOException;
        Response response;
        int i5;
        Response a;
        Long l6;
        ResponseBody responseBody;
        h call;
        h call2;
        d dVar;
        d dVar2;
        boolean z5;
        t tVar2;
        Intrinsics.checkNotNullParameter(chain, "chain");
        f fVar = (f) chain;
        k kVar = fVar.f19115d;
        Intrinsics.checkNotNull(kVar);
        Request request = fVar.f19116e;
        RequestBody requestBody = request.f16078d;
        long currentTimeMillis = System.currentTimeMillis();
        boolean z6 = true;
        try {
            call = (h) kVar.f9762i;
            call2 = (h) kVar.f9762i;
            dVar = (d) kVar.f9764w;
            Intrinsics.checkNotNullParameter(request, "request");
        } catch (IOException e9) {
            e = e9;
            tVar = null;
            if (!(e instanceof ws.a)) {
            }
        }
        try {
            Intrinsics.checkNotNullParameter(call, "call");
            dVar.b(request);
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(request, "request");
            if (!tn.g.t(request.f16076b) || requestBody == null) {
                dVar2 = dVar;
                call2.h(kVar, true, false, null);
                tVar = null;
            } else {
                if ("100-continue".equalsIgnoreCase(request.a("Expect"))) {
                    try {
                        dVar.f();
                        tVar = kVar.h(true);
                        try {
                            Intrinsics.checkNotNullParameter(call2, "call");
                            z5 = false;
                        } catch (IOException e10) {
                            e = e10;
                            if (!(e instanceof ws.a)) {
                            }
                        }
                    } catch (IOException ioe) {
                        h call3 = (h) kVar.f9762i;
                        Intrinsics.checkNotNullParameter(call3, "call");
                        Intrinsics.checkNotNullParameter(ioe, "ioe");
                        kVar.i(ioe);
                        throw ioe;
                    }
                } else {
                    z5 = true;
                    tVar = null;
                }
                if (tVar == null) {
                    try {
                        if (requestBody.isDuplex()) {
                            try {
                                dVar.f();
                                requestBody.writeTo(y.c(kVar.e(request, true)));
                            } catch (IOException ioe2) {
                                h call4 = (h) kVar.f9762i;
                                Intrinsics.checkNotNullParameter(call4, "call");
                                Intrinsics.checkNotNullParameter(ioe2, "ioe");
                                kVar.i(ioe2);
                                throw ioe2;
                            }
                        } else {
                            q c6 = y.c(kVar.e(request, false));
                            requestBody.writeTo(c6);
                            c6.close();
                        }
                        tVar2 = tVar;
                        dVar2 = dVar;
                    } catch (IOException e11) {
                        e = e11;
                        z6 = z5;
                        if (!(e instanceof ws.a)) {
                            throw e;
                        }
                        if (!kVar.f9761e) {
                            throw e;
                        }
                        iOException = e;
                        if (tVar == null) {
                        }
                        tVar.getClass();
                        Intrinsics.checkNotNullParameter(request, "request");
                        tVar.a = request;
                        tVar.f16589e = ((ts.k) kVar.f9765x).f18741e;
                        tVar.k = currentTimeMillis;
                        tVar.f16594l = System.currentTimeMillis();
                        response = tVar.a();
                        i5 = response.f16088v;
                        if (i5 != 100) {
                        }
                        t h6 = kVar.h(false);
                        Intrinsics.checkNotNull(h6);
                        if (z6) {
                        }
                        h6.getClass();
                        Intrinsics.checkNotNullParameter(request, "request");
                        h6.a = request;
                        h6.f16589e = ((ts.k) kVar.f9765x).f18741e;
                        h6.k = currentTimeMillis;
                        h6.f16594l = System.currentTimeMillis();
                        response = h6.a();
                        i5 = response.f16088v;
                        Intrinsics.checkNotNullParameter(response, "response");
                        h call5 = (h) kVar.f9762i;
                        Intrinsics.checkNotNullParameter(call5, "call");
                        Intrinsics.checkNotNullParameter(response, "response");
                        if (this.a) {
                        }
                        t i6 = response.i();
                        i6.f16591g = kVar.g(response);
                        a = i6.a();
                        if (!"close".equalsIgnoreCase(a.f16085d.a("Connection"))) {
                        }
                        ((d) kVar.f9764w).e().k();
                        if (i5 != 204) {
                        }
                        responseBody = a.f16091y;
                        if ((responseBody != null ? -1L : responseBody.contentLength()) > 0) {
                        }
                        return a;
                    }
                } else {
                    tVar2 = tVar;
                    dVar2 = dVar;
                    try {
                        call2.h(kVar, true, false, null);
                        if (((ts.k) kVar.f9765x).f18743g == null) {
                            z6 = false;
                        }
                        if (!z6) {
                            dVar2.e().k();
                        }
                    } catch (IOException e12) {
                        e = e12;
                        z6 = z5;
                        tVar = tVar2;
                        if (!(e instanceof ws.a)) {
                        }
                    }
                }
                z6 = z5;
                tVar = tVar2;
            }
            if (requestBody == null || !requestBody.isDuplex()) {
                try {
                    dVar2.a();
                } catch (IOException ioe3) {
                    h call6 = (h) kVar.f9762i;
                    Intrinsics.checkNotNullParameter(call6, "call");
                    Intrinsics.checkNotNullParameter(ioe3, "ioe");
                    kVar.i(ioe3);
                    throw ioe3;
                }
            }
            iOException = null;
            if (tVar == null) {
                try {
                    tVar = kVar.h(false);
                    Intrinsics.checkNotNull(tVar);
                    if (z6) {
                        h call7 = (h) kVar.f9762i;
                        Intrinsics.checkNotNullParameter(call7, "call");
                        z6 = false;
                    }
                } catch (IOException e13) {
                    e = e13;
                    if (iOException != null) {
                    }
                }
            }
            tVar.getClass();
            Intrinsics.checkNotNullParameter(request, "request");
            tVar.a = request;
            tVar.f16589e = ((ts.k) kVar.f9765x).f18741e;
            tVar.k = currentTimeMillis;
            tVar.f16594l = System.currentTimeMillis();
            response = tVar.a();
            i5 = response.f16088v;
            try {
                if (i5 != 100) {
                    if (102 <= i5 && i5 < 200) {
                    }
                    Intrinsics.checkNotNullParameter(response, "response");
                    h call52 = (h) kVar.f9762i;
                    Intrinsics.checkNotNullParameter(call52, "call");
                    Intrinsics.checkNotNullParameter(response, "response");
                    if (this.a || i5 != 101) {
                        t i62 = response.i();
                        i62.f16591g = kVar.g(response);
                        a = i62.a();
                    } else {
                        t i10 = response.i();
                        i10.f16591g = qs.b.f17052c;
                        a = i10.a();
                    }
                    if (!"close".equalsIgnoreCase(a.f16085d.a("Connection"))) {
                        l6 = null;
                        if ("close".equalsIgnoreCase(a.f("Connection", null))) {
                        }
                        if (i5 != 204 || i5 == 205) {
                            responseBody = a.f16091y;
                            if ((responseBody != null ? -1L : responseBody.contentLength()) > 0) {
                                StringBuilder sb2 = new StringBuilder("HTTP ");
                                sb2.append(i5);
                                sb2.append(" had non-zero Content-Length: ");
                                ResponseBody responseBody2 = a.f16091y;
                                sb2.append(responseBody2 == null ? l6 : Long.valueOf(responseBody2.contentLength()));
                                throw new ProtocolException(sb2.toString());
                            }
                        }
                        return a;
                    }
                    l6 = null;
                    ((d) kVar.f9764w).e().k();
                    if (i5 != 204) {
                    }
                    responseBody = a.f16091y;
                    if ((responseBody != null ? -1L : responseBody.contentLength()) > 0) {
                    }
                    return a;
                }
                if (this.a) {
                }
                t i622 = response.i();
                i622.f16591g = kVar.g(response);
                a = i622.a();
                if (!"close".equalsIgnoreCase(a.f16085d.a("Connection"))) {
                }
                ((d) kVar.f9764w).e().k();
                if (i5 != 204) {
                }
                responseBody = a.f16091y;
                if ((responseBody != null ? -1L : responseBody.contentLength()) > 0) {
                }
                return a;
            } catch (IOException e14) {
                e = e14;
                if (iOException != null) {
                    throw e;
                }
                fo.f.a(iOException, e);
                throw iOException;
            }
            t h62 = kVar.h(false);
            Intrinsics.checkNotNull(h62);
            if (z6) {
                h call8 = (h) kVar.f9762i;
                Intrinsics.checkNotNullParameter(call8, "call");
            }
            h62.getClass();
            Intrinsics.checkNotNullParameter(request, "request");
            h62.a = request;
            h62.f16589e = ((ts.k) kVar.f9765x).f18741e;
            h62.k = currentTimeMillis;
            h62.f16594l = System.currentTimeMillis();
            response = h62.a();
            i5 = response.f16088v;
            Intrinsics.checkNotNullParameter(response, "response");
            h call522 = (h) kVar.f9762i;
            Intrinsics.checkNotNullParameter(call522, "call");
            Intrinsics.checkNotNullParameter(response, "response");
        } catch (IOException ioe4) {
            Intrinsics.checkNotNullParameter(call, "call");
            Intrinsics.checkNotNullParameter(ioe4, "ioe");
            kVar.i(ioe4);
            throw ioe4;
        }
    }
}
