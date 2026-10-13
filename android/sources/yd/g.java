package yd;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ke.d0;
import ke.v;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: h, reason: collision with root package name */
    public static final byte[] f20894h = {0, 7, 8, 15};

    /* renamed from: i, reason: collision with root package name */
    public static final byte[] f20895i = {0, 119, -120, -1};
    public static final byte[] j = {0, 17, 34, 51, 68, 85, 102, 119, -120, -103, -86, -69, -52, -35, -18, -1};
    public final Paint a;

    /* renamed from: b, reason: collision with root package name */
    public final Paint f20896b;

    /* renamed from: c, reason: collision with root package name */
    public final Canvas f20897c;

    /* renamed from: d, reason: collision with root package name */
    public final ba.a f20898d;

    /* renamed from: e, reason: collision with root package name */
    public final a f20899e;

    /* renamed from: f, reason: collision with root package name */
    public final f f20900f;

    /* renamed from: g, reason: collision with root package name */
    public Bitmap f20901g;

    public g(int i5, int i6) {
        Paint paint = new Paint();
        this.a = paint;
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC));
        paint.setPathEffect(null);
        Paint paint2 = new Paint();
        this.f20896b = paint2;
        paint2.setStyle(Paint.Style.FILL);
        paint2.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_OVER));
        paint2.setPathEffect(null);
        this.f20897c = new Canvas();
        this.f20898d = new ba.a(719, 575, 0, 719, 0, 575);
        this.f20899e = new a(0, new int[]{0, -1, -16777216, -8421505}, b(), c());
        this.f20900f = new f(i5, i6);
    }

    public static byte[] a(int i5, int i6, v vVar) {
        byte[] bArr = new byte[i5];
        for (int i10 = 0; i10 < i5; i10++) {
            bArr[i10] = (byte) vVar.i(i6);
        }
        return bArr;
    }

    public static int[] b() {
        int[] iArr = new int[16];
        iArr[0] = 0;
        for (int i5 = 1; i5 < 16; i5++) {
            if (i5 < 8) {
                iArr[i5] = d(255, (i5 & 1) != 0 ? 255 : 0, (i5 & 2) != 0 ? 255 : 0, (i5 & 4) != 0 ? 255 : 0);
            } else {
                iArr[i5] = d(255, (i5 & 1) != 0 ? 127 : 0, (i5 & 2) != 0 ? 127 : 0, (i5 & 4) == 0 ? 0 : 127);
            }
        }
        return iArr;
    }

    public static int[] c() {
        int[] iArr = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
        iArr[0] = 0;
        for (int i5 = 0; i5 < 256; i5++) {
            if (i5 < 8) {
                iArr[i5] = d(63, (i5 & 1) != 0 ? 255 : 0, (i5 & 2) != 0 ? 255 : 0, (i5 & 4) == 0 ? 0 : 255);
            } else {
                int i6 = i5 & 136;
                if (i6 == 0) {
                    iArr[i5] = d(255, ((i5 & 1) != 0 ? 85 : 0) + ((i5 & 16) != 0 ? 170 : 0), ((i5 & 2) != 0 ? 85 : 0) + ((i5 & 32) != 0 ? 170 : 0), ((i5 & 4) == 0 ? 0 : 85) + ((i5 & 64) == 0 ? 0 : 170));
                } else if (i6 == 8) {
                    iArr[i5] = d(127, ((i5 & 1) != 0 ? 85 : 0) + ((i5 & 16) != 0 ? 170 : 0), ((i5 & 2) != 0 ? 85 : 0) + ((i5 & 32) != 0 ? 170 : 0), ((i5 & 4) == 0 ? 0 : 85) + ((i5 & 64) == 0 ? 0 : 170));
                } else if (i6 == 128) {
                    iArr[i5] = d(255, ((i5 & 1) != 0 ? 43 : 0) + 127 + ((i5 & 16) != 0 ? 85 : 0), ((i5 & 2) != 0 ? 43 : 0) + 127 + ((i5 & 32) != 0 ? 85 : 0), ((i5 & 4) == 0 ? 0 : 43) + 127 + ((i5 & 64) == 0 ? 0 : 85));
                } else if (i6 == 136) {
                    iArr[i5] = d(255, ((i5 & 1) != 0 ? 43 : 0) + ((i5 & 16) != 0 ? 85 : 0), ((i5 & 2) != 0 ? 43 : 0) + ((i5 & 32) != 0 ? 85 : 0), ((i5 & 4) == 0 ? 0 : 43) + ((i5 & 64) == 0 ? 0 : 85));
                }
            }
        }
        return iArr;
    }

    public static int d(int i5, int i6, int i10, int i11) {
        return (i5 << 24) | (i6 << 16) | (i10 << 8) | i11;
    }

    /* JADX WARN: Removed duplicated region for block: B:92:0x01d5 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0203 A[LOOP:3: B:86:0x0156->B:98:0x0203, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:99:0x01ff A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void e(byte[] bArr, int[] iArr, int i5, int i6, int i10, Paint paint, Canvas canvas) {
        char c6;
        char c8;
        boolean z5;
        int i11;
        int i12;
        int i13;
        byte[] bArr2;
        boolean z6;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        boolean z7;
        int i20;
        int i21;
        Paint paint2 = paint;
        v vVar = new v(bArr, bArr.length);
        int i22 = i6;
        int i23 = i10;
        byte[] bArr3 = null;
        byte[] bArr4 = null;
        byte[] bArr5 = null;
        while (vVar.b() != 0) {
            int i24 = 8;
            int i25 = vVar.i(8);
            if (i25 != 240) {
                int i26 = 3;
                int i27 = 2;
                int i28 = 4;
                switch (i25) {
                    case 16:
                        byte[] bArr6 = i5 == 3 ? bArr3 == null ? f20895i : bArr3 : i5 == 2 ? bArr5 == null ? f20894h : bArr5 : null;
                        boolean z8 = false;
                        while (true) {
                            int i29 = vVar.i(2);
                            if (i29 != 0) {
                                z5 = z8;
                                i11 = i29;
                                i12 = 1;
                            } else if (vVar.h()) {
                                int i30 = vVar.i(3) + 3;
                                z5 = z8;
                                i11 = vVar.i(2);
                                i12 = i30;
                            } else {
                                if (vVar.h()) {
                                    z5 = z8;
                                    i12 = 1;
                                    c6 = '\b';
                                    c8 = 4;
                                } else {
                                    int i31 = vVar.i(2);
                                    if (i31 == 0) {
                                        c6 = '\b';
                                        c8 = 4;
                                        z5 = true;
                                    } else if (i31 == 1) {
                                        c6 = '\b';
                                        c8 = 4;
                                        z5 = z8;
                                        i12 = 2;
                                    } else if (i31 == 2) {
                                        c6 = '\b';
                                        c8 = 4;
                                        i12 = vVar.i(4) + 12;
                                        i11 = vVar.i(2);
                                        z5 = z8;
                                        if (i12 != 0) {
                                        }
                                        i13 = i22;
                                        i22 = i13 + i12;
                                        if (z5) {
                                        }
                                    } else if (i31 != 3) {
                                        z5 = z8;
                                        c6 = '\b';
                                        c8 = 4;
                                    } else {
                                        c6 = '\b';
                                        int i32 = vVar.i(8) + 29;
                                        i11 = vVar.i(2);
                                        z5 = z8;
                                        i12 = i32;
                                        c8 = 4;
                                        if (i12 != 0 || paint2 == null) {
                                            i13 = i22;
                                        } else {
                                            if (bArr6 != 0) {
                                                i11 = bArr6[i11];
                                            }
                                            paint2.setColor(iArr[i11]);
                                            i13 = i22;
                                            canvas.drawRect(i22, i23, i22 + i12, i23 + 1, paint2);
                                        }
                                        i22 = i13 + i12;
                                        if (z5) {
                                            vVar.c();
                                            break;
                                        } else {
                                            paint2 = paint;
                                            z8 = z5;
                                        }
                                    }
                                    i11 = 0;
                                    i12 = 0;
                                    if (i12 != 0) {
                                    }
                                    i13 = i22;
                                    i22 = i13 + i12;
                                    if (z5) {
                                    }
                                }
                                i11 = 0;
                                if (i12 != 0) {
                                }
                                i13 = i22;
                                i22 = i13 + i12;
                                if (z5) {
                                }
                            }
                            c6 = '\b';
                            c8 = 4;
                            if (i12 != 0) {
                            }
                            i13 = i22;
                            i22 = i13 + i12;
                            if (z5) {
                            }
                        }
                    case 17:
                        if (i5 == 3) {
                            bArr2 = bArr4 == null ? j : bArr4;
                        } else {
                            bArr2 = null;
                        }
                        boolean z10 = false;
                        while (true) {
                            int i33 = vVar.i(i28);
                            if (i33 != 0) {
                                z6 = z10;
                                i16 = i33;
                                i14 = 1;
                            } else if (vVar.h()) {
                                if (vVar.h()) {
                                    int i34 = vVar.i(i27);
                                    if (i34 == 0) {
                                        z6 = z10;
                                        i14 = 1;
                                    } else if (i34 != 1) {
                                        if (i34 == i27) {
                                            i14 = vVar.i(i28) + 9;
                                            i15 = vVar.i(i28);
                                        } else if (i34 != i26) {
                                            z6 = z10;
                                            i14 = 0;
                                        } else {
                                            i14 = vVar.i(i24) + 25;
                                            i15 = vVar.i(i28);
                                        }
                                        i16 = i15;
                                    } else {
                                        z6 = z10;
                                        i14 = i27;
                                    }
                                    i16 = 0;
                                } else {
                                    i14 = vVar.i(i27) + 4;
                                    i16 = vVar.i(i28);
                                }
                                z6 = z10;
                            } else {
                                int i35 = vVar.i(i26);
                                if (i35 != 0) {
                                    i14 = i35 + 2;
                                    z6 = z10;
                                    i16 = 0;
                                } else {
                                    z6 = true;
                                    i14 = 0;
                                    i16 = 0;
                                }
                            }
                            if (i14 == 0 || paint2 == null) {
                                i17 = i22;
                                i18 = i26;
                                i19 = i27;
                            } else {
                                if (bArr2 != 0) {
                                    i16 = bArr2[i16];
                                }
                                paint2.setColor(iArr[i16]);
                                i18 = i26;
                                i19 = 2;
                                i17 = i22;
                                canvas.drawRect(i22, i23, i22 + i14, i23 + 1, paint2);
                            }
                            i22 = i17 + i14;
                            if (z6) {
                                vVar.c();
                                break;
                            } else {
                                z10 = z6;
                                i26 = i18;
                                i27 = i19;
                                i28 = 4;
                                i24 = 8;
                            }
                        }
                    case 18:
                        boolean z11 = false;
                        while (true) {
                            int i36 = vVar.i(8);
                            if (i36 != 0) {
                                z7 = z11;
                                i20 = 1;
                            } else if (vVar.h()) {
                                z7 = z11;
                                i20 = vVar.i(7);
                                i36 = vVar.i(8);
                            } else {
                                int i37 = vVar.i(7);
                                if (i37 != 0) {
                                    z7 = z11;
                                    i20 = i37;
                                    i36 = 0;
                                } else {
                                    z7 = true;
                                    i36 = 0;
                                    i20 = 0;
                                }
                            }
                            if (i20 == 0 || paint2 == null) {
                                i21 = i22;
                            } else {
                                paint2.setColor(iArr[i36]);
                                i21 = i22;
                                canvas.drawRect(i22, i23, i22 + i20, i23 + 1, paint2);
                            }
                            i22 = i21 + i20;
                            if (z7) {
                                break;
                            } else {
                                z11 = z7;
                            }
                        }
                        break;
                    default:
                        switch (i25) {
                            case 32:
                                bArr5 = a(4, 4, vVar);
                                break;
                            case 33:
                                bArr3 = a(4, 8, vVar);
                                break;
                            case 34:
                                bArr4 = a(16, 8, vVar);
                                break;
                        }
                }
            } else {
                i23 += 2;
                i22 = i6;
            }
            paint2 = paint;
        }
    }

    public static a f(v vVar, int i5) {
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14 = 8;
        int i15 = vVar.i(8);
        vVar.s(8);
        int i16 = 2;
        int i17 = i5 - 2;
        int i18 = 0;
        int[] iArr = {0, -1, -16777216, -8421505};
        int[] b10 = b();
        int[] c6 = c();
        while (i17 > 0) {
            int i19 = vVar.i(i14);
            int i20 = vVar.i(i14);
            int[] iArr2 = (i20 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? iArr : (i20 & 64) != 0 ? b10 : c6;
            if ((i20 & 1) != 0) {
                i12 = vVar.i(i14);
                i13 = vVar.i(i14);
                i6 = vVar.i(i14);
                i11 = vVar.i(i14);
                i10 = i17 - 6;
            } else {
                int i21 = vVar.i(6) << i16;
                int i22 = vVar.i(4) << 4;
                i6 = vVar.i(4) << 4;
                i10 = i17 - 4;
                i11 = vVar.i(i16) << 6;
                i12 = i21;
                i13 = i22;
            }
            if (i12 == 0) {
                i13 = i18;
                i6 = i13;
                i11 = 255;
            }
            double d6 = i12;
            double d7 = i13 - 128;
            double d8 = i6 - 128;
            iArr2[i19] = d((byte) (255 - (i11 & 255)), d0.i((int) ((1.402d * d7) + d6), 0, 255), d0.i((int) ((d6 - (0.34414d * d8)) - (d7 * 0.71414d)), 0, 255), d0.i((int) ((d8 * 1.772d) + d6), 0, 255));
            i17 = i10;
            i18 = 0;
            i15 = i15;
            c6 = c6;
            i14 = 8;
            i16 = 2;
        }
        return new a(i15, iArr, b10, c6);
    }

    public static b g(v vVar) {
        byte[] bArr;
        int i5 = vVar.i(16);
        vVar.s(4);
        int i6 = vVar.i(2);
        boolean h6 = vVar.h();
        vVar.s(1);
        byte[] bArr2 = d0.f13298f;
        if (i6 == 1) {
            vVar.s(vVar.i(8) * 16);
        } else if (i6 == 0) {
            int i10 = vVar.i(16);
            int i11 = vVar.i(16);
            if (i10 > 0) {
                bArr2 = new byte[i10];
                vVar.k(bArr2, i10);
            }
            if (i11 > 0) {
                bArr = new byte[i11];
                vVar.k(bArr, i11);
                return new b(i5, h6, bArr2, bArr);
            }
        }
        bArr = bArr2;
        return new b(i5, h6, bArr2, bArr);
    }
}
