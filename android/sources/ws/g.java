package ws;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;
import okio.ByteString;

/* loaded from: classes3.dex */
public abstract class g {
    public static final ByteString a;

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f20089b;

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f20090c;

    /* renamed from: d, reason: collision with root package name */
    public static final String[] f20091d;

    static {
        ByteString byteString = ByteString.f16115v;
        a = io.sentry.hints.j.D("PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
        f20089b = new String[]{"DATA", "HEADERS", "PRIORITY", "RST_STREAM", "SETTINGS", "PUSH_PROMISE", "PING", "GOAWAY", "WINDOW_UPDATE", "CONTINUATION"};
        f20090c = new String[64];
        String[] strArr = new String[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        int i5 = 0;
        for (int i6 = 0; i6 < 256; i6++) {
            String binaryString = Integer.toBinaryString(i6);
            Intrinsics.checkNotNullExpressionValue(binaryString, "toBinaryString(it)");
            strArr[i6] = kotlin.text.x.m(qs.b.h("%8s", binaryString), ' ', '0');
        }
        f20091d = strArr;
        String[] strArr2 = f20090c;
        strArr2[0] = "";
        strArr2[1] = "END_STREAM";
        int[] iArr = {1};
        strArr2[8] = "PADDED";
        int i10 = iArr[0];
        strArr2[i10 | 8] = Intrinsics.stringPlus(strArr2[i10], "|PADDED");
        strArr2[4] = "END_HEADERS";
        strArr2[32] = "PRIORITY";
        strArr2[36] = "END_HEADERS|PRIORITY";
        int[] iArr2 = {4, 32, 36};
        int i11 = 0;
        while (i11 < 3) {
            int i12 = iArr2[i11];
            i11++;
            int i13 = iArr[0];
            String[] strArr3 = f20090c;
            int i14 = i13 | i12;
            StringBuilder sb2 = new StringBuilder();
            sb2.append((Object) strArr3[i13]);
            sb2.append('|');
            sb2.append((Object) strArr3[i12]);
            strArr3[i14] = sb2.toString();
            strArr3[i14 | 8] = ((Object) strArr3[i13]) + '|' + ((Object) strArr3[i12]) + "|PADDED";
        }
        int length = f20090c.length;
        while (i5 < length) {
            int i15 = i5 + 1;
            String[] strArr4 = f20090c;
            if (strArr4[i5] == null) {
                strArr4[i5] = f20091d[i5];
            }
            i5 = i15;
        }
    }

    public static String a(int i5, int i6, int i10, int i11, boolean z5) {
        String str;
        String str2;
        String[] strArr = f20089b;
        String h6 = i10 < strArr.length ? strArr[i10] : qs.b.h("0x%02x", Integer.valueOf(i10));
        if (i11 == 0) {
            str = "";
        } else {
            String[] strArr2 = f20091d;
            if (i10 != 2 && i10 != 3) {
                if (i10 == 4 || i10 == 6) {
                    str = i11 == 1 ? "ACK" : strArr2[i11];
                } else if (i10 != 7 && i10 != 8) {
                    String[] strArr3 = f20090c;
                    if (i11 < strArr3.length) {
                        str2 = strArr3[i11];
                        Intrinsics.checkNotNull(str2);
                    } else {
                        str2 = strArr2[i11];
                    }
                    str = (i10 != 5 || (i11 & 4) == 0) ? (i10 != 0 || (i11 & 32) == 0) ? str2 : kotlin.text.x.l(str2, "PRIORITY", "COMPRESSED", false) : kotlin.text.x.l(str2, "HEADERS", "PUSH_PROMISE", false);
                }
            }
            str = strArr2[i11];
        }
        return qs.b.h("%s 0x%08x %5d %-13s %s", z5 ? "<<" : ">>", Integer.valueOf(i5), Integer.valueOf(i6), h6, str);
    }
}
