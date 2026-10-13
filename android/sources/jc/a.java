package jc;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.media.utils.DiscordVideoMediaSource;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.reactnativecommunity.webview.RNCWebViewManager;
import hc.g1;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public abstract class a {
    public static final int[] a = {96000, 88200, 64000, 48000, 44100, 32000, 24000, 22050, 16000, 12000, 11025, 8000, 7350};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f12493b = {0, 1, 2, 3, 4, 5, 6, 8, -1, -1, -1, 7, 8, -1, 8, -1};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f12494c = {1, 2, 3, 6};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f12495d = {48000, 44100, 32000};

    /* renamed from: e, reason: collision with root package name */
    public static final int[] f12496e = {24000, 22050, 16000};

    /* renamed from: f, reason: collision with root package name */
    public static final int[] f12497f = {2, 1, 2, 3, 3, 4, 4, 5};

    /* renamed from: g, reason: collision with root package name */
    public static final int[] f12498g = {32, 40, 48, 56, 64, 80, 96, 112, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 160, JfifUtil.MARKER_SOFn, 224, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 320, 384, 448, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, 576, DiscordVideoMediaSource.DEFAULT_WIDTH};

    /* renamed from: h, reason: collision with root package name */
    public static final int[] f12499h = {69, 87, 104, 121, 139, 174, JfifUtil.MARKER_RST0, 243, 278, 348, 417, 487, 557, 696, 835, 975, 1114, 1253, 1393};

    /* renamed from: i, reason: collision with root package name */
    public static final int[] f12500i = {2002, 2000, 1920, 1601, 1600, RNCWebViewManager.COMMAND_CLEAR_CACHE, 1000, 960, 800, 800, DiscordVideoMediaSource.DEFAULT_HEIGHT, ReactFontManager.TypefaceStyle.NORMAL, ReactFontManager.TypefaceStyle.NORMAL, RecyclerView.ItemAnimator.FLAG_MOVED};
    public static final int[] j = {1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 6, 7, 8, 8};
    public static final int[] k = {-1, 8000, 16000, 32000, -1, -1, 11025, 22050, 44100, -1, -1, 12000, 24000, 48000, -1, -1};

    /* renamed from: l, reason: collision with root package name */
    public static final int[] f12501l = {64, 112, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, JfifUtil.MARKER_SOFn, 224, IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER, 384, 448, IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, DiscordVideoMediaSource.DEFAULT_WIDTH, 768, 896, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, 1152, 1280, 1536, 1920, RecyclerView.ItemAnimator.FLAG_MOVED, 2304, 2560, 2688, 2816, 2823, 2944, 3072, 3840, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 6144, 7680};

    /* renamed from: m, reason: collision with root package name */
    public static final String[] f12502m = {"audio/mpeg-L1", "audio/mpeg-L2", "audio/mpeg"};

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f12503n = {44100, 48000, 32000};

    /* renamed from: o, reason: collision with root package name */
    public static final int[] f12504o = {32000, 64000, 96000, 128000, 160000, 192000, 224000, 256000, 288000, 320000, 352000, 384000, 416000, 448000};

    /* renamed from: p, reason: collision with root package name */
    public static final int[] f12505p = {32000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 144000, 160000, 176000, 192000, 224000, 256000};

    /* renamed from: q, reason: collision with root package name */
    public static final int[] f12506q = {32000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 320000, 384000};

    /* renamed from: r, reason: collision with root package name */
    public static final int[] f12507r = {32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000, 256000, 320000};

    /* renamed from: s, reason: collision with root package name */
    public static final int[] f12508s = {8000, 16000, 24000, 32000, 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 144000, 160000};

    public static byte[] a(int i5, int i6, int i10) {
        return new byte[]{(byte) (((i5 << 3) & 248) | ((i6 >> 1) & 7)), (byte) (((i6 << 7) & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) | ((i10 << 3) & 120))};
    }

    public static ArrayList b(byte[] bArr) {
        ArrayList arrayList = new ArrayList(3);
        arrayList.add(bArr);
        arrayList.add(ByteBuffer.allocate(8).order(ByteOrder.nativeOrder()).putLong(((((bArr[11] & 255) << 8) | (bArr[10] & 255)) * 1000000000) / 48000).array());
        arrayList.add(ByteBuffer.allocate(8).order(ByteOrder.nativeOrder()).putLong(80000000L).array());
        return arrayList;
    }

    public static int c(int i5, int i6) {
        int i10 = i6 / 2;
        if (i5 < 0 || i5 >= 3 || i6 < 0 || i10 >= 19) {
            return -1;
        }
        int i11 = f12495d[i5];
        if (i11 == 44100) {
            return ((i6 % 2) + f12499h[i10]) * 2;
        }
        int i12 = f12498g[i10];
        return i11 == 32000 ? i12 * 6 : i12 * 4;
    }

    public static void d(int i5, ke.w wVar) {
        wVar.C(7);
        byte[] bArr = wVar.a;
        bArr[0] = -84;
        bArr[1] = 64;
        bArr[2] = -1;
        bArr[3] = -1;
        bArr[4] = (byte) ((i5 >> 16) & 255);
        bArr[5] = (byte) ((i5 >> 8) & 255);
        bArr[6] = (byte) (i5 & 255);
    }

    public static int e(int i5) {
        int i6;
        int i10;
        int i11;
        int i12;
        if ((i5 & (-2097152)) != -2097152 || (i6 = (i5 >>> 19) & 3) == 1 || (i10 = (i5 >>> 17) & 3) == 0 || (i11 = (i5 >>> 12) & 15) == 0 || i11 == 15 || (i12 = (i5 >>> 10) & 3) == 3) {
            return -1;
        }
        int i13 = f12503n[i12];
        if (i6 == 2) {
            i13 /= 2;
        } else if (i6 == 0) {
            i13 /= 4;
        }
        int i14 = (i5 >>> 9) & 1;
        if (i10 == 3) {
            return ((((i6 == 3 ? f12504o[i11 - 1] : f12505p[i11 - 1]) * 12) / i13) + i14) * 4;
        }
        int i15 = i6 == 3 ? i10 == 2 ? f12506q[i11 - 1] : f12507r[i11 - 1] : f12508s[i11 - 1];
        if (i6 == 3) {
            return ((i15 * 144) / i13) + i14;
        }
        return (((i10 == 1 ? 72 : 144) * i15) / i13) + i14;
    }

    public static long f(byte b10, byte b11) {
        int i5;
        int i6 = b10 & 255;
        int i10 = b10 & 3;
        if (i10 != 0) {
            i5 = 2;
            if (i10 != 1 && i10 != 2) {
                i5 = b11 & 63;
            }
        } else {
            i5 = 1;
        }
        int i11 = i6 >> 3;
        return i5 * (i11 >= 16 ? 2500 << r6 : i11 >= 12 ? 10000 << (i11 & 1) : (i11 & 3) == 3 ? 60000 : 10000 << r6);
    }

    public static int g(ke.v vVar) {
        int i5 = vVar.i(4);
        if (i5 == 15) {
            if (vVar.b() >= 24) {
                return vVar.i(24);
            }
            throw g1.a("AAC header insufficient data", null);
        }
        if (i5 < 13) {
            return a[i5];
        }
        throw g1.a("AAC header wrong Sampling Frequency Index", null);
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x0081, code lost:
    
        if (r9 != 11) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0088, code lost:
    
        if (r9 != 11) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x008d, code lost:
    
        if (r9 != 8) goto L47;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static hc.l h(ke.v vVar) {
        int i5;
        int i6;
        int i10 = vVar.i(16);
        int i11 = vVar.i(16);
        if (i11 == 65535) {
            i11 = vVar.i(24);
            i5 = 7;
        } else {
            i5 = 4;
        }
        int i12 = i11 + i5;
        if (i10 == 44097) {
            i12 += 2;
        }
        if (vVar.i(2) == 3) {
            do {
                vVar.i(2);
            } while (vVar.h());
        }
        int i13 = vVar.i(10);
        if (vVar.h() && vVar.i(3) > 0) {
            vVar.s(2);
        }
        int i14 = vVar.h() ? 48000 : 44100;
        int i15 = vVar.i(4);
        int[] iArr = f12500i;
        if (i14 == 44100 && i15 == 13) {
            i6 = iArr[i15];
        } else if (i14 != 48000 || i15 >= 14) {
            i6 = 0;
        } else {
            int i16 = iArr[i15];
            int i17 = i13 % 5;
            if (i17 != 1) {
                if (i17 == 2) {
                    if (i15 != 8) {
                    }
                    i6 = i16 + 1;
                } else if (i17 != 3) {
                    if (i17 == 4) {
                        if (i15 != 3) {
                            if (i15 != 8) {
                            }
                        }
                        i6 = i16 + 1;
                    }
                    i6 = i16;
                }
            }
            if (i15 != 3) {
            }
            i6 = i16 + 1;
        }
        return new hc.l(i14, i12, i6);
    }

    public static p0 i(ke.v vVar, boolean z5) {
        int i5 = vVar.i(5);
        if (i5 == 31) {
            i5 = vVar.i(6) + 32;
        }
        int g6 = g(vVar);
        int i6 = vVar.i(4);
        String i10 = k0.d.i(i5, "mp4a.40.");
        if (i5 == 5 || i5 == 29) {
            g6 = g(vVar);
            int i11 = vVar.i(5);
            if (i11 == 31) {
                i11 = vVar.i(6) + 32;
            }
            i5 = i11;
            if (i5 == 22) {
                i6 = vVar.i(4);
            }
        }
        if (z5) {
            if (i5 != 1 && i5 != 2 && i5 != 3 && i5 != 4 && i5 != 6 && i5 != 7 && i5 != 17) {
                switch (i5) {
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                        break;
                    default:
                        throw g1.c("Unsupported audio object type: " + i5);
                }
            }
            if (vVar.h()) {
                ke.b.N("AacUtil", "Unexpected frameLengthFlag = 1");
            }
            if (vVar.h()) {
                vVar.s(14);
            }
            boolean h6 = vVar.h();
            if (i6 == 0) {
                throw new UnsupportedOperationException();
            }
            if (i5 == 6 || i5 == 20) {
                vVar.s(3);
            }
            if (h6) {
                if (i5 == 22) {
                    vVar.s(16);
                }
                if (i5 == 17 || i5 == 19 || i5 == 20 || i5 == 23) {
                    vVar.s(3);
                }
                vVar.s(1);
            }
            switch (i5) {
                case 17:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                    int i12 = vVar.i(2);
                    if (i12 == 2 || i12 == 3) {
                        throw g1.c("Unsupported epConfig: " + i12);
                    }
            }
        }
        int i13 = f12493b[i6];
        if (i13 == -1) {
            throw g1.a(null, null);
        }
        p0 p0Var = new p0();
        p0Var.a = g6;
        p0Var.f12603b = i13;
        p0Var.f12604c = i10;
        return p0Var;
    }

    public static int j(int i5) {
        int i6;
        int i10;
        if ((i5 & (-2097152)) == -2097152 && (i6 = (i5 >>> 19) & 3) != 1 && (i10 = (i5 >>> 17) & 3) != 0) {
            int i11 = (i5 >>> 12) & 15;
            int i12 = (i5 >>> 10) & 3;
            if (i11 != 0 && i11 != 15 && i12 != 3) {
                if (i10 == 1) {
                    return i6 == 3 ? 1152 : 576;
                }
                if (i10 == 2) {
                    return 1152;
                }
                if (i10 == 3) {
                    return 384;
                }
                throw new IllegalArgumentException();
            }
        }
        return -1;
    }
}
