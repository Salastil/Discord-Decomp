package ad;

/* loaded from: classes3.dex */
public final class y {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.b0 f515b;

    /* renamed from: c, reason: collision with root package name */
    public final ke.w f516c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f517d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f518e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f519f;

    /* renamed from: g, reason: collision with root package name */
    public long f520g;

    /* renamed from: h, reason: collision with root package name */
    public long f521h;

    /* renamed from: i, reason: collision with root package name */
    public long f522i;

    public y(int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                this.f515b = new ke.b0(0L);
                this.f520g = -9223372036854775807L;
                this.f521h = -9223372036854775807L;
                this.f522i = -9223372036854775807L;
                this.f516c = new ke.w();
                break;
            default:
                this.f515b = new ke.b0(0L);
                this.f520g = -9223372036854775807L;
                this.f521h = -9223372036854775807L;
                this.f522i = -9223372036854775807L;
                this.f516c = new ke.w();
                break;
        }
    }

    public static int b(byte[] bArr, int i5) {
        return (bArr[i5 + 3] & 255) | ((bArr[i5] & 255) << 24) | ((bArr[i5 + 1] & 255) << 16) | ((bArr[i5 + 2] & 255) << 8);
    }

    public static long c(ke.w wVar) {
        int i5 = wVar.f13363b;
        if (wVar.a() < 9) {
            return -9223372036854775807L;
        }
        byte[] bArr = new byte[9];
        wVar.e(bArr, 0, 9);
        wVar.F(i5);
        byte b10 = bArr[0];
        if ((b10 & 196) == 68) {
            byte b11 = bArr[2];
            if ((b11 & 4) == 4) {
                byte b12 = bArr[4];
                if ((b12 & 4) == 4 && (bArr[5] & 1) == 1 && (bArr[8] & 3) == 3) {
                    long j = b10;
                    long j5 = b11;
                    return ((j5 & 3) << 13) | ((j & 3) << 28) | (((56 & j) >> 3) << 30) | ((bArr[1] & 255) << 20) | (((j5 & 248) >> 3) << 15) | ((bArr[3] & 255) << 5) | ((b12 & 248) >> 3);
                }
            }
        }
        return -9223372036854775807L;
    }

    public final void a(qc.k kVar) {
        switch (this.a) {
            case 0:
                byte[] bArr = ke.d0.f13298f;
                ke.w wVar = this.f516c;
                wVar.getClass();
                wVar.D(bArr, bArr.length);
                this.f517d = true;
                kVar.t();
                break;
            default:
                byte[] bArr2 = ke.d0.f13298f;
                ke.w wVar2 = this.f516c;
                wVar2.getClass();
                wVar2.D(bArr2, bArr2.length);
                this.f517d = true;
                kVar.t();
                break;
        }
    }
}
