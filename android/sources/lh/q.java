package lh;

import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Shader;

/* loaded from: classes3.dex */
public final class q extends u {

    /* renamed from: c, reason: collision with root package name */
    public final s f14028c;

    /* renamed from: d, reason: collision with root package name */
    public final float f14029d;

    /* renamed from: e, reason: collision with root package name */
    public final float f14030e;

    public q(s sVar, float f2, float f10) {
        this.f14028c = sVar;
        this.f14029d = f2;
        this.f14030e = f10;
    }

    @Override // lh.u
    public final void a(Matrix matrix, kh.a aVar, int i5, Canvas canvas) {
        s sVar = this.f14028c;
        float f2 = sVar.f14039c;
        float f10 = this.f14030e;
        float f11 = sVar.f14038b;
        float f12 = this.f14029d;
        RectF rectF = new RectF(0.0f, 0.0f, (float) Math.hypot(f2 - f10, f11 - f12), 0.0f);
        Matrix matrix2 = this.a;
        matrix2.set(matrix);
        matrix2.preTranslate(f12, f10);
        matrix2.preRotate(b());
        aVar.getClass();
        rectF.bottom += i5;
        rectF.offset(0.0f, -i5);
        int i6 = aVar.f13374f;
        int[] iArr = kh.a.f13368i;
        iArr[0] = i6;
        iArr[1] = aVar.f13373e;
        iArr[2] = aVar.f13372d;
        Paint paint = aVar.f13371c;
        float f13 = rectF.left;
        paint.setShader(new LinearGradient(f13, rectF.top, f13, rectF.bottom, iArr, kh.a.j, Shader.TileMode.CLAMP));
        canvas.save();
        canvas.concat(matrix2);
        canvas.drawRect(rectF, paint);
        canvas.restore();
    }

    public final float b() {
        s sVar = this.f14028c;
        return (float) Math.toDegrees(Math.atan((sVar.f14039c - this.f14030e) / (sVar.f14038b - this.f14029d)));
    }
}
