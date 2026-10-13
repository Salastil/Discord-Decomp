package sd;

import android.net.Uri;
import android.text.TextUtils;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.e0;
import fi.r0;
import hc.f0;
import ic.c0;
import java.io.EOFException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeoutException;
import java.util.concurrent.atomic.AtomicInteger;
import ke.b0;
import ke.d0;

/* loaded from: classes3.dex */
public final class m extends pd.l {

    /* renamed from: i0, reason: collision with root package name */
    public static final AtomicInteger f17888i0 = new AtomicInteger();
    public final int H;
    public final int I;
    public final Uri J;
    public final boolean K;
    public final int L;
    public final DataSource M;
    public final ie.p N;
    public final b O;
    public final boolean P;
    public final boolean Q;
    public final b0 R;
    public final l S;
    public final List T;
    public final nc.i U;
    public final id.i V;
    public final ke.w W;
    public final boolean X;
    public final boolean Y;
    public b Z;
    public t a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f17889b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f17890c0;

    /* renamed from: d0, reason: collision with root package name */
    public volatile boolean f17891d0;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f17892e0;

    /* renamed from: f0, reason: collision with root package name */
    public e0 f17893f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f17894g0;
    public boolean h0;

    public m(l lVar, DataSource dataSource, ie.p pVar, Format format, boolean z5, DataSource dataSource2, ie.p pVar2, boolean z6, Uri uri, List list, int i5, Object obj, long j, long j5, long j7, int i6, boolean z7, int i10, boolean z8, boolean z10, b0 b0Var, nc.i iVar, b bVar, id.i iVar2, ke.w wVar, boolean z11, c0 c0Var) {
        super(dataSource, pVar, format, i5, obj, j, j5, j7);
        this.X = z5;
        this.L = i6;
        this.h0 = z7;
        this.I = i10;
        this.N = pVar2;
        this.M = dataSource2;
        this.f17890c0 = pVar2 != null;
        this.Y = z6;
        this.J = uri;
        this.P = z10;
        this.R = b0Var;
        this.Q = z8;
        this.S = lVar;
        this.T = list;
        this.U = iVar;
        this.O = bVar;
        this.V = iVar2;
        this.W = wVar;
        this.K = z11;
        fi.c0 c0Var2 = e0.f8656e;
        this.f17893f0 = r0.f8704w;
        this.H = f17888i0.getAndIncrement();
    }

    public static byte[] d(String str) {
        if (tn.g.x(str).startsWith("0x")) {
            str = str.substring(2);
        }
        byte[] byteArray = new BigInteger(str, 16).toByteArray();
        byte[] bArr = new byte[16];
        int length = byteArray.length > 16 ? byteArray.length - 16 : 0;
        System.arraycopy(byteArray, length, bArr, (16 - byteArray.length) + length, byteArray.length - length);
        return bArr;
    }

    @Override // pd.l
    public final boolean b() {
        throw null;
    }

    public final void c(DataSource dataSource, ie.p pVar, boolean z5, boolean z6) {
        ie.p c6;
        long j;
        if (z5) {
            r0 = this.f17889b0 != 0;
            c6 = pVar;
        } else {
            c6 = pVar.c(this.f17889b0);
        }
        try {
            qc.g f2 = f(dataSource, c6, z6);
            if (r0) {
                f2.u(this.f17889b0);
            }
            while (!this.f17891d0 && this.Z.a.e(f2, b.f17862d) == 0) {
                try {
                    try {
                    } catch (EOFException e9) {
                        if ((this.f16363v.f5231w & 16384) == 0) {
                            throw e9;
                        }
                        this.Z.a.g(0L, 0L);
                        j = f2.f16773v;
                    }
                } catch (Throwable th2) {
                    this.f17889b0 = (int) (f2.f16773v - pVar.f10715f);
                    throw th2;
                }
            }
            j = f2.f16773v;
            this.f17889b0 = (int) (j - pVar.f10715f);
        } finally {
            zo.c0.i(dataSource);
        }
    }

    public final int e(int i5) {
        ke.b.k(!this.K);
        if (i5 >= this.f17893f0.size()) {
            return 0;
        }
        return ((Integer) this.f17893f0.get(i5)).intValue();
    }

