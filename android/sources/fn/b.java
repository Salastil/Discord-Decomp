package fn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import wi.d;

/* loaded from: classes3.dex */
public final class b extends c {

    /* renamed from: v, reason: collision with root package name */
    public static final d f8800v = new d(6);

    /* renamed from: i, reason: collision with root package name */
    public final boolean f8801i;

    public b(int i5, int i6, boolean z5) {
        super(i5, i6, "topDismiss", "onDismiss");
        this.f8801i = z5;
    }

    @Override // fn.c, com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putBoolean("isNativeDismiss", this.f8801i);
        return createMap;
    }
}
