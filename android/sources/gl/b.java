package gl;

import android.graphics.PointF;
import android.view.ScaleGestureDetector;
import com.otaliastudios.zoom.AbsolutePoint;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class b extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9349d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ float f9350e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f9351i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f9352v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(float f2, Object obj, Object obj2, int i5) {
        super(1);
        this.f9349d = i5;
        this.f9350e = f2;
        this.f9351i = obj;
        this.f9352v = obj2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f9349d) {
            case 0:
                hl.c animateUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(animateUpdate, "$this$animateUpdate");
                animateUpdate.a = this.f9350e;
                animateUpdate.f10096b = true;
                AbsolutePoint absolutePoint = (AbsolutePoint) this.f9351i;
                animateUpdate.f10098d = null;
                animateUpdate.f10097c = absolutePoint;
                animateUpdate.f10099e = false;
                animateUpdate.f10100f = true;
                PointF pointF = (PointF) this.f9352v;
                Float valueOf = Float.valueOf(pointF.x);
                Float valueOf2 = Float.valueOf(pointF.y);
                animateUpdate.f10101g = valueOf;
                animateUpdate.f10102h = valueOf2;
                break;
            default:
                hl.c applyUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate, "$this$applyUpdate");
                applyUpdate.a = this.f9350e;
                applyUpdate.f10096b = true;
                AbsolutePoint absolutePoint2 = ((c) this.f9351i).f9359g;
                applyUpdate.f10098d = null;
                applyUpdate.f10097c = absolutePoint2;
                applyUpdate.f10099e = true;
                applyUpdate.f10100f = true;
                ScaleGestureDetector scaleGestureDetector = (ScaleGestureDetector) this.f9352v;
                Float valueOf3 = Float.valueOf(scaleGestureDetector.getFocusX());
                Float valueOf4 = Float.valueOf(scaleGestureDetector.getFocusY());
                applyUpdate.f10101g = valueOf3;
                applyUpdate.f10102h = valueOf4;
                break;
        }
        return Unit.a;
    }
}
