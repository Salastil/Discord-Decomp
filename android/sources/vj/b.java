package vj;

import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public final class b extends h {
    public static final int[][] a = {new int[]{2, 1, 2, 2, 2, 2}, new int[]{2, 2, 2, 1, 2, 2}, new int[]{2, 2, 2, 2, 2, 1}, new int[]{1, 2, 1, 2, 2, 3}, new int[]{1, 2, 1, 3, 2, 2}, new int[]{1, 3, 1, 2, 2, 2}, new int[]{1, 2, 2, 2, 1, 3}, new int[]{1, 2, 2, 3, 1, 2}, new int[]{1, 3, 2, 2, 1, 2}, new int[]{2, 2, 1, 2, 1, 3}, new int[]{2, 2, 1, 3, 1, 2}, new int[]{2, 3, 1, 2, 1, 2}, new int[]{1, 1, 2, 2, 3, 2}, new int[]{1, 2, 2, 1, 3, 2}, new int[]{1, 2, 2, 2, 3, 1}, new int[]{1, 1, 3, 2, 2, 2}, new int[]{1, 2, 3, 1, 2, 2}, new int[]{1, 2, 3, 2, 2, 1}, new int[]{2, 2, 3, 2, 1, 1}, new int[]{2, 2, 1, 1, 3, 2}, new int[]{2, 2, 1, 2, 3, 1}, new int[]{2, 1, 3, 2, 1, 2}, new int[]{2, 2, 3, 1, 1, 2}, new int[]{3, 1, 2, 1, 3, 1}, new int[]{3, 1, 1, 2, 2, 2}, new int[]{3, 2, 1, 1, 2, 2}, new int[]{3, 2, 1, 2, 2, 1}, new int[]{3, 1, 2, 2, 1, 2}, new int[]{3, 2, 2, 1, 1, 2}, new int[]{3, 2, 2, 2, 1, 1}, new int[]{2, 1, 2, 1, 2, 3}, new int[]{2, 1, 2, 3, 2, 1}, new int[]{2, 3, 2, 1, 2, 1}, new int[]{1, 1, 1, 3, 2, 3}, new int[]{1, 3, 1, 1, 2, 3}, new int[]{1, 3, 1, 3, 2, 1}, new int[]{1, 1, 2, 3, 1, 3}, new int[]{1, 3, 2, 1, 1, 3}, new int[]{1, 3, 2, 3, 1, 1}, new int[]{2, 1, 1, 3, 1, 3}, new int[]{2, 3, 1, 1, 1, 3}, new int[]{2, 3, 1, 3, 1, 1}, new int[]{1, 1, 2, 1, 3, 3}, new int[]{1, 1, 2, 3, 3, 1}, new int[]{1, 3, 2, 1, 3, 1}, new int[]{1, 1, 3, 1, 2, 3}, new int[]{1, 1, 3, 3, 2, 1}, new int[]{1, 3, 3, 1, 2, 1}, new int[]{3, 1, 3, 1, 2, 1}, new int[]{2, 1, 1, 3, 3, 1}, new int[]{2, 3, 1, 1, 3, 1}, new int[]{2, 1, 3, 1, 1, 3}, new int[]{2, 1, 3, 3, 1, 1}, new int[]{2, 1, 3, 1, 3, 1}, new int[]{3, 1, 1, 1, 2, 3}, new int[]{3, 1, 1, 3, 2, 1}, new int[]{3, 3, 1, 1, 2, 1}, new int[]{3, 1, 2, 1, 1, 3}, new int[]{3, 1, 2, 3, 1, 1}, new int[]{3, 3, 2, 1, 1, 1}, new int[]{3, 1, 4, 1, 1, 1}, new int[]{2, 2, 1, 4, 1, 1}, new int[]{4, 3, 1, 1, 1, 1}, new int[]{1, 1, 1, 2, 2, 4}, new int[]{1, 1, 1, 4, 2, 2}, new int[]{1, 2, 1, 1, 2, 4}, new int[]{1, 2, 1, 4, 2, 1}, new int[]{1, 4, 1, 1, 2, 2}, new int[]{1, 4, 1, 2, 2, 1}, new int[]{1, 1, 2, 2, 1, 4}, new int[]{1, 1, 2, 4, 1, 2}, new int[]{1, 2, 2, 1, 1, 4}, new int[]{1, 2, 2, 4, 1, 1}, new int[]{1, 4, 2, 1, 1, 2}, new int[]{1, 4, 2, 2, 1, 1}, new int[]{2, 4, 1, 2, 1, 1}, new int[]{2, 2, 1, 1, 1, 4}, new int[]{4, 1, 3, 1, 1, 1}, new int[]{2, 4, 1, 1, 1, 2}, new int[]{1, 3, 4, 1, 1, 1}, new int[]{1, 1, 1, 2, 4, 2}, new int[]{1, 2, 1, 1, 4, 2}, new int[]{1, 2, 1, 2, 4, 1}, new int[]{1, 1, 4, 2, 1, 2}, new int[]{1, 2, 4, 1, 1, 2}, new int[]{1, 2, 4, 2, 1, 1}, new int[]{4, 1, 1, 2, 1, 2}, new int[]{4, 2, 1, 1, 1, 2}, new int[]{4, 2, 1, 2, 1, 1}, new int[]{2, 1, 2, 1, 4, 1}, new int[]{2, 1, 4, 1, 2, 1}, new int[]{4, 1, 2, 1, 2, 1}, new int[]{1, 1, 1, 1, 4, 3}, new int[]{1, 1, 1, 3, 4, 1}, new int[]{1, 3, 1, 1, 4, 1}, new int[]{1, 1, 4, 1, 1, 3}, new int[]{1, 1, 4, 3, 1, 1}, new int[]{4, 1, 1, 1, 1, 3}, new int[]{4, 1, 1, 3, 1, 1}, new int[]{1, 1, 3, 1, 4, 1}, new int[]{1, 1, 4, 1, 3, 1}, new int[]{3, 1, 1, 1, 4, 1}, new int[]{4, 1, 1, 1, 3, 1}, new int[]{2, 1, 1, 4, 1, 2}, new int[]{2, 1, 1, 2, 1, 4}, new int[]{2, 1, 1, 2, 3, 2}, new int[]{2, 3, 3, 1, 1, 1, 2}};

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:126:0x01b5, code lost:
    
        if (r14 != 0) goto L82;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x0155, code lost:
    
        if (r14 != 0) goto L82;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x0157, code lost:
    
        r6 = r23;
        r14 = r6;
        r15 = r14;
     */
    /* JADX WARN: Removed duplicated region for block: B:100:0x015e A[PHI: r14 r20 r24
      0x015e: PHI (r14v9 int) = 
      (r14v8 int)
      (r14v8 int)
      (r14v8 int)
      (r14v8 int)
      (r14v8 int)
      (r14v10 int)
      (r14v8 int)
      (r14v8 int)
      (r14v8 int)
      (r14v8 int)
     binds: [B:114:0x0191, B:115:0x0195, B:119:0x01a1, B:118:0x019d, B:105:0x0174, B:99:0x015c, B:87:0x0136, B:88:0x013a, B:92:0x0146, B:91:0x0142] A[DONT_GENERATE, DONT_INLINE]
      0x015e: PHI (r20v4 int) = 
      (r20v1 int)
      (r20v1 int)
      (r20v1 int)
      (r20v1 int)
      (r20v3 int)
      (r20v1 int)
      (r20v1 int)
      (r20v1 int)
      (r20v1 int)
      (r20v1 int)
     binds: [B:114:0x0191, B:115:0x0195, B:119:0x01a1, B:118:0x019d, B:105:0x0174, B:99:0x015c, B:87:0x0136, B:88:0x013a, B:92:0x0146, B:91:0x0142] A[DONT_GENERATE, DONT_INLINE]
      0x015e: PHI (r24v10 int) = 
      (r24v6 int)
      (r24v6 int)
      (r24v6 int)
      (r24v6 int)
      (r24v8 int)
      (r24v11 int)
      (r24v16 int)
      (r24v16 int)
      (r24v16 int)
      (r24v16 int)
     binds: [B:114:0x0191, B:115:0x0195, B:119:0x01a1, B:118:0x019d, B:105:0x0174, B:99:0x015c, B:87:0x0136, B:88:0x013a, B:92:0x0146, B:91:0x0142] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0169 A[PHI: r24
      0x0169: PHI (r24v9 int) = (r24v6 int), (r24v16 int) binds: [B:114:0x0191, B:87:0x0136] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00b2  */
    @Override // vj.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Result b(int i5, nj.a aVar, Map map) {
        int i6;
        int i10;
        float f2;
        int[][] iArr;
        char c6;
        char c8;
        int i11;
        int i12 = aVar.f15509e;
        int i13 = 1;
        int i14 = 0;
        boolean z5 = map != null && map.containsKey(jj.c.f12791y);
        int b10 = aVar.b(0);
        int i15 = 6;
        int[] iArr2 = new int[6];
        boolean z6 = false;
        int i16 = 0;
        int i17 = b10;
        while (b10 < i12) {
            if (aVar.a(b10) != z6) {
                iArr2[i16] = iArr2[i16] + i13;
                i6 = i13;
                i10 = i14;
            } else {
                if (i16 == 5) {
                    i6 = i13;
                    int i18 = 103;
                    int i19 = -1;
                    float f10 = 0.25f;
                    while (true) {
                        f2 = 0.7f;
                        iArr = a;
                        if (i18 > 105) {
                            break;
                        }
                        float d6 = h.d(iArr2, iArr[i18], 0.7f);
                        if (d6 < f10) {
                            f10 = d6;
                            i19 = i18;
                        }
                        i18++;
                    }
                    if (i19 >= 0 && aVar.d(Math.max(i14, i17 - ((b10 - i17) / 2)), i17)) {
                        int[] iArr3 = {i17, b10, i19};
                        int i20 = iArr3[2];
                        ArrayList arrayList = new ArrayList(20);
                        arrayList.add(Byte.valueOf((byte) i20));
                        switch (i20) {
                            case 103:
                                c6 = 'e';
                                break;
                            case 104:
                                c6 = 'd';
                                break;
                            case 105:
                                c6 = 'c';
                                break;
                            default:
                                throw jj.d.a();
                        }
                        StringBuilder sb2 = new StringBuilder(20);
                        int i21 = iArr3[i14];
                        int[] iArr4 = new int[i15];
                        int i22 = i14;
                        int i23 = i22;
                        int i24 = i23;
                        int i25 = i24;
                        int i26 = i25;
                        int i27 = i26;
                        int i28 = i27;
                        int i29 = i6;
                        char c10 = c6;
                        int i30 = i21;
                        int i31 = iArr3[i6];
                        while (i25 == 0) {
                            h.e(i31, aVar, iArr4);
                            int i32 = -1;
                            float f11 = 0.25f;
                            for (int i33 = i28; i33 < 107; i33++) {
                                float d7 = h.d(iArr4, iArr[i33], f2);
                                if (d7 < f11) {
                                    i32 = i33;
                                    f11 = d7;
                                }
                            }
                            if (i32 < 0) {
                                throw jj.g.f12795i;
                            }
                            arrayList.add(Byte.valueOf((byte) i32));
                            if (i32 != 106) {
                                i29 = i6;
                            }
                            if (i32 != 106) {
                                i28++;
                                i20 = (i28 * i32) + i20;
                            }
                            int i34 = i31;
                            for (int i35 = i28; i35 < 6; i35++) {
                                i34 += iArr4[i35];
                            }
                            switch (i32) {
                                case 103:
                                case 104:
                                case 105:
                                    throw jj.d.a();
                                default:
                                    switch (c10) {
                                        case 'c':
                                            c8 = 'd';
                                            if (i32 < 100) {
                                                if (i32 < 10) {
                                                    sb2.append('0');
                                                }
                                                sb2.append(i32);
                                            } else {
                                                if (i32 != 106) {
                                                    i29 = i28;
                                                }
                                                if (i32 != 106) {
                                                    switch (i32) {
                                                        case 100:
                                                            c10 = 'd';
                                                            break;
                                                        case 101:
                                                            i11 = i28;
                                                            c10 = 'e';
                                                            break;
                                                        case 102:
                                                            if (z5) {
                                                                if (sb2.length() == 0) {
                                                                    sb2.append("]C1");
                                                                    break;
                                                                } else {
                                                                    sb2.append((char) 29);
                                                                    break;
                                                                }
                                                            }
                                                            break;
                                                    }
                                                } else {
                                                    i25 = i6;
                                                }
                                            }
                                            i11 = i28;
                                            break;
                                        case 'd':
                                            if (i32 < 96) {
                                                if (i23 == i24) {
                                                    sb2.append((char) (i32 + 32));
                                                } else {
                                                    sb2.append((char) (i32 + 160));
                                                }
                                                i11 = i28;
                                                i23 = i11;
                                                c8 = 'd';
                                                break;
                                            } else {
                                                if (i32 != 106) {
                                                    i29 = i28;
                                                }
                                                if (i32 != 106) {
                                                    switch (i32) {
                                                        case 96:
                                                        case 97:
                                                        default:
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            break;
                                                        case 98:
                                                            i11 = i6;
                                                            c8 = 'd';
                                                            c10 = 'e';
                                                            break;
                                                        case 99:
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            c10 = 'c';
                                                            break;
                                                        case 100:
                                                            if (i24 != 0 || i23 == 0) {
                                                                if (i24 != 0) {
                                                                }
                                                                i23 = i6;
                                                                i11 = i28;
                                                                c8 = 'd';
                                                                break;
                                                            }
                                                            i24 = i6;
                                                            i11 = i28;
                                                            i23 = i11;
                                                            c8 = 'd';
                                                            break;
                                                        case 101:
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            c10 = 'e';
                                                            break;
                                                        case 102:
                                                            if (z5) {
                                                                if (sb2.length() == 0) {
                                                                    sb2.append("]C1");
                                                                } else {
                                                                    sb2.append((char) 29);
                                                                }
                                                            }
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            break;
                                                    }
                                                }
                                                i25 = i6;
                                                i11 = i28;
                                                c8 = 'd';
                                            }
                                            break;
                                        case 'e':
                                            if (i32 < 64) {
                                                if (i23 == i24) {
                                                    sb2.append((char) (i32 + 32));
                                                } else {
                                                    sb2.append((char) (i32 + 160));
                                                }
                                            } else if (i32 >= 96) {
                                                if (i32 != 106) {
                                                    i29 = i28;
                                                }
                                                if (i32 != 106) {
                                                    switch (i32) {
                                                        case 98:
                                                            i11 = i6;
                                                            c8 = 'd';
                                                            c10 = 'd';
                                                            break;
                                                        case 100:
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            c10 = 'd';
                                                            break;
                                                        case 101:
                                                            if (i24 != 0 || i23 == 0) {
                                                                if (i24 != 0) {
                                                                }
                                                                i23 = i6;
                                                                i11 = i28;
                                                                c8 = 'd';
                                                                break;
                                                            }
                                                            i24 = i6;
                                                            break;
                                                        case 102:
                                                            if (z5) {
                                                                if (sb2.length() == 0) {
                                                                    sb2.append("]C1");
                                                                } else {
                                                                    sb2.append((char) 29);
                                                                }
                                                            }
                                                            i11 = i28;
                                                            c8 = 'd';
                                                            break;
                                                    }
                                                }
                                                i25 = i6;
                                                i11 = i28;
                                                c8 = 'd';
                                            } else if (i23 == i24) {
                                                sb2.append((char) (i32 - 64));
                                            } else {
                                                sb2.append((char) (i32 + 64));
                                            }
                                            i11 = i28;
                                            i23 = i11;
                                            c8 = 'd';
                                            break;
                                        default:
                                            c8 = 'd';
                                            i11 = i28;
                                            break;
                                    }
                                    if (i26 != 0) {
                                        c10 = c10 == 'e' ? c8 : 'e';
                                    }
                                    int i36 = i27;
                                    i27 = i32;
                                    i22 = i36;
                                    i26 = i11;
                                    i30 = i31;
                                    i31 = i34;
                                    f2 = 0.7f;
                                    break;
                            }
                            while (i25 == 0) {
                            }
                        }
                        int i37 = i31 - i30;
                        int c11 = aVar.c(i31);
                        if (!aVar.d(c11, Math.min(i12, ((c11 - i30) / 2) + c11))) {
                            throw jj.g.f12795i;
                        }
                        if ((i20 - (i28 * i22)) % 103 != i22) {
                            throw jj.b.a();
                        }
                        int length = sb2.length();
                        if (length == 0) {
                            throw jj.g.f12795i;
                        }
                        if (length > 0 && i29 != 0) {
                            if (c10 == 'c') {
                                sb2.delete(length - 2, length);
                            } else {
                                sb2.delete(length - 1, length);
                            }
                        }
                        float f12 = (iArr3[i6] + iArr3[i28]) / 2.0f;
                        float f13 = (i37 / 2.0f) + i30;
                        int size = arrayList.size();
                        byte[] bArr = new byte[size];
                        for (int i38 = i28; i38 < size; i38++) {
                            bArr[i38] = ((Byte) arrayList.get(i38)).byteValue();
                        }
                        float f14 = i5;
                        return new Result(sb2.toString(), bArr, new l[]{new l(f12, f14), new l(f13, f14)}, jj.a.f12781w);
                    }
                    int i39 = i14;
                    i17 += iArr2[i39] + iArr2[i6];
                    int i40 = i16 - 1;
                    i10 = i39;
                    System.arraycopy(iArr2, 2, iArr2, i10, i40);
                    iArr2[i40] = i10;
                    iArr2[i16] = i10;
                    i16--;
                } else {
                    i6 = i13;
                    i10 = i14;
                    i16++;
                }
                iArr2[i16] = i6;
                z6 = !z6;
            }
            b10++;
            i14 = i10;
            i13 = i6;
            i15 = 6;
        }
        throw jj.g.f12795i;
    }
}
