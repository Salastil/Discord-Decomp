package bg;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.math.RoundingMode;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class n0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final char[] f2969b;

    /* renamed from: c, reason: collision with root package name */
    public final int f2970c;

    /* renamed from: d, reason: collision with root package name */
    public final int f2971d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2972e;

    /* renamed from: f, reason: collision with root package name */
    public final int f2973f;

    /* renamed from: g, reason: collision with root package name */
    public final byte[] f2974g;

    /* renamed from: h, reason: collision with root package name */
    public final boolean f2975h;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public n0(String str, char[] cArr) {
        this(str, cArr, r1, false);
        byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
        Arrays.fill(bArr, (byte) -1);
        for (int i5 = 0; i5 < cArr.length; i5++) {
            char c6 = cArr[i5];
            if (!(c6 < 128)) {
                throw new IllegalArgumentException(b.d("Non-ASCII character: %s", Character.valueOf(c6)));
            }
            if (!(bArr[c6] == -1)) {
                throw new IllegalArgumentException(b.d("Duplicate character: %s", Character.valueOf(c6)));
            }
            bArr[c6] = (byte) i5;
        }
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof n0)) {
            return false;
        }
        n0 n0Var = (n0) obj;
        return this.f2975h == n0Var.f2975h && Arrays.equals(this.f2969b, n0Var.f2969b);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f2969b) + (true != this.f2975h ? 1237 : 1231);
    }

    public final String toString() {
        return this.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0061 A[LOOP:0: B:13:0x005d->B:15:0x0061, LOOP_END] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public n0(String str, char[] cArr, byte[] bArr, boolean z5) {
        int numberOfLeadingZeros;
        int i5;
        this.a = str;
        cArr.getClass();
        this.f2969b = cArr;
        try {
            int length = cArr.length;
            RoundingMode roundingMode = RoundingMode.UNNECESSARY;
            if (length > 0) {
                switch (r0.a[roundingMode.ordinal()]) {
                    case 1:
                        if (((length - 1) & length) != 0) {
                            throw new ArithmeticException("mode was UNNECESSARY, but rounding was necessary");
                        }
                    case 2:
                    case 3:
                        numberOfLeadingZeros = 31 - Integer.numberOfLeadingZeros(length);
                        this.f2971d = numberOfLeadingZeros;
                        int numberOfTrailingZeros = Integer.numberOfTrailingZeros(numberOfLeadingZeros);
                        int i6 = 1 << (3 - numberOfTrailingZeros);
                        this.f2972e = i6;
                        this.f2973f = numberOfLeadingZeros >> numberOfTrailingZeros;
                        this.f2970c = length - 1;
                        this.f2974g = bArr;
                        boolean[] zArr = new boolean[i6];
                        for (i5 = 0; i5 < this.f2973f; i5++) {
                            int i10 = this.f2971d;
                            RoundingMode roundingMode2 = RoundingMode.CEILING;
                            zArr[b.a(i5 * 8, i10)] = true;
                        }
                        this.f2975h = z5;
                        return;
                    case 4:
                    case 5:
                        numberOfLeadingZeros = 32 - Integer.numberOfLeadingZeros(length - 1);
                        this.f2971d = numberOfLeadingZeros;
                        int numberOfTrailingZeros2 = Integer.numberOfTrailingZeros(numberOfLeadingZeros);
                        int i62 = 1 << (3 - numberOfTrailingZeros2);
                        this.f2972e = i62;
                        this.f2973f = numberOfLeadingZeros >> numberOfTrailingZeros2;
                        this.f2970c = length - 1;
                        this.f2974g = bArr;
                        boolean[] zArr2 = new boolean[i62];
                        while (i5 < this.f2973f) {
                        }
                        this.f2975h = z5;
                        return;
                    case 6:
                    case 7:
                    case 8:
                        int numberOfLeadingZeros2 = Integer.numberOfLeadingZeros(length);
                        numberOfLeadingZeros = (31 - numberOfLeadingZeros2) + ((((-1257966797) >>> numberOfLeadingZeros2) - length) >>> 31);
                        this.f2971d = numberOfLeadingZeros;
                        int numberOfTrailingZeros22 = Integer.numberOfTrailingZeros(numberOfLeadingZeros);
                        int i622 = 1 << (3 - numberOfTrailingZeros22);
                        this.f2972e = i622;
                        this.f2973f = numberOfLeadingZeros >> numberOfTrailingZeros22;
                        this.f2970c = length - 1;
                        this.f2974g = bArr;
                        boolean[] zArr22 = new boolean[i622];
                        while (i5 < this.f2973f) {
                        }
                        this.f2975h = z5;
                        return;
                    default:
                        throw new AssertionError();
                }
            } else {
                throw new IllegalArgumentException("x (0) must be > 0");
            }
        } catch (ArithmeticException e9) {
            throw new IllegalArgumentException(k0.d.i(cArr.length, "Illegal alphabet length "), e9);
        }
    }
}
