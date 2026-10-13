package mm;

import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import jm.s;
import jm.z;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends b {

    /* renamed from: e, reason: collision with root package name */
    public final float f14539e;

    /* renamed from: f, reason: collision with root package name */
    public final float f14540f;

    /* renamed from: g, reason: collision with root package name */
    public final float f14541g;

    /* renamed from: h, reason: collision with root package name */
    public final float f14542h;

    /* renamed from: i, reason: collision with root package name */
    public final float f14543i;
    public final float j;
    public final float k;

    /* renamed from: l, reason: collision with root package name */
    public final float f14544l;

    /* renamed from: m, reason: collision with root package name */
    public final z f14545m;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(s handler) {
        super(handler);
        Intrinsics.checkNotNullParameter(handler, "handler");
        this.f14539e = handler.f12893y;
        this.f14540f = handler.f12894z;
        this.f14541g = handler.p();
        this.f14542h = handler.q();
        this.f14543i = (handler.f12938n0 - handler.f12934j0) + handler.f12936l0;
        this.j = (handler.f12939o0 - handler.f12935k0) + handler.f12937m0;
        this.k = handler.S;
        this.f14544l = handler.T;
        this.f14545m = handler.f12945u0;
    }

    @Override // mm.b
    public final void a(WritableMap eventData) {
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        super.a(eventData);
        eventData.putDouble("x", PixelUtil.toDIPFromPixel(this.f14539e));
        eventData.putDouble("y", PixelUtil.toDIPFromPixel(this.f14540f));
        eventData.putDouble("absoluteX", PixelUtil.toDIPFromPixel(this.f14541g));
        eventData.putDouble("absoluteY", PixelUtil.toDIPFromPixel(this.f14542h));
        eventData.putDouble("translationX", PixelUtil.toDIPFromPixel(this.f14543i));
        eventData.putDouble("translationY", PixelUtil.toDIPFromPixel(this.j));
        eventData.putDouble("velocityX", PixelUtil.toDIPFromPixel(this.k));
        eventData.putDouble("velocityY", PixelUtil.toDIPFromPixel(this.f14544l));
        z zVar = this.f14545m;
        if (zVar.f12978e == -1.0d) {
            return;
        }
        eventData.putMap("stylusData", zVar.a());
    }
}
