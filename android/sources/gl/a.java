package gl;

import android.graphics.PointF;
import com.otaliastudios.zoom.AbsolutePoint;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class a extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9346d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ float f9347e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f9348i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(float f2, Object obj, int i5) {
        super(1);
        this.f9346d = i5;
        this.f9347e = f2;
        this.f9348i = obj;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f9346d) {
            case 0:
                hl.c applyUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate, "$this$applyUpdate");
                applyUpdate.a = this.f9347e;
                applyUpdate.f10096b = true;
                PointF pointF = (PointF) this.f9348i;
                Float valueOf = Float.valueOf(pointF.x);
                Float valueOf2 = Float.valueOf(pointF.y);
                applyUpdate.f10101g = valueOf;
                applyUpdate.f10102h = valueOf2;
                applyUpdate.f10100f = true;
                applyUpdate.f10103i = false;
                break;
            default:
                hl.c applyUpdate2 = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate2, "$this$applyUpdate");
                applyUpdate2.a = this.f9347e;
                applyUpdate2.f10096b = true;
                AbsolutePoint absolutePoint = (AbsolutePoint) this.f9348i;
                applyUpdate2.f10098d = null;
                applyUpdate2.f10097c = absolutePoint;
                applyUpdate2.f10099e = false;
                applyUpdate2.f10100f = true;
                applyUpdate2.f10103i = false;
                break;
        }
        return Unit.a;
    }
}
