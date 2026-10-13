package com.discord.thumbhash;

import android.graphics.Bitmap;
import android.graphics.Color;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
final class ThumbhashUtils {

    public static final class Channel {
        float[] ac;

        /* renamed from: dc, reason: collision with root package name */
        float f4382dc;
        int nx;
        int ny;
        float scale;

        public Channel(int i5, int i6) {
            this.nx = i5;
            this.ny = i6;
            int i10 = 0;
            int i11 = 0;
            while (i10 < i6) {
                for (int i12 = i10 > 0 ? 0 : 1; i12 * i6 < (i6 - i10) * i5; i12++) {
                    i11++;
                }
                i10++;
            }
            this.ac = new float[i11];
        }

        public int decode(byte[] bArr, int i5, int i6, float f2) {
            int i10 = 0;
            while (true) {
                float[] fArr = this.ac;
                if (i10 >= fArr.length) {
                    return i6;
                }
                fArr[i10] = ((((bArr[(i6 >> 1) + i5] >> ((i6 & 1) << 2)) & 15) / 7.5f) - 1.0f) * f2;
                i6++;
                i10++;
            }
        }
    }

    public static float thumbHashToApproximateAspectRatio(byte[] bArr) {
        byte b10 = bArr[3];
        boolean z5 = (bArr[2] & ByteCompanionObject.MIN_VALUE) != 0;
        boolean z6 = (bArr[4] & ByteCompanionObject.MIN_VALUE) != 0;
        int i5 = 5;
        int i6 = z6 ? z5 ? 5 : 7 : b10 & 7;
        if (z6) {
            i5 = b10 & 7;
        } else if (!z5) {
            i5 = 7;
        }
        return i6 / i5;
    }

