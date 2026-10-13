package ad;

import android.util.SparseArray;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import io.sentry.v5;

/* loaded from: classes3.dex */
public final class a0 implements qc.j {

    /* renamed from: e, reason: collision with root package name */
    public boolean f286e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f287f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f288g;

    /* renamed from: h, reason: collision with root package name */
    public long f289h;

    /* renamed from: i, reason: collision with root package name */
    public x f290i;
    public qc.l j;
    public boolean k;
    public final ke.b0 a = new ke.b0(0);

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f284c = new ke.w(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);

    /* renamed from: b, reason: collision with root package name */
    public final SparseArray f283b = new SparseArray();

    /* renamed from: d, reason: collision with root package name */
    public final y f285d = new y(0);

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.j = lVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:106:0x022f  */
    /* JADX WARN: Type inference failed for: r3v4 */
    /* JADX WARN: Type inference failed for: r3v5, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r3v6 */
    /* JADX WARN: Type inference failed for: r3v7 */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int e(qc.k kVar, qc.m mVar) {
        long j;
        int i5;
        ?? r32;
        i kVar2;
        long j5;
        ke.b.l(this.j);
        long j7 = ((qc.g) kVar).f16772i;
        int i6 = (j7 > (-1L) ? 1 : (j7 == (-1L) ? 0 : -1));
        long j10 = -9223372036854775807L;
        y yVar = this.f285d;
        if (i6 != 0) {
            j = 0;
            if (!yVar.f517d) {
                ke.b0 b0Var = yVar.f515b;
                ke.w wVar = yVar.f516c;
                if (!yVar.f519f) {
                    qc.g gVar = (qc.g) kVar;
                    long j11 = gVar.f16772i;
                    int min = (int) Math.min(20000L, j11);
                    long j12 = j11 - min;
                    if (gVar.f16773v != j12) {
                        mVar.a = j12;
                        return 1;
                    }
                    wVar.C(min);
                    gVar.f16775x = 0;
                    gVar.j(wVar.a, 0, min, false);
                    int i10 = wVar.f13363b;
                    int i11 = wVar.f13364c - 4;
                    while (true) {
                        if (i11 < i10) {
                            break;
                        }
                        if (y.b(wVar.a, i11) == 442) {
                            wVar.F(i11 + 4);
                            long c6 = y.c(wVar);
                            if (c6 != -9223372036854775807L) {
                                j10 = c6;
                                break;
                            }
                        }
                        i11--;
                    }
                    yVar.f521h = j10;
                    yVar.f519f = true;
                    return 0;
                }
                if (yVar.f521h == -9223372036854775807L) {
                    yVar.a(kVar);
                    return 0;
                }
                if (yVar.f518e) {
                    long j13 = yVar.f520g;
                    if (j13 == -9223372036854775807L) {
                        yVar.a(kVar);
                        return 0;
                    }
                    long b10 = b0Var.b(yVar.f521h) - b0Var.b(j13);
                    yVar.f522i = b10;
                    if (b10 < 0) {
                        ke.b.N("PsDurationReader", "Invalid duration: " + yVar.f522i + ". Using TIME_UNSET instead.");
                        yVar.f522i = -9223372036854775807L;
                    }
                    yVar.a(kVar);
                    return 0;
                }
                qc.g gVar2 = (qc.g) kVar;
                int min2 = (int) Math.min(20000L, gVar2.f16772i);
                long j14 = 0;
                if (gVar2.f16773v != j14) {
                    mVar.a = j14;
                    return 1;
                }
                wVar.C(min2);
                gVar2.f16775x = 0;
                gVar2.j(wVar.a, 0, min2, false);
                int i12 = wVar.f13363b;
                int i13 = wVar.f13364c;
                while (true) {
                    if (i12 >= i13 - 3) {
                        j5 = -9223372036854775807L;
                        break;
                    }
                    if (y.b(wVar.a, i12) == 442) {
                        wVar.F(i12 + 4);
                        long c8 = y.c(wVar);
                        if (c8 != -9223372036854775807L) {
                            j5 = c8;
                            break;
                        }
                    }
                    i12++;
                }
                yVar.f520g = j5;
                yVar.f518e = true;
                return 0;
            }
        } else {
            j = 0;
        }
        if (this.k) {
            i5 = i6;
            r32 = 0;
        } else {
            this.k = true;
            long j15 = yVar.f522i;
            if (j15 != -9223372036854775807L) {
                i5 = i6;
                r32 = 0;
                x xVar = new x(new ha.k(16), new e4.c(yVar.f515b), j15, j15 + 1, 0L, j7, 188L, 1000);
                this.f290i = xVar;
                this.j.c((qc.a) xVar.f7692c);
            } else {
                i5 = i6;
                r32 = 0;
                this.j.c(new qc.n(j15));
            }
        }
        x xVar2 = this.f290i;
        if (xVar2 != null && ((qc.b) xVar2.f7694e) != null) {
            return xVar2.v(kVar, mVar);
        }
        qc.g gVar3 = (qc.g) kVar;
        gVar3.f16775x = r32;
        long k = i5 != 0 ? j7 - gVar3.k() : -1L;
        if (k != -1 && k < 4) {
            return -1;
        }
        ke.w wVar2 = this.f284c;
        if (!gVar3.j(wVar2.a, r32, 4, true)) {
            return -1;
        }
        wVar2.F(r32);
        int g6 = wVar2.g();
        if (g6 == 441) {
            return -1;
        }
        if (g6 == 442) {
            gVar3.j(wVar2.a, r32, 10, r32);
            wVar2.F(9);
            gVar3.u((wVar2.u() & 7) + 14);
            return r32;
        }
        if (g6 == 443) {
            gVar3.j(wVar2.a, r32, 2, r32);
            wVar2.F(r32);
            gVar3.u(wVar2.z() + 6);
            return r32;
        }
        if (((g6 & (-256)) >> 8) != 1) {
            gVar3.u(1);
            return r32;
        }
        int i14 = g6 & 255;
        SparseArray sparseArray = this.f283b;
        z zVar = (z) sparseArray.get(i14);
        if (!this.f286e) {
            if (zVar == null) {
                i iVar = null;
                if (i14 == 189) {
                    kVar2 = new b(null, 0);
                    this.f287f = true;
                    this.f289h = gVar3.f16773v;
                } else if ((g6 & 224) == 192) {
                    kVar2 = new u(null);
                    this.f287f = true;
                    this.f289h = gVar3.f16773v;
                } else {
                    if ((g6 & 240) == 224) {
                        kVar2 = new k(null);
                        this.f288g = true;
                        this.f289h = gVar3.f16773v;
                    }
                    if (iVar != null) {
                        iVar.d(this.j, new g0(i14, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER));
                        zVar = new z(iVar, this.a);
                        sparseArray.put(i14, zVar);
                    }
                }
                iVar = kVar2;
                if (iVar != null) {
                }
            }
            if (gVar3.f16773v > ((this.f287f && this.f288g) ? this.f289h + 8192 : v5.MAX_EVENT_SIZE_BYTES)) {
                this.f286e = true;
                this.j.r();
            }
        }
        gVar3.j(wVar2.a, r32, 2, r32);
        wVar2.F(r32);
        int z5 = wVar2.z() + 6;
        if (zVar == null) {
            gVar3.u(z5);
            return r32;
        }
        wVar2.C(z5);
        gVar3.a(wVar2.a, r32, z5, r32);
        wVar2.F(6);
        i iVar2 = zVar.a;
        ke.v vVar = zVar.f524c;
        wVar2.e(vVar.f13356b, r32, 3);
        vVar.p(r32);
        vVar.s(8);
        zVar.f525d = vVar.h();
        zVar.f526e = vVar.h();
        vVar.s(6);
        wVar2.e(vVar.f13356b, r32, vVar.i(8));
        vVar.p(r32);
        ke.b0 b0Var2 = zVar.f523b;
        zVar.f528g = 0L;
        if (zVar.f525d) {
            vVar.s(4);
            vVar.s(1);
            vVar.s(1);
            long i15 = (vVar.i(3) << 30) | (vVar.i(15) << 15) | vVar.i(15);
            vVar.s(1);
            if (!zVar.f527f && zVar.f526e) {
                vVar.s(4);
                vVar.s(1);
                vVar.s(1);
                vVar.s(1);
                b0Var2.b(vVar.i(15) | (vVar.i(3) << 30) | (vVar.i(15) << 15));
                zVar.f527f = true;
            }
            zVar.f528g = b0Var2.b(i15);
        }
        iVar2.f(4, zVar.f528g);
        iVar2.c(wVar2);
        iVar2.e();
        wVar2.E(wVar2.a.length);
        return r32;
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        byte[] bArr = new byte[14];
        qc.g gVar = (qc.g) kVar;
        gVar.j(bArr, 0, 14, false);
        if (442 == (((bArr[0] & 255) << 24) | ((bArr[1] & 255) << 16) | ((bArr[2] & 255) << 8) | (bArr[3] & 255)) && (bArr[4] & 196) == 68 && (bArr[6] & 4) == 4 && (bArr[8] & 4) == 4 && (bArr[9] & 1) == 1 && (bArr[12] & 3) == 3) {
            gVar.b(bArr[13] & 7, false);
            gVar.j(bArr, 0, 3, false);
            if (1 == (((bArr[0] & 255) << 16) | ((bArr[1] & 255) << 8) | (bArr[2] & 255))) {
                return true;
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        long j7;
        SparseArray sparseArray = this.f283b;
        ke.b0 b0Var = this.a;
        synchronized (b0Var) {
            j7 = b0Var.f13284b;
        }
        boolean z5 = j7 == -9223372036854775807L;
        if (!z5) {
            long c6 = b0Var.c();
            z5 = (c6 == -9223372036854775807L || c6 == 0 || c6 == j5) ? false : true;
        }
        if (z5) {
            b0Var.e(j5);
        }
        x xVar = this.f290i;
        if (xVar != null) {
            xVar.C(j5);
        }
        for (int i5 = 0; i5 < sparseArray.size(); i5++) {
            z zVar = (z) sparseArray.valueAt(i5);
            zVar.f527f = false;
            zVar.a.a();
        }
    }

    @Override // qc.j
    public final void release() {
    }
}
