package ke;

import android.media.MediaFormat;
import android.net.Uri;
import android.opengl.GLES20;
import android.opengl.GLU;
import android.os.Bundle;
import android.os.SystemClock;
import android.os.Trace;
import android.text.TextUtils;
import android.util.Log;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fi.e0;
import fi.r0;
import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes3.dex */
public abstract class b {
    public static final byte[] a = {0, 0, 0, 1};

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f13276b = {"", "A", "B", "C"};

    /* renamed from: c, reason: collision with root package name */
    public static final Object f13277c = new Object();

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f13278d = {0, 0, 0, 1};

    /* renamed from: e, reason: collision with root package name */
    public static final float[] f13279e = {1.0f, 1.0f, 1.0909091f, 0.90909094f, 1.4545455f, 1.2121212f, 2.1818182f, 1.8181819f, 2.909091f, 2.4242425f, 1.6363636f, 1.3636364f, 1.939394f, 1.6161616f, 1.3333334f, 1.5f, 2.0f};

    /* renamed from: f, reason: collision with root package name */
    public static final Object f13280f = new Object();

    /* renamed from: g, reason: collision with root package name */
    public static int[] f13281g = new int[10];

    /* renamed from: h, reason: collision with root package name */
    public static final Object f13282h = new Object();

    /* renamed from: i, reason: collision with root package name */
    public static final Object f13283i = new Object();
    public static boolean j;
    public static long k;

    public static int A(Uri uri) {
        String lastPathSegment = uri.getLastPathSegment();
        if (lastPathSegment == null) {
            return -1;
        }
        if (lastPathSegment.endsWith(".ac3") || lastPathSegment.endsWith(".ec3")) {
            return 0;
        }
        if (lastPathSegment.endsWith(".ac4")) {
            return 1;
        }
        if (lastPathSegment.endsWith(".adts") || lastPathSegment.endsWith(".aac")) {
            return 2;
        }
        if (lastPathSegment.endsWith(".amr")) {
            return 3;
        }
        if (lastPathSegment.endsWith(".flac")) {
            return 4;
        }
        if (lastPathSegment.endsWith(".flv")) {
            return 5;
        }
        if (lastPathSegment.endsWith(".mid") || lastPathSegment.endsWith(".midi") || lastPathSegment.endsWith(".smf")) {
            return 15;
        }
        if (lastPathSegment.startsWith(".mk", lastPathSegment.length() - 4) || lastPathSegment.endsWith(".webm")) {
            return 6;
        }
        if (lastPathSegment.endsWith(".mp3")) {
            return 7;
        }
        if (lastPathSegment.endsWith(".mp4") || lastPathSegment.startsWith(".m4", lastPathSegment.length() - 4) || lastPathSegment.startsWith(".mp4", lastPathSegment.length() - 5) || lastPathSegment.startsWith(".cmf", lastPathSegment.length() - 5)) {
            return 8;
        }
        if (lastPathSegment.startsWith(".og", lastPathSegment.length() - 4) || lastPathSegment.endsWith(".opus")) {
            return 9;
        }
        if (lastPathSegment.endsWith(".ps") || lastPathSegment.endsWith(".mpeg") || lastPathSegment.endsWith(".mpg") || lastPathSegment.endsWith(".m2p")) {
            return 10;
        }
        if (lastPathSegment.endsWith(".ts") || lastPathSegment.startsWith(".ts", lastPathSegment.length() - 4)) {
            return 11;
        }
        if (lastPathSegment.endsWith(".wav") || lastPathSegment.endsWith(".wave")) {
            return 12;
        }
        if (lastPathSegment.endsWith(".vtt") || lastPathSegment.endsWith(".webvtt")) {
            return 13;
        }
        if (lastPathSegment.endsWith(".jpg") || lastPathSegment.endsWith(".jpeg")) {
            return 14;
        }
        return lastPathSegment.endsWith(".avi") ? 16 : -1;
    }

    public static boolean B(XmlPullParser xmlPullParser, String str) {
        return xmlPullParser.getEventType() == 3 && xmlPullParser.getName().equals(str);
    }

    public static boolean C(XmlPullParser xmlPullParser, String str) {
        return xmlPullParser.getEventType() == 2 && xmlPullParser.getName().equals(str);
    }

    public static void D(MediaFormat mediaFormat, String str, int i5) {
        if (i5 != -1) {
            mediaFormat.setInteger(str, i5);
        }
    }

