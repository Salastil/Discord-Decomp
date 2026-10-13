package tc;

import ad.x;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import hc.g1;
import java.util.Arrays;
import ke.d0;
import ke.w;
import org.webrtc.PeerConnection;
import qc.g;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.n;
import qc.o;
import qc.s;
import qc.v;
import ys.d;

/* loaded from: classes3.dex */
public final class b implements j {

    /* renamed from: e, reason: collision with root package name */
    public l f18259e;

    /* renamed from: f, reason: collision with root package name */
    public v f18260f;

    /* renamed from: h, reason: collision with root package name */
    public Metadata f18262h;

    /* renamed from: i, reason: collision with root package name */
    public o f18263i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public x f18264l;

    /* renamed from: m, reason: collision with root package name */
    public int f18265m;

    /* renamed from: n, reason: collision with root package name */
    public long f18266n;
    public final byte[] a = new byte[42];

    /* renamed from: b, reason: collision with root package name */
    public final w f18256b = new w(new byte[PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS], 0);

    /* renamed from: c, reason: collision with root package name */
    public final boolean f18257c = false;

    /* renamed from: d, reason: collision with root package name */
    public final m f18258d = new m();

    /* renamed from: g, reason: collision with root package name */
    public int f18261g = 0;

    @Override // qc.j
    public final void a(l lVar) {
        this.f18259e = lVar;
        this.f18260f = lVar.y(0, 1);
        lVar.r();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v28 */
    /* JADX WARN: Type inference failed for: r2v6 */
    /* JADX WARN: Type inference failed for: r2v7, types: [boolean, int] */
    @Override // qc.j
    public final int e(k kVar, m mVar) {
        o oVar;
        Metadata metadata;
        int i5;
        s nVar;
        long j;
        int i6;
        long j5;
        boolean z5;
        int i10 = this.f18261g;
        if (i10 == 0) {
            boolean z6 = !this.f18257c;
            ((g) kVar).f16775x = 0;
            g gVar = (g) kVar;
            long k = gVar.k();
            Metadata t5 = ys.l.t(kVar, z6);
            gVar.u((int) (gVar.k() - k));
            this.f18262h = t5;
            this.f18261g = 1;
            return 0;
        }
        byte[] bArr = this.a;
        if (i10 == 1) {
            ((g) kVar).j(bArr, 0, bArr.length, false);
            ((g) kVar).f16775x = 0;
            this.f18261g = 2;
            return 0;
        }
        int i11 = 3;
        if (i10 == 2) {
            w wVar = new w(4);
            ((g) kVar).a(wVar.a, 0, 4, false);
            if (wVar.v() != 1716281667) {
                throw g1.a("Failed to read FLAC stream marker.", null);
            }
            this.f18261g = 3;
            return 0;
        }
        if (i10 == 3) {
            ?? r22 = 0;
            o oVar2 = this.f18263i;
            boolean z7 = false;
            while (!z7) {
                ((g) kVar).f16775x = r22;
                byte[] bArr2 = new byte[4];
                ke.v vVar = new ke.v(bArr2, 4);
                g gVar2 = (g) kVar;
                gVar2.j(bArr2, r22, 4, r22);
                boolean h6 = vVar.h();
                int i12 = vVar.i(r10);
                int i13 = vVar.i(24) + 4;
                if (i12 == 0) {
                    byte[] bArr3 = new byte[38];
                    gVar2.a(bArr3, r22, 38, r22);
                    oVar2 = new o(bArr3, 4);
                } else {
                    if (oVar2 == null) {
                        throw new IllegalArgumentException();
                    }
                    Metadata metadata2 = oVar2.f16791l;
                    if (i12 == i11) {
                        w wVar2 = new w(i13);
                        gVar2.a(wVar2.a, r22, i13, r22);
                        oVar = new o(oVar2.a, oVar2.f16783b, oVar2.f16784c, oVar2.f16785d, oVar2.f16786e, oVar2.f16788g, oVar2.f16789h, oVar2.j, ys.l.v(wVar2), oVar2.f16791l);
                    } else if (i12 == 4) {
                        w wVar3 = new w(i13);
                        gVar2.a(wVar3.a, 0, i13, false);
                        wVar3.G(4);
                        Metadata y5 = zk.a.y(Arrays.asList((String[]) zk.a.z(wVar3, false, false).f19405d));
                        if (metadata2 == null) {
                            metadata = y5;
                        } else {
                            if (y5 != null) {
                                metadata2 = metadata2.a(y5.f5427d);
                            }
                            metadata = metadata2;
                        }
                        oVar = new o(oVar2.a, oVar2.f16783b, oVar2.f16784c, oVar2.f16785d, oVar2.f16786e, oVar2.f16788g, oVar2.f16789h, oVar2.j, oVar2.k, metadata);
                    } else if (i12 == 6) {
                        w wVar4 = new w(i13);
                        gVar2.a(wVar4.a, 0, i13, false);
                        wVar4.G(4);
                        Metadata metadata3 = new Metadata(e0.s(gd.b.a(wVar4)));
                        if (metadata2 != null) {
                            metadata3 = metadata2.a(metadata3.f5427d);
                        }
                        oVar = new o(oVar2.a, oVar2.f16783b, oVar2.f16784c, oVar2.f16785d, oVar2.f16786e, oVar2.f16788g, oVar2.f16789h, oVar2.j, oVar2.k, metadata3);
                    } else {
                        gVar2.u(i13);
                    }
                    oVar2 = oVar;
                }
                int i14 = d0.a;
                this.f18263i = oVar2;
                z7 = h6;
                r22 = 0;
                i11 = 3;
                r10 = 7;
            }
            this.f18263i.getClass();
            this.j = Math.max(this.f18263i.f16784c, 6);
            v vVar2 = this.f18260f;
            int i15 = d0.a;
            vVar2.e(this.f18263i.c(bArr, this.f18262h));
            this.f18261g = 4;
            return 0;
        }
        long j7 = 0;
        if (i10 == 4) {
            ((g) kVar).f16775x = 0;
            w wVar5 = new w(2);
            g gVar3 = (g) kVar;
            gVar3.j(wVar5.a, 0, 2, false);
            int z8 = wVar5.z();
            if ((z8 >> 2) != 16382) {
                gVar3.f16775x = 0;
                throw g1.a("First frame does not start with sync code.", null);
            }
            gVar3.f16775x = 0;
            this.k = z8;
            l lVar = this.f18259e;
            int i16 = d0.a;
            long j10 = gVar3.f16773v;
            long j11 = gVar3.f16772i;
            this.f18263i.getClass();
            o oVar3 = this.f18263i;
            if (oVar3.k != null) {
                nVar = new n(oVar3, j10, 0);
                i5 = 0;
            } else if (j11 == -1 || oVar3.j <= 0) {
                i5 = 0;
                nVar = new n(oVar3.b());
            } else {
                int i17 = this.k;
                int i18 = oVar3.f16784c;
                ni.a aVar = new ni.a(4, oVar3);
                a aVar2 = new a(oVar3, i17);
                long b10 = oVar3.b();
                long j12 = oVar3.j;
                int i19 = oVar3.f16785d;
                if (i19 > 0) {
                    i5 = 0;
                    j = ((i19 + i18) / 2) + 1;
                    i6 = i18;
                } else {
                    i5 = 0;
                    int i20 = oVar3.a;
                    j = (((((i20 != oVar3.f16783b || i20 <= 0) ? 4096L : i20) * oVar3.f16788g) * oVar3.f16789h) / 8) + 64;
                    i6 = i18;
                }
                x xVar = new x(aVar, aVar2, b10, j12, j10, j11, j, Math.max(6, i6));
                this.f18264l = xVar;
                nVar = (qc.a) xVar.f7692c;
            }
            lVar.c(nVar);
            this.f18261g = 5;
            return i5;
        }
        if (i10 != 5) {
            throw new IllegalStateException();
        }
        this.f18260f.getClass();
        this.f18263i.getClass();
        x xVar2 = this.f18264l;
        if (xVar2 != null && ((qc.b) xVar2.f7694e) != null) {
            return xVar2.v(kVar, mVar);
        }
        if (this.f18266n == -1) {
            o oVar4 = this.f18263i;
            ((g) kVar).f16775x = 0;
            g gVar4 = (g) kVar;
            gVar4.b(1, false);
            byte[] bArr4 = new byte[1];
            gVar4.j(bArr4, 0, 1, false);
            boolean z10 = (bArr4[0] & 1) == 1;
            gVar4.b(2, false);
            r10 = z10 ? 7 : 6;
            w wVar6 = new w(r10);
            byte[] bArr5 = wVar6.a;
            int i21 = 0;
            while (i21 < r10) {
                int p3 = gVar4.p(bArr5, i21, r10 - i21);
                if (p3 == -1) {
                    break;
                }
                i21 += p3;
            }
            wVar6.E(i21);
            gVar4.f16775x = 0;
            try {
                long A = wVar6.A();
                if (!z10) {
                    A *= oVar4.f16783b;
                }
                j7 = A;
            } catch (NumberFormatException unused) {
                r3 = false;
            }
            if (!r3) {
                throw g1.a(null, null);
            }
            this.f18266n = j7;
        } else {
            w wVar7 = this.f18256b;
            int i22 = wVar7.f13364c;
            if (i22 < 32768) {
                int read = ((g) kVar).read(wVar7.a, i22, PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS - i22);
                r3 = read == -1;
                if (!r3) {
                    wVar7.E(i22 + read);
                } else if (wVar7.a() == 0) {
                    long j13 = this.f18266n * 1000000;
                    o oVar5 = this.f18263i;
                    int i23 = d0.a;
                    this.f18260f.b(j13 / oVar5.f16786e, 1, this.f18265m, 0, null);
                    return -1;
                }
            } else {
                r3 = false;
            }
            int i24 = wVar7.f13363b;
            int i25 = this.f18265m;
            int i26 = this.j;
            if (i25 < i26) {
                wVar7.G(Math.min(i26 - i25, wVar7.a()));
            }
            this.f18263i.getClass();
            int i27 = wVar7.f13363b;
            while (true) {
                int i28 = wVar7.f13364c - 16;
                m mVar2 = this.f18258d;
                if (i27 <= i28) {
                    wVar7.F(i27);
                    if (d.p(wVar7, this.f18263i, this.k, mVar2)) {
                        wVar7.F(i27);
                        j5 = mVar2.a;
                        break;
                    }
                    i27++;
                } else {
                    if (r3) {
                        while (true) {
                            int i29 = wVar7.f13364c;
                            if (i27 > i29 - this.j) {
                                wVar7.F(i29);
                                break;
                            }
                            wVar7.F(i27);
                            try {
                                z5 = d.p(wVar7, this.f18263i, this.k, mVar2);
                            } catch (IndexOutOfBoundsException unused2) {
                                z5 = false;
                            }
                            if (wVar7.f13363b > wVar7.f13364c) {
                                z5 = false;
                            }
                            if (z5) {
                                wVar7.F(i27);
                                j5 = mVar2.a;
                                break;
                            }
                            i27++;
                        }
                    } else {
                        wVar7.F(i27);
                    }
                    j5 = -1;
                }
            }
            int i30 = wVar7.f13363b - i24;
            wVar7.F(i24);
            this.f18260f.d(i30, wVar7);
            int i31 = this.f18265m + i30;
            this.f18265m = i31;
            if (j5 != -1) {
                long j14 = this.f18266n * 1000000;
                o oVar6 = this.f18263i;
                int i32 = d0.a;
                this.f18260f.b(j14 / oVar6.f16786e, 1, i31, 0, null);
                this.f18265m = 0;
                this.f18266n = j5;
            }
            if (wVar7.a() < 16) {
                int a = wVar7.a();
                byte[] bArr6 = wVar7.a;
                System.arraycopy(bArr6, wVar7.f13363b, bArr6, 0, a);
                wVar7.F(0);
                wVar7.E(a);
            }
        }
        return 0;
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        ys.l.t(kVar, false);
        w wVar = new w(4);
        ((g) kVar).j(wVar.a, 0, 4, false);
        return wVar.v() == 1716281667;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        if (j == 0) {
            this.f18261g = 0;
        } else {
            x xVar = this.f18264l;
            if (xVar != null) {
                xVar.C(j5);
            }
        }
        this.f18266n = j5 != 0 ? -1L : 0L;
        this.f18265m = 0;
        this.f18256b.C(0);
    }

    @Override // qc.j
    public final void release() {
    }
}
