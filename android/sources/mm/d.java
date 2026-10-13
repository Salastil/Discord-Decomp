package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import jm.i;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d extends b {

    /* renamed from: e, reason: collision with root package name */
    public final float f14529e;

    /* renamed from: f, reason: collision with root package name */
    public final float f14530f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14531g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14532h;

    /* renamed from: i, reason: collision with root package name */
    public final int f14533i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(i handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14529e = handler.f12893y;
        this.f14530f = handler.f12894z;
        this.f14531g = handler.p();
        this.f14532h = handler.q();
        this.f14533i = (int) (handler.Y - handler.X);
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        super.a(eventData);
        eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14529e));
        eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14530f));
        eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14531g));
        eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14532h));
        eventData.putInt("duration", this.f14533i);
    }
}
