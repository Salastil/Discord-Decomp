package ek;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: c, reason: collision with root package name */
    public static final int[][] f8137c = {new int[]{21522, 0}, new int[]{20773, 1}, new int[]{24188, 2}, new int[]{23371, 3}, new int[]{17913, 4}, new int[]{16590, 5}, new int[]{20375, 6}, new int[]{19104, 7}, new int[]{30660, 8}, new int[]{29427, 9}, new int[]{32170, 10}, new int[]{30877, 11}, new int[]{26159, 12}, new int[]{25368, 13}, new int[]{27713, 14}, new int[]{26998, 15}, new int[]{5769, 16}, new int[]{5054, 17}, new int[]{7399, 18}, new int[]{6608, 19}, new int[]{1890, 20}, new int[]{597, 21}, new int[]{3340, 22}, new int[]{2107, 23}, new int[]{13663, 24}, new int[]{12392, 25}, new int[]{16177, 26}, new int[]{14854, 27}, new int[]{9396, 28}, new int[]{8579, 29}, new int[]{11994, 30}, new int[]{11245, 31}};
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final byte f8138b;

    public e(int i5) {
        int i6 = (i5 >> 3) & 3;
        if (i6 < 0 || i6 >= 4) {
            throw new IllegalArgumentException();
        }
        this.a = d.a[i6];
        this.f8138b = (byte) (i5 & 7);
    }

    public static e a(int i5, int i6) {
        int bitCount;
        int i10 = Integer.MAX_VALUE;
        int i11 = 0;
        for (int i12 = 0; i12 < 32; i12++) {
            int[] iArr = f8137c[i12];
            int i13 = iArr[0];
            if (i13 == i5 || i13 == i6) {
                return new e(iArr[1]);
            }
            int bitCount2 = Integer.bitCount(i5 ^ i13);
            if (bitCount2 < i10) {
                i11 = iArr[1];
                i10 = bitCount2;
            }
            if (i5 != i6 && (bitCount = Integer.bitCount(i13 ^ i6)) < i10) {
                i11 = iArr[1];
                i10 = bitCount;
            }
        }
        if (i10 <= 3) {
            return new e(i11);
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.a == eVar.a && this.f8138b == eVar.f8138b;
    }

    public final int hashCode() {
        return (f0.e.b(this.a) << 3) | this.f8138b;
    }
}
