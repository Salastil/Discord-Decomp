package fn;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.events.Event;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c extends Event implements tm.a {

    /* renamed from: d, reason: collision with root package name */
    public final String f8802d;

    /* renamed from: e, reason: collision with root package name */
    public final String f8803e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(int i5, int i6, String name, String registrationName) {
        super(i5, i6);
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(registrationName, "registrationName");
        this.f8802d = name;
        this.f8803e = registrationName;
    }

    @Override // tm.a
    public final String d() {
        return this.f8803e;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public final short getCoalescingKey() {
        return (short) 0;
    }

    @Override // com.facebook.react.uimanager.events.Event
    public WritableMap getEventData() {
        return Arguments.createMap();
    }

    @Override // com.facebook.react.uimanager.events.Event, tm.a
    /* renamed from: getEventName */
    public final String getName() {
        return this.f8802d;
    }
}
