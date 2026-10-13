package ke;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class v {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public byte[] f13356b;

    /* renamed from: c, reason: collision with root package name */
    public int f13357c;

    /* renamed from: d, reason: collision with root package name */
    public int f13358d;

    /* renamed from: e, reason: collision with root package name */
    public int f13359e;

    public v() {
        this.a = 0;
        this.f13356b = d0.f13298f;
    }

    public void a() {
        int i5;
        int i6;
        switch (this.a) {
            case 0:
                int i10 = this.f13357c;
                b.k(i10 >= 0 && (i10 < (i5 = this.f13359e) || (i10 == i5 && this.f13358d == 0)));
                break;
            default:
                int i11 = this.f13358d;
                b.k(i11 >= 0 && (i11 < (i6 = this.f13357c) || (i11 == i6 && this.f13359e == 0)));
                break;
        }
    }

    public int b() {
        return ((this.f13359e - this.f13357c) * 8) - this.f13358d;
    }

    public void c() {
        if (this.f13358d == 0) {
            return;
        }
        this.f13358d = 0;
        this.f13357c++;
        a();
    }

    public boolean d(int i5) {
        int i6 = this.f13358d;
        int i10 = i5 / 8;
        int i11 = i6 + i10;
        int i12 = (this.f13359e + i5) - (i10 * 8);
        if (i12 > 7) {
            i11++;
            i12 -= 8;
        }
        while (true) {
            i6++;
            if (i6 > i11 || i11 >= this.f13357c) {
                break;
            }
            if (q(i6)) {
                i11++;
                i6 += 2;
            }
        }
        int i13 = this.f13357c;
        if (i11 >= i13) {
            return i11 == i13 && i12 == 0;
        }
        return true;
    }

    public boolean e() {
        int i5 = this.f13358d;
        int i6 = this.f13359e;
        int i10 = 0;
        while (this.f13358d < this.f13357c && !h()) {
            i10++;
        }
        boolean z5 = this.f13358d == this.f13357c;
        this.f13358d = i5;
        this.f13359e = i6;
        return !z5 && d((i10 * 2) + 1);
    }

    public int f() {
        b.k(this.f13358d == 0);
        return this.f13357c;
    }

    public int g() {
        return (this.f13357c * 8) + this.f13358d;
    }

    public boolean h() {
        switch (this.a) {
            case 0:
                boolean z5 = (this.f13356b[this.f13357c] & (IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT >> this.f13358d)) != 0;
                r();
                return z5;
            case 1:
                boolean z6 = (this.f13356b[this.f13358d] & (IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT >> this.f13359e)) != 0;
                r();
                return z6;
            default:
                boolean z7 = (((this.f13356b[this.f13358d] & 255) >> this.f13359e) & 1) == 1;
                s(1);
                return z7;
        }
    }

    public int i(int i5) {
        switch (this.a) {
            case 0:
                if (i5 == 0) {
                    return 0;
                }
                this.f13358d += i5;
                int i6 = 0;
                while (true) {
                    int i10 = this.f13358d;
                    if (i10 <= 8) {
                        byte[] bArr = this.f13356b;
                        int i11 = this.f13357c;
                        int i12 = ((-1) >>> (32 - i5)) & (i6 | ((bArr[i11] & 255) >> (8 - i10)));
                        if (i10 == 8) {
                            this.f13358d = 0;
                            this.f13357c = i11 + 1;
                        }
                        a();
                        return i12;
                    }
                    int i13 = i10 - 8;
                    this.f13358d = i13;
                    byte[] bArr2 = this.f13356b;
                    int i14 = this.f13357c;
                    this.f13357c = i14 + 1;
                    i6 |= (bArr2[i14] & 255) << i13;
                }
            case 1:
                this.f13359e += i5;
                int i15 = 0;
                while (true) {
                    int i16 = this.f13359e;
                    if (i16 <= 8) {
                        byte[] bArr3 = this.f13356b;
                        int i17 = this.f13358d;
                        int i18 = ((-1) >>> (32 - i5)) & (i15 | ((bArr3[i17] & 255) >> (8 - i16)));
                        if (i16 == 8) {
                            this.f13359e = 0;
                            this.f13358d = i17 + (q(i17 + 1) ? 2 : 1);
                        }
                        a();
                        return i18;
                    }
                    int i19 = i16 - 8;
                    this.f13359e = i19;
                    byte[] bArr4 = this.f13356b;
                    int i20 = this.f13358d;
                    i15 |= (bArr4[i20] & 255) << i19;
                    if (!q(i20 + 1)) {
                        r3 = 1;
                    }
                    this.f13358d = i20 + r3;
                }
            default:
                int i21 = this.f13358d;
                int min = Math.min(i5, 8 - this.f13359e);
                byte[] bArr5 = this.f13356b;
                int i22 = i21 + 1;
                int i23 = ((bArr5[i21] & 255) >> this.f13359e) & (255 >> (8 - min));
                while (min < i5) {
                    i23 |= (bArr5[i22] & 255) << min;
                    min += 8;
                    i22++;
                }
                int i24 = i23 & ((-1) >>> (32 - i5));
                s(i5);
                return i24;
        }
    }

    public void j(byte[] bArr, int i5) {
        int i6 = i5 >> 3;
        for (int i10 = 0; i10 < i6; i10++) {
            byte[] bArr2 = this.f13356b;
            int i11 = this.f13357c;
            int i12 = i11 + 1;
            this.f13357c = i12;
            byte b10 = bArr2[i11];
            int i13 = this.f13358d;
            byte b11 = (byte) (b10 << i13);
            bArr[i10] = b11;
            bArr[i10] = (byte) (((255 & bArr2[i12]) >> (8 - i13)) | b11);
        }
        int i14 = i5 & 7;
        if (i14 == 0) {
            return;
        }
        byte b12 = (byte) (bArr[i6] & (255 >> i14));
        bArr[i6] = b12;
        int i15 = this.f13358d;
        if (i15 + i14 > 8) {
            byte[] bArr3 = this.f13356b;
            int i16 = this.f13357c;
            this.f13357c = i16 + 1;
            bArr[i6] = (byte) (b12 | ((bArr3[i16] & 255) << i15));
            this.f13358d = i15 - 8;
        }
        int i17 = this.f13358d + i14;
        this.f13358d = i17;
        byte[] bArr4 = this.f13356b;
        int i18 = this.f13357c;
        bArr[i6] = (byte) (((byte) (((255 & bArr4[i18]) >> (8 - i17)) << (8 - i14))) | bArr[i6]);
        if (i17 == 8) {
            this.f13358d = 0;
            this.f13357c = i18 + 1;
        }
        a();
    }

    public void k(byte[] bArr, int i5) {
        b.k(this.f13358d == 0);
        System.arraycopy(this.f13356b, this.f13357c, bArr, 0, i5);
        this.f13357c += i5;
        a();
    }

    public int l() {
        int i5 = 0;
        while (!h()) {
            i5++;
        }
        return ((1 << i5) - 1) + (i5 > 0 ? i(i5) : 0);
    }

    public int m() {
        int l6 = l();
        return ((l6 + 1) / 2) * (l6 % 2 == 0 ? -1 : 1);
    }

    public void n(w wVar) {
        o(wVar.a, wVar.f13364c);
        p(wVar.f13363b * 8);
    }

    public void o(byte[] bArr, int i5) {
        this.f13356b = bArr;
        this.f13357c = 0;
        this.f13358d = 0;
        this.f13359e = i5;
    }

    public void p(int i5) {
        int i6 = i5 / 8;
        this.f13357c = i6;
        this.f13358d = i5 - (i6 * 8);
        a();
    }

    public boolean q(int i5) {
        if (2 > i5 || i5 >= this.f13357c) {
            return false;
        }
        byte[] bArr = this.f13356b;
        return bArr[i5] == 3 && bArr[i5 + (-2)] == 0 && bArr[i5 - 1] == 0;
    }

    public void r() {
        switch (this.a) {
            case 0:
                int i5 = this.f13358d + 1;
                this.f13358d = i5;
                if (i5 == 8) {
                    this.f13358d = 0;
                    this.f13357c++;
                }
                a();
                break;
            default:
                int i6 = this.f13359e + 1;
                this.f13359e = i6;
                if (i6 == 8) {
                    this.f13359e = 0;
                    int i10 = this.f13358d;
                    this.f13358d = i10 + (q(i10 + 1) ? 2 : 1);
                }
                a();
                break;
        }
    }

    public void s(int i5) {
        int i6;
        switch (this.a) {
            case 0:
                int i10 = i5 / 8;
                int i11 = this.f13357c + i10;
                this.f13357c = i11;
                int i12 = (i5 - (i10 * 8)) + this.f13358d;
                this.f13358d = i12;
                if (i12 > 7) {
                    this.f13357c = i11 + 1;
                    this.f13358d = i12 - 8;
                }
                a();
                break;
            case 1:
                int i13 = this.f13358d;
                int i14 = i5 / 8;
                int i15 = i13 + i14;
                this.f13358d = i15;
                int i16 = (i5 - (i14 * 8)) + this.f13359e;
                this.f13359e = i16;
                if (i16 > 7) {
                    this.f13358d = i15 + 1;
                    this.f13359e = i16 - 8;
                }
                while (true) {
                    i13++;
                    if (i13 > this.f13358d) {
                        a();
                        break;
                    } else if (q(i13)) {
                        this.f13358d++;
                        i13 += 2;
                    }
                }
            default:
                int i17 = i5 / 8;
                int i18 = this.f13358d + i17;
                this.f13358d = i18;
                int i19 = (i5 - (i17 * 8)) + this.f13359e;
                this.f13359e = i19;
                boolean z5 = true;
                if (i19 > 7) {
                    this.f13358d = i18 + 1;
                    this.f13359e = i19 - 8;
                }
                int i20 = this.f13358d;
                if (i20 < 0 || (i20 >= (i6 = this.f13357c) && (i20 != i6 || this.f13359e != 0))) {
                    z5 = false;
                }
                b.k(z5);
                break;
        }
    }

    public void t(int i5) {
        b.k(this.f13358d == 0);
        this.f13357c += i5;
        a();
    }

    public v(byte[] bArr, int i5, int i6) {
        this.a = 1;
        this.f13356b = bArr;
        this.f13358d = i5;
        this.f13357c = i6;
        this.f13359e = 0;
        a();
    }

    public v(byte[] bArr) {
        this.a = 2;
        this.f13356b = bArr;
        this.f13357c = bArr.length;
    }

    public v(byte[] bArr, int i5) {
        this.a = 0;
        this.f13356b = bArr;
        this.f13359e = i5;
    }

    public v(int i5, int i6) {
        this.a = 3;
        this.f13357c = i5;
        this.f13358d = i6;
        this.f13356b = new byte[(i6 * 2) - 1];
        this.f13359e = 0;
    }
}
