package com.reactnativecommunity.webview;

import android.app.DownloadManager;
import android.net.Uri;
import android.os.Environment;
import android.util.Log;
import android.webkit.CookieManager;
import android.webkit.DownloadListener;
import android.webkit.URLUtil;
import com.facebook.react.uimanager.ThemedReactContext;
import java.net.MalformedURLException;
import java.net.URL;

/* loaded from: classes3.dex */
public final class d implements DownloadListener {
    public final /* synthetic */ j a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ThemedReactContext f6634b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ RNCWebViewManager f6635c;

    public d(RNCWebViewManager rNCWebViewManager, j jVar, ThemedReactContext themedReactContext) {
        this.f6635c = rNCWebViewManager;
        this.a = jVar;
        this.f6634b = themedReactContext;
    }

    @Override // android.webkit.DownloadListener
    public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        String downloadingMessage;
        String lackPermissionToDownloadMessage;
        String downloadingMessage2;
        this.a.setIgnoreErrFailedForThisURL(str);
        RNCWebViewModule module = RNCWebViewManager.getModule(this.f6634b);
        try {
            DownloadManager.Request request = new DownloadManager.Request(Uri.parse(str));
            String guessFileName = URLUtil.guessFileName(str, str3, str4);
            String k = a3.e.k("Downloading ", guessFileName);
            try {
                URL url = new URL(str);
                request.addRequestHeader("Cookie", CookieManager.getInstance().getCookie(url.getProtocol() + "://" + url.getHost()));
            } catch (MalformedURLException e9) {
                Log.w("RNCWebViewManager", "Error getting cookie for DownloadManager", e9);
            }
            request.addRequestHeader("User-Agent", str2);
            request.setTitle(guessFileName);
            request.setDescription(k);
            request.allowScanningByMediaScanner();
            request.setNotificationVisibility(1);
            request.setDestinationInExternalPublicDir(Environment.DIRECTORY_DOWNLOADS, guessFileName);
            module.setDownloadRequest(request);
            RNCWebViewManager rNCWebViewManager = this.f6635c;
            downloadingMessage = rNCWebViewManager.getDownloadingMessage();
            lackPermissionToDownloadMessage = rNCWebViewManager.getLackPermissionToDownloadMessage();
            if (module.grantFileDownloaderPermissions(downloadingMessage, lackPermissionToDownloadMessage)) {
                downloadingMessage2 = rNCWebViewManager.getDownloadingMessage();
                module.downloadFile(downloadingMessage2);
            }
        } catch (IllegalArgumentException e10) {
            Log.w("RNCWebViewManager", "Unsupported URI, aborting download", e10);
        }
    }
}
