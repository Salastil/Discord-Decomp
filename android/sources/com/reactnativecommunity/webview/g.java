package com.reactnativecommunity.webview;

import android.content.ComponentCallbacks2;
import android.os.Message;
import android.view.View;
import android.webkit.ConsoleMessage;
import android.webkit.GeolocationPermissions;
import android.webkit.PermissionRequest;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.modules.core.PermissionAwareActivity;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class g extends WebChromeClient implements LifecycleEventListener {
    public static final FrameLayout.LayoutParams K = new FrameLayout.LayoutParams(-1, -1, 17);
    public String E;
    public boolean F = false;
    public final ArrayList G = new ArrayList();
    public h H = null;
    public boolean I = false;
    public final app.rive.runtime.kotlin.core.a J = new app.rive.runtime.kotlin.core.a(21, this);

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f6636d;

    /* renamed from: e, reason: collision with root package name */
    public final WebView f6637e;

    /* renamed from: i, reason: collision with root package name */
    public View f6638i;

    /* renamed from: v, reason: collision with root package name */
    public WebChromeClient.CustomViewCallback f6639v;

    /* renamed from: w, reason: collision with root package name */
    public PermissionRequest f6640w;

    /* renamed from: x, reason: collision with root package name */
    public ArrayList f6641x;

    /* renamed from: y, reason: collision with root package name */
    public GeolocationPermissions.Callback f6642y;

    public g(ReactContext reactContext, WebView webView) {
        this.f6636d = reactContext;
        this.f6637e = webView;
    }

    public final synchronized void a(List list) {
        if (this.F) {
            this.G.addAll(list);
            return;
        }
        ComponentCallbacks2 currentActivity = this.f6636d.getCurrentActivity();
        if (currentActivity == null) {
            throw new IllegalStateException("Tried to use permissions API while not attached to an Activity.");
        }
        if (!(currentActivity instanceof PermissionAwareActivity)) {
            throw new IllegalStateException("Tried to use permissions API but the host Activity doesn't implement PermissionAwareActivity.");
        }
        this.F = true;
        ((PermissionAwareActivity) currentActivity).requestPermissions((String[]) list.toArray(new String[0]), 3, this.J);
        this.G.clear();
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onConsoleMessage(ConsoleMessage consoleMessage) {
        if (ReactBuildConfig.DEBUG) {
            return super.onConsoleMessage(consoleMessage);
        }
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onCreateWindow(WebView webView, boolean z5, boolean z6, Message message) {
        ((WebView.WebViewTransport) message.obj).setWebView(new WebView(webView.getContext()));
        message.sendToTarget();
        return true;
    }

    @Override // android.webkit.WebChromeClient
    public final void onGeolocationPermissionsShowPrompt(String str, GeolocationPermissions.Callback callback) {
        if (y0.b.a(this.f6636d, "android.permission.ACCESS_FINE_LOCATION") == 0) {
            callback.invoke(str, true, false);
            return;
        }
        this.f6642y = callback;
        this.E = str;
        a(Collections.singletonList("android.permission.ACCESS_FINE_LOCATION"));
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        View view = this.f6638i;
        if (view == null || view.getSystemUiVisibility() == 7942) {
            return;
        }
        this.f6638i.setSystemUiVisibility(7942);
    }

    @Override // android.webkit.WebChromeClient
    public final void onPermissionRequest(PermissionRequest permissionRequest) {
        this.f6641x = new ArrayList();
        ArrayList arrayList = new ArrayList();
        String[] resources = permissionRequest.getResources();
        int length = resources.length;
        int i5 = 0;
        while (true) {
            String str = null;
            if (i5 >= length) {
                break;
            }
            String str2 = resources[i5];
            if (str2.equals("android.webkit.resource.AUDIO_CAPTURE")) {
                str = "android.permission.RECORD_AUDIO";
            } else if (str2.equals("android.webkit.resource.VIDEO_CAPTURE")) {
                str = "android.permission.CAMERA";
            } else if (str2.equals("android.webkit.resource.PROTECTED_MEDIA_ID")) {
                if (this.I) {
                    this.f6641x.add(str2);
                } else {
                    str = "android.webkit.resource.PROTECTED_MEDIA_ID";
                }
            }
            if (str != null) {
                if (y0.b.a(this.f6636d, str) == 0) {
                    this.f6641x.add(str2);
                } else {
                    arrayList.add(str);
                }
            }
            i5++;
        }
        if (arrayList.isEmpty()) {
            permissionRequest.grant((String[]) this.f6641x.toArray(new String[0]));
            this.f6641x = null;
        } else {
            this.f6640w = permissionRequest;
            a(arrayList);
        }
    }

    @Override // android.webkit.WebChromeClient
    public final void onProgressChanged(WebView webView, int i5) {
        super.onProgressChanged(webView, i5);
        String url = webView.getUrl();
        if (this.H.a) {
            return;
        }
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("target", c.b(webView));
        createMap.putString(AlertFragment.ARG_TITLE, webView.getTitle());
        createMap.putString("url", url);
        createMap.putBoolean("canGoBack", webView.canGoBack());
        createMap.putBoolean("canGoForward", webView.canGoForward());
        createMap.putDouble(ReactProgressBarViewManager.PROP_PROGRESS, i5 / 100.0f);
        j.a(webView, new ol.a(createMap, c.b(webView), 3));
    }

    @Override // android.webkit.WebChromeClient
    public final boolean onShowFileChooser(WebView webView, ValueCallback valueCallback, WebChromeClient.FileChooserParams fileChooserParams) {
        return RNCWebViewManager.getModule(this.f6636d).startPhotoPickerIntent(valueCallback, fileChooserParams.getAcceptTypes(), fileChooserParams.getMode() == 1);
    }
}
