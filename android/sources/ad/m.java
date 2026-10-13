package ad;

/* loaded from: classes3.dex */
public final class m {
    public final qc.v a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f398b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f399c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f400d;

    /* renamed from: e, reason: collision with root package name */
    public int f401e;

    /* renamed from: f, reason: collision with root package name */
    public int f402f;

    /* renamed from: g, reason: collision with root package name */
    public long f403g;

    /* renamed from: h, reason: collision with root package name */
    public long f404h;

    public m(qc.v vVar) {
        this.a = vVar;
    }

    public final void a(byte[] bArr, int i5, int i6) {
        if (this.f399c) {
            int i10 = this.f402f;
            int i11 = (i5 + 1) - i10;
            if (i11 >= i6) {
                this.f402f = (i6 - i5) + i10;
            } else {
                this.f400d = ((bArr[i11] & 192) >> 6) == 0;
                this.f399c = false;
            }
        }
    }
}
