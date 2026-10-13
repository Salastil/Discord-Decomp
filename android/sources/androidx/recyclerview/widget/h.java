package androidx.recyclerview.widget;

import android.os.SystemClock;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import okio.BufferedSource;

/* loaded from: classes.dex */
public final class h implements qd.i, qc.k, qc.l, wd.e {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2400d;

    /* renamed from: e, reason: collision with root package name */
    public long f2401e;

    /* renamed from: i, reason: collision with root package name */
    public Object f2402i;

    public /* synthetic */ h(long j, Object obj, int i5) {
        this.f2400d = i5;
        this.f2401e = j;
        this.f2402i = obj;
    }

    @Override // wd.e
    public int A() {
        return 1;
    }

    @Override // qd.i
    public long B(long j, long j5) {
        return ((qc.f) this.f2402i).a;
    }

    @Override // qc.k
    public void C(byte[] bArr, int i5, int i6) {
        ((qc.k) this.f2402i).C(bArr, i5, i6);
    }

    @Override // qc.k
    public int D() {
        return ((qc.k) this.f2402i).D();
    }

    public void E(int i5) {
        if (i5 < 64) {
            this.f2401e &= ~(1 << i5);
            return;
        }
        h hVar = (h) this.f2402i;
        if (hVar != null) {
            hVar.E(i5 - 64);
        }
    }

    public int F(int i5) {
        h hVar = (h) this.f2402i;
        if (hVar == null) {
            return i5 >= 64 ? Long.bitCount(this.f2401e) : Long.bitCount(this.f2401e & ((1 << i5) - 1));
        }
        if (i5 < 64) {
            return Long.bitCount(this.f2401e & ((1 << i5) - 1));
        }
        return Long.bitCount(this.f2401e) + hVar.F(i5 - 64);
    }

    public void G() {
        if (((h) this.f2402i) == null) {
            this.f2402i = new h(0);
        }
    }

    public boolean H(int i5) {
        if (i5 < 64) {
            return (this.f2401e & (1 << i5)) != 0;
        }
        G();
        return ((h) this.f2402i).H(i5 - 64);
    }

    public long I() {
        m9.a aVar = (m9.a) this.f2402i;
        long j = this.f2401e;
        if (j != -1) {
            return j;
        }
        this.f2401e = 0L;
        int a = aVar.a();
        for (int i5 = 0; i5 < a; i5++) {
            this.f2401e += aVar.b(i5);
        }
        return this.f2401e;
    }

    public void J(int i5, boolean z5) {
        if (i5 >= 64) {
            G();
            ((h) this.f2402i).J(i5 - 64, z5);
            return;
        }
        long j = this.f2401e;
        boolean z6 = (Long.MIN_VALUE & j) != 0;
        long j5 = (1 << i5) - 1;
        this.f2401e = ((j & (~j5)) << 1) | (j & j5);
        if (z5) {
            M(i5);
        } else {
            E(i5);
        }
        if (z6 || ((h) this.f2402i) != null) {
            G();
            ((h) this.f2402i).J(0, z6);
        }
    }

    public boolean K(int i5) {
        if (i5 >= 64) {
            G();
            return ((h) this.f2402i).K(i5 - 64);
        }
        long j = 1 << i5;
        long j5 = this.f2401e;
        boolean z5 = (j5 & j) != 0;
        long j7 = j5 & (~j);
        this.f2401e = j7;
        long j10 = j - 1;
        this.f2401e = (j7 & j10) | Long.rotateRight((~j10) & j7, 1);
        h hVar = (h) this.f2402i;
        if (hVar != null) {
            if (hVar.H(0)) {
                M(63);
            }
            ((h) this.f2402i).K(0);
        }
        return z5;
    }

    public void L() {
        this.f2401e = 0L;
        h hVar = (h) this.f2402i;
        if (hVar != null) {
            hVar.L();
        }
    }

    public void M(int i5) {
        if (i5 < 64) {
            this.f2401e |= 1 << i5;
        } else {
            G();
            ((h) this.f2402i).M(i5 - 64);
        }
    }

    public void N(Exception exc) {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        if (((Exception) this.f2402i) == null) {
            this.f2402i = exc;
            this.f2401e = 100 + elapsedRealtime;
        }
        if (elapsedRealtime >= this.f2401e) {
            Exception exc2 = (Exception) this.f2402i;
            if (exc2 != exc) {
                exc2.addSuppressed(exc);
            }
            Exception exc3 = (Exception) this.f2402i;
            this.f2402i = null;
            throw exc3;
        }
    }

    @Override // qc.k
    public boolean a(byte[] bArr, int i5, int i6, boolean z5) {
        return ((qc.k) this.f2402i).a(bArr, 0, i6, z5);
    }

