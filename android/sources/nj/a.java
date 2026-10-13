package nj;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class a implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public int[] f15508d;

    /* renamed from: e, reason: collision with root package name */
    public int f15509e;

    public a(int i5) {
        this.f15509e = i5;
        this.f15508d = new int[(i5 + 31) / 32];
    }

    public final boolean a(int i5) {
        return ((1 << (i5 & 31)) & this.f15508d[i5 / 32]) != 0;
    }

    public final int b(int i5) {
        int i6 = this.f15509e;
        if (i5 >= i6) {
            return i6;
        }
        int i10 = i5 / 32;
        int i11 = (~((1 << (i5 & 31)) - 1)) & this.f15508d[i10];
        while (i11 == 0) {
            i10++;
            int[] iArr = this.f15508d;
            if (i10 == iArr.length) {
                return i6;
            }
            i11 = iArr[i10];
        }
        int numberOfTrailingZeros = Integer.numberOfTrailingZeros(i11) + (i10 << 5);
        return numberOfTrailingZeros > i6 ? i6 : numberOfTrailingZeros;
    }

    public final int c(int i5) {
        int i6 = this.f15509e;
        if (i5 >= i6) {
            return i6;
        }
        int i10 = i5 / 32;
        int i11 = (~((1 << (i5 & 31)) - 1)) & (~this.f15508d[i10]);
        while (i11 == 0) {
            i10++;
            int[] iArr = this.f15508d;
            if (i10 == iArr.length) {
                return i6;
            }
            i11 = ~iArr[i10];
        }
        int numberOfTrailingZeros = Integer.numberOfTrailingZeros(i11) + (i10 << 5);
        return numberOfTrailingZeros > i6 ? i6 : numberOfTrailingZeros;
    }

    public final Object clone() {
        int[] iArr = (int[]) this.f15508d.clone();
        int i5 = this.f15509e;
        a aVar = new a();
        aVar.f15508d = iArr;
        aVar.f15509e = i5;
        return aVar;
    }

    public final boolean d(int i5, int i6) {
        if (i6 < i5 || i5 < 0 || i6 > this.f15509e) {
            throw new IllegalArgumentException();
        }
        if (i6 != i5) {
            int i10 = i6 - 1;
            int i11 = i5 / 32;
            int i12 = i10 / 32;
            int i13 = i11;
            while (i13 <= i12) {
                if ((((2 << (i13 >= i12 ? 31 & i10 : 31)) - (1 << (i13 > i11 ? 0 : i5 & 31))) & this.f15508d[i13]) != 0) {
                    return false;
                }
                i13++;
            }
        }
        return true;
    }

    public final void e() {
        int i5;
        int[] iArr = new int[this.f15508d.length];
        int i6 = this.f15509e;
        int i10 = (i6 - 1) / 32;
        int i11 = i10 + 1;
        int i12 = 0;
        while (true) {
            if (i12 >= i11) {
                break;
            }
            long j = this.f15508d[i12];
            long j5 = ((j & 1431655765) << 1) | ((j >> 1) & 1431655765);
            long j7 = ((j5 & 858993459) << 2) | ((j5 >> 2) & 858993459);
            long j10 = ((j7 & 252645135) << 4) | ((j7 >> 4) & 252645135);
            long j11 = ((j10 & 16711935) << 8) | ((j10 >> 8) & 16711935);
            iArr[i10 - i12] = (int) (((j11 & 65535) << 16) | ((j11 >> 16) & 65535));
            i12++;
        }
        int i13 = i11 << 5;
        if (i6 != i13) {
            int i14 = i13 - i6;
            int i15 = iArr[0] >>> i14;
            for (i5 = 1; i5 < i11; i5++) {
                int i16 = iArr[i5];
                iArr[i5 - 1] = i15 | (i16 << (32 - i14));
                i15 = i16 >>> i14;
            }
            iArr[i10] = i15;
        }
        this.f15508d = iArr;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return this.f15509e == aVar.f15509e && Arrays.equals(this.f15508d, aVar.f15508d);
    }

    public final void f(int i5) {
        int[] iArr = this.f15508d;
        int i6 = i5 / 32;
        iArr[i6] = (1 << (i5 & 31)) | iArr[i6];
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f15508d) + (this.f15509e * 31);
    }

    public final String toString() {
        int i5 = this.f15509e;
        StringBuilder sb2 = new StringBuilder((i5 / 8) + i5 + 1);
        for (int i6 = 0; i6 < i5; i6++) {
            if ((i6 & 7) == 0) {
                sb2.append(' ');
            }
            sb2.append(a(i6) ? 'X' : '.');
        }
        return sb2.toString();
    }
}
