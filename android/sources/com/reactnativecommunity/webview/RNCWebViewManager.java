package com.reactnativecommunity.webview;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.CookieManager;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import androidx.annotation.NonNull;
import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.common.MapBuilder;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.SimpleViewManager;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerModule;
import com.facebook.react.uimanager.annotations.ReactProp;
import com.facebook.react.views.scroll.ReactScrollViewHelper;
import com.facebook.react.views.scroll.ScrollEventType;
import com.google.firebase.messaging.s;
import java.io.File;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import org.chromium.support_lib_boundary.WebSettingsBoundaryInterface;
import org.chromium.support_lib_boundary.WebkitToCompatConverterBoundaryInterface;
import org.json.JSONException;
import org.json.JSONObject;

@ReactModule(name = RNCWebViewManager.REACT_CLASS)
/* loaded from: classes3.dex */
public class RNCWebViewManager extends SimpleViewManager<c> {
    protected static final String BLANK_URL = "about:blank";
    public static final int COMMAND_CLEAR_CACHE = 1001;
    public static final int COMMAND_CLEAR_FORM_DATA = 1000;
    public static final int COMMAND_CLEAR_HISTORY = 1002;
    public static final int COMMAND_FOCUS = 8;
    public static final int COMMAND_GO_BACK = 1;
    public static final int COMMAND_GO_FORWARD = 2;
    public static final int COMMAND_INJECT_JAVASCRIPT = 6;
    public static final int COMMAND_LOAD_URL = 7;
    public static final int COMMAND_POST_MESSAGE = 5;
    public static final int COMMAND_RELEASE = 4001;
    public static final int COMMAND_RELOAD = 3;
    public static final int COMMAND_STOP_LOADING = 4;
    protected static final String DEFAULT_DOWNLOADING_MESSAGE = "Downloading";
    protected static final String DEFAULT_LACK_PERMISSION_TO_DOWNLOAD_MESSAGE = "Cannot download files as permission was denied. Please provide permission to write to storage, in order to download files.";
    protected static final String HTML_ENCODING = "UTF-8";
    protected static final String HTML_MIME_TYPE = "text/html";
    protected static final String HTTP_METHOD_POST = "POST";
    protected static final String JAVASCRIPT_INTERFACE = "ReactNativeWebView";
    protected static final String REACT_CLASS = "RNCWebViewContainer";
    protected static final int SHOULD_OVERRIDE_URL_LOADING_TIMEOUT = 250;
    private static final String TAG = "RNCWebViewManager";
    Set<String> assetLoaderHandlerTypes;
    protected boolean mAllowsFullscreenVideo;
    protected boolean mAllowsProtectedMedia;
    protected String mDownloadingMessage;
    protected String mLackPermissionToDownloadMessage;
    protected String mUserAgent;
    protected String mUserAgentWithApplicationName;
    protected g mWebChromeClient;
    protected p mWebViewConfig;

    public RNCWebViewManager() {
        this.mWebChromeClient = null;
        this.mAllowsFullscreenVideo = false;
        this.mAllowsProtectedMedia = false;
        this.mUserAgent = null;
        this.mUserAgentWithApplicationName = null;
        this.mDownloadingMessage = null;
        this.mLackPermissionToDownloadMessage = null;
        this.assetLoaderHandlerTypes = new HashSet(Arrays.asList("assets", "internal", "resources"));
        this.mWebViewConfig = new wi.d(4);
    }

    private q3.d buildAssetLoader(c cVar, ReadableMap readableMap) {
        ArrayList arrayList = new ArrayList();
        String string = readableMap.getString("domain");
        if (string == null) {
            string = "appassets.androidplatform.net";
        }
        boolean z5 = readableMap.hasKey("httpAllowed") ? readableMap.getBoolean("httpAllowed") : false;
        ReadableArray array = readableMap.getArray("pathHandlers");
        if (array == null || array.size() <= 0) {
            p8.a.v(TAG, "WebViewAssetLoader error. No Path Handlers found.");
        } else {
            for (int i5 = 0; i5 < array.size(); i5++) {
                ReadableMap map = array.getMap(i5);
                String string2 = map.getString("type");
                if (string2 == null) {
                    p8.a.v(TAG, "WebViewAssetLoader error. Path Handler type is null.");
                } else if (this.assetLoaderHandlerTypes.contains(string2)) {
                    String string3 = map.getString("path");
                    if (string3 == null) {
                        p8.a.v(TAG, "WebViewAssetLoader error. Skipping Path Handler. Handler path is missing");
                    } else if (string2.equals("resources")) {
                        Context context = cVar.getContext();
                        q3.b bVar = new q3.b(1);
                        bVar.f16657b = new k2.m(context, 2);
                        arrayList.add(new q3.c(string, string3, z5, bVar));
                    } else if (string2.equals("assets")) {
                        Context context2 = cVar.getContext();
                        q3.b bVar2 = new q3.b(0);
                        bVar2.f16657b = new k2.m(context2, 2);
                        arrayList.add(new q3.c(string, string3, z5, bVar2));
                    } else if (string2.equals("internal")) {
                        String string4 = map.getString("directory");
                        if (string4 == null) {
                            p8.a.v(TAG, "WebViewAssetLoader error. Skipping Path Handler. Directory is missing for internal handler path");
                        } else {
                            arrayList.add(new q3.c(string, string3, z5, new q3.b(cVar.getContext(), new File(string4))));
                        }
                    }
                } else {
                    StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("WebViewAssetLoader error. Skipping Path Handler. Unexpected handler type: ", string2, ". Path Handler type must be one of ");
                    m5.append(this.assetLoaderHandlerTypes);
                    p8.a.v(TAG, m5.toString());
                }
            }
        }
        return new q3.d(arrayList);
    }