    @Override // qd.i
    public long b(long j) {
        return ((qc.f) this.f2402i).f16768e[(int) j] - this.f2401e;
    }

    @Override // qc.l
    public void c(qc.s sVar) {
        ((qc.l) this.f2402i).c(new vc.c(this, sVar));
    }

    @Override // wd.e
    public int d(long j) {
        return this.f2401e > j ? 0 : -1;
    }

    @Override // qd.i
    public long e(long j, long j5) {
        return ((qc.f) this.f2402i).f16767d[(int) j];
    }

    @Override // qd.i
    public long f(long j, long j5) {
        return 0L;
    }

    @Override // qd.i
    public long g(long j, long j5) {
        return -9223372036854775807L;
    }

    @Override // qc.k
    public long getLength() {
        return ((qc.k) this.f2402i).getLength() - this.f2401e;
    }

    @Override // qc.k
    public long getPosition() {
        return ((qc.k) this.f2402i).getPosition() - this.f2401e;
    }

    @Override // qd.i
    public rd.j h(long j) {
        return new rd.j(((qc.f) this.f2402i).f16766c[(int) j], r1.f16765b[r7], null);
    }

    @Override // wd.e
    public long i(int i5) {
        ke.b.g(i5 == 0);
        return this.f2401e;
    }

    @Override // qc.k
    public boolean j(byte[] bArr, int i5, int i6, boolean z5) {
        return ((qc.k) this.f2402i).j(bArr, i5, i6, z5);
    }

    @Override // qc.k
    public long k() {
        return ((qc.k) this.f2402i).k() - this.f2401e;
    }

    @Override // qc.k
    public void l(int i5) {
        ((qc.k) this.f2402i).l(i5);
    }

    @Override // qd.i
    public long m(long j, long j5) {
        qc.f fVar = (qc.f) this.f2402i;
        return ke.d0.e(fVar.f16768e, j + this.f2401e, true);
    }

    @Override // qc.k
    public int p(byte[] bArr, int i5, int i6) {
        return ((qc.k) this.f2402i).p(bArr, i5, i6);
    }

    @Override // wd.e
    public List q(long j) {
        if (j >= this.f2401e) {
            return (fi.e0) this.f2402i;
        }
        fi.c0 c0Var = fi.e0.f8656e;
        return fi.r0.f8704w;
    }

    @Override // qc.l
    public void r() {
        ((qc.l) this.f2402i).r();
    }

    @Override // ie.k
    public int read(byte[] bArr, int i5, int i6) {
        return ((qc.k) this.f2402i).read(bArr, i5, i6);
    }

    @Override // qc.k
    public void readFully(byte[] bArr, int i5, int i6) {
        ((qc.k) this.f2402i).readFully(bArr, i5, i6);
    }

    @Override // qc.k
    public void t() {
        ((qc.k) this.f2402i).t();
    }

    public String toString() {
        switch (this.f2400d) {
            case 0:
                if (((h) this.f2402i) == null) {
                    return Long.toBinaryString(this.f2401e);
                }
                return ((h) this.f2402i).toString() + "xx" + Long.toBinaryString(this.f2401e);
            default:
                return super.toString();
        }
    }

    @Override // qc.k
    public void u(int i5) {
        ((qc.k) this.f2402i).u(i5);
    }

    @Override // qd.i
    public boolean v() {
        return true;
    }

    @Override // qd.i
    public long w() {
        return 0L;
    }

    @Override // qc.l
    public qc.v y(int i5, int i6) {
        return ((qc.l) this.f2402i).y(i5, i6);
    }

    @Override // qd.i
    public long z(long j) {
        return ((qc.f) this.f2402i).a;
    }

    public /* synthetic */ h(Object obj, long j, int i5) {
        this.f2400d = i5;
        this.f2402i = obj;
        this.f2401e = j;
    }

    public h(m9.a animationInformation) {
        this.f2400d = 3;
        Intrinsics.checkNotNullParameter(animationInformation, "animationInformation");
        this.f2402i = animationInformation;
        this.f2401e = -1L;
    }

    public h(BufferedSource source) {
        this.f2400d = 7;
        Intrinsics.checkNotNullParameter(source, "source");
        this.f2402i = source;
        this.f2401e = 262144L;
    }

    public h(qc.k kVar, long j) {
        this.f2400d = 5;
        this.f2402i = kVar;
        ke.b.g(kVar.getPosition() >= j);
        this.f2401e = j;
    }

    public h(int i5) {
        this.f2400d = i5;
        switch (i5) {
            case 1:
                break;
            default:
                this.f2401e = 0L;
                break;
        }
    }
}
