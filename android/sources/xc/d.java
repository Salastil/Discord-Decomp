package xc;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import hc.f0;
import hc.g1;
import id.n;
import java.io.EOFException;
import jc.o0;
import ke.d0;
import ke.w;
import org.webrtc.PeerConnection;
import qc.i;
import qc.j;
import qc.k;
import qc.l;
import qc.m;
import qc.p;
import qc.v;

/* loaded from: classes3.dex */
public final class d implements j {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final w f20309b;

    /* renamed from: c, reason: collision with root package name */
    public final o0 f20310c;

    /* renamed from: d, reason: collision with root package name */
    public final p f20311d;

    /* renamed from: e, reason: collision with root package name */
    public final u4.c f20312e;

    /* renamed from: f, reason: collision with root package name */
    public final i f20313f;

    /* renamed from: g, reason: collision with root package name */
    public l f20314g;

    /* renamed from: h, reason: collision with root package name */
    public v f20315h;

    /* renamed from: i, reason: collision with root package name */
    public v f20316i;
    public int j;
    public Metadata k;

    /* renamed from: l, reason: collision with root package name */
    public long f20317l;

    /* renamed from: m, reason: collision with root package name */
    public long f20318m;

    /* renamed from: n, reason: collision with root package name */
    public long f20319n;

    /* renamed from: o, reason: collision with root package name */
    public int f20320o;

    /* renamed from: p, reason: collision with root package name */
    public f f20321p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f20322q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f20323r;

    /* renamed from: s, reason: collision with root package name */
    public long f20324s;

    public d(int i5) {
        this(-9223372036854775807L);
    }

    @Override // qc.j
    public final void a(l lVar) {
        this.f20314g = lVar;
        v y5 = lVar.y(0, 1);
        this.f20315h = y5;
        this.f20316i = y5;
        this.f20314g.r();
    }

