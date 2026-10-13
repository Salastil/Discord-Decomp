package jn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import hn.h;
import hn.k;
import hn.l;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends Event implements tm.a {

    /* renamed from: v, reason: collision with root package name */
    public static final j8.b f12987v = new j8.b(11, (byte) 0);

    /* renamed from: d, reason: collision with root package name */
    public final h f12988d;

    /* renamed from: e, reason: collision with root package name */
    public final l f12989e;

    /* renamed from: i, reason: collision with root package name */
    public final k f12990i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(int i5, int i6, h currentNavState, l rejectedRequest, k rejectionReason) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
        Intrinsics.checkNotNullParameter(rejectedRequest, "rejectedRequest");
        Intrinsics.checkNotNullParameter(rejectionReason, "rejectionReason");
        this.f12988d = currentNavState;
        this.f12989e = rejectedRequest;
        this.f12990i = rejectionReason;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        return false;
    }

    @Override // tm.a
    public final String d() {
        return "onTabSelectionRejected";
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        h hVar = this.f12988d;
        createMap.putString("selectedScreenKey", hVar.a);
        createMap.putInt("provenance", hVar.f10132b);
        l lVar = this.f12989e;
        createMap.putString("rejectedScreenKey", lVar.a);
        createMap.putInt("rejectedBaseProvenance", lVar.f10140b);
        createMap.putString("rejectionReason", this.f12990i.toString());
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return "topTabSelectionRejected";
    }
}
