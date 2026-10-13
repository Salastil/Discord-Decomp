package com.reactnativecommunity.webview;

import android.view.View;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.facebook.react.bridge.ReactContext;

/* loaded from: classes3.dex */
public final class c extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public int f6632d;

    /* renamed from: e, reason: collision with root package name */
    public j f6633e;

    public static int b(WebView webView) {
        if (!((ReactContext) webView.getContext()).isBridgeless()) {
            Integer num = (Integer) l.f6655b.get(Integer.valueOf(webView.getId()));
            if (num == null) {
                return -1;
            }
            return num.intValue();
        }
        View view = (View) webView.getParent();
        if (view != null) {
            return view.getId();
        }
        p8.a.j("RNCWebViewContainer", new Throwable(), "WebView parent is null (bridgeless mode)", new Object[0]);
        return -1;
    }

    public final void a(j jVar) {
        this.f6633e = jVar;
        if (jVar.getParent() != null) {
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder("WebView with key: "), jVar.f6646v, " parent is non null. Cannot re-attach webview."));
        }
        addView(jVar, new FrameLayout.LayoutParams(-1, -1));
    }

    public j getWebView() {
        return this.f6633e;
    }
}
