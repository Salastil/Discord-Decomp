package jn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import ha.k;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends Event implements tm.a {
    public static final k E = new k(11);

    /* renamed from: d, reason: collision with root package name */
    public final String f12979d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12980e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f12981i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f12982v;

    /* renamed from: w, reason: collision with root package name */
    public final hn.b f12983w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int i5, int i6, String selectedScreenKey, int i10, boolean z5, boolean z6, hn.b actionOrigin) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(selectedScreenKey, "selectedScreenKey");
        Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
        this.f12979d = selectedScreenKey;
        this.f12980e = i10;
        this.f12981i = z5;
        this.f12982v = z6;
        this.f12983w = actionOrigin;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        return false;
    }

    @Override // tm.a
    public final String d() {
        return "onTabSelected";
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putString("selectedScreenKey", this.f12979d);
        createMap.putInt("provenance", this.f12980e);
        createMap.putBoolean("isRepeated", this.f12981i);
        createMap.putBoolean("hasTriggeredSpecialEffect", this.f12982v);
        createMap.putString("actionOrigin", this.f12983w.toString());
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return "topTabSelected";
    }
}
