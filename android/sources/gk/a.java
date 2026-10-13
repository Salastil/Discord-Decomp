package gk;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.core.DeviceEventManagerModule;

/* loaded from: classes3.dex */
public final class a implements Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9330d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n f9331e;

    public /* synthetic */ a(n nVar, int i5) {
        this.f9330d = i5;
        this.f9331e = nVar;
    }

    @Override // com.facebook.react.bridge.Callback
    public final void invoke(Object... objArr) {
        switch (this.f9330d) {
            case 0:
                n nVar = this.f9331e;
                String date = nVar.getDate();
                String pickerId = nVar.getPickerId();
                WritableMap createMap = Arguments.createMap();
                createMap.putString("date", date);
                createMap.putString(StackTraceHelper.ID_KEY, pickerId);
                ((DeviceEventManagerModule.RCTDeviceEventEmitter) com.mkuczera.haptic.d.f6615b.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("onConfirm", createMap);
                break;
            default:
                String pickerId2 = this.f9331e.getPickerId();
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putString(StackTraceHelper.ID_KEY, pickerId2);
                ((DeviceEventManagerModule.RCTDeviceEventEmitter) com.mkuczera.haptic.d.f6615b.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("onCancel", createMap2);
                break;
        }
    }
}
