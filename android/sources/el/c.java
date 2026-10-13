package el;

import com.otaliastudios.zoom.ScaledPoint;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes3.dex */
public final class c extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8153d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ScaledPoint f8154e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(ScaledPoint scaledPoint, int i5) {
        super(1);
        this.f8153d = i5;
        this.f8154e = scaledPoint;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f8153d) {
            case 0:
                hl.c applyUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate, "$this$applyUpdate");
                applyUpdate.f10098d = this.f8154e;
                applyUpdate.f10097c = null;
                applyUpdate.f10099e = false;
                applyUpdate.f10100f = false;
                break;
            case 1:
                hl.c animateUpdate = (hl.c) obj;
                Intrinsics.checkNotNullParameter(animateUpdate, "$this$animateUpdate");
                animateUpdate.f10098d = this.f8154e;
                animateUpdate.f10097c = null;
                animateUpdate.f10099e = true;
                animateUpdate.f10100f = true;
                break;
            case 2:
                hl.c applyUpdate2 = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate2, "$this$applyUpdate");
                applyUpdate2.f10098d = this.f8154e;
                applyUpdate2.f10097c = null;
                applyUpdate2.f10099e = false;
                applyUpdate2.f10100f = true;
                break;
            default:
                hl.c applyUpdate3 = (hl.c) obj;
                Intrinsics.checkNotNullParameter(applyUpdate3, "$this$applyUpdate");
                applyUpdate3.f10098d = this.f8154e;
                applyUpdate3.f10097c = null;
                applyUpdate3.f10099e = true;
                applyUpdate3.f10100f = true;
                break;
        }
        return Unit.a;
    }
}
