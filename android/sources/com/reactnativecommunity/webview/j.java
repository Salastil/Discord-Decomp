package com.reactnativecommunity.webview;

import android.annotation.SuppressLint;
import android.view.MotionEvent;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.facebook.react.bridge.CatalystInstance;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.ContentSizeChangeEvent;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.views.scroll.OnScrollDispatchHelper;
import com.facebook.react.views.scroll.ScrollEvent;
import com.facebook.react.views.scroll.ScrollEventType;

/* loaded from: classes3.dex */
public final class j extends WebView implements LifecycleEventListener {
    public static int M;
    public OnScrollDispatchHelper E;
    public boolean F;
    public boolean G;
    public h H;
    public ReadableMap I;
    public ReadableMap J;
    public boolean K;
    public WebChromeClient L;

    /* renamed from: d, reason: collision with root package name */
    public String f6643d;

    /* renamed from: e, reason: collision with root package name */
    public String f6644e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f6645i;

    /* renamed from: v, reason: collision with root package name */
    public String f6646v;

    /* renamed from: w, reason: collision with root package name */
    public k f6647w;

    /* renamed from: x, reason: collision with root package name */
    public CatalystInstance f6648x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f6649y;

    public static void a(WebView webView, Event event) {
        if (event.getViewTag() == -1) {
            p8.a.v("RNCWebViewManager", "Unable to dispatch event: " + event.getName() + "due to RNCWebView not being attached.");
            return;
        }
        UIManager uIManagerForReactTag = UIManagerHelper.getUIManagerForReactTag((ReactContext) webView.getContext(), event.getViewTag());
        if (uIManagerForReactTag != null) {
            uIManagerForReactTag.getEventDispatcher().dispatchEvent(event);
            return;
        }
        p8.a.v("RNCWebViewManager", "Unable to dispatch event: " + event.getName() + "due to RNCWebView not having a valid UIManager.");
    }

    @Override // android.webkit.WebView
    public final void destroy() {
        WebChromeClient webChromeClient = this.L;
        if (webChromeClient != null) {
            webChromeClient.onHideCustomView();
        }
        super.destroy();
    }

    public ReadableMap getAssetLoaderConfig() {
        return this.J;
    }

    public k getRNCWebViewClient() {
        return this.f6647w;
    }

    public ReadableMap getSource() {
        return this.I;
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
        setWebViewClient(null);
        destroy();
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
    }

    @Override // android.webkit.WebView, android.view.View
    public final void onScrollChanged(int i5, int i6, int i10, int i11) {
        super.onScrollChanged(i5, i6, i10, i11);
        if (this.F) {
            if (this.E == null) {
                this.E = new OnScrollDispatchHelper();
            }
            if (this.E.onScrollChanged(i5, i6)) {
                a(this, ScrollEvent.obtain(c.b(this), ScrollEventType.SCROLL, i5, i6, this.E.getXFlingVelocity(), this.E.getYFlingVelocity(), computeHorizontalScrollRange(), computeVerticalScrollRange(), getWidth(), getHeight()));
            }
        }
    }

    @Override // android.webkit.WebView, android.view.View
    public final void onSizeChanged(int i5, int i6, int i10, int i11) {
        super.onSizeChanged(i5, i6, i10, i11);
        if (this.f6649y) {
            a(this, new ContentSizeChangeEvent(c.b(this), i5, i6));
        }
    }

    @Override // android.webkit.WebView, android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.G) {
            requestDisallowInterceptTouchEvent(true);
        }
        return super.onTouchEvent(motionEvent);
    }

    public void setAssetLoaderConfig(ReadableMap readableMap) {
        this.J = readableMap;
    }

    public void setBasicAuthCredential(a aVar) {
        this.f6647w.f6653e = aVar;
    }

    public void setHasScrollEvent(boolean z5) {
        this.F = z5;
    }

    public void setIgnoreErrFailedForThisURL(String str) {
        this.f6647w.f6652d = str;
    }

    public void setInjectedJavaScript(String str) {
        this.f6643d = str;
    }

    public void setInjectedJavaScriptBeforeContentLoaded(String str) {
        this.f6644e = str;
    }

    public void setInjectedJavaScriptBeforeContentLoadedForMainFrameOnly(boolean z5) {
    }

    public void setInjectedJavaScriptForMainFrameOnly(boolean z5) {
    }

    @SuppressLint({"AddJavascriptInterface"})
    public void setMessagingEnabled(boolean z5) {
        if (this.f6645i == z5) {
            return;
        }
        this.f6645i = z5;
        if (!z5) {
            removeJavascriptInterface("ReactNativeWebView");
            return;
        }
        i iVar = new i();
        iVar.a = this;
        addJavascriptInterface(iVar, "ReactNativeWebView");
    }

    public void setMessagingModuleName(String str) {
    }

    public void setNestedScrollEnabled(boolean z5) {
        this.G = z5;
    }

    public void setSendContentSizeChangeEvents(boolean z5) {
        this.f6649y = z5;
    }

    public void setSource(ReadableMap readableMap) {
        this.I = readableMap;
    }

    @Override // android.webkit.WebView
    public void setWebChromeClient(WebChromeClient webChromeClient) {
        this.L = webChromeClient;
        super.setWebChromeClient(webChromeClient);
        if (webChromeClient instanceof g) {
            ((g) webChromeClient).H = this.H;
        }
    }

    public void setWebViewAssetLoader(q3.d dVar) {
        k kVar = this.f6647w;
        if (kVar != null) {
            kVar.f6654f = dVar;
        }
    }

    @Override // android.webkit.WebView
    public void setWebViewClient(WebViewClient webViewClient) {
        super.setWebViewClient(webViewClient);
        if (webViewClient instanceof k) {
            k kVar = (k) webViewClient;
            this.f6647w = kVar;
            kVar.f6651c = this.H;
        }
    }

    public void setWebViewKey(String str) {
        this.f6646v = str;
    }
}
