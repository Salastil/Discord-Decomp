package com.reactnativecommunity.webview;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.net.Uri;
import android.net.http.SslError;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.HttpAuthHandler;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.SslErrorHandler;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.dialog.AlertFragment;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URLConnection;
import java.util.Iterator;
import java.util.zip.GZIPInputStream;

/* loaded from: classes3.dex */
public final class k extends WebViewClient {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public ReadableArray f6650b;

    /* renamed from: c, reason: collision with root package name */
    public h f6651c;

    /* renamed from: d, reason: collision with root package name */
    public String f6652d;

    /* renamed from: e, reason: collision with root package name */
    public a f6653e;

    /* renamed from: f, reason: collision with root package name */
    public volatile q3.d f6654f;

    public final WritableMap a(WebView webView, String str) {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("target", c.b(webView));
        createMap.putString("url", str);
        createMap.putBoolean("loading", (this.a || webView.getProgress() == 100) ? false : true);
        createMap.putString(AlertFragment.ARG_TITLE, webView.getTitle());
        createMap.putBoolean("canGoBack", webView.canGoBack());
        createMap.putBoolean("canGoForward", webView.canGoForward());
        return createMap;
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        String str2;
        super.onPageFinished(webView, str);
        if (this.a) {
            return;
        }
        j jVar = (j) webView;
        if (jVar.getSettings().getJavaScriptEnabled() && (str2 = jVar.f6643d) != null && !TextUtils.isEmpty(str2)) {
            jVar.evaluateJavascript("(function() {\n" + jVar.f6643d + ";\n})();", null);
        }
        ol.a aVar = new ol.a(a(webView, str), c.b(webView), 2);
        jVar.getClass();
        j.a(webView, aVar);
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        String str2;
        super.onPageStarted(webView, str, bitmap);
        this.a = false;
        j jVar = (j) webView;
        if (jVar.getSettings().getJavaScriptEnabled() && (str2 = jVar.f6644e) != null && !TextUtils.isEmpty(str2)) {
            jVar.evaluateJavascript("(function() {\n" + jVar.f6644e + ";\n})();", null);
        }
        j.a(webView, new ol.a(a(webView, str), c.b(webView), 4));
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedError(WebView webView, int i5, String str, String str2) {
        String str3 = this.f6652d;
        if (str3 != null && str2.equals(str3) && i5 == -1 && str.equals("net::ERR_FAILED")) {
            this.f6652d = null;
            return;
        }
        super.onReceivedError(webView, i5, str, str2);
        this.a = true;
        ol.a aVar = new ol.a(a(webView, str2), c.b(webView), 2);
        ((j) webView).getClass();
        j.a(webView, aVar);
        WritableMap a = a(webView, str2);
        a.putDouble("code", i5);
        a.putString("description", str);
        j.a(webView, new ol.a(a, c.b(webView), 1));
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedHttpAuthRequest(WebView webView, HttpAuthHandler httpAuthHandler, String str, String str2) {
        a aVar = this.f6653e;
        if (aVar != null) {
            httpAuthHandler.proceed(aVar.a, aVar.f6629b);
        } else {
            super.onReceivedHttpAuthRequest(webView, httpAuthHandler, str, str2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedHttpError(WebView webView, WebResourceRequest webResourceRequest, WebResourceResponse webResourceResponse) {
        super.onReceivedHttpError(webView, webResourceRequest, webResourceResponse);
        if (webResourceRequest.isForMainFrame()) {
            WritableMap a = a(webView, webResourceRequest.getUrl().toString());
            a.putInt("statusCode", webResourceResponse.getStatusCode());
            a.putString("description", webResourceResponse.getReasonPhrase());
            j.a(webView, new ol.a(a, c.b(webView), 0));
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        String url = webView.getUrl();
        String url2 = sslError.getUrl();
        sslErrorHandler.cancel();
        if (url.equalsIgnoreCase(url2)) {
            int primaryError = sslError.getPrimaryError();
            onReceivedError(webView, primaryError, "SSL error: ".concat(primaryError != 0 ? primaryError != 1 ? primaryError != 2 ? primaryError != 3 ? primaryError != 4 ? primaryError != 5 ? "Unknown SSL Error" : "A generic error occurred" : "The date of the certificate is invalid" : "The certificate authority is not trusted" : "Hostname mismatch" : "The certificate has expired" : "The certificate is not yet valid"), url2);
        } else {
            Log.w("RNCWebViewManager", "Resource blocked from loading due to SSL error. Blocked URL: " + url2);
        }
    }

    @Override // android.webkit.WebViewClient
    public final boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
        if (Build.VERSION.SDK_INT < 26) {
            return false;
        }
        super.onRenderProcessGone(webView, renderProcessGoneDetail);
        if (renderProcessGoneDetail.didCrash()) {
            Log.e("RNCWebViewManager", "The WebView rendering process crashed.");
        } else {
            Log.w("RNCWebViewManager", "The WebView rendering process was killed by the system.");
        }
        if (webView == null) {
            return true;
        }
        WritableMap a = a(webView, webView.getUrl());
        a.putBoolean("didCrash", renderProcessGoneDetail.didCrash());
        j.a(webView, new ol.a(a, c.b(webView), 6));
        return true;
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        q3.b bVar;
        String str;
        WebResourceResponse webResourceResponse;
        File file;
        if (this.f6654f == null) {
            return super.shouldInterceptRequest(webView, webResourceRequest);
        }
        q3.d dVar = this.f6654f;
        Uri url = webResourceRequest.getUrl();
        Iterator it = dVar.a.iterator();
        do {
            bVar = null;
            if (!it.hasNext()) {
                return null;
            }
            q3.c cVar = (q3.c) it.next();
            cVar.getClass();
            str = cVar.f16659c;
            if ((!url.getScheme().equals("http") || cVar.a) && ((url.getScheme().equals("http") || url.getScheme().equals("https")) && url.getAuthority().equals(cVar.f16658b) && url.getPath().startsWith(str))) {
                bVar = cVar.f16660d;
            }
        } while (bVar == null);
        String replaceFirst = url.getPath().replaceFirst(str, "");
        switch (bVar.a) {
            case 0:
                try {
                    k2.m mVar = (k2.m) bVar.f16657b;
                    mVar.getClass();
                    String substring = (replaceFirst.length() <= 1 || replaceFirst.charAt(0) != '/') ? replaceFirst : replaceFirst.substring(1);
                    InputStream open = mVar.a.getAssets().open(substring, 2);
                    if (substring.endsWith(".svgz")) {
                        open = new GZIPInputStream(open);
                    }
                    String guessContentTypeFromName = URLConnection.guessContentTypeFromName(replaceFirst);
                    if (guessContentTypeFromName == null) {
                        guessContentTypeFromName = "text/plain";
                    }
                    return new WebResourceResponse(guessContentTypeFromName, null, open);
                } catch (IOException e9) {
                    Log.e("WebViewAssetLoader", "Error opening asset path: " + replaceFirst, e9);
                    webResourceResponse = new WebResourceResponse(null, null, null);
                    break;
                }
                break;
            case 1:
                try {
                    InputStream d6 = ((k2.m) bVar.f16657b).d(replaceFirst);
                    String guessContentTypeFromName2 = URLConnection.guessContentTypeFromName(replaceFirst);
                    if (guessContentTypeFromName2 == null) {
                        guessContentTypeFromName2 = "text/plain";
                    }
                    return new WebResourceResponse(guessContentTypeFromName2, null, d6);
                } catch (Resources.NotFoundException e10) {
                    Log.e("WebViewAssetLoader", "Resource not found from the path: " + replaceFirst, e10);
                    webResourceResponse = new WebResourceResponse(null, null, null);
                    return webResourceResponse;
                } catch (IOException e11) {
                    Log.e("WebViewAssetLoader", "Error opening resource from the path: " + replaceFirst, e11);
                    webResourceResponse = new WebResourceResponse(null, null, null);
                    return webResourceResponse;
                }
            default:
                File file2 = (File) bVar.f16657b;
                try {
                    String c6 = k2.m.c(file2);
                    String canonicalPath = new File(file2, replaceFirst).getCanonicalPath();
                    file = canonicalPath.startsWith(c6) ? new File(canonicalPath) : null;
                } catch (IOException e12) {
                    Log.e("WebViewAssetLoader", "Error opening the requested path: " + replaceFirst, e12);
                }
                if (file == null) {
                    Log.e("WebViewAssetLoader", String.format("The requested file: %s is outside the mounted directory: %s", replaceFirst, file2));
                    return new WebResourceResponse(null, null, null);
                }
                InputStream fileInputStream = new FileInputStream(file);
                if (file.getPath().endsWith(".svgz")) {
                    fileInputStream = new GZIPInputStream(fileInputStream);
                }
                String guessContentTypeFromName3 = URLConnection.guessContentTypeFromName(replaceFirst);
                if (guessContentTypeFromName3 == null) {
                    guessContentTypeFromName3 = "text/plain";
                }
                return new WebResourceResponse(guessContentTypeFromName3, null, fileInputStream);
        }
        return webResourceResponse;
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        p8.a.v("RNCWebViewManager", "Couldn't use blocking synchronous call for onShouldStartLoadWithRequest due to debugging or missing Catalyst instance, falling back to old event-and-load.");
        this.f6651c.a = true;
        ol.a aVar = new ol.a(a(webView, str), c.b(webView), 7);
        ((j) webView).getClass();
        j.a(webView, aVar);
        return true;
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        shouldOverrideUrlLoading(webView, webResourceRequest.getUrl().toString());
        return true;
    }
}
