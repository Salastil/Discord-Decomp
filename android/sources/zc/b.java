package zc;

import java.io.EOFException;
import java.io.IOException;
import ke.d0;
import qc.k;
import qc.s;

/* loaded from: classes3.dex */
public final class b implements f {
    public long E;
    public long F;
    public long G;
    public long H;
    public long I;

    /* renamed from: d, reason: collision with root package name */
    public final e f21150d;

    /* renamed from: e, reason: collision with root package name */
    public final long f21151e;

    /* renamed from: i, reason: collision with root package name */
    public final long f21152i;

    /* renamed from: v, reason: collision with root package name */
    public final h f21153v;

    /* renamed from: w, reason: collision with root package name */
    public int f21154w;

    /* renamed from: x, reason: collision with root package name */
    public long f21155x;

    /* renamed from: y, reason: collision with root package name */
    public long f21156y;

    public b(h hVar, long j, long j5, long j7, long j10, boolean z5) {
        ke.b.g(j >= 0 && j5 > j);
        this.f21153v = hVar;
        this.f21151e = j;
        this.f21152i = j5;
        if (j7 == j5 - j || z5) {
            this.f21155x = j10;
            this.f21154w = 4;
        } else {
            this.f21154w = 0;
        }
        this.f21150d = new e();
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x00c3 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00c4  */
    @Override // zc.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long a(k kVar) {
        long j;
        long j5;
        long j7;
        int i5 = this.f21154w;
        long j10 = this.f21152i;
        e eVar = this.f21150d;
        if (i5 == 0) {
            j = 0;
            long position = kVar.getPosition();
            this.f21156y = position;
            this.f21154w = 1;
            long j11 = j10 - 65307;
            if (j11 > position) {
                return j11;
            }
        } else if (i5 != 1) {
            if (i5 == 2) {
                if (this.F == this.G) {
                    j7 = -1;
                } else {
                    long position2 = kVar.getPosition();
                    if (eVar.b(kVar, this.G)) {
                        eVar.a(kVar, false);
                        kVar.t();
                        long j12 = this.E;
                        long j13 = eVar.f21161b;
                        long j14 = j12 - j13;
                        j5 = 2;
                        int i6 = eVar.f21163d + eVar.f21164e;
                        if (0 > j14 || j14 >= 72000) {
                            if (j14 < 0) {
                                this.G = position2;
                                this.I = j13;
                            } else {
                                this.F = kVar.getPosition() + i6;
                                this.H = eVar.f21161b;
                            }
                            long j15 = this.G;
                            long j16 = this.F;
                            if (j15 - j16 < 100000) {
                                this.G = j16;
                                j7 = j16;
                            } else {
                                long position3 = kVar.getPosition() - (i6 * (j14 <= 0 ? 2L : 1L));
                                long j17 = this.G;
                                long j18 = this.F;
                                j7 = d0.j((((j17 - j18) * j14) / (this.I - this.H)) + position3, j18, j17 - 1);
                            }
                        } else {
                            j7 = -1;
                        }
                        if (j7 == -1) {
                            return j7;
                        }
                        this.f21154w = 3;
                    } else {
                        j7 = this.F;
                        if (j7 == position2) {
                            throw new IOException("No ogg page can be found.");
                        }
                    }
                }
                j5 = 2;
                if (j7 == -1) {
                }
            } else {
                if (i5 != 3) {
                    if (i5 == 4) {
                        return -1L;
                    }
                    throw new IllegalStateException();
                }
                j5 = 2;
            }
            while (true) {
                eVar.b(kVar, -1L);
                eVar.a(kVar, false);
                if (eVar.f21161b > this.E) {
                    kVar.t();
                    this.f21154w = 4;
                    return -(this.H + j5);
                }
                kVar.u(eVar.f21163d + eVar.f21164e);
                this.F = kVar.getPosition();
                this.H = eVar.f21161b;
            }
        } else {
            j = 0;
        }
        eVar.a = 0;
        eVar.f21161b = j;
        eVar.f21162c = 0;
        eVar.f21163d = 0;
        eVar.f21164e = 0;
        if (!eVar.b(kVar, -1L)) {
            throw new EOFException();
        }
        eVar.a(kVar, false);
        kVar.u(eVar.f21163d + eVar.f21164e);
        long j19 = eVar.f21161b;
        while ((eVar.a & 4) != 4 && eVar.b(kVar, -1L) && kVar.getPosition() < j10 && eVar.a(kVar, true)) {
            try {
                kVar.u(eVar.f21163d + eVar.f21164e);
                j19 = eVar.f21161b;
            } catch (EOFException unused) {
            }
        }
        this.f21155x = j19;
        this.f21154w = 4;
        return this.f21156y;
    }

    @Override // zc.f
    public final s m() {
        if (this.f21155x != 0) {
            return new a(this);
        }
        return null;
    }

    @Override // zc.f
    public final void t(long j) {
        this.E = d0.j(j, 0L, this.f21155x - 1);
        this.f21154w = 2;
        this.F = this.f21151e;
        this.G = this.f21152i;
        this.H = 0L;
        this.I = this.f21155x;
    }
}
