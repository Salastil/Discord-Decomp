package androidx.constraintlayout.widget;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class f {
    public int[] a;

    /* renamed from: b, reason: collision with root package name */
    public int[] f1341b;

    /* renamed from: c, reason: collision with root package name */
    public int f1342c;

    /* renamed from: d, reason: collision with root package name */
    public int[] f1343d;

    /* renamed from: e, reason: collision with root package name */
    public float[] f1344e;

    /* renamed from: f, reason: collision with root package name */
    public int f1345f;

    /* renamed from: g, reason: collision with root package name */
    public int[] f1346g;

    /* renamed from: h, reason: collision with root package name */
    public String[] f1347h;

    /* renamed from: i, reason: collision with root package name */
    public int f1348i;
    public int[] j;
    public boolean[] k;

    /* renamed from: l, reason: collision with root package name */
    public int f1349l;

    public final void a(float f2, int i5) {
        int i6 = this.f1345f;
        int[] iArr = this.f1343d;
        if (i6 >= iArr.length) {
            this.f1343d = Arrays.copyOf(iArr, iArr.length * 2);
            float[] fArr = this.f1344e;
            this.f1344e = Arrays.copyOf(fArr, fArr.length * 2);
        }
        int[] iArr2 = this.f1343d;
        int i10 = this.f1345f;
        iArr2[i10] = i5;
        float[] fArr2 = this.f1344e;
        this.f1345f = i10 + 1;
        fArr2[i10] = f2;
    }

    public final void b(int i5, int i6) {
        int i10 = this.f1342c;
        int[] iArr = this.a;
        if (i10 >= iArr.length) {
            this.a = Arrays.copyOf(iArr, iArr.length * 2);
            int[] iArr2 = this.f1341b;
            this.f1341b = Arrays.copyOf(iArr2, iArr2.length * 2);
        }
        int[] iArr3 = this.a;
        int i11 = this.f1342c;
        iArr3[i11] = i5;
        int[] iArr4 = this.f1341b;
        this.f1342c = i11 + 1;
        iArr4[i11] = i6;
    }

    public final void c(int i5, String str) {
        int i6 = this.f1348i;
        int[] iArr = this.f1346g;
        if (i6 >= iArr.length) {
            this.f1346g = Arrays.copyOf(iArr, iArr.length * 2);
            String[] strArr = this.f1347h;
            this.f1347h = (String[]) Arrays.copyOf(strArr, strArr.length * 2);
        }
        int[] iArr2 = this.f1346g;
        int i10 = this.f1348i;
        iArr2[i10] = i5;
        String[] strArr2 = this.f1347h;
        this.f1348i = i10 + 1;
        strArr2[i10] = str;
    }

    public final void d(int i5, boolean z5) {
        int i6 = this.f1349l;
        int[] iArr = this.j;
        if (i6 >= iArr.length) {
            this.j = Arrays.copyOf(iArr, iArr.length * 2);
            boolean[] zArr = this.k;
            this.k = Arrays.copyOf(zArr, zArr.length * 2);
        }
        int[] iArr2 = this.j;
        int i10 = this.f1349l;
        iArr2[i10] = i5;
        boolean[] zArr2 = this.k;
        this.f1349l = i10 + 1;
        zArr2[i10] = z5;
    }
}
