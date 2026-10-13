package kl;

import android.content.ClipboardManager;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.reactnativecommunity.clipboard.ClipboardModule;

/* loaded from: classes3.dex */
public final class a implements ClipboardManager.OnPrimaryClipChangedListener {
    public final /* synthetic */ ClipboardModule a;

    public a(ClipboardModule clipboardModule) {
        this.a = clipboardModule;
    }

    @Override // android.content.ClipboardManager.OnPrimaryClipChangedListener
    public final void onPrimaryClipChanged() {
        ReactApplicationContext reactApplicationContext;
        reactApplicationContext = this.a.reactContext;
        ((DeviceEventManagerModule.RCTDeviceEventEmitter) reactApplicationContext.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit(ClipboardModule.CLIPBOARD_TEXT_CHANGED, null);
    }
}