    public static p E(byte[] bArr, int i5, int i6) {
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        int l6;
        int i18 = 2;
        v vVar = new v(bArr, i5 + 2, i6);
        int i19 = 4;
        vVar.s(4);
        int i20 = vVar.i(3);
        vVar.r();
        int i21 = vVar.i(2);
        boolean h6 = vVar.h();
        int i22 = vVar.i(5);
        int i23 = 0;
        for (int i24 = 0; i24 < 32; i24++) {
            if (vVar.h()) {
                i23 |= 1 << i24;
            }
        }
        int i25 = 6;
        int[] iArr = new int[6];
        for (int i26 = 0; i26 < 6; i26++) {
            iArr[i26] = vVar.i(8);
        }
        int i27 = i23;
        int i28 = vVar.i(8);
        int i29 = 0;
        for (int i30 = 0; i30 < i20; i30++) {
            if (vVar.h()) {
                i29 += 89;
            }
            if (vVar.h()) {
                i29 += 8;
            }
        }
        vVar.s(i29);
        if (i20 > 0) {
            vVar.s((8 - i20) * 2);
        }
        vVar.l();
        int l7 = vVar.l();
        if (l7 == 3) {
            vVar.r();
        }
        int l10 = vVar.l();
        int l11 = vVar.l();
        if (vVar.h()) {
            int l12 = vVar.l();
            int l13 = vVar.l();
            int l14 = vVar.l();
            int l15 = vVar.l();
            l10 -= (l12 + l13) * ((l7 == 1 || l7 == 2) ? 2 : 1);
            l11 -= (l14 + l15) * (l7 == 1 ? 2 : 1);
        }
        vVar.l();
        vVar.l();
        int l16 = vVar.l();
        for (int i31 = vVar.h() ? 0 : i20; i31 <= i20; i31++) {
            vVar.l();
            vVar.l();
            vVar.l();
        }
        vVar.l();
        vVar.l();
        vVar.l();
        vVar.l();
        vVar.l();
        vVar.l();
        if (vVar.h() && vVar.h()) {
            int i32 = 0;
            while (i32 < i19) {
                int i33 = 0;
                while (i33 < i25) {
                    if (vVar.h()) {
                        int min = Math.min(64, 1 << ((i32 << 1) + 4));
                        if (i32 > 1) {
                            vVar.m();
                        }
                        for (int i34 = 0; i34 < min; i34++) {
                            vVar.m();
                        }
                    } else {
                        vVar.l();
                    }
                    i33 += i32 == 3 ? 3 : 1;
                    i25 = 6;
                }
                i32++;
                i19 = 4;
                i25 = 6;
            }
        }
        vVar.s(2);
        if (vVar.h()) {
            vVar.s(8);
            vVar.l();
            vVar.l();
            vVar.r();
        }
        int l17 = vVar.l();
        int i35 = 0;
        int[] iArr2 = new int[0];
        int[] iArr3 = new int[0];
        int i36 = -1;
        int i37 = -1;
        int i38 = -1;
        while (i35 < l17) {
            if (i35 == 0 || !vVar.h()) {
                i14 = i18;
                i15 = l17;
                i16 = i35;
                i17 = l16;
                l6 = vVar.l();
                int l18 = vVar.l();
                int[] iArr4 = new int[l6];
                int i39 = 0;
                while (i39 < l6) {
                    iArr4[i39] = (i39 > 0 ? iArr4[i39 - 1] : 0) - (vVar.l() + 1);
                    vVar.r();
                    i39++;
                }
                int[] iArr5 = new int[l18];
                int i40 = 0;
                while (i40 < l18) {
                    iArr5[i40] = vVar.l() + 1 + (i40 > 0 ? iArr5[i40 - 1] : 0);
                    vVar.r();
                    i40++;
                }
                iArr2 = iArr4;
                iArr3 = iArr5;
                i37 = l18;
            } else {
                i14 = i18;
                int i41 = i38 + i37;
                int l19 = (1 - ((vVar.h() ? 1 : 0) * 2)) * (vVar.l() + 1);
                i15 = l17;
                int i42 = i41 + 1;
                i16 = i35;
                boolean[] zArr = new boolean[i42];
                for (int i43 = 0; i43 <= i41; i43++) {
                    if (vVar.h()) {
                        zArr[i43] = true;
                    } else {
                        zArr[i43] = vVar.h();
                    }
                }
                int[] iArr6 = new int[i42];
                int[] iArr7 = new int[i42];
                int i44 = 0;
                for (int i45 = i37 - 1; i45 >= 0; i45--) {
                    int i46 = iArr3[i45] + l19;
                    if (i46 < 0 && zArr[i38 + i45]) {
                        iArr6[i44] = i46;
                        i44++;
                    }
                }
                if (l19 < 0 && zArr[i41]) {
                    iArr6[i44] = l19;
                    i44++;
                }
                l6 = i44;
                i17 = l16;
                for (int i47 = 0; i47 < i38; i47++) {
                    int i48 = iArr2[i47] + l19;
                    if (i48 < 0 && zArr[i47]) {
                        iArr6[l6] = i48;
                        l6++;
                    }
                }
                int[] copyOf = Arrays.copyOf(iArr6, l6);
                int i49 = 0;
                for (int i50 = i38 - 1; i50 >= 0; i50--) {
                    int i51 = iArr2[i50] + l19;
                    if (i51 > 0 && zArr[i50]) {
                        iArr7[i49] = i51;
                        i49++;
                    }
                }
                if (l19 > 0 && zArr[i41]) {
                    iArr7[i49] = l19;
                    i49++;
                }
                int i52 = i49;
                for (int i53 = 0; i53 < i37; i53++) {
                    int i54 = iArr3[i53] + l19;
                    if (i54 > 0 && zArr[i38 + i53]) {
                        iArr7[i52] = i54;
                        i52++;
                    }
                }
                iArr3 = Arrays.copyOf(iArr7, i52);
                iArr2 = copyOf;
                i37 = i52;
            }
            i38 = l6;
            i35 = i16 + 1;
            i18 = i14;
            l17 = i15;
            l16 = i17;
        }
        int i55 = i18;
        int i56 = l16;
        if (vVar.h()) {
            int l20 = vVar.l();
            for (int i57 = 0; i57 < l20; i57++) {
                vVar.s(i56 + 5);
            }
        }
        int i58 = i55;
        vVar.s(i58);
        float f2 = 1.0f;
        if (vVar.h()) {
            if (vVar.h()) {
                int i59 = vVar.i(8);
                if (i59 == 255) {
                    int i60 = vVar.i(16);
                    int i61 = vVar.i(16);
                    if (i60 != 0 && i61 != 0) {
                        f2 = i60 / i61;
                    }
                } else if (i59 < 17) {
                    f2 = f13279e[i59];
                } else {
                    com.discord.chat.bridge.botuikit.a.q(i59, "Unexpected aspect_ratio_idc value: ", "NalUnitUtil");
                }
            }
            if (vVar.h()) {
                vVar.r();
            }
            if (vVar.h()) {
                vVar.s(3);
                if (vVar.h()) {
                    i58 = 1;
                }
                if (vVar.h()) {
                    int i62 = vVar.i(8);
                    int i63 = vVar.i(8);
                    vVar.s(8);
                    i36 = le.b.b(i62);
                    i13 = le.b.c(i63);
                } else {
                    i13 = -1;
                }
            } else {
                i58 = -1;
                i13 = -1;
            }
            if (vVar.h()) {
                vVar.l();
                vVar.l();
            }
            vVar.r();
            if (vVar.h()) {
                l11 *= 2;
            }
            i10 = l11;
            i11 = i36;
            i12 = i58;
            i36 = i13;
        } else {
            i10 = l11;
            i11 = -1;
            i12 = -1;
        }
        return new p(i21, h6, i22, i27, iArr, i28, l10, i10, f2, i11, i12, i36);
    }

