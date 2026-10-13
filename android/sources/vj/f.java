package vj;

import com.google.zxing.Result;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public final class f extends h {

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f19431b = {6, 8, 10, 12, 14};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f19432c = {1, 1, 1, 1};

    /* renamed from: d, reason: collision with root package name */
    public static final int[][] f19433d = {new int[]{1, 1, 2}, new int[]{1, 1, 3}};

    /* renamed from: e, reason: collision with root package name */
    public static final int[][] f19434e = {new int[]{1, 1, 2, 2, 1}, new int[]{2, 1, 1, 1, 2}, new int[]{1, 2, 1, 1, 2}, new int[]{2, 2, 1, 1, 1}, new int[]{1, 1, 2, 1, 2}, new int[]{2, 1, 2, 1, 1}, new int[]{1, 2, 2, 1, 1}, new int[]{1, 1, 1, 2, 2}, new int[]{2, 1, 1, 2, 1}, new int[]{1, 2, 1, 2, 1}, new int[]{1, 1, 3, 3, 1}, new int[]{3, 1, 1, 1, 3}, new int[]{1, 3, 1, 1, 3}, new int[]{3, 3, 1, 1, 1}, new int[]{1, 1, 3, 1, 3}, new int[]{3, 1, 3, 1, 1}, new int[]{1, 3, 3, 1, 1}, new int[]{1, 1, 1, 3, 3}, new int[]{3, 1, 1, 3, 1}, new int[]{1, 3, 1, 3, 1}};
    public int a = -1;

    public static int g(int[] iArr) {
        float f2 = 0.38f;
        int i5 = -1;
        for (int i6 = 0; i6 < 20; i6++) {
            float d6 = h.d(iArr, f19434e[i6], 0.5f);
            if (d6 < f2) {
                i5 = i6;
                f2 = d6;
            } else if (d6 == f2) {
                i5 = -1;
            }
        }
        if (i5 >= 0) {
            return i5 % 10;
        }
        throw jj.g.f12795i;
    }

    public static int[] h(int i5, nj.a aVar, int[] iArr) {
        int length = iArr.length;
        int[] iArr2 = new int[length];
        int i6 = aVar.f15509e;
        int i10 = i5;
        boolean z5 = false;
        int i11 = 0;
        while (i5 < i6) {
            if (aVar.a(i5) != z5) {
                iArr2[i11] = iArr2[i11] + 1;
            } else {
                if (i11 != length - 1) {
                    i11++;
                } else {
                    if (h.d(iArr2, iArr, 0.5f) < 0.38f) {
                        return new int[]{i10, i5};
                    }
                    i10 += iArr2[0] + iArr2[1];
                    int i12 = i11 - 1;
                    System.arraycopy(iArr2, 2, iArr2, 0, i12);
                    iArr2[i12] = 0;
                    iArr2[i11] = 0;
                    i11--;
                }
                iArr2[i11] = 1;
                z5 = !z5;
            }
            i5++;
        }
        throw jj.g.f12795i;
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        int[] h6;
        boolean z5;
        int i6 = aVar.f15509e;
        int b10 = aVar.b(0);
        if (b10 == i6) {
            throw jj.g.f12795i;
        }
        int[] h7 = h(b10, aVar, f19432c);
        int i10 = h7[1];
        int i11 = h7[0];
        this.a = (i10 - i11) / 4;
        i(aVar, i11);
        int[][] iArr = f19433d;
        aVar.e();
        try {
            int b11 = aVar.b(0);
            if (b11 == i6) {
                throw jj.g.f12795i;
            }
            try {
                h6 = h(b11, aVar, iArr[0]);
            } catch (jj.g unused) {
                h6 = h(b11, aVar, iArr[1]);
            }
            i(aVar, h6[0]);
            int i12 = h6[0];
            h6[0] = i6 - h6[1];
            h6[1] = i6 - i12;
            aVar.e();
            StringBuilder sb2 = new StringBuilder(20);
            int i13 = h7[1];
            int i14 = h6[0];
            int[] iArr2 = new int[10];
            int[] iArr3 = new int[5];
            int[] iArr4 = new int[5];
            while (i13 < i14) {
                h.e(i13, aVar, iArr2);
                for (int i15 = 0; i15 < 5; i15++) {
                    int i16 = i15 * 2;
                    iArr3[i15] = iArr2[i16];
                    iArr4[i15] = iArr2[i16 + 1];
                }
                sb2.append((char) (g(iArr3) + 48));
                sb2.append((char) (g(iArr4) + 48));
                for (int i17 = 0; i17 < 10; i17++) {
                    i13 += iArr2[i17];
                }
            }
            String sb3 = sb2.toString();
            int[] iArr5 = map != null ? (int[]) map.get(jj.c.f12789w) : null;
            if (iArr5 == null) {
                iArr5 = f19431b;
            }
            int length = sb3.length();
            int length2 = iArr5.length;
            int i18 = 0;
            int i19 = 0;
            while (true) {
                if (i18 >= length2) {
                    z5 = false;
                    break;
                }
                int i20 = iArr5[i18];
                if (length == i20) {
                    z5 = true;
                    break;
                }
                if (i20 > i19) {
                    i19 = i20;
                }
                i18++;
            }
            if (!z5 && length > i19) {
                z5 = true;
            }
            if (!z5) {
                throw jj.d.a();
            }
            float f2 = i5;
            return new Result(sb3, null, new l[]{new l(h7[1], f2), new l(h6[0], f2)}, jj.a.F);
        } catch (Throwable th2) {
            aVar.e();
            throw th2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x001b, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i(nj.a aVar, int i5) {
        int i6 = this.a * 10;
        if (i6 >= i5) {
            i6 = i5;
        }
        for (int i10 = i5 - 1; i6 > 0 && i10 >= 0 && !aVar.a(i10); i10--) {
            i6--;
        }
        throw jj.g.f12795i;
    }
}
