package lm;

import com.facebook.react.bridge.JavaScriptModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.core.DeviceEventManagerModule;
import com.facebook.react.uimanager.events.Event;
import com.swmansion.reanimated.NodesManager;
import com.swmansion.reanimated.ReanimatedModule;
import jm.r;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c implements r {
    public final ReactApplicationContext a;

    /* renamed from: b, reason: collision with root package name */
    public final u4.c f14101b;

    public c(ReactApplicationContext reactApplicationContext) {
        Intrinsics.checkNotNullParameter(reactApplicationContext, "reactApplicationContext");
        this.a = reactApplicationContext;
        this.f14101b = new u4.c();
    }

    public final void a(String str, WritableMap writableMap) {
        ReactApplicationContext reactApplicationContext = this.a;
        Intrinsics.checkNotNullParameter(reactApplicationContext, "<this>");
        JavaScriptModule jSModule = reactApplicationContext.getJSModule(DeviceEventManagerModule.RCTDeviceEventEmitter.class);
        Intrinsics.checkNotNullExpressionValue(jSModule, "getJSModule(...)");
        ((DeviceEventManagerModule.RCTDeviceEventEmitter) jSModule).emit(str, writableMap);
    }

    public final void b(Event event) {
        NodesManager nodesManager;
        Intrinsics.checkNotNullParameter(event, "event");
        ReactApplicationContext reactApplicationContext = this.a;
        Intrinsics.checkNotNullParameter(reactApplicationContext, "reactApplicationContext");
        u4.c cVar = this.f14101b;
        if (((ReanimatedModule) cVar.f18811d) == null) {
            cVar.f18811d = (ReanimatedModule) reactApplicationContext.getNativeModule(ReanimatedModule.class);
        }
        ReanimatedModule reanimatedModule = (ReanimatedModule) cVar.f18811d;
        if (reanimatedModule == null || (nodesManager = reanimatedModule.getNodesManager()) == null) {
            return;
        }
        nodesManager.onEventDispatch(event);
    }
}
