package ad;

/* loaded from: classes3.dex */
public final class c implements qc.j {
    public final b a = new b(null, 1);

    /* renamed from: b, reason: collision with root package name */
    public final ke.w f301b = new ke.w(16384);

    /* renamed from: c, reason: collision with root package name */
    public boolean f302c;

    @Override // qc.j
    public final void a(qc.l lVar) {
        this.a.d(lVar, new g0(0, 1));
        lVar.r();
        lVar.c(new qc.n(-9223372036854775807L));
    }

    @Override // qc.j
    public final int e(qc.k kVar, qc.m mVar) {
        ke.w wVar = this.f301b;
        int read = ((qc.g) kVar).read(wVar.a, 0, 16384);
        if (read == -1) {
            return -1;
        }
        wVar.F(0);
        wVar.E(read);
        boolean z5 = this.f302c;
        b bVar = this.a;
        if (!z5) {
            bVar.f(4, 0L);
            this.f302c = true;
        }
        bVar.c(wVar);
        return 0;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0089, code lost:
    
        return false;
     */
    @Override // qc.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean f(qc.k kVar) {
        qc.g gVar;
        int i5;
        ke.w wVar = new ke.w(10);
        int i6 = 0;
        while (true) {
            gVar = (qc.g) kVar;
            gVar.j(wVar.a, 0, 10, false);
            wVar.F(0);
            if (wVar.w() != 4801587) {
                break;
            }
            wVar.G(3);
            int t5 = wVar.t();
            i6 += t5 + 10;
            gVar.b(t5, false);
        }
        gVar.f16775x = 0;
        gVar.b(i6, false);
        int i10 = 0;
        int i11 = i6;
        while (true) {
            int i12 = 7;
            gVar.j(wVar.a, 0, 7, false);
            wVar.F(0);
            int z5 = wVar.z();
            if (z5 == 44096 || z5 == 44097) {
                i10++;
                if (i10 >= 4) {
                    return true;
                }
                byte[] bArr = wVar.a;
                if (bArr.length < 7) {
                    i5 = -1;
                } else {
                    int i13 = ((bArr[2] & 255) << 8) | (bArr[3] & 255);
                    if (i13 == 65535) {
                        i13 = ((bArr[4] & 255) << 16) | ((bArr[5] & 255) << 8) | (bArr[6] & 255);
                    } else {
                        i12 = 4;
                    }
                    if (z5 == 44097) {
                        i12 += 2;
                    }
                    i5 = i13 + i12;
                }
                if (i5 == -1) {
                    break;
                }
                gVar.b(i5 - 7, false);
            } else {
                gVar.f16775x = 0;
                i11++;
                if (i11 - i6 >= 8192) {
                    break;
                }
                gVar.b(i11, false);
                i10 = 0;
            }
        }
    }

    @Override // qc.j
    public final void g(long j, long j5) {
        this.f302c = false;
        this.a.a();
    }

    @Override // qc.j
    public final void release() {
    }
}
