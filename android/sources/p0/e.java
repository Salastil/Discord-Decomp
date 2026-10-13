package p0;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class e implements Comparable {
    public int I;

    /* renamed from: d, reason: collision with root package name */
    public boolean f16291d;

    /* renamed from: w, reason: collision with root package name */
    public float f16295w;

    /* renamed from: e, reason: collision with root package name */
    public int f16292e = -1;

    /* renamed from: i, reason: collision with root package name */
    public int f16293i = -1;

    /* renamed from: v, reason: collision with root package name */
    public int f16294v = 0;

    /* renamed from: x, reason: collision with root package name */
    public boolean f16296x = false;

    /* renamed from: y, reason: collision with root package name */
    public final float[] f16297y = new float[9];
    public final float[] E = new float[9];
    public b[] F = new b[16];
    public int G = 0;
    public int H = 0;

    public e(int i5) {
        this.I = i5;
    }

    public final void a(b bVar) {
        int i5 = 0;
        while (true) {
            int i6 = this.G;
            if (i5 >= i6) {
                b[] bVarArr = this.F;
                if (i6 >= bVarArr.length) {
                    this.F = (b[]) Arrays.copyOf(bVarArr, bVarArr.length * 2);
                }
                b[] bVarArr2 = this.F;
                int i10 = this.G;
                bVarArr2[i10] = bVar;
                this.G = i10 + 1;
                return;
            }
            if (this.F[i5] == bVar) {
                return;
            } else {
                i5++;
            }
        }
    }

    public final void b(b bVar) {
        int i5 = this.G;
        int i6 = 0;
        while (i6 < i5) {
            if (this.F[i6] == bVar) {
                while (i6 < i5 - 1) {
                    b[] bVarArr = this.F;
                    int i10 = i6 + 1;
                    bVarArr[i6] = bVarArr[i10];
                    i6 = i10;
                }
                this.G--;
                return;
            }
            i6++;
        }
    }

    public final void c() {
        this.I = 5;
        this.f16294v = 0;
        this.f16292e = -1;
        this.f16293i = -1;
        this.f16295w = 0.0f;
        this.f16296x = false;
        int i5 = this.G;
        for (int i6 = 0; i6 < i5; i6++) {
            this.F[i6] = null;
        }
        this.G = 0;
        this.H = 0;
        this.f16291d = false;
        Arrays.fill(this.E, 0.0f);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f16292e - ((e) obj).f16292e;
    }

    public final void d(c cVar, float f2) {
        this.f16295w = f2;
        this.f16296x = true;
        int i5 = this.G;
        this.f16293i = -1;
        for (int i6 = 0; i6 < i5; i6++) {
            this.F[i6].h(cVar, this, false);
        }
        this.G = 0;
    }

    public final void e(c cVar, b bVar) {
        int i5 = this.G;
        for (int i6 = 0; i6 < i5; i6++) {
            this.F[i6].i(cVar, bVar, false);
        }
        this.G = 0;
    }

    public final String toString() {
        return "" + this.f16292e;
    }
}
