package n3;

/* loaded from: classes.dex */
public abstract class l extends k {
    public b1.e[] a;

    /* renamed from: b, reason: collision with root package name */
    public String f14808b;

    /* renamed from: c, reason: collision with root package name */
    public int f14809c;

    public l() {
        this.a = null;
        this.f14809c = 0;
    }

    public b1.e[] getPathData() {
        return this.a;
    }

    public String getPathName() {
        return this.f14808b;
    }

    public void setPathData(b1.e[] eVarArr) {
        b1.e[] eVarArr2 = this.a;
        boolean z5 = false;
        if (eVarArr2 != null && eVarArr != null && eVarArr2.length == eVarArr.length) {
            int i5 = 0;
            while (true) {
                if (i5 >= eVarArr2.length) {
                    z5 = true;
                    break;
                }
                b1.e eVar = eVarArr2[i5];
                char c6 = eVar.a;
                b1.e eVar2 = eVarArr[i5];
                if (c6 != eVar2.a || eVar.f2709b.length != eVar2.f2709b.length) {
                    break;
                } else {
                    i5++;
                }
            }
        }
        if (!z5) {
            this.a = ys.l.j(eVarArr);
            return;
        }
        b1.e[] eVarArr3 = this.a;
        for (int i6 = 0; i6 < eVarArr.length; i6++) {
            eVarArr3[i6].a = eVarArr[i6].a;
            int i10 = 0;
            while (true) {
                float[] fArr = eVarArr[i6].f2709b;
                if (i10 < fArr.length) {
                    eVarArr3[i6].f2709b[i10] = fArr[i10];
                    i10++;
                }
            }
        }
    }

    public l(l lVar) {
        this.a = null;
        this.f14809c = 0;
        this.f14808b = lVar.f14808b;
        this.a = ys.l.j(lVar.a);
    }
}
