package sl;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends Event {
    public static final b E = b.f18053e;
    public static final b F = b.f18054i;
    public static final b G = b.f18055v;
    public static final b H = b.f18056w;

    /* renamed from: d, reason: collision with root package name */
    public final b f18059d;

    /* renamed from: e, reason: collision with root package name */
    public final double f18060e;

    /* renamed from: i, reason: collision with root package name */
    public final double f18061i;

    /* renamed from: v, reason: collision with root package name */
    public final int f18062v;

    /* renamed from: w, reason: collision with root package name */
    public final int f18063w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(int i5, int i6, b event, double d6, double d7, int i10, int i11) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(event, "event");
        this.f18059d = event;
        this.f18060e = d6;
        this.f18061i = d7;
        this.f18062v = i10;
        this.f18063w = i11;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble(ReactProgressBarViewManager.PROP_PROGRESS, this.f18061i);
        createMap.putDouble("height", this.f18060e);
        createMap.putInt("duration", this.f18062v);
        createMap.putInt("target", this.f18063w);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return this.f18059d.f18058d;
    }
}
