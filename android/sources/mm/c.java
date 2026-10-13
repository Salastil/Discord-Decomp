package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import jm.z;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends b {

    /* renamed from: e, reason: collision with root package name */
    public final float f14524e;

    /* renamed from: f, reason: collision with root package name */
    public final float f14525f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14526g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14527h;

    /* renamed from: i, reason: collision with root package name */
    public final z f14528i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(jm.h handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14524e = handler.f12893y;
        this.f14525f = handler.f12894z;
        this.f14526g = handler.p();
        this.f14527h = handler.q();
        this.f14528i = handler.U;
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        super.a(eventData);
        eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14524e));
        eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14525f));
        eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14526g));
        eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14527h));
        z zVar = this.f14528i;
        if (zVar.f12978e == -1.0d) {
            return;
        }
        eventData.putMap("stylusData", zVar.a());
    }
}
