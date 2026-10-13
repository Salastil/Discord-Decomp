package hl;

import android.animation.PropertyValuesHolder;
import android.animation.ValueAnimator;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.view.animation.AccelerateDecelerateInterpolator;
import androidx.appcompat.widget.j0;
import androidx.core.view.y0;
import com.otaliastudios.zoom.AbsolutePoint;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomEngine;
import com.otaliastudios.zoom.ZoomLogger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import nf.e;

/* loaded from: classes3.dex */
public final class b {

    /* renamed from: q, reason: collision with root package name */
    public static final ZoomLogger f10081q;

    /* renamed from: r, reason: collision with root package name */
    public static final AccelerateDecelerateInterpolator f10082r;
    public final il.c a;

    /* renamed from: b, reason: collision with root package name */
    public final il.b f10083b;

    /* renamed from: c, reason: collision with root package name */
    public final fl.a f10084c;

    /* renamed from: d, reason: collision with root package name */
    public final j0 f10085d;

    /* renamed from: e, reason: collision with root package name */
    public final RectF f10086e;

    /* renamed from: f, reason: collision with root package name */
    public final RectF f10087f;

    /* renamed from: g, reason: collision with root package name */
    public final Matrix f10088g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f10089h;

    /* renamed from: i, reason: collision with root package name */
    public final Matrix f10090i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public final ScaledPoint f10091l;

    /* renamed from: m, reason: collision with root package name */
    public final AbsolutePoint f10092m;

    /* renamed from: n, reason: collision with root package name */
    public long f10093n;

    /* renamed from: o, reason: collision with root package name */
    public final LinkedHashSet f10094o;

    /* renamed from: p, reason: collision with root package name */
    public final androidx.appcompat.widget.c f10095p;

    static {
        String tag = b.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        f10081q = new ZoomLogger(tag);
        f10082r = new AccelerateDecelerateInterpolator();
    }

    public b(il.c zoomManager, il.b panManager, fl.a stateController, j0 callback) {
        Intrinsics.checkNotNullParameter(zoomManager, "zoomManager");
        Intrinsics.checkNotNullParameter(panManager, "panManager");
        Intrinsics.checkNotNullParameter(stateController, "stateController");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.a = zoomManager;
        this.f10083b = panManager;
        this.f10084c = stateController;
        this.f10085d = callback;
        this.f10086e = new RectF();
        this.f10087f = new RectF();
        this.f10088g = new Matrix();
        this.f10090i = new Matrix();
        this.f10091l = new ScaledPoint();
        this.f10092m = new AbsolutePoint();
        this.f10093n = 280L;
        this.f10094o = new LinkedHashSet();
        this.f10095p = new androidx.appcompat.widget.c(2, this);
    }

    public final void a(d update) {
        float f2 = update.a;
        AbsolutePoint absolutePoint = update.f10105c;
        Intrinsics.checkNotNullParameter(update, "update");
        if (this.f10089h) {
            int i5 = 3;
            if (this.f10084c.b(3)) {
                ArrayList arrayList = new ArrayList();
                ScaledPoint scaledPoint = update.f10106d;
                boolean z5 = update.f10107e;
                RectF rectF = this.f10086e;
                if (absolutePoint != null) {
                    if (z5) {
                        absolutePoint = d().a(absolutePoint);
                    }
                    PropertyValuesHolder ofFloat = PropertyValuesHolder.ofFloat("panX", rectF.left / f(), absolutePoint.a);
                    Intrinsics.checkNotNullExpressionValue(ofFloat, "ofFloat(\"panX\", panX, target.x)");
                    arrayList.add(ofFloat);
                    PropertyValuesHolder ofFloat2 = PropertyValuesHolder.ofFloat("panY", rectF.top / f(), absolutePoint.f6616b);
                    Intrinsics.checkNotNullExpressionValue(ofFloat2, "ofFloat(\"panY\", panY, target.y)");
                    arrayList.add(ofFloat2);
                } else if (scaledPoint != null) {
                    if (z5) {
                        ScaledPoint e9 = e();
                        Intrinsics.checkNotNullParameter(scaledPoint, "scaledPoint");
                        scaledPoint = new ScaledPoint(e9.a + scaledPoint.a, e9.f6619b + scaledPoint.f6619b);
                    }
                    PropertyValuesHolder ofFloat3 = PropertyValuesHolder.ofFloat("panX", rectF.left, scaledPoint.a);
                    Intrinsics.checkNotNullExpressionValue(ofFloat3, "ofFloat(\"panX\", scaledPanX, target.x)");
                    arrayList.add(ofFloat3);
                    PropertyValuesHolder ofFloat4 = PropertyValuesHolder.ofFloat("panY", rectF.top, scaledPoint.f6619b);
                    Intrinsics.checkNotNullExpressionValue(ofFloat4, "ofFloat(\"panY\", scaledPanY, target.y)");
                    arrayList.add(ofFloat4);
                }
                if (!Float.isNaN(f2)) {
                    PropertyValuesHolder ofFloat5 = PropertyValuesHolder.ofFloat("zoom", f(), this.a.z0(f2, update.f10104b));
                    Intrinsics.checkNotNullExpressionValue(ofFloat5, "ofFloat(\"zoom\", zoom, newZoom)");
                    arrayList.add(ofFloat5);
                }
                Object[] array = arrayList.toArray(new PropertyValuesHolder[0]);
                if (array == null) {
                    throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T>");
                }
                PropertyValuesHolder[] propertyValuesHolderArr = (PropertyValuesHolder[]) array;
                ValueAnimator animator = ValueAnimator.ofPropertyValuesHolder((PropertyValuesHolder[]) Arrays.copyOf(propertyValuesHolderArr, propertyValuesHolderArr.length));
                animator.setDuration(this.f10093n);
                animator.setInterpolator(f10082r);
                animator.addListener(this.f10095p);
                animator.addUpdateListener(new y0(i5, this, update));
                animator.start();
                Intrinsics.checkNotNullExpressionValue(animator, "animator");
                this.f10094o.add(animator);
            }
        }
    }

