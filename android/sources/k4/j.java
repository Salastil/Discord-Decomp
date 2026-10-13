package k4;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes.dex */
public final class j extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13190d;

    public j(int i5, int i6, boolean z5) {
        super(i5, i6);
        this.f13190d = z5;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putBoolean("isCancelled", this.f13190d);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        return "topAnimationFinish";
    }
}
