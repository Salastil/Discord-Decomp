package ad;

/* loaded from: classes3.dex */
public final class w implements h0 {
    public final i a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.v f506b = new ke.v(new byte[10], 10);

    /* renamed from: c, reason: collision with root package name */
    public int f507c = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f508d;

    /* renamed from: e, reason: collision with root package name */
    public ke.b0 f509e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f510f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f511g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f512h;

    /* renamed from: i, reason: collision with root package name */
    public int f513i;
    public int j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public long f514l;

    public w(i iVar) {
        this.a = iVar;
    }

    @Override // ad.h0
    public final void a() {
        this.f507c = 0;
        this.f508d = 0;
        this.f512h = false;
        this.a.a();
    }

    @Override // ad.h0
    public final void b(ke.b0 b0Var, qc.l lVar, g0 g0Var) {
        this.f509e = b0Var;
        this.a.d(lVar, g0Var);
    }

    @Override // ad.h0
    public final void c(int i5, ke.w wVar) {
        int i6;
        int i10;
        int i11;
        ke.b.l(this.f509e);
        int i12 = i5 & 1;
        i iVar = this.a;
        int i13 = 2;
        int i14 = 0;
        if (i12 != 0) {
            int i15 = this.f507c;
            if (i15 != 0 && i15 != 1) {
                if (i15 == 2) {
                    ke.b.N("PesReader", "Unexpected start indicator reading extended header");
                } else {
                    if (i15 != 3) {
                        throw new IllegalStateException();
                    }
                    if (this.j != -1) {
                        ke.b.N("PesReader", "Unexpected start indicator: expected " + this.j + " more bytes");
                    }
                    iVar.e();
                }
            }
            this.f507c = 1;
            this.f508d = 0;
        }
        int i16 = i5;
        while (wVar.a() > 0) {
            int i17 = this.f507c;
            if (i17 != 0) {
                ke.v vVar = this.f506b;
                if (i17 != 1) {
                    if (i17 == i13) {
                        if (d(wVar, vVar.f13356b, Math.min(10, this.f513i)) && d(wVar, null, this.f513i)) {
                            vVar.p(i14);
                            this.f514l = -9223372036854775807L;
                            if (this.f510f) {
                                vVar.s(4);
                                vVar.s(1);
                                vVar.s(1);
                                long i18 = (vVar.i(15) << 15) | (vVar.i(3) << 30) | vVar.i(15);
                                vVar.s(1);
                                if (!this.f512h && this.f511g) {
                                    vVar.s(4);
                                    vVar.s(1);
                                    vVar.s(1);
                                    vVar.s(1);
                                    this.f509e.b((vVar.i(3) << 30) | (vVar.i(15) << 15) | vVar.i(15));
                                    this.f512h = true;
                                }
                                this.f514l = this.f509e.b(i18);
                            }
                            i16 |= this.k ? 4 : 0;
                            iVar.f(i16, this.f514l);
                            this.f507c = 3;
                            this.f508d = 0;
                            i14 = 0;
                            i13 = 2;
                        }
                    } else {
                        if (i17 != 3) {
                            throw new IllegalStateException();
                        }
                        int a = wVar.a();
                        int i19 = this.j;
                        int i20 = i19 == -1 ? i14 : a - i19;
                        if (i20 > 0) {
                            a -= i20;
                            wVar.E(wVar.f13363b + a);
                        }
                        iVar.c(wVar);
                        int i21 = this.j;
                        if (i21 != -1) {
                            int i22 = i21 - a;
                            this.j = i22;
                            if (i22 == 0) {
                                iVar.e();
                                this.f507c = 1;
                                this.f508d = i14;
                            }
                        }
                    }
                    i6 = i13;
                    i10 = i14;
                } else {
                    i10 = i14;
                    if (d(wVar, vVar.f13356b, 9)) {
                        vVar.p(i10);
                        int i23 = vVar.i(24);
                        if (i23 != 1) {
                            com.discord.chat.bridge.botuikit.a.q(i23, "Unexpected start code prefix: ", "PesReader");
                            this.j = -1;
                            i11 = 0;
                            i6 = 2;
                        } else {
                            vVar.s(8);
                            int i24 = vVar.i(16);
                            vVar.s(5);
                            this.k = vVar.h();
                            i6 = 2;
                            vVar.s(2);
                            this.f510f = vVar.h();
                            this.f511g = vVar.h();
                            vVar.s(6);
                            int i25 = vVar.i(8);
                            this.f513i = i25;
                            if (i24 == 0) {
                                this.j = -1;
                            } else {
                                int i26 = (i24 - 3) - i25;
                                this.j = i26;
                                if (i26 < 0) {
                                    ke.b.N("PesReader", "Found negative packet payload size: " + this.j);
                                    this.j = -1;
                                }
                            }
                            i11 = 2;
                        }
                        this.f507c = i11;
                        i10 = 0;
                        this.f508d = 0;
                    } else {
                        i6 = 2;
                    }
                }
            } else {
                i6 = i13;
                i10 = i14;
                wVar.G(wVar.a());
            }
            i14 = i10;
            i13 = i6;
        }
    }

    public final boolean d(ke.w wVar, byte[] bArr, int i5) {
        int min = Math.min(wVar.a(), i5 - this.f508d);
        if (min <= 0) {
            return true;
        }
        if (bArr == null) {
            wVar.G(min);
        } else {
            wVar.e(bArr, this.f508d, min);
        }
        int i6 = this.f508d + min;
        this.f508d = i6;
        return i6 == i5;
    }
}
