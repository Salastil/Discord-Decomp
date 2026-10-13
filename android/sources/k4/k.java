package k4;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;

/* loaded from: classes.dex */
public final class k extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13191d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ k(int i5, int i6, int i10) {
        super(i5, i6);
        this.f13191d = i10;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public short getCoalescingKey() {
        switch (this.f13191d) {
            case 1:
                return (short) 0;
            case 2:
                return (short) 0;
            case 3:
                return (short) 0;
            case 4:
                return (short) 0;
            case 5:
                return (short) 0;
            case 6:
                return (short) 0;
            case 7:
                return (short) 0;
            case 8:
                return (short) 0;
            case 9:
                return (short) 0;
            case 10:
                return (short) 0;
            case 11:
                return (short) 0;
            case 12:
                return (short) 0;
            case 13:
                return (short) 0;
            default:
                return super.getCoalescingKey();
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        switch (this.f13191d) {
            case 6:
                WritableMap createMap = Arguments.createMap();
                createMap.putInt("dismissCount", 1);
                break;
        }
        return Arguments.createMap();
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        switch (this.f13191d) {
            case 0:
                return "topAnimationLoaded";
            case 1:
                return "topAttached";
            case 2:
                return "topHeaderBackButtonClicked";
            case 3:
                return "topDetached";
            case 4:
                return "topAppear";
            case 5:
                return "topDisappear";
            case 6:
                return "topDismissed";
            case 7:
                return "topWillAppear";
            case 8:
                return "topWillDisappear";
            case 9:
                return "topSearchBlur";
            case 10:
                return "topClose";
            case 11:
                return "topSearchFocus";
            case 12:
                return "topOpen";
            default:
                return "topFinishTransitioning";
        }
    }
}
