package ad;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes3.dex */
public final class d implements qc.j {

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f309c;

    /* renamed from: d, reason: collision with root package name */
    public final ke.v f310d;

    /* renamed from: e, reason: collision with root package name */
    public qc.l f311e;

    /* renamed from: f, reason: collision with root package name */
    public long f312f;

    /* renamed from: h, reason: collision with root package name */
    public boolean f314h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f315i;
    public final e a = new e(true, null);

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f308b = new ke.w(RecyclerView.ItemAnimator.FLAG_MOVED);

    /* renamed from: g, reason: collision with root package name */
    public long f313g = -1;

    public d(int i5) {
        ke.w wVar = new ke.w(10);
        this.f309c = wVar;
        byte[] bArr = wVar.a;
        this.f310d = new ke.v(bArr, bArr.length);
    }

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.f311e = lVar;
        this.a.d(lVar, new g0(0, 1));
        lVar.r();
    }

    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        ke.b.l(this.f311e);
        long j = ((qc.g) kVar).f16772i;
        ke.w wVar = this.f308b;
        int read = ((qc.g) kVar).read(wVar.a, 0, RecyclerView.ItemAnimator.FLAG_MOVED);
        boolean z5 = read == -1;
        if (!this.f315i) {
            this.f311e.c(new qc.n(-9223372036854775807L));
            this.f315i = true;
        }
        if (z5) {
            return -1;
        }
        wVar.F(0);
        wVar.E(read);
        boolean z6 = this.f314h;
        e eVar = this.a;
        if (!z6) {
            eVar.f(4, this.f312f);
            this.f314h = true;
        }
        eVar.c(wVar);
        return 0;
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        int i5 = 0;
        while (true) {
            ke.w wVar = this.f309c;
            kVar.C(wVar.a, 0, 10);
            wVar.F(0);
            if (wVar.w() != 4801587) {
                break;
            }
            wVar.G(3);
            int t5 = wVar.t();
            i5 += t5 + 10;
            kVar.l(t5);
        }
        kVar.t();
        kVar.l(i5);
        if (this.f313g == -1) {
            this.f313g = i5;
        }
        int i6 = i5;
        int i10 = 0;
        int i11 = 0;
        do {
            ke.w wVar2 = this.f309c;
            qc.g gVar = (qc.g) kVar;
            gVar.j(wVar2.a, 0, 2, false);
            wVar2.F(0);
            if ((wVar2.z() & 65526) == 65520) {
                i10++;
                if (i10 >= 4 && i11 > 188) {
                    return true;
                }
                gVar.j(wVar2.a, 0, 4, false);
                ke.v vVar = this.f310d;
                vVar.p(14);
                int i12 = vVar.i(13);
                if (i12 <= 6) {
                    i6++;
                    gVar.f16775x = 0;
                    gVar.b(i6, false);
                } else {
                    gVar.b(i12 - 6, false);
                    i11 += i12;
                }
            } else {
                i6++;
                gVar.f16775x = 0;
                gVar.b(i6, false);
            }
            i10 = 0;
            i11 = 0;
        } while (i6 - i5 < 8192);
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f314h = false;
        this.a.a();
        this.f312f = j5;
    }

    @Override // qc.j
    public final void release() {
    }
}
