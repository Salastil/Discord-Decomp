package vd;

import android.text.TextUtils;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import hc.f0;
import java.util.ArrayList;
import java.util.Collections;
import ke.d0;
import nd.b1;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes3.dex */
public final class f extends d {

    /* renamed from: f, reason: collision with root package name */
    public Format f19364f;

    /* JADX WARN: Removed duplicated region for block: B:45:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x00b8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ArrayList m(String str) {
        byte[][] bArr;
        byte[] bArr2 = ke.b.a;
        ArrayList arrayList = new ArrayList();
        if (!TextUtils.isEmpty(str)) {
            int i5 = d0.a;
            int length = str.length() / 2;
            byte[] bArr3 = new byte[length];
            for (int i6 = 0; i6 < length; i6++) {
                int i10 = i6 * 2;
                bArr3[i6] = (byte) (Character.digit(str.charAt(i10 + 1), 16) + (Character.digit(str.charAt(i10), 16) << 4));
            }
            if (length > 4) {
                for (int i11 = 0; i11 < 4; i11++) {
                    if (bArr3[i11] == bArr2[i11]) {
                    }
                }
                ArrayList arrayList2 = new ArrayList();
                int i12 = 0;
                do {
                    arrayList2.add(Integer.valueOf(i12));
                    i12 += 4;
                    int i13 = length - 4;
                    while (true) {
                        if (i12 > i13) {
                            i12 = -1;
                            break;
                        }
                        if (length - i12 > 4) {
                            for (int i14 = 0; i14 < 4; i14++) {
                                if (bArr3[i12 + i14] != bArr2[i14]) {
                                    break;
                                }
                            }
                            break;
                        }
                        i12++;
                    }
                } while (i12 != -1);
                byte[][] bArr4 = new byte[arrayList2.size()][];
                int i15 = 0;
                while (i15 < arrayList2.size()) {
                    int intValue = ((Integer) arrayList2.get(i15)).intValue();
                    int intValue2 = (i15 < arrayList2.size() + (-1) ? ((Integer) arrayList2.get(i15 + 1)).intValue() : length) - intValue;
                    byte[] bArr5 = new byte[intValue2];
                    System.arraycopy(bArr3, intValue, bArr5, 0, intValue2);
                    bArr4[i15] = bArr5;
                    i15++;
                }
                bArr = bArr4;
                if (bArr != null) {
                    arrayList.add(bArr3);
                    return arrayList;
                }
                Collections.addAll(arrayList, bArr);
            }
            bArr = null;
            if (bArr != null) {
            }
        }
        return arrayList;
    }

    @Override // vd.d
    public final Object b() {
        return this.f19364f;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r6v8, types: [java.util.List] */
    @Override // vd.d
    public final void j(XmlPullParser xmlPullParser) {
        f0 f0Var = new f0();
        String attributeValue = xmlPullParser.getAttributeValue(null, "FourCC");
        if (attributeValue == null) {
            throw new b1("FourCC", 2);
        }
        String str = (attributeValue.equalsIgnoreCase("H264") || attributeValue.equalsIgnoreCase("X264") || attributeValue.equalsIgnoreCase("AVC1") || attributeValue.equalsIgnoreCase("DAVC")) ? "video/avc" : (attributeValue.equalsIgnoreCase("AAC") || attributeValue.equalsIgnoreCase("AACL") || attributeValue.equalsIgnoreCase("AACH") || attributeValue.equalsIgnoreCase("AACP")) ? "audio/mp4a-latm" : (attributeValue.equalsIgnoreCase("TTML") || attributeValue.equalsIgnoreCase("DFXP")) ? "application/ttml+xml" : (attributeValue.equalsIgnoreCase("ac-3") || attributeValue.equalsIgnoreCase("dac3")) ? "audio/ac3" : (attributeValue.equalsIgnoreCase("ec-3") || attributeValue.equalsIgnoreCase("dec3")) ? "audio/eac3" : attributeValue.equalsIgnoreCase("dtsc") ? "audio/vnd.dts" : (attributeValue.equalsIgnoreCase("dtsh") || attributeValue.equalsIgnoreCase("dtsl")) ? "audio/vnd.dts.hd" : attributeValue.equalsIgnoreCase("dtse") ? "audio/vnd.dts.hd;profile=lbr" : attributeValue.equalsIgnoreCase("opus") ? "audio/opus" : null;
        int intValue = ((Integer) c("Type")).intValue();
        if (intValue == 2) {
            ArrayList m5 = m(xmlPullParser.getAttributeValue(null, "CodecPrivateData"));
            f0Var.j = "video/mp4";
            f0Var.f9682p = d.i(xmlPullParser, "MaxWidth");
            f0Var.f9683q = d.i(xmlPullParser, "MaxHeight");
            f0Var.f9679m = m5;
        } else {
            int i5 = 0;
            if (intValue == 1) {
                if (str == null) {
                    str = "audio/mp4a-latm";
                }
                int i6 = d.i(xmlPullParser, "Channels");
                int i10 = d.i(xmlPullParser, "SamplingRate");
                ArrayList m6 = m(xmlPullParser.getAttributeValue(null, "CodecPrivateData"));
                boolean isEmpty = m6.isEmpty();
                ArrayList arrayList = m6;
                if (isEmpty) {
                    arrayList = m6;
                    if ("audio/mp4a-latm".equals(str)) {
                        int i11 = -1;
                        int i12 = 0;
                        while (true) {
                            int[] iArr = jc.a.a;
                            if (i12 >= 13) {
                                break;
                            }
                            if (i10 == iArr[i12]) {
                                i11 = i12;
                            }
                            i12++;
                        }
                        int i13 = -1;
                        while (true) {
                            int[] iArr2 = jc.a.f12493b;
                            if (i5 >= 16) {
                                break;
                            }
                            if (i6 == iArr2[i5]) {
                                i13 = i5;
                            }
                            i5++;
                        }
                        if (i10 == -1 || i13 == -1) {
                            throw new IllegalArgumentException(a3.e.f(i10, i6, "Invalid sample rate or number of channels: ", ", "));
                        }
                        arrayList = Collections.singletonList(jc.a.a(2, i11, i13));
                    }
                }
                f0Var.j = "audio/mp4";
                f0Var.f9690x = i6;
                f0Var.f9691y = i10;
                f0Var.f9679m = arrayList;
            } else if (intValue == 3) {
                String str2 = (String) c("Subtype");
                if (str2 != null) {
                    if (str2.equals("CAPT")) {
                        i5 = 64;
                    } else if (str2.equals("DESC")) {
                        i5 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    }
                }
                f0Var.j = "application/mp4";
                f0Var.f9673e = i5;
            } else {
                f0Var.j = "application/mp4";
            }
        }
        f0Var.a = xmlPullParser.getAttributeValue(null, "Index");
        f0Var.f9670b = (String) c("Name");
        f0Var.k = str;
        f0Var.f9674f = d.i(xmlPullParser, "Bitrate");
        f0Var.f9671c = (String) c("Language");
        this.f19364f = new Format(f0Var);
    }
}