    public final qc.g f(DataSource dataSource, ie.p pVar, boolean z5) {
        int i5;
        long j;
        long j5;
        long j7;
        long j10;
        b bVar;
        b bVar2;
        int i6;
        ArrayList arrayList;
        qc.j aVar;
        boolean z6;
        boolean z7;
        List list;
        int i10;
        List singletonList;
        int i11;
        int i12;
        qc.j dVar;
        long o6 = dataSource.o(pVar);
        long j11 = this.f16366y;
        b0 b0Var = this.R;
        if (z5) {
            try {
                b0Var.f(j11, this.P);
            } catch (InterruptedException unused) {
                throw new InterruptedIOException();
            } catch (TimeoutException e9) {
                throw new IOException(e9);
            }
        }
        qc.g gVar = new qc.g(dataSource, pVar.f10715f, o6);
        if (this.Z == null) {
            ke.w wVar = this.W;
            gVar.f16775x = 0;
            try {
                wVar.C(10);
                gVar.j(wVar.a, 0, 10, false);
            } catch (EOFException unused2) {
                j = -9223372036854775807L;
            }
            if (wVar.w() != 4801587) {
                j5 = -9223372036854775807L;
                j = -9223372036854775807L;
            } else {
                wVar.G(3);
                int t5 = wVar.t();
                int i13 = t5 + 10;
                byte[] bArr = wVar.a;
                j = -9223372036854775807L;
                if (i13 > bArr.length) {
                    wVar.C(i13);
                    System.arraycopy(bArr, 0, wVar.a, 0, 10);
                }
                gVar.j(wVar.a, 10, t5, false);
                Metadata M = this.V.M(wVar.a, t5);
                if (M != null) {
                    for (dd.b bVar3 : M.f5427d) {
                        if (bVar3 instanceof id.m) {
                            id.m mVar = (id.m) bVar3;
                            if ("com.apple.streaming.transportStreamTimestamp".equals(mVar.f10645e)) {
                                System.arraycopy(mVar.f10646i, 0, wVar.a, 0, 8);
                                wVar.F(0);
                                wVar.E(8);
                                j5 = wVar.o() & 8589934591L;
                                break;
                            }
                        }
                    }
                }
                j5 = j;
            }
            gVar.f16775x = 0;
            b bVar4 = this.O;
            if (bVar4 != null) {
                qc.j jVar = bVar4.a;
                b0 b0Var2 = bVar4.f17864c;
                Format format = bVar4.f17863b;
                ke.b.k(!((jVar instanceof ad.e0) || (jVar instanceof yc.i)));
                if (jVar instanceof x) {
                    dVar = new x(format.f5229i, b0Var2);
                } else if (jVar instanceof ad.d) {
                    dVar = new ad.d(0);
                } else if (jVar instanceof ad.a) {
                    dVar = new ad.a();
                } else if (jVar instanceof ad.c) {
                    dVar = new ad.c();
                } else {
                    if (!(jVar instanceof xc.d)) {
                        throw new IllegalStateException("Unexpected extractor type for recreation: ".concat(jVar.getClass().getSimpleName()));
                    }
                    dVar = new xc.d(0);
                }
                bVar2 = new b(dVar, format, b0Var2);
                j7 = j5;
                j10 = j11;
                i5 = 0;
            } else {
                Uri uri = pVar.a;
                Map s2 = dataSource.s();
                ((d) this.S).getClass();
                Format format2 = this.f16363v;
                int z8 = ke.b.z(format2.I);
                List list2 = (List) s2.get("Content-Type");
                int z10 = ke.b.z((list2 == null || list2.isEmpty()) ? null : (String) list2.get(0));
                int A = ke.b.A(uri);
                ArrayList arrayList2 = new ArrayList(7);
                d.a(z8, arrayList2);
                d.a(z10, arrayList2);
                d.a(A, arrayList2);
                int i14 = 0;
                for (int i15 = 7; i14 < i15; i15 = 7) {
                    d.a(d.f17865b[i14], arrayList2);
                    i14++;
                }
                gVar.f16775x = 0;
                int i16 = 0;
                qc.j jVar2 = null;
                while (true) {
                    int size = arrayList2.size();
                    b0 b0Var3 = this.R;
                    if (i16 >= size) {
                        j7 = j5;
                        j10 = j11;
                        i5 = 0;
                        jVar2.getClass();
                        bVar = new b(jVar2, format2, b0Var3);
                        break;
                    }
                    int intValue = ((Integer) arrayList2.get(i16)).intValue();
                    j10 = j11;
                    if (intValue == 0) {
                        j7 = j5;
                        i6 = i16;
                        arrayList = arrayList2;
                        aVar = new ad.a();
                    } else if (intValue == 1) {
                        j7 = j5;
                        i6 = i16;
                        arrayList = arrayList2;
                        aVar = new ad.c();
                    } else if (intValue == 2) {
                        j7 = j5;
                        i6 = i16;
                        arrayList = arrayList2;
                        aVar = new ad.d(0);
                    } else if (intValue != 7) {
                        List list3 = this.T;
                        if (intValue == 8) {
                            i6 = i16;
                            arrayList = arrayList2;
                            Metadata metadata = format2.G;
                            if (metadata != null) {
                                int i17 = 0;
                                while (true) {
                                    dd.b[] bVarArr = metadata.f5427d;
                                    if (i17 >= bVarArr.length) {
                                        break;
                                    }
                                    dd.b bVar5 = bVarArr[i17];
                                    if (bVar5 instanceof w) {
                                        z7 = !((w) bVar5).f17948i.isEmpty();
                                        break;
                                    }
                                    i17++;
                                }
                            }
                            z7 = false;
                            if (z7) {
                                i10 = 4;
                                list = list3;
                            } else {
                                list = list3;
                                i10 = 0;
                            }
                            aVar = new yc.i(i10, b0Var3, null, list != null ? list : Collections.EMPTY_LIST, null);
                            j7 = j5;
                        } else if (intValue == 11) {
                            if (list3 != null) {
                                i11 = 48;
                                singletonList = list3;
                            } else {
                                f0 f0Var = new f0();
                                f0Var.k = "application/cea-608";
                                singletonList = Collections.singletonList(new Format(f0Var));
                                i11 = 16;
                            }
                            int i18 = i11;
                            String str = format2.F;
                            i6 = i16;
                            if (!TextUtils.isEmpty(str)) {
                                if (ke.o.b(str, "audio/mp4a-latm") == null) {
                                    i18 |= 2;
                                }
                                if (ke.o.b(str, "video/avc") == null) {
                                    i12 = i18 | 4;
                                    arrayList = arrayList2;
                                    j7 = j5;
                                    aVar = new ad.e0(2, b0Var3, new ad.f(i12, singletonList));
                                }
                            }
                            i12 = i18;
                            arrayList = arrayList2;
                            j7 = j5;
                            aVar = new ad.e0(2, b0Var3, new ad.f(i12, singletonList));
                        } else if (intValue != 13) {
                            j7 = j5;
                            i6 = i16;
                            arrayList = arrayList2;
                            aVar = null;
                        } else {
                            aVar = new x(format2.f5229i, b0Var3);
                            j7 = j5;
                            i6 = i16;
                            arrayList = arrayList2;
                        }
                    } else {
                        i6 = i16;
                        arrayList = arrayList2;
                        j7 = j5;
                        aVar = new xc.d(0L);
                    }
                    aVar.getClass();
                    try {
                        z6 = aVar.f(gVar);
                        i5 = 0;
                        gVar.f16775x = 0;
                    } catch (EOFException unused3) {
                        i5 = 0;
                        gVar.f16775x = 0;
                        z6 = false;
                    } catch (Throwable th2) {
                        gVar.f16775x = 0;
                        throw th2;
                    }
                    if (z6) {
                        bVar = new b(aVar, format2, b0Var3);
                        break;
                    }
                    if (jVar2 == null && (intValue == z8 || intValue == z10 || intValue == A || intValue == 11)) {
                        jVar2 = aVar;
                    }
                    i16 = i6 + 1;
                    j5 = j7;
                    j11 = j10;
                    arrayList2 = arrayList;
                }
                bVar2 = bVar;
            }
            this.Z = bVar2;
            qc.j jVar3 = bVar2.a;
            if ((((jVar3 instanceof ad.d) || (jVar3 instanceof ad.a) || (jVar3 instanceof ad.c) || (jVar3 instanceof xc.d)) ? 1 : i5) != 0) {
                t tVar = this.a0;
                long b10 = j7 != j ? b0Var.b(j7) : j10;
                if (tVar.f17933s0 != b10) {
                    tVar.f17933s0 = b10;
                    s[] sVarArr = tVar.S;
                    int length = sVarArr.length;
                    for (int i19 = i5; i19 < length; i19++) {
                        s sVar = sVarArr[i19];
                        if (sVar.F != b10) {
                            sVar.F = b10;
                            sVar.f15166z = true;
                        }
                    }
                }
            } else {
                t tVar2 = this.a0;
                if (tVar2.f17933s0 != 0) {
                    tVar2.f17933s0 = 0L;
                    s[] sVarArr2 = tVar2.S;
                    int length2 = sVarArr2.length;
                    for (int i20 = i5; i20 < length2; i20++) {
                        s sVar2 = sVarArr2[i20];
                        if (sVar2.F != 0) {
                            sVar2.F = 0L;
                            sVar2.f15166z = true;
                        }
                    }
                }
            }
            this.a0.U.clear();
            this.Z.a.a(this.a0);
        } else {
            i5 = 0;
        }
        t tVar3 = this.a0;
        nc.i iVar = tVar3.f17934t0;
        nc.i iVar2 = this.U;
        if (!d0.a(iVar, iVar2)) {
            tVar3.f17934t0 = iVar2;
            int i21 = i5;
            while (true) {
                s[] sVarArr3 = tVar3.S;
                if (i21 >= sVarArr3.length) {
                    break;
                }
                if (tVar3.f17926l0[i21]) {
                    s sVar3 = sVarArr3[i21];
                    sVar3.I = iVar2;
                    sVar3.f15166z = true;
                }
                i21++;
            }
        }
        return gVar;
    }

    @Override // ie.h0
    public final void n() {
        b bVar;
        this.a0.getClass();
        if (this.Z == null && (bVar = this.O) != null) {
            qc.j jVar = bVar.a;
            if ((jVar instanceof ad.e0) || (jVar instanceof yc.i)) {
                this.Z = bVar;
                this.f17890c0 = false;
            }
        }
        ie.p pVar = this.N;
        DataSource dataSource = this.M;
        if (this.f17890c0) {
            dataSource.getClass();
            pVar.getClass();
            c(dataSource, pVar, this.Y, false);
            this.f17889b0 = 0;
            this.f17890c0 = false;
        }
        if (this.f17891d0) {
            return;
        }
        if (!this.Q) {
            c(this.F, this.f16361e, this.X, true);
        }
        this.f17892e0 = !this.f17891d0;
    }

    @Override // ie.h0
    public final void z() {
        this.f17891d0 = true;
    }
}
