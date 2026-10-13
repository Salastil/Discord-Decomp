package ek;

import com.facebook.imageutils.JfifUtil;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Map;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public abstract class b {
    public static final char[] a = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:".toCharArray();

    public static void a(a5.g gVar, StringBuilder sb2, int i5, boolean z5) {
        while (i5 > 1) {
            if (gVar.d() < 11) {
                throw jj.d.a();
            }
            int g6 = gVar.g(11);
            sb2.append(f(g6 / 45));
            sb2.append(f(g6 % 45));
            i5 -= 2;
        }
        if (i5 == 1) {
            if (gVar.d() < 6) {
                throw jj.d.a();
            }
            sb2.append(f(gVar.g(6)));
        }
        if (z5) {
            for (int length = sb2.length(); length < sb2.length(); length++) {
                if (sb2.charAt(length) == '%') {
                    if (length < sb2.length() - 1) {
                        int i6 = length + 1;
                        if (sb2.charAt(i6) == '%') {
                            sb2.deleteCharAt(i6);
                        }
                    }
                    sb2.setCharAt(length, (char) 29);
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:62:0x015b, code lost:
    
        if (r5 == 2) goto L123;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x015f, code lost:
    
        if ((r17 * 10) >= r24) goto L123;
     */
    /* JADX WARN: Removed duplicated region for block: B:120:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x00d0  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(a5.g gVar, StringBuilder sb2, int i5, nj.c cVar, ArrayList arrayList, Map map) {
        String name;
        boolean z5;
        boolean z6;
        boolean z7;
        if ((i5 << 3) > gVar.d()) {
            throw jj.d.a();
        }
        byte[] bArr = new byte[i5];
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            bArr[i10] = (byte) gVar.g(8);
        }
        if (cVar == null) {
            String str = nj.f.a;
            if (map != null) {
                jj.c cVar2 = jj.c.f12788v;
                if (map.containsKey(cVar2)) {
                    name = map.get(cVar2).toString();
                }
            }
            boolean z8 = true;
            boolean z10 = i5 > 3 && bArr[0] == -17 && bArr[1] == -69 && bArr[2] == -65;
            boolean z11 = true;
            boolean z12 = true;
            int i11 = 0;
            int i12 = 0;
            int i13 = 0;
            int i14 = 0;
            int i15 = 0;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            int i20 = 0;
            int i21 = 0;
            while (i12 < i5 && (z8 || z11 || z12)) {
                byte b10 = bArr[i12];
                boolean z13 = z8;
                int i22 = b10 & 255;
                if (z12) {
                    if (i13 <= 0) {
                        z5 = z10;
                        if ((b10 & ByteCompanionObject.MIN_VALUE) != 0) {
                            if ((b10 & 64) != 0) {
                                int i23 = i13 + 1;
                                if ((b10 & 32) == 0) {
                                    i15++;
                                } else {
                                    i23 = i13 + 2;
                                    if ((b10 & 16) == 0) {
                                        i16++;
                                    } else {
                                        i13 += 3;
                                        if ((b10 & 8) == 0) {
                                            i17++;
                                        }
                                    }
                                }
                                i13 = i23;
                            }
                        }
                        if (z13) {
                            if (i22 > 127 && i22 < 160) {
                                z6 = false;
                                if (z11) {
                                    z7 = z6;
                                } else if (i14 > 0) {
                                    z7 = z6;
                                    if (i22 >= 64 && i22 != 127 && i22 <= 252) {
                                        i14--;
                                    }
                                    z11 = false;
                                } else {
                                    z7 = z6;
                                    if (i22 != 128 && i22 != 160 && i22 <= 239) {
                                        if (i22 <= 160 || i22 >= 224) {
                                            if (i22 > 127) {
                                                i14++;
                                                int i24 = i20 + 1;
                                                if (i24 > i6) {
                                                    i6 = i24;
                                                    i20 = i6;
                                                } else {
                                                    i20 = i24;
                                                }
                                            } else {
                                                i20 = 0;
                                            }
                                            i21 = 0;
                                        } else {
                                            i11++;
                                            int i25 = i21 + 1;
                                            if (i25 > i18) {
                                                i18 = i25;
                                                i21 = i18;
                                            } else {
                                                i21 = i25;
                                            }
                                            i20 = 0;
                                        }
                                    }
                                    z11 = false;
                                }
                                i12++;
                                z8 = z7;
                                z10 = z5;
                            } else if (i22 > 159 && (i22 < 192 || i22 == 215 || i22 == 247)) {
                                i19++;
                            }
                        }
                        z6 = z13;
                        if (z11) {
                        }
                        i12++;
                        z8 = z7;
                        z10 = z5;
                    } else if ((b10 & ByteCompanionObject.MIN_VALUE) != 0) {
                        i13--;
                    } else {
                        z5 = z10;
                    }
                    z12 = false;
                    if (z13) {
                    }
                    z6 = z13;
                    if (z11) {
                    }
                    i12++;
                    z8 = z7;
                    z10 = z5;
                }
                z5 = z10;
                if (z13) {
                }
                z6 = z13;
                if (z11) {
                }
                i12++;
                z8 = z7;
                z10 = z5;
            }
            boolean z14 = z8;
            boolean z15 = z10;
            if (z12 && i13 > 0) {
                z12 = false;
            }
            boolean z16 = (!z11 || i14 <= 0) ? z11 : false;
            if (!z12 || (!z15 && i15 + i16 + i17 <= 0)) {
                if (!z16 || (!nj.f.f15531b && i18 < 3 && i6 < 3)) {
                    if (!z14 || !z16) {
                        if (!z14) {
                            if (!z16) {
                                if (!z12) {
                                    name = nj.f.a;
                                }
                            }
                        }
                        name = "ISO8859_1";
                    } else if (i18 == 2) {
                    }
                }
                name = "SJIS";
            }
            name = "UTF8";
        } else {
            name = cVar.name();
        }
        try {
            sb2.append(new String(bArr, name));
            arrayList.add(bArr);
        } catch (UnsupportedEncodingException unused) {
            throw jj.d.a();
        }
    }

    public static void c(a5.g gVar, StringBuilder sb2, int i5) {
        if (i5 * 13 > gVar.d()) {
            throw jj.d.a();
        }
        byte[] bArr = new byte[i5 * 2];
        int i6 = 0;
        while (i5 > 0) {
            int g6 = gVar.g(13);
            int i10 = (g6 % 96) | ((g6 / 96) << 8);
            int i11 = i10 + (i10 < 959 ? 41377 : 42657);
            bArr[i6] = (byte) (i11 >> 8);
            bArr[i6 + 1] = (byte) i11;
            i6 += 2;
            i5--;
        }
        try {
            sb2.append(new String(bArr, "GB2312"));
        } catch (UnsupportedEncodingException unused) {
            throw jj.d.a();
        }
    }

    public static void d(a5.g gVar, StringBuilder sb2, int i5) {
        if (i5 * 13 > gVar.d()) {
            throw jj.d.a();
        }
        byte[] bArr = new byte[i5 * 2];
        int i6 = 0;
        while (i5 > 0) {
            int g6 = gVar.g(13);
            int i10 = (g6 % JfifUtil.MARKER_SOFn) | ((g6 / JfifUtil.MARKER_SOFn) << 8);
            int i11 = i10 + (i10 < 7936 ? 33088 : 49472);
            bArr[i6] = (byte) (i11 >> 8);
            bArr[i6 + 1] = (byte) i11;
            i6 += 2;
            i5--;
        }
        try {
            sb2.append(new String(bArr, "SJIS"));
        } catch (UnsupportedEncodingException unused) {
            throw jj.d.a();
        }
    }

    public static void e(a5.g gVar, StringBuilder sb2, int i5) {
        while (i5 >= 3) {
            if (gVar.d() < 10) {
                throw jj.d.a();
            }
            int g6 = gVar.g(10);
            if (g6 >= 1000) {
                throw jj.d.a();
            }
            sb2.append(f(g6 / 100));
            sb2.append(f((g6 / 10) % 10));
            sb2.append(f(g6 % 10));
            i5 -= 3;
        }
        if (i5 == 2) {
            if (gVar.d() < 7) {
                throw jj.d.a();
            }
            int g10 = gVar.g(7);
            if (g10 >= 100) {
                throw jj.d.a();
            }
            sb2.append(f(g10 / 10));
            sb2.append(f(g10 % 10));
            return;
        }
        if (i5 == 1) {
            if (gVar.d() < 4) {
                throw jj.d.a();
            }
            int g11 = gVar.g(4);
            if (g11 >= 10) {
                throw jj.d.a();
            }
            sb2.append(f(g11));
        }
    }

    public static char f(int i5) {
        char[] cArr = a;
        if (i5 < cArr.length) {
            return cArr[i5];
        }
        throw jj.d.a();
    }
}
