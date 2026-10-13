package ft;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import et.u;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class b {
    public static final char[] a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    public static final int a(char c6) {
        if ('0' <= c6 && c6 < ':') {
            return c6 - '0';
        }
        if ('a' <= c6 && c6 < 'g') {
            return c6 - 'W';
        }
        if ('A' <= c6 && c6 < 'G') {
            return c6 - '7';
        }
        throw new IllegalArgumentException("Unexpected hex digit: " + c6);
    }

    public static final byte[] b(String str) {
        int i5;
        char charAt;
        Intrinsics.checkNotNullParameter(str, "<this>");
        byte[] bArr = new byte[str.length() * 4];
        int length = str.length();
        int i6 = 0;
        while (i6 < length) {
            char charAt2 = str.charAt(i6);
            if (Intrinsics.compare((int) charAt2, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) >= 0) {
                int length2 = str.length();
                int i10 = i6;
                while (i6 < length2) {
                    char charAt3 = str.charAt(i6);
                    if (Intrinsics.compare((int) charAt3, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) < 0) {
                        int i11 = i10 + 1;
                        bArr[i10] = (byte) charAt3;
                        i6++;
                        while (true) {
                            i10 = i11;
                            if (i6 < length2 && Intrinsics.compare((int) str.charAt(i6), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) < 0) {
                                i11 = i10 + 1;
                                bArr[i10] = (byte) str.charAt(i6);
                                i6++;
                            }
                        }
                    } else {
                        if (Intrinsics.compare((int) charAt3, RecyclerView.ItemAnimator.FLAG_MOVED) < 0) {
                            bArr[i10] = (byte) ((charAt3 >> 6) | JfifUtil.MARKER_SOFn);
                            i10 += 2;
                            bArr[i10 + 1] = (byte) ((charAt3 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        } else if (55296 > charAt3 || charAt3 >= 57344) {
                            bArr[i10] = (byte) ((charAt3 >> '\f') | 224);
                            bArr[i10 + 1] = (byte) (((charAt3 >> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            i10 += 3;
                            bArr[i10 + 2] = (byte) ((charAt3 & '?') | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                        } else if (Intrinsics.compare((int) charAt3, 56319) > 0 || length2 <= (i5 = i6 + 1) || 56320 > (charAt = str.charAt(i5)) || charAt >= 57344) {
                            bArr[i10] = 63;
                            i6++;
                            i10++;
                        } else {
                            int charAt4 = (str.charAt(i5) + (charAt3 << '\n')) - 56613888;
                            bArr[i10] = (byte) ((charAt4 >> 18) | 240);
                            bArr[i10 + 1] = (byte) (((charAt4 >> 12) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            bArr[i10 + 2] = (byte) (((charAt4 >> 6) & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            i10 += 4;
                            bArr[i10 + 3] = (byte) ((charAt4 & 63) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            i6 += 2;
                        }
                        i6++;
                    }
                }
                byte[] copyOf = Arrays.copyOf(bArr, i10);
                Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
                return copyOf;
            }
            bArr[i6] = (byte) charAt2;
            i6++;
        }
        byte[] copyOf2 = Arrays.copyOf(bArr, str.length());
        Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(this, newSize)");
        return copyOf2;
    }

    public static final int c(u uVar, int i5) {
        int i6;
        Intrinsics.checkNotNullParameter(uVar, "<this>");
        int[] iArr = uVar.f8284x;
        int i10 = i5 + 1;
        int length = uVar.f8283w.length;
        Intrinsics.checkNotNullParameter(iArr, "<this>");
        int i11 = length - 1;
        int i12 = 0;
        while (true) {
            if (i12 <= i11) {
                i6 = (i12 + i11) >>> 1;
                int i13 = iArr[i6];
                if (i13 >= i10) {
                    if (i13 <= i10) {
                        break;
                    }
                    i11 = i6 - 1;
                } else {
                    i12 = i6 + 1;
                }
            } else {
                i6 = (-i12) - 1;
                break;
            }
        }
        return i6 >= 0 ? i6 : ~i6;
    }
}
