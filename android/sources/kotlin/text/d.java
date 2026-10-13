package kotlin.text;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class d {
    public static final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final long[] f13569b;

    static {
        int[] iArr = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        int i5 = 0;
        for (int i6 = 0; i6 < 256; i6++) {
            iArr[i6] = "0123456789abcdef".charAt(i6 & 15) | ("0123456789abcdef".charAt(i6 >> 4) << '\b');
        }
        a = iArr;
        int[] iArr2 = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        for (int i10 = 0; i10 < 256; i10++) {
            iArr2[i10] = "0123456789ABCDEF".charAt(i10 & 15) | ("0123456789ABCDEF".charAt(i10 >> 4) << '\b');
        }
        int[] iArr3 = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        for (int i11 = 0; i11 < 256; i11++) {
            iArr3[i11] = -1;
        }
        int i12 = 0;
        int i13 = 0;
        while (i12 < "0123456789abcdef".length()) {
            iArr3["0123456789abcdef".charAt(i12)] = i13;
            i12++;
            i13++;
        }
        int i14 = 0;
        int i15 = 0;
        while (i14 < "0123456789ABCDEF".length()) {
            iArr3["0123456789ABCDEF".charAt(i14)] = i15;
            i14++;
            i15++;
        }
        long[] jArr = new long[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        for (int i16 = 0; i16 < 256; i16++) {
            jArr[i16] = -1;
        }
        int i17 = 0;
        int i18 = 0;
        while (i17 < "0123456789abcdef".length()) {
            jArr["0123456789abcdef".charAt(i17)] = i18;
            i17++;
            i18++;
        }
        int i19 = 0;
        while (i5 < "0123456789ABCDEF".length()) {
            jArr["0123456789ABCDEF".charAt(i5)] = i19;
            i5++;
            i19++;
        }
        f13569b = jArr;
    }

    public static final void a(int i5, int i6, String str) {
        int i10 = i6 - i5;
        if (i10 < 1) {
            Intrinsics.checkNotNull(str, "null cannot be cast to non-null type java.lang.String");
            String substring = str.substring(i5, i6);
            Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Expected at least 1 hexadecimal digits at index ", ", but was \"", substring, i5, "\" of length ");
            n6.append(i10);
            throw new NumberFormatException(n6.toString());
        }
        if (i10 > 16) {
            int i11 = (i10 + i5) - 16;
            while (i5 < i11) {
                if (str.charAt(i5) != '0') {
                    StringBuilder r5 = a3.e.r(i5, "Expected the hexadecimal digit '0' at index ", ", but was '");
                    r5.append(str.charAt(i5));
                    r5.append("'.\nThe result won't fit the type being parsed.");
                    throw new NumberFormatException(r5.toString());
                }
                i5++;
            }
        }
    }

    public static long b(int i5, int i6, String str) {
        j.f13573d.getClass();
        j format = j.f13574e;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(format, "format");
        kotlin.collections.c cVar = kotlin.collections.f.f13497d;
        int length = str.length();
        cVar.getClass();
        kotlin.collections.c.a(i5, i6, length);
        if (format.f13576c.a) {
            a(i5, i6, str);
            return c(i5, i6, str);
        }
        if (i6 - i5 > 0) {
            a(i5, i6, str);
            return c(i5, i6, str);
        }
        Intrinsics.checkNotNull(str, "null cannot be cast to non-null type java.lang.String");
        String substring = str.substring(i5, i6);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        throw new NumberFormatException(a3.e.k("Expected a hexadecimal number with prefix \"\" and suffix \"\", but was ", substring));
    }

    public static final long c(int i5, int i6, String str) {
        long j = 0;
        while (i5 < i6) {
            long j5 = j << 4;
            char charAt = str.charAt(i5);
            if ((charAt >>> '\b') == 0) {
                long j7 = f13569b[charAt];
                if (j7 >= 0) {
                    j = j5 | j7;
                    i5++;
                }
            }
            StringBuilder r5 = a3.e.r(i5, "Expected a hexadecimal digit at index ", ", but was ");
            r5.append(str.charAt(i5));
            throw new NumberFormatException(r5.toString());
        }
        return j;
    }
}
