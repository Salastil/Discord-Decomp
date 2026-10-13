package ij;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.lang.reflect.Field;
import java.nio.charset.Charset;
import java.util.Arrays;
import java.util.List;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class j0 implements q0 {

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f10878n = new int[0];

    /* renamed from: o, reason: collision with root package name */
    public static final Unsafe f10879o = c1.j();
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final Object[] f10880b;

    /* renamed from: c, reason: collision with root package name */
    public final int f10881c;

    /* renamed from: d, reason: collision with root package name */
    public final int f10882d;

    /* renamed from: e, reason: collision with root package name */
    public final b f10883e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f10884f;

    /* renamed from: g, reason: collision with root package name */
    public final int[] f10885g;

    /* renamed from: h, reason: collision with root package name */
    public final int f10886h;

    /* renamed from: i, reason: collision with root package name */
    public final int f10887i;
    public final l0 j;
    public final a0 k;

    /* renamed from: l, reason: collision with root package name */
    public final u0 f10888l;

    /* renamed from: m, reason: collision with root package name */
    public final f0 f10889m;

    public j0(int[] iArr, Object[] objArr, int i5, int i6, b bVar, int[] iArr2, int i10, int i11, l0 l0Var, a0 a0Var, u0 u0Var, m mVar, f0 f0Var) {
        this.a = iArr;
        this.f10880b = objArr;
        this.f10881c = i5;
        this.f10882d = i6;
        this.f10884f = bVar instanceof r;
        this.f10885g = iArr2;
        this.f10886h = i10;
        this.f10887i = i11;
        this.j = l0Var;
        this.k = a0Var;
        this.f10888l = u0Var;
        this.f10883e = bVar;
        this.f10889m = f0Var;
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

    public static int I(int i5) {
        return (i5 & 267386880) >>> 20;
    }

    public static boolean n(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj instanceof r) {
            return ((r) obj).e();
        }
        return true;
    }

    public static j0 u(p0 p0Var, l0 l0Var, a0 a0Var, u0 u0Var, m mVar, f0 f0Var) {
        if (p0Var instanceof p0) {
            return v(p0Var, l0Var, a0Var, u0Var, mVar, f0Var);
        }
        p0Var.getClass();
        throw new ClassCastException();
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x0334  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x0388  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x025b  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0275  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0278  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x025e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static j0 v(p0 p0Var, l0 l0Var, a0 a0Var, u0 u0Var, m mVar, f0 f0Var) {
        int i5;
        int charAt;
        int i6;
        int i10;
        int i11;
        int[] iArr;
        int i12;
        int i13;
        int i14;
        int i15;
        char charAt2;
        int i16;
        char charAt3;
        int i17;
        char charAt4;
        int i18;
        char charAt5;
        int i19;
        char charAt6;
        int i20;
        char charAt7;
        int i21;
        char charAt8;
        int i22;
        char charAt9;
        int i23;
        int i24;
        int i25;
        Class<?> cls;
        int i26;
        int objectFieldOffset;
        int i27;
        int i28;
        int i29;
        int i30;
        int i31;
        Field D;
        char charAt10;
        int i32;
        int i33;
        Object obj;
        Field D2;
        Object obj2;
        Field D3;
        int i34;
        char charAt11;
        int i35;
        char charAt12;
        int i36;
        char charAt13;
        int i37;
        char charAt14;
        String str = p0Var.f10915b;
        int length = str.length();
        int i38 = 55296;
        if (str.charAt(0) >= 55296) {
            int i39 = 1;
            while (true) {
                i5 = i39 + 1;
                if (str.charAt(i39) < 55296) {
                    break;
                }
                i39 = i5;
            }
        } else {
            i5 = 1;
        }
        int i40 = i5 + 1;
        int charAt15 = str.charAt(i5);
        if (charAt15 >= 55296) {
            int i41 = charAt15 & 8191;
            int i42 = 13;
            while (true) {
                i37 = i40 + 1;
                charAt14 = str.charAt(i40);
                if (charAt14 < 55296) {
                    break;
                }
                i41 |= (charAt14 & 8191) << i42;
                i42 += 13;
                i40 = i37;
            }
            charAt15 = i41 | (charAt14 << i42);
            i40 = i37;
        }
        if (charAt15 == 0) {
            i10 = 0;
            i13 = 0;
            charAt = 0;
            i6 = 0;
            i12 = 0;
            i14 = 0;
            iArr = f10878n;
            i11 = 0;
        } else {
            int i43 = i40 + 1;
            int charAt16 = str.charAt(i40);
            if (charAt16 >= 55296) {
                int i44 = charAt16 & 8191;
                int i45 = 13;
                while (true) {
                    i22 = i43 + 1;
                    charAt9 = str.charAt(i43);
                    if (charAt9 < 55296) {
                        break;
                    }
                    i44 |= (charAt9 & 8191) << i45;
                    i45 += 13;
                    i43 = i22;
                }
                charAt16 = i44 | (charAt9 << i45);
                i43 = i22;
            }
            int i46 = i43 + 1;
            int charAt17 = str.charAt(i43);
            if (charAt17 >= 55296) {
                int i47 = charAt17 & 8191;
                int i48 = 13;
                while (true) {
                    i21 = i46 + 1;
                    charAt8 = str.charAt(i46);
                    if (charAt8 < 55296) {
                        break;
                    }
                    i47 |= (charAt8 & 8191) << i48;
                    i48 += 13;
                    i46 = i21;
                }
                charAt17 = i47 | (charAt8 << i48);
                i46 = i21;
            }
            int i49 = i46 + 1;
            int charAt18 = str.charAt(i46);
            if (charAt18 >= 55296) {
                int i50 = charAt18 & 8191;
                int i51 = 13;
                while (true) {
                    i20 = i49 + 1;
                    charAt7 = str.charAt(i49);
                    if (charAt7 < 55296) {
                        break;
                    }
                    i50 |= (charAt7 & 8191) << i51;
                    i51 += 13;
                    i49 = i20;
                }
                charAt18 = i50 | (charAt7 << i51);
                i49 = i20;
            }
            int i52 = i49 + 1;
            int charAt19 = str.charAt(i49);
            if (charAt19 >= 55296) {
                int i53 = charAt19 & 8191;
                int i54 = 13;
                while (true) {
                    i19 = i52 + 1;
                    charAt6 = str.charAt(i52);
                    if (charAt6 < 55296) {
                        break;
                    }
                    i53 |= (charAt6 & 8191) << i54;
                    i54 += 13;
                    i52 = i19;
                }
                charAt19 = i53 | (charAt6 << i54);
                i52 = i19;
            }
            int i55 = i52 + 1;
            charAt = str.charAt(i52);
            if (charAt >= 55296) {
                int i56 = charAt & 8191;
                int i57 = 13;
                while (true) {
                    i18 = i55 + 1;
                    charAt5 = str.charAt(i55);
                    if (charAt5 < 55296) {
                        break;
                    }
                    i56 |= (charAt5 & 8191) << i57;
                    i57 += 13;
                    i55 = i18;
                }
                charAt = i56 | (charAt5 << i57);
                i55 = i18;
            }
            int i58 = i55 + 1;
            int charAt20 = str.charAt(i55);
            if (charAt20 >= 55296) {
                int i59 = charAt20 & 8191;
                int i60 = 13;
                while (true) {
                    i17 = i58 + 1;
                    charAt4 = str.charAt(i58);
                    if (charAt4 < 55296) {
                        break;
                    }
                    i59 |= (charAt4 & 8191) << i60;
                    i60 += 13;
                    i58 = i17;
                }
                charAt20 = i59 | (charAt4 << i60);
                i58 = i17;
            }
            int i61 = i58 + 1;
            int charAt21 = str.charAt(i58);
            if (charAt21 >= 55296) {
                int i62 = charAt21 & 8191;
                int i63 = 13;
                while (true) {
                    i16 = i61 + 1;
                    charAt3 = str.charAt(i61);
                    if (charAt3 < 55296) {
                        break;
                    }
                    i62 |= (charAt3 & 8191) << i63;
                    i63 += 13;
                    i61 = i16;
                }
                charAt21 = i62 | (charAt3 << i63);
                i61 = i16;
            }
            int i64 = i61 + 1;
            int charAt22 = str.charAt(i61);
            if (charAt22 >= 55296) {
                int i65 = charAt22 & 8191;
                int i66 = 13;
                while (true) {
                    i15 = i64 + 1;
                    charAt2 = str.charAt(i64);
                    if (charAt2 < 55296) {
                        break;
                    }
                    i65 |= (charAt2 & 8191) << i66;
                    i66 += 13;
                    i64 = i15;
                }
                charAt22 = i65 | (charAt2 << i66);
                i64 = i15;
            }
            int[] iArr2 = new int[charAt22 + charAt20 + charAt21];
            int i67 = (charAt16 * 2) + charAt17;
            int i68 = charAt20;
            i6 = charAt18;
            i10 = i68;
            i11 = charAt16;
            i40 = i64;
            iArr = iArr2;
            i12 = charAt19;
            i13 = i67;
            i14 = charAt22;
        }
        Unsafe unsafe = f10879o;
        Object[] objArr = p0Var.f10916c;
        Class<?> cls2 = p0Var.a.getClass();
        int[] iArr3 = new int[charAt * 3];
        Object[] objArr2 = new Object[charAt * 2];
        int i69 = i14 + i10;
        int i70 = i69;
        int i71 = i14;
        int i72 = 0;
        int i73 = 0;
        while (i40 < length) {
            int i74 = i40 + 1;
            int charAt23 = str.charAt(i40);
            if (charAt23 >= i38) {
                int i75 = charAt23 & 8191;
                int i76 = i74;
                int i77 = 13;
                while (true) {
                    i36 = i76 + 1;
                    charAt13 = str.charAt(i76);
                    i23 = length;
                    if (charAt13 < 55296) {
                        break;
                    }
                    i75 |= (charAt13 & 8191) << i77;
                    i77 += 13;
                    i76 = i36;
                    length = i23;
                }
                charAt23 = i75 | (charAt13 << i77);
                i24 = i36;
            } else {
                i23 = length;
                i24 = i74;
            }
            int i78 = i24 + 1;
            int charAt24 = str.charAt(i24);
            Object[] objArr3 = objArr;
            char c6 = 55296;
            if (charAt24 >= 55296) {
                int i79 = charAt24 & 8191;
                int i80 = 13;
                while (true) {
                    i35 = i78 + 1;
                    charAt12 = str.charAt(i78);
                    if (charAt12 < c6) {
                        break;
                    }
                    i79 |= (charAt12 & 8191) << i80;
                    i80 += 13;
                    i78 = i35;
                    c6 = 55296;
                }
                charAt24 = i79 | (charAt12 << i80);
                i78 = i35;
            }
            int i81 = charAt24 & 255;
            int i82 = charAt23;
            if ((charAt24 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0) {
                iArr[i72] = i73;
                i72++;
            }
            int[] iArr4 = iArr3;
            if (i81 >= 51) {
                int i83 = i78 + 1;
                int charAt25 = str.charAt(i78);
                char c8 = 55296;
                if (charAt25 >= 55296) {
                    int i84 = charAt25 & 8191;
                    int i85 = 13;
                    while (true) {
                        i34 = i83 + 1;
                        charAt11 = str.charAt(i83);
                        if (charAt11 < c8) {
                            break;
                        }
                        i84 |= (charAt11 & 8191) << i85;
                        i85 += 13;
                        i83 = i34;
                        c8 = 55296;
                    }
                    charAt25 = i84 | (charAt11 << i85);
                    i83 = i34;
                }
                int i86 = i81 - 51;
                int i87 = i83;
                if (i86 == 9 || i86 == 17) {
                    i33 = i13 + 1;
                    objArr2[((i73 / 3) * 2) + 1] = objArr3[i13];
                } else {
                    if (i86 == 12 && (f0.e.a(p0Var.a(), 1) || (charAt24 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0)) {
                        i33 = i13 + 1;
                        objArr2[((i73 / 3) * 2) + 1] = objArr3[i13];
                    }
                    int i88 = charAt25 * 2;
                    obj = objArr3[i88];
                    if (obj instanceof Field) {
                        D2 = D(cls2, (String) obj);
                        objArr3[i88] = D2;
                    } else {
                        D2 = (Field) obj;
                    }
                    int objectFieldOffset2 = (int) unsafe.objectFieldOffset(D2);
                    int i89 = i88 + 1;
                    obj2 = objArr3[i89];
                    if (obj2 instanceof Field) {
                        D3 = D(cls2, (String) obj2);
                        objArr3[i89] = D3;
                    } else {
                        D3 = (Field) obj2;
                    }
                    int objectFieldOffset3 = (int) unsafe.objectFieldOffset(D3);
                    int i90 = i11;
                    i27 = objectFieldOffset3;
                    i31 = objectFieldOffset2;
                    i25 = i90;
                    i30 = i13;
                    i28 = i87;
                    i29 = 0;
                    cls = cls2;
                }
                i13 = i33;
                int i882 = charAt25 * 2;
                obj = objArr3[i882];
                if (obj instanceof Field) {
                }
                int objectFieldOffset22 = (int) unsafe.objectFieldOffset(D2);
                int i892 = i882 + 1;
                obj2 = objArr3[i892];
                if (obj2 instanceof Field) {
                }
                int objectFieldOffset32 = (int) unsafe.objectFieldOffset(D3);
                int i902 = i11;
                i27 = objectFieldOffset32;
                i31 = objectFieldOffset22;
                i25 = i902;
                i30 = i13;
                i28 = i87;
                i29 = 0;
                cls = cls2;
            } else {
                int i91 = i13 + 1;
                Field D4 = D(cls2, (String) objArr3[i13]);
                if (i81 == 9 || i81 == 17) {
                    i25 = i11;
                    objArr2[((i73 / 3) * 2) + 1] = D4.getType();
                } else {
                    if (i81 == 27 || i81 == 49) {
                        i25 = i11;
                        i32 = i13 + 2;
                        objArr2[((i73 / 3) * 2) + 1] = objArr3[i91];
                    } else if (i81 == 12 || i81 == 30 || i81 == 44) {
                        i25 = i11;
                        if (p0Var.a() == 1 || (charAt24 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
                            i32 = i13 + 2;
                            objArr2[((i73 / 3) * 2) + 1] = objArr3[i91];
                        }
                    } else if (i81 == 50) {
                        int i92 = i71 + 1;
                        iArr[i71] = i73;
                        int i93 = (i73 / 3) * 2;
                        int i94 = i13 + 2;
                        objArr2[i93] = objArr3[i91];
                        if ((charAt24 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
                            i26 = i13 + 3;
                            objArr2[i93 + 1] = objArr3[i94];
                            i25 = i11;
                            cls = cls2;
                            i71 = i92;
                        } else {
                            cls = cls2;
                            i26 = i94;
                            i71 = i92;
                            i25 = i11;
                        }
                        objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                        if ((charAt24 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 || i81 > 17) {
                            i27 = 1048575;
                            i28 = i78;
                            i29 = 0;
                        } else {
                            int i95 = i78 + 1;
                            int charAt26 = str.charAt(i78);
                            if (charAt26 >= 55296) {
                                int i96 = charAt26 & 8191;
                                int i97 = 13;
                                while (true) {
                                    i28 = i95 + 1;
                                    charAt10 = str.charAt(i95);
                                    if (charAt10 < 55296) {
                                        break;
                                    }
                                    i96 |= (charAt10 & 8191) << i97;
                                    i97 += 13;
                                    i95 = i28;
                                }
                                charAt26 = i96 | (charAt10 << i97);
                            } else {
                                i28 = i95;
                            }
                            int i98 = (charAt26 / 32) + (i25 * 2);
                            Object obj3 = objArr3[i98];
                            if (obj3 instanceof Field) {
                                D = (Field) obj3;
                            } else {
                                D = D(cls, (String) obj3);
                                objArr3[i98] = D;
                            }
                            i27 = (int) unsafe.objectFieldOffset(D);
                            i29 = charAt26 % 32;
                        }
                        if (i81 >= 18 || i81 > 49) {
                            i30 = i26;
                            i31 = objectFieldOffset;
                        } else {
                            iArr[i70] = objectFieldOffset;
                            i30 = i26;
                            i31 = objectFieldOffset;
                            i70++;
                        }
                    } else {
                        i25 = i11;
                    }
                    i26 = i32;
                    cls = cls2;
                    objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                    if ((charAt24 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                    }
                    i27 = 1048575;
                    i28 = i78;
                    i29 = 0;
                    if (i81 >= 18) {
                    }
                    i30 = i26;
                    i31 = objectFieldOffset;
                }
                cls = cls2;
                i26 = i91;
                objectFieldOffset = (int) unsafe.objectFieldOffset(D4);
                if ((charAt24 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0) {
                }
                i27 = 1048575;
                i28 = i78;
                i29 = 0;
                if (i81 >= 18) {
                }
                i30 = i26;
                i31 = objectFieldOffset;
            }
            int i99 = i73 + 1;
            iArr4[i73] = i82;
            int i100 = i73 + 2;
            String str2 = str;
            iArr4[i99] = ((charAt24 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? 536870912 : 0) | ((charAt24 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? 268435456 : 0) | ((charAt24 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? Integer.MIN_VALUE : 0) | (i81 << 20) | i31;
            i73 += 3;
            iArr4[i100] = (i29 << 20) | i27;
            cls2 = cls;
            objArr = objArr3;
            str = str2;
            length = i23;
            i11 = i25;
            i40 = i28;
            i38 = 55296;
            i13 = i30;
            iArr3 = iArr4;
        }
        return new j0(iArr3, objArr2, i6, i12, p0Var.a, iArr, i14, i69, l0Var, a0Var, u0Var, mVar, f0Var);
    }

    public static long w(int i5) {
        return i5 & 1048575;
    }

    public static int x(long j, Object obj) {
        return ((Integer) c1.f10846c.i(j, obj)).intValue();
    }

    public static long y(long j, Object obj) {
        return ((Long) c1.f10846c.i(j, obj)).longValue();
    }

    public final void A(Object obj, int i5, androidx.datastore.preferences.protobuf.h hVar, q0 q0Var, l lVar) {
        int v5;
        List c6 = this.k.c(i5 & 1048575, obj);
        j jVar = (j) hVar.f1760e;
        int i6 = hVar.f1757b;
        if ((i6 & 7) != 2) {
            throw v.b();
        }
        do {
            r c8 = q0Var.c();
            hVar.e(c8, q0Var, lVar);
            q0Var.a(c8);
            c6.add(c8);
            if (jVar.c() || hVar.f1759d != 0) {
                return;
            } else {
                v5 = jVar.v();
            }
        } while (v5 == i6);
        hVar.f1759d = v5;
    }

    public final void B(int i5, androidx.datastore.preferences.protobuf.h hVar, Object obj) {
        j jVar = (j) hVar.f1760e;
        if ((536870912 & i5) != 0) {
            hVar.W(2);
            c1.o(i5 & 1048575, obj, jVar.u());
        } else if (!this.f10884f) {
            c1.o(i5 & 1048575, obj, hVar.i());
        } else {
            hVar.W(2);
            c1.o(i5 & 1048575, obj, jVar.t());
        }
    }

    public final void C(int i5, androidx.datastore.preferences.protobuf.h hVar, Object obj) {
        int i6 = 536870912 & i5;
        a0 a0Var = this.k;
        if (i6 != 0) {
            hVar.O(a0Var.c(i5 & 1048575, obj), true);
        } else {
            hVar.O(a0Var.c(i5 & 1048575, obj), false);
        }
    }

    public final void E(int i5, Object obj) {
        int i6 = this.a[i5 + 2];
        long j = 1048575 & i6;
        if (j == 1048575) {
            return;
        }
        c1.m((1 << (i6 >>> 20)) | c1.f10846c.g(j, obj), j, obj);
    }

    public final void F(int i5, int i6, Object obj) {
        c1.m(i5, this.a[i6 + 2] & 1048575, obj);
    }

    public final void G(Object obj, int i5, b bVar) {
        f10879o.putObject(obj, J(i5) & 1048575, bVar);
        E(i5, obj);
    }

    public final void H(Object obj, int i5, int i6, b bVar) {
        f10879o.putObject(obj, J(i6) & 1048575, bVar);
        F(i5, i6, obj);
    }

    public final int J(int i5) {
        return this.a[i5 + 1];
    }

    @Override // ij.q0
    public final void a(Object obj) {
        if (n(obj)) {
            if (obj instanceof r) {
                r rVar = (r) obj;
                rVar.f10919b = (rVar.f10919b & Integer.MIN_VALUE) | (Integer.MAX_VALUE & Integer.MAX_VALUE);
                rVar.a = 0;
                rVar.f10919b = Integer.MAX_VALUE & rVar.f10919b;
            }
            int[] iArr = this.a;
            int length = iArr.length;
            for (int i5 = 0; i5 < length; i5 += 3) {
                int J = J(i5);
                long j = 1048575 & J;
                int I = I(J);
                if (I != 9) {
                    if (I != 60 && I != 68) {
                        switch (I) {
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
                                this.k.a(j, obj);
                                break;
                            case 50:
                                Unsafe unsafe = f10879o;
                                Object object = unsafe.getObject(obj, j);
                                if (object != null) {
                                    this.f10889m.getClass();
                                    ((e0) object).f10855d = false;
                                    unsafe.putObject(obj, j, object);
                                    break;
                                } else {
                                    break;
                                }
                        }
                    } else if (o(iArr[i5], i5, obj)) {
                        k(i5).a(f10879o.getObject(obj, j));
                    }
                }
                if (l(i5, obj)) {
                    k(i5).a(f10879o.getObject(obj, j));
                }
            }
            this.f10888l.getClass();
            t0 t0Var = ((r) obj).f10920c;
            if (t0Var.f10927d) {
                t0Var.f10927d = false;
            }
        }
    }

    @Override // ij.q0
    public final boolean b(Object obj) {
        int i5;
        int i6;
        int i10;
        int i11 = 1048575;
        int i12 = 0;
        int i13 = 0;
        while (i13 < this.f10886h) {
            int i14 = this.f10885g[i13];
            int[] iArr = this.a;
            int i15 = iArr[i14];
            int J = J(i14);
            int i16 = iArr[i14 + 2];
            int i17 = i16 & 1048575;
            int i18 = 1 << (i16 >>> 20);
            if (i17 != i11) {
                if (i17 != 1048575) {
                    i12 = f10879o.getInt(obj, i17);
                }
                i6 = i14;
                i10 = i12;
                i5 = i17;
            } else {
                int i19 = i12;
                i5 = i11;
                i6 = i14;
                i10 = i19;
            }
            if ((268435456 & J) == 0 || m(obj, i6, i5, i10, i18)) {
                int I = I(J);
                if (I == 9 || I == 17) {
                    if (m(obj, i6, i5, i10, i18)) {
                        if (!k(i6).b(c1.f10846c.i(J & 1048575, obj))) {
                        }
                    } else {
                        continue;
                    }
                    i13++;
                    i11 = i5;
                    i12 = i10;
                } else {
                    if (I != 27) {
                        if (I == 60 || I == 68) {
                            if (o(i15, i6, obj)) {
                                if (!k(i6).b(c1.f10846c.i(J & 1048575, obj))) {
                                }
                            } else {
                                continue;
                            }
                            i13++;
                            i11 = i5;
                            i12 = i10;
                        } else if (I != 49) {
                            if (I != 50) {
                                continue;
                            } else {
                                Object i20 = c1.f10846c.i(J & 1048575, obj);
                                this.f10889m.getClass();
                                e0 e0Var = (e0) i20;
                                if (e0Var.isEmpty()) {
                                    continue;
                                } else {
                                    if (((j1) ((d0) this.f10880b[(i6 / 3) * 2]).a.f6261v).f10894d != k1.F) {
                                        continue;
                                    } else {
                                        q0 q0Var = null;
                                        for (Object obj2 : e0Var.values()) {
                                            if (q0Var == null) {
                                                q0Var = n0.f10907c.a(obj2.getClass());
                                            }
                                            if (!q0Var.b(obj2)) {
                                            }
                                        }
                                    }
                                }
                            }
                            i13++;
                            i11 = i5;
                            i12 = i10;
                        }
                    }
                    List list = (List) c1.f10846c.i(J & 1048575, obj);
                    if (list.isEmpty()) {
                        continue;
                    } else {
                        q0 k = k(i6);
                        for (int i21 = 0; i21 < list.size(); i21++) {
                            if (k.b(list.get(i21))) {
                            }
                        }
                    }
                    i13++;
                    i11 = i5;
                    i12 = i10;
                }
            }
            return false;
        }
        return true;
    }

    @Override // ij.q0
    public final r c() {
        this.j.getClass();
        return ((r) this.f10883e).f();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // ij.q0
    public final void d(Object obj, Object obj2) {
        Object obj3;
        if (!n(obj)) {
            throw new IllegalArgumentException("Mutating immutable message: " + obj);
        }
        obj2.getClass();
        int i5 = 0;
        while (true) {
            int[] iArr = this.a;
            if (i5 >= iArr.length) {
                r0.a(this.f10888l, obj, obj2);
                return;
            }
            int J = J(i5);
            long j = 1048575 & J;
            int i6 = iArr[i5];
            switch (I(J)) {
                case 0:
                    if (l(i5, obj2)) {
                        b1 b1Var = c1.f10846c;
                        obj3 = obj;
                        b1Var.l(obj3, j, b1Var.e(j, obj2));
                        E(i5, obj3);
                        break;
                    }
                    obj3 = obj;
                    break;
                case 1:
                    if (l(i5, obj2)) {
                        b1 b1Var2 = c1.f10846c;
                        b1Var2.m(obj, j, b1Var2.f(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 2:
                    if (l(i5, obj2)) {
                        c1.n(obj, j, c1.f10846c.h(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 3:
                    if (l(i5, obj2)) {
                        c1.n(obj, j, c1.f10846c.h(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 4:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 5:
                    if (l(i5, obj2)) {
                        c1.n(obj, j, c1.f10846c.h(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 6:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 7:
                    if (l(i5, obj2)) {
                        b1 b1Var3 = c1.f10846c;
                        b1Var3.k(obj, j, b1Var3.c(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 8:
                    if (l(i5, obj2)) {
                        c1.o(j, obj, c1.f10846c.i(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 9:
                    q(i5, obj, obj2);
                    obj3 = obj;
                    break;
                case 10:
                    if (l(i5, obj2)) {
                        c1.o(j, obj, c1.f10846c.i(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 11:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 12:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 13:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 14:
                    if (l(i5, obj2)) {
                        c1.n(obj, j, c1.f10846c.h(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 15:
                    if (l(i5, obj2)) {
                        c1.m(c1.f10846c.g(j, obj2), j, obj);
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 16:
                    if (l(i5, obj2)) {
                        c1.n(obj, j, c1.f10846c.h(j, obj2));
                        E(i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 17:
                    q(i5, obj, obj2);
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
                    this.k.b(j, obj, obj2);
                    obj3 = obj;
                    break;
                case 50:
                    Class cls = r0.a;
                    b1 b1Var4 = c1.f10846c;
                    Object i10 = b1Var4.i(j, obj);
                    Object i11 = b1Var4.i(j, obj2);
                    this.f10889m.getClass();
                    c1.o(j, obj, f0.a(i10, i11));
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
                    if (o(i6, i5, obj2)) {
                        c1.o(j, obj, c1.f10846c.i(j, obj2));
                        F(i6, i5, obj);
                    }
                    obj3 = obj;
                    break;
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    r(i5, obj, obj2);
                    obj3 = obj;
                    break;
                case 61:
                case 62:
                case ys.l.a /* 63 */:
                case 64:
                case 65:
                case 66:
                case 67:
                    if (o(i6, i5, obj2)) {
                        c1.o(j, obj, c1.f10846c.i(j, obj2));
                        F(i6, i5, obj);
                    }
                    obj3 = obj;
                    break;
                case 68:
                    r(i5, obj, obj2);
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

    /* JADX WARN: Code restructure failed: missing block: B:16:0x0074, code lost:
    
        if (ij.r0.b(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
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
    
        if (ij.r0.b(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0120, code lost:
    
        if (ij.r0.b(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0138, code lost:
    
        if (ij.r0.b(r5.i(r7, r12), r5.i(r7, r13)) != false) goto L105;
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
    
        if (ij.r0.b(r9.i(r7, r12), r9.i(r7, r13)) != false) goto L105;
     */
    @Override // ij.q0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean e(r rVar, r rVar2) {
        int[] iArr = this.a;
        int length = iArr.length;
        int i5 = 0;
        while (true) {
            boolean z5 = true;
            if (i5 < length) {
                int J = J(i5);
                long j = J & 1048575;
                switch (I(J)) {
                    case 0:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 1:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var2 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 2:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var3 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 3:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var4 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 4:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var5 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 5:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var6 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 6:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var7 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 7:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var8 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 8:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var9 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 9:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var10 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 10:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var11 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 11:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var12 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 12:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var13 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 13:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var14 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 14:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var15 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 15:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var16 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 16:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var17 = c1.f10846c;
                            break;
                        }
                        z5 = false;
                        break;
                    case 17:
                        if (h(rVar, rVar2, i5)) {
                            b1 b1Var18 = c1.f10846c;
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
                        b1 b1Var19 = c1.f10846c;
                        z5 = r0.b(b1Var19.i(j, rVar), b1Var19.i(j, rVar2));
                        break;
                    case 50:
                        b1 b1Var20 = c1.f10846c;
                        z5 = r0.b(b1Var20.i(j, rVar), b1Var20.i(j, rVar2));
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
                        b1 b1Var21 = c1.f10846c;
                        if (b1Var21.g(j5, rVar) == b1Var21.g(j5, rVar2)) {
                            break;
                        }
                        z5 = false;
                        break;
                }
                if (z5) {
                    i5 += 3;
                }
            } else {
                this.f10888l.getClass();
                if (rVar.f10920c.equals(rVar2.f10920c)) {
                    return true;
                }
            }
        }
        return false;
    }

    /*  JADX ERROR: Type inference failed
        jadx.core.utils.exceptions.JadxOverflowException: Type inference error: updates count limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:77)
        */
    @Override // ij.q0
    public final void f(java.lang.Object r19, androidx.datastore.preferences.protobuf.h r20, ij.l r21) {
        /*
            Method dump skipped, instructions count: 1850
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: ij.j0.f(java.lang.Object, androidx.datastore.preferences.protobuf.h, ij.l):void");
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
    @Override // ij.q0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int g(r rVar) {
        int i5;
        int b10;
        int i6;
        int[] iArr = this.a;
        int length = iArr.length;
        int i10 = 0;
        for (int i11 = 0; i11 < length; i11 += 3) {
            int J = J(i11);
            int i12 = iArr[i11];
            long j = 1048575 & J;
            int i13 = 1237;
            int i14 = 37;
            switch (I(J)) {
                case 0:
                    i5 = i10 * 53;
                    b10 = t.b(Double.doubleToLongBits(c1.f10846c.e(j, rVar)));
                    i10 = b10 + i5;
                    break;
                case 1:
                    i5 = i10 * 53;
                    b10 = Float.floatToIntBits(c1.f10846c.f(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 2:
                    i5 = i10 * 53;
                    b10 = t.b(c1.f10846c.h(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 3:
                    i5 = i10 * 53;
                    b10 = t.b(c1.f10846c.h(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 4:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 5:
                    i5 = i10 * 53;
                    b10 = t.b(c1.f10846c.h(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 6:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 7:
                    i6 = i10 * 53;
                    boolean c6 = c1.f10846c.c(j, rVar);
                    Charset charset = t.a;
                    break;
                case 8:
                    i5 = i10 * 53;
                    b10 = ((String) c1.f10846c.i(j, rVar)).hashCode();
                    i10 = b10 + i5;
                    break;
                case 9:
                    Object i15 = c1.f10846c.i(j, rVar);
                    if (i15 != null) {
                        i14 = i15.hashCode();
                    }
                    i10 = (i10 * 53) + i14;
                    break;
                case 10:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.i(j, rVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case 11:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 12:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 13:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 14:
                    i5 = i10 * 53;
                    b10 = t.b(c1.f10846c.h(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 15:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.g(j, rVar);
                    i10 = b10 + i5;
                    break;
                case 16:
                    i5 = i10 * 53;
                    b10 = t.b(c1.f10846c.h(j, rVar));
                    i10 = b10 + i5;
                    break;
                case 17:
                    Object i16 = c1.f10846c.i(j, rVar);
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
                    b10 = c1.f10846c.i(j, rVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case 50:
                    i5 = i10 * 53;
                    b10 = c1.f10846c.i(j, rVar).hashCode();
                    i10 = b10 + i5;
                    break;
                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(Double.doubleToLongBits(((Double) c1.f10846c.i(j, rVar)).doubleValue()));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = Float.floatToIntBits(((Float) c1.f10846c.i(j, rVar)).floatValue());
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(y(j, rVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(y(j, rVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(y(j, rVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    if (o(i12, i11, rVar)) {
                        i6 = i10 * 53;
                        boolean booleanValue = ((Boolean) c1.f10846c.i(j, rVar)).booleanValue();
                        Charset charset2 = t.a;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = ((String) c1.f10846c.i(j, rVar)).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = c1.f10846c.i(j, rVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 61:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = c1.f10846c.i(j, rVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 62:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case ys.l.a /* 63 */:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 64:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 65:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(y(j, rVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 66:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = x(j, rVar);
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 67:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = t.b(y(j, rVar));
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
                case 68:
                    if (o(i12, i11, rVar)) {
                        i5 = i10 * 53;
                        b10 = c1.f10846c.i(j, rVar).hashCode();
                        i10 = b10 + i5;
                        break;
                    } else {
                        break;
                    }
            }
        }
        this.f10888l.getClass();
        return rVar.f10920c.hashCode() + (i10 * 53);
    }

    public final boolean h(r rVar, r rVar2, int i5) {
        return l(i5, rVar) == l(i5, rVar2);
    }

    public final void i(int i5, Object obj, Object obj2) {
        int i6 = this.a[i5];
        if (c1.f10846c.i(J(i5) & 1048575, obj) == null) {
            return;
        }
        j(i5);
    }

    public final void j(int i5) {
        if (this.f10880b[((i5 / 3) * 2) + 1] != null) {
            throw new ClassCastException();
        }
    }

    public final q0 k(int i5) {
        int i6 = (i5 / 3) * 2;
        Object[] objArr = this.f10880b;
        q0 q0Var = (q0) objArr[i6];
        if (q0Var != null) {
            return q0Var;
        }
        q0 a = n0.f10907c.a((Class) objArr[i6 + 1]);
        objArr[i6] = a;
        return a;
    }

    public final boolean l(int i5, Object obj) {
        int i6 = this.a[i5 + 2];
        long j = i6 & 1048575;
        if (j == 1048575) {
            int J = J(i5);
            long j5 = J & 1048575;
            switch (I(J)) {
                case 0:
                    if (Double.doubleToRawLongBits(c1.f10846c.e(j5, obj)) == 0) {
                        return false;
                    }
                    break;
                case 1:
                    if (Float.floatToRawIntBits(c1.f10846c.f(j5, obj)) == 0) {
                        return false;
                    }
                    break;
                case 2:
                    if (c1.f10846c.h(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 3:
                    if (c1.f10846c.h(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 4:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 5:
                    if (c1.f10846c.h(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 6:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 7:
                    return c1.f10846c.c(j5, obj);
                case 8:
                    Object i10 = c1.f10846c.i(j5, obj);
                    if (i10 instanceof String) {
                        return !((String) i10).isEmpty();
                    }
                    if (i10 instanceof g) {
                        return !g.f10858i.equals(i10);
                    }
                    throw new IllegalArgumentException();
                case 9:
                    if (c1.f10846c.i(j5, obj) == null) {
                        return false;
                    }
                    break;
                case 10:
                    return !g.f10858i.equals(c1.f10846c.i(j5, obj));
                case 11:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 12:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 13:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 14:
                    if (c1.f10846c.h(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 15:
                    if (c1.f10846c.g(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 16:
                    if (c1.f10846c.h(j5, obj) == 0) {
                        return false;
                    }
                    break;
                case 17:
                    if (c1.f10846c.i(j5, obj) == null) {
                        return false;
                    }
                    break;
                default:
                    throw new IllegalArgumentException();
            }
        } else if (((1 << (i6 >>> 20)) & c1.f10846c.g(j, obj)) == 0) {
            return false;
        }
        return true;
    }

    public final boolean m(Object obj, int i5, int i6, int i10, int i11) {
        return i6 == 1048575 ? l(i5, obj) : (i10 & i11) != 0;
    }

    public final boolean o(int i5, int i6, Object obj) {
        return c1.f10846c.g((long) (this.a[i6 + 2] & 1048575), obj) == i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x009f, code lost:
    
        r10.put(r2, r4);
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x00a2, code lost:
    
        r0.d(r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x00a5, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void p(Object obj, int i5, Object obj2, l lVar, androidx.datastore.preferences.protobuf.h hVar) {
        long J = J(i5) & 1048575;
        Object i6 = c1.f10846c.i(J, obj);
        f0 f0Var = this.f10889m;
        if (i6 == null) {
            f0Var.getClass();
            i6 = e0.f10854e.b();
            c1.o(J, obj, i6);
        } else {
            f0Var.getClass();
            if (!((e0) i6).f10855d) {
                e0 b10 = e0.f10854e.b();
                f0.a(b10, i6);
                c1.o(J, obj, b10);
                i6 = b10;
            }
        }
        f0Var.getClass();
        e0 e0Var = (e0) i6;
        com.google.firebase.messaging.r rVar = ((d0) obj2).a;
        hVar.W(2);
        j jVar = (j) hVar.f1760e;
        int e9 = jVar.e(jVar.w());
        Object obj3 = rVar.f6260i;
        Object obj4 = rVar.f6262w;
        Object obj5 = obj4;
        while (true) {
            try {
                int a = hVar.a();
                if (a == Integer.MAX_VALUE || jVar.c()) {
                    break;
                }
                if (a == 1) {
                    obj3 = hVar.o((j1) rVar.f6259e, null, null);
                } else if (a != 2) {
                    try {
                        if (!hVar.Y()) {
                            throw new v("Unable to parse map entry.");
                        }
                    } catch (u unused) {
                        if (!hVar.Y()) {
                            throw new v("Unable to parse map entry.");
                        }
                    }
                } else {
                    obj5 = hVar.o((j1) rVar.f6261v, obj4.getClass(), lVar);
                }
            } catch (Throwable th2) {
                jVar.d(e9);
                throw th2;
            }
        }
    }

    public final void q(int i5, Object obj, Object obj2) {
        if (l(i5, obj2)) {
            long J = J(i5) & 1048575;
            Unsafe unsafe = f10879o;
            Object object = unsafe.getObject(obj2, J);
            if (object == null) {
                throw new IllegalStateException("Source subfield " + this.a[i5] + " is present but null: " + obj2);
            }
            q0 k = k(i5);
            if (!l(i5, obj)) {
                if (n(object)) {
                    r c6 = k.c();
                    k.d(c6, object);
                    unsafe.putObject(obj, J, c6);
                } else {
                    unsafe.putObject(obj, J, object);
                }
                E(i5, obj);
                return;
            }
            Object object2 = unsafe.getObject(obj, J);
            if (!n(object2)) {
                r c8 = k.c();
                k.d(c8, object2);
                unsafe.putObject(obj, J, c8);
                object2 = c8;
            }
            k.d(object2, object);
        }
    }

    public final void r(int i5, Object obj, Object obj2) {
        int[] iArr = this.a;
        int i6 = iArr[i5];
        if (o(i6, i5, obj2)) {
            long J = J(i5) & 1048575;
            Unsafe unsafe = f10879o;
            Object object = unsafe.getObject(obj2, J);
            if (object == null) {
                throw new IllegalStateException("Source subfield " + iArr[i5] + " is present but null: " + obj2);
            }
            q0 k = k(i5);
            if (!o(i6, i5, obj)) {
                if (n(object)) {
                    r c6 = k.c();
                    k.d(c6, object);
                    unsafe.putObject(obj, J, c6);
                } else {
                    unsafe.putObject(obj, J, object);
                }
                F(i6, i5, obj);
                return;
            }
            Object object2 = unsafe.getObject(obj, J);
            if (!n(object2)) {
                r c8 = k.c();
                k.d(c8, object2);
                unsafe.putObject(obj, J, c8);
                object2 = c8;
            }
            k.d(object2, object);
        }
    }

    public final Object s(int i5, Object obj) {
        q0 k = k(i5);
        long J = J(i5) & 1048575;
        if (!l(i5, obj)) {
            return k.c();
        }
        Object object = f10879o.getObject(obj, J);
        if (n(object)) {
            return object;
        }
        r c6 = k.c();
        if (object != null) {
            k.d(c6, object);
        }
        return c6;
    }

    public final Object t(int i5, int i6, Object obj) {
        q0 k = k(i6);
        if (!o(i5, i6, obj)) {
            return k.c();
        }
        Object object = f10879o.getObject(obj, J(i6) & 1048575);
        if (n(object)) {
            return object;
        }
        r c6 = k.c();
        if (object != null) {
            k.d(c6, object);
        }
        return c6;
    }

    public final void z(Object obj, long j, androidx.datastore.preferences.protobuf.h hVar, q0 q0Var, l lVar) {
        int v5;
        List c6 = this.k.c(j, obj);
        j jVar = (j) hVar.f1760e;
        int i5 = hVar.f1757b;
        if ((i5 & 7) != 3) {
            throw v.b();
        }
        do {
            r c8 = q0Var.c();
            hVar.d(c8, q0Var, lVar);
            q0Var.a(c8);
            c6.add(c8);
            if (jVar.c() || hVar.f1759d != 0) {
                return;
            } else {
                v5 = jVar.v();
            }
        } while (v5 == i5);
        hVar.f1759d = v5;
    }
}
