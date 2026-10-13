package lh;

import android.graphics.Matrix;
import android.graphics.Path;
import android.graphics.RectF;

/* loaded from: classes3.dex */
public final class r extends t {

    /* renamed from: h, reason: collision with root package name */
    public static final RectF f14031h = new RectF();

    /* renamed from: b, reason: collision with root package name */
    public final float f14032b;

    /* renamed from: c, reason: collision with root package name */
    public final float f14033c;

    /* renamed from: d, reason: collision with root package name */
    public final float f14034d;

    /* renamed from: e, reason: collision with root package name */
    public final float f14035e;

    /* renamed from: f, reason: collision with root package name */
    public float f14036f;

    /* renamed from: g, reason: collision with root package name */
    public float f14037g;

    public r(float f2, float f10, float f11, float f12) {
        this.f14032b = f2;
        this.f14033c = f10;
        this.f14034d = f11;
        this.f14035e = f12;
    }

    @Override // lh.t
    public final void a(Matrix matrix, Path path) {
        Matrix matrix2 = this.a;
        matrix.invert(matrix2);
        path.transform(matrix2);
        float f2 = this.f14034d;
        float f10 = this.f14035e;
        RectF rectF = f14031h;
        rectF.set(this.f14032b, this.f14033c, f2, f10);
        path.arcTo(rectF, this.f14036f, this.f14037g, false);
        path.transform(matrix);
    }
}