    /* JADX WARN: Removed duplicated region for block: B:111:0x010c  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x0103  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x00ee  */
    /* JADX WARN: Removed duplicated region for block: B:114:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0088  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00a2  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00e0  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0101  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x010a  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x011c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Bitmap thumbHashToRGBA(byte[] bArr, int i5, float f2) {
        int i6;
        float f10;
        float f11;
        boolean z5;
        Channel channel;
        int round;
        int i10;
        int i11;
        float f12;
        int i12 = i5;
        int i13 = (bArr[0] & 255) | ((bArr[1] & 255) << 8) | ((bArr[2] & 255) << 16);
        int i14 = (bArr[3] & 255) | ((bArr[4] & 255) << 8);
        float f13 = (i13 & 63) / 63.0f;
        float f14 = (((i13 >> 6) & 63) / 31.5f) - 1.0f;
        float f15 = (((i13 >> 12) & 63) / 31.5f) - 1.0f;
        float f16 = ((i13 >> 18) & 31) / 31.0f;
        boolean z6 = (i13 >> 23) != 0;
        float f17 = ((i14 >> 3) & 63) / 63.0f;
        float f18 = ((i14 >> 9) & 63) / 63.0f;
        boolean z7 = (i14 >> 15) != 0;
        int i15 = 7;
        int max = Math.max(3, z7 ? z6 ? 5 : 7 : i14 & 7);
        if (z7) {
            i15 = i14 & 7;
        } else if (z6) {
            i6 = 5;
            int max2 = Math.max(3, i6);
            if (z6) {
                f10 = 15.0f;
                f11 = 1.0f;
            } else {
                f10 = 15.0f;
                f11 = (bArr[5] & 15) / 15.0f;
            }
            float f19 = 1.0f;
            float f20 = ((bArr[5] >> 4) & 15) / f10;
            int i16 = z6 ? 6 : 5;
            Channel channel2 = new Channel(max, max2);
            z5 = z6;
            Channel channel3 = new Channel(3, 3);
            Channel channel4 = new Channel(3, 3);
            int decode = channel4.decode(bArr, i16, channel3.decode(bArr, i16, channel2.decode(bArr, i16, 0, f16), f17 * f2), f18 * f2);
            if (z5) {
                channel = null;
            } else {
                channel = new Channel(5, 5);
                channel.decode(bArr, i16, decode, f20);
            }
            float[] fArr = channel2.ac;
            float[] fArr2 = channel3.ac;
            float[] fArr3 = channel4.ac;
            float[] fArr4 = z5 ? channel.ac : null;
            float thumbHashToApproximateAspectRatio = thumbHashToApproximateAspectRatio(bArr);
            int round2 = Math.round(thumbHashToApproximateAspectRatio <= 1.0f ? 32.0f : thumbHashToApproximateAspectRatio * 32.0f);
            round = Math.round(thumbHashToApproximateAspectRatio > 1.0f ? 32.0f / thumbHashToApproximateAspectRatio : 32.0f);
            int[] iArr = new int[round2 * round];
            int max3 = Math.max(max, !z5 ? 5 : 3);
            int max4 = Math.max(max2, !z5 ? 5 : 3);
            float[] fArr5 = new float[max3];
            float[] fArr6 = new float[max4];
            i10 = 0;
            while (i10 < round) {
                float[] fArr7 = fArr2;
                int i17 = 0;
                while (i17 < round2) {
                    float[] fArr8 = fArr3;
                    int i18 = 0;
                    while (i18 < max3) {
                        fArr5[i18] = (float) Math.cos((3.141592653589793d / round2) * (i17 + 0.5f) * i18);
                        i18++;
                        max = max;
                        max3 = max3;
                    }
                    int i19 = max;
                    int i20 = max3;
                    int i21 = 0;
                    while (i21 < max4) {
                        fArr6[i21] = (float) Math.cos((3.141592653589793d / round) * (i10 + 0.5f) * i21);
                        i21++;
                        i17 = i17;
                        i10 = i10;
                    }
                    int i22 = i10;
                    int i23 = i17;
                    float f21 = f13;
                    int i24 = 0;
                    int i25 = 0;
                    while (i24 < max2) {
                        float f22 = fArr6[i24] * 2.0f;
                        int i26 = i24 > 0 ? 0 : 1;
                        int i27 = i25;
                        while (true) {
                            f12 = f21;
                            if (i26 * max2 < (max2 - i24) * i19) {
                                f21 = (i26 > i12 || i24 > i12) ? f12 : (fArr[i27] * fArr5[i26] * f22) + f12;
                                i26++;
                                i27++;
                            }
                        }
                        i24++;
                        i25 = i27;
                        f21 = f12;
                    }
                    float f23 = f14;
                    float f24 = f15;
                    int i28 = 0;
                    int i29 = 0;
                    while (i28 < 3) {
                        float f25 = fArr6[i28] * 2.0f;
                        int i30 = i28 > 0 ? 0 : 1;
                        while (i30 < 3 - i28) {
                            float f26 = fArr5[i30] * f25;
                            f23 = (fArr7[i29] * f26) + f23;
                            f24 = (fArr8[i29] * f26) + f24;
                            i30++;
                            i29++;
                        }
                        i28++;
                    }
                    float f27 = f11;
                    if (z5) {
                        int i31 = 0;
                        int i32 = 0;
                        while (i31 < 5) {
                            float f28 = fArr6[i31] * 2.0f;
                            int i33 = i31 > 0 ? 0 : 1;
                            while (true) {
                                i11 = i31;
                                if (i33 < 5 - i11) {
                                    f27 += fArr4[i32] * fArr5[i33] * f28;
                                    i33++;
                                    i32++;
                                    i31 = i11;
                                }
                            }
                            i31 = i11 + 1;
                        }
                    }
                    float f29 = f21 - (f23 * 0.6666667f);
                    float f30 = (((f21 * 3.0f) - f29) + f24) / 2.0f;
                    float f31 = f19;
                    iArr[(round2 * i22) + i23] = Color.argb(Math.max(0, Math.round(Math.min(f31, f27) * 255.0f)), Math.max(0, Math.round(Math.min(f31, f30) * 255.0f)), Math.max(0, Math.round(Math.min(f31, f30 - f24) * 255.0f)), Math.max(0, Math.round(Math.min(f31, f29) * 255.0f)));
                    i17 = i23 + 1;
                    i12 = i5;
                    max2 = max2;
                    fArr3 = fArr8;
                    max = i19;
                    i10 = i22;
                    f19 = f31;
                    max3 = i20;
                }
                i10++;
                i12 = i5;
                max2 = max2;
                fArr2 = fArr7;
                f19 = f19;
                max3 = max3;
            }
            return Bitmap.createBitmap(iArr, round2, round, Bitmap.Config.ARGB_8888);
        }
        i6 = i15;
        int max22 = Math.max(3, i6);
        if (z6) {
        }
        float f192 = 1.0f;
        float f202 = ((bArr[5] >> 4) & 15) / f10;
        if (z6) {
        }
        Channel channel22 = new Channel(max, max22);
        z5 = z6;
        Channel channel32 = new Channel(3, 3);
        Channel channel42 = new Channel(3, 3);
        int decode2 = channel42.decode(bArr, i16, channel32.decode(bArr, i16, channel22.decode(bArr, i16, 0, f16), f17 * f2), f18 * f2);
        if (z5) {
        }
        float[] fArr9 = channel22.ac;
        float[] fArr22 = channel32.ac;
        float[] fArr32 = channel42.ac;
        if (z5) {
        }
        float thumbHashToApproximateAspectRatio2 = thumbHashToApproximateAspectRatio(bArr);
        int round22 = Math.round(thumbHashToApproximateAspectRatio2 <= 1.0f ? 32.0f : thumbHashToApproximateAspectRatio2 * 32.0f);
        round = Math.round(thumbHashToApproximateAspectRatio2 > 1.0f ? 32.0f / thumbHashToApproximateAspectRatio2 : 32.0f);
        int[] iArr2 = new int[round22 * round];
        int max32 = Math.max(max, !z5 ? 5 : 3);
        int max42 = Math.max(max22, !z5 ? 5 : 3);
        float[] fArr52 = new float[max32];
        float[] fArr62 = new float[max42];
        i10 = 0;
        while (i10 < round) {
        }
        return Bitmap.createBitmap(iArr2, round22, round, Bitmap.Config.ARGB_8888);
    }

    public static Bitmap thumbHashToRGBA(byte[] bArr) {
        return thumbHashToRGBA(bArr, 1, 1.1f);
    }
}
