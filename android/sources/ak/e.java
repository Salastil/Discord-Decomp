package ak;

import e4.r;

/* loaded from: classes3.dex */
public final class e extends r {

    /* renamed from: v, reason: collision with root package name */
    public final boolean f664v;

    public e(c cVar, boolean z5) {
        super(cVar);
        this.f664v = z5;
    }

    public final a I() {
        a[] aVarArr = (a[]) this.f8001i;
        b bVar = new b();
        b bVar2 = new b();
        b bVar3 = new b();
        b bVar4 = new b();
        for (a aVar : aVarArr) {
            if (aVar != null) {
                aVar.d();
                int i5 = aVar.f652e % 30;
                int i6 = aVar.f653f;
                if (!this.f664v) {
                    i6 += 2;
                }
                int i10 = i6 % 3;
                if (i10 == 0) {
                    bVar2.b((i5 * 3) + 1);
                } else if (i10 == 1) {
                    bVar4.b(i5 / 3);
                    bVar3.b(i5 % 3);
                } else if (i10 == 2) {
                    bVar.b(i5 + 1);
                }
            }
        }
        if (bVar.a().length == 0 || bVar2.a().length == 0 || bVar3.a().length == 0 || bVar4.a().length == 0 || bVar.a()[0] <= 0 || bVar2.a()[0] + bVar3.a()[0] < 3 || bVar2.a()[0] + bVar3.a()[0] > 90) {
            return null;
        }
        a aVar2 = new a(bVar.a()[0], bVar2.a()[0], bVar3.a()[0], bVar4.a()[0], 0, (byte) 0);
        J(aVarArr, aVar2);
        return aVar2;
    }

    public final void J(a[] aVarArr, a aVar) {
        for (int i5 = 0; i5 < aVarArr.length; i5++) {
            a aVar2 = aVarArr[i5];
            if (aVar2 != null) {
                int i6 = aVar2.f652e % 30;
                int i10 = aVar2.f653f;
                if (i10 > aVar.f653f) {
                    aVarArr[i5] = null;
                } else {
                    if (!this.f664v) {
                        i10 += 2;
                    }
                    int i11 = i10 % 3;
                    if (i11 != 0) {
                        if (i11 != 1) {
                            if (i11 == 2 && i6 + 1 != aVar.f649b) {
                                aVarArr[i5] = null;
                            }
                        } else if (i6 / 3 != aVar.f650c || i6 % 3 != aVar.f652e) {
                            aVarArr[i5] = null;
                        }
                    } else if ((i6 * 3) + 1 != aVar.f651d) {
                        aVarArr[i5] = null;
                    }
                }
            }
        }
    }

    @Override // e4.r
    public final String toString() {
        return "IsLeft: " + this.f664v + '\n' + super.toString();
    }
}
