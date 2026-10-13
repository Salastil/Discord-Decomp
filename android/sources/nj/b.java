package nj;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b implements Cloneable {

    /* renamed from: d, reason: collision with root package name */
    public final int f15510d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15511e;

    /* renamed from: i, reason: collision with root package name */
    public final int f15512i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f15513v;

    public b(int i5, int i6) {
        if (i5 <= 0 || i6 <= 0) {
            throw new IllegalArgumentException("Both dimensions must be greater than 0");
        }
        this.f15510d = i5;
        this.f15511e = i6;
        int i10 = (i5 + 31) / 32;
        this.f15512i = i10;
        this.f15513v = new int[i10 * i6];
    }

    public final void a(int i5, int i6) {
        int i10 = (i5 / 32) + (i6 * this.f15512i);
        int[] iArr = this.f15513v;
        iArr[i10] = (1 << (i5 & 31)) ^ iArr[i10];
    }

    public final boolean b(int i5, int i6) {
        return ((this.f15513v[(i5 / 32) + (i6 * this.f15512i)] >>> (i5 & 31)) & 1) != 0;
    }

    public final int[] c() {
        int[] iArr = this.f15513v;
        int length = iArr.length - 1;
        while (length >= 0 && iArr[length] == 0) {
            length--;
        }
        if (length < 0) {
            return null;
        }
        int i5 = this.f15512i;
        int i6 = length / i5;
        int i10 = (length % i5) << 5;
        int i11 = iArr[length];
        int i12 = 31;
        while ((i11 >>> i12) == 0) {
            i12--;
        }
        return new int[]{i10 + i12, i6};
    }

    public final Object clone() {
        return new b(this.f15510d, this.f15511e, this.f15512i, (int[]) this.f15513v.clone());
    }

    public final a d(a aVar, int i5) {
        int i6 = aVar.f15509e;
        int i10 = this.f15510d;
        if (i6 < i10) {
            aVar = new a(i10);
        } else {
            int length = aVar.f15508d.length;
            for (int i11 = 0; i11 < length; i11++) {
                aVar.f15508d[i11] = 0;
            }
        }
        int i12 = this.f15512i;
        int i13 = i5 * i12;
        for (int i14 = 0; i14 < i12; i14++) {
            aVar.f15508d[(i14 << 5) / 32] = this.f15513v[i13 + i14];
        }
        return aVar;
    }

    public final int[] e() {
        int[] iArr;
        int i5 = 0;
        int i6 = 0;
        while (true) {
            iArr = this.f15513v;
            if (i6 >= iArr.length || iArr[i6] != 0) {
                break;
            }
            i6++;
        }
        if (i6 == iArr.length) {
            return null;
        }
        int i10 = this.f15512i;
        int i11 = i6 / i10;
        int i12 = (i6 % i10) << 5;
        while ((iArr[i6] << (31 - i5)) == 0) {
            i5++;
        }
        return new int[]{i12 + i5, i11};
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f15510d == bVar.f15510d && this.f15511e == bVar.f15511e && this.f15512i == bVar.f15512i && Arrays.equals(this.f15513v, bVar.f15513v);
    }

    public final void f(int i5, int i6) {
        int i10 = (i5 / 32) + (i6 * this.f15512i);
        int[] iArr = this.f15513v;
        iArr[i10] = (1 << (i5 & 31)) | iArr[i10];
    }

    public final void g(int i5, int i6, int i10, int i11) {
        if (i6 < 0 || i5 < 0) {
            throw new IllegalArgumentException("Left and top must be nonnegative");
        }
        if (i11 <= 0 || i10 <= 0) {
            throw new IllegalArgumentException("Height and width must be at least 1");
        }
        int i12 = i10 + i5;
        int i13 = i11 + i6;
        if (i13 > this.f15511e || i12 > this.f15510d) {
            throw new IllegalArgumentException("The region must fit inside the matrix");
        }
        while (i6 < i13) {
            int i14 = this.f15512i * i6;
            for (int i15 = i5; i15 < i12; i15++) {
                int i16 = (i15 / 32) + i14;
                int[] iArr = this.f15513v;
                iArr[i16] = iArr[i16] | (1 << (i15 & 31));
            }
            i6++;
        }
    }

    public final int hashCode() {
        int i5 = this.f15510d;
        return Arrays.hashCode(this.f15513v) + (((((((i5 * 31) + i5) * 31) + this.f15511e) * 31) + this.f15512i) * 31);
    }

    public final String toString() {
        int i5 = this.f15510d;
        int i6 = this.f15511e;
        StringBuilder sb2 = new StringBuilder((i5 + 1) * i6);
        for (int i10 = 0; i10 < i6; i10++) {
            for (int i11 = 0; i11 < i5; i11++) {
                sb2.append(b(i11, i10) ? "X " : "  ");
            }
            sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        }
        return sb2.toString();
    }

    public b(int i5, int i6, int i10, int[] iArr) {
        this.f15510d = i5;
        this.f15511e = i6;
        this.f15512i = i10;
        this.f15513v = iArr;
    }
}
