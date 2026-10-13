package ln;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import ha.k;
import io.sentry.hints.j;
import j8.b;
import wi.d;

/* loaded from: classes3.dex */
public final class a extends Event implements tm.a {

    /* renamed from: e, reason: collision with root package name */
    public static final d f14112e = new d(12);

    /* renamed from: i, reason: collision with root package name */
    public static final k f14113i = new k(13);

    /* renamed from: v, reason: collision with root package name */
    public static final j f14114v = new j(13);

    /* renamed from: w, reason: collision with root package name */
    public static final b f14115w = new b(13, (byte) 0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14116d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(int i5, int i6, int i10) {
        super(i5, i6);
        this.f14116d = i10;
    }

    @Override // tm.a
    public final String d() {
        switch (this.f14116d) {
            case 0:
                return "onDidAppear";
            case 1:
                return "onDidDisappear";
            case 2:
                return "onWillAppear";
            default:
                return "onWillDisappear";
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        switch (this.f14116d) {
        }
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        switch (this.f14116d) {
        }
        return Arguments.createMap();
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        switch (this.f14116d) {
            case 0:
                return "topDidAppear";
            case 1:
                return "topDidDisappear";
            case 2:
                return "topWillAppear";
            default:
                return "topWillDisappear";
        }
    }
}
