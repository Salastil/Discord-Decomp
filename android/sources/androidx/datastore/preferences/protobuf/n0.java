package androidx.datastore.preferences.protobuf;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.reflect.Field;
import java.nio.charset.Charset;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import sun.misc.Unsafe;

/* loaded from: classes.dex */
public final class n0 implements w0 {

    /* renamed from: o, reason: collision with root package name */
    public static final int[] f1777o = new int[0];

    /* renamed from: p, reason: collision with root package name */
    public static final Unsafe f1778p = n1.i();
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final Object[] f1779b;

    /* renamed from: c, reason: collision with root package name */
    public final int f1780c;

    /* renamed from: d, reason: collision with root package name */
    public final int f1781d;

    /* renamed from: e, reason: collision with root package name */
    public final a f1782e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f1783f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f1784g;

    /* renamed from: h, reason: collision with root package name */
    public final int[] f1785h;

    /* renamed from: i, reason: collision with root package name */
    public final int f1786i;
    public final int j;
    public final p0 k;

    /* renamed from: l, reason: collision with root package name */
    public final d0 f1787l;

    /* renamed from: m, reason: collision with root package name */
    public final f1 f1788m;

    /* renamed from: n, reason: collision with root package name */
    public final j0 f1789n;

    public n0(int[] iArr, Object[] objArr, int i5, int i6, a aVar, boolean z5, int[] iArr2, int i10, int i11, p0 p0Var, d0 d0Var, f1 f1Var, m mVar, j0 j0Var) {
        this.a = iArr;
        this.f1779b = objArr;
        this.f1780c = i5;
        this.f1781d = i6;
        this.f1783f = aVar instanceof t;
        this.f1784g = z5;
        this.f1785h = iArr2;
        this.f1786i = i10;
        this.j = i11;
        this.k = p0Var;
        this.f1787l = d0Var;
        this.f1788m = f1Var;
        this.f1782e = aVar;
        this.f1789n = j0Var;
    }

    public static long A(long j, Object obj) {
        return ((Long) n1.f1792d.i(j, obj)).longValue();
    }

    public static Field D(Class cls, String str) {
        try {
            return cls.getDeclaredField(str);
        } catch (NoSuchFieldException unused) {
            Field[] declaredFields = cls.getDeclaredFields();
            for (Field field : declaredFields) {
                if (str.equals(field.getName())) {
                    return field;
                }
            }
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Field ", str, " for ");
            a3.e.v(cls, m5, " not found. Known fields are ");
            m5.append(Arrays.toString(declaredFields));
            throw new RuntimeException(m5.toString());
        }
    }

    public static int G(int i5) {
        return (i5 & 267386880) >>> 20;
    }

    public static void K(int i5, Object obj, f0 f0Var) {
        if (!(obj instanceof String)) {
            f0Var.a(i5, (f) obj);
        } else {
            ((j) f0Var.a).P(i5, (String) obj);
        }
    }

    public static List s(long j, Object obj) {
        return (List) n1.f1792d.i(j, obj);
    }

    public static n0 w(v0 v0Var, p0 p0Var, d0 d0Var, f1 f1Var, m mVar, j0 j0Var) {
        if (v0Var instanceof v0) {
            return x(v0Var, p0Var, d0Var, f1Var, mVar, j0Var);
        }
        v0Var.getClass();
        throw new ClassCastException();
    }