    public final void b(d update) {
        float f2 = update.a;
        Intrinsics.checkNotNullParameter(update, "update");
        if (this.f10089h) {
            AbsolutePoint absolutePoint = update.f10105c;
            boolean z5 = update.j;
            boolean z6 = update.f10107e;
            RectF rectF = this.f10087f;
            RectF rectF2 = this.f10086e;
            Matrix matrix = this.f10088g;
            if (absolutePoint != null) {
                if (!z6) {
                    AbsolutePoint absolutePoint2 = d();
                    Intrinsics.checkNotNullParameter(absolutePoint2, "absolutePoint");
                    absolutePoint = new AbsolutePoint(absolutePoint.a - absolutePoint2.a, absolutePoint.f6616b - absolutePoint2.f6616b);
                }
                matrix.preTranslate(absolutePoint.a, absolutePoint.f6616b);
                matrix.mapRect(rectF2, rectF);
            } else {
                ScaledPoint scaledPoint = update.f10106d;
                if (scaledPoint != null) {
                    if (!z6) {
                        ScaledPoint scaledPoint2 = e();
                        Intrinsics.checkNotNullParameter(scaledPoint2, "scaledPoint");
                        scaledPoint = new ScaledPoint(scaledPoint.a - scaledPoint2.a, scaledPoint.f6619b - scaledPoint2.f6619b);
                    }
                    matrix.postTranslate(scaledPoint.a, scaledPoint.f6619b);
                    matrix.mapRect(rectF2, rectF);
                }
            }
            if (!Float.isNaN(f2)) {
                float z02 = this.a.z0(f2, update.f10104b) / f();
                Float f10 = update.f10109g;
                float floatValue = f10 != null ? f10.floatValue() : z5 ? 0.0f : this.j / 2.0f;
                Float f11 = update.f10110h;
                matrix.postScale(z02, z02, floatValue, f11 != null ? f11.floatValue() : z5 ? 0.0f : this.k / 2.0f);
                matrix.mapRect(rectF2, rectF);
            }
            boolean z7 = update.f10108f;
            il.b bVar = this.f10083b;
            float A0 = bVar.A0(true, z7);
            float A02 = bVar.A0(false, z7);
            if (A0 != 0.0f || A02 != 0.0f) {
                matrix.postTranslate(A0, A02);
                matrix.mapRect(rectF2, rectF);
            }
            if (update.f10111i) {
                io.sentry.internal.debugmeta.c cVar = ((ZoomEngine) this.f10085d.f1016e).f6624e;
                Iterator it = ((ArrayList) cVar.f11623i).iterator();
                while (it.hasNext()) {
                    el.d dVar = (el.d) it.next();
                    ZoomEngine zoomEngine = (ZoomEngine) cVar.f11622e;
                    b bVar2 = zoomEngine.f6628i;
                    Matrix matrix2 = bVar2.f10090i;
                    matrix2.set(bVar2.f10088g);
                    dVar.onUpdate(zoomEngine, matrix2);
                }
            }
        }
    }

