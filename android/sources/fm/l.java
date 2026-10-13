package fm;

import app.rive.runtime.kotlin.controllers.RiveFileController;
import app.rive.runtime.kotlin.core.RiveEvent;
import app.rive.runtime.kotlin.core.RiveOpenURLEvent;
import com.margelo.nitro.rive.EventPropertiesOutput;
import com.margelo.nitro.rive.RiveEventType;
import com.margelo.nitro.rive.UnifiedRiveEvent;
import java.util.HashMap;
import java.util.Map;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l implements RiveFileController.RiveEventListener {
    public final /* synthetic */ m a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Function1 f8784b;

    public l(m mVar, Function1 function1) {
        this.a = mVar;
        this.f8784b = function1;
    }

    @Override // app.rive.runtime.kotlin.controllers.RiveFileController.RiveEventListener
    public final void notifyEvent(RiveEvent event) {
        HashMap hashMap;
        Intrinsics.checkNotNullParameter(event, "event");
        String name = event.getName();
        boolean z5 = event instanceof RiveOpenURLEvent;
        RiveEventType riveEventType = z5 ? RiveEventType.OPENURL : RiveEventType.GENERAL;
        Double valueOf = Double.valueOf(event.getDelay());
        HashMap<String, Object> properties = event.getProperties();
        this.a.getClass();
        if (properties == null) {
            hashMap = null;
        } else {
            HashMap hashMap2 = new HashMap();
            for (Map.Entry<String, Object> entry : properties.entrySet()) {
                String key = entry.getKey();
                Object value = entry.getValue();
                if (value instanceof String) {
                    String value2 = (String) value;
                    Intrinsics.checkNotNullParameter(value2, "value");
                    hashMap2.put(key, new EventPropertiesOutput.Second(value2));
                } else if (value instanceof Number) {
                    hashMap2.put(key, new EventPropertiesOutput.Third(((Number) value).doubleValue()));
                } else if (value instanceof Boolean) {
                    hashMap2.put(key, new EventPropertiesOutput.First(((Boolean) value).booleanValue()));
                }
            }
            hashMap = hashMap2;
        }
        RiveOpenURLEvent riveOpenURLEvent = z5 ? (RiveOpenURLEvent) event : null;
        String url = riveOpenURLEvent != null ? riveOpenURLEvent.getUrl() : null;
        RiveOpenURLEvent riveOpenURLEvent2 = z5 ? (RiveOpenURLEvent) event : null;
        this.f8784b.invoke(new UnifiedRiveEvent(name, riveEventType, valueOf, hashMap, url, riveOpenURLEvent2 != null ? riveOpenURLEvent2.getTarget() : null));
    }
}
