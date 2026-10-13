package n3;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.PorterDuff;
import android.graphics.Shader;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class m {

    /* renamed from: p, reason: collision with root package name */
    public static final Matrix f14810p = new Matrix();
    public final Path a;

    /* renamed from: b, reason: collision with root package name */
    public final Path f14811b;

    /* renamed from: c, reason: collision with root package name */
    public final Matrix f14812c;

    /* renamed from: d, reason: collision with root package name */
    public Paint f14813d;

    /* renamed from: e, reason: collision with root package name */
    public Paint f14814e;

    /* renamed from: f, reason: collision with root package name */
    public PathMeasure f14815f;

    /* renamed from: g, reason: collision with root package name */
    public final j f14816g;

    /* renamed from: h, reason: collision with root package name */
    public float f14817h;

    /* renamed from: i, reason: collision with root package name */
    public float f14818i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public int f14819l;

    /* renamed from: m, reason: collision with root package name */
    public String f14820m;

    /* renamed from: n, reason: collision with root package name */
    public Boolean f14821n;

    /* renamed from: o, reason: collision with root package name */
    public final s.e f14822o;

    public m() {
        this.f14812c = new Matrix();
        this.f14817h = 0.0f;
        this.f14818i = 0.0f;
        this.j = 0.0f;
        this.k = 0.0f;
        this.f14819l = 255;
        this.f14820m = null;
        this.f14821n = null;
        this.f14822o = new s.e(0);
        this.f14816g = new j();
        this.a = new Path();
        this.f14811b = new Path();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void a(j jVar, Matrix matrix, Canvas canvas, int i5, int i6) {
        int i10;
        float f2;
        int i11;
        float f10;
        Matrix matrix2 = jVar.a;
        ArrayList arrayList = jVar.f14800b;
        matrix2.set(matrix);
        Matrix matrix3 = jVar.a;
        matrix3.preConcat(jVar.j);
        canvas.save();
        char c6 = 0;
        int i12 = 0;
        while (i12 < arrayList.size()) {
            k kVar = (k) arrayList.get(i12);
            if (kVar instanceof j) {
                a((j) kVar, matrix3, canvas, i5, i6);
            } else if (kVar instanceof l) {
                l lVar = (l) kVar;
                float f11 = i5 / this.j;
                float f12 = i6 / this.k;
                float min = Math.min(f11, f12);
                Matrix matrix4 = this.f14812c;
                matrix4.set(matrix3);
                matrix4.postScale(f11, f12);
                float[] fArr = {0.0f, 1.0f, 1.0f, 0.0f};
                matrix3.mapVectors(fArr);
                float hypot = (float) Math.hypot(fArr[c6], fArr[1]);
                boolean z5 = c6;
                i10 = i12;
                float hypot2 = (float) Math.hypot(fArr[2], fArr[3]);
                float f13 = (fArr[z5 ? 1 : 0] * fArr[3]) - (fArr[1] * fArr[2]);
                float max = Math.max(hypot, hypot2);
                float abs = max > 0.0f ? Math.abs(f13) / max : 0.0f;
                if (abs != 0.0f) {
                    Path path = this.a;
                    path.reset();
                    b1.e[] eVarArr = lVar.a;
                    if (eVarArr != null) {
                        ys.l.s(eVarArr, path);
                    }
                    Path path2 = this.f14811b;
                    path2.reset();
                    if (lVar instanceof h) {
                        path2.setFillType(lVar.f14809c == 0 ? Path.FillType.WINDING : Path.FillType.EVEN_ODD);
                        path2.addPath(path, matrix4);
                        canvas.clipPath(path2);
                    } else {
                        i iVar = (i) lVar;
                        float f14 = iVar.f14796i;
                        if (f14 != 0.0f || iVar.j != 1.0f) {
                            float f15 = iVar.k;
                            float f16 = (f14 + f15) % 1.0f;
                            float f17 = (iVar.j + f15) % 1.0f;
                            if (this.f14815f == null) {
                                this.f14815f = new PathMeasure();
                            }
                            this.f14815f.setPath(path, z5);
                            float length = this.f14815f.getLength();
                            float f18 = f16 * length;
                            float f19 = f17 * length;
                            path.reset();
                            if (f18 > f19) {
                                this.f14815f.getSegment(f18, length, path, true);
                                f2 = 0.0f;
                                this.f14815f.getSegment(0.0f, f19, path, true);
                            } else {
                                f2 = 0.0f;
                                this.f14815f.getSegment(f18, f19, path, true);
                            }
                            path.rLineTo(f2, f2);
                        }
                        path2.addPath(path, matrix4);
                        a1.d dVar = iVar.f14793f;
                        if (((Shader) dVar.f15i) == null && dVar.f14e == 0) {
                            f10 = 255.0f;
                            i11 = 16777215;
                        } else {
                            if (this.f14814e == null) {
                                i11 = 16777215;
                                Paint paint = new Paint(1);
                                this.f14814e = paint;
                                paint.setStyle(Paint.Style.FILL);
                            } else {
                                i11 = 16777215;
                            }
                            Paint paint2 = this.f14814e;
                            Shader shader = (Shader) dVar.f15i;
                            if (shader != null) {
                                shader.setLocalMatrix(matrix4);
                                paint2.setShader(shader);
                                paint2.setAlpha(Math.round(iVar.f14795h * 255.0f));
                                f10 = 255.0f;
                            } else {
                                paint2.setShader(null);
                                paint2.setAlpha(255);
                                int i13 = dVar.f14e;
                                float f20 = iVar.f14795h;
                                PorterDuff.Mode mode = p.G;
                                f10 = 255.0f;
                                paint2.setColor((i13 & i11) | (((int) (Color.alpha(i13) * f20)) << 24));
                            }
                            paint2.setColorFilter(null);
                            path2.setFillType(iVar.f14809c == 0 ? Path.FillType.WINDING : Path.FillType.EVEN_ODD);
                            canvas.drawPath(path2, paint2);
                        }
                        a1.d dVar2 = iVar.f14791d;
                        if (((Shader) dVar2.f15i) != null || dVar2.f14e != 0) {
                            if (this.f14813d == null) {
                                Paint paint3 = new Paint(1);
                                this.f14813d = paint3;
                                paint3.setStyle(Paint.Style.STROKE);
                            }
                            Paint paint4 = this.f14813d;
                            Paint.Join join = iVar.f14798m;
                            if (join != null) {
                                paint4.setStrokeJoin(join);
                            }
                            Paint.Cap cap = iVar.f14797l;
                            if (cap != null) {
                                paint4.setStrokeCap(cap);
                            }
                            paint4.setStrokeMiter(iVar.f14799n);
                            Shader shader2 = (Shader) dVar2.f15i;
                            if (shader2 != null) {
                                shader2.setLocalMatrix(matrix4);
                                paint4.setShader(shader2);
                                paint4.setAlpha(Math.round(iVar.f14794g * f10));
                            } else {
                                paint4.setShader(null);
                                paint4.setAlpha(255);
                                int i14 = dVar2.f14e;
                                float f21 = iVar.f14794g;
                                PorterDuff.Mode mode2 = p.G;
                                paint4.setColor((i14 & i11) | (((int) (Color.alpha(i14) * f21)) << 24));
                            }
                            paint4.setColorFilter(null);
                            paint4.setStrokeWidth(iVar.f14792e * min * abs);
                            canvas.drawPath(path2, paint4);
                        }
                    }
                }
                i12 = i10 + 1;
                c6 = 0;
            }
            i10 = i12;
            i12 = i10 + 1;
            c6 = 0;
        }
        canvas.restore();
    }

    public float getAlpha() {
        return getRootAlpha() / 255.0f;
    }

    public int getRootAlpha() {
        return this.f14819l;
    }

    public void setAlpha(float f2) {
        setRootAlpha((int) (f2 * 255.0f));
    }

    public void setRootAlpha(int i5) {
        this.f14819l = i5;
    }

    public m(m mVar) {
        this.f14812c = new Matrix();
        this.f14817h = 0.0f;
        this.f14818i = 0.0f;
        this.j = 0.0f;
        this.k = 0.0f;
        this.f14819l = 255;
        this.f14820m = null;
        this.f14821n = null;
        s.e eVar = new s.e(0);
        this.f14822o = eVar;
        this.f14816g = new j(mVar.f14816g, eVar);
        this.a = new Path(mVar.a);
        this.f14811b = new Path(mVar.f14811b);
        this.f14817h = mVar.f14817h;
        this.f14818i = mVar.f14818i;
        this.j = mVar.j;
        this.k = mVar.k;
        this.f14819l = mVar.f14819l;
        this.f14820m = mVar.f14820m;
        String str = mVar.f14820m;
        if (str != null) {
            eVar.put(str, this);
        }
        this.f14821n = mVar.f14821n;
    }
}
