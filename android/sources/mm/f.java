package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import jm.q;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends b {

    /* renamed from: e, reason: collision with root package name */
    public final boolean f14534e;

    /* renamed from: f, reason: collision with root package name */
    public final float f14535f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14536g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14537h;

    /* renamed from: i, reason: collision with root package name */
    public final float f14538i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(q handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14534e = handler.k;
        this.f14535f = handler.f12893y;
        this.f14536g = handler.f12894z;
        this.f14537h = handler.p();
        this.f14538i = handler.q();
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        super.a(eventData);
        eventData.putBoolean("pointerInside", this.f14534e);
        eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14535f));
        eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14536g));
        eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14537h));
        eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14538i));
    }
}
