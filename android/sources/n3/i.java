package n3;

import android.content.res.ColorStateList;
import android.graphics.Paint;

/* loaded from: classes.dex */
public final class i extends l {

    /* renamed from: d, reason: collision with root package name */
    public a1.d f14791d;

    /* renamed from: e, reason: collision with root package name */
    public float f14792e;

    /* renamed from: f, reason: collision with root package name */
    public a1.d f14793f;

    /* renamed from: g, reason: collision with root package name */
    public float f14794g;

    /* renamed from: h, reason: collision with root package name */
    public float f14795h;

    /* renamed from: i, reason: collision with root package name */
    public float f14796i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public Paint.Cap f14797l;

    /* renamed from: m, reason: collision with root package name */
    public Paint.Join f14798m;

    /* renamed from: n, reason: collision with root package name */
    public float f14799n;

    @Override // n3.k
    public final boolean a() {
        return this.f14793f.i() || this.f14791d.i();
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x0027  */
    @Override // n3.k
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean b(int[] iArr) {
        boolean z5;
        a1.d dVar;
        a1.d dVar2 = this.f14793f;
        boolean z6 = true;
        if (dVar2.i()) {
            ColorStateList colorStateList = (ColorStateList) dVar2.f16v;
            int colorForState = colorStateList.getColorForState(iArr, colorStateList.getDefaultColor());
            if (colorForState != dVar2.f14e) {
                dVar2.f14e = colorForState;
                z5 = true;
                dVar = this.f14791d;
                if (dVar.i()) {
                    ColorStateList colorStateList2 = (ColorStateList) dVar.f16v;
                    int colorForState2 = colorStateList2.getColorForState(iArr, colorStateList2.getDefaultColor());
                    if (colorForState2 != dVar.f14e) {
                        dVar.f14e = colorForState2;
                        return z5 | z6;
                    }
                }
                z6 = false;
                return z5 | z6;
            }
        }
        z5 = false;
        dVar = this.f14791d;
        if (dVar.i()) {
        }
        z6 = false;
        return z5 | z6;
    }

    public float getFillAlpha() {
        return this.f14795h;
    }

    public int getFillColor() {
        return this.f14793f.f14e;
    }

    public float getStrokeAlpha() {
        return this.f14794g;
    }

    public int getStrokeColor() {
        return this.f14791d.f14e;
    }

    public float getStrokeWidth() {
        return this.f14792e;
    }

    public float getTrimPathEnd() {
        return this.j;
    }

    public float getTrimPathOffset() {
        return this.k;
    }

    public float getTrimPathStart() {
        return this.f14796i;
    }

    public void setFillAlpha(float f2) {
        this.f14795h = f2;
    }

    public void setFillColor(int i5) {
        this.f14793f.f14e = i5;
    }

    public void setStrokeAlpha(float f2) {
        this.f14794g = f2;
    }

    public void setStrokeColor(int i5) {
        this.f14791d.f14e = i5;
    }

    public void setStrokeWidth(float f2) {
        this.f14792e = f2;
    }

    public void setTrimPathEnd(float f2) {
        this.j = f2;
    }

    public void setTrimPathOffset(float f2) {
        this.k = f2;
    }

    public void setTrimPathStart(float f2) {
        this.f14796i = f2;
    }
}
