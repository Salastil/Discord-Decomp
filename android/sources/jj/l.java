package jj;

/* loaded from: classes3.dex */
public class l {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f12810b;

    public l(float f2, float f10) {
        this.a = f2;
        this.f12810b = f10;
    }

    public static float a(l lVar, l lVar2) {
        float f2 = lVar.a;
        float f10 = lVar.f12810b;
        float f11 = f2 - lVar2.a;
        float f12 = f10 - lVar2.f12810b;
        return (float) Math.sqrt((f12 * f12) + (f11 * f11));
    }

    public static void b(l[] lVarArr) {
        l lVar;
        l lVar2;
        l lVar3;
        float a = a(lVarArr[0], lVarArr[1]);
        float a10 = a(lVarArr[1], lVarArr[2]);
        float a11 = a(lVarArr[0], lVarArr[2]);
        if (a10 >= a && a10 >= a11) {
            lVar = lVarArr[0];
            lVar2 = lVarArr[1];
            lVar3 = lVarArr[2];
        } else if (a11 < a10 || a11 < a) {
            lVar = lVarArr[2];
            lVar2 = lVarArr[0];
            lVar3 = lVarArr[1];
        } else {
            lVar = lVarArr[1];
            lVar2 = lVarArr[0];
            lVar3 = lVarArr[2];
        }
        float f2 = lVar.a;
        float f10 = lVar.f12810b;
        if (((lVar2.f12810b - f10) * (lVar3.a - f2)) - ((lVar2.a - f2) * (lVar3.f12810b - f10)) < 0.0f) {
            l lVar4 = lVar3;
            lVar3 = lVar2;
            lVar2 = lVar4;
        }
        lVarArr[0] = lVar2;
        lVarArr[1] = lVar;
        lVarArr[2] = lVar3;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof l) {
            l lVar = (l) obj;
            if (this.a == lVar.a && this.f12810b == lVar.f12810b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Float.floatToIntBits(this.f12810b) + (Float.floatToIntBits(this.a) * 31);
    }

    public final String toString() {
        return "(" + this.a + ',' + this.f12810b + ')';
    }
}
