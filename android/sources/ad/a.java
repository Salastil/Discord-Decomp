package ad;

/* loaded from: classes3.dex */
public final class a implements qc.j {
    public final b a = new b(null, 0);

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f281b = new ke.w(2786);

    /* renamed from: c, reason: collision with root package name */
    public boolean f282c;

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.a.d(lVar, new g0(0, 1));
        lVar.r();
        lVar.c(new qc.n(-9223372036854775807L));
    }

    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        ke.w wVar = this.f281b;
        int read = ((qc.g) kVar).read(wVar.a, 0, 2786);
        if (read == -1) {
            return -1;
        }
        wVar.F(0);
        wVar.E(read);
        boolean z5 = this.f282c;
        b bVar = this.a;
        if (!z5) {
            bVar.f(4, 0L);
            this.f282c = true;
        }
        bVar.c(wVar);
        return 0;
    }

    @Override // qc.j
    public final boolean f(qc.k kVar) {
        qc.g gVar;
        int c6;
        ke.w wVar = new ke.w(10);
        int i5 = 0;
        while (true) {
            gVar = (qc.g) kVar;
            gVar.j(wVar.a, 0, 10, false);
            wVar.F(0);
            if (wVar.w() != 4801587) {
                break;
            }
            wVar.G(3);
            int t5 = wVar.t();
            i5 += t5 + 10;
            gVar.b(t5, false);
        }
        gVar.f16775x = 0;
        gVar.b(i5, false);
        int i6 = 0;
        int i10 = i5;
        while (true) {
            gVar.j(wVar.a, 0, 6, false);
            wVar.F(0);
            if (wVar.z() != 2935) {
                gVar.f16775x = 0;
                i10++;
                if (i10 - i5 >= 8192) {
                    break;
                }
                gVar.b(i10, false);
                i6 = 0;
            } else {
                i6++;
                if (i6 >= 4) {
                    return true;
                }
                byte[] bArr = wVar.a;
                if (bArr.length < 6) {
                    c6 = -1;
                } else if (((bArr[5] & 248) >> 3) > 10) {
                    c6 = ((((bArr[2] & 7) << 8) | (bArr[3] & 255)) + 1) * 2;
                } else {
                    byte b10 = bArr[4];
                    c6 = jc.a.c((b10 & 192) >> 6, b10 & 63);
                }
                if (c6 == -1) {
                    break;
                }
                gVar.b(c6 - 6, false);
            }
        }
        return false;
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f282c = false;
        this.a.a();
    }

    @Override // qc.j
    public final void release() {
    }
}