    public static r F(byte[] bArr, int i5, int i6) {
        int l6;
        boolean h6;
        v vVar;
        int i10;
        boolean z5;
        int i11;
        int i12;
        int i13;
        float f2;
        int i14;
        int i15;
        v vVar2 = new v(bArr, i5 + 1, i6);
        int i16 = vVar2.i(8);
        int i17 = vVar2.i(8);
        int i18 = vVar2.i(8);
        int l7 = vVar2.l();
        if (i16 == 100 || i16 == 110 || i16 == 122 || i16 == 244 || i16 == 44 || i16 == 83 || i16 == 86 || i16 == 118 || i16 == 128 || i16 == 138) {
            l6 = vVar2.l();
            h6 = l6 == 3 ? vVar2.h() : false;
            vVar2.l();
            vVar2.l();
            vVar2.r();
            if (vVar2.h()) {
                int i19 = l6 != 3 ? 8 : 12;
                int i20 = 0;
                while (i20 < i19) {
                    if (vVar2.h()) {
                        int i21 = i20 < 6 ? 16 : 64;
                        int i22 = 8;
                        int i23 = 8;
                        for (int i24 = 0; i24 < i21; i24++) {
                            if (i22 != 0) {
                                i22 = ((vVar2.m() + i23) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) % IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                            }
                            if (i22 != 0) {
                                i23 = i22;
                            }
                        }
                    }
                    i20++;
                }
            }
        } else {
            l6 = 1;
            h6 = false;
        }
        int l10 = vVar2.l() + 4;
        int l11 = vVar2.l();
        if (l11 == 0) {
            i11 = vVar2.l() + 4;
            vVar = vVar2;
            i10 = 16;
            z5 = false;
        } else {
            if (l11 == 1) {
                boolean h7 = vVar2.h();
                vVar2.m();
                vVar2.m();
                i10 = 16;
                long l12 = vVar2.l();
                vVar = vVar2;
                for (int i25 = 0; i25 < l12; i25++) {
                    vVar.l();
                }
                z5 = h7;
            } else {
                vVar = vVar2;
                i10 = 16;
                z5 = false;
            }
            i11 = 0;
        }
        vVar.l();
        vVar.r();
        int l13 = vVar.l() + 1;
        int l14 = vVar.l() + 1;
        boolean h10 = vVar.h();
        int i26 = 2 - (h10 ? 1 : 0);
        int i27 = l14 * i26;
        if (!h10) {
            vVar.r();
        }
        vVar.r();
        int i28 = l13 * 16;
        int i29 = i27 * 16;
        if (vVar.h()) {
            int l15 = vVar.l();
            int l16 = vVar.l();
            int l17 = vVar.l();
            int l18 = vVar.l();
            if (l6 == 0) {
                i15 = 1;
            } else {
                i15 = l6 == 3 ? 1 : 2;
                i26 *= l6 == 1 ? 2 : 1;
            }
            i28 -= (l15 + l16) * i15;
            i29 -= (l17 + l18) * i26;
        }
        int i30 = -1;
        float f10 = 1.0f;
        if (vVar.h()) {
            if (vVar.h()) {
                int i31 = vVar.i(8);
                if (i31 == 255) {
                    int i32 = i10;
                    int i33 = vVar.i(i32);
                    int i34 = vVar.i(i32);
                    if (i33 != 0 && i34 != 0) {
                        f10 = i33 / i34;
                    }
                } else if (i31 < 17) {
                    f10 = f13279e[i31];
                } else {
                    com.discord.chat.bridge.botuikit.a.q(i31, "Unexpected aspect_ratio_idc value: ", "NalUnitUtil");
                }
            }
            if (vVar.h()) {
                vVar.r();
            }
            if (vVar.h()) {
                vVar.s(3);
                int i35 = vVar.h() ? 1 : 2;
                if (vVar.h()) {
                    int i36 = vVar.i(8);
                    int i37 = vVar.i(8);
                    vVar.s(8);
                    i30 = le.b.b(i36);
                    i13 = le.b.c(i37);
                    i12 = i11;
                } else {
                    i12 = i11;
                    i13 = -1;
                }
                f2 = f10;
                i14 = i35;
                return new r(i16, i17, i18, l7, i28, i29, f2, h6, h10, l10, l11, i12, z5, i30, i14, i13);
            }
        }
        i12 = i11;
        i13 = -1;
        f2 = f10;
        i14 = -1;
        return new r(i16, i17, i18, l7, i28, i29, f2, h6, h10, l10, l11, i12, z5, i30, i14, i13);
    }

