package ek;

import a5.a0;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.media.engine.MediaEngine;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f8146e = {31892, 34236, 39577, 42195, 48118, 51042, 55367, 58893, 63784, 68472, 70749, 76311, 79154, 84390, 87683, 92361, 96236, 102084, 102881, 110507, 110734, 117786, 119615, 126325, 127568, 133589, 136944, 141498, 145311, 150283, 152622, 158308, 161089, 167017};

    /* renamed from: f, reason: collision with root package name */
    public static final h[] f8147f = a();
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f8148b;

    /* renamed from: c, reason: collision with root package name */
    public final a0[] f8149c;

    /* renamed from: d, reason: collision with root package name */
    public final int f8150d;

    public h(int i5, int[] iArr, a0... a0VarArr) {
        this.a = i5;
        this.f8148b = iArr;
        this.f8149c = a0VarArr;
        a0 a0Var = a0VarArr[0];
        int i6 = a0Var.f124e;
        int i10 = 0;
        for (c5.e eVar : (c5.e[]) a0Var.f125i) {
            i10 += (eVar.f3329c + i6) * eVar.f3328b;
        }
        this.f8150d = i10;
    }

    public static h[] a() {
        return new h[]{new h(1, new int[0], new a0(7, new c5.e[]{new c5.e(1, 19, 2)}), new a0(10, new c5.e[]{new c5.e(1, 16, 2)}), new a0(13, new c5.e[]{new c5.e(1, 13, 2)}), new a0(17, new c5.e[]{new c5.e(1, 9, 2)})), new h(2, new int[]{6, 18}, new a0(10, new c5.e[]{new c5.e(1, 34, 2)}), new a0(16, new c5.e[]{new c5.e(1, 28, 2)}), new a0(22, new c5.e[]{new c5.e(1, 22, 2)}), new a0(28, new c5.e[]{new c5.e(1, 16, 2)})), new h(3, new int[]{6, 22}, new a0(15, new c5.e[]{new c5.e(1, 55, 2)}), new a0(26, new c5.e[]{new c5.e(1, 44, 2)}), new a0(18, new c5.e[]{new c5.e(2, 17, 2)}), new a0(22, new c5.e[]{new c5.e(2, 13, 2)})), new h(4, new int[]{6, 26}, new a0(20, new c5.e[]{new c5.e(1, 80, 2)}), new a0(18, new c5.e[]{new c5.e(2, 32, 2)}), new a0(26, new c5.e[]{new c5.e(2, 24, 2)}), new a0(16, new c5.e[]{new c5.e(4, 9, 2)})), new h(5, new int[]{6, 30}, new a0(26, new c5.e[]{new c5.e(1, 108, 2)}), new a0(24, new c5.e[]{new c5.e(2, 43, 2)}), new a0(18, new c5.e[]{new c5.e(2, 15, 2), new c5.e(2, 16, 2)}), new a0(22, new c5.e[]{new c5.e(2, 11, 2), new c5.e(2, 12, 2)})), new h(6, new int[]{6, 34}, new a0(18, new c5.e[]{new c5.e(2, 68, 2)}), new a0(16, new c5.e[]{new c5.e(4, 27, 2)}), new a0(24, new c5.e[]{new c5.e(4, 19, 2)}), new a0(28, new c5.e[]{new c5.e(4, 15, 2)})), new h(7, new int[]{6, 22, 38}, new a0(20, new c5.e[]{new c5.e(2, 78, 2)}), new a0(18, new c5.e[]{new c5.e(4, 31, 2)}), new a0(18, new c5.e[]{new c5.e(2, 14, 2), new c5.e(4, 15, 2)}), new a0(26, new c5.e[]{new c5.e(4, 13, 2), new c5.e(1, 14, 2)})), new h(8, new int[]{6, 24, 42}, new a0(24, new c5.e[]{new c5.e(2, 97, 2)}), new a0(22, new c5.e[]{new c5.e(2, 38, 2), new c5.e(2, 39, 2)}), new a0(22, new c5.e[]{new c5.e(4, 18, 2), new c5.e(2, 19, 2)}), new a0(26, new c5.e[]{new c5.e(4, 14, 2), new c5.e(2, 15, 2)})), new h(9, new int[]{6, 26, 46}, new a0(30, new c5.e[]{new c5.e(2, 116, 2)}), new a0(22, new c5.e[]{new c5.e(3, 36, 2), new c5.e(2, 37, 2)}), new a0(20, new c5.e[]{new c5.e(4, 16, 2), new c5.e(4, 17, 2)}), new a0(24, new c5.e[]{new c5.e(4, 12, 2), new c5.e(4, 13, 2)})), new h(10, new int[]{6, 28, 50}, new a0(18, new c5.e[]{new c5.e(2, 68, 2), new c5.e(2, 69, 2)}), new a0(26, new c5.e[]{new c5.e(4, 43, 2), new c5.e(1, 44, 2)}), new a0(24, new c5.e[]{new c5.e(6, 19, 2), new c5.e(2, 20, 2)}), new a0(28, new c5.e[]{new c5.e(6, 15, 2), new c5.e(2, 16, 2)})), new h(11, new int[]{6, 30, 54}, new a0(20, new c5.e[]{new c5.e(4, 81, 2)}), new a0(30, new c5.e[]{new c5.e(1, 50, 2), new c5.e(4, 51, 2)}), new a0(28, new c5.e[]{new c5.e(4, 22, 2), new c5.e(4, 23, 2)}), new a0(24, new c5.e[]{new c5.e(3, 12, 2), new c5.e(8, 13, 2)})), new h(12, new int[]{6, 32, 58}, new a0(24, new c5.e[]{new c5.e(2, 92, 2), new c5.e(2, 93, 2)}), new a0(22, new c5.e[]{new c5.e(6, 36, 2), new c5.e(2, 37, 2)}), new a0(26, new c5.e[]{new c5.e(4, 20, 2), new c5.e(6, 21, 2)}), new a0(28, new c5.e[]{new c5.e(7, 14, 2), new c5.e(4, 15, 2)})), new h(13, new int[]{6, 34, 62}, new a0(26, new c5.e[]{new c5.e(4, 107, 2)}), new a0(22, new c5.e[]{new c5.e(8, 37, 2), new c5.e(1, 38, 2)}), new a0(24, new c5.e[]{new c5.e(8, 20, 2), new c5.e(4, 21, 2)}), new a0(22, new c5.e[]{new c5.e(12, 11, 2), new c5.e(4, 12, 2)})), new h(14, new int[]{6, 26, 46, 66}, new a0(30, new c5.e[]{new c5.e(3, 115, 2), new c5.e(1, 116, 2)}), new a0(24, new c5.e[]{new c5.e(4, 40, 2), new c5.e(5, 41, 2)}), new a0(20, new c5.e[]{new c5.e(11, 16, 2), new c5.e(5, 17, 2)}), new a0(24, new c5.e[]{new c5.e(11, 12, 2), new c5.e(5, 13, 2)})), new h(15, new int[]{6, 26, 48, 70}, new a0(22, new c5.e[]{new c5.e(5, 87, 2), new c5.e(1, 88, 2)}), new a0(24, new c5.e[]{new c5.e(5, 41, 2), new c5.e(5, 42, 2)}), new a0(30, new c5.e[]{new c5.e(5, 24, 2), new c5.e(7, 25, 2)}), new a0(24, new c5.e[]{new c5.e(11, 12, 2), new c5.e(7, 13, 2)})), new h(16, new int[]{6, 26, 50, 74}, new a0(24, new c5.e[]{new c5.e(5, 98, 2), new c5.e(1, 99, 2)}), new a0(28, new c5.e[]{new c5.e(7, 45, 2), new c5.e(3, 46, 2)}), new a0(24, new c5.e[]{new c5.e(15, 19, 2), new c5.e(2, 20, 2)}), new a0(30, new c5.e[]{new c5.e(3, 15, 2), new c5.e(13, 16, 2)})), new h(17, new int[]{6, 30, 54, 78}, new a0(28, new c5.e[]{new c5.e(1, 107, 2), new c5.e(5, 108, 2)}), new a0(28, new c5.e[]{new c5.e(10, 46, 2), new c5.e(1, 47, 2)}), new a0(28, new c5.e[]{new c5.e(1, 22, 2), new c5.e(15, 23, 2)}), new a0(28, new c5.e[]{new c5.e(2, 14, 2), new c5.e(17, 15, 2)})), new h(18, new int[]{6, 30, 56, 82}, new a0(30, new c5.e[]{new c5.e(5, 120, 2), new c5.e(1, 121, 2)}), new a0(26, new c5.e[]{new c5.e(9, 43, 2), new c5.e(4, 44, 2)}), new a0(28, new c5.e[]{new c5.e(17, 22, 2), new c5.e(1, 23, 2)}), new a0(28, new c5.e[]{new c5.e(2, 14, 2), new c5.e(19, 15, 2)})), new h(19, new int[]{6, 30, 58, 86}, new a0(28, new c5.e[]{new c5.e(3, 113, 2), new c5.e(4, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 2)}), new a0(26, new c5.e[]{new c5.e(3, 44, 2), new c5.e(11, 45, 2)}), new a0(26, new c5.e[]{new c5.e(17, 21, 2), new c5.e(4, 22, 2)}), new a0(26, new c5.e[]{new c5.e(9, 13, 2), new c5.e(16, 14, 2)})), new h(20, new int[]{6, 34, 62, 90}, new a0(28, new c5.e[]{new c5.e(3, 107, 2), new c5.e(5, 108, 2)}), new a0(26, new c5.e[]{new c5.e(3, 41, 2), new c5.e(13, 42, 2)}), new a0(30, new c5.e[]{new c5.e(15, 24, 2), new c5.e(5, 25, 2)}), new a0(28, new c5.e[]{new c5.e(15, 15, 2), new c5.e(10, 16, 2)})), new h(21, new int[]{6, 28, 50, 72, 94}, new a0(28, new c5.e[]{new c5.e(4, 116, 2), new c5.e(4, 117, 2)}), new a0(26, new c5.e[]{new c5.e(17, 42, 2)}), new a0(28, new c5.e[]{new c5.e(17, 22, 2), new c5.e(6, 23, 2)}), new a0(30, new c5.e[]{new c5.e(19, 16, 2), new c5.e(6, 17, 2)})), new h(22, new int[]{6, 26, 50, 74, 98}, new a0(28, new c5.e[]{new c5.e(2, 111, 2), new c5.e(7, 112, 2)}), new a0(28, new c5.e[]{new c5.e(17, 46, 2)}), new a0(30, new c5.e[]{new c5.e(7, 24, 2), new c5.e(16, 25, 2)}), new a0(24, new c5.e[]{new c5.e(34, 13, 2)})), new h(23, new int[]{6, 30, 54, 78, 102}, new a0(30, new c5.e[]{new c5.e(4, 121, 2), new c5.e(5, 122, 2)}), new a0(28, new c5.e[]{new c5.e(4, 47, 2), new c5.e(14, 48, 2)}), new a0(30, new c5.e[]{new c5.e(11, 24, 2), new c5.e(14, 25, 2)}), new a0(30, new c5.e[]{new c5.e(16, 15, 2), new c5.e(14, 16, 2)})), new h(24, new int[]{6, 28, 54, 80, 106}, new a0(30, new c5.e[]{new c5.e(6, 117, 2), new c5.e(4, 118, 2)}), new a0(28, new c5.e[]{new c5.e(6, 45, 2), new c5.e(14, 46, 2)}), new a0(30, new c5.e[]{new c5.e(11, 24, 2), new c5.e(16, 25, 2)}), new a0(30, new c5.e[]{new c5.e(30, 16, 2), new c5.e(2, 17, 2)})), new h(25, new int[]{6, 32, 58, 84, 110}, new a0(26, new c5.e[]{new c5.e(8, 106, 2), new c5.e(4, 107, 2)}), new a0(28, new c5.e[]{new c5.e(8, 47, 2), new c5.e(13, 48, 2)}), new a0(30, new c5.e[]{new c5.e(7, 24, 2), new c5.e(22, 25, 2)}), new a0(30, new c5.e[]{new c5.e(22, 15, 2), new c5.e(13, 16, 2)})), new h(26, new int[]{6, 30, 58, 86, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION}, new a0(28, new c5.e[]{new c5.e(10, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 2), new c5.e(2, 115, 2)}), new a0(28, new c5.e[]{new c5.e(19, 46, 2), new c5.e(4, 47, 2)}), new a0(28, new c5.e[]{new c5.e(28, 22, 2), new c5.e(6, 23, 2)}), new a0(30, new c5.e[]{new c5.e(33, 16, 2), new c5.e(4, 17, 2)})), new h(27, new int[]{6, 34, 62, 90, 118}, new a0(30, new c5.e[]{new c5.e(8, 122, 2), new c5.e(4, 123, 2)}), new a0(28, new c5.e[]{new c5.e(22, 45, 2), new c5.e(3, 46, 2)}), new a0(30, new c5.e[]{new c5.e(8, 23, 2), new c5.e(26, 24, 2)}), new a0(30, new c5.e[]{new c5.e(12, 15, 2), new c5.e(28, 16, 2)})), new h(28, new int[]{6, 26, 50, 74, 98, 122}, new a0(30, new c5.e[]{new c5.e(3, 117, 2), new c5.e(10, 118, 2)}), new a0(28, new c5.e[]{new c5.e(3, 45, 2), new c5.e(23, 46, 2)}), new a0(30, new c5.e[]{new c5.e(4, 24, 2), new c5.e(31, 25, 2)}), new a0(30, new c5.e[]{new c5.e(11, 15, 2), new c5.e(31, 16, 2)})), new h(29, new int[]{6, 30, 54, 78, 102, 126}, new a0(30, new c5.e[]{new c5.e(7, 116, 2), new c5.e(7, 117, 2)}), new a0(28, new c5.e[]{new c5.e(21, 45, 2), new c5.e(7, 46, 2)}), new a0(30, new c5.e[]{new c5.e(1, 23, 2), new c5.e(37, 24, 2)}), new a0(30, new c5.e[]{new c5.e(19, 15, 2), new c5.e(26, 16, 2)})), new h(30, new int[]{6, 26, 52, 78, 104, 130}, new a0(30, new c5.e[]{new c5.e(5, 115, 2), new c5.e(10, 116, 2)}), new a0(28, new c5.e[]{new c5.e(19, 47, 2), new c5.e(10, 48, 2)}), new a0(30, new c5.e[]{new c5.e(15, 24, 2), new c5.e(25, 25, 2)}), new a0(30, new c5.e[]{new c5.e(23, 15, 2), new c5.e(25, 16, 2)})), new h(31, new int[]{6, 30, 56, 82, 108, 134}, new a0(30, new c5.e[]{new c5.e(13, 115, 2), new c5.e(3, 116, 2)}), new a0(28, new c5.e[]{new c5.e(2, 46, 2), new c5.e(29, 47, 2)}), new a0(30, new c5.e[]{new c5.e(42, 24, 2), new c5.e(1, 25, 2)}), new a0(30, new c5.e[]{new c5.e(23, 15, 2), new c5.e(28, 16, 2)})), new h(32, new int[]{6, 34, 60, 86, 112, 138}, new a0(30, new c5.e[]{new c5.e(17, 115, 2)}), new a0(28, new c5.e[]{new c5.e(10, 46, 2), new c5.e(23, 47, 2)}), new a0(30, new c5.e[]{new c5.e(10, 24, 2), new c5.e(35, 25, 2)}), new a0(30, new c5.e[]{new c5.e(19, 15, 2), new c5.e(35, 16, 2)})), new h(33, new int[]{6, 30, 58, 86, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 142}, new a0(30, new c5.e[]{new c5.e(17, 115, 2), new c5.e(1, 116, 2)}), new a0(28, new c5.e[]{new c5.e(14, 46, 2), new c5.e(21, 47, 2)}), new a0(30, new c5.e[]{new c5.e(29, 24, 2), new c5.e(19, 25, 2)}), new a0(30, new c5.e[]{new c5.e(11, 15, 2), new c5.e(46, 16, 2)})), new h(34, new int[]{6, 34, 62, 90, 118, MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH}, new a0(30, new c5.e[]{new c5.e(13, 115, 2), new c5.e(6, 116, 2)}), new a0(28, new c5.e[]{new c5.e(14, 46, 2), new c5.e(23, 47, 2)}), new a0(30, new c5.e[]{new c5.e(44, 24, 2), new c5.e(7, 25, 2)}), new a0(30, new c5.e[]{new c5.e(59, 16, 2), new c5.e(1, 17, 2)})), new h(35, new int[]{6, 30, 54, 78, 102, 126, 150}, new a0(30, new c5.e[]{new c5.e(12, 121, 2), new c5.e(7, 122, 2)}), new a0(28, new c5.e[]{new c5.e(12, 47, 2), new c5.e(26, 48, 2)}), new a0(30, new c5.e[]{new c5.e(39, 24, 2), new c5.e(14, 25, 2)}), new a0(30, new c5.e[]{new c5.e(22, 15, 2), new c5.e(41, 16, 2)})), new h(36, new int[]{6, 24, 50, 76, 102, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 154}, new a0(30, new c5.e[]{new c5.e(6, 121, 2), new c5.e(14, 122, 2)}), new a0(28, new c5.e[]{new c5.e(6, 47, 2), new c5.e(34, 48, 2)}), new a0(30, new c5.e[]{new c5.e(46, 24, 2), new c5.e(10, 25, 2)}), new a0(30, new c5.e[]{new c5.e(2, 15, 2), new c5.e(64, 16, 2)})), new h(37, new int[]{6, 28, 54, 80, 106, 132, 158}, new a0(30, new c5.e[]{new c5.e(17, 122, 2), new c5.e(4, 123, 2)}), new a0(28, new c5.e[]{new c5.e(29, 46, 2), new c5.e(14, 47, 2)}), new a0(30, new c5.e[]{new c5.e(49, 24, 2), new c5.e(10, 25, 2)}), new a0(30, new c5.e[]{new c5.e(24, 15, 2), new c5.e(46, 16, 2)})), new h(38, new int[]{6, 32, 58, 84, 110, 136, 162}, new a0(30, new c5.e[]{new c5.e(4, 122, 2), new c5.e(18, 123, 2)}), new a0(28, new c5.e[]{new c5.e(13, 46, 2), new c5.e(32, 47, 2)}), new a0(30, new c5.e[]{new c5.e(48, 24, 2), new c5.e(14, 25, 2)}), new a0(30, new c5.e[]{new c5.e(42, 15, 2), new c5.e(32, 16, 2)})), new h(39, new int[]{6, 26, 54, 82, 110, 138, 166}, new a0(30, new c5.e[]{new c5.e(20, 117, 2), new c5.e(4, 118, 2)}), new a0(28, new c5.e[]{new c5.e(40, 47, 2), new c5.e(7, 48, 2)}), new a0(30, new c5.e[]{new c5.e(43, 24, 2), new c5.e(22, 25, 2)}), new a0(30, new c5.e[]{new c5.e(10, 15, 2), new c5.e(67, 16, 2)})), new h(40, new int[]{6, 30, 58, 86, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 142, 170}, new a0(30, new c5.e[]{new c5.e(19, 118, 2), new c5.e(6, 119, 2)}), new a0(28, new c5.e[]{new c5.e(18, 47, 2), new c5.e(31, 48, 2)}), new a0(30, new c5.e[]{new c5.e(34, 24, 2), new c5.e(34, 25, 2)}), new a0(30, new c5.e[]{new c5.e(20, 15, 2), new c5.e(61, 16, 2)}))};
    }

    public static h b(int i5) {
        int i6 = Integer.MAX_VALUE;
        int i10 = 0;
        for (int i11 = 0; i11 < 34; i11++) {
            int i12 = f8146e[i11];
            if (i12 == i5) {
                return c(i11 + 7);
            }
            int bitCount = Integer.bitCount(i12 ^ i5);
            if (bitCount < i6) {
                i10 = i11 + 7;
                i6 = bitCount;
            }
        }
        if (i6 <= 3) {
            return c(i10);
        }
        return null;
    }

    public static h c(int i5) {
        if (i5 <= 0 || i5 > 40) {
            throw new IllegalArgumentException();
        }
        return f8147f[i5 - 1];
    }

    public final String toString() {
        return String.valueOf(this.a);
    }
}