    private static void doLoad(j jVar, ReadableMap readableMap) {
        byte[] bArr;
        if (readableMap == null) {
            jVar.loadUrl(BLANK_URL);
            return;
        }
        if (readableMap.hasKey("html")) {
            jVar.loadDataWithBaseURL(readableMap.hasKey("baseUrl") ? readableMap.getString("baseUrl") : "", readableMap.getString("html"), HTML_MIME_TYPE, HTML_ENCODING, null);
            return;
        }
        if (!readableMap.hasKey("uri")) {
            jVar.loadUrl(BLANK_URL);
            return;
        }
        String string = readableMap.getString("uri");
        if (readableMap.hasKey("method") && readableMap.getString("method").equalsIgnoreCase(HTTP_METHOD_POST)) {
            if (readableMap.hasKey("body")) {
                String string2 = readableMap.getString("body");
                try {
                    bArr = string2.getBytes(HTML_ENCODING);
                } catch (UnsupportedEncodingException unused) {
                    bArr = string2.getBytes();
                }
            } else {
                bArr = null;
            }
            if (bArr == null) {
                bArr = new byte[0];
            }
            jVar.postUrl(string, bArr);
            return;
        }
        HashMap hashMap = new HashMap();
        if (readableMap.hasKey("headers")) {
            ReadableMap map = readableMap.getMap("headers");
            ReadableMapKeySetIterator keySetIterator = map.keySetIterator();
            while (keySetIterator.hasNextKey()) {
                String nextKey = keySetIterator.nextKey();
                if (!"user-agent".equals(nextKey.toLowerCase(Locale.ENGLISH))) {
                    hashMap.put(nextKey, map.getString(nextKey));
                } else if (jVar.getSettings() != null) {
                    jVar.getSettings().setUserAgentString(map.getString(nextKey));
                }
            }
        }
        jVar.loadUrl(string, hashMap);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getDownloadingMessage() {
        String str = this.mDownloadingMessage;
        return str == null ? DEFAULT_DOWNLOADING_MESSAGE : str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getLackPermissionToDownloadMessage() {
        return this.mDownloadingMessage == null ? DEFAULT_LACK_PERMISSION_TO_DOWNLOAD_MESSAGE : this.mLackPermissionToDownloadMessage;
    }

    public static RNCWebViewModule getModule(ReactContext reactContext) {
        return (RNCWebViewModule) reactContext.getNativeModule(RNCWebViewModule.class);
    }

    private static void lambda$addEventEmitters$45(j jVar) {
        k kVar = new k();
        kVar.a = false;
        kVar.f6651c = null;
        kVar.f6652d = null;
        kVar.f6653e = null;
        jVar.setWebViewClient(kVar);
    }

    private void lambda$onDropViewInstance$47(c cVar, j jVar) {
        if (jVar.f6646v == null) {
            ((ThemedReactContext) jVar.getContext()).removeLifecycleEventListener(jVar);
            jVar.setWebViewClient(null);
            jVar.destroy();
            this.mWebChromeClient = null;
            return;
        }
        j jVar2 = cVar.f6633e;
        if (jVar2 != null) {
            cVar.endViewTransition(jVar2);
            cVar.removeView(cVar.f6633e);
        }
        l.f6655b.remove(Integer.valueOf(jVar.getId()));
        if (cVar.f6632d != 0) {
            ViewGroup viewGroup = (ViewGroup) ((UIManagerModule) ((ReactContext) cVar.getContext()).getNativeModule(UIManagerModule.class)).resolveView(cVar.f6632d);
            viewGroup.addView(jVar);
            jVar.measure(View.MeasureSpec.makeMeasureSpec(viewGroup.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(viewGroup.getMeasuredHeight(), 1073741824));
            jVar.layout(0, 0, jVar.getMeasuredWidth(), jVar.getMeasuredHeight());
        }
    }

    private static void lambda$receiveCommand$46(String str, ReadableArray readableArray, j jVar) {
        boolean z5 = false;
        switch (str.hashCode()) {
            case -1241591313:
                if (str.equals("goBack")) {
                    jVar.goBack();
                    return;
                }
                return;
            case -948122918:
                if (str.equals("stopLoading")) {
                    jVar.stopLoading();
                    return;
                }
                return;
            case -934641255:
                if (str.equals("reload")) {
                    jVar.reload();
                    return;
                }
                return;
            case -759238347:
                if (str.equals("clearCache")) {
                    if (readableArray != null && readableArray.getBoolean(0)) {
                        z5 = true;
                    }
                    jVar.clearCache(z5);
                    return;
                }
                return;
            case -318289731:
                if (str.equals("goForward")) {
                    jVar.goForward();
                    return;
                }
                return;
            case -265032709:
                if (str.equals("clearFormData")) {
                    jVar.clearFormData();
                    return;
                }
                return;
            case 336631465:
                if (str.equals("loadUrl")) {
                    if (readableArray == null) {
                        throw new RuntimeException("Arguments for loading an url are null!");
                    }
                    jVar.H.a = false;
                    jVar.loadUrl(readableArray.getString(0));
                    return;
                }
                return;
            case 903120263:
                if (str.equals("clearHistory")) {
                    jVar.clearHistory();
                    return;
                }
                return;
            case 1090594823:
                str.equals("release");
                return;
            case 1280029577:
                if (str.equals("requestFocus")) {
                    jVar.requestFocus();
                    return;
                }
                return;
            case 1490029383:
                if (str.equals("postMessage")) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("data", readableArray.getString(0));
                        jVar.evaluateJavascript("(function () {var event;var data = " + jSONObject.toString() + ";try {event = new MessageEvent('message', data);} catch (e) {event = document.createEvent('MessageEvent');event.initMessageEvent('message', true, true, data.data, data.origin, data.lastEventId, data.source);}document.dispatchEvent(event);})();", null);
                        return;
                    } catch (JSONException e9) {
                        throw new RuntimeException(e9);
                    }
                }
                return;
            case 2104576510:
                if (str.equals("injectJavaScript")) {
                    jVar.evaluateJavascript(readableArray.getString(0), null);
                    return;
                }
                return;
            default:
                return;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$scheduleLoad$31(j jVar) {
        jVar.K = false;
        doLoad(jVar, jVar.getSource());
    }

    private static /* synthetic */ void lambda$setAllowFileAccess$39(Boolean bool, j jVar) {
        jVar.getSettings().setAllowFileAccess(bool != null && bool.booleanValue());
    }

    private static /* synthetic */ void lambda$setAllowFileAccessFromFileURLs$20(boolean z5, j jVar) {
        jVar.getSettings().setAllowFileAccessFromFileURLs(z5);
    }

    private static /* synthetic */ void lambda$setAllowUniversalAccessFromFileURLs$21(boolean z5, j jVar) {
        jVar.getSettings().setAllowUniversalAccessFromFileURLs(z5);
    }

    private /* synthetic */ void lambda$setAllowsFullscreenVideo$38(c cVar, j jVar) {
        setupWebChromeClient((ReactContext) cVar.getContext(), jVar);
    }

    private static void lambda$setAllowsProtectedMedia$44(boolean z5, j jVar) {
        WebChromeClient webChromeClient = jVar.getWebChromeClient();
        if (webChromeClient == null || !(webChromeClient instanceof g)) {
            return;
        }
        ((g) webChromeClient).I = z5;
    }

    private void lambda$setAssetLoaderConfig$11(ReadableMap readableMap, c cVar, j jVar) {
        ReadableMap readableMap2 = jVar.J;
        if ((readableMap2 == null && readableMap == null) ? false : (readableMap2 == null || readableMap == null) ? true : !readableMap2.toHashMap().equals(readableMap.toHashMap())) {
            jVar.setAssetLoaderConfig(readableMap);
            jVar.setWebViewAssetLoader(readableMap != null ? buildAssetLoader(cVar, readableMap) : null);
            scheduleLoad(jVar);
        }
    }

    private static void lambda$setBasicAuthCredential$32(ReadableMap readableMap, j jVar) {
        a aVar;
        if (readableMap != null && readableMap.hasKey(NotificationRenderer.USERNAME) && readableMap.hasKey("password")) {
            String string = readableMap.getString(NotificationRenderer.USERNAME);
            String string2 = readableMap.getString("password");
            aVar = new a();
            aVar.a = string;
            aVar.f6629b = string2;
        } else {
            aVar = null;
        }
        jVar.setBasicAuthCredential(aVar);
    }

    private static /* synthetic */ void lambda$setBuiltInZoomControls$1(boolean z5, j jVar) {
        jVar.getSettings().setBuiltInZoomControls(z5);
    }

    private static /* synthetic */ void lambda$setCacheEnabled$7(boolean z5, j jVar) {
        jVar.getSettings().setCacheMode(z5 ? -1 : 2);
    }

    private static /* synthetic */ void lambda$setCacheMode$8(Integer num, j jVar) {
        jVar.getSettings().setCacheMode(num.intValue());
    }

    private static /* synthetic */ void lambda$setDisplayZoomControls$2(boolean z5, j jVar) {
        jVar.getSettings().setDisplayZoomControls(z5);
    }

    private static /* synthetic */ void lambda$setDomStorageEnabled$17(boolean z5, j jVar) {
        jVar.getSettings().setDomStorageEnabled(z5);
    }

    private static void lambda$setForceDarkOn$42(boolean z5, j jVar) {
        if (Build.VERSION.SDK_INT > 28) {
            if (nt.a.A("FORCE_DARK")) {
                int i5 = z5 ? 2 : 0;
                WebSettings settings = jVar.getSettings();
                if (!r3.c.f17119v.a()) {
                    throw new UnsupportedOperationException("This method is not supported by the current version of the framework and the current WebView APK");
                }
                ((WebSettingsBoundaryInterface) nt.a.e(WebSettingsBoundaryInterface.class, ((WebkitToCompatConverterBoundaryInterface) r3.d.a.f16831e).convertSettings(settings))).setForceDark(i5);
            }
            if (z5 && nt.a.A("FORCE_DARK_STRATEGY")) {
                WebSettings settings2 = jVar.getSettings();
                if (!r3.c.f17120w.a()) {
                    throw new UnsupportedOperationException("This method is not supported by the current version of the framework and the current WebView APK");
                }
                ((WebSettingsBoundaryInterface) nt.a.e(WebSettingsBoundaryInterface.class, ((WebkitToCompatConverterBoundaryInterface) r3.d.a.f16831e).convertSettings(settings2))).setForceDarkBehavior(2);
            }
        }
    }

    private static /* synthetic */ void lambda$setGeolocationEnabled$40(Boolean bool, j jVar) {
        jVar.getSettings().setGeolocationEnabled(bool != null && bool.booleanValue());
    }

    private static /* synthetic */ void lambda$setIncognito$29(j jVar) {
        jVar.getSettings().setCacheMode(2);
        jVar.clearHistory();
        jVar.clearCache(true);
        jVar.clearFormData();
        jVar.getSettings().setSavePassword(false);
        jVar.getSettings().setSaveFormData(false);
    }

    private static /* synthetic */ void lambda$setJavaScriptCanOpenWindowsAutomatically$19(boolean z5, j jVar) {
        jVar.getSettings().setJavaScriptCanOpenWindowsAutomatically(z5);
    }

    private static /* synthetic */ void lambda$setJavaScriptEnabled$0(boolean z5, j jVar) {
        jVar.getSettings().setJavaScriptEnabled(z5);
    }

    private static /* synthetic */ void lambda$setMediaPlaybackRequiresUserAction$18(boolean z5, j jVar) {
        jVar.getSettings().setMediaPlaybackRequiresUserGesture(z5);
    }

    private static /* synthetic */ void lambda$setMinimumFontSize$43(int i5, j jVar) {
        jVar.getSettings().setMinimumFontSize(i5);
    }

    private static /* synthetic */ void lambda$setMixedContentMode$34(j jVar) {
        jVar.getSettings().setMixedContentMode(1);
    }

    private static /* synthetic */ void lambda$setMixedContentMode$35(j jVar) {
        jVar.getSettings().setMixedContentMode(0);
    }

    private static /* synthetic */ void lambda$setMixedContentMode$36(j jVar) {
        jVar.getSettings().setMixedContentMode(2);
    }

    private static /* synthetic */ void lambda$setOverScrollMode$12(Integer num, j jVar) {
        jVar.setOverScrollMode(num.intValue());
    }

    private static /* synthetic */ void lambda$setSaveFormDataDisabled$22(boolean z5, j jVar) {
        jVar.getSettings().setSaveFormData(!z5);
    }

    private static /* synthetic */ void lambda$setScalesPageToFit$16(boolean z5, j jVar) {
        jVar.getSettings().setLoadWithOverviewMode(z5);
        jVar.getSettings().setUseWideViewPort(z5);
    }

    private static void lambda$setSource$30(ReadableMap readableMap, j jVar) {
        ReadableMap readableMap2 = jVar.I;
        int i5 = 0;
        if (readableMap2 != null || readableMap != null) {
            if (readableMap2 != null && readableMap != null) {
                String[] strArr = {"uri", "method", "body", "html", "baseUrl"};
                while (i5 < 5) {
                    String str = strArr[i5];
                    String string = jVar.I.getString(str);
                    String string2 = readableMap.getString(str);
                    if (string2 == null || string2.equals(string)) {
                        i5++;
                    }
                }
                ReadableMap map = jVar.I.getMap("headers");
                ReadableMap map2 = readableMap.getMap("headers");
                i5 = !(map == null ? Collections.EMPTY_MAP : map.toHashMap()).equals(map2 == null ? Collections.EMPTY_MAP : map2.toHashMap()) ? 1 : 0;
            }
            i5 = 1;
            break;
        }
        if (i5 == 0) {
            return;
        }
        jVar.setSource(readableMap);
        scheduleLoad(jVar);
    }

    private static /* synthetic */ void lambda$setSupportMultipleWindows$3(boolean z5, j jVar) {
        jVar.getSettings().setSupportMultipleWindows(z5);
    }

    private static /* synthetic */ void lambda$setTextZoom$15(int i5, j jVar) {
        jVar.getSettings().setTextZoom(i5);
    }

    private static /* synthetic */ void lambda$setThirdPartyCookiesEnabled$14(boolean z5, j jVar) {
        CookieManager.getInstance().setAcceptThirdPartyCookies(jVar, z5);
    }

    private static void lambda$setUrlPrefixesForDefaultIntent$37(ReadableArray readableArray, j jVar) {
        k rNCWebViewClient = jVar.getRNCWebViewClient();
        if (rNCWebViewClient == null || readableArray == null) {
            return;
        }
        rNCWebViewClient.f6650b = readableArray;
    }

    private static void lambda$setWebViewKey$4(String str, c cVar, Map map, j jVar) {
        jVar.setWebViewKey(str);
        l.f6655b.put(Integer.valueOf(jVar.getId()), Integer.valueOf(cVar.getId()));
        map.put(str, jVar);
    }

    private static void scheduleLoad(j jVar) {
        if (jVar.K) {
            return;
        }
        jVar.K = true;
        jVar.post(new s(2, jVar));
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void addEventEmitters(ThemedReactContext themedReactContext, c cVar) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$addEventEmitters$45(jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    public j createRNCWebViewInstance(ThemedReactContext themedReactContext) {
        j jVar = new j(themedReactContext);
        jVar.f6645i = false;
        jVar.f6649y = false;
        jVar.F = false;
        jVar.G = false;
        int i5 = j.M + 1;
        j.M = i5;
        jVar.setId(i5);
        ReactContext reactContext = (ReactContext) jVar.getContext();
        if (reactContext != null) {
            jVar.f6648x = reactContext.getCatalystInstance();
        }
        h hVar = new h();
        hVar.a = false;
        jVar.H = hVar;
        jVar.setBackgroundColor(0);
        return jVar;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Map<String, Integer> getCommandsMap() {
        return MapBuilder.builder().put("goBack", 1).put("goForward", 2).put("reload", 3).put("stopLoading", 4).put("postMessage", 5).put("injectJavaScript", 6).put("loadUrl", 7).put("requestFocus", 8).put("clearFormData", 1000).put("clearCache", Integer.valueOf(COMMAND_CLEAR_CACHE)).put("clearHistory", Integer.valueOf(COMMAND_CLEAR_HISTORY)).put("release", Integer.valueOf(COMMAND_RELEASE)).build();
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public Map getExportedCustomDirectEventTypeConstants() {
        Map<String, Object> exportedCustomDirectEventTypeConstants = super.getExportedCustomDirectEventTypeConstants();
        if (exportedCustomDirectEventTypeConstants == null) {
            exportedCustomDirectEventTypeConstants = MapBuilder.newHashMap();
        }
        exportedCustomDirectEventTypeConstants.put("topLoadingStart", MapBuilder.of("registrationName", "onLoadingStart"));
        exportedCustomDirectEventTypeConstants.put("topLoadingFinish", MapBuilder.of("registrationName", "onLoadingFinish"));
        exportedCustomDirectEventTypeConstants.put("topLoadingError", MapBuilder.of("registrationName", "onLoadingError"));
        exportedCustomDirectEventTypeConstants.put("topMessage", MapBuilder.of("registrationName", "onMessage"));
        exportedCustomDirectEventTypeConstants.put("topLoadingProgress", MapBuilder.of("registrationName", "onLoadingProgress"));
        exportedCustomDirectEventTypeConstants.put("topShouldStartLoadWithRequest", MapBuilder.of("registrationName", "onShouldStartLoadWithRequest"));
        exportedCustomDirectEventTypeConstants.put(ScrollEventType.getJSEventName(ScrollEventType.SCROLL), MapBuilder.of("registrationName", "onScroll"));
        exportedCustomDirectEventTypeConstants.put("topHttpError", MapBuilder.of("registrationName", "onHttpError"));
        exportedCustomDirectEventTypeConstants.put("topRenderProcessGone", MapBuilder.of("registrationName", "onRenderProcessGone"));
        return exportedCustomDirectEventTypeConstants;
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public void receiveCommand(@NonNull c cVar, String str, ReadableArray readableArray) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$receiveCommand$46(str, readableArray, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
        super.receiveCommand((RNCWebViewManager) cVar, str, readableArray);
    }

    @ReactProp(name = "allowFileAccess")
    public void setAllowFileAccess(c cVar, Boolean bool) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setAllowFileAccess$39(bool, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "allowFileAccessFromFileURLs")
    public void setAllowFileAccessFromFileURLs(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setAllowFileAccessFromFileURLs$20(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "allowUniversalAccessFromFileURLs")
    public void setAllowUniversalAccessFromFileURLs(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setAllowUniversalAccessFromFileURLs$21(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "allowsFullscreenVideo")
    public void setAllowsFullscreenVideo(c cVar, Boolean bool) {
        this.mAllowsFullscreenVideo = bool != null && bool.booleanValue();
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setAllowsFullscreenVideo$38(cVar, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "allowsProtectedMedia")
    public void setAllowsProtectedMedia(c cVar, boolean z5) {
        this.mAllowsProtectedMedia = z5;
        if (Build.VERSION.SDK_INT >= 26) {
            j jVar = cVar.f6633e;
            if (jVar != null) {
                lambda$setAllowsProtectedMedia$44(z5, jVar);
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
            }
        }
    }

    @ReactProp(name = "applicationNameForUserAgent")
    public void setApplicationNameForUserAgent(c cVar, String str) {
        if (str != null) {
            this.mUserAgentWithApplicationName = k0.d.l(WebSettings.getDefaultUserAgent(cVar.getContext()), " ", str);
        } else {
            this.mUserAgentWithApplicationName = null;
        }
        j jVar = cVar.f6633e;
        if (jVar != null) {
            setUserAgentString(jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "androidAssetLoaderConfig")
    public void setAssetLoaderConfig(c cVar, ReadableMap readableMap) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setAssetLoaderConfig$11(readableMap, cVar, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "basicAuthCredential")
    public void setBasicAuthCredential(c cVar, ReadableMap readableMap) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setBasicAuthCredential$32(readableMap, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "setBuiltInZoomControls")
    public void setBuiltInZoomControls(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setBuiltInZoomControls$1(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "cacheEnabled")
    public void setCacheEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setCacheEnabled$7(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @ReactProp(name = "cacheMode")
    public void setCacheMode(c cVar, String str) {
        int i5;
        switch (str.hashCode()) {
            case -2059164003:
                if (str.equals("LOAD_NO_CACHE")) {
                    i5 = 2;
                    break;
                }
                i5 = -1;
                break;
            case -1215135800:
                str.equals("LOAD_DEFAULT");
                i5 = -1;
                break;
            case -873877826:
                if (str.equals("LOAD_CACHE_ELSE_NETWORK")) {
                    i5 = 1;
                    break;
                }
                i5 = -1;
                break;
            case 1548620642:
                if (str.equals("LOAD_CACHE_ONLY")) {
                    i5 = 3;
                    break;
                }
                i5 = -1;
                break;
            default:
                i5 = -1;
                break;
        }
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setCacheMode$8(i5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "setDisplayZoomControls")
    public void setDisplayZoomControls(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setDisplayZoomControls$2(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "domStorageEnabled")
    public void setDomStorageEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setDomStorageEnabled$17(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "downloadingMessage")
    public void setDownloadingMessage(WebView webView, String str) {
        this.mDownloadingMessage = str;
    }

    @ReactProp(name = "forceDarkOn")
    public void setForceDarkOn(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setForceDarkOn$42(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "geolocationEnabled")
    public void setGeolocationEnabled(c cVar, Boolean bool) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setGeolocationEnabled$40(bool, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "androidHardwareAccelerationDisabled")
    public void setHardwareAccelerationDisabled(c cVar, boolean z5) {
        if (z5) {
            j jVar = cVar.f6633e;
            if (jVar != null) {
                jVar.setLayerType(1, null);
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
            }
        }
    }

    @ReactProp(name = "incognito")
    public void setIncognito(c cVar, boolean z5) {
        if (z5) {
            CookieManager.getInstance().removeAllCookies(null);
            j jVar = cVar.f6633e;
            if (jVar != null) {
                lambda$setIncognito$29(jVar);
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
            }
        }
    }

    @ReactProp(name = "injectedJavaScript")
    public void setInjectedJavaScript(c cVar, String str) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setInjectedJavaScript(str);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "injectedJavaScriptBeforeContentLoaded")
    public void setInjectedJavaScriptBeforeContentLoaded(c cVar, String str) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setInjectedJavaScriptBeforeContentLoaded(str);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "injectedJavaScriptBeforeContentLoadedForMainFrameOnly")
    public void setInjectedJavaScriptBeforeContentLoadedForMainFrameOnly(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setInjectedJavaScriptBeforeContentLoadedForMainFrameOnly(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "injectedJavaScriptForMainFrameOnly")
    public void setInjectedJavaScriptForMainFrameOnly(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setInjectedJavaScriptForMainFrameOnly(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "javaScriptCanOpenWindowsAutomatically")
    public void setJavaScriptCanOpenWindowsAutomatically(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setJavaScriptCanOpenWindowsAutomatically$19(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "javaScriptEnabled")
    public void setJavaScriptEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setJavaScriptEnabled$0(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "lackPermissionToDownloadMessage")
    public void setLackPermissionToDownlaodMessage(WebView webView, String str) {
        this.mLackPermissionToDownloadMessage = str;
    }

    @ReactProp(name = "androidLayerType")
    public void setLayerType(c cVar, String str) {
        str.getClass();
        int i5 = !str.equals("hardware") ? !str.equals("software") ? 0 : 1 : 2;
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setLayerType(i5, null);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "mediaPlaybackRequiresUserAction")
    @TargetApi(17)
    public void setMediaPlaybackRequiresUserAction(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setMediaPlaybackRequiresUserAction$18(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "messagingEnabled")
    public void setMessagingEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setMessagingEnabled(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "messagingModuleName")
    public void setMessagingModuleName(c cVar, String str) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setMessagingModuleName(str);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "minimumFontSize")
    public void setMinimumFontSize(c cVar, int i5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setMinimumFontSize$43(i5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "mixedContentMode")
    public void setMixedContentMode(c cVar, String str) {
        if (str == null || ReactScrollViewHelper.OVER_SCROLL_NEVER.equals(str)) {
            j jVar = cVar.f6633e;
            if (jVar != null) {
                lambda$setMixedContentMode$34(jVar);
                return;
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
                return;
            }
        }
        if (ReactScrollViewHelper.OVER_SCROLL_ALWAYS.equals(str)) {
            j jVar2 = cVar.f6633e;
            if (jVar2 != null) {
                lambda$setMixedContentMode$35(jVar2);
                return;
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
                return;
            }
        }
        if ("compatibility".equals(str)) {
            j jVar3 = cVar.f6633e;
            if (jVar3 != null) {
                lambda$setMixedContentMode$36(jVar3);
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
            }
        }
    }

    @ReactProp(name = "nestedScrollEnabled")
    public void setNestedScrollEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setNestedScrollEnabled(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "onContentSizeChange")
    public void setOnContentSizeChange(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setSendContentSizeChangeEvents(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "onScroll")
    public void setOnScroll(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setHasScrollEvent(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0043  */
    @ReactProp(name = "overScrollMode")
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setOverScrollMode(c cVar, String str) {
        int i5;
        j jVar;
        int hashCode = str.hashCode();
        if (hashCode != -1414557169) {
            if (hashCode != 104712844) {
                if (hashCode == 951530617 && str.equals("content")) {
                    i5 = 1;
                }
            } else if (str.equals(ReactScrollViewHelper.OVER_SCROLL_NEVER)) {
                i5 = 2;
            }
            jVar = cVar.f6633e;
            if (jVar == null) {
                lambda$setOverScrollMode$12(i5, jVar);
                return;
            } else {
                p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
                return;
            }
        }
        str.equals(ReactScrollViewHelper.OVER_SCROLL_ALWAYS);
        i5 = 0;
        jVar = cVar.f6633e;
        if (jVar == null) {
        }
    }

    @ReactProp(name = "saveFormDataDisabled")
    public void setSaveFormDataDisabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setSaveFormDataDisabled$22(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "scalesPageToFit")
    public void setScalesPageToFit(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setScalesPageToFit$16(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "showsHorizontalScrollIndicator")
    public void setShowsHorizontalScrollIndicator(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setHorizontalScrollBarEnabled(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "showsVerticalScrollIndicator")
    public void setShowsVerticalScrollIndicator(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            jVar.setVerticalScrollBarEnabled(z5);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "source")
    public void setSource(c cVar, ReadableMap readableMap) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setSource$30(readableMap, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "setSupportMultipleWindows")
    public void setSupportMultipleWindows(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setSupportMultipleWindows$3(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "temporaryParentNodeTag")
    public void setTemporaryParentNodeTag(c cVar, int i5) {
        cVar.f6632d = i5;
    }

    @ReactProp(name = "textZoom")
    public void setTextZoom(c cVar, int i5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setTextZoom$15(i5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "thirdPartyCookiesEnabled")
    public void setThirdPartyCookiesEnabled(c cVar, boolean z5) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setThirdPartyCookiesEnabled$14(z5, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "urlPrefixesForDefaultIntent")
    public void setUrlPrefixesForDefaultIntent(c cVar, ReadableArray readableArray) {
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$setUrlPrefixesForDefaultIntent$37(readableArray, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    @ReactProp(name = "userAgent")
    public void setUserAgent(c cVar, String str) {
        if (str != null) {
            this.mUserAgent = str;
        } else {
            this.mUserAgent = null;
        }
        j jVar = cVar.f6633e;
        if (jVar != null) {
            setUserAgentString(jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    public void setUserAgentString(WebView webView) {
        if (this.mUserAgent != null) {
            webView.getSettings().setUserAgentString(this.mUserAgent);
        } else if (this.mUserAgentWithApplicationName != null) {
            webView.getSettings().setUserAgentString(this.mUserAgentWithApplicationName);
        } else {
            webView.getSettings().setUserAgentString(WebSettings.getDefaultUserAgent(webView.getContext()));
        }
    }

    @ReactProp(name = "webViewKey")
    public void setWebViewKey(c cVar, String str) {
        LinkedHashMap linkedHashMap = l.a;
        if (linkedHashMap.containsKey(str)) {
            j jVar = (j) linkedHashMap.get(str);
            ViewGroup viewGroup = (ViewGroup) jVar.getParent();
            if (viewGroup != null && (viewGroup instanceof c)) {
                c cVar2 = (c) jVar.getParent();
                j jVar2 = cVar2.f6633e;
                if (jVar2 == null) {
                    throw new IllegalStateException("Webview is null");
                }
                cVar2.endViewTransition(jVar2);
                cVar2.removeView(cVar2.f6633e);
                cVar2.f6633e = null;
                setupWebChromeClient((ThemedReactContext) cVar2.getContext(), jVar);
            }
            if (viewGroup != null) {
                viewGroup.removeView(jVar);
            }
            cVar.a(jVar);
        }
        j jVar3 = cVar.f6633e;
        if (jVar3 != null) {
            lambda$setWebViewKey$4(str, cVar, linkedHashMap, jVar3);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    public void setupWebChromeClient(ReactContext reactContext, WebView webView) {
        Activity currentActivity = reactContext.getCurrentActivity();
        if (!this.mAllowsFullscreenVideo || currentActivity == null) {
            g gVar = this.mWebChromeClient;
            if (gVar != null) {
                gVar.onHideCustomView();
            }
            this.mWebChromeClient = new f(reactContext, webView);
        } else {
            this.mWebChromeClient = new e(reactContext, webView, currentActivity, currentActivity.getRequestedOrientation());
        }
        g gVar2 = this.mWebChromeClient;
        gVar2.I = this.mAllowsProtectedMedia;
        webView.setWebChromeClient(gVar2);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @TargetApi(21)
    public c createViewInstance(ThemedReactContext themedReactContext) {
        c cVar = new c(themedReactContext);
        cVar.f6632d = 0;
        cVar.setOnHierarchyChangeListener(new b(cVar, 0));
        j createRNCWebViewInstance = createRNCWebViewInstance(themedReactContext);
        cVar.a(createRNCWebViewInstance);
        cVar.post(new ii.o(6, createRNCWebViewInstance, cVar));
        setupWebChromeClient(themedReactContext, createRNCWebViewInstance);
        themedReactContext.addLifecycleEventListener(createRNCWebViewInstance);
        this.mWebViewConfig.getClass();
        WebSettings settings = createRNCWebViewInstance.getSettings();
        settings.setBuiltInZoomControls(true);
        settings.setDisplayZoomControls(false);
        settings.setDomStorageEnabled(true);
        settings.setSupportMultipleWindows(true);
        settings.setAllowFileAccess(false);
        settings.setAllowContentAccess(false);
        settings.setAllowFileAccessFromFileURLs(false);
        setAllowUniversalAccessFromFileURLs(cVar, false);
        setMixedContentMode(cVar, ReactScrollViewHelper.OVER_SCROLL_NEVER);
        if ((themedReactContext.getApplicationInfo().flags & 2) != 0) {
            WebView.setWebContentsDebuggingEnabled(true);
        }
        createRNCWebViewInstance.setDownloadListener(new d(this, createRNCWebViewInstance, themedReactContext));
        return cVar;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(c cVar) {
        super.onDropViewInstance((RNCWebViewManager) cVar);
        if (cVar.getWebView() == null) {
            return;
        }
        j jVar = cVar.f6633e;
        if (jVar != null) {
            lambda$onDropViewInstance$47(cVar, jVar);
        } else {
            p8.a.j(REACT_CLASS, new Throwable(), "Internal WebView is null", new Object[0]);
        }
    }

    public RNCWebViewManager(p pVar) {
        this.mWebChromeClient = null;
        this.mAllowsFullscreenVideo = false;
        this.mAllowsProtectedMedia = false;
        this.mUserAgent = null;
        this.mUserAgentWithApplicationName = null;
        this.mDownloadingMessage = null;
        this.mLackPermissionToDownloadMessage = null;
        this.assetLoaderHandlerTypes = new HashSet(Arrays.asList("assets", "internal", "resources"));
        this.mWebViewConfig = pVar;
    }
}
