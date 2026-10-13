package com.reactnativecommunity.webview;

import a5.s;
import android.webkit.JavascriptInterface;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;

/* loaded from: classes3.dex */
public final class i {
    public j a;

    @JavascriptInterface
    public void postMessage(String str) {
        j jVar = this.a;
        ReactContext reactContext = (ReactContext) jVar.getContext();
        if (jVar.f6646v != null && jVar.f6647w != null) {
            reactContext.runOnUiQueueThread(new com.appsflyer.internal.p(3, jVar, jVar, str, reactContext));
        } else {
            if (jVar.f6647w != null) {
                jVar.post(new s(jVar, jVar, str, 4, false));
                return;
            }
            WritableMap createMap = Arguments.createMap();
            createMap.putString("data", str);
            j.a(jVar, new ol.a(createMap, c.b(jVar), 5));
        }
    }
}