    /* JADX WARN: Removed duplicated region for block: B:106:0x035b  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x03ad  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0283  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x02a1  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x02a4  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0287  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static n0 x(v0 v0Var, p0 p0Var, d0 d0Var, f1 f1Var, m mVar, j0 j0Var) {
        int i5;
        int charAt;
        int charAt2;
        int i6;
        int i10;
        int[] iArr;
        int i11;
        int i12;
        int i13;
        int i14;
        char charAt3;
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
        char charAt10;
        int[] iArr2;
        int i22;
        int i23;
        int i24;
        boolean z5;
        int i25;
        int objectFieldOffset;
        int i26;
        int i27;
        int i28;
        int i29;
        int i30;
        Field D;
        char charAt11;
        int i31;
        int i32;
        Object obj;
        Field D2;
        Object obj2;
        Field D3;
        int i33;
        char charAt12;
        int i34;
        char charAt13;
        int i35;
        int i36;
        char charAt14;
        int i37;
        char charAt15;
        char charAt16;
        int i38 = 0;
        boolean z6 = (v0Var.f1820d & 1) != 1;
        String str = v0Var.f1818b;
        int length = str.length();
        int charAt17 = str.charAt(0);
        if (charAt17 >= 55296) {
            int i39 = charAt17 & 8191;
            int i40 = 1;
            int i41 = 13;
            while (true) {
                i5 = i40 + 1;
                charAt16 = str.charAt(i40);
                if (charAt16 < 55296) {
                    break;
                }
                i39 |= (charAt16 & 8191) << i41;
                i41 += 13;
                i40 = i5;
            }
            charAt17 = i39 | (charAt16 << i41);
        } else {
            i5 = 1;
        }
        int i42 = i5 + 1;
        int charAt18 = str.charAt(i5);
        if (charAt18 >= 55296) {
            int i43 = charAt18 & 8191;
            int i44 = 13;
            while (true) {
                i37 = i42 + 1;
                charAt15 = str.charAt(i42);
                if (charAt15 < 55296) {
                    break;
                }
                i43 |= (charAt15 & 8191) << i44;
                i44 += 13;
                i42 = i37;
            }
            charAt18 = i43 | (charAt15 << i44);
            i42 = i37;
        }
        if (charAt18 == 0) {
            i11 = 0;
            i13 = 0;
            charAt = 0;
            charAt2 = 0;
            i10 = 0;
            iArr = f1777o;
            i12 = 0;
        } else {
            int i45 = i42 + 1;
            int charAt19 = str.charAt(i42);
            if (charAt19 >= 55296) {
                int i46 = charAt19 & 8191;
                int i47 = 13;
                while (true) {
                    i21 = i45 + 1;
                    charAt10 = str.charAt(i45);
                    if (charAt10 < 55296) {
                        break;
                    }
                    i46 |= (charAt10 & 8191) << i47;
                    i47 += 13;
                    i45 = i21;
                }
                charAt19 = i46 | (charAt10 << i47);
                i45 = i21;
            }
            int i48 = i45 + 1;
            int charAt20 = str.charAt(i45);
            if (charAt20 >= 55296) {
                int i49 = charAt20 & 8191;
                int i50 = 13;
                while (true) {
                    i20 = i48 + 1;
                    charAt9 = str.charAt(i48);
                    if (charAt9 < 55296) {
                        break;
                    }
                    i49 |= (charAt9 & 8191) << i50;
                    i50 += 13;
                    i48 = i20;
                }
                charAt20 = i49 | (charAt9 << i50);
                i48 = i20;
            }
            int i51 = i48 + 1;
            int charAt21 = str.charAt(i48);
            if (charAt21 >= 55296) {
                int i52 = charAt21 & 8191;
                int i53 = 13;
                while (true) {
                    i19 = i51 + 1;
                    charAt8 = str.charAt(i51);
                    if (charAt8 < 55296) {
                        break;
                    }
                    i52 |= (charAt8 & 8191) << i53;
                    i53 += 13;
                    i51 = i19;
                }
                charAt21 = i52 | (charAt8 << i53);
                i51 = i19;
            }
            int i54 = i51 + 1;
            int charAt22 = str.charAt(i51);
            if (charAt22 >= 55296) {
                int i55 = charAt22 & 8191;
                int i56 = 13;
                while (true) {
                    i18 = i54 + 1;
                    charAt7 = str.charAt(i54);
                    if (charAt7 < 55296) {
                        break;
                    }
                    i55 |= (charAt7 & 8191) << i56;
                    i56 += 13;
                    i54 = i18;
                }
                charAt22 = i55 | (charAt7 << i56);
                i54 = i18;
            }
            int i57 = i54 + 1;
            charAt = str.charAt(i54);
            if (charAt >= 55296) {
                int i58 = charAt & 8191;
                int i59 = 13;
                while (true) {
                    i17 = i57 + 1;
                    charAt6 = str.charAt(i57);
                    if (charAt6 < 55296) {
                        break;
                    }
                    i58 |= (charAt6 & 8191) << i59;
                    i59 += 13;
                    i57 = i17;
                }
                charAt = i58 | (charAt6 << i59);
                i57 = i17;
            }
            int i60 = i57 + 1;
            charAt2 = str.charAt(i57);
            if (charAt2 >= 55296) {
                int i61 = charAt2 & 8191;
                int i62 = 13;
                while (true) {
                    i16 = i60 + 1;
                    charAt5 = str.charAt(i60);
                    if (charAt5 < 55296) {
                        break;
                    }
                    i61 |= (charAt5 & 8191) << i62;
                    i62 += 13;
                    i60 = i16;
                }
                charAt2 = i61 | (charAt5 << i62);
                i60 = i16;
            }
            int i63 = i60 + 1;
            int charAt23 = str.charAt(i60);
            if (charAt23 >= 55296) {
                int i64 = charAt23 & 8191;
                int i65 = i63;
                int i66 = 13;
                while (true) {
                    i15 = i65 + 1;
                    charAt4 = str.charAt(i65);
                    if (charAt4 < 55296) {
                        break;
                    }
                    i64 |= (charAt4 & 8191) << i66;
                    i66 += 13;
                    i65 = i15;
                }
                charAt23 = i64 | (charAt4 << i66);
                i6 = i15;
            } else {
                i6 = i63;
            }
            int i67 = i6 + 1;
            int charAt24 = str.charAt(i6);
            if (charAt24 >= 55296) {
                int i68 = charAt24 & 8191;
                int i69 = i67;
                int i70 = 13;
                while (true) {
                    i14 = i69 + 1;
                    charAt3 = str.charAt(i69);
                    if (charAt3 < 55296) {
                        break;
                    }
                    i68 |= (charAt3 & 8191) << i70;
                    i70 += 13;
                    i69 = i14;
                }
                charAt24 = i68 | (charAt3 << i70);
                i67 = i14;
            }
            int[] iArr3 = new int[charAt24 + charAt2 + charAt23];
            i10 = (charAt19 * 2) + charAt20;
            int i71 = charAt21;
            iArr = iArr3;
            i11 = i71;
            i12 = charAt22;
            i13 = charAt24;
            i38 = charAt19;
            i42 = i67;
        }
        Unsafe unsafe = f1778p;
        Object[] objArr = v0Var.f1819c;
        int i72 = i38;
        Class<?> cls = v0Var.a.getClass();
        int i73 = charAt17;
        int[] iArr4 = new int[charAt * 3];
        Object[] objArr2 = new Object[charAt * 2];
        int i74 = charAt2 + i13;
        int i75 = i13;
        int i76 = i74;
        int i77 = 0;
        int i78 = 0;
        while (i42 < length) {
            int i79 = i42 + 1;
            int charAt25 = str.charAt(i42);
            int i80 = length;
            if (charAt25 >= 55296) {
                int i81 = charAt25 & 8191;
                int i82 = i79;
                int i83 = 13;
                while (true) {
                    i36 = i82 + 1;
                    charAt14 = str.charAt(i82);
                    iArr2 = iArr4;
                    if (charAt14 < 55296) {
                        break;
                    }
                    i81 |= (charAt14 & 8191) << i83;
                    i83 += 13;
                    i82 = i36;
                    iArr4 = iArr2;
                }
                charAt25 = i81 | (charAt14 << i83);
                i22 = i36;
            } else {
                iArr2 = iArr4;
                i22 = i79;
            }
            int i84 = i22 + 1;
            int charAt26 = str.charAt(i22);
            if (charAt26 >= 55296) {
                int i85 = charAt26 & 8191;
                int i86 = i84;
                int i87 = 13;
                while (true) {
                    i34 = i86 + 1;
                    charAt13 = str.charAt(i86);
                    i35 = i85;
                    if (charAt13 < 55296) {
                        break;
                    }
                    i85 = i35 | ((charAt13 & 8191) << i87);
                    i87 += 13;
                    i86 = i34;
                }
                charAt26 = i35 | (charAt13 << i87);
                i23 = i34;
            } else {
                i23 = i84;
            }
            int i88 = i11;
            int i89 = charAt26 & 255;
            Object[] objArr3 = objArr;
            if ((charAt26 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
                iArr[i77] = i78;
                i77++;
            }
            int i90 = charAt25;
            if (i89 >= 51) {
                int i91 = i23 + 1;
                int charAt27 = str.charAt(i23);
                char c6 = 55296;
                if (charAt27 >= 55296) {
                    int i92 = charAt27 & 8191;
                    int i93 = 13;
                    while (true) {
                        i33 = i91 + 1;
                        charAt12 = str.charAt(i91);
                        if (charAt12 < c6) {
                            break;
                        }
                        i92 |= (charAt12 & 8191) << i93;
                        i93 += 13;
                        i91 = i33;
                        c6 = 55296;
                    }
                    charAt27 = i92 | (charAt12 << i93);
                    i91 = i33;
                }
                int i94 = i89 - 51;
                int i95 = charAt27;
                if (i94 == 9 || i94 == 17) {
                    i32 = i10 + 1;
                    objArr2[((i78 / 3) * 2) + 1] = objArr3[i10];
                } else {
                    if (i94 == 12 && (i73 & 1) == 1) {
                        i32 = i10 + 1;
                        objArr2[((i78 / 3) * 2) + 1] = objArr3[i10];
                    }
                    int i96 = i95 * 2;
                    obj = objArr3[i96];
                    if (obj instanceof Field) {
                        D2 = D(cls, (String) obj);
                        objArr3[i96] = D2;
                    } else {
                        D2 = (Field) obj;
                    }
                    int i97 = i91;
                    int objectFieldOffset2 = (int) unsafe.objectFieldOffset(D2);
                    int i98 = i96 + 1;
                    obj2 = objArr3[i98];
                    if (obj2 instanceof Field) {
                        D3 = D(cls, (String) obj2);
                        objArr3[i98] = D3;
                    } else {
                        D3 = (Field) obj2;
                    }
                    int i99 = i10;
                    z5 = z6;
                    i29 = i99;
                    i42 = i97;
                    i30 = objectFieldOffset2;
                    i24 = i12;
                    i28 = (int) unsafe.objectFieldOffset(D3);
                    i27 = 0;
                }
                i10 = i32;
                int i962 = i95 * 2;
                obj = objArr3[i962];
                if (obj instanceof Field) {
                }
                int i972 = i91;
                int objectFieldOffset22 = (int) unsafe.objectFieldOffset(D2);
                int i982 = i962 + 1;
                obj2 = objArr3[i982];
                if (obj2 instanceof Field) {
                }
                int i992 = i10;
                z5 = z6;
                i29 = i992;
                i42 = i972;
                i30 = objectFieldOffset22;
                i24 = i12;
                i28 = (int) unsafe.objectFieldOffset(D3);
                i27 = 0;
            } else {
                int i100 = i10 + 1;
                Field D4 = D(cls, (String) objArr3[i10]);
                if (i89 == 9 || i89 == 17) {
                    i24 = i12;
                    objArr2[((i78 / 3) * 2) + 1] = D4.getType();
                } else {
                    if (i89 == 27 || i89 == 49) {
                        i24 = i12;
                        i31 = i10 + 2;
                        objArr2[((i78 / 3) * 2) + 1] = objArr3[i100];
                    } else if (i89 == 12 || i89 == 30 || i89 == 44) {
                        i24 = i12;
                        if ((i73 & 1) == 1) {
                            i31 = i10 + 2;
                            objArr2[((i78 / 3) * 2) + 1] = objArr3[i100];
                        }
                    } else if (i89 == 50) {
                        int i101 = i75 + 1;
                        iArr[i75] = i78;
                        int i102 = (i78 / 3) * 2;
                        int i103 = i10 + 2;
                        objArr2[i102] = objArr3[i100];
                        if ((charAt26 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
                            i25 = i10 + 3;
                            objArr2[i102 + 1] = objArr3[i103];
                            i24 = i12;
                            z5 = z6;
                            i75 = i101;
                        } else {
                            z5 = z6;
                            i25 = i103;
                            i75 = i101;
                            i24 = i12;
                        }
                        objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                        if ((i73 & 1) == 1 || i89 > 17) {
                            i26 = i23;
                            i27 = 0;
                            i28 = 0;
                        } else {
                            int i104 = i23 + 1;
                            int charAt28 = str.charAt(i23);
                            if (charAt28 >= 55296) {
                                int i105 = charAt28 & 8191;
                                int i106 = 13;
                                while (true) {
                                    i26 = i104 + 1;
                                    charAt11 = str.charAt(i104);
                                    if (charAt11 < 55296) {
                                        break;
                                    }
                                    i105 |= (charAt11 & 8191) << i106;
                                    i106 += 13;
                                    i104 = i26;
                                }
                                charAt28 = i105 | (charAt11 << i106);
                            } else {
                                i26 = i104;
                            }
                            int i107 = (charAt28 / 32) + (i72 * 2);
                            Object obj3 = objArr3[i107];
                            if (obj3 instanceof Field) {
                                D = (Field) obj3;
                            } else {
                                D = D(cls, (String) obj3);
                                objArr3[i107] = D;
                            }
                            i28 = (int) unsafe.objectFieldOffset(D);
                            i27 = charAt28 % 32;
                        }
                        if (i89 >= 18 && i89 <= 49) {
                            iArr[i76] = objectFieldOffset;
                            i76++;
                        }
                        i29 = i25;
                        i30 = objectFieldOffset;
                        i42 = i26;
                    } else {
                        i24 = i12;
                    }
                    i25 = i31;
                    z5 = z6;
                    objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                    if ((i73 & 1) == 1) {
                    }
                    i26 = i23;
                    i27 = 0;
                    i28 = 0;
                    if (i89 >= 18) {
                        iArr[i76] = objectFieldOffset;
                        i76++;
                    }
                    i29 = i25;
                    i30 = objectFieldOffset;
                    i42 = i26;
                }
                z5 = z6;
                i25 = i100;
                objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                if ((i73 & 1) == 1) {
                }
                i26 = i23;
                i27 = 0;
                i28 = 0;
                if (i89 >= 18) {
                }
                i29 = i25;
                i30 = objectFieldOffset;
                i42 = i26;
            }
            int i108 = i78 + 1;
            iArr2[i78] = i90;
            int i109 = i78 + 2;
            String str2 = str;
            iArr2[i108] = ((charAt26 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? 536870912 : 0) | ((charAt26 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? 268435456 : 0) | (i89 << 20) | i30;
            i78 += 3;
            iArr2[i109] = (i27 << 20) | i28;
            boolean z7 = z5;
            i10 = i29;
            z6 = z7;
            i11 = i88;
            length = i80;
            objArr = objArr3;
            iArr4 = iArr2;
            i12 = i24;
            str = str2;
        }
        return new n0(iArr4, objArr2, i11, i12, v0Var.a, z6, iArr, i13, i74, p0Var, d0Var, f1Var, mVar, j0Var);
    }

    public static long y(int i5) {
        return i5 & 1048575;
    }

    public static int z(long j, Object obj) {
        return ((Integer) n1.f1792d.i(j, obj)).intValue();
    }

    public final void B(Object obj, int i5, h hVar, w0 w0Var, l lVar) {
        int z5;
        List c6 = this.f1787l.c(i5 & 1048575, obj);
        g gVar = (g) hVar.f1760e;
        int i6 = hVar.f1757b;
        if ((i6 & 7) != 2) {
            throw x.b();
        }
        do {
            c6.add(hVar.D(w0Var, lVar));
            if (gVar.c() || hVar.f1759d != 0) {
                return;
            } else {
                z5 = gVar.z();
            }
        } while (z5 == i6);
        hVar.f1759d = z5;
    }

    public final void C(int i5, h hVar, Object obj) {
        if ((536870912 & i5) != 0) {
            n1.o(i5 & 1048575, obj, hVar.P());
        } else if (this.f1783f) {
            n1.o(i5 & 1048575, obj, hVar.N());
        } else {
            n1.o(i5 & 1048575, obj, hVar.h());
        }
    }

    public final void E(int i5, Object obj) {
        if (this.f1784g) {
            return;
        }
        int i6 = this.a[i5 + 2];
        long j = i6 & 1048575;
        n1.m(n1.f1792d.g(j, obj) | (1 << (i6 >>> 20)), j, obj);
    }

    public final void F(int i5, int i6, Object obj) {
        n1.m(i5, this.a[i6 + 2] & 1048575, obj);
    }

    public final int H(int i5) {
        return this.a[i5 + 1];
    }

    public final void I(Object obj, f0 f0Var) {
        int i5;
        int i6;
        int i10;
        int i11;
        boolean z5;
        int[] iArr = this.a;
        int length = iArr.length;
        Unsafe unsafe = f1778p;
        int i12 = -1;
        int i13 = 0;
        for (int i14 = 0; i14 < length; i14 = i11 + 3) {
            int H = H(i14);
            int i15 = iArr[i14];
            int G = G(H);
            if (this.f1784g || G > 17) {
                i5 = i14;
                i6 = 1048575;
                i10 = 0;
            } else {
                int i16 = iArr[i14 + 2];
                i6 = 1048575;
                int i17 = i16 & 1048575;
                i5 = i14;
                if (i17 != i12) {
                    i13 = unsafe.getInt(obj, i17);
                    i12 = i17;
                }
                i10 = 1 << (i16 >>> 20);
            }
            long j = H & i6;
            switch (G) {
                case 0:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        double e9 = n1.f1792d.e(j, obj);
                        j jVar = (j) f0Var.a;
                        jVar.getClass();
                        jVar.K(i15, Double.doubleToRawLongBits(e9));
                        break;
                    } else {
                        break;
                    }
                case 1:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        float f2 = n1.f1792d.f(j, obj);
                        j jVar2 = (j) f0Var.a;
                        jVar2.getClass();
                        jVar2.I(i15, Float.floatToRawIntBits(f2));
                        break;
                    } else {
                        break;
                    }
                case 2:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).U(i15, unsafe.getLong(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 3:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).U(i15, unsafe.getLong(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 4:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).M(i15, unsafe.getInt(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 5:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).K(i15, unsafe.getLong(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 6:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).I(i15, unsafe.getInt(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 7:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).F(i15, n1.f1792d.c(j, obj));
                        break;
                    } else {
                        break;
                    }
                case 8:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        K(i15, unsafe.getObject(obj, j), f0Var);
                        break;
                    } else {
                        break;
                    }
                case 9:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).O(i15, (a) unsafe.getObject(obj, j), n(i11));
                        break;
                    } else {
                        break;
                    }
                case 10:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        f0Var.a(i15, (f) unsafe.getObject(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 11:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).S(i15, unsafe.getInt(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 12:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).M(i15, unsafe.getInt(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 13:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).I(i15, unsafe.getInt(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 14:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        ((j) f0Var.a).K(i15, unsafe.getLong(obj, j));
                        break;
                    } else {
                        break;
                    }
                case 15:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        int i18 = unsafe.getInt(obj, j);
                        ((j) f0Var.a).S(i15, (i18 >> 31) ^ (i18 << 1));
                        break;
                    } else {
                        break;
                    }
                case 16:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        long j5 = unsafe.getLong(obj, j);
                        ((j) f0Var.a).U(i15, (j5 >> 63) ^ (j5 << 1));
                        break;
                    } else {
                        break;
                    }
                case 17:
                    i11 = i5;
                    if ((i10 & i13) != 0) {
                        f0Var.b(i15, unsafe.getObject(obj, j), n(i11));
                        break;
                    } else {
                        break;
                    }
                case 18:
                    i11 = i5;
                    x0.A(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 19:
                    i11 = i5;
                    x0.E(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 20:
                    i11 = i5;
                    x0.H(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 21:
                    i11 = i5;
                    x0.P(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 22:
                    i11 = i5;
                    x0.G(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 23:
                    i11 = i5;
                    x0.D(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 24:
                    i11 = i5;
                    x0.C(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 25:
                    i11 = i5;
                    x0.y(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 26:
                    i11 = i5;
                    x0.N(iArr[i11], (List) unsafe.getObject(obj, j), f0Var);
                    break;
                case 27:
                    i11 = i5;
                    x0.I(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, n(i11));
                    break;
                case 28:
                    i11 = i5;
                    x0.z(iArr[i11], (List) unsafe.getObject(obj, j), f0Var);
                    break;
                case 29:
                    i11 = i5;
                    z5 = false;
                    x0.O(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 30:
                    i11 = i5;
                    z5 = false;
                    x0.B(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 31:
                    i11 = i5;
                    z5 = false;
                    x0.J(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 32:
                    i11 = i5;
                    z5 = false;
                    x0.K(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 33:
                    i11 = i5;
                    z5 = false;
                    x0.L(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 34:
                    i11 = i5;
                    z5 = false;
                    x0.M(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, false);
                    break;
                case 35:
                    i11 = i5;
                    x0.A(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 36:
                    i11 = i5;
                    x0.E(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    i11 = i5;
                    x0.H(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    i11 = i5;
                    x0.P(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    i11 = i5;
                    x0.G(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 40:
                    i11 = i5;
                    x0.D(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 41:
                    i11 = i5;
                    x0.C(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 42:
                    i11 = i5;
                    x0.y(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    i11 = i5;
                    x0.O(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    i11 = i5;
                    x0.B(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    i11 = i5;
                    x0.J(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 46:
                    i11 = i5;
                    x0.K(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    i11 = i5;
                    x0.L(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case 48:
                    i11 = i5;
                    x0.M(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    i11 = i5;
                    x0.F(iArr[i11], (List) unsafe.getObject(obj, j), f0Var, n(i11));
                    break;
                case 50:
                    i11 = i5;
                    J(f0Var, i15, unsafe.getObject(obj, j), i11);
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        double doubleValue = ((Double) n1.f1792d.i(j, obj)).doubleValue();
                        j jVar3 = (j) f0Var.a;
                        jVar3.getClass();
                        jVar3.K(i15, Double.doubleToRawLongBits(doubleValue));
                    }
                    break;
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        float floatValue = ((Float) n1.f1792d.i(j, obj)).floatValue();
                        j jVar4 = (j) f0Var.a;
                        jVar4.getClass();
                        jVar4.I(i15, Float.floatToRawIntBits(floatValue));
                    }
                    break;
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).U(i15, A(j, obj));
                    }
                    break;
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).U(i15, A(j, obj));
                    }
                    break;
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).M(i15, z(j, obj));
                    }
                    break;
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).K(i15, A(j, obj));
                    }
                    break;
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).I(i15, z(j, obj));
                    }
                    break;
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).F(i15, ((Boolean) n1.f1792d.i(j, obj)).booleanValue());
                    }
                    break;
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        K(i15, unsafe.getObject(obj, j), f0Var);
                    }
                    break;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).O(i15, (a) unsafe.getObject(obj, j), n(i11));
                    }
                    break;
                case 61:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        f0Var.a(i15, (f) unsafe.getObject(obj, j));
                    }
                    break;
                case 62:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).S(i15, z(j, obj));
                    }
                    break;
                case ys.l.a /* 63 */:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).M(i15, z(j, obj));
                    }
                    break;
                case 64:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).I(i15, z(j, obj));
                    }
                    break;
                case 65:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        ((j) f0Var.a).K(i15, A(j, obj));
                    }
                    break;
                case 66:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        int z6 = z(j, obj);
                        ((j) f0Var.a).S(i15, (z6 >> 31) ^ (z6 << 1));
                    }
                    break;
                case 67:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        long A = A(j, obj);
                        ((j) f0Var.a).U(i15, (A >> 63) ^ (A << 1));
                    }
                    break;
                case 68:
                    i11 = i5;
                    if (r(i15, i11, obj)) {
                        f0Var.b(i15, unsafe.getObject(obj, j), n(i11));
                    }
                    break;
                default:
                    i11 = i5;
                    break;
            }
        }
        this.f1788m.getClass();
        ((t) obj).unknownFields.d(f0Var);
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x013f  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x014e  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x015e  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x016f  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0176  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x017f  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x018b  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0197  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x01b1  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x01bc  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x01c3  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x01d9  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x01e1  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x01e7  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x01ed  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01f8  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0203  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x020e  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0215  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0148 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void J(f0 f0Var, int i5, Object obj, int i6) {
        int A;
        int size;
        int z5;
        int size2;
        int z6;
        if (obj != null) {
            Object m5 = m(i6);
            this.f1789n.getClass();
            g0 g0Var = ((h0) m5).a;
            v1 v1Var = g0Var.f1754b;
            v1 v1Var2 = g0Var.a;
            j jVar = (j) f0Var.a;
            jVar.getClass();
            for (Map.Entry entry : ((i0) obj).entrySet()) {
                jVar.R(i5, 2);
                Object key = entry.getKey();
                Object value = entry.getValue();
                int i10 = o.f1797c;
                int y5 = j.y(1);
                s1 s1Var = v1.f1822v;
                if (v1Var2 == s1Var) {
                    y5 *= 2;
                }
                int i11 = 8;
                switch (v1Var2.ordinal()) {
                    case 0:
                        ((Double) key).getClass();
                        A = 8;
                        int i12 = A + y5;
                        int y6 = j.y(2);
                        if (v1Var == s1Var) {
                            y6 *= 2;
                        }
                        switch (v1Var.ordinal()) {
                            case 0:
                                ((Double) value).getClass();
                                jVar.T(i11 + y6 + i12);
                                Object key2 = entry.getKey();
                                Object value2 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2);
                                o.b(jVar, v1Var, 2, value2);
                            case 1:
                                ((Float) value).getClass();
                                i11 = 4;
                                jVar.T(i11 + y6 + i12);
                                Object key22 = entry.getKey();
                                Object value22 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22);
                                o.b(jVar, v1Var, 2, value22);
                            case 2:
                                i11 = j.A(((Long) value).longValue());
                                jVar.T(i11 + y6 + i12);
                                Object key222 = entry.getKey();
                                Object value222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key222);
                                o.b(jVar, v1Var, 2, value222);
                            case 3:
                                i11 = j.A(((Long) value).longValue());
                                jVar.T(i11 + y6 + i12);
                                Object key2222 = entry.getKey();
                                Object value2222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2222);
                                o.b(jVar, v1Var, 2, value2222);
                            case 4:
                                i11 = j.w(((Integer) value).intValue());
                                jVar.T(i11 + y6 + i12);
                                Object key22222 = entry.getKey();
                                Object value22222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22222);
                                o.b(jVar, v1Var, 2, value22222);
                            case 5:
                                ((Long) value).getClass();
                                jVar.T(i11 + y6 + i12);
                                Object key222222 = entry.getKey();
                                Object value222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key222222);
                                o.b(jVar, v1Var, 2, value222222);
                            case 6:
                                ((Integer) value).getClass();
                                i11 = 4;
                                jVar.T(i11 + y6 + i12);
                                Object key2222222 = entry.getKey();
                                Object value2222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2222222);
                                o.b(jVar, v1Var, 2, value2222222);
                            case 7:
                                ((Boolean) value).getClass();
                                i11 = 1;
                                jVar.T(i11 + y6 + i12);
                                Object key22222222 = entry.getKey();
                                Object value22222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22222222);
                                o.b(jVar, v1Var, 2, value22222222);
                            case 8:
                                if (value instanceof f) {
                                    size2 = ((f) value).size();
                                    z6 = j.z(size2);
                                    i11 = z6 + size2;
                                    jVar.T(i11 + y6 + i12);
                                    Object key222222222 = entry.getKey();
                                    Object value222222222 = entry.getValue();
                                    o.b(jVar, v1Var2, 1, key222222222);
                                    o.b(jVar, v1Var, 2, value222222222);
                                } else {
                                    i11 = j.x((String) value);
                                    jVar.T(i11 + y6 + i12);
                                    Object key2222222222 = entry.getKey();
                                    Object value2222222222 = entry.getValue();
                                    o.b(jVar, v1Var2, 1, key2222222222);
                                    o.b(jVar, v1Var, 2, value2222222222);
                                }
                            case 9:
                                i11 = ((a) value).a();
                                jVar.T(i11 + y6 + i12);
                                Object key22222222222 = entry.getKey();
                                Object value22222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22222222222);
                                o.b(jVar, v1Var, 2, value22222222222);
                            case 10:
                                size2 = ((a) value).a();
                                z6 = j.z(size2);
                                i11 = z6 + size2;
                                jVar.T(i11 + y6 + i12);
                                Object key222222222222 = entry.getKey();
                                Object value222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key222222222222);
                                o.b(jVar, v1Var, 2, value222222222222);
                            case 11:
                                if (value instanceof f) {
                                    size2 = ((f) value).size();
                                    z6 = j.z(size2);
                                } else {
                                    size2 = ((byte[]) value).length;
                                    z6 = j.z(size2);
                                }
                                i11 = z6 + size2;
                                jVar.T(i11 + y6 + i12);
                                Object key2222222222222 = entry.getKey();
                                Object value2222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2222222222222);
                                o.b(jVar, v1Var, 2, value2222222222222);
                            case 12:
                                i11 = j.z(((Integer) value).intValue());
                                jVar.T(i11 + y6 + i12);
                                Object key22222222222222 = entry.getKey();
                                Object value22222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22222222222222);
                                o.b(jVar, v1Var, 2, value22222222222222);
                            case 13:
                                i11 = j.w(((Integer) value).intValue());
                                jVar.T(i11 + y6 + i12);
                                Object key222222222222222 = entry.getKey();
                                Object value222222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key222222222222222);
                                o.b(jVar, v1Var, 2, value222222222222222);
                            case 14:
                                ((Integer) value).getClass();
                                i11 = 4;
                                jVar.T(i11 + y6 + i12);
                                Object key2222222222222222 = entry.getKey();
                                Object value2222222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2222222222222222);
                                o.b(jVar, v1Var, 2, value2222222222222222);
                            case 15:
                                ((Long) value).getClass();
                                jVar.T(i11 + y6 + i12);
                                Object key22222222222222222 = entry.getKey();
                                Object value22222222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key22222222222222222);
                                o.b(jVar, v1Var, 2, value22222222222222222);
                            case 16:
                                int intValue = ((Integer) value).intValue();
                                i11 = j.z((intValue >> 31) ^ (intValue << 1));
                                jVar.T(i11 + y6 + i12);
                                Object key222222222222222222 = entry.getKey();
                                Object value222222222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key222222222222222222);
                                o.b(jVar, v1Var, 2, value222222222222222222);
                            case 17:
                                long longValue = ((Long) value).longValue();
                                i11 = j.A((longValue >> 63) ^ (longValue << 1));
                                jVar.T(i11 + y6 + i12);
                                Object key2222222222222222222 = entry.getKey();
                                Object value2222222222222222222 = entry.getValue();
                                o.b(jVar, v1Var2, 1, key2222222222222222222);
                                o.b(jVar, v1Var, 2, value2222222222222222222);
                            default:
                                throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                        }
                    case 1:
                        ((Float) key).getClass();
                        A = 4;
                        int i122 = A + y5;
                        int y62 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 2:
                        A = j.A(((Long) key).longValue());
                        int i1222 = A + y5;
                        int y622 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 3:
                        A = j.A(((Long) key).longValue());
                        int i12222 = A + y5;
                        int y6222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 4:
                        A = j.w(((Integer) key).intValue());
                        int i122222 = A + y5;
                        int y62222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 5:
                        ((Long) key).getClass();
                        A = 8;
                        int i1222222 = A + y5;
                        int y622222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 6:
                        ((Integer) key).getClass();
                        A = 4;
                        int i12222222 = A + y5;
                        int y6222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 7:
                        ((Boolean) key).getClass();
                        A = 1;
                        int i122222222 = A + y5;
                        int y62222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 8:
                        if (key instanceof f) {
                            size = ((f) key).size();
                            z5 = j.z(size);
                            A = size + z5;
                            int i1222222222 = A + y5;
                            int y622222222 = j.y(2);
                            if (v1Var == s1Var) {
                            }
                            switch (v1Var.ordinal()) {
                            }
                        } else {
                            A = j.x((String) key);
                            int i12222222222 = A + y5;
                            int y6222222222 = j.y(2);
                            if (v1Var == s1Var) {
                            }
                            switch (v1Var.ordinal()) {
                            }
                        }
                    case 9:
                        A = ((a) key).a();
                        int i122222222222 = A + y5;
                        int y62222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 10:
                        size = ((a) key).a();
                        z5 = j.z(size);
                        A = size + z5;
                        int i1222222222222 = A + y5;
                        int y622222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 11:
                        if (key instanceof f) {
                            size = ((f) key).size();
                            z5 = j.z(size);
                        } else {
                            size = ((byte[]) key).length;
                            z5 = j.z(size);
                        }
                        A = size + z5;
                        int i12222222222222 = A + y5;
                        int y6222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 12:
                        A = j.z(((Integer) key).intValue());
                        int i122222222222222 = A + y5;
                        int y62222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 13:
                        A = j.w(((Integer) key).intValue());
                        int i1222222222222222 = A + y5;
                        int y622222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 14:
                        ((Integer) key).getClass();
                        A = 4;
                        int i12222222222222222 = A + y5;
                        int y6222222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 15:
                        ((Long) key).getClass();
                        A = 8;
                        int i122222222222222222 = A + y5;
                        int y62222222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 16:
                        int intValue2 = ((Integer) key).intValue();
                        A = j.z((intValue2 >> 31) ^ (intValue2 << 1));
                        int i1222222222222222222 = A + y5;
                        int y622222222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    case 17:
                        long longValue2 = ((Long) key).longValue();
                        A = j.A((longValue2 << 1) ^ (longValue2 >> 63));
                        int i12222222222222222222 = A + y5;
                        int y6222222222222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    default:
                        throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                }
            }
        }
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void a(Object obj) {
        int[] iArr;
        int i5;
        int i6 = this.f1786i;
        while (true) {
            iArr = this.f1785h;
            i5 = this.j;
            if (i6 >= i5) {
                break;
            }
            long H = H(iArr[i6]) & 1048575;
            Object i10 = n1.f1792d.i(H, obj);
            if (i10 != null) {
                this.f1789n.getClass();
                ((i0) i10).f1763d = false;
                n1.o(H, obj, i10);
            }
            i6++;
        }
        int length = iArr.length;
        while (i5 < length) {
            this.f1787l.a(iArr[i5], obj);
            i5++;
        }
        this.f1788m.getClass();
        ((t) obj).unknownFields.f1740e = false;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final boolean b(Object obj) {
        int i5;
        int i6 = -1;
        int i10 = 0;
        int i11 = 0;
        loop0: while (true) {
            boolean z5 = true;
            if (i10 >= this.f1786i) {
                return true;
            }
            int i12 = this.f1785h[i10];
            int[] iArr = this.a;
            int i13 = iArr[i12];
            int H = H(i12);
            boolean z6 = this.f1784g;
            if (z6) {
                i5 = 0;
            } else {
                int i14 = iArr[i12 + 2];
                int i15 = i14 & 1048575;
                i5 = 1 << (i14 >>> 20);
                if (i15 != i6) {
                    i11 = f1778p.getInt(obj, i15);
                    i6 = i15;
                }
            }
            if ((268435456 & H) != 0) {
                if (!(z6 ? q(i12, obj) : (i11 & i5) != 0)) {
                    break;
                }
            }
            int G = G(H);
            if (G == 9 || G == 17) {
                if (z6) {
                    z5 = q(i12, obj);
                } else if ((i5 & i11) == 0) {
                    z5 = false;
                }
                if (z5) {
                    if (!n(i12).b(n1.f1792d.i(H & 1048575, obj))) {
                        break;
                    }
                } else {
                    continue;
                }
                i10++;
            } else {
                if (G != 27) {
                    if (G == 60 || G == 68) {
                        if (r(i13, i12, obj)) {
                            if (!n(i12).b(n1.f1792d.i(H & 1048575, obj))) {
                                break;
                            }
                        } else {
                            continue;
                        }
                        i10++;
                    } else if (G != 49) {
                        if (G == 50) {
                            Object i16 = n1.f1792d.i(H & 1048575, obj);
                            this.f1789n.getClass();
                            i0 i0Var = (i0) i16;
                            if (!i0Var.isEmpty() && ((h0) m(i12)).a.f1754b.f1825d == w1.F) {
                                w0 w0Var = null;
                                for (Object obj2 : i0Var.values()) {
                                    if (w0Var == null) {
                                        w0Var = t0.f1812c.a(obj2.getClass());
                                    }
                                    if (!w0Var.b(obj2)) {
                                        break loop0;
                                    }
                                }
                            }
                        } else {
                            continue;
                        }
                        i10++;
                    }
                }
                List list = (List) n1.f1792d.i(H & 1048575, obj);
                if (list.isEmpty()) {
                    continue;
                } else {
                    w0 n6 = n(i12);
                    for (int i17 = 0; i17 < list.size(); i17++) {
                        if (!n6.b(list.get(i17))) {
                            break loop0;
                        }
                    }
                }
                i10++;
            }
        }
        return false;
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final Object c() {
        this.k.getClass();
        return ((t) this.f1782e).d(4);
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final void d(Object obj, f0 f0Var) {
        f0Var.getClass();
        j jVar = (j) f0Var.a;
        if (!this.f1784g) {
            I(obj, f0Var);
            return;
        }
        int[] iArr = this.a;
        int length = iArr.length;
        for (int i5 = 0; i5 < length; i5 += 3) {
            int H = H(i5);
            int i6 = iArr[i5];
            switch (G(H)) {
                case 0:
                    if (q(i5, obj)) {
                        double e9 = n1.f1792d.e(H & 1048575, obj);
                        jVar.getClass();
                        jVar.K(i6, Double.doubleToRawLongBits(e9));
                        break;
                    } else {
                        break;
                    }
                case 1:
                    if (q(i5, obj)) {
                        float f2 = n1.f1792d.f(H & 1048575, obj);
                        jVar.getClass();
                        jVar.I(i6, Float.floatToRawIntBits(f2));
                        break;
                    } else {
                        break;
                    }
                case 2:
                    if (q(i5, obj)) {
                        jVar.U(i6, n1.f1792d.h(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 3:
                    if (q(i5, obj)) {
                        jVar.U(i6, n1.f1792d.h(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 4:
                    if (q(i5, obj)) {
                        jVar.M(i6, n1.f1792d.g(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 5:
                    if (q(i5, obj)) {
                        jVar.K(i6, n1.f1792d.h(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 6:
                    if (q(i5, obj)) {
                        jVar.I(i6, n1.f1792d.g(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 7:
                    if (q(i5, obj)) {
                        jVar.F(i6, n1.f1792d.c(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 8:
                    if (q(i5, obj)) {
                        K(i6, n1.f1792d.i(H & 1048575, obj), f0Var);
                        break;
                    } else {
                        break;
                    }
                case 9:
                    if (q(i5, obj)) {
                        jVar.O(i6, (a) n1.f1792d.i(H & 1048575, obj), n(i5));
                        break;
                    } else {
                        break;
                    }
                case 10:
                    if (q(i5, obj)) {
                        f0Var.a(i6, (f) n1.f1792d.i(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 11:
                    if (q(i5, obj)) {
                        jVar.S(i6, n1.f1792d.g(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 12:
                    if (q(i5, obj)) {
                        jVar.M(i6, n1.f1792d.g(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 13:
                    if (q(i5, obj)) {
                        jVar.I(i6, n1.f1792d.g(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 14:
                    if (q(i5, obj)) {
                        jVar.K(i6, n1.f1792d.h(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 15:
                    if (q(i5, obj)) {
                        int g6 = n1.f1792d.g(H & 1048575, obj);
                        jVar.S(i6, (g6 >> 31) ^ (g6 << 1));
                        break;
                    } else {
                        break;
                    }
                case 16:
                    if (q(i5, obj)) {
                        long h6 = n1.f1792d.h(H & 1048575, obj);
                        jVar.U(i6, (h6 >> 63) ^ (h6 << 1));
                        break;
                    } else {
                        break;
                    }
                case 17:
                    if (q(i5, obj)) {
                        f0Var.b(i6, n1.f1792d.i(H & 1048575, obj), n(i5));
                        break;
                    } else {
                        break;
                    }
                case 18:
                    x0.A(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 19:
                    x0.E(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 20:
                    x0.H(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 21:
                    x0.P(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 22:
                    x0.G(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 23:
                    x0.D(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 24:
                    x0.C(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 25:
                    x0.y(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 26:
                    x0.N(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var);
                    break;
                case 27:
                    x0.I(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, n(i5));
                    break;
                case 28:
                    x0.z(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var);
                    break;
                case 29:
                    x0.O(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 30:
                    x0.B(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 31:
                    x0.J(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 32:
                    x0.K(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 33:
                    x0.L(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 34:
                    x0.M(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, false);
                    break;
                case 35:
                    x0.A(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 36:
                    x0.E(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    x0.H(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    x0.P(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    x0.G(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 40:
                    x0.D(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 41:
                    x0.C(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 42:
                    x0.y(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    x0.O(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    x0.B(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    x0.J(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 46:
                    x0.K(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    x0.L(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case 48:
                    x0.M(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, true);
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    x0.F(iArr[i5], (List) n1.f1792d.i(H & 1048575, obj), f0Var, n(i5));
                    break;
                case 50:
                    J(f0Var, i6, n1.f1792d.i(H & 1048575, obj), i5);
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (r(i6, i5, obj)) {
                        double doubleValue = ((Double) n1.f1792d.i(H & 1048575, obj)).doubleValue();
                        jVar.getClass();
                        jVar.K(i6, Double.doubleToRawLongBits(doubleValue));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (r(i6, i5, obj)) {
                        float floatValue = ((Float) n1.f1792d.i(H & 1048575, obj)).floatValue();
                        jVar.getClass();
                        jVar.I(i6, Float.floatToRawIntBits(floatValue));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (r(i6, i5, obj)) {
                        jVar.U(i6, A(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (r(i6, i5, obj)) {
                        jVar.U(i6, A(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (r(i6, i5, obj)) {
                        jVar.M(i6, z(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (r(i6, i5, obj)) {
                        jVar.K(i6, A(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (r(i6, i5, obj)) {
                        jVar.I(i6, z(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (r(i6, i5, obj)) {
                        jVar.F(i6, ((Boolean) n1.f1792d.i(H & 1048575, obj)).booleanValue());
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (r(i6, i5, obj)) {
                        K(i6, n1.f1792d.i(H & 1048575, obj), f0Var);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (r(i6, i5, obj)) {
                        jVar.O(i6, (a) n1.f1792d.i(H & 1048575, obj), n(i5));
                        break;
                    } else {
                        break;
                    }
                case 61:
                    if (r(i6, i5, obj)) {
                        f0Var.a(i6, (f) n1.f1792d.i(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 62:
                    if (r(i6, i5, obj)) {
                        jVar.S(i6, z(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case ys.l.a /* 63 */:
                    if (r(i6, i5, obj)) {
                        jVar.M(i6, z(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 64:
                    if (r(i6, i5, obj)) {
                        jVar.I(i6, z(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 65:
                    if (r(i6, i5, obj)) {
                        jVar.K(i6, A(H & 1048575, obj));
                        break;
                    } else {
                        break;
                    }
                case 66:
                    if (r(i6, i5, obj)) {
                        int z5 = z(H & 1048575, obj);
                        jVar.S(i6, (z5 >> 31) ^ (z5 << 1));
                        break;
                    } else {
                        break;
                    }
                case 67:
                    if (r(i6, i5, obj)) {
                        long A = A(H & 1048575, obj);
                        jVar.U(i6, (A >> 63) ^ (A << 1));
                        break;
                    } else {
                        break;
                    }
                case 68:
                    if (r(i6, i5, obj)) {
                        f0Var.b(i6, n1.f1792d.i(H & 1048575, obj), n(i5));
                        break;
                    } else {
                        break;
                    }
            }
        }
        this.f1788m.getClass();
        ((t) obj).unknownFields.d(f0Var);
    }

    @Override // androidx.datastore.preferences.protobuf.w0
    public final int e(a aVar) {
        return this.f1784g ? p(aVar) : o(aVar);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // androidx.datastore.preferences.protobuf.w0
    public final void f(t tVar, t tVar2) {
        t tVar3;
        tVar2.getClass();
        int i5 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i5 >= iArr.length) {
                t tVar4 = tVar;
                if (this.f1784g) {
                    return;
                }
                x0.w(this.f1788m, tVar4, tVar2);
                return;
            }
            int H = H(i5);
            long j = 1048575 & H;
            int i6 = iArr[i5];
            switch (G(H)) {
                case 0:
                    if (q(i5, tVar2)) {
                        m1 m1Var = n1.f1792d;
                        tVar3 = tVar;
                        m1Var.m(tVar3, j, m1Var.e(j, tVar2));
                        E(i5, tVar3);
                        break;
                    }
                    tVar3 = tVar;
                    break;
                case 1:
                    if (q(i5, tVar2)) {
                        m1 m1Var2 = n1.f1792d;
                        m1Var2.n(tVar, j, m1Var2.f(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 2:
                    if (q(i5, tVar2)) {
                        n1.n(tVar, j, n1.f1792d.h(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 3:
                    if (q(i5, tVar2)) {
                        n1.n(tVar, j, n1.f1792d.h(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 4:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 5:
                    if (q(i5, tVar2)) {
                        n1.n(tVar, j, n1.f1792d.h(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 6:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 7:
                    if (q(i5, tVar2)) {
                        m1 m1Var3 = n1.f1792d;
                        m1Var3.k(tVar, j, m1Var3.c(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 8:
                    if (q(i5, tVar2)) {
                        n1.o(j, tVar, n1.f1792d.i(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 9:
                    u(i5, tVar, tVar2);
                    tVar3 = tVar;
                    break;
                case 10:
                    if (q(i5, tVar2)) {
                        n1.o(j, tVar, n1.f1792d.i(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 11:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 12:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 13:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 14:
                    if (q(i5, tVar2)) {
                        n1.n(tVar, j, n1.f1792d.h(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 15:
                    if (q(i5, tVar2)) {
                        n1.m(n1.f1792d.g(j, tVar2), j, tVar);
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 16:
                    if (q(i5, tVar2)) {
                        n1.n(tVar, j, n1.f1792d.h(j, tVar2));
                        E(i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 17:
                    u(i5, tVar, tVar2);
                    tVar3 = tVar;
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
                    this.f1787l.b(j, tVar, tVar2);
                    tVar3 = tVar;
                    break;
                case 50:
                    Class cls = x0.a;
                    m1 m1Var4 = n1.f1792d;
                    Object i10 = m1Var4.i(j, tVar);
                    Object i11 = m1Var4.i(j, tVar2);
                    this.f1789n.getClass();
                    n1.o(j, tVar, j0.b(i10, i11));
                    tVar3 = tVar;
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
                    if (r(i6, i5, tVar2)) {
                        n1.o(j, tVar, n1.f1792d.i(j, tVar2));
                        F(i6, i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    v(i5, tVar, tVar2);
                    tVar3 = tVar;
                    break;
                case 61:
                case 62:
                case ys.l.a /* 63 */:
                case 64:
                case 65:
                case 66:
                case 67:
                    if (r(i6, i5, tVar2)) {
                        n1.o(j, tVar, n1.f1792d.i(j, tVar2));
                        F(i6, i5, tVar);
                    }
                    tVar3 = tVar;
                    break;
                case 68:
                    v(i5, tVar, tVar2);
                    tVar3 = tVar;
                    break;
                default:
                    tVar3 = tVar;
                    break;
            }
            i5 += 3;
            tVar = tVar3;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:103:0x0216, code lost:
    
        if (r4 != false) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x00df, code lost:
    
        if (r4 != false) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x00e1, code lost:
    
        r8 = 1231;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x00e2, code lost:
    
        r3 = r8 + r3;
     */
    @Override // androidx.datastore.preferences.protobuf.w0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int g(t tVar) {
        int i5;
        int b10;
        int i6;
        int[] iArr = this.a;
        int length = iArr.length;
        int i10 = 0;
        for (int i11 = 0; i11 < length; i11 += 3) {
            int H = H(i11);
            int i12 = iArr[i11];
            long j = 1048575 & H;
            int i13 = 1237;
            int i14 = 37;
            switch (G(H)) {
                case 0:
                    i5 = i10 * 53;
                    b10 = v.b(Double.doubleToLongBits(n1.f1792d.e(j, tVar)));
                    i10 = b10 + i5;
                    break;
                case 1:
                    i5 = i10 * 53;
                    b10 = Float.floatToIntBits(n1.f1792d.f(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 2:
                    i5 = i10 * 53;
                    b10 = v.b(n1.f1792d.h(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 3:
                    i5 = i10 * 53;
                    b10 = v.b(n1.f1792d.h(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 4:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 5:
                    i5 = i10 * 53;
                    b10 = v.b(n1.f1792d.h(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 6:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 7:
                    i6 = i10 * 53;
                    boolean c6 = n1.f1792d.c(j, tVar);
                    Charset charset = v.a;
                    break;
                case 8:
                    i5 = i10 * 53;
                    b10 = ((String) n1.f1792d.i(j, tVar)).hashCode();
                    i10 = b10 + i5;
                    break;
                case 9:
                    Object i15 = n1.f1792d.i(j, tVar);
                    if (i15 != null) {
                        i14 = i15.hashCode();
                    }
                    i10 = (i10 * 53) + i14;
                    break;
                case 10:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.i(j, tVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case 11:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 12:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 13:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 14:
                    i5 = i10 * 53;
                    b10 = v.b(n1.f1792d.h(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 15:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.g(j, tVar);
                    i10 = b10 + i5;
                    break;
                case 16:
                    i5 = i10 * 53;
                    b10 = v.b(n1.f1792d.h(j, tVar));
                    i10 = b10 + i5;
                    break;
                case 17:
                    Object i16 = n1.f1792d.i(j, tVar);
                    if (i16 != null) {
                        i14 = i16.hashCode();
                    }
                    i10 = (i10 * 53) + i14;
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
                    i5 = i10 * 53;
                    b10 = n1.f1792d.i(j, tVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case 50:
                    i5 = i10 * 53;
                    b10 = n1.f1792d.i(j, tVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(Double.doubleToLongBits(((Double) n1.f1792d.i(j, tVar)).doubleValue()));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = Float.floatToIntBits(((Float) n1.f1792d.i(j, tVar)).floatValue());
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(A(j, tVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(A(j, tVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(A(j, tVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (r(i12, i11, tVar)) {
                        i6 = i10 * 53;
                        boolean booleanValue = ((Boolean) n1.f1792d.i(j, tVar)).booleanValue();
                        Charset charset2 = v.a;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = ((String) n1.f1792d.i(j, tVar)).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = n1.f1792d.i(j, tVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 61:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = n1.f1792d.i(j, tVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 62:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ys.l.a /* 63 */:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 64:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 65:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(A(j, tVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 66:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = z(j, tVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 67:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = v.b(A(j, tVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 68:
                    if (r(i12, i11, tVar)) {
                        i5 = i10 * 53;
                        b10 = n1.f1792d.i(j, tVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
            }
        }
        this.f1788m.getClass();
        return tVar.unknownFields.hashCode() + (i10 * 53);
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0074, code lost:
    
        if (androidx.datastore.preferences.protobuf.x0.x(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x008a, code lost:
    
        if (r5.h(r7, r12) == r5.h(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x009e, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x00b4, code lost:
    
        if (r5.h(r7, r12) == r5.h(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x00c8, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00dc, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x00f0, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0108, code lost:
    
        if (androidx.datastore.preferences.protobuf.x0.x(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0120, code lost:
    
        if (androidx.datastore.preferences.protobuf.x0.x(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0138, code lost:
    
        if (androidx.datastore.preferences.protobuf.x0.x(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x014c, code lost:
    
        if (r5.c(r7, r12) == r5.c(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0160, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0176, code lost:
    
        if (r5.h(r7, r12) == r5.h(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x018a, code lost:
    
        if (r5.g(r7, r12) == r5.g(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x019f, code lost:
    
        if (r5.h(r7, r12) == r5.h(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x01b4, code lost:
    
        if (r5.h(r7, r12) == r5.h(r7, r13)) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x01cf, code lost:
    
        if (java.lang.Float.floatToIntBits(r5.f(r7, r12)) == java.lang.Float.floatToIntBits(r5.f(r7, r13))) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x01ec, code lost:
    
        if (java.lang.Double.doubleToLongBits(r5.e(r7, r12)) == java.lang.Double.doubleToLongBits(r5.e(r7, r13))) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0039, code lost:
    
        if (androidx.datastore.preferences.protobuf.x0.x(r9.i(r7, r12), r9.i(r7, r13)) != false) goto L105;
     */
    @Override // androidx.datastore.preferences.protobuf.w0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean h(t tVar, t tVar2) {
        int[] iArr = this.a;
        int length = iArr.length;
        int i5 = 0;
        while (true) {
            boolean z5 = true;
            if (i5 < length) {
                int H = H(i5);
                long j = H & 1048575;
                switch (G(H)) {
                    case 0:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 1:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var2 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 2:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var3 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 3:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var4 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 4:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var5 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 5:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var6 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 6:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var7 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 7:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var8 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 8:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var9 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 9:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var10 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 10:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var11 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 11:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var12 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 12:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var13 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 13:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var14 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 14:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var15 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 15:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var16 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 16:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var17 = n1.f1792d;
                            break;
                        }
                        z5 = false;
                        break;
                    case 17:
                        if (j(tVar, tVar2, i5)) {
                            m1 m1Var18 = n1.f1792d;
                            break;
                        }
                        z5 = false;
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
                        m1 m1Var19 = n1.f1792d;
                        z5 = x0.x(m1Var19.i(j, tVar), m1Var19.i(j, tVar2));
                        break;
                    case 50:
                        m1 m1Var20 = n1.f1792d;
                        z5 = x0.x(m1Var20.i(j, tVar), m1Var20.i(j, tVar2));
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
                        long j5 = iArr[i5 + 2] & 1048575;
                        m1 m1Var21 = n1.f1792d;
                        if (m1Var21.g(j5, tVar) == m1Var21.g(j5, tVar2)) {
                            break;
                        }
                        z5 = false;
                        break;
                }
                if (z5) {
                    i5 += 3;
                }
            } else {
                this.f1788m.getClass();
                if (tVar.unknownFields.equals(tVar2.unknownFields)) {
                    return true;
                }
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:213:0x0084, code lost:
    
        if (r11 != null) goto L49;
     */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0608 A[Catch: all -> 0x039e, TryCatch #11 {all -> 0x039e, blocks: (B:101:0x0603, B:103:0x0608, B:105:0x060f, B:107:0x0616, B:134:0x0388, B:137:0x0391, B:138:0x03a1, B:139:0x03b2, B:140:0x03c3, B:141:0x03d4, B:142:0x03e5, B:143:0x03f6, B:144:0x0407, B:145:0x0418, B:146:0x0429, B:148:0x0434, B:149:0x0453, B:150:0x0467, B:151:0x047c, B:152:0x0491, B:153:0x04a6, B:154:0x04bb, B:155:0x04d3, B:156:0x04e8, B:157:0x04fd, B:159:0x0508, B:160:0x0527, B:161:0x053b, B:162:0x0548, B:163:0x055f, B:164:0x0574, B:165:0x0589, B:166:0x059e, B:167:0x05b3, B:168:0x05c8, B:169:0x05de, B:177:0x05f4), top: B:100:0x0603 }] */
    /* JADX WARN: Removed duplicated region for block: B:109:0x061c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:122:0x0639 A[LOOP:4: B:121:0x0637->B:122:0x0639, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:125:0x0643  */
    /* JADX WARN: Removed duplicated region for block: B:198:0x004b A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0087 A[SYNTHETIC] */
    @Override // androidx.datastore.preferences.protobuf.w0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i(Object obj, h hVar, l lVar) {
        n0 n0Var;
        int i5;
        h hVar2;
        int G;
        d0 d0Var;
        n0 n0Var2 = this;
        Object obj2 = obj;
        h hVar3 = hVar;
        l lVar2 = lVar;
        lVar2.getClass();
        f1 f1Var = n0Var2.f1788m;
        int[] iArr = n0Var2.f1785h;
        int i6 = n0Var2.j;
        int i10 = n0Var2.f1786i;
        e1 e1Var = null;
        while (true) {
            try {
                int a = hVar3.a();
                if (a >= n0Var2.f1780c && a <= n0Var2.f1781d) {
                    int[] iArr2 = n0Var2.a;
                    int length = (iArr2.length / 3) - 1;
                    int i11 = 0;
                    while (i11 <= length) {
                        int i12 = (length + i11) >>> 1;
                        int i13 = i12 * 3;
                        int i14 = iArr2[i13];
                        if (a == i14) {
                            i5 = i13;
                            e1 e1Var2 = e1.f1736f;
                            if (i5 < 0) {
                                int H = n0Var2.H(i5);
                                try {
                                    G = G(H);
                                    d0Var = n0Var2.f1787l;
                                } catch (w unused) {
                                }
                                switch (G) {
                                    case 0:
                                        int i15 = i5;
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        try {
                                            try {
                                                n1.f1792d.m(obj, y(H), hVar2.k());
                                                obj2 = obj;
                                                n0Var.E(i15, obj2);
                                            } catch (w unused2) {
                                                obj2 = obj;
                                                try {
                                                    f1Var.getClass();
                                                    if (e1Var == null) {
                                                    }
                                                    if (!f1.a(e1Var, hVar2)) {
                                                    }
                                                    lVar2 = lVar;
                                                    n0Var2 = n0Var;
                                                    hVar3 = hVar2;
                                                } catch (Throwable th2) {
                                                    th = th2;
                                                    while (i10 < i6) {
                                                        n0Var.k(iArr[i10], obj2, e1Var);
                                                        i10++;
                                                    }
                                                    if (e1Var != null) {
                                                        f1Var.getClass();
                                                        ((t) obj2).unknownFields = e1Var;
                                                    }
                                                    throw th;
                                                }
                                            } catch (Throwable th3) {
                                                th = th3;
                                                obj2 = obj;
                                                while (i10 < i6) {
                                                }
                                                if (e1Var != null) {
                                                }
                                                throw th;
                                            }
                                        } catch (w unused3) {
                                            obj2 = obj;
                                        } catch (Throwable th4) {
                                            th = th4;
                                            obj2 = obj;
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                        break;
                                    case 1:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.f1792d.n(obj2, y(H), hVar2.u());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 2:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.n(obj2, y(H), hVar2.B());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 3:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.n(obj2, y(H), hVar2.S());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 4:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.m(hVar2.z(), y(H), obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 5:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.n(obj2, y(H), hVar2.s());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 6:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.m(hVar2.q(), y(H), obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 7:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.f1792d.k(obj2, y(H), hVar2.f());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 8:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n0Var.C(H, hVar2, obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 9:
                                        int i16 = i5;
                                        hVar2 = hVar3;
                                        l lVar3 = lVar2;
                                        n0Var = n0Var2;
                                        if (n0Var.q(i16, obj2)) {
                                            n1.o(y(H), obj2, v.c(n1.f1792d.i(y(H), obj2), hVar2.E(n0Var.n(i16), lVar3)));
                                        } else {
                                            n1.o(y(H), obj2, hVar2.E(n0Var.n(i16), lVar3));
                                            n0Var.E(i16, obj2);
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 10:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.o(y(H), obj2, hVar2.h());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 11:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.m(hVar2.Q(), y(H), obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 12:
                                        int i17 = i5;
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        int m5 = hVar2.m();
                                        n0Var.l(i17);
                                        n1.m(m5, y(H), obj2);
                                        n0Var.E(i17, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 13:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.m(hVar2.F(), y(H), obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 14:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.n(obj2, y(H), hVar2.H());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 15:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.m(hVar2.J(), y(H), obj2);
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 16:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        n1.n(obj2, y(H), hVar2.L());
                                        n0Var.E(i5, obj2);
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 17:
                                        int i18 = i5;
                                        hVar2 = hVar3;
                                        l lVar4 = lVar2;
                                        n0Var = n0Var2;
                                        if (n0Var.q(i18, obj2)) {
                                            n1.o(y(H), obj2, v.c(n1.f1792d.i(y(H), obj2), hVar2.x(n0Var.n(i18), lVar4)));
                                        } else {
                                            n1.o(y(H), obj2, hVar2.x(n0Var.n(i18), lVar4));
                                            n0Var.E(i18, obj2);
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 18:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.l(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 19:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.v(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 20:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.C(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 21:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.T(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 22:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.A(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 23:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.t(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 24:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.r(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 25:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        hVar2.g(d0Var.c(y(H), obj2));
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 26:
                                        hVar2 = hVar3;
                                        n0Var = n0Var2;
                                        if ((536870912 & H) != 0) {
                                            try {
                                                hVar2.O(d0Var.c(H & 1048575, obj2), true);
                                            } catch (w unused4) {
                                                f1Var.getClass();
                                                if (e1Var == null) {
                                                }
                                                if (!f1.a(e1Var, hVar2)) {
                                                }
                                                lVar2 = lVar;
                                                n0Var2 = n0Var;
                                                hVar3 = hVar2;
                                            }
                                        } else {
                                            hVar2.O(d0Var.c(H & 1048575, obj2), false);
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                        break;
                                    case 27:
                                        try {
                                        } catch (w unused5) {
                                            n0Var = n0Var2;
                                            hVar2 = hVar3;
                                            f1Var.getClass();
                                            if (e1Var == null) {
                                                t tVar = (t) obj2;
                                                e1 e1Var3 = tVar.unknownFields;
                                                if (e1Var3 == e1Var2) {
                                                    e1Var3 = e1.b();
                                                    tVar.unknownFields = e1Var3;
                                                }
                                                e1Var = e1Var3;
                                            }
                                            if (!f1.a(e1Var, hVar2)) {
                                                while (i10 < i6) {
                                                    n0Var.k(iArr[i10], obj2, e1Var);
                                                    i10++;
                                                }
                                                if (e1Var != null) {
                                                    ((t) obj2).unknownFields = e1Var;
                                                    return;
                                                }
                                                return;
                                            }
                                            lVar2 = lVar;
                                            n0Var2 = n0Var;
                                            hVar3 = hVar2;
                                        }
                                        try {
                                            n0Var2.B(obj2, H, hVar3, n0Var2.n(i5), lVar);
                                            n0Var = n0Var2;
                                            hVar2 = hVar3;
                                        } catch (w unused6) {
                                            n0Var = n0Var2;
                                            hVar2 = hVar3;
                                            f1Var.getClass();
                                            if (e1Var == null) {
                                            }
                                            if (!f1.a(e1Var, hVar2)) {
                                            }
                                            lVar2 = lVar;
                                            n0Var2 = n0Var;
                                            hVar3 = hVar2;
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 28:
                                        hVar3.j(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 29:
                                        hVar3.R(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 30:
                                        hVar3.n(d0Var.c(y(H), obj2));
                                        n0Var2.l(i5);
                                        Class cls = x0.a;
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 31:
                                        hVar3.G(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 32:
                                        hVar3.I(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 33:
                                        hVar3.K(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 34:
                                        hVar3.M(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 35:
                                        hVar3.l(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 36:
                                        hVar3.v(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                        hVar3.C(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                        hVar3.T(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                        hVar3.A(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 40:
                                        hVar3.t(d0Var.c(y(H), obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 41:
                                        hVar3.r(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 42:
                                        hVar3.g(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                                        hVar3.R(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                        hVar3.n(d0Var.c(H & 1048575, obj2));
                                        n0Var2.l(i5);
                                        Class cls2 = x0.a;
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                        hVar3.G(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 46:
                                        hVar3.I(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                                        hVar3.K(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 48:
                                        hVar3.M(d0Var.c(H & 1048575, obj2));
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                        hVar3.y(d0Var.c(H & 1048575, obj2), n0Var2.n(i5), lVar2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 50:
                                        try {
                                        } catch (w unused7) {
                                            hVar2 = hVar;
                                            n0Var = n0Var2;
                                        }
                                        try {
                                            n0Var2.t(obj2, i5, n0Var2.m(i5), lVar2, hVar);
                                            hVar3 = hVar;
                                            n0Var = n0Var2;
                                            hVar2 = hVar3;
                                        } catch (w unused8) {
                                            n0Var = n0Var2;
                                            hVar2 = hVar;
                                            f1Var.getClass();
                                            if (e1Var == null) {
                                            }
                                            if (!f1.a(e1Var, hVar2)) {
                                            }
                                            lVar2 = lVar;
                                            n0Var2 = n0Var;
                                            hVar3 = hVar2;
                                        }
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                        break;
                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                        n1.o(H & 1048575, obj2, Double.valueOf(hVar3.k()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                        n1.o(H & 1048575, obj2, Float.valueOf(hVar3.u()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                        n1.o(H & 1048575, obj2, Long.valueOf(hVar3.B()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                                        n1.o(H & 1048575, obj2, Long.valueOf(hVar3.S()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                        n1.o(H & 1048575, obj2, Integer.valueOf(hVar3.z()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                        n1.o(H & 1048575, obj2, Long.valueOf(hVar3.s()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                        n1.o(H & 1048575, obj2, Integer.valueOf(hVar3.q()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                        n1.o(H & 1048575, obj2, Boolean.valueOf(hVar3.f()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                        n0Var2.C(H, hVar3, obj2);
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                        if (n0Var2.r(a, i5, obj2)) {
                                            long j = H & 1048575;
                                            n1.o(j, obj2, v.c(n1.f1792d.i(j, obj2), hVar3.E(n0Var2.n(i5), lVar2)));
                                        } else {
                                            n1.o(H & 1048575, obj2, hVar3.E(n0Var2.n(i5), lVar2));
                                            n0Var2.E(i5, obj2);
                                        }
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 61:
                                        n1.o(H & 1048575, obj2, hVar3.h());
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 62:
                                        n1.o(H & 1048575, obj2, Integer.valueOf(hVar3.Q()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case ys.l.a /* 63 */:
                                        int m6 = hVar3.m();
                                        n0Var2.l(i5);
                                        n1.o(H & 1048575, obj2, Integer.valueOf(m6));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 64:
                                        n1.o(H & 1048575, obj2, Integer.valueOf(hVar3.F()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 65:
                                        n1.o(H & 1048575, obj2, Long.valueOf(hVar3.H()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 66:
                                        n1.o(H & 1048575, obj2, Integer.valueOf(hVar3.J()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 67:
                                        n1.o(H & 1048575, obj2, Long.valueOf(hVar3.L()));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    case 68:
                                        n1.o(H & 1048575, obj2, hVar3.x(n0Var2.n(i5), lVar2));
                                        n0Var2.F(a, i5, obj2);
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                    default:
                                        if (e1Var == null) {
                                            f1Var.getClass();
                                            e1Var = e1.b();
                                        }
                                        f1Var.getClass();
                                        if (!f1.a(e1Var, hVar3)) {
                                            while (i10 < i6) {
                                                n0Var2.k(iArr[i10], obj2, e1Var);
                                                i10++;
                                            }
                                            break;
                                        }
                                        n0Var = n0Var2;
                                        hVar2 = hVar3;
                                        lVar2 = lVar;
                                        n0Var2 = n0Var;
                                        hVar3 = hVar2;
                                }
                            } else if (a == Integer.MAX_VALUE) {
                                while (i10 < i6) {
                                    n0Var2.k(iArr[i10], obj2, e1Var);
                                    i10++;
                                }
                                if (e1Var != null) {
                                    f1Var.getClass();
                                }
                            } else {
                                f1Var.getClass();
                                if (e1Var == null) {
                                    t tVar2 = (t) obj2;
                                    e1 e1Var4 = tVar2.unknownFields;
                                    if (e1Var4 == e1Var2) {
                                        e1Var4 = e1.b();
                                        tVar2.unknownFields = e1Var4;
                                    }
                                    e1Var = e1Var4;
                                }
                                if (!f1.a(e1Var, hVar3)) {
                                    while (i10 < i6) {
                                        n0Var2.k(iArr[i10], obj2, e1Var);
                                        i10++;
                                    }
                                }
                            }
                        } else if (a < i14) {
                            length = i12 - 1;
                        } else {
                            i11 = i12 + 1;
                        }
                    }
                }
                i5 = -1;
                e1 e1Var22 = e1.f1736f;
                if (i5 < 0) {
                }
            } catch (Throwable th5) {
                th = th5;
                n0Var = n0Var2;
            }
        }
        ((t) obj2).unknownFields = e1Var;
    }

    public final boolean j(t tVar, Object obj, int i5) {
        return q(i5, tVar) == q(i5, obj);
    }

    public final void k(int i5, Object obj, Object obj2) {
        int i6 = this.a[i5];
        if (n1.f1792d.i(H(i5) & 1048575, obj) == null) {
            return;
        }
        l(i5);
    }

    public final void l(int i5) {
        if (this.f1779b[((i5 / 3) * 2) + 1] != null) {
            throw new ClassCastException();
        }
    }

    public final Object m(int i5) {
        return this.f1779b[(i5 / 3) * 2];
    }

    public final w0 n(int i5) {
        int i6 = (i5 / 3) * 2;
        Object[] objArr = this.f1779b;
        w0 w0Var = (w0) objArr[i6];
        if (w0Var != null) {
            return w0Var;
        }
        w0 a = t0.f1812c.a((Class) objArr[i6 + 1]);
        objArr[i6] = a;
        return a;
    }

    public final int o(Object obj) {
        int i5;
        int y5;
        int A;
        int y6;
        int w5;
        int u5;
        int y10;
        int x5;
        int c6;
        int y11;
        int i6;
        Unsafe unsafe = f1778p;
        int i10 = -1;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i11 >= iArr.length) {
                this.f1788m.getClass();
                return ((t) obj).unknownFields.a() + i12;
            }
            int H = H(i11);
            int i14 = iArr[i11];
            int G = G(H);
            if (G <= 17) {
                int i15 = iArr[i11 + 2];
                int i16 = i15 & 1048575;
                i5 = 1 << (i15 >>> 20);
                if (i16 != i10) {
                    i13 = unsafe.getInt(obj, i16);
                    i10 = i16;
                }
            } else {
                i5 = 0;
            }
            long j = H & 1048575;
            switch (G) {
                case 0:
                    if ((i5 & i13) != 0) {
                        i12 = a3.e.b(i14, 8, i12);
                        break;
                    } else {
                        break;
                    }
                case 1:
                    if ((i13 & i5) != 0) {
                        i12 = a3.e.b(i14, 4, i12);
                        break;
                    } else {
                        break;
                    }
                case 2:
                    if ((i13 & i5) != 0) {
                        long j5 = unsafe.getLong(obj, j);
                        y5 = j.y(i14);
                        A = j.A(j5);
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case 3:
                    if ((i13 & i5) != 0) {
                        long j7 = unsafe.getLong(obj, j);
                        y5 = j.y(i14);
                        A = j.A(j7);
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case 4:
                    if ((i13 & i5) != 0) {
                        int i17 = unsafe.getInt(obj, j);
                        y6 = j.y(i14);
                        w5 = j.w(i17);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 5:
                    if ((i13 & i5) != 0) {
                        u5 = j.u(i14);
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 6:
                    if ((i13 & i5) != 0) {
                        u5 = j.t(i14);
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 7:
                    if ((i13 & i5) != 0) {
                        i12 = a3.e.b(i14, 1, i12);
                        break;
                    } else {
                        break;
                    }
                case 8:
                    if ((i13 & i5) == 0) {
                        break;
                    } else {
                        Object object = unsafe.getObject(obj, j);
                        if (object instanceof f) {
                            int y12 = j.y(i14);
                            int size = ((f) object).size();
                            c6 = a3.e.c(size, size, y12, i12);
                            i12 = c6;
                            break;
                        } else {
                            y10 = j.y(i14);
                            x5 = j.x((String) object);
                            c6 = x5 + y10 + i12;
                            i12 = c6;
                        }
                    }
                case 9:
                    if ((i13 & i5) != 0) {
                        Object object2 = unsafe.getObject(obj, j);
                        w0 n6 = n(i11);
                        Class cls = x0.a;
                        int y13 = j.y(i14);
                        int b10 = ((a) object2).b(n6);
                        i12 = a3.e.c(b10, b10, y13, i12);
                        break;
                    } else {
                        break;
                    }
                case 10:
                    if ((i13 & i5) != 0) {
                        u5 = j.r(i14, (f) unsafe.getObject(obj, j));
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 11:
                    if ((i13 & i5) != 0) {
                        int i18 = unsafe.getInt(obj, j);
                        y6 = j.y(i14);
                        w5 = j.z(i18);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 12:
                    if ((i13 & i5) != 0) {
                        int i19 = unsafe.getInt(obj, j);
                        y6 = j.y(i14);
                        w5 = j.w(i19);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 13:
                    if ((i13 & i5) != 0) {
                        i12 = a3.e.b(i14, 4, i12);
                        break;
                    } else {
                        break;
                    }
                case 14:
                    if ((i5 & i13) != 0) {
                        i12 = a3.e.b(i14, 8, i12);
                        break;
                    } else {
                        break;
                    }
                case 15:
                    if ((i13 & i5) != 0) {
                        int i20 = unsafe.getInt(obj, j);
                        y6 = j.y(i14);
                        w5 = j.z((i20 >> 31) ^ (i20 << 1));
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 16:
                    if ((i13 & i5) != 0) {
                        long j10 = unsafe.getLong(obj, j);
                        y5 = j.y(i14);
                        A = j.A((j10 >> 63) ^ (j10 << 1));
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case 17:
                    if ((i13 & i5) != 0) {
                        u5 = j.v(i14, (a) unsafe.getObject(obj, j), n(i11));
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 18:
                    u5 = x0.f(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 19:
                    u5 = x0.d(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 20:
                    u5 = x0.j(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 21:
                    u5 = x0.t(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 22:
                    u5 = x0.h(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 23:
                    u5 = x0.f(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 24:
                    u5 = x0.d(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 25:
                    List list = (List) unsafe.getObject(obj, j);
                    Class cls2 = x0.a;
                    int size2 = list.size();
                    y11 = size2 == 0 ? 0 : (j.y(i14) + 1) * size2;
                    i12 += y11;
                    break;
                case 26:
                    u5 = x0.q(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 27:
                    u5 = x0.l(i14, (List) unsafe.getObject(obj, j), n(i11));
                    i12 += u5;
                    break;
                case 28:
                    u5 = x0.a(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 29:
                    u5 = x0.r(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 30:
                    u5 = x0.b(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 31:
                    u5 = x0.d(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 32:
                    u5 = x0.f(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 33:
                    u5 = x0.m(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 34:
                    u5 = x0.o(i14, (List) unsafe.getObject(obj, j));
                    i12 += u5;
                    break;
                case 35:
                    int g6 = x0.g((List) unsafe.getObject(obj, j));
                    if (g6 > 0) {
                        i12 = a3.e.c(g6, j.y(i14), g6, i12);
                        break;
                    } else {
                        break;
                    }
                case 36:
                    int e9 = x0.e((List) unsafe.getObject(obj, j));
                    if (e9 > 0) {
                        i12 = a3.e.c(e9, j.y(i14), e9, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    int k = x0.k((List) unsafe.getObject(obj, j));
                    if (k > 0) {
                        i12 = a3.e.c(k, j.y(i14), k, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    int u6 = x0.u((List) unsafe.getObject(obj, j));
                    if (u6 > 0) {
                        i12 = a3.e.c(u6, j.y(i14), u6, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    int i21 = x0.i((List) unsafe.getObject(obj, j));
                    if (i21 > 0) {
                        i12 = a3.e.c(i21, j.y(i14), i21, i12);
                        break;
                    } else {
                        break;
                    }
                case 40:
                    int g10 = x0.g((List) unsafe.getObject(obj, j));
                    if (g10 > 0) {
                        i12 = a3.e.c(g10, j.y(i14), g10, i12);
                        break;
                    } else {
                        break;
                    }
                case 41:
                    int e10 = x0.e((List) unsafe.getObject(obj, j));
                    if (e10 > 0) {
                        i12 = a3.e.c(e10, j.y(i14), e10, i12);
                        break;
                    } else {
                        break;
                    }
                case 42:
                    List list2 = (List) unsafe.getObject(obj, j);
                    Class cls3 = x0.a;
                    int size3 = list2.size();
                    if (size3 > 0) {
                        i12 = a3.e.c(size3, j.y(i14), size3, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    int s2 = x0.s((List) unsafe.getObject(obj, j));
                    if (s2 > 0) {
                        i12 = a3.e.c(s2, j.y(i14), s2, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    int c8 = x0.c((List) unsafe.getObject(obj, j));
                    if (c8 > 0) {
                        i12 = a3.e.c(c8, j.y(i14), c8, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    int e11 = x0.e((List) unsafe.getObject(obj, j));
                    if (e11 > 0) {
                        i12 = a3.e.c(e11, j.y(i14), e11, i12);
                        break;
                    } else {
                        break;
                    }
                case 46:
                    int g11 = x0.g((List) unsafe.getObject(obj, j));
                    if (g11 > 0) {
                        i12 = a3.e.c(g11, j.y(i14), g11, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    int n10 = x0.n((List) unsafe.getObject(obj, j));
                    if (n10 > 0) {
                        i12 = a3.e.c(n10, j.y(i14), n10, i12);
                        break;
                    } else {
                        break;
                    }
                case 48:
                    int p3 = x0.p((List) unsafe.getObject(obj, j));
                    if (p3 > 0) {
                        i12 = a3.e.c(p3, j.y(i14), p3, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    List list3 = (List) unsafe.getObject(obj, j);
                    w0 n11 = n(i11);
                    Class cls4 = x0.a;
                    int size4 = list3.size();
                    if (size4 == 0) {
                        i6 = 0;
                    } else {
                        i6 = 0;
                        for (int i22 = 0; i22 < size4; i22++) {
                            i6 += j.v(i14, (a) list3.get(i22), n11);
                        }
                    }
                    i12 += i6;
                    break;
                case 50:
                    Object object3 = unsafe.getObject(obj, j);
                    Object m5 = m(i11);
                    this.f1789n.getClass();
                    u5 = j0.a(i14, object3, m5);
                    i12 += u5;
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (r(i14, i11, obj)) {
                        i12 = a3.e.b(i14, 8, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (r(i14, i11, obj)) {
                        i12 = a3.e.b(i14, 4, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (r(i14, i11, obj)) {
                        long A2 = A(j, obj);
                        y5 = j.y(i14);
                        A = j.A(A2);
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (r(i14, i11, obj)) {
                        long A3 = A(j, obj);
                        y5 = j.y(i14);
                        A = j.A(A3);
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (r(i14, i11, obj)) {
                        int z5 = z(j, obj);
                        y6 = j.y(i14);
                        w5 = j.w(z5);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (r(i14, i11, obj)) {
                        u5 = j.u(i14);
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (r(i14, i11, obj)) {
                        u5 = j.t(i14);
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (r(i14, i11, obj)) {
                        i12 = a3.e.b(i14, 1, i12);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (!r(i14, i11, obj)) {
                        break;
                    } else {
                        Object object4 = unsafe.getObject(obj, j);
                        if (object4 instanceof f) {
                            int y14 = j.y(i14);
                            int size5 = ((f) object4).size();
                            c6 = a3.e.c(size5, size5, y14, i12);
                            i12 = c6;
                            break;
                        } else {
                            y10 = j.y(i14);
                            x5 = j.x((String) object4);
                            c6 = x5 + y10 + i12;
                            i12 = c6;
                        }
                    }
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (r(i14, i11, obj)) {
                        Object object5 = unsafe.getObject(obj, j);
                        w0 n12 = n(i11);
                        Class cls5 = x0.a;
                        int y15 = j.y(i14);
                        int b11 = ((a) object5).b(n12);
                        i12 = a3.e.c(b11, b11, y15, i12);
                        break;
                    } else {
                        break;
                    }
                case 61:
                    if (r(i14, i11, obj)) {
                        u5 = j.r(i14, (f) unsafe.getObject(obj, j));
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 62:
                    if (r(i14, i11, obj)) {
                        int z6 = z(j, obj);
                        y6 = j.y(i14);
                        w5 = j.z(z6);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case ys.l.a /* 63 */:
                    if (r(i14, i11, obj)) {
                        int z7 = z(j, obj);
                        y6 = j.y(i14);
                        w5 = j.w(z7);
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 64:
                    if (r(i14, i11, obj)) {
                        i12 = a3.e.b(i14, 4, i12);
                        break;
                    } else {
                        break;
                    }
                case 65:
                    if (r(i14, i11, obj)) {
                        i12 = a3.e.b(i14, 8, i12);
                        break;
                    } else {
                        break;
                    }
                case 66:
                    if (r(i14, i11, obj)) {
                        int z8 = z(j, obj);
                        y6 = j.y(i14);
                        w5 = j.z((z8 >> 31) ^ (z8 << 1));
                        u5 = w5 + y6;
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
                case 67:
                    if (r(i14, i11, obj)) {
                        long A4 = A(j, obj);
                        y5 = j.y(i14);
                        A = j.A((A4 >> 63) ^ (A4 << 1));
                        y11 = A + y5;
                        i12 += y11;
                        break;
                    } else {
                        break;
                    }
                case 68:
                    if (r(i14, i11, obj)) {
                        u5 = j.v(i14, (a) unsafe.getObject(obj, j), n(i11));
                        i12 += u5;
                        break;
                    } else {
                        break;
                    }
            }
            i11 += 3;
        }
    }

    public final int p(Object obj) {
        int y5;
        int A;
        int y6;
        int w5;
        int u5;
        int y10;
        int x5;
        int y11;
        int A2;
        int i5;
        Unsafe unsafe = f1778p;
        int i6 = 0;
        int i10 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i6 >= iArr.length) {
                this.f1788m.getClass();
                return ((t) obj).unknownFields.a() + i10;
            }
            int H = H(i6);
            int G = G(H);
            int i11 = iArr[i6];
            long j = H & 1048575;
            if (G >= p.f1802e.f1806d && G <= p.f1803i.f1806d) {
                int i12 = iArr[i6 + 2];
            }
            switch (G) {
                case 0:
                    if (q(i6, obj)) {
                        i10 = a3.e.b(i11, 8, i10);
                        break;
                    } else {
                        break;
                    }
                case 1:
                    if (q(i6, obj)) {
                        i10 = a3.e.b(i11, 4, i10);
                        break;
                    } else {
                        break;
                    }
                case 2:
                    if (q(i6, obj)) {
                        long h6 = n1.f1792d.h(j, obj);
                        y5 = j.y(i11);
                        A = j.A(h6);
                        u5 = A + y5;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 3:
                    if (q(i6, obj)) {
                        long h7 = n1.f1792d.h(j, obj);
                        y5 = j.y(i11);
                        A = j.A(h7);
                        u5 = A + y5;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 4:
                    if (q(i6, obj)) {
                        int g6 = n1.f1792d.g(j, obj);
                        y6 = j.y(i11);
                        w5 = j.w(g6);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 5:
                    if (q(i6, obj)) {
                        u5 = j.u(i11);
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 6:
                    if (q(i6, obj)) {
                        u5 = j.t(i11);
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 7:
                    if (q(i6, obj)) {
                        i10 = a3.e.b(i11, 1, i10);
                        break;
                    } else {
                        break;
                    }
                case 8:
                    if (q(i6, obj)) {
                        Object i13 = n1.f1792d.i(j, obj);
                        if (i13 instanceof f) {
                            int y12 = j.y(i11);
                            int size = ((f) i13).size();
                            i10 = a3.e.c(size, size, y12, i10);
                            break;
                        } else {
                            y10 = j.y(i11);
                            x5 = j.x((String) i13);
                            i10 = x5 + y10 + i10;
                            break;
                        }
                    } else {
                        break;
                    }
                case 9:
                    if (q(i6, obj)) {
                        Object i14 = n1.f1792d.i(j, obj);
                        w0 n6 = n(i6);
                        Class cls = x0.a;
                        int y13 = j.y(i11);
                        int b10 = ((a) i14).b(n6);
                        i10 = a3.e.c(b10, b10, y13, i10);
                        break;
                    } else {
                        break;
                    }
                case 10:
                    if (q(i6, obj)) {
                        u5 = j.r(i11, (f) n1.f1792d.i(j, obj));
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 11:
                    if (q(i6, obj)) {
                        int g10 = n1.f1792d.g(j, obj);
                        y6 = j.y(i11);
                        w5 = j.z(g10);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 12:
                    if (q(i6, obj)) {
                        int g11 = n1.f1792d.g(j, obj);
                        y6 = j.y(i11);
                        w5 = j.w(g11);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 13:
                    if (q(i6, obj)) {
                        i10 = a3.e.b(i11, 4, i10);
                        break;
                    } else {
                        break;
                    }
                case 14:
                    if (q(i6, obj)) {
                        i10 = a3.e.b(i11, 8, i10);
                        break;
                    } else {
                        break;
                    }
                case 15:
                    if (q(i6, obj)) {
                        int g12 = n1.f1792d.g(j, obj);
                        y6 = j.y(i11);
                        w5 = j.z((g12 >> 31) ^ (g12 << 1));
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 16:
                    if (q(i6, obj)) {
                        long h10 = n1.f1792d.h(j, obj);
                        y11 = j.y(i11);
                        A2 = j.A((h10 >> 63) ^ (h10 << 1));
                        u5 = A2 + y11;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 17:
                    if (q(i6, obj)) {
                        u5 = j.v(i11, (a) n1.f1792d.i(j, obj), n(i6));
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 18:
                    u5 = x0.f(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 19:
                    u5 = x0.d(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 20:
                    u5 = x0.j(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 21:
                    u5 = x0.t(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 22:
                    u5 = x0.h(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 23:
                    u5 = x0.f(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 24:
                    u5 = x0.d(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 25:
                    List s2 = s(j, obj);
                    Class cls2 = x0.a;
                    int size2 = s2.size();
                    i10 += size2 == 0 ? 0 : (j.y(i11) + 1) * size2;
                    break;
                case 26:
                    u5 = x0.q(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 27:
                    u5 = x0.l(i11, s(j, obj), n(i6));
                    i10 += u5;
                    break;
                case 28:
                    u5 = x0.a(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 29:
                    u5 = x0.r(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 30:
                    u5 = x0.b(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 31:
                    u5 = x0.d(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 32:
                    u5 = x0.f(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 33:
                    u5 = x0.m(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 34:
                    u5 = x0.o(i11, s(j, obj));
                    i10 += u5;
                    break;
                case 35:
                    int g13 = x0.g((List) unsafe.getObject(obj, j));
                    if (g13 > 0) {
                        i10 = a3.e.c(g13, j.y(i11), g13, i10);
                        break;
                    } else {
                        break;
                    }
                case 36:
                    int e9 = x0.e((List) unsafe.getObject(obj, j));
                    if (e9 > 0) {
                        i10 = a3.e.c(e9, j.y(i11), e9, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    int k = x0.k((List) unsafe.getObject(obj, j));
                    if (k > 0) {
                        i10 = a3.e.c(k, j.y(i11), k, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    int u6 = x0.u((List) unsafe.getObject(obj, j));
                    if (u6 > 0) {
                        i10 = a3.e.c(u6, j.y(i11), u6, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    int i15 = x0.i((List) unsafe.getObject(obj, j));
                    if (i15 > 0) {
                        i10 = a3.e.c(i15, j.y(i11), i15, i10);
                        break;
                    } else {
                        break;
                    }
                case 40:
                    int g14 = x0.g((List) unsafe.getObject(obj, j));
                    if (g14 > 0) {
                        i10 = a3.e.c(g14, j.y(i11), g14, i10);
                        break;
                    } else {
                        break;
                    }
                case 41:
                    int e10 = x0.e((List) unsafe.getObject(obj, j));
                    if (e10 > 0) {
                        i10 = a3.e.c(e10, j.y(i11), e10, i10);
                        break;
                    } else {
                        break;
                    }
                case 42:
                    List list = (List) unsafe.getObject(obj, j);
                    Class cls3 = x0.a;
                    int size3 = list.size();
                    if (size3 > 0) {
                        i10 = a3.e.c(size3, j.y(i11), size3, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    int s5 = x0.s((List) unsafe.getObject(obj, j));
                    if (s5 > 0) {
                        i10 = a3.e.c(s5, j.y(i11), s5, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    int c6 = x0.c((List) unsafe.getObject(obj, j));
                    if (c6 > 0) {
                        i10 = a3.e.c(c6, j.y(i11), c6, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    int e11 = x0.e((List) unsafe.getObject(obj, j));
                    if (e11 > 0) {
                        i10 = a3.e.c(e11, j.y(i11), e11, i10);
                        break;
                    } else {
                        break;
                    }
                case 46:
                    int g15 = x0.g((List) unsafe.getObject(obj, j));
                    if (g15 > 0) {
                        i10 = a3.e.c(g15, j.y(i11), g15, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    int n10 = x0.n((List) unsafe.getObject(obj, j));
                    if (n10 > 0) {
                        i10 = a3.e.c(n10, j.y(i11), n10, i10);
                        break;
                    } else {
                        break;
                    }
                case 48:
                    int p3 = x0.p((List) unsafe.getObject(obj, j));
                    if (p3 > 0) {
                        i10 = a3.e.c(p3, j.y(i11), p3, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    List s7 = s(j, obj);
                    w0 n11 = n(i6);
                    Class cls4 = x0.a;
                    int size4 = s7.size();
                    if (size4 == 0) {
                        i5 = 0;
                    } else {
                        i5 = 0;
                        for (int i16 = 0; i16 < size4; i16++) {
                            i5 += j.v(i11, (a) s7.get(i16), n11);
                        }
                    }
                    i10 += i5;
                    break;
                case 50:
                    Object i17 = n1.f1792d.i(j, obj);
                    Object m5 = m(i6);
                    this.f1789n.getClass();
                    u5 = j0.a(i11, i17, m5);
                    i10 += u5;
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (r(i11, i6, obj)) {
                        i10 = a3.e.b(i11, 8, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (r(i11, i6, obj)) {
                        i10 = a3.e.b(i11, 4, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (r(i11, i6, obj)) {
                        long A3 = A(j, obj);
                        y5 = j.y(i11);
                        A = j.A(A3);
                        u5 = A + y5;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (r(i11, i6, obj)) {
                        long A4 = A(j, obj);
                        y5 = j.y(i11);
                        A = j.A(A4);
                        u5 = A + y5;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (r(i11, i6, obj)) {
                        int z5 = z(j, obj);
                        y6 = j.y(i11);
                        w5 = j.w(z5);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (r(i11, i6, obj)) {
                        u5 = j.u(i11);
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (r(i11, i6, obj)) {
                        u5 = j.t(i11);
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (r(i11, i6, obj)) {
                        i10 = a3.e.b(i11, 1, i10);
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (r(i11, i6, obj)) {
                        Object i18 = n1.f1792d.i(j, obj);
                        if (i18 instanceof f) {
                            int y14 = j.y(i11);
                            int size5 = ((f) i18).size();
                            i10 = a3.e.c(size5, size5, y14, i10);
                            break;
                        } else {
                            y10 = j.y(i11);
                            x5 = j.x((String) i18);
                            i10 = x5 + y10 + i10;
                            break;
                        }
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (r(i11, i6, obj)) {
                        Object i19 = n1.f1792d.i(j, obj);
                        w0 n12 = n(i6);
                        Class cls5 = x0.a;
                        int y15 = j.y(i11);
                        int b11 = ((a) i19).b(n12);
                        i10 = a3.e.c(b11, b11, y15, i10);
                        break;
                    } else {
                        break;
                    }
                case 61:
                    if (r(i11, i6, obj)) {
                        u5 = j.r(i11, (f) n1.f1792d.i(j, obj));
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 62:
                    if (r(i11, i6, obj)) {
                        int z6 = z(j, obj);
                        y6 = j.y(i11);
                        w5 = j.z(z6);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case ys.l.a /* 63 */:
                    if (r(i11, i6, obj)) {
                        int z7 = z(j, obj);
                        y6 = j.y(i11);
                        w5 = j.w(z7);
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 64:
                    if (r(i11, i6, obj)) {
                        i10 = a3.e.b(i11, 4, i10);
                        break;
                    } else {
                        break;
                    }
                case 65:
                    if (r(i11, i6, obj)) {
                        i10 = a3.e.b(i11, 8, i10);
                        break;
                    } else {
                        break;
                    }
                case 66:
                    if (r(i11, i6, obj)) {
                        int z8 = z(j, obj);
                        y6 = j.y(i11);
                        w5 = j.z((z8 >> 31) ^ (z8 << 1));
                        u5 = w5 + y6;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 67:
                    if (r(i11, i6, obj)) {
                        long A5 = A(j, obj);
                        y11 = j.y(i11);
                        A2 = j.A((A5 >> 63) ^ (A5 << 1));
                        u5 = A2 + y11;
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
                case 68:
                    if (r(i11, i6, obj)) {
                        u5 = j.v(i11, (a) n1.f1792d.i(j, obj), n(i6));
                        i10 += u5;
                        break;
                    } else {
                        break;
                    }
            }
            i6 += 3;
        }
    }

    public final boolean q(int i5, Object obj) {
        if (this.f1784g) {
            int H = H(i5);
            long j = H & 1048575;
            switch (G(H)) {
                case 0:
                    if (n1.f1792d.e(j, obj) == 0.0d) {
                        return false;
                    }
                    break;
                case 1:
                    if (n1.f1792d.f(j, obj) == 0.0f) {
                        return false;
                    }
                    break;
                case 2:
                    if (n1.f1792d.h(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 3:
                    if (n1.f1792d.h(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 4:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 5:
                    if (n1.f1792d.h(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 6:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 7:
                    return n1.f1792d.c(j, obj);
                case 8:
                    Object i6 = n1.f1792d.i(j, obj);
                    if (i6 instanceof String) {
                        return !((String) i6).isEmpty();
                    }
                    if (i6 instanceof f) {
                        return !f.f1741i.equals(i6);
                    }
                    throw new IllegalArgumentException();
                case 9:
                    if (n1.f1792d.i(j, obj) == null) {
                        return false;
                    }
                    break;
                case 10:
                    return !f.f1741i.equals(n1.f1792d.i(j, obj));
                case 11:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 12:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 13:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 14:
                    if (n1.f1792d.h(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 15:
                    if (n1.f1792d.g(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 16:
                    if (n1.f1792d.h(j, obj) == 0) {
                        return false;
                    }
                    break;
                case 17:
                    if (n1.f1792d.i(j, obj) == null) {
                        return false;
                    }
                    break;
                default:
                    throw new IllegalArgumentException();
            }
        } else {
            if ((n1.f1792d.g(r6 & 1048575, obj) & (1 << (this.a[i5 + 2] >>> 20))) == 0) {
                return false;
            }
        }
        return true;
    }

    public final boolean r(int i5, int i6, Object obj) {
        return n1.f1792d.g((long) (this.a[i6 + 2] & 1048575), obj) == i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x009b, code lost:
    
        r10.put(r3, r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x009e, code lost:
    
        r0.d(r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00a1, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void t(Object obj, int i5, Object obj2, l lVar, h hVar) {
        long H = H(i5) & 1048575;
        Object i6 = n1.f1792d.i(H, obj);
        j0 j0Var = this.f1789n;
        if (i6 == null) {
            j0Var.getClass();
            i6 = i0.f1762e.b();
            n1.o(H, obj, i6);
        } else {
            j0Var.getClass();
            if (!((i0) i6).f1763d) {
                i0 b10 = i0.f1762e.b();
                j0.b(b10, i6);
                n1.o(H, obj, b10);
                i6 = b10;
            }
        }
        j0Var.getClass();
        i0 i0Var = (i0) i6;
        g0 g0Var = ((h0) obj2).a;
        hVar.X(2);
        g gVar = (g) hVar.f1760e;
        int e9 = gVar.e(gVar.A());
        Object obj3 = g0Var.f1755c;
        Object obj4 = "";
        Object obj5 = obj3;
        while (true) {
            try {
                int a = hVar.a();
                if (a == Integer.MAX_VALUE || gVar.c()) {
                    break;
                }
                if (a == 1) {
                    obj4 = hVar.p(g0Var.a, null, null);
                } else if (a != 2) {
                    try {
                        if (!hVar.Y()) {
                            throw new x("Unable to parse map entry.");
                        }
                    } catch (w unused) {
                        if (!hVar.Y()) {
                            throw new x("Unable to parse map entry.");
                        }
                    }
                } else {
                    obj5 = hVar.p(g0Var.f1754b, obj3.getClass(), lVar);
                }
            } catch (Throwable th2) {
                gVar.d(e9);
                throw th2;
            }
        }
    }

    public final void u(int i5, Object obj, Object obj2) {
        long H = H(i5) & 1048575;
        if (q(i5, obj2)) {
            m1 m1Var = n1.f1792d;
            Object i6 = m1Var.i(H, obj);
            Object i10 = m1Var.i(H, obj2);
            if (i6 != null && i10 != null) {
                n1.o(H, obj, v.c(i6, i10));
                E(i5, obj);
            } else if (i10 != null) {
                n1.o(H, obj, i10);
                E(i5, obj);
            }
        }
    }

    public final void v(int i5, Object obj, Object obj2) {
        int H = H(i5);
        int i6 = this.a[i5];
        long j = H & 1048575;
        if (r(i6, i5, obj2)) {
            m1 m1Var = n1.f1792d;
            Object i10 = m1Var.i(j, obj);
            Object i11 = m1Var.i(j, obj2);
            if (i10 != null && i11 != null) {
                n1.o(j, obj, v.c(i10, i11));
                F(i6, i5, obj);
            } else if (i11 != null) {
                n1.o(j, obj, i11);
                F(i6, i5, obj);
            }
        }
    }
}
