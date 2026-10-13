package p0;

import java.util.ArrayList;
import k2.r;

/* loaded from: classes.dex */
public class b {

    /* renamed from: d, reason: collision with root package name */
    public final a f16270d;
    public e a = null;

    /* renamed from: b, reason: collision with root package name */
    public float f16268b = 0.0f;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f16269c = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public boolean f16271e = false;

    public b(r rVar) {
        this.f16270d = new a(this, rVar);
    }

    public final void a(c cVar, int i5) {
        this.f16270d.g(cVar.j(i5), 1.0f);
        this.f16270d.g(cVar.j(i5), -1.0f);
    }

    public final void b(e eVar, e eVar2, e eVar3, int i5) {
        boolean z5 = false;
        if (i5 != 0) {
            if (i5 < 0) {
                i5 *= -1;
                z5 = true;
            }
            this.f16268b = i5;
        }
        if (z5) {
            this.f16270d.g(eVar, 1.0f);
            this.f16270d.g(eVar2, -1.0f);
            this.f16270d.g(eVar3, -1.0f);
        } else {
            this.f16270d.g(eVar, -1.0f);
            this.f16270d.g(eVar2, 1.0f);
            this.f16270d.g(eVar3, 1.0f);
        }
    }

    public final void c(e eVar, e eVar2, e eVar3, int i5) {
        boolean z5 = false;
        if (i5 != 0) {
            if (i5 < 0) {
                i5 *= -1;
                z5 = true;
            }
            this.f16268b = i5;
        }
        if (z5) {
            this.f16270d.g(eVar, 1.0f);
            this.f16270d.g(eVar2, -1.0f);
            this.f16270d.g(eVar3, 1.0f);
        } else {
            this.f16270d.g(eVar, -1.0f);
            this.f16270d.g(eVar2, 1.0f);
            this.f16270d.g(eVar3, -1.0f);
        }
    }

    public e d(boolean[] zArr) {
        return f(zArr, null);
    }

    public boolean e() {
        return this.a == null && this.f16268b == 0.0f && this.f16270d.d() == 0;
    }

    public final e f(boolean[] zArr, e eVar) {
        int i5;
        int d6 = this.f16270d.d();
        e eVar2 = null;
        float f2 = 0.0f;
        for (int i6 = 0; i6 < d6; i6++) {
            float f10 = this.f16270d.f(i6);
            if (f10 < 0.0f) {
                e e9 = this.f16270d.e(i6);
                if ((zArr == null || !zArr[e9.f16292e]) && e9 != eVar && (((i5 = e9.I) == 3 || i5 == 4) && f10 < f2)) {
                    f2 = f10;
                    eVar2 = e9;
                }
            }
        }
        return eVar2;
    }

    public final void g(e eVar) {
        e eVar2 = this.a;
        if (eVar2 != null) {
            this.f16270d.g(eVar2, -1.0f);
            this.a.f16293i = -1;
            this.a = null;
        }
        float h6 = this.f16270d.h(eVar, true) * (-1.0f);
        this.a = eVar;
        if (h6 == 1.0f) {
            return;
        }
        this.f16268b /= h6;
        a aVar = this.f16270d;
        int i5 = aVar.f16262d;
        for (int i6 = 0; i5 != -1 && i6 < aVar.f16260b; i6++) {
            float[] fArr = (float[]) aVar.k;
            fArr[i5] = fArr[i5] / h6;
            i5 = ((int[]) aVar.j)[i5];
        }
    }

    public final void h(c cVar, e eVar, boolean z5) {
        if (eVar.f16296x) {
            float c6 = this.f16270d.c(eVar);
            this.f16268b = (eVar.f16295w * c6) + this.f16268b;
            this.f16270d.h(eVar, z5);
            if (z5) {
                eVar.b(this);
            }
            if (this.f16270d.d() == 0) {
                this.f16271e = true;
                cVar.a = true;
            }
        }
    }

    public void i(c cVar, b bVar, boolean z5) {
        a aVar = this.f16270d;
        aVar.getClass();
        float c6 = aVar.c(bVar.a);
        aVar.h(bVar.a, z5);
        a aVar2 = bVar.f16270d;
        int d6 = aVar2.d();
        for (int i5 = 0; i5 < d6; i5++) {
            e e9 = aVar2.e(i5);
            aVar.a(e9, aVar2.c(e9) * c6, z5);
        }
        this.f16268b = (bVar.f16268b * c6) + this.f16268b;
        if (z5) {
            bVar.a.b(this);
        }
        if (this.a == null || this.f16270d.d() != 0) {
            return;
        }
        this.f16271e = true;
        cVar.a = true;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x0081  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String toString() {
        boolean z5;
        String k = k0.d.k(this.a == null ? "0" : "" + this.a, " = ");
        if (this.f16268b != 0.0f) {
            StringBuilder o6 = k0.d.o(k);
            o6.append(this.f16268b);
            k = o6.toString();
            z5 = true;
        } else {
            z5 = false;
        }
        int d6 = this.f16270d.d();
        for (int i5 = 0; i5 < d6; i5++) {
            e e9 = this.f16270d.e(i5);
            if (e9 != null) {
                float f2 = this.f16270d.f(i5);
                if (f2 != 0.0f) {
                    String eVar = e9.toString();
                    if (!z5) {
                        if (f2 < 0.0f) {
                            k = k0.d.k(k, "- ");
                            f2 *= -1.0f;
                        }
                        k = f2 == 1.0f ? k0.d.k(k, eVar) : k + f2 + " " + eVar;
                        z5 = true;
                    } else if (f2 > 0.0f) {
                        k = k0.d.k(k, " + ");
                        if (f2 == 1.0f) {
                        }
                        z5 = true;
                    } else {
                        k = k0.d.k(k, " - ");
                        f2 *= -1.0f;
                        if (f2 == 1.0f) {
                        }
                        z5 = true;
                    }
                }
            }
        }
        return !z5 ? k0.d.k(k, "0.0") : k;
    }
}
