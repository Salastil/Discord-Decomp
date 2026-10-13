package oc;

import ie.p;
import java.net.UnknownHostException;
import java.nio.ByteBuffer;
import java.util.List;
import java.util.Map;
import ke.d0;
import org.chromium.net.CronetException;
import org.chromium.net.NetworkException;
import org.chromium.net.UrlRequest;
import org.chromium.net.UrlResponseInfo;

/* loaded from: classes3.dex */
public final class d extends UrlRequest.Callback {
    public final /* synthetic */ e a;

    public d(e eVar) {
        this.a = eVar;
    }

    @Override // org.chromium.net.UrlRequest.Callback
    public final synchronized void onFailed(UrlRequest urlRequest, UrlResponseInfo urlResponseInfo, CronetException cronetException) {
        try {
            if (urlRequest != this.a.N) {
                return;
            }
            if ((cronetException instanceof NetworkException) && ((NetworkException) cronetException).getErrorCode() == 1) {
                this.a.R = new UnknownHostException();
            } else {
                this.a.R = cronetException;
            }
            this.a.J.q();
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // org.chromium.net.UrlRequest.Callback
    public final synchronized void onReadCompleted(UrlRequest urlRequest, UrlResponseInfo urlResponseInfo, ByteBuffer byteBuffer) {
        e eVar = this.a;
        if (urlRequest != eVar.N) {
            return;
        }
        eVar.J.q();
    }

    @Override // org.chromium.net.UrlRequest.Callback
    public final synchronized void onRedirectReceived(UrlRequest urlRequest, UrlResponseInfo urlResponseInfo, String str) {
        UrlRequest urlRequest2 = this.a.N;
        if (urlRequest != urlRequest2) {
            return;
        }
        urlRequest2.getClass();
        p pVar = this.a.O;
        pVar.getClass();
        int httpStatusCode = urlResponseInfo.getHttpStatusCode();
        if (pVar.f10712c != 2 || (httpStatusCode != 307 && httpStatusCode != 308)) {
            urlRequest.followRedirect();
            return;
        }
        e eVar = this.a;
        urlResponseInfo.getHttpStatusText();
        Map<String, List<String>> allHeaders = urlResponseInfo.getAllHeaders();
        int i5 = d0.a;
        eVar.R = new ie.d0(httpStatusCode, null, allHeaders);
        this.a.J.q();
    }

    @Override // org.chromium.net.UrlRequest.Callback
    public final synchronized void onResponseStarted(UrlRequest urlRequest, UrlResponseInfo urlResponseInfo) {
        e eVar = this.a;
        if (urlRequest != eVar.N) {
            return;
        }
        eVar.Q = urlResponseInfo;
        eVar.J.q();
    }

    @Override // org.chromium.net.UrlRequest.Callback
    public final synchronized void onSucceeded(UrlRequest urlRequest, UrlResponseInfo urlResponseInfo) {
        e eVar = this.a;
        if (urlRequest != eVar.N) {
            return;
        }
        eVar.S = true;
        eVar.J.q();
    }
}
