package wm;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes3.dex */
public final class l extends Event implements tm.a {

    /* renamed from: e, reason: collision with root package name */
    public static final r8.c f19920e = new r8.c(19);

    /* renamed from: d, reason: collision with root package name */
    public final int f19921d;

    public l(int i5, int i6, int i10) {
        super(i5, i6);
        this.f19921d = i10;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        return false;
    }

    @Override // tm.a
    public final String d() {
        return "onDetentChanged";
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putInt("index", this.f19921d);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return "topDetentChanged";
    }
}
