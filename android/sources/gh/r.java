package gh;

import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.Rect;
import android.os.Build;

/* loaded from: classes3.dex */
public abstract class r {
    public final k a;

    /* renamed from: b, reason: collision with root package name */
    public final Path f9320b;

    /* renamed from: c, reason: collision with root package name */
    public final Path f9321c;

    /* renamed from: d, reason: collision with root package name */
    public final PathMeasure f9322d;

    /* renamed from: e, reason: collision with root package name */
    public final Matrix f9323e;

    public r(k kVar) {
        Path path = new Path();
        this.f9320b = path;
        this.f9321c = new Path();
        this.f9322d = new PathMeasure(path, false);
        this.a = kVar;
        this.f9323e = new Matrix();
    }

    public abstract void a();

    public final void b(Canvas canvas, Rect rect, float f2, boolean z5, boolean z6) {
        this.a.b();
        e eVar = (e) this;
        float width = rect.width() / eVar.g();
        float height = rect.height() / eVar.g();
        k kVar = eVar.a;
        float f10 = (kVar.f9300p / 2.0f) + kVar.f9301q;
        canvas.translate((f10 * width) + rect.left, (f10 * height) + rect.top);
        canvas.rotate(-90.0f);
        canvas.scale(width, height);
        if (kVar.f9302r != 0) {
            canvas.scale(1.0f, -1.0f);
            if (Build.VERSION.SDK_INT == 29) {
                canvas.rotate(0.1f);
            }
        }
        float f11 = -f10;
        canvas.clipRect(f11, f11, f10, f10);
        eVar.f9254f = kVar.a * f2;
        eVar.f9255g = Math.min(r10 / 2, kVar.f9290d ? (int) (r11 * kVar.f9289c) : kVar.f9288b) * f2;
        eVar.f9256h = kVar.f9296l * f2;
        int i5 = kVar.f9300p;
        int i6 = kVar.a;
        float f12 = (i5 - i6) / 2.0f;
        eVar.f9257i = f12;
        if (z5 || z6) {
            float f13 = ((1.0f - f2) * i6) / 2.0f;
            if ((z5 && kVar.f9293g == 2) || (z6 && kVar.f9294h == 1)) {
                eVar.f9257i = f12 + f13;
            } else if ((z5 && kVar.f9293g == 1) || (z6 && kVar.f9294h == 2)) {
                eVar.f9257i = f12 - f13;
            }
        }
        if (z6 && kVar.f9294h == 3) {
            eVar.f9261o = f2;
        } else {
            eVar.f9261o = 1.0f;
        }
    }
}
