package nd;

/* loaded from: classes3.dex */
public final class k0 implements zc.f {

    /* renamed from: d, reason: collision with root package name */
    public long f15120d;

    /* renamed from: e, reason: collision with root package name */
    public long f15121e;

    /* renamed from: i, reason: collision with root package name */
    public Object f15122i;

    /* renamed from: v, reason: collision with root package name */
    public Object f15123v;

    public k0(long j, int i5) {
        ke.b.k(((ie.a) this.f15122i) == null);
        this.f15120d = j;
        this.f15121e = j + i5;
    }

    @Override // zc.f
    public long a(qc.k kVar) {
        long j = this.f15121e;
        if (j < 0) {
            return -1L;
        }
        long j5 = -(j + 2);
        this.f15121e = -1L;
        return j5;
    }

    @Override // zc.f
    public qc.s m() {
        ke.b.k(this.f15120d != -1);
        return new qc.n((qc.o) this.f15122i, this.f15120d, 0);
    }

    @Override // zc.f
    public void t(long j) {
        long[] jArr = (long[]) ((e4.l) this.f15123v).f7959e;
        this.f15121e = jArr[ke.d0.e(jArr, j, true)];
    }

    public k0(String str, byte[] bArr, long j, long j5) {
        this.f15122i = str;
        this.f15123v = bArr;
        this.f15120d = j;
        this.f15121e = j5;
    }
}
