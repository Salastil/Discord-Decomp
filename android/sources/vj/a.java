package vj;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.zxing.Result;
import java.util.Arrays;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public final class a extends h {

    /* renamed from: d, reason: collision with root package name */
    public static final char[] f19416d = "0123456789-$:/.+ABCD".toCharArray();

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f19417e = {3, 6, 9, 96, 18, 66, 33, 36, 48, 72, 12, 24, 69, 81, 84, 21, 26, 41, 11, 14};

    /* renamed from: f, reason: collision with root package name */
    public static final char[] f19418f = {'A', 'B', 'C', 'D'};
    public final StringBuilder a = new StringBuilder(20);

    /* renamed from: b, reason: collision with root package name */
    public int[] f19419b = new int[80];

    /* renamed from: c, reason: collision with root package name */
    public int f19420c = 0;

    public static boolean g(char[] cArr, char c6) {
        if (cArr != null) {
            for (char c8 : cArr) {
                if (c8 == c6) {
                    return true;
                }
            }
        }
        return false;
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        int i6;
        int[] iArr;
        int i10;
        Arrays.fill(this.f19419b, 0);
        this.f19420c = 0;
        int c6 = aVar.c(0);
        int i11 = aVar.f15509e;
        if (c6 >= i11) {
            throw jj.g.f12795i;
        }
        int i12 = 1;
        int i13 = 0;
        boolean z5 = true;
        while (c6 < i11) {
            if (aVar.a(c6) != z5) {
                i13++;
            } else {
                int[] iArr2 = this.f19419b;
                int i14 = this.f19420c;
                iArr2[i14] = i13;
                int i15 = i14 + 1;
                this.f19420c = i15;
                if (i15 >= iArr2.length) {
                    int[] iArr3 = new int[i15 << 1];
                    System.arraycopy(iArr2, 0, iArr3, 0, i15);
                    this.f19419b = iArr3;
                }
                z5 = !z5;
                i13 = 1;
            }
            c6++;
        }
        int[] iArr4 = this.f19419b;
        int i16 = this.f19420c;
        iArr4[i16] = i13;
        int i17 = i16 + 1;
        this.f19420c = i17;
        if (i17 >= iArr4.length) {
            int[] iArr5 = new int[i17 << 1];
            System.arraycopy(iArr4, 0, iArr5, 0, i17);
            this.f19419b = iArr5;
        }
        int i18 = 1;
        while (i18 < this.f19420c) {
            int h6 = h(i18);
            if (h6 != -1) {
                char[] cArr = f19416d;
                char c8 = cArr[h6];
                char[] cArr2 = f19418f;
                if (g(cArr2, c8)) {
                    int i19 = 0;
                    for (int i20 = i18; i20 < i18 + 7; i20++) {
                        i19 += this.f19419b[i20];
                    }
                    if (i18 == i12 || this.f19419b[i18 - 1] >= i19 / 2) {
                        StringBuilder sb2 = this.a;
                        sb2.setLength(0);
                        int i21 = i18;
                        while (true) {
                            int h7 = h(i21);
                            if (h7 == -1) {
                                throw jj.g.f12795i;
                            }
                            sb2.append((char) h7);
                            i6 = i21 + 8;
                            if ((sb2.length() <= i12 || !g(cArr2, cArr[h7])) && i6 < this.f19420c) {
                                i21 = i6;
                                i12 = i12;
                            }
                        }
                        int i22 = i21 + 7;
                        int i23 = this.f19419b[i22];
                        int i24 = 0;
                        for (int i25 = -8; i25 < -1; i25++) {
                            i24 += this.f19419b[i6 + i25];
                        }
                        if (i6 < this.f19420c && i23 < i24 / 2) {
                            throw jj.g.f12795i;
                        }
                        int[] iArr6 = new int[4];
                        iArr6[0] = 0;
                        iArr6[i12] = 0;
                        iArr6[2] = 0;
                        iArr6[3] = 0;
                        int[] iArr7 = new int[4];
                        iArr7[0] = 0;
                        iArr7[i12] = 0;
                        iArr7[2] = 0;
                        iArr7[3] = 0;
                        int length = sb2.length() - i12;
                        int i26 = i18;
                        int i27 = 0;
                        while (true) {
                            char charAt = sb2.charAt(i27);
                            iArr = f19417e;
                            int i28 = iArr[charAt];
                            int i29 = 6;
                            while (i29 >= 0) {
                                int i30 = (i29 & 1) + ((i28 & 1) << 1);
                                iArr6[i30] = iArr6[i30] + this.f19419b[i26 + i29];
                                iArr7[i30] = iArr7[i30] + 1;
                                i28 >>= 1;
                                i29--;
                                i12 = i12;
                            }
                            int i31 = i12;
                            if (i27 >= length) {
                                break;
                            }
                            i26 += 8;
                            i27++;
                            i12 = i31;
                        }
                        float[] fArr = new float[4];
                        float[] fArr2 = new float[4];
                        int i32 = 0;
                        for (int i33 = 2; i32 < i33; i33 = 2) {
                            fArr2[i32] = 0.0f;
                            int i34 = i32 + 2;
                            float f2 = iArr6[i34];
                            float f10 = iArr7[i34];
                            float f11 = ((f2 / f10) + (iArr6[i32] / iArr7[i32])) / 2.0f;
                            fArr2[i34] = f11;
                            fArr[i32] = f11;
                            fArr[i34] = ((f2 * 2.0f) + 1.5f) / f10;
                            i32++;
                        }
                        int i35 = i18;
                        int i36 = 0;
                        loop8: while (true) {
                            int i37 = iArr[sb2.charAt(i36)];
                            for (int i38 = 6; i38 >= 0; i38--) {
                                int i39 = (i38 & 1) + ((i37 & 1) << 1);
                                float f12 = this.f19419b[i35 + i38];
                                if (f12 < fArr2[i39] || f12 > fArr[i39]) {
                                    break loop8;
                                }
                                i37 >>= 1;
                            }
                            if (i36 >= length) {
                                for (int i40 = 0; i40 < sb2.length(); i40++) {
                                    sb2.setCharAt(i40, cArr[sb2.charAt(i40)]);
                                }
                                if (!g(cArr2, sb2.charAt(0))) {
                                    throw jj.g.f12795i;
                                }
                                if (!g(cArr2, sb2.charAt(sb2.length() - 1))) {
                                    throw jj.g.f12795i;
                                }
                                if (sb2.length() <= 3) {
                                    throw jj.g.f12795i;
                                }
                                if (map == null || !map.containsKey(jj.c.E)) {
                                    sb2.deleteCharAt(sb2.length() - 1);
                                    i10 = 0;
                                    sb2.deleteCharAt(0);
                                } else {
                                    i10 = 0;
                                }
                                int i41 = i10;
                                while (i10 < i18) {
                                    i41 += this.f19419b[i10];
                                    i10++;
                                }
                                float f13 = i41;
                                while (i18 < i22) {
                                    i41 += this.f19419b[i18];
                                    i18++;
                                }
                                float f14 = i5;
                                return new Result(sb2.toString(), null, new l[]{new l(f13, f14), new l(i41, f14)}, jj.a.f12778e);
                            }
                            i35 += 8;
                            i36++;
                        }
                        throw jj.g.f12795i;
                    }
                }
            }
            i18 += 2;
            i12 = i12;
        }
        throw jj.g.f12795i;
    }

    public final int h(int i5) {
        int i6 = i5 + 7;
        if (i6 >= this.f19420c) {
            return -1;
        }
        int[] iArr = this.f19419b;
        int i10 = Integer.MAX_VALUE;
        int i11 = 0;
        int i12 = Integer.MAX_VALUE;
        int i13 = 0;
        for (int i14 = i5; i14 < i6; i14 += 2) {
            int i15 = iArr[i14];
            if (i15 < i12) {
                i12 = i15;
            }
            if (i15 > i13) {
                i13 = i15;
            }
        }
        int i16 = (i12 + i13) / 2;
        int i17 = 0;
        for (int i18 = i5 + 1; i18 < i6; i18 += 2) {
            int i19 = iArr[i18];
            if (i19 < i10) {
                i10 = i19;
            }
            if (i19 > i17) {
                i17 = i19;
            }
        }
        int i20 = (i10 + i17) / 2;
        int i21 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        int i22 = 0;
        for (int i23 = 0; i23 < 7; i23++) {
            i21 >>= 1;
            if (iArr[i5 + i23] > ((i23 & 1) == 0 ? i16 : i20)) {
                i22 |= i21;
            }
        }
        while (true) {
            int[] iArr2 = f19417e;
            if (i11 >= iArr2.length) {
                return -1;
            }
            if (iArr2[i11] == i22) {
                return i11;
            }
            i11++;
        }
    }
}
