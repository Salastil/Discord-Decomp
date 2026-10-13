package ol;

import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.RCTEventEmitter;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends Event {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16127d;

    /* renamed from: e, reason: collision with root package name */
    public final WritableMap f16128e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(WritableMap mEventData, int i5, int i6) {
        super(i5);
        this.f16127d = i6;
        switch (i6) {
            case 1:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 2:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 3:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 4:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 5:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 6:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                super(i5);
                this.f16128e = mEventData;
                break;
            case 7:
                Intrinsics.checkNotNullParameter(mEventData, "mData");
                super(i5);
                this.f16128e = mEventData;
                mEventData.putString("navigationType", JankRecordStore.SCREEN_OTHER);
                mEventData.putBoolean("isTopFrame", true);
                break;
            default:
                Intrinsics.checkNotNullParameter(mEventData, "mEventData");
                this.f16128e = mEventData;
                break;
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        switch (this.f16127d) {
        }
        return false;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final void dispatch(RCTEventEmitter rctEventEmitter) {
        switch (this.f16127d) {
            case 0:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            case 3:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            case 4:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            case 5:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), "topMessage", this.f16128e);
                break;
            case 6:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), internal_getEventNameCompat(), this.f16128e);
                break;
            default:
                Intrinsics.checkNotNullParameter(rctEventEmitter, "rctEventEmitter");
                rctEventEmitter.receiveEvent(getViewTag(), "topShouldStartLoadWithRequest", this.f16128e);
                break;
        }
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        switch (this.f16127d) {
        }
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        switch (this.f16127d) {
            case 0:
                return "topHttpError";
            case 1:
                return "topLoadingError";
            case 2:
                return "topLoadingFinish";
            case 3:
                return "topLoadingProgress";
            case 4:
                return "topLoadingStart";
            case 5:
                return "topMessage";
            case 6:
                return "topRenderProcessGone";
            default:
                return "topShouldStartLoadWithRequest";
        }
    }
}
