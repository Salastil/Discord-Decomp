package om;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes3.dex */
public final class e extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final int f16143d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f16144e;

    public e(int i5, int i6, int i10, boolean z5) {
        super(i5, i6);
        this.f16143d = i10;
        this.f16144e = z5;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putInt("index", this.f16143d);
        createMap.putBoolean("isStable", this.f16144e);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        return "topSheetDetentChanged";
    }
}
