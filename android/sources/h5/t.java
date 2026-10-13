package h5;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.view.View;

/* loaded from: classes.dex */
public final class t extends View {
    public float E;
    public float F;
    public float G;
    public boolean H;
    public boolean I;

    /* renamed from: d, reason: collision with root package name */
    public final Paint f9561d;

    /* renamed from: e, reason: collision with root package name */
    public final Paint f9562e;

    /* renamed from: i, reason: collision with root package name */
    public final Path f9563i;

    /* renamed from: v, reason: collision with root package name */
    public s f9564v;

    /* renamed from: w, reason: collision with root package name */
    public int f9565w;

    /* renamed from: x, reason: collision with root package name */
    public int f9566x;

    /* renamed from: y, reason: collision with root package name */
    public float f9567y;

    public t(Context context) {
        super(context);
        this.f9565w = 0;
        this.f9566x = 0;
        this.f9567y = 1.0f;
        this.E = 1.0f;
        this.F = 0.75f;
        this.G = 0.5f;
        this.H = true;
        this.I = true;
        Paint paint = new Paint(1);
        this.f9561d = paint;
        paint.setStyle(Paint.Style.FILL);
        Paint paint2 = new Paint(1);
        this.f9562e = paint2;
        paint2.setStyle(Paint.Style.STROKE);
        Path path = new Path();
        path.setFillType(Path.FillType.EVEN_ODD);
        this.f9563i = path;
    }

    public final void a(int i5, int i6) {
        int round;
        int round2;
        if (i5 <= 0 || i6 <= 0) {
            return;
        }
        float f2 = i5;
        float f10 = i6;
        float f11 = f2 / f10;
        float f12 = this.f9567y / this.E;
        float f13 = this.F;
        if (f11 <= f12) {
            round2 = Math.round(f2 * f13);
            round = Math.round(round2 / f12);
        } else {
            round = Math.round(f10 * f13);
            round2 = Math.round(round * f12);
        }
        int i10 = (i5 - round2) / 2;
        int round3 = Math.round((i6 - round) * this.G);
        this.f9564v = new s(i10, round3, round2 + i10, round + round3);
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        float f2;
        s sVar = this.f9564v;
        if (sVar == null) {
            return;
        }
        int width = getWidth();
        int height = getHeight();
        float f10 = sVar.f9558b;
        float f11 = sVar.a;
        float f12 = sVar.f9559c;
        float f13 = sVar.f9560d;
        float f14 = this.f9565w;
        float f15 = this.f9566x;
        boolean z5 = this.H;
        boolean z6 = this.I;
        Paint paint = this.f9562e;
        Paint paint2 = this.f9561d;
        Path path = this.f9563i;
        if (f15 <= 0.0f) {
            if (z5) {
                path.reset();
                path.moveTo(f11, f10);
                path.lineTo(f12, f10);
                path.lineTo(f12, f13);
                path.lineTo(f11, f13);
                path.lineTo(f11, f10);
                path.moveTo(0.0f, 0.0f);
                float f16 = width;
                path.lineTo(f16, 0.0f);
                float f17 = height;
                path.lineTo(f16, f17);
                path.lineTo(0.0f, f17);
                path.lineTo(0.0f, 0.0f);
                canvas.drawPath(path, paint2);
            }
            if (z6) {
                path.reset();
                float f18 = f10 + f14;
                path.moveTo(f11, f18);
                path.lineTo(f11, f10);
                float f19 = f11 + f14;
                path.lineTo(f19, f10);
                float f20 = f12 - f14;
                path.moveTo(f20, f10);
                path.lineTo(f12, f10);
                path.lineTo(f12, f18);
                float f21 = f13 - f14;
                path.moveTo(f12, f21);
                path.lineTo(f12, f13);
                path.lineTo(f20, f13);
                path.moveTo(f19, f13);
                path.lineTo(f11, f13);
                path.lineTo(f11, f21);
                canvas.drawPath(path, paint);
                return;
            }
            return;
        }
        float min = Math.min(f15, Math.max(f14 - 1.0f, 0.0f));
        if (z5) {
            path.reset();
            float f22 = f10 + min;
            path.moveTo(f11, f22);
            float f23 = f11 + min;
            path.quadTo(f11, f10, f23, f10);
            float f24 = f12 - min;
            path.lineTo(f24, f10);
            path.quadTo(f12, f10, f12, f22);
            f2 = min;
            float f25 = f13 - f2;
            path.lineTo(f12, f25);
            path.quadTo(f12, f13, f24, f13);
            path.lineTo(f23, f13);
            path.quadTo(f11, f13, f11, f25);
            path.lineTo(f11, f22);
            path.moveTo(0.0f, 0.0f);
            float f26 = width;
            path.lineTo(f26, 0.0f);
            float f27 = height;
            path.lineTo(f26, f27);
            path.lineTo(0.0f, f27);
            path.lineTo(0.0f, 0.0f);
            canvas.drawPath(path, paint2);
        } else {
            f2 = min;
        }
        if (z6) {
            path.reset();
            float f28 = f10 + f14;
            path.moveTo(f11, f28);
            float f29 = f10 + f2;
            path.lineTo(f11, f29);
            float f30 = f11 + f2;
            path.quadTo(f11, f10, f30, f10);
            float f31 = f11 + f14;
            path.lineTo(f31, f10);
            float f32 = f12 - f14;
            path.moveTo(f32, f10);
            float f33 = f12 - f2;
            path.lineTo(f33, f10);
            path.quadTo(f12, f10, f12, f29);
            path.lineTo(f12, f28);
            float f34 = f13 - f14;
            path.moveTo(f12, f34);
            float f35 = f13 - f2;
            path.lineTo(f12, f35);
            path.quadTo(f12, f13, f33, f13);
            path.lineTo(f32, f13);
            path.moveTo(f31, f13);
            path.lineTo(f30, f13);
            path.quadTo(f11, f13, f11, f35);
            path.lineTo(f11, f34);
            canvas.drawPath(path, paint);
        }
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        a(i10 - i5, i11 - i6);
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        a(getMeasuredWidth(), getMeasuredHeight());
    }
}
