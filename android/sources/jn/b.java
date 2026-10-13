package jn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import hn.h;
import io.sentry.hints.j;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends Event implements tm.a {

    /* renamed from: i, reason: collision with root package name */
    public static final j f12984i = new j(11);

    /* renamed from: d, reason: collision with root package name */
    public final h f12985d;

    /* renamed from: e, reason: collision with root package name */
    public final String f12986e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(int i5, int i6, h currentNavState, String preventedScreenKey) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
        Intrinsics.checkNotNullParameter(preventedScreenKey, "preventedScreenKey");
        this.f12985d = currentNavState;
        this.f12986e = preventedScreenKey;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        return false;
    }

    @Override // tm.a
    public final String d() {
        return "onTabSelectionPrevented";
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        h hVar = this.f12985d;
        createMap.putString("selectedScreenKey", hVar.a);
        createMap.putInt("provenance", hVar.f10132b);
        createMap.putString("preventedScreenKey", this.f12986e);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return "topTabSelectionPrevented";
    }
}
