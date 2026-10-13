package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import jm.a0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends b {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f14516e = 1;

    /* renamed from: f, reason: collision with root package name */
    public final float f14517f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14518g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14519h;

    /* renamed from: i, reason: collision with root package name */
    public final float f14520i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(jm.b handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14517f = handler.f12893y;
        this.f14518g = handler.f12894z;
        this.f14519h = handler.p();
        this.f14520i = handler.q();
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        switch (this.f14516e) {
            case 0:
                Intrinsics.checkNotNullParameter(eventData, "eventData");
                super.a(eventData);
                eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14517f));
                eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14518g));
                eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14519h));
                eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14520i));
                break;
            default:
                Intrinsics.checkNotNullParameter(eventData, "eventData");
                super.a(eventData);
                eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14517f));
                eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14518g));
                eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14519h));
                eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14520i));
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(a0 handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14517f = handler.f12893y;
        this.f14518g = handler.f12894z;
        this.f14519h = handler.p();
        this.f14520i = handler.q();
    }
}
