package lm;

import androidx.core.util.Pools$SynchronizedPool;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends Event {

    /* renamed from: w, reason: collision with root package name */
    public static final Pools$SynchronizedPool f14096w = new Pools$SynchronizedPool(7);

    /* renamed from: d, reason: collision with root package name */
    public mm.b f14097d;

    /* renamed from: e, reason: collision with root package name */
    public short f14098e;

    /* renamed from: i, reason: collision with root package name */
    public int f14099i;

    /* renamed from: v, reason: collision with root package name */
    public a f14100v;

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        int i5 = this.f14099i;
        return !(i5 == 5 || i5 == 6);
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return this.f14098e;
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        int i5 = this.f14099i;
        if (i5 != 5 && i5 != 6) {
            mm.b bVar = this.f14097d;
            Intrinsics.checkNotNull(bVar);
            return ki.b.h(bVar);
        }
        mm.b dataBuilder = this.f14097d;
        Intrinsics.checkNotNull(dataBuilder);
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        WritableMap createMap = Arguments.createMap();
        WritableMap createMap2 = Arguments.createMap();
        dataBuilder.a(createMap2);
        Unit unit = Unit.a;
        createMap.putMap("handlerData", createMap2);
        createMap.putInt("handlerTag", dataBuilder.a);
        createMap.putInt("state", dataBuilder.f14521b);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        int i5 = this.f14099i;
        a aVar = null;
        if (!(i5 == 5 || i5 == 6)) {
            a aVar2 = this.f14100v;
            if (aVar2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("eventHandlerType");
            } else {
                aVar = aVar2;
            }
            return aVar == a.f14094i ? "topGestureHandlerEvent" : "onGestureHandlerEvent";
        }
        a aVar3 = this.f14100v;
        if (aVar3 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("eventHandlerType");
            aVar3 = null;
        }
        if (aVar3 == a.f14094i) {
            return "topGestureHandlerAnimatedEvent";
        }
        a aVar4 = this.f14100v;
        if (aVar4 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("eventHandlerType");
        } else {
            aVar = aVar4;
        }
        return aVar == a.f14093e ? "onGestureHandlerReanimatedEvent" : "onGestureHandlerEvent";
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final void onDispose() {
        this.f14097d = null;
        f14096w.release(this);
    }
}