    public final void c(Function1 update) {
        Intrinsics.checkNotNullParameter(update, "update");
        int i5 = d.k;
        b(e.w(update));
    }

    public final AbsolutePoint d() {
        RectF rectF = this.f10086e;
        Float valueOf = Float.valueOf(rectF.left / f());
        Float valueOf2 = Float.valueOf(rectF.top / f());
        AbsolutePoint absolutePoint = this.f10092m;
        absolutePoint.c(valueOf, valueOf2);
        return absolutePoint;
    }

    public final ScaledPoint e() {
        RectF rectF = this.f10086e;
        Float valueOf = Float.valueOf(rectF.left);
        Float valueOf2 = Float.valueOf(rectF.top);
        ScaledPoint scaledPoint = this.f10091l;
        scaledPoint.a(valueOf, valueOf2);
        return scaledPoint;
    }

    public final float f() {
        return this.f10086e.width() / this.f10087f.width();
    }

    public final void g(float f2, boolean z5) {
        il.c cVar;
        boolean z6;
        Matrix matrix = this.f10088g;
        RectF rectF = this.f10086e;
        RectF rectF2 = this.f10087f;
        matrix.mapRect(rectF, rectF2);
        if (rectF2.width() <= 0.0f || rectF2.height() <= 0.0f) {
            return;
        }
        float f10 = this.j;
        if (f10 <= 0.0f || this.k <= 0.0f) {
            return;
        }
        Object[] data = {"onSizeChanged:", "containerWidth:", Float.valueOf(f10), "containerHeight:", Float.valueOf(this.k), "contentWidth:", Float.valueOf(rectF2.width()), "contentHeight:", Float.valueOf(rectF2.height())};
        ZoomLogger zoomLogger = f10081q;
        zoomLogger.getClass();
        Intrinsics.checkNotNullParameter(data, "data");
        zoomLogger.d(ZoomLogger.b(2, Arrays.copyOf(data, 9)));
        boolean z7 = !this.f10089h || z5;
        this.f10089h = true;
        ZoomLogger zoomLogger2 = ZoomEngine.f6620l;
        Boolean valueOf = Boolean.valueOf(z7);
        Float valueOf2 = Float.valueOf(f2);
        ZoomEngine zoomEngine = (ZoomEngine) this.f10085d.f1016e;
        b bVar = zoomEngine.f6628i;
        int i5 = zoomEngine.a;
        il.c cVar2 = zoomEngine.f6627h;
        Object[] data2 = {"onMatrixSizeChanged: firstTime:", valueOf, "oldZoom:", valueOf2, "transformation:", Integer.valueOf(i5), "transformationZoom:", Float.valueOf(cVar2.f10957v)};
        zoomLogger2.getClass();
        Intrinsics.checkNotNullParameter(data2, "data");
        zoomLogger2.d(ZoomLogger.b(2, Arrays.copyOf(data2, 8)));
        zoomEngine.f6625f.b(0);
        if (z7) {
            cVar = cVar2;
            cVar.f10957v = ZoomEngine.a(zoomEngine);
            bVar.c(new el.b(zoomEngine, 0));
            float f11 = (bVar.f() * bVar.f10087f.width()) - bVar.j;
            float f12 = (bVar.f() * bVar.f10087f.height()) - bVar.k;
            int i6 = zoomEngine.f6621b;
            il.b bVar2 = zoomEngine.f6626g;
            if (i6 == 0) {
                int i10 = bVar2.E;
                int i11 = i10 & 240;
                int i12 = 16;
                int i13 = i11 != 16 ? i11 != 32 ? 1 : 5 : 3;
                int i14 = i10 & (-241);
                z6 = true;
                if (i14 == 1) {
                    i12 = 48;
                } else if (i14 == 2) {
                    i12 = 80;
                }
                i6 = i13 | i12;
            } else {
                z6 = true;
            }
            bVar2.getClass();
            bVar.c(new el.c(new ScaledPoint(-il.b.z0(i6, f11, z6), -il.b.z0(i6, f12, false)), 0));
        } else {
            cVar = cVar2;
            cVar.f10957v = ZoomEngine.a(zoomEngine);
            bVar.c(new el.b(zoomEngine, 1));
        }
        zoomLogger2.a("onMatrixSizeChanged: newTransformationZoom:", Float.valueOf(cVar.f10957v), "newRealZoom:", Float.valueOf(bVar.f()), "newZoom:", Float.valueOf(zoomEngine.d()));
    }
}
