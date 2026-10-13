package ft;

import et.o;
import et.s;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import okio.Buffer;

/* loaded from: classes.dex */
public abstract class a {
    public static final byte[] a;

    static {
        Intrinsics.checkNotNullParameter("0123456789abcdef", "<this>");
        byte[] bytes = "0123456789abcdef".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        a = bytes;
    }

    public static final boolean a(s segment, int i5, byte[] bytes, int i6) {
        Intrinsics.checkNotNullParameter(segment, "segment");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        int i10 = segment.f8276c;
        byte[] bArr = segment.a;
        for (int i11 = 1; i11 < i6; i11++) {
            if (i5 == i10) {
                segment = segment.f8279f;
                Intrinsics.checkNotNull(segment);
                bArr = segment.a;
                i5 = segment.f8275b;
                i10 = segment.f8276c;
            }
            if (bArr[i5] != bytes[i11]) {
                return false;
            }
            i5++;
        }
        return true;
    }

    public static final String b(Buffer buffer, long j) {
        Intrinsics.checkNotNullParameter(buffer, "<this>");
        if (j > 0) {
            long j5 = j - 1;
            if (buffer.o(j5) == ((byte) 13)) {
                String C = buffer.C(j5, Charsets.UTF_8);
                buffer.skip(2L);
                return C;
            }
        }
        String C2 = buffer.C(j, Charsets.UTF_8);
        buffer.skip(1L);
        return C2;
    }

    public static final int c(Buffer buffer, o options, boolean z5) {
        int i5;
        int i6;
        int i10;
        s sVar;
        int i11;
        Intrinsics.checkNotNullParameter(buffer, "<this>");
        Intrinsics.checkNotNullParameter(options, "options");
        s sVar2 = buffer.f16113d;
        if (sVar2 == null) {
            return z5 ? -2 : -1;
        }
        byte[] bArr = sVar2.a;
        int i12 = sVar2.f8275b;
        int i13 = sVar2.f8276c;
        int[] iArr = options.f8262i;
        s sVar3 = sVar2;
        int i14 = -1;
        int i15 = 0;
        loop0: while (true) {
            int i16 = i15 + 1;
            int i17 = iArr[i15];
            int i18 = i15 + 2;
            int i19 = iArr[i16];
            if (i19 != -1) {
                i14 = i19;
            }
            if (sVar3 == null) {
                break;
            }
            if (i17 >= 0) {
                int i20 = i12 + 1;
                int i21 = bArr[i12] & 255;
                int i22 = i18 + i17;
                while (i18 != i22) {
                    if (i21 == iArr[i18]) {
                        i5 = iArr[i18 + i17];
                        if (i20 == i13) {
                            sVar3 = sVar3.f8279f;
                            Intrinsics.checkNotNull(sVar3);
                            int i23 = sVar3.f8275b;
                            byte[] bArr2 = sVar3.a;
                            i6 = sVar3.f8276c;
                            if (sVar3 == sVar2) {
                                i10 = i23;
                                bArr = bArr2;
                                sVar3 = null;
                            } else {
                                i10 = i23;
                                bArr = bArr2;
                            }
                        } else {
                            i6 = i13;
                            i10 = i20;
                        }
                        if (i5 >= 0) {
                            return i5;
                        }
                        int i24 = i6;
                        i15 = -i5;
                        i12 = i10;
                        i13 = i24;
                    } else {
                        i18++;
                    }
                }
                break loop0;
            }
            int i25 = (i17 * (-1)) + i18;
            while (true) {
                int i26 = i12 + 1;
                int i27 = i18 + 1;
                if ((bArr[i12] & 255) != iArr[i18]) {
                    break loop0;
                }
                boolean z6 = i27 == i25;
                if (i26 == i13) {
                    Intrinsics.checkNotNull(sVar3);
                    s sVar4 = sVar3.f8279f;
                    Intrinsics.checkNotNull(sVar4);
                    i10 = sVar4.f8275b;
                    byte[] bArr3 = sVar4.a;
                    i11 = sVar4.f8276c;
                    if (sVar4 != sVar2) {
                        sVar = sVar4;
                        bArr = bArr3;
                    } else {
                        if (!z6) {
                            break loop0;
                        }
                        bArr = bArr3;
                        sVar = null;
                    }
                } else {
                    sVar = sVar3;
                    i11 = i13;
                    i10 = i26;
                }
                if (z6) {
                    i5 = iArr[i27];
                    int i28 = i11;
                    sVar3 = sVar;
                    i6 = i28;
                    break;
                }
                i12 = i10;
                i13 = i11;
                sVar3 = sVar;
                i18 = i27;
            }
        }
        if (z5) {
            return -2;
        }
        return i14;
    }
}
