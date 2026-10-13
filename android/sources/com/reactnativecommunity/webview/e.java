package com.reactnativecommunity.webview;

import android.R;
import android.app.Activity;
import android.graphics.Bitmap;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class e extends g {
    public final /* synthetic */ Activity L;
    public final /* synthetic */ int M;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(ReactContext reactContext, WebView webView, Activity activity, int i5) {
        super(reactContext, webView);
        this.L = activity;
        this.M = i5;
    }

    @Override // android.webkit.WebChromeClient
    public final Bitmap getDefaultVideoPoster() {
        return Bitmap.createBitmap(50, 50, Bitmap.Config.ARGB_8888);
    }

    @Override // android.webkit.WebChromeClient
    public final void onHideCustomView() {
        if (this.f6638i == null) {
            return;
        }
        ReactContext reactContext = this.f6636d;
        ViewGroup viewGroup = (ViewGroup) reactContext.getCurrentActivity().findViewById(R.id.content);
        View rootView = viewGroup.getRootView();
        WebView webView = this.f6637e;
        if (rootView != webView.getRootView()) {
            webView.getRootView().setVisibility(0);
        } else {
            webView.setVisibility(0);
        }
        Activity activity = this.L;
        activity.getWindow().clearFlags(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
        viewGroup.removeView(this.f6638i);
        this.f6639v.onCustomViewHidden();
        this.f6638i = null;
        this.f6639v = null;
        activity.setRequestedOrientation(this.M);
        reactContext.removeLifecycleEventListener(this);
    }

    @Override // android.webkit.WebChromeClient
    public final void onShowCustomView(View view, WebChromeClient.CustomViewCallback customViewCallback) {
        if (this.f6638i != null) {
            customViewCallback.onCustomViewHidden();
            return;
        }
        this.f6638i = view;
        this.f6639v = customViewCallback;
        Activity activity = this.L;
        activity.setRequestedOrientation(-1);
        this.f6638i.setSystemUiVisibility(7942);
        activity.getWindow().setFlags(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
        this.f6638i.setBackgroundColor(-16777216);
        ReactContext reactContext = this.f6636d;
        ViewGroup viewGroup = (ViewGroup) reactContext.getCurrentActivity().findViewById(R.id.content);
        viewGroup.addView(this.f6638i, g.K);
        View rootView = viewGroup.getRootView();
        WebView webView = this.f6637e;
        if (rootView != webView.getRootView()) {
            webView.getRootView().setVisibility(8);
        } else {
            webView.setVisibility(8);
        }
        reactContext.addLifecycleEventListener(this);
    }
}
