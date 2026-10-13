package gl;

import android.content.Context;
import android.graphics.PointF;
import android.graphics.RectF;
import android.view.ScaleGestureDetector;
import com.otaliastudios.zoom.AbsolutePoint;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomLogger;
import el.h;
import kotlin.jvm.internal.Intrinsics;
import nf.e;

/* loaded from: classes3.dex */
public final class c implements ScaleGestureDetector.OnScaleGestureListener {

    /* renamed from: h, reason: collision with root package name */
    public static final ZoomLogger f9353h;
    public final il.c a;

    /* renamed from: b, reason: collision with root package name */
    public final il.b f9354b;

    /* renamed from: c, reason: collision with root package name */
    public final fl.a f9355c;

    /* renamed from: d, reason: collision with root package name */
    public final hl.b f9356d;

    /* renamed from: e, reason: collision with root package name */
    public final ScaleGestureDetector f9357e;

    /* renamed from: f, reason: collision with root package name */
    public final AbsolutePoint f9358f;

    /* renamed from: g, reason: collision with root package name */
    public final AbsolutePoint f9359g;

    static {
        String tag = c.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        f9353h = new ZoomLogger(tag);
    }

    public c(Context context, il.c zoomManager, il.b panManager, fl.a stateController, hl.b matrixController) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(zoomManager, "zoomManager");
        Intrinsics.checkNotNullParameter(panManager, "panManager");
        Intrinsics.checkNotNullParameter(stateController, "stateController");
        Intrinsics.checkNotNullParameter(matrixController, "matrixController");
        this.a = zoomManager;
        this.f9354b = panManager;
        this.f9355c = stateController;
        this.f9356d = matrixController;
        ScaleGestureDetector scaleGestureDetector = new ScaleGestureDetector(context, this);
        this.f9357e = scaleGestureDetector;
        scaleGestureDetector.setQuickScaleEnabled(false);
        this.f9358f = new AbsolutePoint(Float.NaN, Float.NaN);
        this.f9359g = new AbsolutePoint(0.0f, 0.0f);
    }

    @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
    public final boolean onScale(ScaleGestureDetector detector) {
        Intrinsics.checkNotNullParameter(detector, "detector");
        if (!this.a.G || !this.f9355c.b(2)) {
            return false;
        }
        PointF pointF = new PointF(-detector.getFocusX(), -detector.getFocusY());
        hl.b bVar = this.f9356d;
        RectF rectF = bVar.f10086e;
        AbsolutePoint absolutePoint = ScaledPoint.b(new ScaledPoint(rectF.left + pointF.x, rectF.top + pointF.y), bVar.f());
        AbsolutePoint absolutePoint2 = this.f9358f;
        boolean isNaN = Float.isNaN(absolutePoint2.a);
        ZoomLogger zoomLogger = f9353h;
        if (isNaN) {
            absolutePoint2.b(absolutePoint);
            zoomLogger.a("onScale:", "Setting initial focus:", absolutePoint2);
        } else {
            Intrinsics.checkNotNullParameter(absolutePoint, "absolutePoint");
            AbsolutePoint absolutePoint3 = new AbsolutePoint(absolutePoint2.a - absolutePoint.a, absolutePoint2.f6616b - absolutePoint.f6616b);
            AbsolutePoint absolutePoint4 = this.f9359g;
            absolutePoint4.b(absolutePoint3);
            zoomLogger.a("onScale:", "Got focus offset:", absolutePoint4);
        }
        bVar.c(new b(detector.getScaleFactor() * bVar.f(), this, detector, 1));
        return true;
    }

    @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
    public final boolean onScaleBegin(ScaleGestureDetector detector) {
        Intrinsics.checkNotNullParameter(detector, "detector");
        return true;
    }

    @Override // android.view.ScaleGestureDetector.OnScaleGestureListener
    public final void onScaleEnd(ScaleGestureDetector detector) {
        PointF pointF;
        Float valueOf = Float.valueOf(Float.NaN);
        Intrinsics.checkNotNullParameter(detector, "detector");
        AbsolutePoint absolutePoint = this.f9358f;
        Float valueOf2 = Float.valueOf(absolutePoint.a);
        Float valueOf3 = Float.valueOf(absolutePoint.f6616b);
        il.c cVar = this.a;
        Object[] objArr = {"onScaleEnd:", "mInitialAbsFocusPoint.x:", valueOf2, "mInitialAbsFocusPoint.y:", valueOf3, "mOverZoomEnabled;", Boolean.valueOf(cVar.H)};
        ZoomLogger zoomLogger = f9353h;
        zoomLogger.a(objArr);
        Float valueOf4 = Float.valueOf(0.0f);
        boolean z5 = cVar.H;
        fl.a aVar = this.f9355c;
        int i5 = 0;
        il.b bVar = this.f9354b;
        if (z5 || bVar.f10952v || bVar.f10953w) {
            float A0 = cVar.A0();
            float B0 = cVar.B0();
            hl.b bVar2 = this.f9356d;
            float z02 = cVar.z0(bVar2.f(), false);
            zoomLogger.a("onScaleEnd:", "zoom:", Float.valueOf(bVar2.f()), "newZoom:", Float.valueOf(z02), "max:", Float.valueOf(A0), "min:", Float.valueOf(B0));
            AbsolutePoint b10 = ScaledPoint.b(bVar.C0(), bVar2.f());
            if (b10.a == 0.0f && b10.f6616b == 0.0f && Float.compare(z02, bVar2.f()) == 0) {
                aVar.b(0);
            } else {
                float f2 = bVar2.f();
                RectF rectF = bVar2.f10087f;
                if (f2 <= 1.0f) {
                    AbsolutePoint absolutePoint2 = new AbsolutePoint((-rectF.width()) / 2.0f, (-rectF.height()) / 2.0f);
                    float f10 = bVar2.f();
                    ScaledPoint outPoint = new ScaledPoint();
                    Intrinsics.checkNotNullParameter(outPoint, "outPoint");
                    outPoint.a(Float.valueOf(absolutePoint2.a * f10), Float.valueOf(absolutePoint2.f6616b * f10));
                    ScaledPoint scaledPoint = bVar2.e();
                    Intrinsics.checkNotNullParameter(scaledPoint, "scaledPoint");
                    ScaledPoint scaledPoint2 = new ScaledPoint(outPoint.a - scaledPoint.a, outPoint.f6619b - scaledPoint.f6619b);
                    pointF = new PointF(scaledPoint2.a, scaledPoint2.f6619b);
                    pointF.set(-pointF.x, -pointF.y);
                } else {
                    float f11 = b10.a;
                    float f12 = f11 > 0.0f ? bVar2.j : f11 < 0.0f ? 0.0f : bVar2.j / 2.0f;
                    float f13 = b10.f6616b;
                    pointF = new PointF(f12, f13 > 0.0f ? bVar2.k : f13 < 0.0f ? 0.0f : bVar2.k / 2.0f);
                }
                AbsolutePoint a = bVar2.d().a(b10);
                int i6 = 1;
                if (Float.compare(z02, bVar2.f()) != 0) {
                    AbsolutePoint point = bVar2.d();
                    Intrinsics.checkNotNullParameter(point, "point");
                    AbsolutePoint absolutePoint3 = new AbsolutePoint(point.a, point.f6616b);
                    float f14 = bVar2.f();
                    bVar2.c(new a(z02, pointF, i5));
                    AbsolutePoint b11 = ScaledPoint.b(bVar.C0(), bVar2.f());
                    a.b(bVar2.d().a(b11));
                    bVar2.c(new a(f14, absolutePoint3, i6));
                    b10 = b11;
                }
                if (b10.a == 0.0f && b10.f6616b == 0.0f) {
                    h update = new h(z02, 1);
                    Intrinsics.checkNotNullParameter(update, "update");
                    int i10 = hl.d.k;
                    bVar2.a(e.w(update));
                } else {
                    b update2 = new b(z02, a, pointF, i5);
                    Intrinsics.checkNotNullParameter(update2, "update");
                    int i11 = hl.d.k;
                    bVar2.a(e.w(update2));
                }
            }
        } else {
            aVar.b(0);
        }
        absolutePoint.c(valueOf, valueOf);
        this.f9359g.c(valueOf4, valueOf4);
    }
}
