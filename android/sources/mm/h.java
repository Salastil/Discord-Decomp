package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import jm.t;
import jm.w;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends b {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f14546e = 0;

    /* renamed from: f, reason: collision with root package name */
    public final double f14547f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14548g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14549h;

    /* renamed from: i, reason: collision with root package name */
    public final double f14550i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(t handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14547f = handler.S;
        this.f14548g = handler.U;
        this.f14549h = handler.V;
        this.f14550i = handler.T;
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        switch (this.f14546e) {
            case 0:
                Intrinsics.checkNotNullParameter(eventData, "eventData");
                super.a(eventData);
                eventData.putDouble("scale", this.f14547f);
                eventData.putDouble("focalX", PixelUtil.toDIPFromPixel(this.f14548g));
                eventData.putDouble("focalY", PixelUtil.toDIPFromPixel(this.f14549h));
                eventData.putDouble("velocity", this.f14550i);
                break;
            default:
                Intrinsics.checkNotNullParameter(eventData, "eventData");
                super.a(eventData);
                eventData.putDouble(ViewProps.ROTATION, this.f14547f);
                eventData.putDouble("anchorX", PixelUtil.toDIPFromPixel(this.f14548g));
                eventData.putDouble("anchorY", PixelUtil.toDIPFromPixel(this.f14549h));
                eventData.putDouble("velocity", this.f14550i);
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(w handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14547f = handler.T;
        this.f14548g = handler.V;
        this.f14549h = handler.W;
        this.f14550i = handler.U;
    }
}