    public final a b(k kVar, boolean z5) {
        w wVar = this.f20309b;
        kVar.C(wVar.a, 0, 4);
        wVar.F(0);
        int g6 = wVar.g();
        o0 o0Var = this.f20310c;
        o0Var.d(g6);
        return new a(kVar.getLength(), kVar.getPosition(), o0Var.f12595e, o0Var.f12592b, z5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x0018, code lost:
    
        if (r9.k() > (r2 - 4)) goto L12;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c(k kVar) {
        f fVar = this.f20321p;
        if (fVar != null) {
            long c6 = fVar.c();
            if (c6 != -1) {
            }
        }
        try {
            return !kVar.j(this.f20309b.a, 0, 4, true);
        } catch (EOFException unused) {
            return true;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:59:0x00da, code lost:
    
        if (r19 == false) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x00dc, code lost:
    
        r18.u(r3 + r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x00e4, code lost:
    
        r17.j = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x00e6, code lost:
    
        return true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x00e1, code lost:
    
        r18.t();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean d(k kVar, boolean z5) {
        int i5;
        int i6;
        int e9;
        int i10 = z5 ? PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS : KeyCommandDescriptor.ModifierFlags.SHIFT;
        kVar.t();
        if (kVar.getPosition() == 0) {
            w wVar = (w) this.f20312e.f18811d;
            Metadata metadata = null;
            int i11 = 0;
            while (true) {
                try {
                    kVar.C(wVar.a, 0, 10);
                    wVar.F(0);
                    if (wVar.w() != 4801587) {
                        break;
                    }
                    wVar.G(3);
                    int t5 = wVar.t();
                    int i12 = t5 + 10;
                    if (metadata == null) {
                        byte[] bArr = new byte[i12];
                        System.arraycopy(wVar.a, 0, bArr, 0, 10);
                        kVar.C(bArr, 10, t5);
                        metadata = new id.i(null).M(bArr, i12);
                    } else {
                        kVar.l(t5);
                    }
                    i11 += i12;
                } catch (EOFException unused) {
                }
            }
            kVar.t();
            kVar.l(i11);
            this.k = metadata;
            if (metadata != null) {
                this.f20311d.b(metadata);
            }
            i5 = (int) kVar.k();
            if (!z5) {
                kVar.u(i5);
            }
            i6 = 0;
        } else {
            i5 = 0;
            i6 = 0;
        }
        int i13 = i6;
        int i14 = i13;
        while (true) {
            if (!c(kVar)) {
                w wVar2 = this.f20309b;
                wVar2.F(0);
                int g6 = wVar2.g();
                if ((i6 == 0 || ((-128000) & g6) == (i6 & (-128000))) && (e9 = jc.a.e(g6)) != -1) {
                    i13++;
                    if (i13 != 1) {
                        if (i13 == 4) {
                            break;
                        }
                    } else {
                        this.f20310c.d(g6);
                        i6 = g6;
                    }
                    kVar.l(e9 - 4);
                } else {
                    int i15 = i14 + 1;
                    if (i14 == i10) {
                        if (z5) {
                            return false;
                        }
                        throw g1.a("Searched too many bytes.", null);
                    }
                    if (z5) {
                        kVar.t();
                        kVar.l(i5 + i15);
                    } else {
                        kVar.u(1);
                    }
                    i13 = 0;
                    i14 = i15;
                    i6 = 0;
                }
            } else if (i13 <= 0) {
                throw new EOFException();
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x006a, code lost:
    
        if (r3 != 1231971951) goto L24;
     */
    /* JADX WARN: Removed duplicated region for block: B:143:0x018b  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x01fd  */
    /* JADX WARN: Removed duplicated region for block: B:161:0x022f  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0087 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0251  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x02e0  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x043f  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x02eb  */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(k kVar, m mVar) {
        int i5;
        int i6;
        long j;
        k kVar2;
        Throwable th2;
        long j5;
        int i10;
        p pVar;
        qc.g gVar;
        int g6;
        f fVar;
        p pVar2;
        int i11;
        int i12;
        int x5;
        h hVar;
        Metadata metadata;
        c cVar;
        f b10;
        long j7;
        p pVar3;
        int u5;
        d dVar = this;
        ke.b.l(dVar.f20315h);
        int i13 = d0.a;
        int i14 = dVar.j;
        o0 o0Var = dVar.f20310c;
        if (i14 == 0) {
            try {
                dVar.d(kVar, false);
            } catch (EOFException unused) {
                i5 = -1;
                i6 = -1;
                j = 1000000;
            }
        }
        f fVar2 = dVar.f20321p;
        w wVar = dVar.f20309b;
        if (fVar2 == null) {
            w wVar2 = new w(o0Var.f12592b);
            j = 1000000;
            ((qc.g) kVar).j(wVar2.a, 0, o0Var.f12592b, false);
            int i15 = 21;
            if ((o0Var.a & 1) != 0) {
                if (o0Var.f12594d != 1) {
                    i15 = 36;
                }
            } else if (o0Var.f12594d == 1) {
                i15 = 13;
            }
            th2 = null;
            j5 = 0;
            if (wVar2.f13364c >= i15 + 4) {
                wVar2.F(i15);
                i10 = wVar2.g();
                if (i10 != 1483304551) {
                }
                pVar = dVar.f20311d;
                if (i10 != 1483304551 || i10 == 1231971951) {
                    gVar = (qc.g) kVar;
                    long j10 = gVar.f16772i;
                    long j11 = gVar.f16773v;
                    int i16 = o0Var.f12596f;
                    int i17 = o0Var.f12593c;
                    g6 = wVar2.g();
                    if ((g6 & 1) == 1 || (x5 = wVar2.x()) == 0) {
                        fVar = null;
                    } else {
                        long P = d0.P(x5, i16 * 1000000, i17);
                        if ((g6 & 6) != 6) {
                            hVar = new h(j11, o0Var.f12592b, P, -1L, null);
                        } else {
                            long v5 = wVar2.v();
                            long[] jArr = new long[100];
                            for (int i18 = 0; i18 < 100; i18++) {
                                jArr[i18] = wVar2.u();
                            }
                            if (j10 != -1) {
                                long j12 = j11 + v5;
                                if (j10 != j12) {
                                    StringBuilder n6 = k0.d.n(j10, "XING data size mismatch: ", ", ");
                                    n6.append(j12);
                                    ke.b.N("XingSeeker", n6.toString());
                                }
                            }
                            hVar = new h(j11, o0Var.f12592b, P, v5, jArr);
                        }
                        fVar = hVar;
                    }
                    pVar2 = pVar;
                    if (fVar != null && (pVar2.a == -1 || pVar2.f16793b == -1)) {
                        gVar.f16775x = 0;
                        gVar.b(i15 + 141, false);
                        gVar.j(wVar.a, 0, 3, false);
                        wVar.F(0);
                        int w5 = wVar.w();
                        i11 = w5 >> 12;
                        i12 = w5 & 4095;
                        if (i11 <= 0 || i12 > 0) {
                            pVar2.a = i11;
                            pVar2.f16793b = i12;
                        }
                    }
                    gVar.u(o0Var.f12592b);
                    if (fVar == null && !fVar.d() && i10 == 1231971951) {
                        dVar = this;
                        kVar2 = kVar;
                        fVar = dVar.b(kVar2, false);
                    } else {
                        dVar = this;
                        kVar2 = kVar;
                    }
                } else {
                    if (i10 == 1447187017) {
                        qc.g gVar2 = (qc.g) kVar;
                        long j13 = gVar2.f16772i;
                        long j14 = gVar2.f16773v;
                        wVar2.G(10);
                        int g10 = wVar2.g();
                        if (g10 <= 0) {
                            fVar = null;
                            pVar3 = pVar;
                        } else {
                            int i19 = o0Var.f12593c;
                            long P2 = d0.P(g10, (i19 >= 32000 ? 1152 : 576) * 1000000, i19);
                            int z5 = wVar2.z();
                            int z6 = wVar2.z();
                            int z7 = wVar2.z();
                            wVar2.G(2);
                            long j15 = j14 + o0Var.f12592b;
                            long[] jArr2 = new long[z5];
                            long[] jArr3 = new long[z5];
                            long j16 = j14;
                            int i20 = 0;
                            while (true) {
                                if (i20 < z5) {
                                    long[] jArr4 = jArr3;
                                    pVar3 = pVar;
                                    jArr2[i20] = (i20 * P2) / z5;
                                    jArr4[i20] = Math.max(j16, j15);
                                    if (z7 == 1) {
                                        u5 = wVar2.u();
                                    } else if (z7 == 2) {
                                        u5 = wVar2.z();
                                    } else if (z7 == 3) {
                                        u5 = wVar2.w();
                                    } else {
                                        if (z7 != 4) {
                                            fVar = null;
                                            break;
                                        }
                                        u5 = wVar2.x();
                                    }
                                    j16 += u5 * z6;
                                    i20++;
                                    pVar = pVar3;
                                    z7 = z7;
                                    jArr3 = jArr4;
                                } else {
                                    long[] jArr5 = jArr3;
                                    pVar3 = pVar;
                                    if (j13 != -1 && j13 != j16) {
                                        StringBuilder n10 = k0.d.n(j13, "VBRI data size mismatch: ", ", ");
                                        n10.append(j16);
                                        ke.b.N("VbriSeeker", n10.toString());
                                    }
                                    fVar = new g(jArr2, jArr5, P2, j16);
                                }
                            }
                        }
                        gVar2.u(o0Var.f12592b);
                        dVar = this;
                        kVar2 = kVar;
                    } else {
                        pVar3 = pVar;
                        ((qc.g) kVar).f16775x = 0;
                        dVar = this;
                        kVar2 = kVar;
                        fVar = null;
                    }
                    pVar2 = pVar3;
                }
                metadata = dVar.k;
                qc.g gVar3 = (qc.g) kVar2;
                long j17 = gVar3.f16773v;
                if (metadata != null) {
                    for (dd.b bVar : metadata.f5427d) {
                        if (bVar instanceof id.l) {
                            int[] iArr = ((id.l) bVar).f10643w;
                            if (metadata != null) {
                                for (dd.b bVar2 : metadata.f5427d) {
                                    if (bVar2 instanceof n) {
                                        n nVar = (n) bVar2;
                                        if (nVar.f10636d.equals("TLEN")) {
                                            j7 = d0.I(Long.parseLong((String) nVar.f10649v.get(0)));
                                            break;
                                        }
                                    }
                                }
                            }
                            j7 = -9223372036854775807L;
                            int length = iArr.length;
                            int i21 = length + 1;
                            long[] jArr6 = new long[i21];
                            long[] jArr7 = new long[i21];
                            jArr6[0] = j17;
                            jArr7[0] = 0;
                            long j18 = 0;
                            int i22 = 1;
                            while (i22 <= length) {
                                int i23 = i22 - 1;
                                long j19 = j17 + r11.f10641i + iArr[i23];
                                j18 += r11.f10642v + r11.f10644x[i23];
                                jArr6[i22] = j19;
                                jArr7[i22] = j18;
                                i22++;
                                length = length;
                                j17 = j19;
                            }
                            cVar = new c(j7, jArr6, jArr7);
                            if (dVar.f20322q) {
                                if (cVar != null) {
                                    fVar = cVar;
                                } else if (fVar == null) {
                                    fVar = null;
                                }
                                if (fVar != null) {
                                    fVar.d();
                                    b10 = fVar;
                                } else {
                                    b10 = dVar.b(kVar2, false);
                                }
                            } else {
                                b10 = new e(-9223372036854775807L);
                            }
                            dVar.f20321p = b10;
                            dVar.f20314g.c(b10);
                            v vVar = dVar.f20316i;
                            f0 f0Var = new f0();
                            f0Var.k = (String) o0Var.f12597g;
                            f0Var.f9678l = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                            f0Var.f9690x = o0Var.f12594d;
                            f0Var.f9691y = o0Var.f12593c;
                            f0Var.A = pVar2.a;
                            f0Var.B = pVar2.f16793b;
                            f0Var.f9677i = dVar.k;
                            vVar.e(new Format(f0Var));
                            dVar.f20319n = gVar3.f16773v;
                        }
                    }
                }
                cVar = null;
                if (dVar.f20322q) {
                }
                dVar.f20321p = b10;
                dVar.f20314g.c(b10);
                v vVar2 = dVar.f20316i;
                f0 f0Var2 = new f0();
                f0Var2.k = (String) o0Var.f12597g;
                f0Var2.f9678l = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                f0Var2.f9690x = o0Var.f12594d;
                f0Var2.f9691y = o0Var.f12593c;
                f0Var2.A = pVar2.a;
                f0Var2.B = pVar2.f16793b;
                f0Var2.f9677i = dVar.k;
                vVar2.e(new Format(f0Var2));
                dVar.f20319n = gVar3.f16773v;
            }
            if (wVar2.f13364c >= 40) {
                wVar2.F(36);
                if (wVar2.g() == 1447187017) {
                    i10 = 1447187017;
                    pVar = dVar.f20311d;
                    if (i10 != 1483304551) {
                    }
                    gVar = (qc.g) kVar;
                    long j102 = gVar.f16772i;
                    long j112 = gVar.f16773v;
                    int i162 = o0Var.f12596f;
                    int i172 = o0Var.f12593c;
                    g6 = wVar2.g();
                    if ((g6 & 1) == 1) {
                    }
                    fVar = null;
                    pVar2 = pVar;
                    if (fVar != null) {
                        gVar.f16775x = 0;
                        gVar.b(i15 + 141, false);
                        gVar.j(wVar.a, 0, 3, false);
                        wVar.F(0);
                        int w52 = wVar.w();
                        i11 = w52 >> 12;
                        i12 = w52 & 4095;
                        if (i11 <= 0) {
                        }
                        pVar2.a = i11;
                        pVar2.f16793b = i12;
                    }
                    gVar.u(o0Var.f12592b);
                    if (fVar == null) {
                    }
                    dVar = this;
                    kVar2 = kVar;
                    metadata = dVar.k;
                    qc.g gVar32 = (qc.g) kVar2;
                    long j172 = gVar32.f16773v;
                    if (metadata != null) {
                    }
                    cVar = null;
                    if (dVar.f20322q) {
                    }
                    dVar.f20321p = b10;
                    dVar.f20314g.c(b10);
                    v vVar22 = dVar.f20316i;
                    f0 f0Var22 = new f0();
                    f0Var22.k = (String) o0Var.f12597g;
                    f0Var22.f9678l = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                    f0Var22.f9690x = o0Var.f12594d;
                    f0Var22.f9691y = o0Var.f12593c;
                    f0Var22.A = pVar2.a;
                    f0Var22.B = pVar2.f16793b;
                    f0Var22.f9677i = dVar.k;
                    vVar22.e(new Format(f0Var22));
                    dVar.f20319n = gVar32.f16773v;
                }
            }
            i10 = 0;
            pVar = dVar.f20311d;
            if (i10 != 1483304551) {
            }
            gVar = (qc.g) kVar;
            long j1022 = gVar.f16772i;
            long j1122 = gVar.f16773v;
            int i1622 = o0Var.f12596f;
            int i1722 = o0Var.f12593c;
            g6 = wVar2.g();
            if ((g6 & 1) == 1) {
            }
            fVar = null;
            pVar2 = pVar;
            if (fVar != null) {
            }
            gVar.u(o0Var.f12592b);
            if (fVar == null) {
            }
            dVar = this;
            kVar2 = kVar;
            metadata = dVar.k;
            qc.g gVar322 = (qc.g) kVar2;
            long j1722 = gVar322.f16773v;
            if (metadata != null) {
            }
            cVar = null;
            if (dVar.f20322q) {
            }
            dVar.f20321p = b10;
            dVar.f20314g.c(b10);
            v vVar222 = dVar.f20316i;
            f0 f0Var222 = new f0();
            f0Var222.k = (String) o0Var.f12597g;
            f0Var222.f9678l = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
            f0Var222.f9690x = o0Var.f12594d;
            f0Var222.f9691y = o0Var.f12593c;
            f0Var222.A = pVar2.a;
            f0Var222.B = pVar2.f16793b;
            f0Var222.f9677i = dVar.k;
            vVar222.e(new Format(f0Var222));
            dVar.f20319n = gVar322.f16773v;
        } else {
            kVar2 = kVar;
            th2 = null;
            j = 1000000;
            j5 = 0;
            long j20 = dVar.f20319n;
            if (j20 != 0) {
                long j21 = ((qc.g) kVar2).f16773v;
                if (j21 < j20) {
                    ((qc.g) kVar2).u((int) (j20 - j21));
                }
            }
        }
        if (dVar.f20320o == 0) {
            ((qc.g) kVar2).f16775x = 0;
            if (!c(kVar)) {
                wVar.F(0);
                int g11 = wVar.g();
                if (((-128000) & g11) != (dVar.j & (-128000)) || jc.a.e(g11) == -1) {
                    ((qc.g) kVar2).u(1);
                    dVar.j = 0;
                    i5 = -1;
                    i6 = 0;
                    if (i6 == i5) {
                        f fVar3 = dVar.f20321p;
                        if (fVar3 instanceof b) {
                            if (fVar3.i() != ((dVar.f20318m * j) / o0Var.f12593c) + dVar.f20317l) {
                                f fVar4 = dVar.f20321p;
                                ((b) fVar4).getClass();
                                dVar.f20314g.c(fVar4);
                            }
                        }
                    }
                    return i6;
                }
                o0Var.d(g11);
                if (dVar.f20317l == -9223372036854775807L) {
                    dVar.f20317l = dVar.f20321p.b(((qc.g) kVar2).f16773v);
                    long j22 = dVar.a;
                    if (j22 != -9223372036854775807L) {
                        dVar.f20317l = (j22 - dVar.f20321p.b(j5)) + dVar.f20317l;
                    }
                }
                dVar.f20320o = o0Var.f12592b;
                f fVar5 = dVar.f20321p;
                if (fVar5 instanceof b) {
                    b bVar3 = (b) fVar5;
                    long j23 = (((dVar.f20318m + o0Var.f12596f) * j) / o0Var.f12593c) + dVar.f20317l;
                    long j24 = ((qc.g) kVar2).f16773v;
                    if (!bVar3.a(j23)) {
                        throw th2;
                    }
                    if (dVar.f20323r && bVar3.a(dVar.f20324s)) {
                        dVar.f20323r = false;
                        dVar.f20316i = dVar.f20315h;
                    }
                }
            }
            i5 = -1;
            i6 = -1;
            if (i6 == i5) {
            }
            return i6;
        }
        int c6 = dVar.f20316i.c(kVar2, dVar.f20320o, true);
        if (c6 != -1) {
            int i24 = dVar.f20320o - c6;
            dVar.f20320o = i24;
            if (i24 <= 0) {
                dVar.f20316i.b(((dVar.f20318m * j) / o0Var.f12593c) + dVar.f20317l, 1, o0Var.f12592b, 0, null);
                dVar.f20318m += o0Var.f12596f;
                dVar.f20320o = 0;
                i6 = 0;
                i5 = -1;
                if (i6 == i5) {
                }
                return i6;
            }
            i5 = -1;
            i6 = 0;
            if (i6 == i5) {
            }
            return i6;
        }
        i5 = -1;
        i6 = -1;
        if (i6 == i5) {
        }
        return i6;
    }

    @Override // qc.j
    public final boolean f(k kVar) {
        return d(kVar, true);
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.j = 0;
        this.f20317l = -9223372036854775807L;
        this.f20318m = 0L;
        this.f20320o = 0;
        this.f20324s = j5;
        f fVar = this.f20321p;
        if (!(fVar instanceof b) || ((b) fVar).a(j5)) {
            return;
        }
        this.f20323r = true;
        this.f20316i = this.f20313f;
    }

    public d(long j) {
        this.a = j;
        this.f20309b = new w(10);
        this.f20310c = new o0();
        this.f20311d = new p();
        this.f20317l = -9223372036854775807L;
        this.f20312e = new u4.c(28);
        i iVar = new i();
        this.f20313f = iVar;
        this.f20316i = iVar;
    }

    @Override // qc.j
    public final void release() {
    }
}
