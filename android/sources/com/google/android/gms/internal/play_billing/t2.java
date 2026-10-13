package com.google.android.gms.internal.play_billing;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.reflect.Field;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class t2 implements y2 {

    /* renamed from: i, reason: collision with root package name */
    public static final int[] f5838i = new int[0];
    public static final Unsafe j = l3.e();
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final Object[] f5839b;

    /* renamed from: c, reason: collision with root package name */
    public final int f5840c;

    /* renamed from: d, reason: collision with root package name */
    public final int f5841d;

    /* renamed from: e, reason: collision with root package name */
    public final p1 f5842e;

    /* renamed from: f, reason: collision with root package name */
    public final int[] f5843f;

    /* renamed from: g, reason: collision with root package name */
    public final int f5844g;

    /* renamed from: h, reason: collision with root package name */
    public final int f5845h;

    public t2(int[] iArr, Object[] objArr, int i5, int i6, p1 p1Var, int[] iArr2, int i10, int i11, a aVar, a aVar2) {
        this.a = iArr;
        this.f5839b = objArr;
        this.f5840c = i5;
        this.f5841d = i6;
        this.f5843f = iArr2;
        this.f5844g = i10;
        this.f5845h = i11;
        this.f5842e = p1Var;
    }

    public static long A(long j5, Object obj) {
        return ((Long) l3.d(j5, obj)).longValue();
    }

    public static Field F(Class cls, String str) {
        try {
            return cls.getDeclaredField(str);
        } catch (NoSuchFieldException e9) {
            Field[] declaredFields = cls.getDeclaredFields();
            for (Field field : declaredFields) {
                if (str.equals(field.getName())) {
                    return field;
                }
            }
            String name = cls.getName();
            String arrays = Arrays.toString(declaredFields);
            StringBuilder t5 = a3.e.t("Field ", str, " for ", name, " not found. Known fields are ");
            t5.append(arrays);
            throw new RuntimeException(t5.toString(), e9);
        }
    }

    public static boolean r(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj instanceof e2) {
            return ((e2) obj).h();
        }
        return true;
    }

    public static final int t(byte[] bArr, int i5, int i6, r3 r3Var, Class cls, s1 s1Var) {
        r3 r3Var2 = r3.f5818i;
        switch (r3Var.ordinal()) {
            case 0:
                int i10 = i5 + 8;
                s1Var.f5825c = Double.valueOf(Double.longBitsToDouble(a2.P(bArr, i5)));
                return i10;
            case 1:
                int i11 = i5 + 4;
                s1Var.f5825c = Float.valueOf(Float.intBitsToFloat(a2.n(bArr, i5)));
                return i11;
            case 2:
            case 3:
                int L = a2.L(bArr, i5, s1Var);
                s1Var.f5825c = Long.valueOf(s1Var.f5824b);
                return L;
            case 4:
            case 12:
            case 13:
                int I = a2.I(bArr, i5, s1Var);
                s1Var.f5825c = Integer.valueOf(s1Var.a);
                return I;
            case 5:
            case 15:
                int i12 = i5 + 8;
                s1Var.f5825c = Long.valueOf(a2.P(bArr, i5));
                return i12;
            case 6:
            case 14:
                int i13 = i5 + 4;
                s1Var.f5825c = Integer.valueOf(a2.n(bArr, i5));
                return i13;
            case 7:
                int L2 = a2.L(bArr, i5, s1Var);
                s1Var.f5825c = Boolean.valueOf(s1Var.f5824b != 0);
                return L2;
            case 8:
                return a2.F(bArr, i5, s1Var);
            case 9:
            default:
                throw new RuntimeException("unsupported field type.");
            case 10:
                y2 a = v2.f5858b.a(cls);
                e2 g6 = a.g();
                int N = a2.N(g6, a, bArr, i5, i6, s1Var);
                a.a(g6);
                s1Var.f5825c = g6;
                return N;
            case 11:
                return a2.c(bArr, i5, s1Var);
            case 16:
                int I2 = a2.I(bArr, i5, s1Var);
                s1Var.f5825c = Integer.valueOf(a2.l(s1Var.a));
                return I2;
            case 17:
                int L3 = a2.L(bArr, i5, s1Var);
                long j5 = s1Var.f5824b;
                s1Var.f5825c = Long.valueOf((j5 >>> 1) ^ (-(1 & j5)));
                return L3;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:106:0x0348  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x03a6  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0259  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0278  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x027b  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x025c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static t2 v(x2 x2Var, a aVar, a aVar2) {
        int i5;
        int charAt;
        int charAt2;
        int i6;
        int[] iArr;
        int i10;
        int i11;
        int i12;
        int i13;
        char charAt3;
        int i14;
        int i15;
        char charAt4;
        int i16;
        char charAt5;
        int i17;
        char charAt6;
        int i18;
        char charAt7;
        int i19;
        char charAt8;
        int i20;
        char charAt9;
        int i21;
        int i22;
        int i23;
        int i24;
        int i25;
        int i26;
        int objectFieldOffset;
        String str;
        int i27;
        int i28;
        int i29;
        Field F;
        int i30;
        char charAt10;
        int i31;
        int i32;
        int i33;
        int i34;
        Object obj;
        Field F2;
        Object obj2;
        Field F3;
        int i35;
        char charAt11;
        int i36;
        char charAt12;
        int i37;
        char charAt13;
        int i38;
        char charAt14;
        Unsafe unsafe = j;
        if (unsafe == null) {
            throw new RuntimeException("Lite gencode is primarily intended for Android use and uses sun.misc.Unsafe which is not available in the current environment. To run in this environment, you may need to switch to standard gencode.");
        }
        if (!(x2Var instanceof x2)) {
            x2Var.getClass();
            throw new ClassCastException();
        }
        String str2 = x2Var.f5885b;
        int length = str2.length();
        int i39 = 0;
        char c6 = 55296;
        if (str2.charAt(0) >= 55296) {
            int i40 = 1;
            while (true) {
                i5 = i40 + 1;
                if (str2.charAt(i40) < 55296) {
                    break;
                }
                i40 = i5;
            }
        } else {
            i5 = 1;
        }
        int i41 = i5 + 1;
        int charAt15 = str2.charAt(i5);
        if (charAt15 >= 55296) {
            int i42 = charAt15 & 8191;
            int i43 = 13;
            while (true) {
                i38 = i41 + 1;
                charAt14 = str2.charAt(i41);
                if (charAt14 < 55296) {
                    break;
                }
                i42 |= (charAt14 & 8191) << i43;
                i43 += 13;
                i41 = i38;
            }
            charAt15 = i42 | (charAt14 << i43);
            i41 = i38;
        }
        if (charAt15 == 0) {
            iArr = f5838i;
            charAt = 0;
            charAt2 = 0;
            i6 = 0;
            i10 = 0;
            i11 = 0;
            i12 = 0;
        } else {
            int i44 = i41 + 1;
            int charAt16 = str2.charAt(i41);
            if (charAt16 >= 55296) {
                int i45 = charAt16 & 8191;
                int i46 = 13;
                while (true) {
                    i20 = i44 + 1;
                    charAt9 = str2.charAt(i44);
                    if (charAt9 < 55296) {
                        break;
                    }
                    i45 |= (charAt9 & 8191) << i46;
                    i46 += 13;
                    i44 = i20;
                }
                charAt16 = i45 | (charAt9 << i46);
                i44 = i20;
            }
            int i47 = i44 + 1;
            int charAt17 = str2.charAt(i44);
            if (charAt17 >= 55296) {
                int i48 = charAt17 & 8191;
                int i49 = 13;
                while (true) {
                    i19 = i47 + 1;
                    charAt8 = str2.charAt(i47);
                    if (charAt8 < 55296) {
                        break;
                    }
                    i48 |= (charAt8 & 8191) << i49;
                    i49 += 13;
                    i47 = i19;
                }
                charAt17 = i48 | (charAt8 << i49);
                i47 = i19;
            }
            int i50 = i47 + 1;
            int charAt18 = str2.charAt(i47);
            if (charAt18 >= 55296) {
                int i51 = charAt18 & 8191;
                int i52 = 13;
                while (true) {
                    i18 = i50 + 1;
                    charAt7 = str2.charAt(i50);
                    if (charAt7 < 55296) {
                        break;
                    }
                    i51 |= (charAt7 & 8191) << i52;
                    i52 += 13;
                    i50 = i18;
                }
                charAt18 = i51 | (charAt7 << i52);
                i50 = i18;
            }
            int i53 = i50 + 1;
            int charAt19 = str2.charAt(i50);
            if (charAt19 >= 55296) {
                int i54 = charAt19 & 8191;
                int i55 = 13;
                while (true) {
                    i17 = i53 + 1;
                    charAt6 = str2.charAt(i53);
                    if (charAt6 < 55296) {
                        break;
                    }
                    i54 |= (charAt6 & 8191) << i55;
                    i55 += 13;
                    i53 = i17;
                }
                charAt19 = i54 | (charAt6 << i55);
                i53 = i17;
            }
            int i56 = i53 + 1;
            charAt = str2.charAt(i53);
            if (charAt >= 55296) {
                int i57 = charAt & 8191;
                int i58 = 13;
                while (true) {
                    i16 = i56 + 1;
                    charAt5 = str2.charAt(i56);
                    if (charAt5 < 55296) {
                        break;
                    }
                    i57 |= (charAt5 & 8191) << i58;
                    i58 += 13;
                    i56 = i16;
                }
                charAt = i57 | (charAt5 << i58);
                i56 = i16;
            }
            int i59 = i56 + 1;
            charAt2 = str2.charAt(i56);
            if (charAt2 >= 55296) {
                int i60 = charAt2 & 8191;
                int i61 = 13;
                while (true) {
                    i15 = i59 + 1;
                    charAt4 = str2.charAt(i59);
                    if (charAt4 < 55296) {
                        break;
                    }
                    i60 |= (charAt4 & 8191) << i61;
                    i61 += 13;
                    i59 = i15;
                }
                charAt2 = i60 | (charAt4 << i61);
                i59 = i15;
            }
            int i62 = i59 + 1;
            if (str2.charAt(i59) >= 55296) {
                while (true) {
                    i14 = i62 + 1;
                    if (str2.charAt(i62) < 55296) {
                        break;
                    }
                    i62 = i14;
                }
                i62 = i14;
            }
            int i63 = i62 + 1;
            int charAt20 = str2.charAt(i62);
            if (charAt20 >= 55296) {
                int i64 = charAt20 & 8191;
                int i65 = 13;
                while (true) {
                    i13 = i63 + 1;
                    charAt3 = str2.charAt(i63);
                    if (charAt3 < 55296) {
                        break;
                    }
                    i64 |= (charAt3 & 8191) << i65;
                    i65 += 13;
                    i63 = i13;
                }
                charAt20 = i64 | (charAt3 << i65);
                i63 = i13;
            }
            i6 = charAt16 + charAt16 + charAt17;
            iArr = new int[charAt20 + charAt2 + charAt16];
            i39 = charAt16;
            i10 = charAt18;
            i11 = charAt19;
            i41 = i63;
            i12 = charAt20;
        }
        int[] iArr2 = iArr;
        Object[] objArr = x2Var.f5886c;
        Class<?> cls = x2Var.a.getClass();
        int i66 = i12 + charAt2;
        int i67 = charAt + charAt;
        int[] iArr3 = new int[charAt * 3];
        Object[] objArr2 = new Object[i67];
        int i68 = i12;
        int i69 = i66;
        int i70 = 0;
        int i71 = 0;
        while (i41 < length) {
            int i72 = i41 + 1;
            int charAt21 = str2.charAt(i41);
            if (charAt21 >= c6) {
                int i73 = charAt21 & 8191;
                int i74 = i72;
                int i75 = 13;
                while (true) {
                    i37 = i74 + 1;
                    charAt13 = str2.charAt(i74);
                    if (charAt13 < c6) {
                        break;
                    }
                    i73 |= (charAt13 & 8191) << i75;
                    i75 += 13;
                    i74 = i37;
                }
                charAt21 = i73 | (charAt13 << i75);
                i21 = i37;
            } else {
                i21 = i72;
            }
            int i76 = i21 + 1;
            int charAt22 = str2.charAt(i21);
            if (charAt22 >= c6) {
                int i77 = charAt22 & 8191;
                int i78 = i76;
                int i79 = 13;
                while (true) {
                    i36 = i78 + 1;
                    charAt12 = str2.charAt(i78);
                    if (charAt12 < c6) {
                        break;
                    }
                    i77 |= (charAt12 & 8191) << i79;
                    i79 += 13;
                    i78 = i36;
                }
                charAt22 = i77 | (charAt12 << i79);
                i22 = i36;
            } else {
                i22 = i76;
            }
            if ((charAt22 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
                iArr2[i70] = i71;
                i70++;
            }
            int i80 = charAt22 & 255;
            int i81 = length;
            int i82 = charAt22 & RecyclerView.ItemAnimator.FLAG_MOVED;
            if (i80 >= 51) {
                int i83 = i22 + 1;
                int charAt23 = str2.charAt(i22);
                char c8 = 55296;
                if (charAt23 >= 55296) {
                    int i84 = charAt23 & 8191;
                    int i85 = i83;
                    int i86 = 13;
                    while (true) {
                        i35 = i85 + 1;
                        charAt11 = str2.charAt(i85);
                        if (charAt11 < c8) {
                            break;
                        }
                        i84 |= (charAt11 & 8191) << i86;
                        i86 += 13;
                        i85 = i35;
                        c8 = 55296;
                    }
                    charAt23 = i84 | (charAt11 << i86);
                    i32 = i35;
                } else {
                    i32 = i83;
                }
                int i87 = i32;
                int i88 = i80 - 51;
                i23 = i39;
                if (i88 == 9 || i88 == 17) {
                    i33 = i6 + 1;
                    int i89 = i71 / 3;
                    objArr2[i89 + i89 + 1] = objArr[i6];
                } else {
                    if (i88 == 12) {
                        if (x2Var.a() == 1 || i82 != 0) {
                            i33 = i6 + 1;
                            int i90 = i71 / 3;
                            objArr2[i90 + i90 + 1] = objArr[i6];
                        } else {
                            i34 = 0;
                            int i91 = charAt23 + charAt23;
                            obj = objArr[i91];
                            int i92 = i34;
                            if (obj instanceof Field) {
                                F2 = (Field) obj;
                            } else {
                                F2 = F(cls, (String) obj);
                                objArr[i91] = F2;
                                iArr2[i69] = i71;
                                i69++;
                            }
                            int objectFieldOffset2 = (int) unsafe.objectFieldOffset(F2);
                            int i93 = i91 + 1;
                            obj2 = objArr[i93];
                            if (obj2 instanceof Field) {
                                F3 = (Field) obj2;
                            } else {
                                F3 = F(cls, (String) obj2);
                                objArr[i93] = F3;
                            }
                            str = str2;
                            i29 = (int) unsafe.objectFieldOffset(F3);
                            i26 = i92;
                            i22 = i87;
                            objectFieldOffset = objectFieldOffset2;
                            i28 = 0;
                            i24 = charAt21;
                            i27 = i80;
                        }
                    }
                    i34 = i82;
                    int i912 = charAt23 + charAt23;
                    obj = objArr[i912];
                    int i922 = i34;
                    if (obj instanceof Field) {
                    }
                    int objectFieldOffset22 = (int) unsafe.objectFieldOffset(F2);
                    int i932 = i912 + 1;
                    obj2 = objArr[i932];
                    if (obj2 instanceof Field) {
                    }
                    str = str2;
                    i29 = (int) unsafe.objectFieldOffset(F3);
                    i26 = i922;
                    i22 = i87;
                    objectFieldOffset = objectFieldOffset22;
                    i28 = 0;
                    i24 = charAt21;
                    i27 = i80;
                }
                i6 = i33;
                i34 = i82;
                int i9122 = charAt23 + charAt23;
                obj = objArr[i9122];
                int i9222 = i34;
                if (obj instanceof Field) {
                }
                int objectFieldOffset222 = (int) unsafe.objectFieldOffset(F2);
                int i9322 = i9122 + 1;
                obj2 = objArr[i9322];
                if (obj2 instanceof Field) {
                }
                str = str2;
                i29 = (int) unsafe.objectFieldOffset(F3);
                i26 = i9222;
                i22 = i87;
                objectFieldOffset = objectFieldOffset222;
                i28 = 0;
                i24 = charAt21;
                i27 = i80;
            } else {
                i23 = i39;
                int i94 = i6 + 1;
                Field F4 = F(cls, (String) objArr[i6]);
                if (i80 == 9 || i80 == 17) {
                    i24 = charAt21;
                    int i95 = i71 / 3;
                    objArr2[i95 + i95 + 1] = F4.getType();
                } else {
                    if (i80 == 27) {
                        i24 = charAt21;
                        i31 = 1;
                        i6 += 2;
                    } else if (i80 == 49) {
                        i6 += 2;
                        i24 = charAt21;
                        i31 = 1;
                    } else {
                        if (i80 == 12 || i80 == 30 || i80 == 44) {
                            i24 = charAt21;
                            if (x2Var.a() == 1 || i82 != 0) {
                                i6 += 2;
                                int i96 = i71 / 3;
                                objArr2[i96 + i96 + 1] = objArr[i94];
                                i25 = i80;
                                i26 = i82;
                            } else {
                                i25 = i80;
                                i6 = i94;
                                i26 = 0;
                            }
                        } else if (i80 == 50) {
                            int i97 = i6 + 2;
                            int i98 = i68 + 1;
                            iArr2[i68] = i71;
                            int i99 = i71 / 3;
                            int i100 = i99 + i99;
                            objArr2[i100] = objArr[i94];
                            if (i82 != 0) {
                                i6 += 3;
                                objArr2[i100 + 1] = objArr[i97];
                                i25 = i80;
                                i26 = i82;
                                i68 = i98;
                            } else {
                                i6 = i97;
                                i25 = i80;
                                i68 = i98;
                                i26 = 0;
                            }
                            i24 = charAt21;
                        } else {
                            i24 = charAt21;
                        }
                        objectFieldOffset = (int) unsafe.objectFieldOffset(F4);
                        if ((charAt22 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                            i27 = i25;
                            if (i27 <= 17) {
                                int i101 = i22 + 1;
                                int charAt24 = str2.charAt(i22);
                                int i102 = i26;
                                if (charAt24 >= 55296) {
                                    int i103 = charAt24 & 8191;
                                    int i104 = 13;
                                    while (true) {
                                        i30 = i101 + 1;
                                        charAt10 = str2.charAt(i101);
                                        if (charAt10 < 55296) {
                                            break;
                                        }
                                        i103 |= (charAt10 & 8191) << i104;
                                        i104 += 13;
                                        i101 = i30;
                                    }
                                    charAt24 = i103 | (charAt10 << i104);
                                    i101 = i30;
                                }
                                int i105 = (charAt24 / 32) + i23 + i23;
                                Object obj3 = objArr[i105];
                                str = str2;
                                if (obj3 instanceof Field) {
                                    F = (Field) obj3;
                                } else {
                                    F = F(cls, (String) obj3);
                                    objArr[i105] = F;
                                }
                                i29 = (int) unsafe.objectFieldOffset(F);
                                i28 = charAt24 % 32;
                                i26 = i102;
                                i22 = i101;
                            } else {
                                str = str2;
                            }
                        } else {
                            str = str2;
                            i27 = i25;
                        }
                        i28 = 0;
                        i29 = 1048575;
                    }
                    int i106 = i71 / 3;
                    objArr2[i106 + i106 + i31] = objArr[i94];
                    i25 = i80;
                    i26 = i82;
                    objectFieldOffset = (int) unsafe.objectFieldOffset(F4);
                    if ((charAt22 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                    }
                    i28 = 0;
                    i29 = 1048575;
                }
                i25 = i80;
                i26 = i82;
                i6 = i94;
                objectFieldOffset = (int) unsafe.objectFieldOffset(F4);
                if ((charAt22 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                }
                i28 = 0;
                i29 = 1048575;
            }
            int i107 = i71 + 1;
            iArr3[i71] = i24;
            int i108 = i71 + 2;
            Unsafe unsafe2 = unsafe;
            iArr3[i107] = ((charAt22 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? 536870912 : 0) | ((charAt22 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? 268435456 : 0) | (i26 != 0 ? Integer.MIN_VALUE : 0) | (i27 << 20) | objectFieldOffset;
            i71 += 3;
            iArr3[i108] = (i28 << 20) | i29;
            i41 = i22;
            length = i81;
            unsafe = unsafe2;
            str2 = str;
            i39 = i23;
            c6 = 55296;
        }
        return new t2(iArr3, objArr2, i10, i11, x2Var.a, iArr2, i12, i66, aVar, aVar2);
    }

    public static int w(long j5, Object obj) {
        return ((Integer) l3.d(j5, obj)).intValue();
    }

    public static int y(int i5) {
        return (i5 >>> 20) & 255;
    }

    public final g2 B(int i5) {
        int i6 = i5 / 3;
        return (g2) this.f5839b[i6 + i6 + 1];
    }

    public final y2 C(int i5) {
        int i6 = i5 / 3;
        int i10 = i6 + i6;
        Object[] objArr = this.f5839b;
        y2 y2Var = (y2) objArr[i10];
        if (y2Var != null) {
            return y2Var;
        }
        y2 a = v2.f5858b.a((Class) objArr[i10 + 1]);
        objArr[i10] = a;
        return a;
    }

    public final Object D(int i5, Object obj) {
        y2 C = C(i5);
        int z5 = z(i5) & 1048575;
        if (!p(i5, obj)) {
            return C.g();
        }
        Object object = j.getObject(obj, z5);
        if (r(object)) {
            return object;
        }
        e2 g6 = C.g();
        if (object != null) {
            C.f(g6, object);
        }
        return g6;
    }

    public final Object E(int i5, int i6, Object obj) {
        y2 C = C(i6);
        if (!s(i5, i6, obj)) {
            return C.g();
        }
        Object object = j.getObject(obj, z(i6) & 1048575);
        if (r(object)) {
            return object;
        }
        e2 g6 = C.g();
        if (object != null) {
            C.f(g6, object);
        }
        return g6;
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void a(Object obj) {
        if (!r(obj)) {
            return;
        }
        if (obj instanceof e2) {
            e2 e2Var = (e2) obj;
            e2Var.g();
            e2Var.zza = 0;
            e2Var.e();
        }
        int i5 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i5 >= iArr.length) {
                g3 g3Var = ((e2) obj).zzc;
                if (g3Var.f5744e) {
                    g3Var.f5744e = false;
                    return;
                }
                return;
            }
            int z5 = z(i5);
            int i6 = 1048575 & z5;
            int y5 = y(z5);
            long j5 = i6;
            if (y5 != 9) {
                if (y5 != 60 && y5 != 68) {
                    switch (y5) {
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                        case 30:
                        case 31:
                        case 32:
                        case 33:
                        case 34:
                        case 35:
                        case 36:
                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        case 40:
                        case 41:
                        case 42:
                        case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                        case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        case 46:
                        case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        case 48:
                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                            q1 q1Var = (q1) ((i2) l3.d(j5, obj));
                            if (!q1Var.f5812d) {
                                break;
                            } else {
                                q1Var.f5812d = false;
                                break;
                            }
                        case 50:
                            Unsafe unsafe = j;
                            Object object = unsafe.getObject(obj, j5);
                            if (object == null) {
                                break;
                            } else {
                                ((r2) object).f5817d = false;
                                unsafe.putObject(obj, j5, object);
                                break;
                            }
                    }
                } else if (s(iArr[i5], i5, obj)) {
                    C(i5).a(j.getObject(obj, j5));
                }
                i5 += 3;
            }
            if (p(i5, obj)) {
                C(i5).a(j.getObject(obj, j5));
            }
            i5 += 3;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:130:0x037e  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x038c  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x039d  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x03ae  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x03b7  */
    /* JADX WARN: Removed duplicated region for block: B:144:0x03c0  */
    /* JADX WARN: Removed duplicated region for block: B:150:0x03dc  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x03e8  */
    /* JADX WARN: Removed duplicated region for block: B:158:0x0401  */
    /* JADX WARN: Removed duplicated region for block: B:165:0x0414  */
    /* JADX WARN: Removed duplicated region for block: B:167:0x041b  */
    /* JADX WARN: Removed duplicated region for block: B:171:0x0437  */
    /* JADX WARN: Removed duplicated region for block: B:173:0x043f  */
    /* JADX WARN: Removed duplicated region for block: B:174:0x0446  */
    /* JADX WARN: Removed duplicated region for block: B:175:0x044d  */
    /* JADX WARN: Removed duplicated region for block: B:177:0x0459  */
    /* JADX WARN: Removed duplicated region for block: B:179:0x0464  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x046f  */
    /* JADX WARN: Removed duplicated region for block: B:182:0x0476  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x0386 A[SYNTHETIC] */
    @Override // com.google.android.gms.internal.play_billing.y2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int b(p1 p1Var) {
        int i5;
        int S;
        int T;
        int i6;
        int i10;
        int c6;
        int i11;
        int h6;
        int i12;
        int i13;
        int S2;
        int size;
        int n6;
        int S3;
        int S4;
        int S5;
        int i14;
        int i15;
        q2 q2Var;
        int T2;
        int m5;
        int S6;
        int T3;
        int m6;
        int S7;
        int S8;
        int T4;
        t2 t2Var = this;
        p1 p1Var2 = p1Var;
        Unsafe unsafe = j;
        int i16 = 1048575;
        int i17 = 1048575;
        int i18 = 0;
        int i19 = 0;
        int i20 = 0;
        while (true) {
            int[] iArr = t2Var.a;
            if (i18 >= iArr.length) {
                return ((e2) p1Var).zzc.a() + i20;
            }
            int z5 = t2Var.z(i18);
            int y5 = y(z5);
            int i21 = iArr[i18];
            int i22 = iArr[i18 + 2];
            int i23 = i22 & i16;
            int i24 = 1;
            if (y5 <= 17) {
                if (i23 != i17) {
                    i19 = i23 == i16 ? 0 : unsafe.getInt(p1Var2, i23);
                    i17 = i23;
                }
                i5 = 1 << (i22 >>> 20);
            } else {
                i5 = 0;
            }
            int i25 = z5 & i16;
            if (y5 >= c2.f5716e.f5720d) {
                c2.f5717i.getClass();
            }
            long j5 = i25;
            char c8 = '?';
            int i26 = 4;
            int i27 = 8;
            switch (y5) {
                case 0:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 1:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 2:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        long j7 = unsafe.getLong(p1Var2, j5);
                        S = w1.S(i21 << 3);
                        T = w1.T(j7);
                        i6 = T + S;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 3:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        long j10 = unsafe.getLong(p1Var2, j5);
                        S = w1.S(i21 << 3);
                        T = w1.T(j10);
                        i6 = T + S;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 4:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        long j11 = unsafe.getInt(p1Var2, j5);
                        S = w1.S(i21 << 3);
                        T = w1.T(j11);
                        i6 = T + S;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 5:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 6:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 7:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 1, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 8:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        int i28 = i21 << 3;
                        Object object = unsafe.getObject(p1Var2, j5);
                        if (object instanceof u1) {
                            int S9 = w1.S(i28);
                            int d6 = ((u1) object).d();
                            i20 = com.discord.chat.bridge.botuikit.a.e(d6, d6, S9, i20);
                        } else {
                            int S10 = w1.S(i28);
                            int i29 = o3.a;
                            int m7 = a2.m((String) object);
                            i20 = com.discord.chat.bridge.botuikit.a.e(m7, m7, S10, i20);
                        }
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 9:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        Object object2 = unsafe.getObject(p1Var2, j5);
                        y2 C = t2Var.C(i18);
                        a aVar = z2.a;
                        int S11 = w1.S(i21 << 3);
                        int c10 = ((p1) object2).c(C);
                        i20 = com.discord.chat.bridge.botuikit.a.e(c10, c10, S11, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 10:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        u1 u1Var = (u1) unsafe.getObject(p1Var2, j5);
                        int S12 = w1.S(i21 << 3);
                        int d7 = u1Var.d();
                        i20 = com.discord.chat.bridge.botuikit.a.e(d7, d7, S12, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 11:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(unsafe.getInt(p1Var2, j5), w1.S(i21 << 3), i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 12:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        long j12 = unsafe.getInt(p1Var2, j5);
                        S = w1.S(i21 << 3);
                        T = w1.T(j12);
                        i6 = T + S;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 13:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 14:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 15:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        int i30 = unsafe.getInt(p1Var2, j5);
                        i20 = com.discord.chat.bridge.botuikit.a.d((i30 >> 31) ^ (i30 + i30), w1.S(i21 << 3), i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 16:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        long j13 = unsafe.getLong(p1Var2, j5);
                        S = w1.S(i21 << 3);
                        T = w1.T((j13 >> 63) ^ (j13 + j13));
                        i6 = T + S;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 17:
                    if (t2Var.q(p1Var2, i18, i17, i19, i5)) {
                        p1 p1Var3 = (p1) unsafe.getObject(p1Var2, j5);
                        y2 C2 = t2Var.C(i18);
                        a aVar2 = z2.a;
                        int S13 = w1.S(i21 << 3);
                        i10 = S13 + S13;
                        c6 = p1Var3.c(C2);
                        i6 = c6 + i10;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 18:
                    i11 = i17;
                    h6 = z2.h(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 19:
                    i11 = i17;
                    h6 = z2.g(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 20:
                    i12 = i17;
                    i13 = i19;
                    List list = (List) unsafe.getObject(p1Var2, j5);
                    a aVar3 = z2.a;
                    if (list.size() != 0) {
                        S2 = (w1.S(i21 << 3) * list.size()) + z2.j(list);
                        i20 += S2;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S2 = 0;
                    i20 += S2;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 21:
                    i12 = i17;
                    i13 = i19;
                    List list2 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar4 = z2.a;
                    size = list2.size();
                    if (size != 0) {
                        n6 = z2.n(list2);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 22:
                    i12 = i17;
                    i13 = i19;
                    List list3 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar5 = z2.a;
                    size = list3.size();
                    if (size != 0) {
                        n6 = z2.i(list3);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 23:
                    i11 = i17;
                    h6 = z2.h(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 24:
                    i11 = i17;
                    h6 = z2.g(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 25:
                    i12 = i17;
                    i13 = i19;
                    List list4 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar6 = z2.a;
                    int size2 = list4.size();
                    if (size2 != 0) {
                        S2 = (w1.S(i21 << 3) + 1) * size2;
                        i20 += S2;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S2 = 0;
                    i20 += S2;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 26:
                    i12 = i17;
                    i13 = i19;
                    List list5 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar7 = z2.a;
                    int size3 = list5.size();
                    if (size3 != 0) {
                        S4 = w1.S(i21 << 3) * size3;
                        for (int i31 = 0; i31 < size3; i31++) {
                            Object obj = list5.get(i31);
                            if (obj instanceof u1) {
                                int d8 = ((u1) obj).d();
                                S4 = com.discord.chat.bridge.botuikit.a.d(d8, d8, S4);
                            } else {
                                int i32 = o3.a;
                                int m10 = a2.m((String) obj);
                                S4 = com.discord.chat.bridge.botuikit.a.d(m10, m10, S4);
                            }
                        }
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 27:
                    i12 = i17;
                    i13 = i19;
                    List list6 = (List) unsafe.getObject(p1Var2, j5);
                    y2 C3 = t2Var.C(i18);
                    a aVar8 = z2.a;
                    int size4 = list6.size();
                    if (size4 == 0) {
                        S5 = 0;
                    } else {
                        S5 = w1.S(i21 << 3) * size4;
                        for (int i33 = 0; i33 < size4; i33++) {
                            int c11 = ((p1) list6.get(i33)).c(C3);
                            S5 = com.discord.chat.bridge.botuikit.a.d(c11, c11, S5);
                        }
                    }
                    i20 += S5;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 28:
                    i12 = i17;
                    i13 = i19;
                    List list7 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar9 = z2.a;
                    int size5 = list7.size();
                    if (size5 != 0) {
                        S4 = w1.S(i21 << 3) * size5;
                        for (int i34 = 0; i34 < list7.size(); i34++) {
                            int d10 = ((u1) list7.get(i34)).d();
                            S4 = com.discord.chat.bridge.botuikit.a.d(d10, d10, S4);
                        }
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 29:
                    i12 = i17;
                    i13 = i19;
                    List list8 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar10 = z2.a;
                    size = list8.size();
                    if (size != 0) {
                        n6 = z2.m(list8);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 30:
                    i12 = i17;
                    i13 = i19;
                    List list9 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar11 = z2.a;
                    size = list9.size();
                    if (size != 0) {
                        n6 = z2.f(list9);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 31:
                    i11 = i17;
                    h6 = z2.g(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 32:
                    i11 = i17;
                    h6 = z2.h(i21, (List) unsafe.getObject(p1Var2, j5));
                    i20 += h6;
                    i17 = i11;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 33:
                    i12 = i17;
                    i13 = i19;
                    List list10 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar12 = z2.a;
                    size = list10.size();
                    if (size != 0) {
                        n6 = z2.k(list10);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 34:
                    i12 = i17;
                    i13 = i19;
                    List list11 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar13 = z2.a;
                    size = list11.size();
                    if (size != 0) {
                        n6 = z2.l(list11);
                        S3 = w1.S(i21 << 3);
                        S4 = (S3 * size) + n6;
                        i20 += S4;
                        i17 = i12;
                        i19 = i13;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                    S4 = 0;
                    i20 += S4;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 35:
                    i12 = i17;
                    i13 = i19;
                    List list12 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar14 = z2.a;
                    int size6 = list12.size() * 8;
                    if (size6 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size6, w1.S(i21 << 3), size6, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 36:
                    i12 = i17;
                    i13 = i19;
                    List list13 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar15 = z2.a;
                    int size7 = list13.size() * 4;
                    if (size7 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size7, w1.S(i21 << 3), size7, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    i12 = i17;
                    i13 = i19;
                    int j14 = z2.j((List) unsafe.getObject(p1Var2, j5));
                    if (j14 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(j14, w1.S(i21 << 3), j14, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    i12 = i17;
                    i13 = i19;
                    int n10 = z2.n((List) unsafe.getObject(p1Var2, j5));
                    if (n10 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(n10, w1.S(i21 << 3), n10, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    i12 = i17;
                    i13 = i19;
                    int i35 = z2.i((List) unsafe.getObject(p1Var2, j5));
                    if (i35 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(i35, w1.S(i21 << 3), i35, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 40:
                    i12 = i17;
                    i13 = i19;
                    List list14 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar16 = z2.a;
                    int size8 = list14.size() * 8;
                    if (size8 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size8, w1.S(i21 << 3), size8, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 41:
                    i12 = i17;
                    i13 = i19;
                    List list15 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar17 = z2.a;
                    int size9 = list15.size() * 4;
                    if (size9 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size9, w1.S(i21 << 3), size9, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 42:
                    i12 = i17;
                    i13 = i19;
                    List list16 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar18 = z2.a;
                    int size10 = list16.size();
                    if (size10 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size10, w1.S(i21 << 3), size10, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    i12 = i17;
                    i13 = i19;
                    int m11 = z2.m((List) unsafe.getObject(p1Var2, j5));
                    if (m11 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(m11, w1.S(i21 << 3), m11, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    i12 = i17;
                    i13 = i19;
                    int f2 = z2.f((List) unsafe.getObject(p1Var2, j5));
                    if (f2 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(f2, w1.S(i21 << 3), f2, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    i12 = i17;
                    i13 = i19;
                    List list17 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar19 = z2.a;
                    int size11 = list17.size() * 4;
                    if (size11 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size11, w1.S(i21 << 3), size11, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 46:
                    i12 = i17;
                    i13 = i19;
                    List list18 = (List) unsafe.getObject(p1Var2, j5);
                    a aVar20 = z2.a;
                    int size12 = list18.size() * 8;
                    if (size12 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(size12, w1.S(i21 << 3), size12, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    i12 = i17;
                    i13 = i19;
                    int k = z2.k((List) unsafe.getObject(p1Var2, j5));
                    if (k > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(k, w1.S(i21 << 3), k, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 48:
                    i12 = i17;
                    i13 = i19;
                    int l6 = z2.l((List) unsafe.getObject(p1Var2, j5));
                    if (l6 > 0) {
                        i20 = com.discord.chat.bridge.botuikit.a.e(l6, w1.S(i21 << 3), l6, i20);
                    }
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    i12 = i17;
                    i13 = i19;
                    List list19 = (List) unsafe.getObject(p1Var2, j5);
                    y2 C4 = t2Var.C(i18);
                    a aVar21 = z2.a;
                    int size13 = list19.size();
                    if (size13 == 0) {
                        i14 = 0;
                    } else {
                        i14 = 0;
                        for (int i36 = 0; i36 < size13; i36++) {
                            p1 p1Var4 = (p1) list19.get(i36);
                            int S14 = w1.S(i21 << 3);
                            i14 += p1Var4.c(C4) + S14 + S14;
                        }
                    }
                    i20 += i14;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 50:
                    int i37 = i18 / 3;
                    r2 r2Var = (r2) unsafe.getObject(p1Var2, j5);
                    q2 q2Var2 = (q2) t2Var.f5839b[i37 + i37];
                    if (r2Var.isEmpty()) {
                        i15 = 0;
                    } else {
                        i15 = 0;
                        for (Map.Entry entry : r2Var.entrySet()) {
                            char c12 = c8;
                            Object key = entry.getKey();
                            Object value = entry.getValue();
                            int i38 = i24;
                            e4.m mVar = q2Var2.a;
                            int i39 = i26;
                            int S15 = w1.S(i21 << 3);
                            int i40 = i27;
                            r3 r3Var = (r3) mVar.f7963e;
                            r3 r3Var2 = (r3) mVar.f7964i;
                            int i41 = b2.f5704c;
                            int S16 = w1.S(i40);
                            int i42 = i17;
                            r3 r3Var3 = r3.f5819v;
                            if (r3Var == r3Var3) {
                                S16 += S16;
                            }
                            s3 s3Var = s3.f5827d;
                            Object obj2 = null;
                            int i43 = i19;
                            switch (r3Var.ordinal()) {
                                case 0:
                                    q2Var = q2Var2;
                                    ((Double) key).getClass();
                                    T2 = i40;
                                    int i44 = T2 + S16;
                                    int S17 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                        S17 += S17;
                                    }
                                    switch (r3Var2.ordinal()) {
                                        case 0:
                                            ((Double) value).getClass();
                                            T3 = i40;
                                            int i45 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45, i45, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 1:
                                            ((Float) value).getClass();
                                            T3 = i39;
                                            int i452 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452, i452, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 2:
                                            T3 = w1.T(((Long) value).longValue());
                                            int i4522 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522, i4522, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 3:
                                            T3 = w1.T(((Long) value).longValue());
                                            int i45222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45222, i45222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 4:
                                            T3 = w1.T(((Integer) value).intValue());
                                            int i452222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452222, i452222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 5:
                                            ((Long) value).getClass();
                                            T3 = i40;
                                            int i4522222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522222, i4522222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 6:
                                            ((Integer) value).getClass();
                                            T3 = i39;
                                            int i45222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45222222, i45222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 7:
                                            ((Boolean) value).getClass();
                                            T3 = i38;
                                            int i452222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452222222, i452222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 8:
                                            if (value instanceof u1) {
                                                m6 = ((u1) value).d();
                                                S7 = w1.S(m6);
                                            } else {
                                                int i46 = o3.a;
                                                m6 = a2.m((String) value);
                                                S7 = w1.S(m6);
                                            }
                                            T3 = m6 + S7;
                                            int i4522222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522222222, i4522222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 9:
                                            T3 = ((p1) value).d();
                                            int i45222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45222222222, i45222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 10:
                                            if (value instanceof k2) {
                                                obj2.getClass();
                                                throw null;
                                            }
                                            m6 = ((p1) value).d();
                                            S7 = w1.S(m6);
                                            T3 = m6 + S7;
                                            int i452222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452222222222, i452222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 11:
                                            if (value instanceof u1) {
                                                m6 = ((u1) value).d();
                                                S7 = w1.S(m6);
                                            } else {
                                                m6 = ((byte[]) value).length;
                                                S7 = w1.S(m6);
                                            }
                                            T3 = m6 + S7;
                                            int i4522222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522222222222, i4522222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 12:
                                            T3 = w1.S(((Integer) value).intValue());
                                            int i45222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45222222222222, i45222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 13:
                                            T3 = value instanceof a4 ? w1.T(((a4) value).f5700d) : w1.T(((Integer) value).intValue());
                                            int i452222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452222222222222, i452222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 14:
                                            ((Integer) value).getClass();
                                            T3 = i39;
                                            int i4522222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522222222222222, i4522222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 15:
                                            ((Long) value).getClass();
                                            T3 = i40;
                                            int i45222222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i45222222222222222, i45222222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 16:
                                            int intValue = ((Integer) value).intValue();
                                            T3 = w1.S((intValue >> 31) ^ (intValue + intValue));
                                            int i452222222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i452222222222222222, i452222222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        case 17:
                                            long longValue = ((Long) value).longValue();
                                            T3 = w1.T((longValue >> c12) ^ (longValue + longValue));
                                            int i4522222222222222222 = T3 + S17 + i44;
                                            i15 = com.discord.chat.bridge.botuikit.a.e(i4522222222222222222, i4522222222222222222, S15, i15);
                                            c8 = c12;
                                            i24 = i38;
                                            i27 = i40;
                                            i26 = i39;
                                            i17 = i42;
                                            i19 = i43;
                                            q2Var2 = q2Var;
                                        default:
                                            throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                                    }
                                case 1:
                                    q2Var = q2Var2;
                                    ((Float) key).getClass();
                                    T2 = i39;
                                    int i442 = T2 + S16;
                                    int S172 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 2:
                                    q2Var = q2Var2;
                                    T2 = w1.T(((Long) key).longValue());
                                    int i4422 = T2 + S16;
                                    int S1722 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 3:
                                    q2Var = q2Var2;
                                    T2 = w1.T(((Long) key).longValue());
                                    int i44222 = T2 + S16;
                                    int S17222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 4:
                                    q2Var = q2Var2;
                                    T2 = w1.T(((Integer) key).intValue());
                                    int i442222 = T2 + S16;
                                    int S172222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 5:
                                    q2Var = q2Var2;
                                    ((Long) key).getClass();
                                    T2 = i40;
                                    int i4422222 = T2 + S16;
                                    int S1722222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 6:
                                    q2Var = q2Var2;
                                    ((Integer) key).getClass();
                                    T2 = i39;
                                    int i44222222 = T2 + S16;
                                    int S17222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 7:
                                    q2Var = q2Var2;
                                    ((Boolean) key).getClass();
                                    T2 = i38;
                                    int i442222222 = T2 + S16;
                                    int S172222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 8:
                                    q2Var = q2Var2;
                                    if (key instanceof u1) {
                                        m5 = ((u1) key).d();
                                        S6 = w1.S(m5);
                                    } else {
                                        int i47 = o3.a;
                                        m5 = a2.m((String) key);
                                        S6 = w1.S(m5);
                                    }
                                    T2 = m5 + S6;
                                    int i4422222222 = T2 + S16;
                                    int S1722222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 9:
                                    q2Var = q2Var2;
                                    T2 = ((p1) key).d();
                                    int i44222222222 = T2 + S16;
                                    int S17222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 10:
                                    q2Var = q2Var2;
                                    if (key instanceof k2) {
                                        obj2.getClass();
                                        throw null;
                                    }
                                    m5 = ((p1) key).d();
                                    S6 = w1.S(m5);
                                    T2 = m5 + S6;
                                    int i442222222222 = T2 + S16;
                                    int S172222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 11:
                                    q2Var = q2Var2;
                                    if (key instanceof u1) {
                                        m5 = ((u1) key).d();
                                        S6 = w1.S(m5);
                                    } else {
                                        m5 = ((byte[]) key).length;
                                        S6 = w1.S(m5);
                                    }
                                    T2 = m5 + S6;
                                    int i4422222222222 = T2 + S16;
                                    int S1722222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 12:
                                    q2Var = q2Var2;
                                    T2 = w1.S(((Integer) key).intValue());
                                    int i44222222222222 = T2 + S16;
                                    int S17222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 13:
                                    if (key instanceof a4) {
                                        q2Var = q2Var2;
                                        T2 = w1.T(((a4) key).f5700d);
                                    } else {
                                        q2Var = q2Var2;
                                        T2 = w1.T(((Integer) key).intValue());
                                    }
                                    int i442222222222222 = T2 + S16;
                                    int S172222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 14:
                                    ((Integer) key).getClass();
                                    q2Var = q2Var2;
                                    T2 = i39;
                                    int i4422222222222222 = T2 + S16;
                                    int S1722222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 15:
                                    ((Long) key).getClass();
                                    q2Var = q2Var2;
                                    T2 = i40;
                                    int i44222222222222222 = T2 + S16;
                                    int S17222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 16:
                                    int intValue2 = ((Integer) key).intValue();
                                    T2 = w1.S((intValue2 >> 31) ^ (intValue2 + intValue2));
                                    q2Var = q2Var2;
                                    int i442222222222222222 = T2 + S16;
                                    int S172222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 17:
                                    long longValue2 = ((Long) key).longValue();
                                    T2 = w1.T((longValue2 + longValue2) ^ (longValue2 >> c12));
                                    q2Var = q2Var2;
                                    int i4422222222222222222 = T2 + S16;
                                    int S1722222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                default:
                                    throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                            }
                        }
                    }
                    i12 = i17;
                    i13 = i19;
                    i20 += i15;
                    i17 = i12;
                    i19 = i13;
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        long A = A(j5, p1Var2);
                        S8 = w1.S(i21 << 3);
                        T4 = w1.T(A);
                        i20 += T4 + S8;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        long A2 = A(j5, p1Var2);
                        S8 = w1.S(i21 << 3);
                        T4 = w1.T(A2);
                        i20 += T4 + S8;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        long w5 = w(j5, p1Var2);
                        S8 = w1.S(i21 << 3);
                        T4 = w1.T(w5);
                        i20 += T4 + S8;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 1, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        int i48 = i21 << 3;
                        Object object3 = unsafe.getObject(p1Var2, j5);
                        if (object3 instanceof u1) {
                            int S18 = w1.S(i48);
                            int d11 = ((u1) object3).d();
                            i20 = com.discord.chat.bridge.botuikit.a.e(d11, d11, S18, i20);
                        } else {
                            int S19 = w1.S(i48);
                            int i49 = o3.a;
                            int m12 = a2.m((String) object3);
                            i20 = com.discord.chat.bridge.botuikit.a.e(m12, m12, S19, i20);
                        }
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        Object object4 = unsafe.getObject(p1Var2, j5);
                        y2 C5 = t2Var.C(i18);
                        a aVar22 = z2.a;
                        int S20 = w1.S(i21 << 3);
                        int c13 = ((p1) object4).c(C5);
                        i20 = com.discord.chat.bridge.botuikit.a.e(c13, c13, S20, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 61:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        u1 u1Var2 = (u1) unsafe.getObject(p1Var2, j5);
                        int S21 = w1.S(i21 << 3);
                        int d12 = u1Var2.d();
                        i20 = com.discord.chat.bridge.botuikit.a.e(d12, d12, S21, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 62:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(w(j5, p1Var2), w1.S(i21 << 3), i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case ys.l.a /* 63 */:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        long w6 = w(j5, p1Var2);
                        S8 = w1.S(i21 << 3);
                        T4 = w1.T(w6);
                        i20 += T4 + S8;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 64:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 4, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 65:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        i20 = com.discord.chat.bridge.botuikit.a.d(i21 << 3, 8, i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 66:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        int w7 = w(j5, p1Var2);
                        i20 = com.discord.chat.bridge.botuikit.a.d((w7 >> 31) ^ (w7 + w7), w1.S(i21 << 3), i20);
                    }
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
                case 67:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        long A3 = A(j5, p1Var2);
                        S8 = w1.S(i21 << 3);
                        T4 = w1.T((A3 >> 63) ^ (A3 + A3));
                        i20 += T4 + S8;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                case 68:
                    if (t2Var.s(i21, i18, p1Var2)) {
                        p1 p1Var5 = (p1) unsafe.getObject(p1Var2, j5);
                        y2 C6 = t2Var.C(i18);
                        a aVar23 = z2.a;
                        int S22 = w1.S(i21 << 3);
                        i10 = S22 + S22;
                        c6 = p1Var5.c(C6);
                        i6 = c6 + i10;
                        i20 += i6;
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    } else {
                        i18 += 3;
                        t2Var = this;
                        p1Var2 = p1Var;
                        i16 = 1048575;
                    }
                default:
                    i18 += 3;
                    t2Var = this;
                    p1Var2 = p1Var;
                    i16 = 1048575;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:153:0x01d1, code lost:
    
        continue;
     */
    /* JADX WARN: Removed duplicated region for block: B:24:0x021d A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:25:0x01d1 A[SYNTHETIC] */
    @Override // com.google.android.gms.internal.play_billing.y2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c(e2 e2Var, e2 e2Var2) {
        boolean e9;
        int i5 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i5 < iArr.length) {
                int z5 = z(i5);
                int y5 = y(z5);
                if (y5 <= 50 || y5 >= 69) {
                    long j5 = z5 & 1048575;
                    switch (y5) {
                        case 0:
                            if (!o(e2Var, e2Var2, i5)) {
                                break;
                            } else {
                                k3 k3Var = l3.f5761c;
                                if (Double.doubleToLongBits(k3Var.a(j5, e2Var)) != Double.doubleToLongBits(k3Var.a(j5, e2Var2))) {
                                    break;
                                } else {
                                    break;
                                }
                            }
                        case 1:
                            if (!o(e2Var, e2Var2, i5)) {
                                break;
                            } else {
                                k3 k3Var2 = l3.f5761c;
                                if (Float.floatToIntBits(k3Var2.b(j5, e2Var)) != Float.floatToIntBits(k3Var2.b(j5, e2Var2))) {
                                    break;
                                } else {
                                    break;
                                }
                            }
                        case 2:
                            if (o(e2Var, e2Var2, i5) && l3.b(j5, e2Var) == l3.b(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 3:
                            if (o(e2Var, e2Var2, i5) && l3.b(j5, e2Var) == l3.b(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 4:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 5:
                            if (o(e2Var, e2Var2, i5) && l3.b(j5, e2Var) == l3.b(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 6:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 7:
                            if (!o(e2Var, e2Var2, i5)) {
                                break;
                            } else {
                                k3 k3Var3 = l3.f5761c;
                                if (k3Var3.f(j5, e2Var) != k3Var3.f(j5, e2Var2)) {
                                    break;
                                } else {
                                    break;
                                }
                            }
                        case 8:
                            if (o(e2Var, e2Var2, i5) && z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2))) {
                                break;
                            }
                            break;
                        case 9:
                            if (o(e2Var, e2Var2, i5) && z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2))) {
                                break;
                            }
                            break;
                        case 10:
                            if (o(e2Var, e2Var2, i5) && z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2))) {
                                break;
                            }
                            break;
                        case 11:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 12:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 13:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 14:
                            if (o(e2Var, e2Var2, i5) && l3.b(j5, e2Var) == l3.b(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 15:
                            if (o(e2Var, e2Var2, i5) && l3.a(j5, e2Var) == l3.a(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 16:
                            if (o(e2Var, e2Var2, i5) && l3.b(j5, e2Var) == l3.b(j5, e2Var2)) {
                                break;
                            }
                            break;
                        case 17:
                            if (o(e2Var, e2Var2, i5) && z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2))) {
                                break;
                            }
                            break;
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                        case 30:
                        case 31:
                        case 32:
                        case 33:
                        case 34:
                        case 35:
                        case 36:
                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        case 40:
                        case 41:
                        case 42:
                        case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                        case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        case 46:
                        case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        case 48:
                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                            e9 = z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2));
                            if (!e9) {
                                break;
                            } else {
                                break;
                            }
                        case 50:
                            e9 = z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2));
                            if (!e9) {
                            }
                            break;
                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                        case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                        case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                        case 61:
                        case 62:
                        case ys.l.a /* 63 */:
                        case 64:
                        case 65:
                        case 66:
                        case 67:
                        case 68:
                            long j7 = iArr[i5 + 2] & 1048575;
                            if (l3.a(j7, e2Var) == l3.a(j7, e2Var2) && z2.e(l3.d(j5, e2Var), l3.d(j5, e2Var2))) {
                                break;
                            }
                            break;
                    }
                    return false;
                }
                i5 += 3;
            } else {
                int i6 = this.f5845h;
                while (true) {
                    int[] iArr2 = this.f5843f;
                    if (i6 < iArr2.length) {
                        int i10 = iArr2[i6];
                        long j10 = iArr[i10 + 2] & 1048575;
                        if (l3.a(j10, e2Var) == l3.a(j10, e2Var2)) {
                            if (!s(0, i10, e2Var)) {
                                long z6 = z(i10) & 1048575;
                                if (!z2.e(l3.d(z6, e2Var), l3.d(z6, e2Var2))) {
                                }
                            }
                            i6++;
                        }
                    } else if (e2Var.zzc.equals(e2Var2.zzc)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final boolean d(Object obj) {
        int i5;
        int i6;
        int i10 = 0;
        int i11 = 0;
        int i12 = 1048575;
        while (i10 < this.f5844g) {
            int i13 = this.f5843f[i10];
            int z5 = z(i13);
            int[] iArr = this.a;
            int i14 = iArr[i13 + 2];
            int i15 = i14 & 1048575;
            int i16 = 1 << (i14 >>> 20);
            if (i15 != i12) {
                if (i15 != 1048575) {
                    i11 = j.getInt(obj, i15);
                }
                i6 = i11;
                i5 = i15;
            } else {
                i5 = i12;
                i6 = i11;
            }
            Object obj2 = obj;
            if ((268435456 & z5) == 0 || q(obj2, i13, i5, i6, i16)) {
                int y5 = y(z5);
                if (y5 == 9 || y5 == 17) {
                    if (q(obj2, i13, i5, i6, i16) && !C(i13).d(l3.d(z5 & 1048575, obj2))) {
                    }
                    i10++;
                    obj = obj2;
                    i12 = i5;
                    i11 = i6;
                } else {
                    if (y5 != 27) {
                        if (y5 == 60 || y5 == 68) {
                            if (s(iArr[i13], i13, obj2) && !C(i13).d(l3.d(z5 & 1048575, obj2))) {
                            }
                            i10++;
                            obj = obj2;
                            i12 = i5;
                            i11 = i6;
                        } else if (y5 != 49) {
                            if (y5 != 50) {
                                continue;
                            } else {
                                r2 r2Var = (r2) l3.d(z5 & 1048575, obj2);
                                if (r2Var.isEmpty()) {
                                    continue;
                                } else {
                                    int i17 = i13 / 3;
                                    if (((r3) ((q2) this.f5839b[i17 + i17]).a.f7964i).f5822d == s3.F) {
                                        y2 y2Var = null;
                                        for (Object obj3 : r2Var.values()) {
                                            if (y2Var == null) {
                                                y2Var = v2.f5858b.a(obj3.getClass());
                                            }
                                            if (!y2Var.d(obj3)) {
                                            }
                                        }
                                    } else {
                                        continue;
                                    }
                                }
                            }
                            i10++;
                            obj = obj2;
                            i12 = i5;
                            i11 = i6;
                        }
                    }
                    List list = (List) l3.d(z5 & 1048575, obj2);
                    if (list.isEmpty()) {
                        continue;
                    } else {
                        y2 C = C(i13);
                        for (int i18 = 0; i18 < list.size(); i18++) {
                            if (C.d(list.get(i18))) {
                            }
                        }
                    }
                    i10++;
                    obj = obj2;
                    i12 = i5;
                    i11 = i6;
                }
            }
            return false;
        }
        return true;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:100:0x0380  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0388  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x03a4  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x03b0  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x03c9  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x03dc  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x03e3  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x03ff  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x0406  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x040d  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0414  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x0420  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x042b  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0436  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x043d  */
    /* JADX WARN: Removed duplicated region for block: B:142:0x034f A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:89:0x0347  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0355  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0366  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0377  */
    @Override // com.google.android.gms.internal.play_billing.y2
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e(Object obj, x1 x1Var) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        boolean z5;
        int i13;
        int T;
        int m5;
        int S;
        int T2;
        int m6;
        int S2;
        t2 t2Var = this;
        Unsafe unsafe = j;
        int i14 = 1048575;
        int i15 = 1048575;
        int i16 = 0;
        int i17 = 0;
        while (true) {
            int[] iArr = t2Var.a;
            if (i16 >= iArr.length) {
                ((e2) obj).zzc.d(x1Var);
                return;
            }
            int z6 = t2Var.z(i16);
            int y5 = y(z6);
            int i18 = iArr[i16];
            if (y5 <= 17) {
                int i19 = iArr[i16 + 2];
                int i20 = i19 & i14;
                if (i20 != i15) {
                    i17 = i20 == i14 ? 0 : unsafe.getInt(obj, i20);
                    i15 = i20;
                }
                i5 = 1 << (i19 >>> 20);
            } else {
                i5 = 0;
            }
            long j5 = z6 & i14;
            int i21 = 2;
            switch (y5) {
                case 0:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.I(i18, Double.doubleToRawLongBits(l3.f5761c.a(j5, obj)));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 1:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.G(i18, Float.floatToRawIntBits(l3.f5761c.b(j5, obj)));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 2:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.Q(i18, unsafe.getLong(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 3:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.Q(i18, unsafe.getLong(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 4:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.K(i18, unsafe.getInt(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 5:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.I(i18, unsafe.getLong(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 6:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.G(i18, unsafe.getInt(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 7:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        boolean f2 = l3.f5761c.f(j5, obj);
                        w1 w1Var = x1Var.a;
                        w1Var.P(i18 << 3);
                        w1Var.E(f2 ? (byte) 1 : (byte) 0);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 8:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        Object object = unsafe.getObject(obj, j5);
                        w1 w1Var2 = x1Var.a;
                        if (object instanceof String) {
                            w1Var2.P((i18 << 3) | 2);
                            w1Var2.M((String) object);
                        } else {
                            u1 u1Var = (u1) object;
                            w1Var2.P((i18 << 3) | 2);
                            w1Var2.P(u1Var.d());
                            u1Var.i(w1Var2);
                        }
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 9:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a(i18, unsafe.getObject(obj, j5), t2Var.C(i16));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 10:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        u1 u1Var2 = (u1) unsafe.getObject(obj, j5);
                        w1 w1Var3 = x1Var.a;
                        w1Var3.P((i18 << 3) | 2);
                        w1Var3.P(u1Var2.d());
                        u1Var2.i(w1Var3);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 11:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.O(i18, unsafe.getInt(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 12:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.K(i18, unsafe.getInt(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 13:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.G(i18, unsafe.getInt(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 14:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        x1Var.a.I(i18, unsafe.getLong(obj, j5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 15:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        int i22 = unsafe.getInt(obj, j5);
                        x1Var.a.O(i18, (i22 >> 31) ^ (i22 + i22));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 16:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        long j7 = unsafe.getLong(obj, j5);
                        x1Var.a.Q(i18, (j7 >> 63) ^ (j7 + j7));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 17:
                    if (t2Var.q(obj, i16, i15, i17, i5)) {
                        Object object2 = unsafe.getObject(obj, j5);
                        y2 C = t2Var.C(i16);
                        w1 w1Var4 = x1Var.a;
                        w1Var4.N(i18, 3);
                        C.e((p1) object2, x1Var);
                        w1Var4.N(i18, 4);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 18:
                    i6 = i15;
                    i10 = i17;
                    z2.q(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 19:
                    i6 = i15;
                    i10 = i17;
                    z2.u(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 20:
                    i6 = i15;
                    i10 = i17;
                    z2.w(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 21:
                    i6 = i15;
                    i10 = i17;
                    z2.d(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 22:
                    i6 = i15;
                    i10 = i17;
                    z2.v(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 23:
                    i6 = i15;
                    i10 = i17;
                    z2.t(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 24:
                    i6 = i15;
                    i10 = i17;
                    z2.s(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 25:
                    i6 = i15;
                    i10 = i17;
                    z2.p(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 26:
                    i11 = i15;
                    i12 = i17;
                    int i23 = iArr[i16];
                    List list = (List) unsafe.getObject(obj, j5);
                    a aVar = z2.a;
                    if (list != null && !list.isEmpty()) {
                        for (int i24 = 0; i24 < list.size(); i24++) {
                            w1 w1Var5 = x1Var.a;
                            String str = (String) list.get(i24);
                            w1Var5.P((i23 << 3) | 2);
                            w1Var5.M(str);
                        }
                    }
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                    break;
                case 27:
                    i11 = i15;
                    i12 = i17;
                    int i25 = iArr[i16];
                    List list2 = (List) unsafe.getObject(obj, j5);
                    y2 C2 = t2Var.C(i16);
                    a aVar2 = z2.a;
                    if (list2 != null && !list2.isEmpty()) {
                        for (int i26 = 0; i26 < list2.size(); i26++) {
                            x1Var.a(i25, list2.get(i26), C2);
                        }
                    }
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                    break;
                case 28:
                    i11 = i15;
                    i12 = i17;
                    int i27 = iArr[i16];
                    List list3 = (List) unsafe.getObject(obj, j5);
                    a aVar3 = z2.a;
                    if (list3 != null && !list3.isEmpty()) {
                        for (int i28 = 0; i28 < list3.size(); i28++) {
                            w1 w1Var6 = x1Var.a;
                            u1 u1Var3 = (u1) list3.get(i28);
                            w1Var6.P((i27 << 3) | 2);
                            w1Var6.P(u1Var3.d());
                            u1Var3.i(w1Var6);
                        }
                    }
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                    break;
                case 29:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.c(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 30:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.r(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 31:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.x(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 32:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.y(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 33:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.a(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 34:
                    i6 = i15;
                    i10 = i17;
                    z5 = false;
                    z2.b(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, false);
                    i15 = i6;
                    i17 = i10;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 35:
                    i11 = i15;
                    i12 = i17;
                    z2.q(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 36:
                    i11 = i15;
                    i12 = i17;
                    z2.u(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    i11 = i15;
                    i12 = i17;
                    z2.w(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    i11 = i15;
                    i12 = i17;
                    z2.d(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    i11 = i15;
                    i12 = i17;
                    z2.v(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 40:
                    i11 = i15;
                    i12 = i17;
                    z2.t(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 41:
                    i11 = i15;
                    i12 = i17;
                    z2.s(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 42:
                    i11 = i15;
                    i12 = i17;
                    z2.p(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    i11 = i15;
                    i12 = i17;
                    z2.c(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    i11 = i15;
                    i12 = i17;
                    z2.r(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    i11 = i15;
                    i12 = i17;
                    z2.x(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 46:
                    i11 = i15;
                    i12 = i17;
                    z2.y(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    i11 = i15;
                    i12 = i17;
                    z2.a(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 48:
                    i11 = i15;
                    i12 = i17;
                    z2.b(iArr[i16], (List) unsafe.getObject(obj, j5), x1Var, true);
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    i11 = i15;
                    i12 = i17;
                    int i29 = iArr[i16];
                    List list4 = (List) unsafe.getObject(obj, j5);
                    y2 C3 = t2Var.C(i16);
                    a aVar4 = z2.a;
                    if (list4 != null && !list4.isEmpty()) {
                        for (int i30 = 0; i30 < list4.size(); i30++) {
                            Object obj2 = list4.get(i30);
                            w1 w1Var7 = x1Var.a;
                            w1Var7.N(i29, 3);
                            C3.e((p1) obj2, x1Var);
                            w1Var7.N(i29, 4);
                        }
                    }
                    i15 = i11;
                    i17 = i12;
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                    break;
                case 50:
                    Object object3 = unsafe.getObject(obj, j5);
                    if (object3 != null) {
                        int i31 = i16 / 3;
                        e4.m mVar = ((q2) t2Var.f5839b[i31 + i31]).a;
                        for (Map.Entry entry : ((r2) object3).entrySet()) {
                            w1 w1Var8 = x1Var.a;
                            w1Var8.N(i18, i21);
                            Object key = entry.getKey();
                            Object value = entry.getValue();
                            r3 r3Var = (r3) mVar.f7963e;
                            r3 r3Var2 = (r3) mVar.f7964i;
                            int i32 = b2.f5704c;
                            int S3 = w1.S(8);
                            int i33 = i15;
                            r3 r3Var3 = r3.f5819v;
                            if (r3Var == r3Var3) {
                                S3 += S3;
                            }
                            s3 s3Var = s3.f5827d;
                            Object obj3 = null;
                            int i34 = i17;
                            switch (r3Var.ordinal()) {
                                case 0:
                                    i13 = i18;
                                    ((Double) key).getClass();
                                    T = 8;
                                    int i35 = T + S3;
                                    int S4 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                        S4 += S4;
                                    }
                                    switch (r3Var2.ordinal()) {
                                        case 0:
                                            ((Double) value).getClass();
                                            T2 = 8;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2 = entry.getKey();
                                            Object value2 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 1:
                                            ((Float) value).getClass();
                                            T2 = 4;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22 = entry.getKey();
                                            Object value22 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 2:
                                            T2 = w1.T(((Long) value).longValue());
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222 = entry.getKey();
                                            Object value222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 3:
                                            T2 = w1.T(((Long) value).longValue());
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2222 = entry.getKey();
                                            Object value2222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 4:
                                            T2 = w1.T(((Integer) value).intValue());
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22222 = entry.getKey();
                                            Object value22222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 5:
                                            ((Long) value).getClass();
                                            T2 = 8;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222222 = entry.getKey();
                                            Object value222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 6:
                                            ((Integer) value).getClass();
                                            T2 = 4;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2222222 = entry.getKey();
                                            Object value2222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 7:
                                            ((Boolean) value).getClass();
                                            T2 = 1;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22222222 = entry.getKey();
                                            Object value22222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 8:
                                            if (value instanceof u1) {
                                                m6 = ((u1) value).d();
                                                S2 = w1.S(m6);
                                            } else {
                                                int i36 = o3.a;
                                                m6 = a2.m((String) value);
                                                S2 = w1.S(m6);
                                            }
                                            T2 = m6 + S2;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222222222 = entry.getKey();
                                            Object value222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 9:
                                            T2 = ((p1) value).d();
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2222222222 = entry.getKey();
                                            Object value2222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 10:
                                            if (value instanceof k2) {
                                                obj3.getClass();
                                                throw null;
                                            }
                                            m6 = ((p1) value).d();
                                            S2 = w1.S(m6);
                                            T2 = m6 + S2;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22222222222 = entry.getKey();
                                            Object value22222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 11:
                                            if (value instanceof u1) {
                                                m6 = ((u1) value).d();
                                                S2 = w1.S(m6);
                                            } else {
                                                m6 = ((byte[]) value).length;
                                                S2 = w1.S(m6);
                                            }
                                            T2 = m6 + S2;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222222222222 = entry.getKey();
                                            Object value222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 12:
                                            T2 = w1.S(((Integer) value).intValue());
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2222222222222 = entry.getKey();
                                            Object value2222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 13:
                                            T2 = value instanceof a4 ? w1.T(((a4) value).f5700d) : w1.T(((Integer) value).intValue());
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22222222222222 = entry.getKey();
                                            Object value22222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 14:
                                            ((Integer) value).getClass();
                                            T2 = 4;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222222222222222 = entry.getKey();
                                            Object value222222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 15:
                                            ((Long) value).getClass();
                                            T2 = 8;
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key2222222222222222 = entry.getKey();
                                            Object value2222222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key2222222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value2222222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 16:
                                            int intValue = ((Integer) value).intValue();
                                            T2 = w1.S((intValue >> 31) ^ (intValue + intValue));
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key22222222222222222 = entry.getKey();
                                            Object value22222222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key22222222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value22222222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        case 17:
                                            long longValue = ((Long) value).longValue();
                                            T2 = w1.T((longValue >> 63) ^ (longValue + longValue));
                                            w1Var8.P(T2 + S4 + i35);
                                            Object key222222222222222222 = entry.getKey();
                                            Object value222222222222222222 = entry.getValue();
                                            b2.b(w1Var8, (r3) mVar.f7963e, 1, key222222222222222222);
                                            b2.b(w1Var8, (r3) mVar.f7964i, 2, value222222222222222222);
                                            i21 = 2;
                                            i18 = i13;
                                            i15 = i33;
                                            i17 = i34;
                                        default:
                                            throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                                    }
                                case 1:
                                    i13 = i18;
                                    ((Float) key).getClass();
                                    T = 4;
                                    int i352 = T + S3;
                                    int S42 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 2:
                                    i13 = i18;
                                    T = w1.T(((Long) key).longValue());
                                    int i3522 = T + S3;
                                    int S422 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 3:
                                    i13 = i18;
                                    T = w1.T(((Long) key).longValue());
                                    int i35222 = T + S3;
                                    int S4222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 4:
                                    i13 = i18;
                                    T = w1.T(((Integer) key).intValue());
                                    int i352222 = T + S3;
                                    int S42222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 5:
                                    i13 = i18;
                                    ((Long) key).getClass();
                                    T = 8;
                                    int i3522222 = T + S3;
                                    int S422222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 6:
                                    i13 = i18;
                                    ((Integer) key).getClass();
                                    T = 4;
                                    int i35222222 = T + S3;
                                    int S4222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 7:
                                    i13 = i18;
                                    ((Boolean) key).getClass();
                                    T = 1;
                                    int i352222222 = T + S3;
                                    int S42222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 8:
                                    i13 = i18;
                                    if (key instanceof u1) {
                                        m5 = ((u1) key).d();
                                        S = w1.S(m5);
                                    } else {
                                        int i37 = o3.a;
                                        m5 = a2.m((String) key);
                                        S = w1.S(m5);
                                    }
                                    T = m5 + S;
                                    int i3522222222 = T + S3;
                                    int S422222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 9:
                                    i13 = i18;
                                    T = ((p1) key).d();
                                    int i35222222222 = T + S3;
                                    int S4222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 10:
                                    i13 = i18;
                                    if (key instanceof k2) {
                                        obj3.getClass();
                                        throw null;
                                    }
                                    m5 = ((p1) key).d();
                                    S = w1.S(m5);
                                    T = m5 + S;
                                    int i352222222222 = T + S3;
                                    int S42222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 11:
                                    i13 = i18;
                                    if (key instanceof u1) {
                                        m5 = ((u1) key).d();
                                        S = w1.S(m5);
                                    } else {
                                        m5 = ((byte[]) key).length;
                                        S = w1.S(m5);
                                    }
                                    T = m5 + S;
                                    int i3522222222222 = T + S3;
                                    int S422222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 12:
                                    i13 = i18;
                                    T = w1.S(((Integer) key).intValue());
                                    int i35222222222222 = T + S3;
                                    int S4222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 13:
                                    if (key instanceof a4) {
                                        i13 = i18;
                                        T = w1.T(((a4) key).f5700d);
                                    } else {
                                        i13 = i18;
                                        T = w1.T(((Integer) key).intValue());
                                    }
                                    int i352222222222222 = T + S3;
                                    int S42222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 14:
                                    ((Integer) key).getClass();
                                    i13 = i18;
                                    T = 4;
                                    int i3522222222222222 = T + S3;
                                    int S422222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 15:
                                    ((Long) key).getClass();
                                    i13 = i18;
                                    T = 8;
                                    int i35222222222222222 = T + S3;
                                    int S4222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 16:
                                    int intValue2 = ((Integer) key).intValue();
                                    T = w1.S((intValue2 >> 31) ^ (intValue2 + intValue2));
                                    i13 = i18;
                                    int i352222222222222222 = T + S3;
                                    int S42222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                case 17:
                                    long longValue2 = ((Long) key).longValue();
                                    T = w1.T((longValue2 + longValue2) ^ (longValue2 >> 63));
                                    i13 = i18;
                                    int i3522222222222222222 = T + S3;
                                    int S422222222222222222 = w1.S(16);
                                    if (r3Var2 == r3Var3) {
                                    }
                                    switch (r3Var2.ordinal()) {
                                    }
                                default:
                                    throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                            }
                        }
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.I(i18, Double.doubleToRawLongBits(((Double) l3.d(j5, obj)).doubleValue()));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.G(i18, Float.floatToRawIntBits(((Float) l3.d(j5, obj)).floatValue()));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.Q(i18, A(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.Q(i18, A(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.K(i18, w(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.I(i18, A(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.G(i18, w(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (t2Var.s(i18, i16, obj)) {
                        boolean booleanValue = ((Boolean) l3.d(j5, obj)).booleanValue();
                        w1 w1Var9 = x1Var.a;
                        w1Var9.P(i18 << 3);
                        w1Var9.E(booleanValue ? (byte) 1 : (byte) 0);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (t2Var.s(i18, i16, obj)) {
                        Object object4 = unsafe.getObject(obj, j5);
                        w1 w1Var10 = x1Var.a;
                        if (object4 instanceof String) {
                            w1Var10.P((i18 << 3) | 2);
                            w1Var10.M((String) object4);
                        } else {
                            u1 u1Var4 = (u1) object4;
                            w1Var10.P((i18 << 3) | 2);
                            w1Var10.P(u1Var4.d());
                            u1Var4.i(w1Var10);
                        }
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a(i18, unsafe.getObject(obj, j5), t2Var.C(i16));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 61:
                    if (t2Var.s(i18, i16, obj)) {
                        u1 u1Var5 = (u1) unsafe.getObject(obj, j5);
                        w1 w1Var11 = x1Var.a;
                        w1Var11.P((i18 << 3) | 2);
                        w1Var11.P(u1Var5.d());
                        u1Var5.i(w1Var11);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 62:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.O(i18, w(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case ys.l.a /* 63 */:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.K(i18, w(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 64:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.G(i18, w(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 65:
                    if (t2Var.s(i18, i16, obj)) {
                        x1Var.a.I(i18, A(j5, obj));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 66:
                    if (t2Var.s(i18, i16, obj)) {
                        int w5 = w(j5, obj);
                        x1Var.a.O(i18, (w5 >> 31) ^ (w5 + w5));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 67:
                    if (t2Var.s(i18, i16, obj)) {
                        long A = A(j5, obj);
                        x1Var.a.Q(i18, (A >> 63) ^ (A + A));
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                case 68:
                    if (t2Var.s(i18, i16, obj)) {
                        Object object5 = unsafe.getObject(obj, j5);
                        y2 C4 = t2Var.C(i16);
                        w1 w1Var12 = x1Var.a;
                        w1Var12.N(i18, 3);
                        C4.e((p1) object5, x1Var);
                        w1Var12.N(i18, 4);
                    }
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
                default:
                    i16 += 3;
                    i14 = 1048575;
                    t2Var = this;
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.google.android.gms.internal.play_billing.y2
    public final void f(Object obj, Object obj2) {
        Object obj3;
        if (!r(obj)) {
            throw new IllegalArgumentException("Mutating immutable message: ".concat(String.valueOf(obj)));
        }
        obj2.getClass();
        int i5 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i5 >= iArr.length) {
                z2.o(obj, obj2);
                return;
            }
            int z5 = z(i5);
            int i6 = z5 & 1048575;
            int y5 = y(z5);
            int i10 = iArr[i5];
            long j5 = i6;
            switch (y5) {
                case 0:
                    if (p(i5, obj2)) {
                        k3 k3Var = l3.f5761c;
                        obj3 = obj;
                        k3Var.d(obj3, j5, k3Var.a(j5, obj2));
                        l(i5, obj3);
                        break;
                    }
                    obj3 = obj;
                    break;
                case 1:
                    if (p(i5, obj2)) {
                        k3 k3Var2 = l3.f5761c;
                        k3Var2.e(obj, j5, k3Var2.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 2:
                    if (p(i5, obj2)) {
                        l3.i(obj, j5, l3.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 3:
                    if (p(i5, obj2)) {
                        l3.i(obj, j5, l3.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 4:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 5:
                    if (p(i5, obj2)) {
                        l3.i(obj, j5, l3.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 6:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 7:
                    if (p(i5, obj2)) {
                        k3 k3Var3 = l3.f5761c;
                        k3Var3.c(obj, j5, k3Var3.f(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 8:
                    if (p(i5, obj2)) {
                        l3.j(j5, obj, l3.d(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 9:
                    j(i5, obj, obj2);
                    obj3 = obj;
                    break;
                case 10:
                    if (p(i5, obj2)) {
                        l3.j(j5, obj, l3.d(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 11:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 12:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 13:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 14:
                    if (p(i5, obj2)) {
                        l3.i(obj, j5, l3.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 15:
                    if (p(i5, obj2)) {
                        l3.h(l3.a(j5, obj2), j5, obj);
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 16:
                    if (p(i5, obj2)) {
                        l3.i(obj, j5, l3.b(j5, obj2));
                        l(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 17:
                    j(i5, obj, obj2);
                    obj3 = obj;
                    break;
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                case 27:
                case 28:
                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                case 40:
                case 41:
                case 42:
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                case 46:
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                case 48:
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    i2 i2Var = (i2) l3.d(j5, obj);
                    i2 i2Var2 = (i2) l3.d(j5, obj2);
                    int size = i2Var.size();
                    int size2 = i2Var2.size();
                    if (size > 0 && size2 > 0) {
                        if (!((q1) i2Var).f5812d) {
                            i2Var = i2Var.l(size2 + size);
                        }
                        i2Var.addAll(i2Var2);
                    }
                    if (size > 0) {
                        i2Var2 = i2Var;
                    }
                    l3.j(j5, obj, i2Var2);
                    obj3 = obj;
                    break;
                case 50:
                    a aVar = z2.a;
                    l3.j(j5, obj, a2.f(l3.d(j5, obj), l3.d(j5, obj2)));
                    obj3 = obj;
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (s(i10, i5, obj2)) {
                        l3.j(j5, obj, l3.d(j5, obj2));
                        l3.h(i10, iArr[i5 + 2] & 1048575, obj);
                    }
                    obj3 = obj;
                    break;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    k(i5, obj, obj2);
                    obj3 = obj;
                    break;
                case 61:
                case 62:
                case ys.l.a /* 63 */:
                case 64:
                case 65:
                case 66:
                case 67:
                    if (s(i10, i5, obj2)) {
                        l3.j(j5, obj, l3.d(j5, obj2));
                        l3.h(i10, iArr[i5 + 2] & 1048575, obj);
                    }
                    obj3 = obj;
                    break;
                case 68:
                    k(i5, obj, obj2);
                    obj3 = obj;
                    break;
                default:
                    obj3 = obj;
                    break;
            }
            i5 += 3;
            obj = obj3;
        }
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final e2 g() {
        return ((e2) this.f5842e).n();
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final int h(e2 e2Var) {
        int i5;
        long doubleToLongBits;
        int i6;
        int floatToIntBits;
        int i10;
        int i11;
        int i12 = 0;
        for (int i13 = 0; i13 < this.a.length; i13 += 3) {
            int z5 = z(i13);
            int y5 = y(z5);
            if (y5 <= 50 || y5 >= 69) {
                long j5 = z5 & 1048575;
                int i14 = 37;
                switch (y5) {
                    case 0:
                        i5 = i12 * 53;
                        doubleToLongBits = Double.doubleToLongBits(l3.f5761c.a(j5, e2Var));
                        byte[] bArr = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 1:
                        i6 = i12 * 53;
                        floatToIntBits = Float.floatToIntBits(l3.f5761c.b(j5, e2Var));
                        i12 = i6 + floatToIntBits;
                        break;
                    case 2:
                        i5 = i12 * 53;
                        doubleToLongBits = l3.b(j5, e2Var);
                        byte[] bArr2 = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 3:
                        i5 = i12 * 53;
                        doubleToLongBits = l3.b(j5, e2Var);
                        byte[] bArr3 = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 4:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 5:
                        i5 = i12 * 53;
                        doubleToLongBits = l3.b(j5, e2Var);
                        byte[] bArr4 = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 6:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 7:
                        i5 = i12 * 53;
                        boolean f2 = l3.f5761c.f(j5, e2Var);
                        byte[] bArr5 = j2.a;
                        i10 = f2 ? 1231 : 1237;
                        i12 = i5 + i10;
                        break;
                    case 8:
                        i6 = i12 * 53;
                        floatToIntBits = ((String) l3.d(j5, e2Var)).hashCode();
                        i12 = i6 + floatToIntBits;
                        break;
                    case 9:
                        i11 = i12 * 53;
                        Object d6 = l3.d(j5, e2Var);
                        if (d6 != null) {
                            i14 = d6.hashCode();
                        }
                        i12 = i11 + i14;
                        break;
                    case 10:
                        i6 = i12 * 53;
                        floatToIntBits = l3.d(j5, e2Var).hashCode();
                        i12 = i6 + floatToIntBits;
                        break;
                    case 11:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 12:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 13:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 14:
                        i5 = i12 * 53;
                        doubleToLongBits = l3.b(j5, e2Var);
                        byte[] bArr6 = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 15:
                        i6 = i12 * 53;
                        floatToIntBits = l3.a(j5, e2Var);
                        i12 = i6 + floatToIntBits;
                        break;
                    case 16:
                        i5 = i12 * 53;
                        doubleToLongBits = l3.b(j5, e2Var);
                        byte[] bArr7 = j2.a;
                        i10 = (int) (doubleToLongBits ^ (doubleToLongBits >>> 32));
                        i12 = i5 + i10;
                        break;
                    case 17:
                        i11 = i12 * 53;
                        Object d7 = l3.d(j5, e2Var);
                        if (d7 != null) {
                            i14 = d7.hashCode();
                        }
                        i12 = i11 + i14;
                        break;
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    case 40:
                    case 41:
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    case 48:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                        i6 = i12 * 53;
                        floatToIntBits = l3.d(j5, e2Var).hashCode();
                        i12 = i6 + floatToIntBits;
                        break;
                    case 50:
                        i6 = i12 * 53;
                        floatToIntBits = l3.d(j5, e2Var).hashCode();
                        i12 = i6 + floatToIntBits;
                        break;
                }
            }
        }
        int i15 = this.f5845h;
        while (true) {
            int[] iArr = this.f5843f;
            if (i15 >= iArr.length) {
                return e2Var.zzc.hashCode() + (i12 * 53);
            }
            if (!s(0, iArr[i15], e2Var)) {
                i12 = l3.d(z(r3) & 1048575, e2Var).hashCode() + (i12 * 53);
            }
            i15++;
        }
    }

    @Override // com.google.android.gms.internal.play_billing.y2
    public final void i(Object obj, byte[] bArr, int i5, int i6, s1 s1Var) {
        u(obj, bArr, i5, i6, 0, s1Var);
    }

    public final void j(int i5, Object obj, Object obj2) {
        if (p(i5, obj2)) {
            int z5 = z(i5) & 1048575;
            Unsafe unsafe = j;
            long j5 = z5;
            Object object = unsafe.getObject(obj2, j5);
            if (object == null) {
                throw new IllegalStateException("Source subfield " + this.a[i5] + " is present but null: " + obj2.toString());
            }
            y2 C = C(i5);
            if (!p(i5, obj)) {
                if (r(object)) {
                    e2 g6 = C.g();
                    C.f(g6, object);
                    unsafe.putObject(obj, j5, g6);
                } else {
                    unsafe.putObject(obj, j5, object);
                }
                l(i5, obj);
                return;
            }
            Object object2 = unsafe.getObject(obj, j5);
            if (!r(object2)) {
                e2 g10 = C.g();
                C.f(g10, object2);
                unsafe.putObject(obj, j5, g10);
                object2 = g10;
            }
            C.f(object2, object);
        }
    }

    public final void k(int i5, Object obj, Object obj2) {
        int[] iArr = this.a;
        int i6 = iArr[i5];
        if (s(i6, i5, obj2)) {
            int z5 = z(i5) & 1048575;
            Unsafe unsafe = j;
            long j5 = z5;
            Object object = unsafe.getObject(obj2, j5);
            if (object == null) {
                throw new IllegalStateException("Source subfield " + iArr[i5] + " is present but null: " + obj2.toString());
            }
            y2 C = C(i5);
            if (!s(i6, i5, obj)) {
                if (r(object)) {
                    e2 g6 = C.g();
                    C.f(g6, object);
                    unsafe.putObject(obj, j5, g6);
                } else {
                    unsafe.putObject(obj, j5, object);
                }
                l3.h(i6, iArr[i5 + 2] & 1048575, obj);
                return;
            }
            Object object2 = unsafe.getObject(obj, j5);
            if (!r(object2)) {
                e2 g10 = C.g();
                C.f(g10, object2);
                unsafe.putObject(obj, j5, g10);
                object2 = g10;
            }
            C.f(object2, object);
        }
    }

    public final void l(int i5, Object obj) {
        int i6 = this.a[i5 + 2];
        long j5 = 1048575 & i6;
        if (j5 == 1048575) {
            return;
        }
        l3.h((1 << (i6 >>> 20)) | l3.a(j5, obj), j5, obj);
    }

    public final void m(int i5, Object obj, Object obj2) {
        j.putObject(obj, z(i5) & 1048575, obj2);
        l(i5, obj);
    }

    public final void n(Object obj, int i5, Object obj2, int i6) {
        j.putObject(obj, z(i6) & 1048575, obj2);
        l3.h(i5, this.a[i6 + 2] & 1048575, obj);
    }

    public final boolean o(e2 e2Var, e2 e2Var2, int i5) {
        return p(i5, e2Var) == p(i5, e2Var2);
    }

    public final boolean p(int i5, Object obj) {
        int i6 = this.a[i5 + 2];
        long j5 = i6 & 1048575;
        if (j5 == 1048575) {
            int z5 = z(i5);
            long j7 = z5 & 1048575;
            switch (y(z5)) {
                case 0:
                    if (Double.doubleToRawLongBits(l3.f5761c.a(j7, obj)) == 0) {
                        return false;
                    }
                    break;
                case 1:
                    if (Float.floatToRawIntBits(l3.f5761c.b(j7, obj)) == 0) {
                        return false;
                    }
                    break;
                case 2:
                    if (l3.b(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 3:
                    if (l3.b(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 4:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 5:
                    if (l3.b(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 6:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 7:
                    return l3.f5761c.f(j7, obj);
                case 8:
                    Object d6 = l3.d(j7, obj);
                    if (d6 instanceof String) {
                        if (((String) d6).isEmpty()) {
                            return false;
                        }
                    } else {
                        if (!(d6 instanceof u1)) {
                            throw new IllegalArgumentException();
                        }
                        if (u1.f5850e.equals(d6)) {
                            return false;
                        }
                    }
                    break;
                case 9:
                    if (l3.d(j7, obj) == null) {
                        return false;
                    }
                    break;
                case 10:
                    if (u1.f5850e.equals(l3.d(j7, obj))) {
                        return false;
                    }
                    break;
                case 11:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 12:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 13:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 14:
                    if (l3.b(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 15:
                    if (l3.a(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 16:
                    if (l3.b(j7, obj) == 0) {
                        return false;
                    }
                    break;
                case 17:
                    if (l3.d(j7, obj) == null) {
                        return false;
                    }
                    break;
                default:
                    throw new IllegalArgumentException();
            }
        } else if (((1 << (i6 >>> 20)) & l3.a(j5, obj)) == 0) {
            return false;
        }
        return true;
    }

    public final boolean q(Object obj, int i5, int i6, int i10, int i11) {
        return i6 == 1048575 ? p(i5, obj) : (i10 & i11) != 0;
    }

    public final boolean s(int i5, int i6, Object obj) {
        return l3.a((long) (this.a[i6 + 2] & 1048575), obj) == i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x11de, code lost:
    
        if ((r14 instanceof com.google.android.gms.internal.play_billing.a4) == false) goto L720;
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x11e0, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.T(((com.google.android.gms.internal.play_billing.a4) r14).f5700d);
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x11eb, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Integer) r14).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x11f8, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.S(((java.lang.Integer) r14).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x1206, code lost:
    
        if ((r14 instanceof com.google.android.gms.internal.play_billing.u1) == false) goto L726;
     */
    /* JADX WARN: Code restructure failed: missing block: B:106:0x1208, code lost:
    
        r0 = ((com.google.android.gms.internal.play_billing.u1) r14).d();
        r1 = com.google.android.gms.internal.play_billing.w1.S(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x1212, code lost:
    
        r0 = r0 + r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x1215, code lost:
    
        r0 = ((byte[]) r14).length;
        r1 = com.google.android.gms.internal.play_billing.w1.S(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x121f, code lost:
    
        if ((r14 instanceof com.google.android.gms.internal.play_billing.k2) != false) goto L889;
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x1221, code lost:
    
        r0 = ((com.google.android.gms.internal.play_billing.p1) r14).d();
        r1 = com.google.android.gms.internal.play_billing.w1.S(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x122c, code lost:
    
        r21.getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x122f, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x1230, code lost:
    
        r0 = ((com.google.android.gms.internal.play_billing.p1) r14).d();
     */
    /* JADX WARN: Code restructure failed: missing block: B:117:0x1239, code lost:
    
        if ((r14 instanceof com.google.android.gms.internal.play_billing.u1) == false) goto L736;
     */
    /* JADX WARN: Code restructure failed: missing block: B:118:0x123b, code lost:
    
        r0 = ((com.google.android.gms.internal.play_billing.u1) r14).d();
        r1 = com.google.android.gms.internal.play_billing.w1.S(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x1246, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.o3.a;
        r0 = com.google.android.gms.internal.play_billing.a2.m((java.lang.String) r14);
        r1 = com.google.android.gms.internal.play_billing.w1.S(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x1253, code lost:
    
        ((java.lang.Boolean) r14).getClass();
        r0 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:121:0x125a, code lost:
    
        ((java.lang.Integer) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:122:0x1261, code lost:
    
        ((java.lang.Long) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:123:0x1268, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Integer) r14).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:124:0x1274, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Long) r14).longValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:125:0x127f, code lost:
    
        r0 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Long) r14).longValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:126:0x128a, code lost:
    
        ((java.lang.Float) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:127:0x1291, code lost:
    
        ((java.lang.Double) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:130:0x11a7, code lost:
    
        throw new java.lang.RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:131:0x104b, code lost:
    
        r13 = ((java.lang.Integer) r13).intValue();
        r13 = com.google.android.gms.internal.play_billing.w1.S((r13 + r13) ^ (r13 >> 31));
     */
    /* JADX WARN: Code restructure failed: missing block: B:132:0x105c, code lost:
    
        ((java.lang.Long) r13).getClass();
        r43 = r7;
        r47 = r9;
        r44 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:133:0x1067, code lost:
    
        r7 = 8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:134:0x106b, code lost:
    
        ((java.lang.Integer) r13).getClass();
        r43 = r7;
        r47 = r9;
        r44 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:135:0x1076, code lost:
    
        r7 = 4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:136:0x107a, code lost:
    
        r43 = r7;
     */
    /* JADX WARN: Code restructure failed: missing block: B:137:0x107e, code lost:
    
        if ((r13 instanceof com.google.android.gms.internal.play_billing.a4) == false) goto L679;
     */
    /* JADX WARN: Code restructure failed: missing block: B:138:0x1080, code lost:
    
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.T(((com.google.android.gms.internal.play_billing.a4) r13).f5700d);
     */
    /* JADX WARN: Code restructure failed: missing block: B:139:0x108f, code lost:
    
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Integer) r13).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:140:0x10a0, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.S(((java.lang.Integer) r13).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:141:0x10b2, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:142:0x10ba, code lost:
    
        if ((r13 instanceof com.google.android.gms.internal.play_billing.u1) == false) goto L685;
     */
    /* JADX WARN: Code restructure failed: missing block: B:143:0x10bc, code lost:
    
        r7 = ((com.google.android.gms.internal.play_billing.u1) r13).d();
        r9 = com.google.android.gms.internal.play_billing.w1.S(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:144:0x10c6, code lost:
    
        r7 = r7 + r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:145:0x10c9, code lost:
    
        r7 = ((byte[]) r13).length;
        r9 = com.google.android.gms.internal.play_billing.w1.S(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:146:0x10d1, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:147:0x10d9, code lost:
    
        if ((r13 instanceof com.google.android.gms.internal.play_billing.k2) != false) goto L893;
     */
    /* JADX WARN: Code restructure failed: missing block: B:148:0x10db, code lost:
    
        r7 = ((com.google.android.gms.internal.play_billing.p1) r13).d();
        r9 = com.google.android.gms.internal.play_billing.w1.S(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:150:0x10e6, code lost:
    
        r21.getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:151:0x10e9, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:152:0x10ea, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = ((com.google.android.gms.internal.play_billing.p1) r13).d();
     */
    /* JADX WARN: Code restructure failed: missing block: B:153:0x10f8, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:154:0x1100, code lost:
    
        if ((r13 instanceof com.google.android.gms.internal.play_billing.u1) == false) goto L695;
     */
    /* JADX WARN: Code restructure failed: missing block: B:155:0x1102, code lost:
    
        r7 = ((com.google.android.gms.internal.play_billing.u1) r13).d();
        r9 = com.google.android.gms.internal.play_billing.w1.S(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:156:0x110d, code lost:
    
        r7 = com.google.android.gms.internal.play_billing.o3.a;
        r7 = com.google.android.gms.internal.play_billing.a2.m((java.lang.String) r13);
        r9 = com.google.android.gms.internal.play_billing.w1.S(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:157:0x111a, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        ((java.lang.Boolean) r13).getClass();
        r7 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:158:0x1128, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        ((java.lang.Integer) r13).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:159:0x1135, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        ((java.lang.Long) r13).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:160:0x1142, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Integer) r13).intValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:161:0x1154, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Long) r13).longValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:162:0x1165, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = com.google.android.gms.internal.play_billing.w1.T(((java.lang.Long) r13).longValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:163:0x1176, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        ((java.lang.Float) r13).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:164:0x1183, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        ((java.lang.Double) r13).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:167:0x1031, code lost:
    
        throw new java.lang.RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:170:0x12eb, code lost:
    
        r2 = r2 + 1;
        r1 = r41;
        r0 = r42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:172:0x12f3, code lost:
    
        if (r3 == null) goto L755;
     */
    /* JADX WARN: Code restructure failed: missing block: B:173:0x12f5, code lost:
    
        ((com.google.android.gms.internal.play_billing.e2) r42).zzc = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:174:0x12fb, code lost:
    
        if (r8 != 0) goto L760;
     */
    /* JADX WARN: Code restructure failed: missing block: B:175:0x12fd, code lost:
    
        if (r5 != r6) goto L758;
     */
    /* JADX WARN: Code restructure failed: missing block: B:177:0x1307, code lost:
    
        throw new com.google.android.gms.internal.play_billing.n2(r35);
     */
    /* JADX WARN: Code restructure failed: missing block: B:178:0x130e, code lost:
    
        return r5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:179:0x1308, code lost:
    
        r9 = r35;
     */
    /* JADX WARN: Code restructure failed: missing block: B:180:0x130a, code lost:
    
        if (r5 > r6) goto L764;
     */
    /* JADX WARN: Code restructure failed: missing block: B:181:0x130c, code lost:
    
        if (r15 != r8) goto L764;
     */
    /* JADX WARN: Code restructure failed: missing block: B:183:0x1314, code lost:
    
        throw new com.google.android.gms.internal.play_billing.n2(r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:318:0x0c65, code lost:
    
        throw new com.google.android.gms.internal.play_billing.n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x0f4b, code lost:
    
        r1 = r34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0f89, code lost:
    
        if (r10 == 1048575) goto L643;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0f8b, code lost:
    
        r14.putInt(r0, r10, r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0f8f, code lost:
    
        r1 = r41;
        r2 = r1.f5844g;
        r3 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x0f97, code lost:
    
        if (r2 >= r1.f5845h) goto L891;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0f99, code lost:
    
        r4 = r1.f5843f[r2];
        r7 = r11[r4];
        r9 = com.google.android.gms.internal.play_billing.l3.d(r1.z(r4) & 1048575, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0fad, code lost:
    
        if (r9 != null) goto L649;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0fb0, code lost:
    
        r10 = r1.B(r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x0fb4, code lost:
    
        if (r10 != null) goto L652;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0fbe, code lost:
    
        r4 = r4 / 3;
        r4 = ((com.google.android.gms.internal.play_billing.q2) r33[r4 + r4]).a;
        r9 = ((com.google.android.gms.internal.play_billing.r2) r9).entrySet().iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x0fd5, code lost:
    
        if (r9.hasNext() == false) goto L894;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x0fd7, code lost:
    
        r11 = (java.util.Map.Entry) r9.next();
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0feb, code lost:
    
        if (r10.a(((java.lang.Integer) r11.getValue()).intValue()) != false) goto L895;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x12e3, code lost:
    
        r0 = r42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0fed, code lost:
    
        if (r3 != null) goto L662;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0fef, code lost:
    
        r3 = (com.google.android.gms.internal.play_billing.e2) r0;
        r13 = r3.zzc;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0ff4, code lost:
    
        if (r13 != r12) goto L661;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x0ff6, code lost:
    
        r13 = com.google.android.gms.internal.play_billing.g3.b();
        r3.zzc = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x0ffc, code lost:
    
        r3 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0ffd, code lost:
    
        r13 = r11.getKey();
        r14 = r11.getValue();
        r0 = (com.google.android.gms.internal.play_billing.r3) r4.f7963e;
        r1 = (com.google.android.gms.internal.play_billing.r3) r4.f7964i;
        r17 = com.google.android.gms.internal.play_billing.b2.f5704c;
        r18 = com.google.android.gms.internal.play_billing.w1.S(8);
        r25 = r2;
        r2 = com.google.android.gms.internal.play_billing.r3.f5819v;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x1019, code lost:
    
        if (r0 != r2) goto L665;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x101b, code lost:
    
        r18 = r18 + r18;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x101d, code lost:
    
        r26 = com.google.android.gms.internal.play_billing.s3.f5827d;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x1029, code lost:
    
        switch(r0.ordinal()) {
            case 0: goto L703;
            case 1: goto L702;
            case 2: goto L701;
            case 3: goto L700;
            case 4: goto L699;
            case 5: goto L698;
            case 6: goto L697;
            case 7: goto L696;
            case 8: goto L692;
            case 9: goto L691;
            case 10: goto L686;
            case 11: goto L681;
            case 12: goto L680;
            case 13: goto L676;
            case 14: goto L674;
            case 15: goto L672;
            case 16: goto L671;
            case 17: goto L669;
            default: goto L890;
        };
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x1032, code lost:
    
        r27 = ((java.lang.Long) r13).longValue();
        r13 = com.google.android.gms.internal.play_billing.w1.T((r27 + r27) ^ (r27 >> 63));
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x1042, code lost:
    
        r43 = r7;
        r47 = r9;
        r44 = r10;
        r7 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x1190, code lost:
    
        r7 = r7 + r18;
        r9 = com.google.android.gms.internal.play_billing.w1.S(16);
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x1198, code lost:
    
        if (r1 != r2) goto L707;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x119a, code lost:
    
        r9 = r9 + r9;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x119f, code lost:
    
        switch(r1.ordinal()) {
            case 0: goto L744;
            case 1: goto L743;
            case 2: goto L742;
            case 3: goto L741;
            case 4: goto L740;
            case 5: goto L739;
            case 6: goto L738;
            case 7: goto L737;
            case 8: goto L733;
            case 9: goto L732;
            case 10: goto L727;
            case 11: goto L722;
            case 12: goto L721;
            case 13: goto L717;
            case 14: goto L715;
            case 15: goto L713;
            case 16: goto L712;
            case 17: goto L711;
            default: goto L892;
        };
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x11a8, code lost:
    
        r0 = ((java.lang.Long) r14).longValue();
        r0 = com.google.android.gms.internal.play_billing.w1.T((r0 >> 63) ^ (r0 + r0));
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x1298, code lost:
    
        r0 = (r0 + r9) + r7;
        r1 = com.google.android.gms.internal.play_billing.u1.f5850e;
        r1 = new byte[r0];
        r2 = new com.google.android.gms.internal.play_billing.w1(r1, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x12a3, code lost:
    
        r0 = r11.getKey();
        r7 = r11.getValue();
        com.google.android.gms.internal.play_billing.b2.b(r2, (com.google.android.gms.internal.play_billing.r3) r4.f7963e, 1, r0);
        com.google.android.gms.internal.play_billing.b2.b(r2, (com.google.android.gms.internal.play_billing.r3) r4.f7964i, 2, r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x12bb, code lost:
    
        r2.D();
        r3.c((r43 << 3) | 2, new com.google.android.gms.internal.play_billing.v1(r1));
        r47.remove();
        r0 = r42;
        r7 = r43;
        r10 = r44;
        r9 = r47;
        r2 = r25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x12dc, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x12e2, code lost:
    
        throw new java.lang.RuntimeException(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x11b9, code lost:
    
        r0 = ((java.lang.Integer) r14).intValue();
        r0 = com.google.android.gms.internal.play_billing.w1.S((r0 >> 31) ^ (r0 + r0));
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x11ca, code lost:
    
        ((java.lang.Long) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x11cf, code lost:
    
        r0 = 8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x11d3, code lost:
    
        ((java.lang.Integer) r14).getClass();
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x11d8, code lost:
    
        r0 = 4;
     */
    /* JADX WARN: Removed duplicated region for block: B:186:0x0f58  */
    /* JADX WARN: Removed duplicated region for block: B:343:0x0ae1 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:346:0x0af7 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0f27 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0f3c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:43:0x0f45 A[ADDED_TO_REGION] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int u(Object obj, byte[] bArr, int i5, int i6, int i10, s1 s1Var) {
        int i11;
        Object obj2;
        String str;
        Object[] objArr;
        int i12;
        Unsafe unsafe;
        int i13;
        int i14;
        s1 s1Var2;
        int i15;
        int i16;
        byte[] bArr2;
        int i17;
        g3 g3Var;
        int i18;
        Unsafe unsafe2;
        Object obj3;
        byte[] bArr3;
        s1 s1Var3;
        int i19;
        int i20;
        int i21;
        int i22;
        byte[] bArr4;
        Unsafe unsafe3;
        int i23;
        int i24;
        int i25;
        s1 s1Var4;
        int i26;
        Unsafe unsafe4;
        Object obj4;
        s1 s1Var5;
        byte[] bArr5;
        int i27;
        byte[] bArr6;
        s1 s1Var6;
        int i28;
        int i29;
        byte[] bArr7;
        Unsafe unsafe5;
        int i30;
        int i31;
        s1 s1Var7;
        int i32;
        s1 s1Var8;
        int i33;
        int C;
        int I;
        s1 s1Var9;
        byte[] bArr8;
        s1 s1Var10;
        int i34;
        int K;
        int i35;
        i2 i2Var;
        int i36;
        Unsafe unsafe6;
        int i37;
        Unsafe unsafe7;
        byte[] bArr9;
        int i38;
        int i39;
        int I2;
        int i40;
        Unsafe unsafe8;
        int i41;
        int i42;
        Object obj5;
        byte[] bArr10;
        s1 s1Var11;
        int i43;
        int i44;
        int i45;
        int i46;
        int i47;
        byte[] bArr11;
        s1 s1Var12;
        int i48;
        int i49;
        t2 t2Var = this;
        Object obj6 = obj;
        byte[] bArr12 = bArr;
        int i50 = i6;
        s1 s1Var13 = s1Var;
        if (!r(obj6)) {
            throw new IllegalArgumentException("Mutating immutable message: ".concat(String.valueOf(obj)));
        }
        Unsafe unsafe9 = j;
        int i51 = i5;
        int i52 = -1;
        int i53 = 0;
        int i54 = 1048575;
        int i55 = 0;
        int i56 = 0;
        int i57 = 1048575;
        while (true) {
            Object[] objArr2 = t2Var.f5839b;
            g3 g3Var2 = g3.f5740f;
            int[] iArr = t2Var.a;
            int i58 = i53;
            String str2 = "Failed to parse the message.";
            Object obj7 = null;
            if (i51 < i50) {
                int i59 = i51 + 1;
                int i60 = bArr12[i51];
                if (i60 < 0) {
                    i59 = a2.J(i60, bArr12, i59, s1Var13);
                    i60 = s1Var13.a;
                }
                int i61 = i59;
                i56 = i60;
                int i62 = i56 >>> 3;
                int i63 = t2Var.f5841d;
                int i64 = t2Var.f5840c;
                if (i62 > i52) {
                    i14 = (i62 < i64 || i62 > i63) ? -1 : t2Var.x(i62, i58 / 3);
                    i13 = 0;
                } else if (i62 < i64 || i62 > i63) {
                    i13 = 0;
                    i14 = -1;
                } else {
                    i13 = 0;
                    i14 = t2Var.x(i62, 0);
                }
                if (i14 == -1) {
                    obj2 = obj6;
                    s1Var2 = s1Var13;
                    str = "Failed to parse the message.";
                    i15 = i62;
                    objArr = objArr2;
                    i12 = i55;
                    i16 = i56;
                    bArr2 = bArr;
                    unsafe = unsafe9;
                    i53 = i13;
                    i17 = i61;
                } else {
                    int i65 = i56 & 7;
                    int i66 = iArr[i14 + 1];
                    int y5 = y(i66);
                    long j5 = i66 & i57;
                    Object obj8 = "";
                    objArr = objArr2;
                    if (y5 <= 17) {
                        int i67 = iArr[i14 + 2];
                        int i68 = 1 << (i67 >>> 20);
                        int i69 = i67 & i57;
                        if (i69 != i54) {
                            int i70 = i57;
                            if (i54 != i70) {
                                unsafe9.putInt(obj6, i54, i55);
                                i70 = 1048575;
                            }
                            i55 = i69 == i70 ? 0 : unsafe9.getInt(obj6, i69);
                            i18 = i69;
                        } else {
                            i18 = i54;
                        }
                        switch (y5) {
                            case 0:
                                t2Var = this;
                                bArr4 = bArr;
                                s1Var4 = s1Var;
                                i22 = i18;
                                unsafe3 = unsafe9;
                                i23 = i55;
                                i24 = i56;
                                i25 = i14;
                                i20 = i61;
                                if (i65 != 1) {
                                    obj3 = obj6;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i26 = i20 + 8;
                                    i55 = i23 | i68;
                                    l3.f5761c.d(obj6, j5, Double.longBitsToDouble(a2.P(bArr4, i20)));
                                    i50 = i6;
                                    i51 = i26;
                                    unsafe9 = unsafe3;
                                    bArr12 = bArr4;
                                    i52 = i62;
                                    s1Var13 = s1Var4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 1:
                                t2Var = this;
                                bArr4 = bArr;
                                s1Var4 = s1Var;
                                i22 = i18;
                                unsafe3 = unsafe9;
                                i23 = i55;
                                i24 = i56;
                                i25 = i14;
                                i20 = i61;
                                if (i65 != 5) {
                                    obj3 = obj6;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i26 = i20 + 4;
                                    i55 = i23 | i68;
                                    l3.f5761c.e(obj6, j5, Float.intBitsToFloat(a2.n(bArr4, i20)));
                                    i50 = i6;
                                    i51 = i26;
                                    unsafe9 = unsafe3;
                                    bArr12 = bArr4;
                                    i52 = i62;
                                    s1Var13 = s1Var4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 2:
                            case 3:
                                t2Var = this;
                                bArr4 = bArr;
                                s1Var4 = s1Var;
                                i22 = i18;
                                i23 = i55;
                                i24 = i56;
                                i25 = i14;
                                i20 = i61;
                                if (i65 != 0) {
                                    unsafe3 = unsafe9;
                                    obj3 = obj6;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 = i23 | i68;
                                    int L = a2.L(bArr4, i20, s1Var4);
                                    unsafe9.putLong(obj6, j5, s1Var4.f5824b);
                                    i50 = i6;
                                    i51 = L;
                                    bArr12 = bArr4;
                                    i52 = i62;
                                    s1Var13 = s1Var4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 4:
                            case 11:
                                t2Var = this;
                                bArr4 = bArr;
                                s1Var4 = s1Var;
                                i22 = i18;
                                i23 = i55;
                                i24 = i56;
                                i25 = i14;
                                i20 = i61;
                                if (i65 != 0) {
                                    unsafe3 = unsafe9;
                                    obj3 = obj6;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 = i23 | i68;
                                    i51 = a2.I(bArr4, i20, s1Var4);
                                    unsafe9.putInt(obj6, j5, s1Var4.a);
                                    i50 = i6;
                                    bArr12 = bArr4;
                                    i52 = i62;
                                    s1Var13 = s1Var4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 5:
                            case 14:
                                t2Var = this;
                                i22 = i18;
                                Object obj9 = obj6;
                                i23 = i55;
                                i24 = i56;
                                unsafe4 = unsafe9;
                                i25 = i14;
                                i20 = i61;
                                if (i65 != 1) {
                                    s1Var4 = s1Var;
                                    bArr4 = bArr;
                                    obj3 = obj9;
                                    unsafe3 = unsafe4;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    s1Var4 = s1Var;
                                    obj6 = obj9;
                                    bArr4 = bArr;
                                    unsafe9 = unsafe4;
                                    unsafe9.putLong(obj6, j5, a2.P(bArr, i20));
                                    i50 = i6;
                                    i51 = i20 + 8;
                                    i55 = i23 | i68;
                                    bArr12 = bArr4;
                                    i52 = i62;
                                    s1Var13 = s1Var4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 6:
                            case 13:
                                t2Var = this;
                                i22 = i18;
                                obj4 = obj6;
                                s1Var5 = s1Var;
                                i23 = i55;
                                i24 = i56;
                                unsafe4 = unsafe9;
                                i25 = i14;
                                i20 = i61;
                                bArr5 = bArr;
                                if (i65 != 5) {
                                    Object obj10 = obj4;
                                    bArr4 = bArr5;
                                    obj3 = obj10;
                                    s1Var4 = s1Var5;
                                    unsafe3 = unsafe4;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    unsafe4.putInt(obj4, j5, a2.n(bArr5, i20));
                                    bArr12 = bArr5;
                                    unsafe9 = unsafe4;
                                    i55 = i23 | i68;
                                    i50 = i6;
                                    i51 = i20 + 4;
                                    s1Var13 = s1Var5;
                                    obj6 = obj4;
                                    i52 = i62;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 7:
                                t2Var = this;
                                i22 = i18;
                                obj4 = obj6;
                                s1Var5 = s1Var;
                                i23 = i55;
                                i24 = i56;
                                unsafe4 = unsafe9;
                                i25 = i14;
                                i20 = i61;
                                bArr5 = bArr;
                                if (i65 != 0) {
                                    Object obj102 = obj4;
                                    bArr4 = bArr5;
                                    obj3 = obj102;
                                    s1Var4 = s1Var5;
                                    unsafe3 = unsafe4;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i27 = i23 | i68;
                                    i51 = a2.L(bArr5, i20, s1Var5);
                                    l3.f5761c.c(obj4, j5, s1Var5.f5824b != 0);
                                    i50 = i6;
                                    bArr12 = bArr5;
                                    s1Var13 = s1Var5;
                                    obj6 = obj4;
                                    i52 = i62;
                                    unsafe9 = unsafe4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    i55 = i27;
                                    break;
                                }
                            case 8:
                                t2Var = this;
                                i22 = i18;
                                obj4 = obj6;
                                s1Var5 = s1Var;
                                i23 = i55;
                                i24 = i56;
                                unsafe4 = unsafe9;
                                i25 = i14;
                                i20 = i61;
                                bArr5 = bArr;
                                if (i65 != 2) {
                                    Object obj1022 = obj4;
                                    bArr4 = bArr5;
                                    obj3 = obj1022;
                                    s1Var4 = s1Var5;
                                    unsafe3 = unsafe4;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    if ((i66 & 536870912) != 0) {
                                        i27 = i23 | i68;
                                        i51 = a2.F(bArr5, i20, s1Var5);
                                    } else {
                                        int I3 = a2.I(bArr5, i20, s1Var5);
                                        int i71 = s1Var5.a;
                                        if (i71 < 0) {
                                            throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                        }
                                        int i72 = i23 | i68;
                                        if (i71 == 0) {
                                            s1Var5.f5825c = "";
                                        } else {
                                            s1Var5.f5825c = new String(bArr5, I3, i71, StandardCharsets.UTF_8);
                                            I3 += i71;
                                        }
                                        i51 = I3;
                                        i27 = i72;
                                    }
                                    unsafe4.putObject(obj4, j5, s1Var5.f5825c);
                                    i50 = i6;
                                    bArr12 = bArr5;
                                    s1Var13 = s1Var5;
                                    obj6 = obj4;
                                    i52 = i62;
                                    unsafe9 = unsafe4;
                                    i53 = i25;
                                    i56 = i24;
                                    i57 = 1048575;
                                    i54 = i22;
                                    i55 = i27;
                                    break;
                                }
                            case 9:
                                Object obj11 = obj6;
                                Unsafe unsafe10 = unsafe9;
                                t2Var = this;
                                i22 = i18;
                                i19 = i14;
                                i20 = i61;
                                if (i65 != 2) {
                                    unsafe3 = unsafe10;
                                    bArr4 = bArr;
                                    obj3 = obj11;
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i19;
                                    s1Var4 = s1Var;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 |= i68;
                                    Object D = t2Var.D(i19, obj11);
                                    bArr12 = bArr;
                                    i50 = i6;
                                    s1Var13 = s1Var;
                                    i51 = a2.N(D, t2Var.C(i19), bArr12, i20, i50, s1Var13);
                                    t2Var.m(i19, obj11, D);
                                    unsafe9 = unsafe10;
                                    obj6 = obj11;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 10:
                                Object obj12 = obj6;
                                unsafe2 = unsafe9;
                                obj3 = obj12;
                                t2Var = this;
                                bArr3 = bArr;
                                s1Var3 = s1Var;
                                i22 = i18;
                                i19 = i14;
                                i20 = i61;
                                if (i65 != 2) {
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i19;
                                    s1Var4 = s1Var3;
                                    bArr4 = bArr3;
                                    unsafe3 = unsafe2;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 |= i68;
                                    i51 = a2.c(bArr3, i20, s1Var3);
                                    unsafe2.putObject(obj3, j5, s1Var3.f5825c);
                                    obj6 = obj3;
                                    unsafe9 = unsafe2;
                                    i50 = i6;
                                    bArr12 = bArr3;
                                    s1Var13 = s1Var3;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i22;
                                    break;
                                }
                            case 12:
                                Object obj13 = obj6;
                                unsafe2 = unsafe9;
                                obj3 = obj13;
                                t2Var = this;
                                bArr3 = bArr;
                                s1Var3 = s1Var;
                                i19 = i14;
                                i20 = i61;
                                if (i65 != 0) {
                                    i22 = i18;
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i19;
                                    s1Var4 = s1Var3;
                                    bArr4 = bArr3;
                                    unsafe3 = unsafe2;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    int I4 = a2.I(bArr3, i20, s1Var3);
                                    int i73 = s1Var3.a;
                                    g2 B = t2Var.B(i19);
                                    if ((i66 & Integer.MIN_VALUE) == 0 || B == null || B.a(i73)) {
                                        i21 = I4;
                                        i55 |= i68;
                                        unsafe2.putInt(obj3, j5, i73);
                                    } else {
                                        e2 e2Var = (e2) obj3;
                                        g3 g3Var3 = e2Var.zzc;
                                        if (g3Var3 == g3Var2) {
                                            g3Var3 = g3.b();
                                            e2Var.zzc = g3Var3;
                                        }
                                        i21 = I4;
                                        g3Var3.c(i56, Long.valueOf(i73));
                                    }
                                    obj6 = obj3;
                                    unsafe9 = unsafe2;
                                    i51 = i21;
                                    i50 = i6;
                                    bArr12 = bArr3;
                                    s1Var13 = s1Var3;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i18;
                                    break;
                                }
                            case 15:
                                Object obj14 = obj6;
                                unsafe2 = unsafe9;
                                obj3 = obj14;
                                t2Var = this;
                                bArr3 = bArr;
                                s1Var3 = s1Var;
                                i19 = i14;
                                i20 = i61;
                                if (i65 != 0) {
                                    i22 = i18;
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i19;
                                    s1Var4 = s1Var3;
                                    bArr4 = bArr3;
                                    unsafe3 = unsafe2;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 |= i68;
                                    i51 = a2.I(bArr3, i20, s1Var3);
                                    unsafe2.putInt(obj3, j5, a2.l(s1Var3.a));
                                    obj6 = obj3;
                                    unsafe9 = unsafe2;
                                    i50 = i6;
                                    bArr12 = bArr3;
                                    s1Var13 = s1Var3;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i18;
                                    break;
                                }
                            case 16:
                                t2Var = this;
                                bArr3 = bArr;
                                s1Var3 = s1Var;
                                i19 = i14;
                                i20 = i61;
                                if (i65 != 0) {
                                    Object obj15 = obj6;
                                    unsafe2 = unsafe9;
                                    obj3 = obj15;
                                    i22 = i18;
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i19;
                                    s1Var4 = s1Var3;
                                    bArr4 = bArr3;
                                    unsafe3 = unsafe2;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 |= i68;
                                    int L2 = a2.L(bArr3, i20, s1Var3);
                                    long j7 = s1Var3.f5824b;
                                    unsafe9.putLong(obj6, j5, (-(j7 & 1)) ^ (j7 >>> 1));
                                    obj6 = obj6;
                                    unsafe9 = unsafe9;
                                    i50 = i6;
                                    bArr12 = bArr3;
                                    i51 = L2;
                                    s1Var13 = s1Var3;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i18;
                                    break;
                                }
                            default:
                                if (i65 != 3) {
                                    int i74 = i14;
                                    i20 = i61;
                                    bArr4 = bArr;
                                    i22 = i18;
                                    unsafe3 = unsafe9;
                                    obj3 = obj6;
                                    i23 = i55;
                                    i24 = i56;
                                    i25 = i74;
                                    s1Var4 = s1Var;
                                    obj2 = obj3;
                                    i17 = i20;
                                    unsafe = unsafe3;
                                    str = "Failed to parse the message.";
                                    bArr2 = bArr4;
                                    i15 = i62;
                                    s1Var2 = s1Var4;
                                    i53 = i25;
                                    i12 = i23;
                                    i16 = i24;
                                    i54 = i22;
                                    break;
                                } else {
                                    i55 |= i68;
                                    t2Var = this;
                                    Object D2 = t2Var.D(i14, obj6);
                                    int i75 = i14;
                                    s1Var3 = s1Var;
                                    i19 = i75;
                                    i51 = a2.M(D2, t2Var.C(i75), bArr, i61, i6, (i62 << 3) | 4, s1Var3);
                                    bArr3 = bArr;
                                    t2Var.m(i19, obj6, D2);
                                    i50 = i6;
                                    bArr12 = bArr3;
                                    s1Var13 = s1Var3;
                                    i52 = i62;
                                    i53 = i19;
                                    i57 = 1048575;
                                    i54 = i18;
                                    break;
                                }
                        }
                    } else {
                        Unsafe unsafe11 = unsafe9;
                        Object obj16 = obj6;
                        int i76 = i14;
                        int i77 = i54;
                        if (y5 != 27) {
                            if (y5 > 49) {
                                obj2 = obj16;
                                i28 = i61;
                                byte[] bArr13 = bArr;
                                str = "Failed to parse the message.";
                                int i78 = i56;
                                i12 = i55;
                                s1 s1Var14 = s1Var;
                                if (y5 != 50) {
                                    unsafe = unsafe11;
                                    long j10 = iArr[i76 + 2] & 1048575;
                                    switch (y5) {
                                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 1) {
                                                i47 = i45 + 8;
                                                unsafe.putObject(obj2, j5, Double.valueOf(Double.longBitsToDouble(a2.P(bArr2, i45))));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                    i11 = i10;
                                                    i17 = i51;
                                                    i53 = i46;
                                                    i54 = i77;
                                                    if (i16 != i11) {
                                                    }
                                                    e2 e2Var2 = (e2) obj2;
                                                    g3Var = e2Var2.zzc;
                                                    if (g3Var == g3Var2) {
                                                    }
                                                    int i79 = i16;
                                                    int H = a2.H(i79, bArr2, i17, i6, g3Var, s1Var2);
                                                    s1Var13 = s1Var;
                                                    obj6 = obj2;
                                                    i52 = i15;
                                                    i56 = i79;
                                                    i50 = i6;
                                                    unsafe9 = unsafe;
                                                    i55 = i12;
                                                    i57 = 1048575;
                                                    t2Var = this;
                                                    i51 = H;
                                                    bArr12 = bArr;
                                                    break;
                                                } else {
                                                    i50 = i6;
                                                    i52 = i15;
                                                    bArr12 = bArr2;
                                                    i56 = i16;
                                                    unsafe9 = unsafe;
                                                    i53 = i46;
                                                    i54 = i77;
                                                    i55 = i12;
                                                    i57 = 1048575;
                                                    t2Var = this;
                                                    s1Var13 = s1Var2;
                                                    obj6 = obj2;
                                                    break;
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 5) {
                                                i47 = i45 + 4;
                                                unsafe.putObject(obj2, j5, Float.valueOf(Float.intBitsToFloat(a2.n(bArr2, i45))));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                        case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 0) {
                                                i47 = a2.L(bArr2, i45, s1Var2);
                                                unsafe.putObject(obj2, j5, Long.valueOf(s1Var2.f5824b));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                        case 62:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 0) {
                                                i47 = a2.I(bArr2, i45, s1Var2);
                                                unsafe.putObject(obj2, j5, Integer.valueOf(s1Var2.a));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                        case 65:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 1) {
                                                i47 = i45 + 8;
                                                unsafe.putObject(obj2, j5, Long.valueOf(a2.P(bArr2, i45)));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                        case 64:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 5) {
                                                i47 = i45 + 4;
                                                unsafe.putObject(obj2, j5, Integer.valueOf(a2.n(bArr2, i45)));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 0) {
                                                i47 = a2.L(bArr2, i45, s1Var2);
                                                unsafe.putObject(obj2, j5, Boolean.valueOf(s1Var2.f5824b != 0));
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = i47;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            if (i65 == 2) {
                                                int I5 = a2.I(bArr2, i45, s1Var2);
                                                int i80 = s1Var2.a;
                                                if (i80 == 0) {
                                                    unsafe.putObject(obj2, j5, "");
                                                } else {
                                                    int i81 = i66 & 536870912;
                                                    int i82 = I5 + i80;
                                                    if (i81 != 0 && !o3.b(bArr2, I5, i82)) {
                                                        throw new n2("Protocol message had invalid UTF-8.");
                                                    }
                                                    unsafe.putObject(obj2, j5, new String(bArr2, I5, i80, StandardCharsets.UTF_8));
                                                    I5 = i82;
                                                }
                                                unsafe.putInt(obj2, j10, i15);
                                                i51 = I5;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                            str = str;
                                            if (i65 == 2) {
                                                Object E = t2Var.E(i62, i76, obj2);
                                                i16 = i78;
                                                int N = a2.N(E, t2Var.C(i76), bArr, i28, i6, s1Var);
                                                bArr2 = bArr;
                                                t2Var.n(obj2, i62, E, i76);
                                                i15 = i62;
                                                i46 = i76;
                                                i45 = i28;
                                                i51 = N;
                                                s1Var2 = s1Var;
                                                if (i51 != i45) {
                                                }
                                            } else {
                                                bArr2 = bArr;
                                                i16 = i78;
                                                s1Var2 = s1Var;
                                                i15 = i62;
                                                i46 = i76;
                                                i45 = i28;
                                                i51 = i45;
                                                if (i51 != i45) {
                                                }
                                            }
                                            break;
                                        case 61:
                                            bArr11 = bArr;
                                            s1Var12 = s1Var;
                                            str = str;
                                            i48 = i78;
                                            if (i65 == 2) {
                                                int c6 = a2.c(bArr11, i28, s1Var12);
                                                unsafe.putObject(obj2, j5, s1Var12.f5825c);
                                                unsafe.putInt(obj2, j10, i62);
                                                i51 = c6;
                                                i15 = i62;
                                                i46 = i76;
                                                i45 = i28;
                                                i16 = i48;
                                                s1Var2 = s1Var12;
                                                bArr2 = bArr11;
                                                if (i51 != i45) {
                                                }
                                            } else {
                                                i15 = i62;
                                                i46 = i76;
                                                i45 = i28;
                                                i16 = i48;
                                                s1Var2 = s1Var12;
                                                bArr2 = bArr11;
                                                i51 = i45;
                                                if (i51 != i45) {
                                                }
                                            }
                                            break;
                                        case ys.l.a /* 63 */:
                                            bArr11 = bArr;
                                            i49 = i62;
                                            s1Var12 = s1Var;
                                            if (i65 == 0) {
                                                int I6 = a2.I(bArr11, i28, s1Var12);
                                                int i83 = s1Var12.a;
                                                g2 B2 = t2Var.B(i76);
                                                if (B2 == null || B2.a(i83)) {
                                                    i48 = i78;
                                                    unsafe.putObject(obj2, j5, Integer.valueOf(i83));
                                                    unsafe.putInt(obj2, j10, i49);
                                                } else {
                                                    e2 e2Var3 = (e2) obj2;
                                                    g3 g3Var4 = e2Var3.zzc;
                                                    if (g3Var4 == g3Var2) {
                                                        g3Var4 = g3.b();
                                                        e2Var3.zzc = g3Var4;
                                                    }
                                                    g3Var4.c(i78, Long.valueOf(i83));
                                                    i48 = i78;
                                                }
                                                i51 = I6;
                                                i15 = i49;
                                                str = str;
                                                i46 = i76;
                                                i45 = i28;
                                                i16 = i48;
                                                s1Var2 = s1Var12;
                                                bArr2 = bArr11;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            s1Var2 = s1Var12;
                                            i15 = i49;
                                            str = str;
                                            bArr2 = bArr11;
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case 66:
                                            bArr11 = bArr;
                                            i49 = i62;
                                            s1Var12 = s1Var;
                                            if (i65 == 0) {
                                                int I7 = a2.I(bArr11, i28, s1Var12);
                                                unsafe.putObject(obj2, j5, Integer.valueOf(a2.l(s1Var12.a)));
                                                unsafe.putInt(obj2, j10, i49);
                                                i45 = i28;
                                                i16 = i78;
                                                i46 = i76;
                                                i51 = I7;
                                                s1Var2 = s1Var12;
                                                i15 = i49;
                                                str = str;
                                                bArr2 = bArr11;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            s1Var2 = s1Var12;
                                            i15 = i49;
                                            str = str;
                                            bArr2 = bArr11;
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case 67:
                                            bArr11 = bArr;
                                            i49 = i62;
                                            s1Var12 = s1Var;
                                            if (i65 == 0) {
                                                int L3 = a2.L(bArr11, i28, s1Var12);
                                                long j11 = s1Var12.f5824b;
                                                unsafe.putObject(obj2, j5, Long.valueOf((j11 >>> 1) ^ (-(j11 & 1))));
                                                unsafe.putInt(obj2, j10, i49);
                                                i45 = i28;
                                                i16 = i78;
                                                i46 = i76;
                                                i51 = L3;
                                                s1Var2 = s1Var12;
                                                i15 = i49;
                                                str = str;
                                                bArr2 = bArr11;
                                                if (i51 != i45) {
                                                }
                                            }
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            s1Var2 = s1Var12;
                                            i15 = i49;
                                            str = str;
                                            bArr2 = bArr11;
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                        case 68:
                                            if (i65 == 3) {
                                                Object E2 = t2Var.E(i62, i76, obj2);
                                                int M = a2.M(E2, t2Var.C(i76), bArr, i28, i6, (i78 & (-8)) | 4, s1Var);
                                                bArr11 = bArr;
                                                t2Var.n(obj2, i62, E2, i76);
                                                i45 = i28;
                                                i16 = i78;
                                                i46 = i76;
                                                i51 = M;
                                                s1Var2 = s1Var;
                                                str = str;
                                                i15 = i62;
                                                bArr2 = bArr11;
                                                if (i51 != i45) {
                                                }
                                            }
                                            break;
                                        default:
                                            i45 = i28;
                                            i16 = i78;
                                            i46 = i76;
                                            bArr2 = bArr;
                                            i15 = i62;
                                            s1Var2 = s1Var;
                                            str = str;
                                            i51 = i45;
                                            if (i51 != i45) {
                                            }
                                            break;
                                    }
                                } else if (i65 == 2) {
                                    int i84 = i76 / 3;
                                    Object obj17 = objArr[i84 + i84];
                                    Unsafe unsafe12 = unsafe11;
                                    Object object = unsafe12.getObject(obj2, j5);
                                    if (!((r2) object).f5817d) {
                                        r2 a = r2.f5816e.a();
                                        a2.f(a, object);
                                        unsafe12.putObject(obj2, j5, a);
                                        object = a;
                                    }
                                    e4.m mVar = ((q2) obj17).a;
                                    r2 r2Var = (r2) object;
                                    int I8 = a2.I(bArr13, i28, s1Var14);
                                    int i85 = s1Var14.a;
                                    if (i85 >= 0 && i85 <= i6 - I8) {
                                        int i86 = I8 + i85;
                                        Object obj18 = mVar.f7965v;
                                        Object obj19 = obj18;
                                        while (I8 < i86) {
                                            Unsafe unsafe13 = unsafe12;
                                            int i87 = I8 + 1;
                                            int i88 = bArr13[I8];
                                            if (i88 < 0) {
                                                i87 = a2.J(i88, bArr13, i87, s1Var14);
                                                i88 = s1Var14.a;
                                            }
                                            int i89 = i88 >>> 3;
                                            int i90 = i87;
                                            int i91 = i88 & 7;
                                            int i92 = i86;
                                            if (i89 == 1) {
                                                s1 s1Var15 = s1Var14;
                                                unsafe8 = unsafe13;
                                                i41 = i78;
                                                i42 = i92;
                                                obj5 = obj18;
                                                r3 r3Var = (r3) mVar.f7963e;
                                                if (i91 == r3Var.f5823e) {
                                                    int t5 = t(bArr, i90, i6, r3Var, null, s1Var);
                                                    s1Var14 = s1Var;
                                                    unsafe12 = unsafe8;
                                                    obj19 = obj19;
                                                    i86 = i42;
                                                    i78 = i41;
                                                    obj8 = s1Var.f5825c;
                                                    I8 = t5;
                                                    bArr13 = bArr;
                                                    obj18 = obj5;
                                                } else {
                                                    bArr10 = bArr;
                                                    s1Var11 = s1Var15;
                                                    i43 = i90;
                                                }
                                            } else if (i89 != 2) {
                                                i44 = i6;
                                                s1Var11 = s1Var14;
                                                i43 = i90;
                                                unsafe8 = unsafe13;
                                                i41 = i78;
                                                i42 = i92;
                                                obj5 = obj18;
                                                bArr10 = bArr;
                                                I8 = a2.O(i88, bArr10, i43, i44, s1Var11);
                                                Unsafe unsafe14 = unsafe8;
                                                s1Var14 = s1Var11;
                                                unsafe12 = unsafe14;
                                                bArr13 = bArr10;
                                                i86 = i42;
                                                i78 = i41;
                                                obj18 = obj5;
                                            } else {
                                                r3 r3Var2 = (r3) mVar.f7964i;
                                                if (i91 == r3Var2.f5823e) {
                                                    Object obj20 = obj18;
                                                    s1 s1Var16 = s1Var14;
                                                    int t10 = t(bArr, i90, i6, r3Var2, obj20.getClass(), s1Var16);
                                                    obj19 = s1Var16.f5825c;
                                                    I8 = t10;
                                                    unsafe12 = unsafe13;
                                                    obj18 = obj20;
                                                    bArr13 = bArr;
                                                    s1Var14 = s1Var16;
                                                    i86 = i92;
                                                    i78 = i78;
                                                } else {
                                                    s1 s1Var17 = s1Var14;
                                                    i43 = i90;
                                                    unsafe8 = unsafe13;
                                                    i41 = i78;
                                                    i42 = i92;
                                                    obj5 = obj18;
                                                    bArr10 = bArr;
                                                    s1Var11 = s1Var17;
                                                }
                                            }
                                            i44 = i6;
                                            I8 = a2.O(i88, bArr10, i43, i44, s1Var11);
                                            Unsafe unsafe142 = unsafe8;
                                            s1Var14 = s1Var11;
                                            unsafe12 = unsafe142;
                                            bArr13 = bArr10;
                                            i86 = i42;
                                            i78 = i41;
                                            obj18 = obj5;
                                        }
                                        s1 s1Var18 = s1Var14;
                                        unsafe = unsafe12;
                                        byte[] bArr14 = bArr13;
                                        i29 = i78;
                                        int i93 = i86;
                                        if (I8 != i93) {
                                            throw new n2(str);
                                        }
                                        r2Var.put(obj8, obj19);
                                        if (i93 != i28) {
                                            i52 = i62;
                                            obj6 = obj2;
                                            s1Var13 = s1Var18;
                                            bArr12 = bArr14;
                                            unsafe9 = unsafe;
                                            i54 = i77;
                                            i55 = i12;
                                            i57 = 1048575;
                                            i50 = i6;
                                            i51 = i93;
                                            i53 = i76;
                                            i56 = i29;
                                        } else {
                                            i15 = i62;
                                            i11 = i10;
                                            s1Var2 = s1Var18;
                                            bArr2 = bArr14;
                                            i17 = i93;
                                        }
                                    }
                                } else {
                                    bArr6 = bArr13;
                                    i29 = i78;
                                    s1Var6 = s1Var14;
                                    str2 = str;
                                    unsafe = unsafe11;
                                    i15 = i62;
                                    i11 = i10;
                                    s1Var2 = s1Var6;
                                    bArr2 = bArr6;
                                    str = str2;
                                    i17 = i28;
                                }
                            } else {
                                long j12 = i66;
                                i2 i2Var2 = (i2) unsafe11.getObject(obj16, j5);
                                if (!((q1) i2Var2).f5812d) {
                                    int size = i2Var2.size();
                                    i2Var2 = i2Var2.l(size + size);
                                    unsafe11.putObject(obj16, j5, i2Var2);
                                }
                                i2 i2Var3 = i2Var2;
                                switch (y5) {
                                    case 18:
                                    case 35:
                                        bArr7 = bArr;
                                        unsafe5 = unsafe11;
                                        i30 = i61;
                                        str = "Failed to parse the message.";
                                        i31 = i56;
                                        i12 = i55;
                                        s1Var7 = s1Var;
                                        if (i65 != 2) {
                                            if (i65 == 1) {
                                                if (i2Var3 != null) {
                                                    throw new ClassCastException();
                                                }
                                                Double.longBitsToDouble(a2.P(bArr7, i30));
                                                throw null;
                                            }
                                            i51 = i30;
                                            if (i51 != i30) {
                                                obj2 = obj;
                                                i15 = i62;
                                                i11 = i10;
                                                bArr2 = bArr7;
                                                i17 = i51;
                                                i16 = i31;
                                                s1Var2 = s1Var7;
                                                i53 = i76;
                                                i54 = i77;
                                                unsafe = unsafe5;
                                                if (i16 != i11 && i11 != 0) {
                                                    i50 = i6;
                                                    i51 = i17;
                                                    i56 = i16;
                                                    break;
                                                } else {
                                                    e2 e2Var22 = (e2) obj2;
                                                    g3Var = e2Var22.zzc;
                                                    if (g3Var == g3Var2) {
                                                        g3Var = g3.b();
                                                        e2Var22.zzc = g3Var;
                                                    }
                                                    int i792 = i16;
                                                    int H2 = a2.H(i792, bArr2, i17, i6, g3Var, s1Var2);
                                                    s1Var13 = s1Var;
                                                    obj6 = obj2;
                                                    i52 = i15;
                                                    i56 = i792;
                                                    i50 = i6;
                                                    unsafe9 = unsafe;
                                                    i55 = i12;
                                                    i57 = 1048575;
                                                    t2Var = this;
                                                    i51 = H2;
                                                    bArr12 = bArr;
                                                    break;
                                                }
                                            } else {
                                                i56 = i31;
                                                i53 = i76;
                                                i52 = i62;
                                                i50 = i6;
                                                bArr12 = bArr7;
                                                s1Var13 = s1Var7;
                                                i54 = i77;
                                                i55 = i12;
                                                unsafe9 = unsafe5;
                                                i57 = 1048575;
                                                obj6 = obj;
                                                break;
                                            }
                                        } else {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            int I9 = a2.I(bArr7, i30, s1Var7);
                                            int i94 = s1Var7.a;
                                            if (i94 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i94 > bArr7.length - I9) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            throw null;
                                        }
                                    case 19:
                                    case 36:
                                        bArr7 = bArr;
                                        unsafe5 = unsafe11;
                                        i30 = i61;
                                        str = "Failed to parse the message.";
                                        i31 = i56;
                                        i12 = i55;
                                        s1Var7 = s1Var;
                                        if (i65 == 2) {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            int I10 = a2.I(bArr7, i30, s1Var7);
                                            int i95 = s1Var7.a;
                                            if (i95 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i95 > bArr7.length - I10) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            throw null;
                                        }
                                        if (i65 == 5) {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            Float.intBitsToFloat(a2.n(bArr7, i30));
                                            throw null;
                                        }
                                        i51 = i30;
                                        if (i51 != i30) {
                                        }
                                        break;
                                    case 20:
                                    case 21:
                                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                        bArr7 = bArr;
                                        unsafe5 = unsafe11;
                                        i30 = i61;
                                        str = "Failed to parse the message.";
                                        i31 = i56;
                                        i12 = i55;
                                        s1Var7 = s1Var;
                                        if (i65 != 2) {
                                            if (i65 == 0) {
                                                if (i2Var3 != null) {
                                                    throw new ClassCastException();
                                                }
                                                a2.L(bArr7, i30, s1Var7);
                                                throw null;
                                            }
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            int I11 = a2.I(bArr7, i30, s1Var7);
                                            int i96 = s1Var7.a;
                                            if (i96 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i96 > bArr7.length - I11) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            int i97 = i96 + I11;
                                            if (I11 < i97) {
                                                a2.L(bArr7, I11, s1Var7);
                                                throw null;
                                            }
                                            if (I11 != i97) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            i51 = I11;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 22:
                                    case 29:
                                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                                        str = "Failed to parse the message.";
                                        i32 = i61;
                                        bArr7 = bArr;
                                        s1Var8 = s1Var;
                                        unsafe5 = unsafe11;
                                        i33 = i56;
                                        i12 = i55;
                                        if (i65 == 2) {
                                            C = a2.C(bArr7, i32, i2Var3, s1Var8);
                                            i51 = C;
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            if (i65 == 0) {
                                                i31 = i33;
                                                i30 = i32;
                                                s1Var7 = s1Var8;
                                                i51 = a2.K(i33, bArr7, i32, i6, i2Var3, s1Var8);
                                                if (i51 != i30) {
                                                }
                                            }
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 23:
                                    case 32:
                                    case 40:
                                    case 46:
                                        str = "Failed to parse the message.";
                                        i32 = i61;
                                        bArr7 = bArr;
                                        s1Var8 = s1Var;
                                        unsafe5 = unsafe11;
                                        i33 = i56;
                                        i12 = i55;
                                        if (i65 == 2) {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            int I12 = a2.I(bArr7, i32, s1Var8);
                                            int i98 = s1Var8.a;
                                            if (i98 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i98 > bArr7.length - I12) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            throw null;
                                        }
                                        if (i65 == 1) {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            a2.P(bArr7, i32);
                                            throw null;
                                        }
                                        s1Var7 = s1Var8;
                                        i30 = i32;
                                        i31 = i33;
                                        i51 = i30;
                                        if (i51 != i30) {
                                        }
                                        break;
                                    case 24:
                                    case 31:
                                    case 41:
                                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                        str = "Failed to parse the message.";
                                        i32 = i61;
                                        bArr7 = bArr;
                                        s1Var8 = s1Var;
                                        unsafe5 = unsafe11;
                                        i33 = i56;
                                        i12 = i55;
                                        if (i65 == 2) {
                                            f2 f2Var = (f2) i2Var3;
                                            C = a2.I(bArr7, i32, s1Var8);
                                            int i99 = s1Var8.a;
                                            if (i99 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i99 > bArr7.length - C) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            int i100 = C + i99;
                                            int i101 = f2Var.f5736i + (i99 >> 2);
                                            int length = f2Var.f5735e.length;
                                            if (i101 > length) {
                                                if (length != 0) {
                                                    while (length < i101) {
                                                        length = Math.max(((length * 3) / 2) + 1, 10);
                                                    }
                                                    f2Var.f5735e = Arrays.copyOf(f2Var.f5735e, length);
                                                } else {
                                                    f2Var.f5735e = new int[Math.max(i101, 10)];
                                                }
                                            }
                                            while (C < i100) {
                                                f2Var.e(a2.n(bArr7, C));
                                                C += 4;
                                            }
                                            if (C != i100) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            i51 = C;
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            if (i65 == 5) {
                                                i51 = i32 + 4;
                                                f2 f2Var2 = (f2) i2Var3;
                                                f2Var2.e(a2.n(bArr7, i32));
                                                while (i51 < i6) {
                                                    int I13 = a2.I(bArr7, i51, s1Var8);
                                                    if (i33 == s1Var8.a) {
                                                        f2Var2.e(a2.n(bArr7, I13));
                                                        i51 = I13 + 4;
                                                    } else {
                                                        s1Var7 = s1Var8;
                                                        i30 = i32;
                                                        i31 = i33;
                                                        if (i51 != i30) {
                                                        }
                                                    }
                                                }
                                                s1Var7 = s1Var8;
                                                i30 = i32;
                                                i31 = i33;
                                                if (i51 != i30) {
                                                }
                                            }
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 25:
                                    case 42:
                                        str = "Failed to parse the message.";
                                        i32 = i61;
                                        bArr7 = bArr;
                                        s1Var8 = s1Var;
                                        unsafe5 = unsafe11;
                                        i33 = i56;
                                        i12 = i55;
                                        if (i65 != 2) {
                                            if (i65 == 0) {
                                                if (i2Var3 != null) {
                                                    throw new ClassCastException();
                                                }
                                                a2.L(bArr7, i32, s1Var8);
                                                throw null;
                                            }
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            I = a2.I(bArr7, i32, s1Var8);
                                            int i102 = s1Var8.a;
                                            if (i102 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i102 > bArr7.length - I) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            int i103 = i102 + I;
                                            if (I < i103) {
                                                a2.L(bArr7, I, s1Var8);
                                                throw null;
                                            }
                                            if (I != i103) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            i51 = I;
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 26:
                                        str = "Failed to parse the message.";
                                        i32 = i61;
                                        bArr7 = bArr;
                                        s1Var8 = s1Var;
                                        i33 = i56;
                                        i12 = i55;
                                        if (i65 != 2) {
                                            unsafe5 = unsafe11;
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        } else if ((j12 & 536870912) == 0) {
                                            int I14 = a2.I(bArr7, i32, s1Var8);
                                            int i104 = s1Var8.a;
                                            if (i104 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i104 == 0) {
                                                i2Var3.add("");
                                            } else {
                                                i2Var3.add(new String(bArr7, I14, i104, StandardCharsets.UTF_8));
                                                I14 += i104;
                                            }
                                            while (I14 < i6) {
                                                int I15 = a2.I(bArr7, I14, s1Var8);
                                                if (i33 == s1Var8.a) {
                                                    I14 = a2.I(bArr7, I15, s1Var8);
                                                    int i105 = s1Var8.a;
                                                    if (i105 < 0) {
                                                        throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                                    }
                                                    if (i105 == 0) {
                                                        i2Var3.add("");
                                                    } else {
                                                        i2Var3.add(new String(bArr7, I14, i105, StandardCharsets.UTF_8));
                                                        I14 += i105;
                                                    }
                                                } else {
                                                    i51 = I14;
                                                    i30 = i32;
                                                    i31 = i33;
                                                    unsafe5 = unsafe11;
                                                    s1Var7 = s1Var8;
                                                    if (i51 != i30) {
                                                    }
                                                }
                                            }
                                            i51 = I14;
                                            i30 = i32;
                                            i31 = i33;
                                            unsafe5 = unsafe11;
                                            s1Var7 = s1Var8;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            I = a2.I(bArr7, i32, s1Var8);
                                            int i106 = s1Var8.a;
                                            if (i106 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i106 == 0) {
                                                i2Var3.add("");
                                                unsafe5 = unsafe11;
                                            } else {
                                                int i107 = I + i106;
                                                if (!o3.b(bArr7, I, i107)) {
                                                    throw new n2("Protocol message had invalid UTF-8.");
                                                }
                                                unsafe5 = unsafe11;
                                                i2Var3.add(new String(bArr7, I, i106, StandardCharsets.UTF_8));
                                                I = i107;
                                            }
                                            while (I < i6) {
                                                int I16 = a2.I(bArr7, I, s1Var8);
                                                if (i33 == s1Var8.a) {
                                                    I = a2.I(bArr7, I16, s1Var8);
                                                    int i108 = s1Var8.a;
                                                    if (i108 < 0) {
                                                        throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                                    }
                                                    if (i108 == 0) {
                                                        i2Var3.add("");
                                                    } else {
                                                        int i109 = I + i108;
                                                        if (!o3.b(bArr7, I, i109)) {
                                                            throw new n2("Protocol message had invalid UTF-8.");
                                                        }
                                                        i2Var3.add(new String(bArr7, I, i108, StandardCharsets.UTF_8));
                                                        I = i109;
                                                    }
                                                } else {
                                                    i51 = I;
                                                    s1Var7 = s1Var8;
                                                    i30 = i32;
                                                    i31 = i33;
                                                    if (i51 != i30) {
                                                    }
                                                }
                                            }
                                            i51 = I;
                                            s1Var7 = s1Var8;
                                            i30 = i32;
                                            i31 = i33;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 27:
                                        s1Var9 = s1Var;
                                        str = "Failed to parse the message.";
                                        i12 = i55;
                                        if (i65 == 2) {
                                            t2Var = this;
                                            i51 = a2.x(t2Var.C(i76), i56, bArr, i61, i6, i2Var3, s1Var9);
                                            i30 = i61;
                                            i31 = i56;
                                            bArr7 = bArr;
                                            unsafe5 = unsafe11;
                                            s1Var7 = s1Var9;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            t2Var = this;
                                            bArr7 = bArr;
                                            i30 = i61;
                                            i31 = i56;
                                            unsafe5 = unsafe11;
                                            s1Var7 = s1Var9;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 28:
                                        bArr8 = bArr;
                                        s1Var10 = s1Var;
                                        i34 = i61;
                                        str = "Failed to parse the message.";
                                        i12 = i55;
                                        if (i65 == 2) {
                                            int I17 = a2.I(bArr8, i34, s1Var10);
                                            int i110 = s1Var10.a;
                                            if (i110 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i110 > bArr8.length - I17) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            if (i110 == 0) {
                                                i2Var3.add(u1.f5850e);
                                            } else {
                                                i2Var3.add(u1.m(bArr8, I17, i110));
                                                I17 += i110;
                                            }
                                            while (I17 < i6) {
                                                int I18 = a2.I(bArr8, I17, s1Var10);
                                                if (i56 == s1Var10.a) {
                                                    I17 = a2.I(bArr8, I18, s1Var10);
                                                    int i111 = s1Var10.a;
                                                    if (i111 < 0) {
                                                        throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                                    }
                                                    if (i111 > bArr8.length - I17) {
                                                        throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                                    }
                                                    if (i111 == 0) {
                                                        i2Var3.add(u1.f5850e);
                                                    } else {
                                                        i2Var3.add(u1.m(bArr8, I17, i111));
                                                        I17 += i111;
                                                    }
                                                } else {
                                                    t2Var = this;
                                                    i51 = I17;
                                                    i31 = i56;
                                                    unsafe5 = unsafe11;
                                                    bArr7 = bArr8;
                                                    s1Var7 = s1Var10;
                                                    i30 = i34;
                                                    if (i51 != i30) {
                                                    }
                                                }
                                            }
                                            t2Var = this;
                                            i51 = I17;
                                            i31 = i56;
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr8;
                                            s1Var7 = s1Var10;
                                            i30 = i34;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            t2Var = this;
                                            i31 = i56;
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr8;
                                            s1Var7 = s1Var10;
                                            i30 = i34;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    case 30:
                                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                        bArr8 = bArr;
                                        s1Var10 = s1Var;
                                        i33 = i56;
                                        if (i65 == 2) {
                                            K = a2.C(bArr8, i61, i2Var3, s1Var10);
                                            i35 = i33;
                                            i2Var = i2Var3;
                                            i34 = i61;
                                        } else if (i65 == 0) {
                                            K = a2.K(i33, bArr8, i61, i6, i2Var3, s1Var10);
                                            i35 = i33;
                                            bArr8 = bArr8;
                                            i34 = i61;
                                            i2Var = i2Var3;
                                        } else {
                                            str = "Failed to parse the message.";
                                            i12 = i55;
                                            t2Var = this;
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr8;
                                            s1Var7 = s1Var10;
                                            i30 = i61;
                                            i31 = i33;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        g2 B3 = t2Var.B(i76);
                                        a aVar = z2.a;
                                        if (B3 == null) {
                                            i36 = K;
                                            str = "Failed to parse the message.";
                                            i12 = i55;
                                            unsafe6 = unsafe11;
                                        } else if (i2Var != null) {
                                            int size2 = i2Var.size();
                                            i36 = K;
                                            int i112 = 0;
                                            int i113 = 0;
                                            g3 g3Var5 = null;
                                            while (i113 < size2) {
                                                int i114 = i55;
                                                Integer num = (Integer) i2Var.get(i113);
                                                String str3 = str2;
                                                int intValue = num.intValue();
                                                if (B3.a(intValue)) {
                                                    if (i113 != i112) {
                                                        i2Var.set(i112, num);
                                                    }
                                                    i112++;
                                                    unsafe7 = unsafe11;
                                                    i37 = i113;
                                                } else {
                                                    if (g3Var5 == null) {
                                                        e2 e2Var4 = (e2) obj;
                                                        i37 = i113;
                                                        g3 g3Var6 = e2Var4.zzc;
                                                        if (g3Var6 == g3Var2) {
                                                            g3Var6 = g3.b();
                                                            e2Var4.zzc = g3Var6;
                                                        }
                                                        g3Var5 = g3Var6;
                                                    } else {
                                                        i37 = i113;
                                                    }
                                                    unsafe7 = unsafe11;
                                                    g3 g3Var7 = g3Var5;
                                                    g3Var7.c(i62 << 3, Long.valueOf(intValue));
                                                    g3Var5 = g3Var7;
                                                }
                                                i113 = i37 + 1;
                                                unsafe11 = unsafe7;
                                                i55 = i114;
                                                str2 = str3;
                                            }
                                            str = str2;
                                            i12 = i55;
                                            unsafe6 = unsafe11;
                                            if (i112 != size2) {
                                                i2Var.subList(i112, size2).clear();
                                            }
                                        } else {
                                            i36 = K;
                                            str = "Failed to parse the message.";
                                            i12 = i55;
                                            unsafe6 = unsafe11;
                                            Iterator it = i2Var.iterator();
                                            g3 g3Var8 = null;
                                            while (it.hasNext()) {
                                                int intValue2 = ((Integer) it.next()).intValue();
                                                if (!B3.a(intValue2)) {
                                                    if (g3Var8 == null) {
                                                        e2 e2Var5 = (e2) obj;
                                                        g3 g3Var9 = e2Var5.zzc;
                                                        if (g3Var9 == g3Var2) {
                                                            g3Var9 = g3.b();
                                                            e2Var5.zzc = g3Var9;
                                                        }
                                                        g3Var8 = g3Var9;
                                                    }
                                                    g3Var8.c(i62 << 3, Long.valueOf(intValue2));
                                                    it.remove();
                                                }
                                            }
                                        }
                                        t2Var = this;
                                        i31 = i35;
                                        unsafe5 = unsafe6;
                                        i51 = i36;
                                        bArr7 = bArr8;
                                        s1Var7 = s1Var10;
                                        i30 = i34;
                                        if (i51 != i30) {
                                        }
                                        break;
                                    case 33:
                                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                                        bArr9 = bArr;
                                        s1Var9 = s1Var;
                                        i38 = i56;
                                        i39 = i61;
                                        if (i65 == 2) {
                                            f2 f2Var3 = (f2) i2Var3;
                                            I2 = a2.I(bArr9, i39, s1Var9);
                                            int i115 = s1Var9.a;
                                            if (i115 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i115 > bArr9.length - I2) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            int i116 = i115 + I2;
                                            while (I2 < i116) {
                                                I2 = a2.I(bArr9, I2, s1Var9);
                                                f2Var3.e(a2.l(s1Var9.a));
                                            }
                                            if (I2 != i116) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                        } else {
                                            if (i65 == 0) {
                                                f2 f2Var4 = (f2) i2Var3;
                                                I2 = a2.I(bArr9, i39, s1Var9);
                                                f2Var4.e(a2.l(s1Var9.a));
                                                while (I2 < i6) {
                                                    int I19 = a2.I(bArr9, I2, s1Var9);
                                                    if (i38 == s1Var9.a) {
                                                        I2 = a2.I(bArr9, I19, s1Var9);
                                                        f2Var4.e(a2.l(s1Var9.a));
                                                    }
                                                }
                                            }
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr9;
                                            i30 = i39;
                                            str = "Failed to parse the message.";
                                            i31 = i38;
                                            i12 = i55;
                                            s1Var7 = s1Var9;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        unsafe5 = unsafe11;
                                        i51 = I2;
                                        str = "Failed to parse the message.";
                                        i31 = i38;
                                        i12 = i55;
                                        bArr7 = bArr9;
                                        s1Var7 = s1Var9;
                                        i30 = i39;
                                        if (i51 != i30) {
                                        }
                                        break;
                                    case 34:
                                    case 48:
                                        bArr9 = bArr;
                                        s1Var9 = s1Var;
                                        i38 = i56;
                                        i39 = i61;
                                        if (i65 != 2) {
                                            if (i65 == 0) {
                                                if (i2Var3 != null) {
                                                    throw new ClassCastException();
                                                }
                                                a2.L(bArr9, i39, s1Var9);
                                                throw null;
                                            }
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr9;
                                            i30 = i39;
                                            str = "Failed to parse the message.";
                                            i31 = i38;
                                            i12 = i55;
                                            s1Var7 = s1Var9;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            if (i2Var3 != null) {
                                                throw new ClassCastException();
                                            }
                                            I2 = a2.I(bArr9, i39, s1Var9);
                                            int i117 = s1Var9.a;
                                            if (i117 < 0) {
                                                throw new n2("CodedInputStream encountered an embedded string or message which claimed to have negative size.");
                                            }
                                            if (i117 > bArr9.length - I2) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            int i118 = i117 + I2;
                                            if (I2 < i118) {
                                                a2.L(bArr9, I2, s1Var9);
                                                throw null;
                                            }
                                            if (I2 != i118) {
                                                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
                                            }
                                            unsafe5 = unsafe11;
                                            i51 = I2;
                                            str = "Failed to parse the message.";
                                            i31 = i38;
                                            i12 = i55;
                                            bArr7 = bArr9;
                                            s1Var7 = s1Var9;
                                            i30 = i39;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                    default:
                                        if (i65 == 3) {
                                            int i119 = (i56 & (-8)) | 4;
                                            y2 C2 = t2Var.C(i76);
                                            e2 g6 = C2.g();
                                            byte[] bArr15 = bArr;
                                            int i120 = i61;
                                            int M2 = a2.M(g6, C2, bArr15, i120, i6, i119, s1Var);
                                            int i121 = i119;
                                            s1Var8 = s1Var;
                                            C2.a(g6);
                                            s1Var8.f5825c = g6;
                                            i2Var3.add(g6);
                                            while (true) {
                                                if (M2 < i6) {
                                                    int i122 = i120;
                                                    int I20 = a2.I(bArr15, M2, s1Var8);
                                                    if (i56 == s1Var8.a) {
                                                        int i123 = i121;
                                                        e2 g10 = C2.g();
                                                        M2 = a2.M(g10, C2, bArr15, I20, i6, i123, s1Var);
                                                        byte[] bArr16 = bArr15;
                                                        y2 y2Var = C2;
                                                        s1Var8 = s1Var;
                                                        y2Var.a(g10);
                                                        s1Var8.f5825c = g10;
                                                        i2Var3.add(g10);
                                                        bArr15 = bArr16;
                                                        i121 = i123;
                                                        C2 = y2Var;
                                                        i120 = i122;
                                                    } else {
                                                        i40 = i122;
                                                    }
                                                } else {
                                                    i40 = i120;
                                                }
                                            }
                                            unsafe5 = unsafe11;
                                            bArr7 = bArr15;
                                            i30 = i40;
                                            str = "Failed to parse the message.";
                                            i31 = i56;
                                            i51 = M2;
                                            i12 = i55;
                                            s1Var7 = s1Var8;
                                            if (i51 != i30) {
                                            }
                                        } else {
                                            bArr7 = bArr;
                                            unsafe5 = unsafe11;
                                            i30 = i61;
                                            str = "Failed to parse the message.";
                                            i31 = i56;
                                            i12 = i55;
                                            s1Var7 = s1Var;
                                            i51 = i30;
                                            if (i51 != i30) {
                                            }
                                        }
                                        break;
                                }
                            }
                        } else if (i65 == 2) {
                            i2 i2Var4 = (i2) unsafe11.getObject(obj16, j5);
                            if (!((q1) i2Var4).f5812d) {
                                int size3 = i2Var4.size();
                                i2Var4 = i2Var4.l(size3 == 0 ? 10 : size3 + size3);
                                unsafe11.putObject(obj16, j5, i2Var4);
                            }
                            bArr12 = bArr;
                            i50 = i6;
                            i51 = a2.x(t2Var.C(i76), i56, bArr12, i61, i50, i2Var4, s1Var);
                            obj6 = obj;
                            i52 = i62;
                            s1Var13 = s1Var;
                            i53 = i76;
                            i54 = i77;
                            i57 = 1048575;
                            i56 = i56;
                            unsafe9 = unsafe11;
                        } else {
                            bArr6 = bArr;
                            s1Var6 = s1Var;
                            i28 = i61;
                            i12 = i55;
                            i29 = i56;
                            unsafe = unsafe11;
                            obj2 = obj;
                            i15 = i62;
                            i11 = i10;
                            s1Var2 = s1Var6;
                            bArr2 = bArr6;
                            str = str2;
                            i17 = i28;
                        }
                        i53 = i76;
                        i16 = i29;
                        i54 = i77;
                        if (i16 != i11) {
                        }
                        e2 e2Var222 = (e2) obj2;
                        g3Var = e2Var222.zzc;
                        if (g3Var == g3Var2) {
                        }
                        int i7922 = i16;
                        int H22 = a2.H(i7922, bArr2, i17, i6, g3Var, s1Var2);
                        s1Var13 = s1Var;
                        obj6 = obj2;
                        i52 = i15;
                        i56 = i7922;
                        i50 = i6;
                        unsafe9 = unsafe;
                        i55 = i12;
                        i57 = 1048575;
                        t2Var = this;
                        i51 = H22;
                        bArr12 = bArr;
                    }
                }
                i11 = i10;
                if (i16 != i11) {
                }
                e2 e2Var2222 = (e2) obj2;
                g3Var = e2Var2222.zzc;
                if (g3Var == g3Var2) {
                }
                int i79222 = i16;
                int H222 = a2.H(i79222, bArr2, i17, i6, g3Var, s1Var2);
                s1Var13 = s1Var;
                obj6 = obj2;
                i52 = i15;
                i56 = i79222;
                i50 = i6;
                unsafe9 = unsafe;
                i55 = i12;
                i57 = 1048575;
                t2Var = this;
                i51 = H222;
                bArr12 = bArr;
            } else {
                i11 = i10;
                obj2 = obj6;
                str = "Failed to parse the message.";
                objArr = objArr2;
                i12 = i55;
                unsafe = unsafe9;
            }
        }
    }

    public final int x(int i5, int i6) {
        int[] iArr = this.a;
        int length = (iArr.length / 3) - 1;
        while (i6 <= length) {
            int i10 = (length + i6) >>> 1;
            int i11 = i10 * 3;
            int i12 = iArr[i11];
            if (i5 == i12) {
                return i11;
            }
            if (i5 < i12) {
                length = i10 - 1;
            } else {
                i6 = i10 + 1;
            }
        }
        return -1;
    }

    public final int z(int i5) {
        return this.a[i5 + 1];
    }
}
