package jc;

/* loaded from: classes3.dex */
public final class o0 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f12592b;

    /* renamed from: c, reason: collision with root package name */
    public int f12593c;

    /* renamed from: d, reason: collision with root package name */
    public int f12594d;

    /* renamed from: e, reason: collision with root package name */
    public int f12595e;

    /* renamed from: f, reason: collision with root package name */
    public int f12596f;

    /* renamed from: g, reason: collision with root package name */
    public Object f12597g;

    public o0(nj.b bVar, int i5, int i6, int i10) {
        this.f12597g = bVar;
        int i11 = bVar.f15511e;
        this.a = i11;
        int i12 = bVar.f15510d;
        this.f12592b = i12;
        int i13 = i5 / 2;
        int i14 = i6 - i13;
        this.f12593c = i14;
        int i15 = i6 + i13;
        this.f12594d = i15;
        int i16 = i10 - i13;
        this.f12596f = i16;
        int i17 = i10 + i13;
        this.f12595e = i17;
        if (i16 < 0 || i14 < 0 || i17 >= i11 || i15 >= i12) {
            throw jj.g.f12795i;
        }
    }

    public boolean a(int i5, int i6, int i10, boolean z5) {
        nj.b bVar = (nj.b) this.f12597g;
        if (z5) {
            while (i5 <= i6) {
                if (bVar.b(i5, i10)) {
                    return true;
                }
                i5++;
            }
            return false;
        }
        while (i5 <= i6) {
            if (bVar.b(i10, i5)) {
                return true;
            }
            i5++;
        }
        return false;
    }

    public jj.l[] b() {
        int i5 = this.a;
        int i6 = this.f12592b;
        int i10 = this.f12593c;
        int i11 = this.f12594d;
        int i12 = this.f12596f;
        int i13 = this.f12595e;
        boolean z5 = false;
        boolean z6 = false;
        boolean z7 = false;
        boolean z8 = false;
        boolean z10 = false;
        boolean z11 = false;
        boolean z12 = true;
        while (z12) {
            boolean z13 = false;
            boolean z14 = true;
            while (true) {
                if ((z14 || !z6) && i11 < i6) {
                    z14 = a(i12, i13, i11, false);
                    if (z14) {
                        i11++;
                        z6 = true;
                        z13 = true;
                    } else if (!z6) {
                        i11++;
                    }
                }
            }
            if (i11 < i6) {
                boolean z15 = true;
                while (true) {
                    if ((z15 || !z7) && i13 < i5) {
                        z15 = a(i10, i11, i13, true);
                        if (z15) {
                            i13++;
                            z7 = true;
                            z13 = true;
                        } else if (!z7) {
                            i13++;
                        }
                    }
                }
                if (i13 < i5) {
                    boolean z16 = true;
                    while (true) {
                        if ((z16 || !z8) && i10 >= 0) {
                            z16 = a(i12, i13, i10, false);
                            if (z16) {
                                i10--;
                                z8 = true;
                                z13 = true;
                            } else if (!z8) {
                                i10--;
                            }
                        }
                    }
                    if (i10 >= 0) {
                        z12 = z13;
                        boolean z17 = true;
                        while (true) {
                            if ((z17 || !z11) && i12 >= 0) {
                                z17 = a(i10, i11, i12, true);
                                if (z17) {
                                    i12--;
                                    z12 = true;
                                    z11 = true;
                                } else if (!z11) {
                                    i12--;
                                }
                            }
                        }
                        if (i12 >= 0) {
                            if (z12) {
                                z10 = true;
                            }
                        }
                    }
                }
            }
            z5 = true;
            break;
        }
        if (z5 || !z10) {
            throw jj.g.f12795i;
        }
        int i14 = i11 - i10;
        jj.l lVar = null;
        jj.l lVar2 = null;
        for (int i15 = 1; lVar2 == null && i15 < i14; i15++) {
            lVar2 = c(i10, i13 - i15, i10 + i15, i13);
        }
        if (lVar2 == null) {
            throw jj.g.f12795i;
        }
        jj.l lVar3 = null;
        for (int i16 = 1; lVar3 == null && i16 < i14; i16++) {
            lVar3 = c(i10, i12 + i16, i10 + i16, i12);
        }
        if (lVar3 == null) {
            throw jj.g.f12795i;
        }
        jj.l lVar4 = null;
        for (int i17 = 1; lVar4 == null && i17 < i14; i17++) {
            lVar4 = c(i11, i12 + i17, i11 - i17, i12);
        }
        if (lVar4 == null) {
            throw jj.g.f12795i;
        }
        for (int i18 = 1; lVar == null && i18 < i14; i18++) {
            lVar = c(i11, i13 - i18, i11 - i18, i13);
        }
        if (lVar == null) {
            throw jj.g.f12795i;
        }
        float f2 = lVar.a;
        float f10 = lVar.f12810b;
        float f11 = lVar2.a;
        float f12 = lVar2.f12810b;
        float f13 = lVar4.a;
        float f14 = lVar4.f12810b;
        float f15 = lVar3.a;
        float f16 = lVar3.f12810b;
        return f2 < ((float) i6) / 2.0f ? new jj.l[]{new jj.l(f15 - 1.0f, f16 + 1.0f), new jj.l(f11 + 1.0f, f12 + 1.0f), new jj.l(f13 - 1.0f, f14 - 1.0f), new jj.l(f2 + 1.0f, f10 - 1.0f)} : new jj.l[]{new jj.l(f15 + 1.0f, f16 + 1.0f), new jj.l(f11 + 1.0f, f12 - 1.0f), new jj.l(f13 - 1.0f, f14 + 1.0f), new jj.l(f2 - 1.0f, f10 - 1.0f)};
    }

    public jj.l c(float f2, float f10, float f11, float f12) {
        float f13 = f2 - f11;
        float f14 = f10 - f12;
        int G = jb.a.G((float) Math.sqrt((f14 * f14) + (f13 * f13)));
        float f15 = G;
        float f16 = (f11 - f2) / f15;
        float f17 = (f12 - f10) / f15;
        for (int i5 = 0; i5 < G; i5++) {
            float f18 = i5;
            int G2 = jb.a.G((f18 * f16) + f2);
            int G3 = jb.a.G((f18 * f17) + f10);
            if (((nj.b) this.f12597g).b(G2, G3)) {
                return new jj.l(G2, G3);
            }
        }
        return null;
    }

    public boolean d(int i5) {
        int i6;
        int i10;
        int i11;
        int i12;
        if ((i5 & (-2097152)) != -2097152 || (i6 = (i5 >>> 19) & 3) == 1 || (i10 = (i5 >>> 17) & 3) == 0 || (i11 = (i5 >>> 12) & 15) == 0 || i11 == 15 || (i12 = (i5 >>> 10) & 3) == 3) {
            return false;
        }
        this.a = i6;
        this.f12597g = a.f12502m[3 - i10];
        int i13 = a.f12503n[i12];
        this.f12593c = i13;
        if (i6 == 2) {
            this.f12593c = i13 / 2;
        } else if (i6 == 0) {
            this.f12593c = i13 / 4;
        }
        int i14 = (i5 >>> 9) & 1;
        int i15 = 1152;
        if (i10 != 1) {
            if (i10 != 2) {
                if (i10 != 3) {
                    throw new IllegalArgumentException();
                }
                i15 = 384;
            }
        } else if (i6 != 3) {
            i15 = 576;
        }
        this.f12596f = i15;
        if (i10 == 3) {
            int i16 = i6 == 3 ? a.f12504o[i11 - 1] : a.f12505p[i11 - 1];
            this.f12595e = i16;
            this.f12592b = (((i16 * 12) / this.f12593c) + i14) * 4;
        } else {
            if (i6 == 3) {
                int i17 = i10 == 2 ? a.f12506q[i11 - 1] : a.f12507r[i11 - 1];
                this.f12595e = i17;
                this.f12592b = ((i17 * 144) / this.f12593c) + i14;
            } else {
                int i18 = a.f12508s[i11 - 1];
                this.f12595e = i18;
                this.f12592b = (((i10 == 1 ? 72 : 144) * i18) / this.f12593c) + i14;
            }
        }
        this.f12594d = ((i5 >> 6) & 3) == 3 ? 1 : 2;
        return true;
    }

    public o0(nj.b bVar) {
        this(bVar, 10, bVar.f15510d / 2, bVar.f15511e / 2);
    }
}
