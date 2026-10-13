package lh;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RadialGradient;
import android.graphics.RectF;
import android.graphics.Region;
import android.graphics.Shader;

/* loaded from: classes3.dex */
public final class p extends u {

    /* renamed from: c, reason: collision with root package name */
    public final r f14027c;

    public p(r rVar) {
        this.f14027c = rVar;
    }

    @Override // lh.u
    public final void a(Matrix matrix, kh.a aVar, int i5, Canvas canvas) {
        float f2;
        r rVar = this.f14027c;
        float f10 = rVar.f14036f;
        float f11 = rVar.f14037g;
        RectF rectF = new RectF(rVar.f14032b, rVar.f14033c, rVar.f14034d, rVar.f14035e);
        Paint paint = aVar.f13370b;
        boolean z5 = f11 < 0.0f;
        Path path = aVar.f13375g;
        int[] iArr = kh.a.k;
        if (z5) {
            iArr[0] = 0;
            iArr[1] = aVar.f13374f;
            iArr[2] = aVar.f13373e;
            iArr[3] = aVar.f13372d;
            f2 = 0.0f;
        } else {
            path.rewind();
            f2 = 0.0f;
            path.moveTo(rectF.centerX(), rectF.centerY());
            path.arcTo(rectF, f10, f11);
            path.close();
            float f12 = -i5;
            rectF.inset(f12, f12);
            iArr[0] = 0;
            iArr[1] = aVar.f13372d;
            iArr[2] = aVar.f13373e;
            iArr[3] = aVar.f13374f;
        }
        float width = rectF.width() / 2.0f;
        if (width <= f2) {
            return;
        }
        float f13 = 1.0f - (i5 / width);
        float[] fArr = kh.a.f13369l;
        fArr[1] = f13;
        fArr[2] = ((1.0f - f13) / 2.0f) + f13;
        paint.setShader(new RadialGradient(rectF.centerX(), rectF.centerY(), width, iArr, fArr, Shader.TileMode.CLAMP));
        canvas.save();
        canvas.concat(matrix);
        canvas.scale(1.0f, rectF.height() / rectF.width());
        if (!z5) {
            canvas.clipPath(path, Region.Op.DIFFERENCE);
            canvas.drawPath(path, aVar.f13376h);
        }
        canvas.drawArc(rectF, f10, f11, true, paint);
        canvas.restore();
    }
}
