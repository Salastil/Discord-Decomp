package tc;

import ke.w;
import qc.e;
import qc.k;
import qc.m;
import qc.o;
import ys.d;

/* loaded from: classes3.dex */
public final class a implements e {

    /* renamed from: d, reason: collision with root package name */
    public final o f18253d;

    /* renamed from: e, reason: collision with root package name */
    public final int f18254e;

    /* renamed from: i, reason: collision with root package name */
    public final m f18255i = new m();

    public a(o oVar, int i5) {
        this.f18253d = oVar;
        this.f18254e = i5;
    }

    public final long a(k kVar) {
        m mVar;
        o oVar;
        int p3;
        while (true) {
            long k = kVar.k();
            long length = kVar.getLength() - 6;
            mVar = this.f18255i;
            oVar = this.f18253d;
            if (k >= length) {
                break;
            }
            long k5 = kVar.k();
            byte[] bArr = new byte[2];
            int i5 = 0;
            boolean p5 = false;
            kVar.C(bArr, 0, 2);
            int i6 = ((bArr[0] & 255) << 8) | (bArr[1] & 255);
            int i10 = this.f18254e;
            if (i6 != i10) {
                kVar.t();
                kVar.l((int) (k5 - kVar.getPosition()));
            } else {
                w wVar = new w(16);
                System.arraycopy(bArr, 0, wVar.a, 0, 2);
                byte[] bArr2 = wVar.a;
                while (i5 < 14 && (p3 = kVar.p(bArr2, 2 + i5, 14 - i5)) != -1) {
                    i5 += p3;
                }
                wVar.E(i5);
                kVar.t();
                kVar.l((int) (k5 - kVar.getPosition()));
                p5 = d.p(wVar, oVar, i10, mVar);
            }
            if (p5) {
                break;
            }
            kVar.l(1);
        }
        if (kVar.k() < kVar.getLength() - 6) {
            return mVar.a;
        }
        kVar.l((int) (kVar.getLength() - kVar.k()));
        return oVar.j;
    }

    @Override // qc.e
    public final qc.d d0(k kVar, long j) {
        long position = kVar.getPosition();
        long a = a(kVar);
        long k = kVar.k();
        kVar.l(Math.max(6, this.f18253d.f16784c));
        long a10 = a(kVar);
        return (a > j || a10 <= j) ? a10 <= j ? new qc.d(-2, a10, kVar.k()) : new qc.d(-1, a, position) : new qc.d(0, -9223372036854775807L, k);
    }
}
