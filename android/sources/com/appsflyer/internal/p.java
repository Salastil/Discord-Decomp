package com.appsflyer.internal;

import android.app.Activity;
import android.content.Context;
import android.graphics.Canvas;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.webkit.WebView;
import android.widget.TextView;
import androidx.appcompat.widget.Toolbar;
import androidx.core.view.e0;
import androidx.core.view.s0;
import androidx.work.impl.WorkDatabase;
import com.discord.R;
import com.discord.browser_manager.BrowserManagerModule;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.DevSupportManagerBase;
import com.facebook.react.modules.camera.ImageStoreManager;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.facebook.react.uimanager.ViewGroupManager;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.swmansion.reanimated.layoutReanimation.ReanimatedNativeHierarchyManager;
import com.yalantis.ucrop.UCropActivity;
import io.sentry.ILogger;
import io.sentry.android.core.j0;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;
import java.util.concurrent.CountDownLatch;
import nd.s;

/* loaded from: classes.dex */
public final /* synthetic */ class p implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3690d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3691e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3692i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3693v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3694w;

    public /* synthetic */ p(int i5, Object obj, Object obj2, Object obj3, Object obj4) {
        this.f3690d = i5;
        this.f3691e = obj;
        this.f3692i = obj2;
        this.f3693v = obj3;
        this.f3694w = obj4;
    }

    /* JADX WARN: Type inference failed for: r3v0, types: [java.lang.Object, nd.x] */
    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f3690d;
        Object obj = this.f3694w;
        Object obj2 = this.f3693v;
        ?? r32 = this.f3692i;
        Object obj3 = this.f3691e;
        switch (i5) {
            case 0:
                ((AFj1rSDK) obj3).getRevenue((Context) r32, (Runnable) obj2, (AFc1bSDK) obj);
                return;
            case 1:
                BrowserManagerModule.openTrackedCustomTab$lambda$4((Activity) obj3, (String) r32, (Promise) obj2, (BrowserManagerModule) obj);
                return;
            case 2:
                DevSupportManagerBase.fetchSplitBundleAndCreateBundleLoader$lambda$31((DevSupportManagerBase) obj3, (String) r32, (File) obj2, (DevSupportManagerBase.CallbackWithBundleLoader) obj);
                return;
            case 3:
                com.reactnativecommunity.webview.j jVar = (com.reactnativecommunity.webview.j) obj3;
                WebView webView = (WebView) r32;
                WritableMap a = jVar.f6647w.a(webView, webView.getUrl());
                a.putString("webViewKey", jVar.f6646v);
                a.putString("data", (String) obj2);
                ((DeviceEventManagerModule.RCTDeviceEventEmitter) ((ReactContext) obj).getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("ReactNativeWebViewOnMessageWithWebViewKey", a);
                return;
            case 4:
                ReanimatedNativeHierarchyManager.lambda$manageChildren$0((ArrayList) obj3, (View) r32, (ViewGroupManager) obj2, (ViewGroup) obj);
                return;
            case 5:
                ImageStoreManager.getBase64ForTag$lambda$0((ImageStoreManager) obj3, (String) r32, (Callback) obj2, (Callback) obj);
                return;
            case 6:
                Window window = (Window) obj3;
                Window.Callback callback = (Window.Callback) r32;
                Runnable runnable = (Runnable) obj2;
                j0 j0Var = (j0) obj;
                View peekDecorView = window.peekDecorView();
                if (peekDecorView != null) {
                    window.setCallback(callback);
                    io.sentry.android.core.internal.util.h.b(peekDecorView, runnable, j0Var);
                    return;
                }
                return;
            case 7:
                ILogger iLogger = (ILogger) obj2;
                CountDownLatch countDownLatch = (CountDownLatch) obj;
                try {
                    ((View) obj3).draw((Canvas) r32);
                } finally {
                    try {
                        return;
                    } finally {
                    }
                }
                return;
            case 8:
                UCropActivity uCropActivity = (UCropActivity) obj3;
                String str = (String) r32;
                String str2 = (String) obj2;
                String str3 = (String) obj;
                try {
                    Toolbar toolbar = (Toolbar) uCropActivity.findViewById(R.id.toolbar);
                    if (toolbar != null && str != null) {
                        toolbar.setNavigationContentDescription(str);
                    }
                    TextView textView = (TextView) uCropActivity.findViewById(R.id.toolbar_title);
                    if (textView != null) {
                        WeakHashMap weakHashMap = s0.a;
                        textView.setImportantForAccessibility(1);
                        new e0(R.id.tag_accessibility_heading, Boolean.class, 0, 28, 3).f(textView, Boolean.TRUE);
                    }
                    jl.e.r(uCropActivity, R.id.state_aspect_ratio, R.id.text_view_crop);
                    jl.e.r(uCropActivity, R.id.state_rotate, R.id.text_view_rotate);
                    jl.e.r(uCropActivity, R.id.state_scale, R.id.text_view_scale);
                    View findViewById = uCropActivity.findViewById(R.id.wrapper_rotate_by_angle);
                    int i6 = 3;
                    if (findViewById != null) {
                        if (str2 != null) {
                            findViewById.setContentDescription(str2);
                        }
                        s0.p(findViewById, new com.google.android.material.datepicker.g(i6));
                    }
                    View findViewById2 = uCropActivity.findViewById(R.id.wrapper_reset_rotate);
                    if (findViewById2 != null) {
                        if (str3 != null) {
                            findViewById2.setContentDescription(str3);
                        }
                        s0.p(findViewById2, new com.google.android.material.datepicker.g(i6));
                        return;
                    }
                    return;
                } catch (Exception e9) {
                    Log.e("ImageCropPicker", "Error applying accessibility attributes", e9);
                    return;
                }
            case 9:
                r32.z(((a1.d) obj3).f14e, (s) obj2, (MediaLoadData) obj);
                return;
            default:
                List list = (List) obj3;
                e4.j jVar2 = (e4.j) r32;
                v3.b bVar = (v3.b) obj2;
                WorkDatabase workDatabase = (WorkDatabase) obj;
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    ((w3.g) it.next()).c(jVar2.a);
                }
                w3.i.b(bVar, workDatabase, list);
                return;
        }
    }

    public /* synthetic */ p(jl.b bVar, UCropActivity uCropActivity, String str, String str2, String str3) {
        this.f3690d = 8;
        this.f3691e = uCropActivity;
        this.f3692i = str;
        this.f3693v = str2;
        this.f3694w = str3;
    }
}
