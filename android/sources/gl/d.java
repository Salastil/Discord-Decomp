package gl;

import a3.h;
import android.content.Context;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.OverScroller;
import androidx.appcompat.widget.j0;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomEngine;
import com.otaliastudios.zoom.ZoomLogger;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements GestureDetector.OnGestureListener {
    public static final ZoomLogger K;
    public boolean E;
    public boolean F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;

    /* renamed from: d, reason: collision with root package name */
    public final il.b f9360d;

    /* renamed from: e, reason: collision with root package name */
    public final fl.a f9361e;

    /* renamed from: i, reason: collision with root package name */
    public final hl.b f9362i;

    /* renamed from: v, reason: collision with root package name */
    public final GestureDetector f9363v;

    /* renamed from: w, reason: collision with root package name */
    public final OverScroller f9364w;

    /* renamed from: x, reason: collision with root package name */
    public final il.a f9365x;

    /* renamed from: y, reason: collision with root package name */
    public final il.a f9366y;

    static {
        String tag = d.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        K = new ZoomLogger(tag);
    }

    public d(Context context, il.b panManager, fl.a stateController, hl.b matrixController) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(panManager, "panManager");
        Intrinsics.checkNotNullParameter(stateController, "stateController");
        Intrinsics.checkNotNullParameter(matrixController, "matrixController");
        this.f9360d = panManager;
        this.f9361e = stateController;
        this.f9362i = matrixController;
        GestureDetector gestureDetector = new GestureDetector(context, this);
        gestureDetector.setOnDoubleTapListener(null);
        Unit unit = Unit.a;
        this.f9363v = gestureDetector;
        this.f9364w = new OverScroller(context);
        this.f9365x = new il.a();
        this.f9366y = new il.a();
        this.E = true;
        this.F = true;
        this.G = true;
        this.H = true;
        this.I = true;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        this.f9364w.forceFinished(true);
        return true;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        il.b bVar;
        boolean z5;
        if (!this.E || (!(z5 = (bVar = this.f9360d).f10954x) && !bVar.f10955y)) {
            return false;
        }
        int i5 = (int) (z5 ? f2 : 0.0f);
        int i6 = (int) (bVar.f10955y ? f10 : 0.0f);
        il.a aVar = this.f9365x;
        bVar.B0(true, aVar);
        il.a aVar2 = this.f9366y;
        bVar.B0(false, aVar2);
        int i10 = aVar.a;
        int i11 = aVar.f10948b;
        int i12 = aVar.f10949c;
        int i13 = aVar2.a;
        int i14 = aVar2.f10948b;
        int i15 = aVar2.f10949c;
        if ((this.J || (!aVar.f10950d && !aVar2.f10950d)) && ((i10 < i12 || i13 < i15 || bVar.f10952v || bVar.f10953w) && this.f9361e.b(4))) {
            this.f9363v.setIsLongpressEnabled(false);
            float D0 = bVar.f10952v ? bVar.D0() : 0.0f;
            float E0 = bVar.f10953w ? bVar.E0() : 0.0f;
            Object[] objArr = {"startFling", "velocityX:", Integer.valueOf(i5), "velocityY:", Integer.valueOf(i6)};
            ZoomLogger zoomLogger = K;
            zoomLogger.a(objArr);
            zoomLogger.a("startFling", "flingX:", "min:", Integer.valueOf(i10), "max:", Integer.valueOf(i12), "start:", Integer.valueOf(i11), "overScroll:", Float.valueOf(E0));
            zoomLogger.a("startFling", "flingY:", "min:", Integer.valueOf(i13), "max:", Integer.valueOf(i15), "start:", Integer.valueOf(i14), "overScroll:", Float.valueOf(D0));
            this.f9364w.fling(i11, i14, i5, i6, i10, i12, i13, i15, (int) D0, (int) E0);
            h action = new h(15, this);
            Intrinsics.checkNotNullParameter(action, "action");
            j0 j0Var = this.f9362i.f10085d;
            Intrinsics.checkNotNullParameter(action, "action");
            ZoomLayoutFixed zoomLayoutFixed = ((ZoomEngine) j0Var.f1016e).f6622c;
            if (zoomLayoutFixed != null) {
                zoomLayoutFixed.post(action);
                return true;
            }
            Intrinsics.throwUninitializedPropertyAccessException("container");
            throw null;
        }
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f2, float f10) {
        if (this.F) {
            boolean z5 = motionEvent2 != null && motionEvent2.getPointerCount() == 1;
            boolean z6 = motionEvent2 != null && motionEvent2.getPointerCount() == 2;
            boolean z7 = motionEvent2 != null && motionEvent2.getPointerCount() == 3;
            if ((this.G || !z5) && ((this.H || !z6) && (this.I || !z7))) {
                il.b bVar = this.f9360d;
                if ((bVar.f10954x || bVar.f10955y) && this.f9361e.b(1)) {
                    ScaledPoint scaledPoint = new ScaledPoint(-f2, -f10);
                    ScaledPoint C0 = bVar.C0();
                    float f11 = C0.a;
                    ZoomLogger zoomLogger = K;
                    if ((f11 < 0.0f && scaledPoint.a > 0.0f) || (f11 > 0.0f && scaledPoint.a < 0.0f)) {
                        float pow = (1.0f - ((float) Math.pow(Math.abs(f11) / bVar.D0(), 0.4d))) * 0.6f;
                        zoomLogger.a("onScroll", "applying friction X:", Float.valueOf(pow));
                        scaledPoint.a *= pow;
                    }
                    float f12 = C0.f6619b;
                    if ((f12 < 0.0f && scaledPoint.f6619b > 0.0f) || (f12 > 0.0f && scaledPoint.f6619b < 0.0f)) {
                        float pow2 = (1.0f - ((float) Math.pow(Math.abs(f12) / bVar.E0(), 0.4d))) * 0.6f;
                        zoomLogger.a("onScroll", "applying friction Y:", Float.valueOf(pow2));
                        scaledPoint.f6619b *= pow2;
                    }
                    if (!bVar.f10954x) {
                        scaledPoint.a = 0.0f;
                    }
                    if (!bVar.f10955y) {
                        scaledPoint.f6619b = 0.0f;
                    }
                    if (scaledPoint.a == 0.0f && scaledPoint.f6619b == 0.0f) {
                        return true;
                    }
                    this.f9362i.c(new el.c(scaledPoint, 3));
                    return true;
                }
            }
        }
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final boolean onSingleTapUp(MotionEvent motionEvent) {
        return false;
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onLongPress(MotionEvent motionEvent) {
    }

    @Override // android.view.GestureDetector.OnGestureListener
    public final void onShowPress(MotionEvent motionEvent) {
    }
}
