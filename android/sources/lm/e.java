package lm;

import androidx.core.util.Pools$SynchronizedPool;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends Event {

    /* renamed from: w, reason: collision with root package name */
    public static final Pools$SynchronizedPool f14107w = new Pools$SynchronizedPool(7);

    /* renamed from: d, reason: collision with root package name */
    public WritableMap f14108d;

    /* renamed from: e, reason: collision with root package name */
    public short f14109e;

    /* renamed from: i, reason: collision with root package name */
    public int f14110i;

    /* renamed from: v, reason: collision with root package name */
    public a f14111v;

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        int i5 = this.f14110i;
        return !(i5 == 5 || i5 == 6);
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return this.f14109e;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final WritableMap getEventData() {
        return this.f14108d;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    public final String getEventName() {
        int i5 = this.f14110i;
        if (!(i5 == 5 || i5 == 6)) {
            return "onGestureHandlerEvent";
        }
        a aVar = this.f14111v;
        if (aVar == null) {
            Intrinsics.throwUninitializedPropertyAccessException("eventHandlerType");
            aVar = null;
        }
        return aVar == a.f14093e ? "onGestureHandlerReanimatedTouchEvent" : "onGestureHandlerTouchEvent";
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final void onDispose() {
        this.f14108d = null;
        f14107w.release(this);
    }
}
