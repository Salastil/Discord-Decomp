package rb;

import android.app.Activity;
import android.content.IntentFilter;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.github.yamill.orientation.OrientationModule;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements LifecycleEventListener {

    /* renamed from: d, reason: collision with root package name */
    public final ReactContext f17183d;

    /* renamed from: e, reason: collision with root package name */
    public final qb.a f17184e;

    /* renamed from: i, reason: collision with root package name */
    public final c4.d f17185i;

    public b(ReactApplicationContext reactContext, qb.a onGetCurrentActivity) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(onGetCurrentActivity, "onGetCurrentActivity");
        this.f17183d = reactContext;
        this.f17184e = onGetCurrentActivity;
        this.f17185i = new c4.d(5, this);
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
        Activity _init_$lambda$1;
        _init_$lambda$1 = OrientationModule._init_$lambda$1(this.f17184e.f16738e);
        if (_init_$lambda$1 == null) {
            p8.a.g(ReactConstants.TAG, "no activity to un-register receiver");
            return;
        }
        try {
            _init_$lambda$1.unregisterReceiver(this.f17185i);
        } catch (IllegalArgumentException e9) {
            p8.a.h(ReactConstants.TAG, "receiver already unregistered", e9);
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        Activity _init_$lambda$1;
        _init_$lambda$1 = OrientationModule._init_$lambda$1(this.f17184e.f16738e);
        if (_init_$lambda$1 != null) {
            y0.b.f(_init_$lambda$1, this.f17185i, new IntentFilter("onConfigurationChanged"), null, 2);
        } else {
            p8.a.g(ReactConstants.TAG, "no activity to register receiver");
        }
        ReactContext reactContext = this.f17183d;
        int i5 = reactContext.getResources().getConfiguration().orientation;
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        if (reactContext.hasActiveReactInstance()) {
            String str = i5 == 1 ? "PORTRAIT" : "LANDSCAPE";
            WritableMap createMap = Arguments.createMap();
            createMap.putString("orientation", str);
            ((DeviceEventManagerModule.RCTDeviceEventEmitter) reactContext.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class)).emit("orientationDidChange", createMap);
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
    }
}
