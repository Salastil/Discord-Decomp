package hl;

import android.animation.ValueAnimator;
import com.otaliastudios.zoom.AbsolutePoint;
import com.otaliastudios.zoom.ScaledPoint;
import j0.e;
import j0.f;
import java.io.IOException;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import rs.g;

/* loaded from: classes3.dex */
public final class a extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10078d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f10079e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f10080i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(int i5, Object obj, Object obj2) {
        super(1);
        this.f10078d = i5;
        this.f10079e = obj;
        this.f10080i = obj2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f10078d) {
            case 0:
                c applyUpdate = (c) obj;
                ValueAnimator valueAnimator = (ValueAnimator) this.f10080i;
                Intrinsics.checkNotNullParameter(applyUpdate, "$this$applyUpdate");
                d dVar = (d) this.f10079e;
                boolean isNaN = Float.isNaN(dVar.a);
                boolean z5 = dVar.f10108f;
                if (!isNaN) {
                    Object animatedValue = valueAnimator.getAnimatedValue("zoom");
                    if (animatedValue == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Float");
                    }
                    float floatValue = ((Float) animatedValue).floatValue();
                    boolean z6 = dVar.f10104b;
                    applyUpdate.a = floatValue;
                    applyUpdate.f10096b = z6;
                }
                if (dVar.f10105c != null) {
                    Object animatedValue2 = valueAnimator.getAnimatedValue("panX");
                    if (animatedValue2 == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Float");
                    }
                    float floatValue2 = ((Float) animatedValue2).floatValue();
                    Object animatedValue3 = valueAnimator.getAnimatedValue("panY");
                    if (animatedValue3 == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Float");
                    }
                    AbsolutePoint absolutePoint = new AbsolutePoint(floatValue2, ((Float) animatedValue3).floatValue());
                    applyUpdate.f10098d = null;
                    applyUpdate.f10097c = absolutePoint;
                    applyUpdate.f10099e = false;
                    applyUpdate.f10100f = z5;
                } else if (dVar.f10106d != null) {
                    Object animatedValue4 = valueAnimator.getAnimatedValue("panX");
                    if (animatedValue4 == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Float");
                    }
                    float floatValue3 = ((Float) animatedValue4).floatValue();
                    Object animatedValue5 = valueAnimator.getAnimatedValue("panY");
                    if (animatedValue5 == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Float");
                    }
                    applyUpdate.f10098d = new ScaledPoint(floatValue3, ((Float) animatedValue5).floatValue());
                    applyUpdate.f10097c = null;
                    applyUpdate.f10099e = false;
                    applyUpdate.f10100f = z5;
                }
                Float f2 = dVar.f10109g;
                Float f10 = dVar.f10110h;
                applyUpdate.f10101g = f2;
                applyUpdate.f10102h = f10;
                applyUpdate.f10103i = dVar.f10111i;
                return Unit.a;
            case 1:
                j0.d dVar2 = (j0.d) this.f10079e;
                e callback = (e) this.f10080i;
                Intrinsics.checkNotNullParameter(callback, "callback");
                synchronized (dVar2.f12364w) {
                    dVar2.f12366y.remove(callback);
                }
                return Unit.a;
            case 2:
                ((f) this.f10079e).f12369d.removeFrameCallback((e) this.f10080i);
                return Unit.a;
            default:
                IOException it = (IOException) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                g gVar = (g) this.f10079e;
                a3.f fVar = (a3.f) this.f10080i;
                synchronized (gVar) {
                    fVar.g();
                }
                return Unit.a;
        }
    }
}
