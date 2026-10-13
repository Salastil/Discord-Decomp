package nl;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.views.textinput.ReactTextChangedEvent;

/* loaded from: classes3.dex */
public final class b extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final double f15548d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f15549e;

    public b(int i5, double d6) {
        super(i5);
        this.f15548d = d6;
        this.f15549e = true;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putInt("target", getViewTag());
        createMap.putDouble("value", this.f15548d);
        createMap.putBoolean("fromUser", this.f15549e);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        return ReactTextChangedEvent.EVENT_NAME;
    }
}
