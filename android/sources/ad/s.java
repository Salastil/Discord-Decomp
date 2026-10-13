package ad;

import com.google.android.exoplayer2.Format;
import java.util.Collections;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class s implements i {
    public final e4.e a;

    /* renamed from: b, reason: collision with root package name */
    public String f464b;

    /* renamed from: c, reason: collision with root package name */
    public qc.v f465c;

    /* renamed from: d, reason: collision with root package name */
    public r f466d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f467e;

    /* renamed from: l, reason: collision with root package name */
    public long f472l;

    /* renamed from: f, reason: collision with root package name */
    public final boolean[] f468f = new boolean[3];

    /* renamed from: g, reason: collision with root package name */
    public final v f469g = new v(32);

    /* renamed from: h, reason: collision with root package name */
    public final v f470h = new v(33);

    /* renamed from: i, reason: collision with root package name */
    public final v f471i = new v(34);
    public final v j = new v(39);
    public final v k = new v(40);

    /* renamed from: m, reason: collision with root package name */
    public long f473m = -9223372036854775807L;

    /* renamed from: n, reason: collision with root package name */
    public final ke.w f474n = new ke.w();

    public s(e4.e eVar) {
        this.a = eVar;
    }

    @Override // ad.i
    public final void a() {
        this.f472l = 0L;
        this.f473m = -9223372036854775807L;
        ke.b.o(this.f468f);
        this.f469g.c();
        this.f470h.c();
        this.f471i.c();
        this.j.c();
        this.k.c();
        r rVar = this.f466d;
        if (rVar != null) {
            rVar.f458f = false;
            rVar.f459g = false;
            rVar.f460h = false;
            rVar.f461i = false;
            rVar.j = false;
        }
    }

    public final void b(byte[] bArr, int i5, int i6) {
        r rVar = this.f466d;
        if (rVar.f458f) {
            int i10 = rVar.f456d;
            int i11 = (i5 + 2) - i10;
            if (i11 < i6) {
                rVar.f459g = (bArr[i11] & ByteCompanionObject.MIN_VALUE) != 0;
                rVar.f458f = false;
            } else {
                rVar.f456d = (i6 - i5) + i10;
            }
        }
        if (!this.f467e) {
            this.f469g.a(bArr, i5, i6);
            this.f470h.a(bArr, i5, i6);
            this.f471i.a(bArr, i5, i6);
        }
        this.j.a(bArr, i5, i6);
        this.k.a(bArr, i5, i6);
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x0176  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0191  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x020d  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0218  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0223  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x022c A[SYNTHETIC] */
    @Override // ad.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(ke.w wVar) {
        int i5;
        byte[] bArr;
        int i6;
        int i10;
        long j;
        int i11;
        boolean b10;
        v vVar;
        int i12;
        v vVar2;
        boolean z5;
        boolean z6;
        boolean z7;
        ke.w wVar2 = wVar;
        ke.b.l(this.f465c);
        int i13 = ke.d0.a;
        while (wVar2.a() > 0) {
            int i14 = wVar2.f13363b;
            int i15 = wVar2.f13364c;
            byte[] bArr2 = wVar2.a;
            this.f472l += wVar2.a();
            this.f465c.d(wVar2.a(), wVar2);
            while (i14 < i15) {
                int u5 = ke.b.u(bArr2, i14, i15, this.f468f);
                if (u5 == i15) {
                    b(bArr2, i14, i15);
                    return;
                }
                int i16 = u5 + 3;
                int i17 = (bArr2[i16] & 126) >> 1;
                int i18 = u5 - i14;
                if (i18 > 0) {
                    b(bArr2, i14, u5);
                }
                int i19 = i15 - u5;
                long j5 = this.f472l - i19;
                int i20 = i18 < 0 ? -i18 : 0;
                long j7 = this.f473m;
                qc.v[] vVarArr = (qc.v[]) this.a.f7944i;
                r rVar = this.f466d;
                boolean z8 = this.f467e;
                if (rVar.j && rVar.f459g) {
                    rVar.f463m = rVar.f455c;
                    rVar.j = false;
                } else if (rVar.f460h || rVar.f459g) {
                    if (z8 && rVar.f461i) {
                        long j10 = rVar.f454b;
                        int i21 = i19 + ((int) (j5 - j10));
                        long j11 = rVar.f462l;
                        if (j11 != -9223372036854775807L) {
                            rVar.a.b(j11, rVar.f463m ? 1 : 0, (int) (j10 - rVar.k), i21, null);
                        }
                    }
                    rVar.k = rVar.f454b;
                    rVar.f462l = rVar.f457e;
                    rVar.f463m = rVar.f455c;
                    rVar.f461i = true;
                }
                boolean z10 = this.f467e;
                v vVar3 = this.f469g;
                v vVar4 = this.f470h;
                v vVar5 = this.f471i;
                if (!z10) {
                    vVar3.b(i20);
                    vVar4.b(i20);
                    vVar5.b(i20);
                    if (vVar3.f503c && vVar4.f503c && vVar5.f503c) {
                        qc.v vVar6 = this.f465c;
                        i5 = i15;
                        String str = this.f464b;
                        bArr = bArr2;
                        int i22 = vVar3.f505e;
                        i6 = i16;
                        byte[] bArr3 = new byte[vVar4.f505e + i22 + vVar5.f505e];
                        i11 = i19;
                        i10 = i17;
                        System.arraycopy(vVar3.f504d, 0, bArr3, 0, i22);
                        j = j5;
                        System.arraycopy(vVar4.f504d, 0, bArr3, vVar3.f505e, vVar4.f505e);
                        System.arraycopy(vVar5.f504d, 0, bArr3, vVar3.f505e + vVar4.f505e, vVar5.f505e);
                        ke.p E = ke.b.E(vVar4.f504d, 3, vVar4.f505e);
                        String e9 = ke.b.e(E.a, E.f13326b, E.f13327c, E.f13328d, E.f13329e, E.f13330f);
                        hc.f0 f0Var = new hc.f0();
                        f0Var.a = str;
                        f0Var.k = "video/hevc";
                        f0Var.f9676h = e9;
                        f0Var.f9682p = E.f13331g;
                        f0Var.f9683q = E.f13332h;
                        f0Var.f9686t = E.f13333i;
                        f0Var.f9679m = Collections.singletonList(bArr3);
                        vVar6.e(new Format(f0Var));
                        this.f467e = true;
                        v vVar7 = this.j;
                        b10 = vVar7.b(i20);
                        ke.w wVar3 = this.f474n;
                        if (b10) {
                            wVar3.D(vVar7.f504d, ke.b.M(vVar7.f504d, vVar7.f505e));
                            wVar3.G(5);
                            tn.g.d(j7, wVar3, vVarArr);
                        }
                        vVar = this.k;
                        if (vVar.b(i20)) {
                            wVar3.D(vVar.f504d, ke.b.M(vVar.f504d, vVar.f505e));
                            wVar3.G(5);
                            tn.g.d(j7, wVar3, vVarArr);
                        }
                        long j12 = this.f473m;
                        r rVar2 = this.f466d;
                        boolean z11 = this.f467e;
                        rVar2.f459g = false;
                        rVar2.f460h = false;
                        rVar2.f457e = j12;
                        rVar2.f456d = 0;
                        long j13 = j;
                        rVar2.f454b = j13;
                        i12 = i10;
                        if (i12 >= 32 || i12 == 40) {
                            vVar2 = vVar5;
                            z5 = false;
                        } else {
                            if (!rVar2.f461i || rVar2.j) {
                                vVar2 = vVar5;
                                z5 = false;
                            } else {
                                if (z11) {
                                    long j14 = rVar2.f462l;
                                    if (j14 != -9223372036854775807L) {
                                        vVar2 = vVar5;
                                        rVar2.a.b(j14, rVar2.f463m ? 1 : 0, (int) (j13 - rVar2.k), i11, null);
                                        z5 = false;
                                        rVar2.f461i = false;
                                    }
                                }
                                vVar2 = vVar5;
                                z5 = false;
                                rVar2.f461i = false;
                            }
                            if ((32 <= i12 && i12 <= 35) || i12 == 39) {
                                z6 = true;
                                rVar2.f460h = !rVar2.j;
                                rVar2.j = true;
                                z7 = (i12 >= 16 || i12 > 21) ? z5 : z6;
                                rVar2.f455c = z7;
                                if (!z7 || i12 <= 9) {
                                    z5 = z6;
                                }
                                rVar2.f458f = z5;
                                if (!this.f467e) {
                                    vVar3.d(i12);
                                    vVar4.d(i12);
                                    vVar2.d(i12);
                                }
                                vVar7.d(i12);
                                vVar.d(i12);
                                i15 = i5;
                                bArr2 = bArr;
                                i14 = i6;
                            }
                        }
                        z6 = true;
                        if (i12 >= 16) {
                        }
                        rVar2.f455c = z7;
                        if (!z7) {
                        }
                        z5 = z6;
                        rVar2.f458f = z5;
                        if (!this.f467e) {
                        }
                        vVar7.d(i12);
                        vVar.d(i12);
                        i15 = i5;
                        bArr2 = bArr;
                        i14 = i6;
                    }
                }
                i5 = i15;
                bArr = bArr2;
                i6 = i16;
                i10 = i17;
                j = j5;
                i11 = i19;
                v vVar72 = this.j;
                b10 = vVar72.b(i20);
                ke.w wVar32 = this.f474n;
                if (b10) {
                }
                vVar = this.k;
                if (vVar.b(i20)) {
                }
                long j122 = this.f473m;
                r rVar22 = this.f466d;
                boolean z112 = this.f467e;
                rVar22.f459g = false;
                rVar22.f460h = false;
                rVar22.f457e = j122;
                rVar22.f456d = 0;
                long j132 = j;
                rVar22.f454b = j132;
                i12 = i10;
                if (i12 >= 32) {
                }
                vVar2 = vVar5;
                z5 = false;
                z6 = true;
                if (i12 >= 16) {
                }
                rVar22.f455c = z7;
                if (!z7) {
                }
                z5 = z6;
                rVar22.f458f = z5;
                if (!this.f467e) {
                }
                vVar72.d(i12);
                vVar.d(i12);
                i15 = i5;
                bArr2 = bArr;
                i14 = i6;
            }
            wVar2 = wVar;
        }
    }

    @Override // ad.i
    public final void d(qc.l lVar, g0 g0Var) {
        g0Var.a();
        g0Var.b();
        this.f464b = g0Var.f368e;
        g0Var.b();
        qc.v y5 = lVar.y(g0Var.f367d, 2);
        this.f465c = y5;
        this.f466d = new r(y5);
        this.a.g(lVar, g0Var);
    }

    @Override // ad.i
    public final void f(int i5, long j) {
        if (j != -9223372036854775807L) {
            this.f473m = j;
        }
    }

    @Override // ad.i
    public final void e() {
    }
}
