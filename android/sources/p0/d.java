package p0;

import bg.s;
import e4.r;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class d extends b {

    /* renamed from: f, reason: collision with root package name */
    public e[] f16287f;

    /* renamed from: g, reason: collision with root package name */
    public e[] f16288g;

    /* renamed from: h, reason: collision with root package name */
    public int f16289h;

    /* renamed from: i, reason: collision with root package name */
    public r f16290i;

    @Override // p0.b
    public final e d(boolean[] zArr) {
        int i5 = -1;
        for (int i6 = 0; i6 < this.f16289h; i6++) {
            e[] eVarArr = this.f16287f;
            e eVar = eVarArr[i6];
            if (!zArr[eVar.f16292e]) {
                r rVar = this.f16290i;
                rVar.f8000e = eVar;
                int i10 = 8;
                if (i5 == -1) {
                    while (i10 >= 0) {
                        float f2 = ((e) rVar.f8000e).E[i10];
                        if (f2 <= 0.0f) {
                            if (f2 < 0.0f) {
                                i5 = i6;
                                break;
                            }
                            i10--;
                        }
                    }
                } else {
                    e eVar2 = eVarArr[i5];
                    while (true) {
                        if (i10 >= 0) {
                            float f10 = eVar2.E[i10];
                            float f11 = ((e) rVar.f8000e).E[i10];
                            if (f11 == f10) {
                                i10--;
                            } else if (f11 >= f10) {
                            }
                        }
                    }
                }
            }
        }
        if (i5 == -1) {
            return null;
        }
        return this.f16287f[i5];
    }

    @Override // p0.b
    public final boolean e() {
        return this.f16289h == 0;
    }

    @Override // p0.b
    public final void i(c cVar, b bVar, boolean z5) {
        e eVar = bVar.a;
        if (eVar == null) {
            return;
        }
        float[] fArr = eVar.E;
        a aVar = bVar.f16270d;
        int d6 = aVar.d();
        for (int i5 = 0; i5 < d6; i5++) {
            e e9 = aVar.e(i5);
            float f2 = aVar.f(i5);
            r rVar = this.f16290i;
            rVar.f8000e = e9;
            if (e9.f16291d) {
                boolean z6 = true;
                for (int i6 = 0; i6 < 9; i6++) {
                    float[] fArr2 = ((e) rVar.f8000e).E;
                    float f10 = (fArr[i6] * f2) + fArr2[i6];
                    fArr2[i6] = f10;
                    if (Math.abs(f10) < 1.0E-4f) {
                        ((e) rVar.f8000e).E[i6] = 0.0f;
                    } else {
                        z6 = false;
                    }
                }
                if (z6) {
                    ((d) rVar.f8001i).k((e) rVar.f8000e);
                }
            } else {
                for (int i10 = 0; i10 < 9; i10++) {
                    float f11 = fArr[i10];
                    if (f11 != 0.0f) {
                        float f12 = f11 * f2;
                        if (Math.abs(f12) < 1.0E-4f) {
                            f12 = 0.0f;
                        }
                        ((e) rVar.f8000e).E[i10] = f12;
                    } else {
                        ((e) rVar.f8000e).E[i10] = 0.0f;
                    }
                }
                j(e9);
            }
            this.f16268b = (bVar.f16268b * f2) + this.f16268b;
        }
        k(eVar);
    }

    public final void j(e eVar) {
        int i5;
        int i6 = this.f16289h + 1;
        e[] eVarArr = this.f16287f;
        if (i6 > eVarArr.length) {
            e[] eVarArr2 = (e[]) Arrays.copyOf(eVarArr, eVarArr.length * 2);
            this.f16287f = eVarArr2;
            this.f16288g = (e[]) Arrays.copyOf(eVarArr2, eVarArr2.length * 2);
        }
        e[] eVarArr3 = this.f16287f;
        int i10 = this.f16289h;
        eVarArr3[i10] = eVar;
        int i11 = i10 + 1;
        this.f16289h = i11;
        if (i11 > 1 && eVarArr3[i10].f16292e > eVar.f16292e) {
            int i12 = 0;
            while (true) {
                i5 = this.f16289h;
                if (i12 >= i5) {
                    break;
                }
                this.f16288g[i12] = this.f16287f[i12];
                i12++;
            }
            Arrays.sort(this.f16288g, 0, i5, new s(11));
            for (int i13 = 0; i13 < this.f16289h; i13++) {
                this.f16287f[i13] = this.f16288g[i13];
            }
        }
        eVar.f16291d = true;
        eVar.a(this);
    }

    public final void k(e eVar) {
        int i5 = 0;
        while (i5 < this.f16289h) {
            if (this.f16287f[i5] == eVar) {
                while (true) {
                    int i6 = this.f16289h;
                    if (i5 >= i6 - 1) {
                        this.f16289h = i6 - 1;
                        eVar.f16291d = false;
                        return;
                    } else {
                        e[] eVarArr = this.f16287f;
                        int i10 = i5 + 1;
                        eVarArr[i5] = eVarArr[i10];
                        i5 = i10;
                    }
                }
            } else {
                i5++;
            }
        }
    }

    @Override // p0.b
    public final String toString() {
        r rVar = this.f16290i;
        String str = " goal -> (" + this.f16268b + ") : ";
        for (int i5 = 0; i5 < this.f16289h; i5++) {
            rVar.f8000e = this.f16287f[i5];
            str = str + rVar + " ";
        }
        return str;
    }
}
