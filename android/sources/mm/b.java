package mm;

import com.facebook.react.bridge.WritableMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14521b;

    /* renamed from: c, reason: collision with root package name */
    public final int f14522c;

    /* renamed from: d, reason: collision with root package name */
    public final int f14523d;

    public b(jm.f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.a = handler.f12874d;
        this.f14521b = handler.f12878h;
        this.f14522c = handler.I;
        this.f14523d = handler.D;
    }

    public void a(WritableMap eventData) {
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        eventData.putInt("numberOfPointers", this.f14523d);
        eventData.putInt("pointerType", this.f14522c);
    }
}