    public static long G(byte[] bArr, int i5) {
        int i6 = bArr[i5];
        int i10 = bArr[i5 + 1];
        int i11 = bArr[i5 + 2];
        int i12 = bArr[i5 + 3];
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i6 = (i6 & 127) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        if ((i10 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i10 = (i10 & 127) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i11 = (i11 & 127) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        if ((i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 128) {
            i12 = (i12 & 127) + IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        }
        return (i6 << 24) + (i10 << 16) + (i11 << 8) + i12;
    }

    public static long H(byte[] bArr, int i5) {
        long G = G(bArr, i5);
        long G2 = G(bArr, i5 + 4);
        if (G == 0 && G2 == 0) {
            return 0L;
        }
        return ((G2 * 1000) / 4294967296L) + ((G - 2208988800L) * 1000);
    }

    public static String I(int i5, int i6, StringBuilder sb2) {
        int i10;
        int i11;
        if (i5 >= i6) {
            return sb2.toString();
        }
        if (sb2.charAt(i5) == '/') {
            i5++;
        }
        int i12 = i5;
        int i13 = i12;
        while (i12 <= i6) {
            if (i12 == i6) {
                i10 = i12;
            } else if (sb2.charAt(i12) == '/') {
                i10 = i12 + 1;
            } else {
                i12++;
            }
            int i14 = i13 + 1;
            if (i12 == i14 && sb2.charAt(i13) == '.') {
                sb2.delete(i13, i10);
                i6 -= i10 - i13;
            } else {
                if (i12 == i13 + 2 && sb2.charAt(i13) == '.' && sb2.charAt(i14) == '.') {
                    i11 = sb2.lastIndexOf("/", i13 - 2) + 1;
                    int i15 = i11 > i5 ? i11 : i5;
                    sb2.delete(i15, i10);
                    i6 -= i10 - i15;
                } else {
                    i11 = i12 + 1;
                }
                i13 = i11;
            }
            i12 = i13;
        }
        return sb2.toString();
    }

    public static String J(String str, String str2) {
        StringBuilder sb2 = new StringBuilder();
        if (str == null) {
            str = "";
        }
        if (str2 == null) {
            str2 = "";
        }
        int[] x5 = x(str2);
        if (x5[0] != -1) {
            sb2.append(str2);
            I(x5[1], x5[2], sb2);
            return sb2.toString();
        }
        int[] x10 = x(str);
        if (x5[3] == 0) {
            sb2.append((CharSequence) str, 0, x10[3]);
            sb2.append(str2);
            return sb2.toString();
        }
        if (x5[2] == 0) {
            sb2.append((CharSequence) str, 0, x10[2]);
            sb2.append(str2);
            return sb2.toString();
        }
        int i5 = x5[1];
        if (i5 != 0) {
            int i6 = x10[0] + 1;
            sb2.append((CharSequence) str, 0, i6);
            sb2.append(str2);
            return I(x5[1] + i6, i6 + x5[2], sb2);
        }
        if (str2.charAt(i5) == '/') {
            sb2.append((CharSequence) str, 0, x10[1]);
            sb2.append(str2);
            int i10 = x10[1];
            return I(i10, x5[2] + i10, sb2);
        }
        int i11 = x10[0] + 2;
        int i12 = x10[1];
        if (i11 >= i12 || i12 != x10[2]) {
            int lastIndexOf = str.lastIndexOf(47, x10[2] - 1);
            int i13 = lastIndexOf == -1 ? x10[1] : lastIndexOf + 1;
            sb2.append((CharSequence) str, 0, i13);
            sb2.append(str2);
            return I(x10[1], i13 + x5[2], sb2);
        }
        sb2.append((CharSequence) str, 0, i12);
        sb2.append('/');
        sb2.append(str2);
        int i14 = x10[1];
        return I(i14, x5[2] + i14 + 1, sb2);
    }

    public static Uri K(String str, String str2) {
        return Uri.parse(J(str, str2));
    }

    public static void L(MediaFormat mediaFormat, List list) {
        for (int i5 = 0; i5 < list.size(); i5++) {
            mediaFormat.setByteBuffer(k0.d.i(i5, "csd-"), ByteBuffer.wrap((byte[]) list.get(i5)));
        }
    }

    public static int M(byte[] bArr, int i5) {
        int i6;
        synchronized (f13280f) {
            int i10 = 0;
            int i11 = 0;
            while (i10 < i5) {
                while (true) {
                    if (i10 >= i5 - 2) {
                        i10 = i5;
                        break;
                    }
                    try {
                        if (bArr[i10] == 0 && bArr[i10 + 1] == 0 && bArr[i10 + 2] == 3) {
                            break;
                        }
                        i10++;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                if (i10 < i5) {
                    int[] iArr = f13281g;
                    if (iArr.length <= i11) {
                        f13281g = Arrays.copyOf(iArr, iArr.length * 2);
                    }
                    f13281g[i11] = i10;
                    i10 += 3;
                    i11++;
                }
            }
            i6 = i5 - i11;
            int i12 = 0;
            int i13 = 0;
            for (int i14 = 0; i14 < i11; i14++) {
                int i15 = f13281g[i14] - i13;
                System.arraycopy(bArr, i13, bArr, i12, i15);
                int i16 = i12 + i15;
                int i17 = i16 + 1;
                bArr[i16] = 0;
                i12 = i16 + 2;
                bArr[i17] = 0;
                i13 += i15 + 3;
            }
            System.arraycopy(bArr, i13, bArr, i12, i6 - i12);
        }
        return i6;
    }

    public static void N(String str, String str2) {
        synchronized (f13277c) {
            Log.w(str, str2);
        }
    }

    public static void O(String str, String str2, Exception exc) {
        N(str, b(str2, exc));
    }

    public static long a() {
        char c6;
        long j5;
        synchronized (f13283i) {
        }
        InetAddress byName = InetAddress.getByName("time.android.com");
        DatagramSocket datagramSocket = new DatagramSocket();
        try {
            datagramSocket.setSoTimeout(10000);
            byte[] bArr = new byte[48];
            DatagramPacket datagramPacket = new DatagramPacket(bArr, 48, byName, 123);
            bArr[0] = 27;
            long currentTimeMillis = System.currentTimeMillis();
            long elapsedRealtime = SystemClock.elapsedRealtime();
            if (currentTimeMillis == 0) {
                Arrays.fill(bArr, 40, 48, (byte) 0);
                c6 = 0;
                j5 = currentTimeMillis;
            } else {
                long j7 = currentTimeMillis / 1000;
                long j10 = currentTimeMillis - (j7 * 1000);
                c6 = 0;
                j5 = currentTimeMillis;
                bArr[40] = (byte) (r14 >> 24);
                bArr[41] = (byte) (r14 >> 16);
                bArr[42] = (byte) (r14 >> 8);
                bArr[43] = (byte) (j7 + 2208988800L);
                long j11 = (j10 * 4294967296L) / 1000;
                bArr[44] = (byte) (j11 >> 24);
                bArr[45] = (byte) (j11 >> 16);
                bArr[46] = (byte) (j11 >> 8);
                bArr[47] = (byte) (Math.random() * 255.0d);
            }
            datagramSocket.send(datagramPacket);
            datagramSocket.receive(new DatagramPacket(bArr, 48));
            long elapsedRealtime2 = SystemClock.elapsedRealtime();
            long j12 = (elapsedRealtime2 - elapsedRealtime) + j5;
            byte b10 = bArr[c6];
            int i5 = bArr[1] & 255;
            long H = H(bArr, 24);
            long H2 = H(bArr, 32);
            long H3 = H(bArr, 40);
            n((byte) ((b10 >> 6) & 3), (byte) (b10 & 7), i5, H3);
            long j13 = (j12 + (((H3 - j12) + (H2 - H)) / 2)) - elapsedRealtime2;
            datagramSocket.close();
            return j13;
        } finally {
        }
    }

    public static String b(String str, Throwable th2) {
        String replace;
        synchronized (f13277c) {
            try {
                if (th2 != null) {
                    Throwable th3 = th2;
                    while (true) {
                        if (th3 == null) {
                            replace = Log.getStackTraceString(th2).trim().replace("\t", "    ");
                            break;
                        }
                        if (th3 instanceof UnknownHostException) {
                            replace = "UnknownHostException (no network)";
                        } else {
                            th3 = th3.getCause();
                        }
                    }
                } else {
                    replace = null;
                }
            } finally {
            }
        }
        if (TextUtils.isEmpty(replace)) {
            return str;
        }
        StringBuilder p3 = k0.d.p(str, "\n  ");
        p3.append(replace.replace(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\n  "));
        p3.append('\n');
        return p3.toString();
    }

    public static void c(String str) {
        if (d0.a >= 18) {
            Trace.beginSection(str);
        }
    }

    public static void d(int i5, int i6) {
        GLES20.glBindTexture(i5, i6);
        h();
        GLES20.glTexParameteri(i5, 10240, 9729);
        h();
        GLES20.glTexParameteri(i5, 10241, 9729);
        h();
        GLES20.glTexParameteri(i5, 10242, 33071);
        h();
        GLES20.glTexParameteri(i5, 10243, 33071);
        h();
    }

    public static String e(int i5, boolean z5, int i6, int i10, int[] iArr, int i11) {
        Object[] objArr = {f13276b[i5], Integer.valueOf(i6), Integer.valueOf(i10), Character.valueOf(z5 ? 'H' : 'L'), Integer.valueOf(i11)};
        int i12 = d0.a;
        StringBuilder sb2 = new StringBuilder(String.format(Locale.US, "hvc1.%s%d.%X.%c%d", objArr));
        int length = iArr.length;
        while (length > 0 && iArr[length - 1] == 0) {
            length--;
        }
        for (int i13 = 0; i13 < length; i13++) {
            sb2.append(String.format(".%02X", Integer.valueOf(iArr[i13])));
        }
        return sb2.toString();
    }

    public static void f(String str, boolean z5) {
        if (!z5) {
            throw new IllegalArgumentException(String.valueOf(str));
        }
    }

    public static void g(boolean z5) {
        if (!z5) {
            throw new IllegalArgumentException();
        }
    }

    public static void h() {
        StringBuilder sb2 = new StringBuilder();
        boolean z5 = false;
        while (true) {
            int glGetError = GLES20.glGetError();
            if (glGetError == 0) {
                break;
            }
            if (z5) {
                sb2.append('\n');
            }
            sb2.append("glError: ");
            sb2.append(GLU.gluErrorString(glGetError));
            z5 = true;
        }
        if (z5) {
            throw new h(sb2.toString());
        }
    }

    public static void i(String str, boolean z5) {
        if (!z5) {
            throw new h(str);
        }
    }

    public static void j(int i5, int i6) {
        if (i5 < 0 || i5 >= i6) {
            throw new IndexOutOfBoundsException();
        }
    }

    public static void k(boolean z5) {
        if (!z5) {
            throw new IllegalStateException();
        }
    }

    public static void l(Object obj) {
        if (obj == null) {
            throw new IllegalStateException();
        }
    }

    public static void m(Object obj, String str) {
        if (obj == null) {
            throw new IllegalStateException(str);
        }
    }

    public static void n(byte b10, byte b11, int i5, long j5) {
        if (b10 == 3) {
            throw new IOException("SNTP: Unsynchronized server");
        }
        if (b11 != 4 && b11 != 5) {
            throw new IOException(k0.d.i(b11, "SNTP: Untrusted mode: "));
        }
        if (i5 == 0 || i5 > 15) {
            throw new IOException(k0.d.i(i5, "SNTP: Untrusted stratum: "));
        }
        if (j5 == 0) {
            throw new IOException("SNTP: Zero transmitTime");
        }
    }

    public static void o(boolean[] zArr) {
        zArr[0] = false;
        zArr[1] = false;
        zArr[2] = false;
    }

    public static FloatBuffer p(float[] fArr) {
        return (FloatBuffer) ByteBuffer.allocateDirect(fArr.length * 4).order(ByteOrder.nativeOrder()).asFloatBuffer().put(fArr).flip();
    }

    public static void q(String str, String str2) {
        synchronized (f13277c) {
            Log.d(str, str2);
        }
    }

    public static void r(String str, String str2) {
        synchronized (f13277c) {
            Log.e(str, str2);
        }
    }

    public static void s(String str, String str2, Throwable th2) {
        r(str, b(str2, th2));
    }

    public static void t() {
        if (d0.a >= 18) {
            Trace.endSection();
        }
    }

    public static int u(byte[] bArr, int i5, int i6, boolean[] zArr) {
        int i10 = i6 - i5;
        k(i10 >= 0);
        if (i10 == 0) {
            return i6;
        }
        if (zArr[0]) {
            o(zArr);
            return i5 - 3;
        }
        if (i10 > 1 && zArr[1] && bArr[i5] == 1) {
            o(zArr);
            return i5 - 2;
        }
        if (i10 > 2 && zArr[2] && bArr[i5] == 0 && bArr[i5 + 1] == 1) {
            o(zArr);
            return i5 - 1;
        }
        int i11 = i6 - 1;
        int i12 = i5 + 2;
        while (i12 < i11) {
            byte b10 = bArr[i12];
            if ((b10 & 254) == 0) {
                int i13 = i12 - 2;
                if (bArr[i13] == 0 && bArr[i12 - 1] == 0 && b10 == 1) {
                    o(zArr);
                    return i13;
                }
                i12 -= 2;
            }
            i12 += 3;
        }
        zArr[0] = i10 <= 2 ? !(i10 != 2 ? !(zArr[1] && bArr[i11] == 1) : !(zArr[2] && bArr[i6 + (-2)] == 0 && bArr[i11] == 1)) : bArr[i6 + (-3)] == 0 && bArr[i6 + (-2)] == 0 && bArr[i11] == 1;
        zArr[1] = i10 <= 1 ? zArr[2] && bArr[i11] == 0 : bArr[i6 + (-2)] == 0 && bArr[i11] == 0;
        zArr[2] = bArr[i11] == 0;
        return i6;
    }

    public static r0 v(hc.f fVar, ArrayList arrayList) {
        fi.c0 c0Var = e0.f8656e;
        fi.p.c(4, "initialCapacity");
        Object[] objArr = new Object[4];
        int i5 = 0;
        int i6 = 0;
        boolean z5 = false;
        while (i5 < arrayList.size()) {
            Bundle bundle = (Bundle) arrayList.get(i5);
            bundle.getClass();
            hc.g a10 = fVar.a(bundle);
            a10.getClass();
            int i10 = i6 + 1;
            if (objArr.length < i10) {
                objArr = Arrays.copyOf(objArr, fi.y.d(objArr.length, i10));
            } else if (z5) {
                objArr = (Object[]) objArr.clone();
            } else {
                objArr[i6] = a10;
                i5++;
                i6++;
            }
            z5 = false;
            objArr[i6] = a10;
            i5++;
            i6++;
        }
        return e0.j(i6, objArr);
    }

    public static String w(XmlPullParser xmlPullParser, String str) {
        int attributeCount = xmlPullParser.getAttributeCount();
        for (int i5 = 0; i5 < attributeCount; i5++) {
            if (xmlPullParser.getAttributeName(i5).equals(str)) {
                return xmlPullParser.getAttributeValue(i5);
            }
        }
        return null;
    }

    public static int[] x(String str) {
        int i5;
        int[] iArr = new int[4];
        if (TextUtils.isEmpty(str)) {
            iArr[0] = -1;
            return iArr;
        }
        int length = str.length();
        int indexOf = str.indexOf(35);
        if (indexOf != -1) {
            length = indexOf;
        }
        int indexOf2 = str.indexOf(63);
        if (indexOf2 == -1 || indexOf2 > length) {
            indexOf2 = length;
        }
        int indexOf3 = str.indexOf(47);
        if (indexOf3 == -1 || indexOf3 > indexOf2) {
            indexOf3 = indexOf2;
        }
        int indexOf4 = str.indexOf(58);
        if (indexOf4 > indexOf3) {
            indexOf4 = -1;
        }
        int i6 = indexOf4 + 2;
        if (i6 < indexOf2 && str.charAt(indexOf4 + 1) == '/' && str.charAt(i6) == '/') {
            i5 = str.indexOf(47, indexOf4 + 3);
            if (i5 == -1 || i5 > indexOf2) {
                i5 = indexOf2;
            }
        } else {
            i5 = indexOf4 + 1;
        }
        iArr[0] = indexOf4;
        iArr[1] = i5;
        iArr[2] = indexOf2;
        iArr[3] = length;
        return iArr;
    }

    public static void y(String str, String str2) {
        synchronized (f13277c) {
            Log.i(str, str2);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x0195, code lost:
    
        if (r0.equals("video/mp2t") == false) goto L28;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int z(String str) {
        boolean z5;
        String str2 = str;
        if (str2 == null) {
            return -1;
        }
        ArrayList arrayList = o.a;
        char c6 = 2;
        switch (str2.hashCode()) {
            case -1007807498:
                if (str2.equals("audio/x-flac")) {
                    z5 = false;
                    break;
                }
                z5 = -1;
                break;
            case -586683234:
                if (str2.equals("audio/x-wav")) {
                    z5 = true;
                    break;
                }
                z5 = -1;
                break;
            case 187090231:
                if (str2.equals("audio/mp3")) {
                    z5 = 2;
                    break;
                }
                z5 = -1;
                break;
            default:
                z5 = -1;
                break;
        }
        switch (z5) {
            case false:
                str2 = "audio/flac";
                break;
            case true:
                str2 = "audio/wav";
                break;
            case true:
                str2 = "audio/mpeg";
                break;
        }
        switch (str2.hashCode()) {
            case -2123537834:
                if (str2.equals("audio/eac3-joc")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -1662384011:
                if (str2.equals("video/mp2p")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case -1662384007:
                break;
            case -1662095187:
                if (str2.equals("video/webm")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case -1606874997:
                if (str2.equals("audio/amr-wb")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case -1487394660:
                if (str2.equals(ClipboardModule.MIMETYPE_JPEG)) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case -1248337486:
                if (str2.equals("application/mp4")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case -1079884372:
                if (str2.equals("video/x-msvideo")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case -1004728940:
                if (str2.equals("text/vtt")) {
                    c6 = '\b';
                    break;
                }
                c6 = 65535;
                break;
            case -387023398:
                if (str2.equals("audio/x-matroska")) {
                    c6 = '\t';
                    break;
                }
                c6 = 65535;
                break;
            case -43467528:
                if (str2.equals("application/webm")) {
                    c6 = '\n';
                    break;
                }
                c6 = 65535;
                break;
            case 13915911:
                if (str2.equals("video/x-flv")) {
                    c6 = 11;
                    break;
                }
                c6 = 65535;
                break;
            case 187078296:
                if (str2.equals("audio/ac3")) {
                    c6 = '\f';
                    break;
                }
                c6 = 65535;
                break;
            case 187078297:
                if (str2.equals("audio/ac4")) {
                    c6 = '\r';
                    break;
                }
                c6 = 65535;
                break;
            case 187078669:
                if (str2.equals("audio/amr")) {
                    c6 = 14;
                    break;
                }
                c6 = 65535;
                break;
            case 187090232:
                if (str2.equals("audio/mp4")) {
                    c6 = 15;
                    break;
                }
                c6 = 65535;
                break;
            case 187091926:
                if (str2.equals("audio/ogg")) {
                    c6 = 16;
                    break;
                }
                c6 = 65535;
                break;
            case 187099443:
                if (str2.equals("audio/wav")) {
                    c6 = 17;
                    break;
                }
                c6 = 65535;
                break;
            case 1331848029:
                if (str2.equals("video/mp4")) {
                    c6 = 18;
                    break;
                }
                c6 = 65535;
                break;
            case 1503095341:
                if (str2.equals("audio/3gpp")) {
                    c6 = 19;
                    break;
                }
                c6 = 65535;
                break;
            case 1504578661:
                if (str2.equals("audio/eac3")) {
                    c6 = 20;
                    break;
                }
                c6 = 65535;
                break;
            case 1504619009:
                if (str2.equals("audio/flac")) {
                    c6 = 21;
                    break;
                }
                c6 = 65535;
                break;
            case 1504824762:
                if (str2.equals("audio/midi")) {
                    c6 = 22;
                    break;
                }
                c6 = 65535;
                break;
            case 1504831518:
                if (str2.equals("audio/mpeg")) {
                    c6 = 23;
                    break;
                }
                c6 = 65535;
                break;
            case 1505118770:
                if (str2.equals("audio/webm")) {
                    c6 = 24;
                    break;
                }
                c6 = 65535;
                break;
            case 2039520277:
                if (str2.equals("video/x-matroska")) {
                    c6 = 25;
                    break;
                }
                c6 = 65535;
                break;
            default:
                c6 = 65535;
                break;
        }
        switch (c6) {
        }
        return -1;
    }
}
