package lm;

import androidx.core.util.Pools$SynchronizedPool;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import ks.n;

/* loaded from: classes3.dex */
public final class d extends Event {
    public static final Pools$SynchronizedPool E = new Pools$SynchronizedPool(7);

    /* renamed from: d, reason: collision with root package name */
    public mm.b f14102d;

    /* renamed from: e, reason: collision with root package name */
    public int f14103e;

    /* renamed from: i, reason: collision with root package name */
    public int f14104i;

    /* renamed from: v, reason: collision with root package name */
    public int f14105v;

    /* renamed from: w, reason: collision with root package name */
    public a f14106w;

    @Override // com.facebook.react.uimanager.events.Event
    public final boolean canCoalesce() {
        return false;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    /* renamed from: getEventData */
    public final WritableMap getAccessibilityEventData() {
        int i5 = this.f14105v;
        if (i5 != 5 && i5 != 6) {
            mm.b bVar = this.f14102d;
            Intrinsics.checkNotNull(bVar);
            return n.j(bVar, this.f14103e, this.f14104i);
        }
        mm.b dataBuilder = this.f14102d;
        Intrinsics.checkNotNull(dataBuilder);
        int i6 = this.f14103e;
        int i10 = this.f14104i;
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        WritableMap createMap = Arguments.createMap();
        WritableMap createMap2 = Arguments.createMap();
        dataBuilder.a(createMap2);
        Unit unit = Unit.a;
        createMap.putMap("handlerData", createMap2);
        createMap.putInt("handlerTag", dataBuilder.a);
        createMap.putInt("state", i6);
        createMap.putInt("oldState", i10);
        return createMap;
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        int i5 = this.f14105v;
        if (i5 == 5 || i5 == 6) {
            a aVar = this.f14106w;
            if (aVar == null) {
                Intrinsics.throwUninitializedPropertyAccessException("eventHandlerType");
                aVar = null;
            }
            if (aVar == a.f14093e) {
                return "onGestureHandlerReanimatedStateChange";
            }
        }
        return "onGestureHandlerStateChange";
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final void onDispose() {
        this.f14102d = null;
        this.f14103e = 0;
        this.f14104i = 0;
        E.release(this);
    }
}
