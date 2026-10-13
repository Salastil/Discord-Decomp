package com.reactnativecommunity.netinfo;

import a5.j0;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.os.Handler;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.module.annotations.ReactModule;
import ll.a;
import ll.b;
import ll.c;

@ReactModule(name = NetInfoModule.NAME)
/* loaded from: classes3.dex */
public class NetInfoModule extends ReactContextBaseJavaModule {
    public static final String NAME = "RNCNetInfo";
    private final a mAmazonConnectivityChecker;
    private final b mConnectivityReceiver;
    private int numberOfListeners;

    public NetInfoModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.numberOfListeners = 0;
        this.mConnectivityReceiver = new c(reactApplicationContext);
        this.mAmazonConnectivityChecker = new a(reactApplicationContext, this);
    }

    @ReactMethod
    public void addListener(String str) {
        this.numberOfListeners++;
        this.mConnectivityReceiver.f14086e = true;
    }

    @ReactMethod
    public void getCurrentState(String str, Promise promise) {
        promise.resolve(this.mConnectivityReceiver.a(str));
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void initialize() {
        c cVar = (c) this.mConnectivityReceiver;
        ConnectivityManager connectivityManager = cVar.a;
        try {
            cVar.k = connectivityManager.getActiveNetwork();
            cVar.d(0);
            connectivityManager.registerDefaultNetworkCallback(cVar.j);
        } catch (SecurityException unused) {
        }
        a aVar = this.mAmazonConnectivityChecker;
        aVar.getClass();
        if (a.a()) {
            j0 j0Var = aVar.a;
            if (!j0Var.f188b) {
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("com.amazon.tv.networkmonitor.INTERNET_DOWN");
                intentFilter.addAction("com.amazon.tv.networkmonitor.INTERNET_UP");
                jf.a.b(aVar.f14078b, j0Var, intentFilter);
                j0Var.f188b = true;
            }
            if (aVar.f14082f) {
                return;
            }
            Handler handler = new Handler();
            aVar.f14081e = handler;
            aVar.f14082f = true;
            handler.post(aVar.f14080d);
        }
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        a aVar = this.mAmazonConnectivityChecker;
        aVar.getClass();
        if (a.a()) {
            if (aVar.f14082f) {
                aVar.f14082f = false;
                aVar.f14081e.removeCallbacksAndMessages(null);
                aVar.f14081e = null;
            }
            j0 j0Var = aVar.a;
            if (j0Var.f188b) {
                aVar.f14078b.unregisterReceiver(j0Var);
                j0Var.f188b = false;
            }
        }
        c cVar = (c) this.mConnectivityReceiver;
        cVar.getClass();
        try {
            cVar.a.unregisterNetworkCallback(cVar.j);
        } catch (IllegalArgumentException | SecurityException unused) {
        }
        this.mConnectivityReceiver.f14086e = false;
    }

    public void onAmazonFireDeviceConnectivityChanged(boolean z5) {
        b bVar = this.mConnectivityReceiver;
        bVar.f14090i = Boolean.valueOf(z5);
        bVar.c(bVar.f14087f, bVar.f14088g, bVar.f14089h);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public void onCatalystInstanceDestroy() {
        invalidate();
    }

    @ReactMethod
    public void removeListeners(Integer num) {
        int intValue = this.numberOfListeners - num.intValue();
        this.numberOfListeners = intValue;
        if (intValue == 0) {
            this.mConnectivityReceiver.f14086e = false;
        }
    }
}
