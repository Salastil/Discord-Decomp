package qc;

import ke.d0;

/* loaded from: classes3.dex */
public class n implements s {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final long f16781b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f16782c;

    public /* synthetic */ n(Object obj, long j, int i5) {
        this.a = i5;
        this.f16782c = obj;
        this.f16781b = j;
    }

    @Override // qc.s
    public final boolean d() {
        switch (this.a) {
            case 0:
                return true;
            case 1:
                return false;
            default:
                return true;
        }
    }

    @Override // qc.s
    public final r h(long j) {
        switch (this.a) {
            case 0:
                o oVar = (o) this.f16782c;
                ke.b.l(oVar.k);
                e4.l lVar = oVar.k;
                long[] jArr = (long[]) lVar.f7959e;
                long[] jArr2 = (long[]) lVar.f7960i;
                int e9 = d0.e(jArr, d0.j((oVar.f16786e * j) / 1000000, 0L, oVar.j - 1), false);
                long j5 = e9 == -1 ? 0L : jArr[e9];
                long j7 = e9 != -1 ? jArr2[e9] : 0L;
                int i5 = oVar.f16786e;
                long j10 = (j5 * 1000000) / i5;
                long j11 = this.f16781b;
                t tVar = new t(j10, j7 + j11);
                if (j10 == j || e9 == jArr.length - 1) {
                    return new r(tVar, tVar);
                }
                int i6 = e9 + 1;
                return new r(tVar, new t((jArr[i6] * 1000000) / i5, j11 + jArr2[i6]));
            case 1:
                return (r) this.f16782c;
            default:
                sc.b bVar = (sc.b) this.f16782c;
                r b10 = bVar.f17836g[0].b(j);
                int i10 = 1;
                while (true) {
                    sc.e[] eVarArr = bVar.f17836g;
                    if (i10 >= eVarArr.length) {
                        return b10;
                    }
                    r b11 = eVarArr[i10].b(j);
                    if (b11.a.f16799b < b10.a.f16799b) {
                        b10 = b11;
                    }
                    i10++;
                }
        }
    }

    @Override // qc.s
    public final long i() {
        switch (this.a) {
        }
        return this.f16781b;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public n(long j) {
        this(j, 0L);
        this.a = 1;
    }

    public n(long j, long j5) {
        this.a = 1;
        this.f16781b = j;
        t tVar = j5 == 0 ? t.f16798c : new t(0L, j5);
        this.f16782c = new r(tVar, tVar);
    }
}
