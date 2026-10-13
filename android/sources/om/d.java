package om;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;

/* loaded from: classes3.dex */
public final class d extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final float f16139d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f16140e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f16141i;

    /* renamed from: v, reason: collision with root package name */
    public final short f16142v;

    public d(int i5, int i6, float f2, boolean z5, boolean z6, short s2) {
        super(i5, i6);
        this.f16139d = f2;
        this.f16140e = z5;
        this.f16141i = z6;
        this.f16142v = s2;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return this.f16142v;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble(ReactProgressBarViewManager.PROP_PROGRESS, this.f16139d);
        createMap.putInt("closing", this.f16140e ? 1 : 0);
        createMap.putInt("goingForward", this.f16141i ? 1 : 0);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        return "topTransitionProgress";
    }
}
