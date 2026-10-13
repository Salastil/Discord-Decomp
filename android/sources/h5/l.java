package h5;

import com.google.zxing.Result;

/* loaded from: classes.dex */
public final class l {
    public final byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public final q f9534b;

    /* renamed from: c, reason: collision with root package name */
    public final q f9535c;

    /* renamed from: d, reason: collision with root package name */
    public final q f9536d;

    /* renamed from: e, reason: collision with root package name */
    public final s f9537e;

    /* renamed from: f, reason: collision with root package name */
    public final int f9538f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9539g;

    public l(byte[] bArr, q qVar, q qVar2, q qVar3, s sVar, int i5, boolean z5) {
        this.a = bArr;
        this.f9534b = qVar;
        this.f9535c = qVar2;
        this.f9536d = qVar3;
        this.f9537e = sVar;
        this.f9538f = i5;
        this.f9539g = z5;
    }

    public final Result a(jj.f fVar) {
        int i5;
        q qVar = this.f9534b;
        int i6 = qVar.a;
        int i10 = qVar.f9557b;
        int i11 = this.f9538f;
        byte[] bArr = this.a;
        if (i11 != 0 && i11 != 360) {
            if (i11 % 90 != 0 || i11 < 0 || i11 > 270) {
                throw new IllegalArgumentException("Invalid rotation (valid: 0, 90, 180, 270)");
            }
            byte[] bArr2 = new byte[bArr.length];
            int i12 = i6 * i10;
            boolean z5 = i11 % 180 != 0;
            boolean z6 = i11 % 270 != 0;
            boolean z7 = i11 >= 180;
            for (int i13 = 0; i13 < i10; i13++) {
                for (int i14 = 0; i14 < i6; i14++) {
                    int i15 = (i13 * i6) + i14;
                    int i16 = ((i13 >> 1) * i6) + i12 + (i14 & (-2));
                    int i17 = i16 + 1;
                    int i18 = z5 ? i10 : i6;
                    int i19 = z5 ? i6 : i10;
                    int i20 = z5 ? i13 : i14;
                    int i21 = z5 ? i14 : i13;
                    if (z6) {
                        i20 = (i18 - i20) - 1;
                    }
                    if (z7) {
                        i21 = (i19 - i21) - 1;
                    }
                    int i22 = (i21 * i18) + i20;
                    int i23 = ((i21 >> 1) * i18) + i12 + (i20 & (-2));
                    bArr2[i22] = (byte) (bArr[i15] & 255);
                    bArr2[i23] = (byte) (bArr[i16] & 255);
                    bArr2[i23 + 1] = (byte) (bArr[i17] & 255);
                }
            }
            bArr = bArr2;
        }
        if (i11 == 90 || i11 == 270) {
            i5 = i6;
            i6 = i10;
        } else {
            i5 = i10;
        }
        s t5 = e4.f.t(i6, i5, this.f9537e, this.f9535c, this.f9536d);
        int i24 = t5.f9559c;
        int i25 = t5.a;
        int i26 = i24 - i25;
        int i27 = t5.f9560d;
        int i28 = t5.f9558b;
        int i29 = i27 - i28;
        if (i26 < 1 || i29 < 1) {
            return null;
        }
        jj.h hVar = new jj.h(bArr, i6, i5, i25, i28, i26, i29, this.f9539g);
        try {
            e4.e eVar = new e4.e(new nj.d(hVar));
            if (fVar.f12794b == null) {
                fVar.c(null);
            }
            return fVar.b(eVar);
        } catch (jj.g unused) {
            e4.e eVar2 = new e4.e(new nj.d(new jj.e(hVar)));
            if (fVar.f12794b == null) {
                fVar.c(null);
            }
            return fVar.b(eVar2);
        } finally {
            fVar.reset();
        }
    }
}
