package xj;

import androidx.recyclerview.widget.h0;
import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.media.engine.MediaEngine;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.zxing.Result;
import gh.s;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import jj.g;
import k0.d;
import k2.r;
import vj.h;
import yj.f;
import ys.l;

/* loaded from: classes3.dex */
public final class c extends wj.a {
    public static final int[] k = {7, 5, 4, 3, 1};

    /* renamed from: l, reason: collision with root package name */
    public static final int[] f20493l = {4, 20, 52, 104, 204};

    /* renamed from: m, reason: collision with root package name */
    public static final int[] f20494m = {0, 348, 1388, 2948, 3988};

    /* renamed from: n, reason: collision with root package name */
    public static final int[][] f20495n = {new int[]{1, 8, 4, 1}, new int[]{3, 6, 4, 1}, new int[]{3, 4, 6, 1}, new int[]{3, 2, 8, 1}, new int[]{2, 6, 5, 1}, new int[]{2, 2, 9, 1}};

    /* renamed from: o, reason: collision with root package name */
    public static final int[][] f20496o = {new int[]{1, 3, 9, 27, 81, 32, 96, 77}, new int[]{20, 60, 180, 118, 143, 7, 21, 63}, new int[]{189, 145, 13, 39, 117, 140, 209, 205}, new int[]{193, 157, 49, 147, 19, 57, 171, 91}, new int[]{62, 186, 136, 197, 169, 85, 44, 132}, new int[]{185, 133, 188, 142, 4, 12, 36, 108}, new int[]{113, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, 173, 97, 80, 29, 87, 50}, new int[]{150, 28, 84, 41, 123, 158, 52, 156}, new int[]{46, 138, 203, 187, 139, 206, 196, 166}, new int[]{76, 17, 51, 153, 37, 111, 122, 155}, new int[]{43, 129, 176, 106, 107, 110, 119, MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH}, new int[]{16, 48, 144, 10, 30, 90, 59, 177}, new int[]{109, 116, 137, h0.DEFAULT_DRAG_ANIMATION_DURATION, 178, 112, 125, 164}, new int[]{70, 210, JfifUtil.MARKER_RST0, 202, 184, 130, 179, 115}, new int[]{134, 191, 151, 31, 93, 68, 204, 190}, new int[]{148, 22, 66, 198, 172, 94, 71, 2}, new int[]{6, 18, 54, 162, 64, JfifUtil.MARKER_SOFn, 154, 40}, new int[]{120, 149, 25, 75, 14, 42, 126, 167}, new int[]{79, 26, 78, 23, 69, 207, 199, 175}, new int[]{103, 98, 83, 38, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 131, 182, 124}, new int[]{161, 61, 183, 127, 170, 88, 53, 159}, new int[]{55, 165, 73, 8, 24, 72, 5, 15}, new int[]{45, 135, 194, 160, 58, 174, 100, 89}};

    /* renamed from: p, reason: collision with root package name */
    public static final int[][] f20497p = {new int[]{0, 0}, new int[]{0, 1, 1}, new int[]{0, 2, 1, 3}, new int[]{0, 4, 1, 3, 2}, new int[]{0, 4, 1, 3, 3, 5}, new int[]{0, 4, 1, 3, 4, 5, 5}, new int[]{0, 0, 1, 1, 2, 2, 3, 3}, new int[]{0, 0, 1, 1, 2, 2, 3, 4, 4}, new int[]{0, 0, 1, 1, 2, 2, 3, 4, 5, 5}, new int[]{0, 0, 1, 1, 2, 3, 3, 4, 4, 5, 5}};

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f20498g = new ArrayList(11);

    /* renamed from: h, reason: collision with root package name */
    public final ArrayList f20499h = new ArrayList();

    /* renamed from: i, reason: collision with root package name */
    public final int[] f20500i = new int[2];
    public boolean j;

    public static Result m(List list) {
        s aVar;
        int size = list.size() << 1;
        int i5 = size - 1;
        if (((a) d.g(1, list)).f20490b == null) {
            i5 = size - 2;
        }
        nj.a aVar2 = new nj.a(i5 * 12);
        int i6 = ((a) list.get(0)).f20490b.a;
        int i10 = 0;
        for (int i11 = 11; i11 >= 0; i11--) {
            if (((1 << i11) & i6) != 0) {
                aVar2.f(i10);
            }
            i10++;
        }
        for (int i12 = 1; i12 < list.size(); i12++) {
            a aVar3 = (a) list.get(i12);
            int i13 = aVar3.a.a;
            for (int i14 = 11; i14 >= 0; i14--) {
                if (((1 << i14) & i13) != 0) {
                    aVar2.f(i10);
                }
                i10++;
            }
            wj.b bVar = aVar3.f20490b;
            if (bVar != null) {
                int i15 = bVar.a;
                for (int i16 = 11; i16 >= 0; i16--) {
                    if (((1 << i16) & i15) != 0) {
                        aVar2.f(i10);
                    }
                    i10++;
                }
            }
        }
        if (aVar2.a(1)) {
            aVar = new yj.b(aVar2, 2);
        } else if (aVar2.a(2)) {
            int t5 = r.t(1, 4, aVar2);
            if (t5 == 4) {
                aVar = new yj.a(aVar2, 0);
            } else if (t5 != 5) {
                int t10 = r.t(1, 5, aVar2);
                if (t10 == 12) {
                    aVar = new yj.b(aVar2, 0);
                } else if (t10 != 13) {
                    switch (r.t(1, 7, aVar2)) {
                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                            aVar = new yj.c(aVar2, "310", "11");
                            break;
                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                            aVar = new yj.c(aVar2, "320", "11");
                            break;
                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                            aVar = new yj.c(aVar2, "310", "13");
                            break;
                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                            aVar = new yj.c(aVar2, "320", "13");
                            break;
                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                            aVar = new yj.c(aVar2, "310", "15");
                            break;
                        case 61:
                            aVar = new yj.c(aVar2, "320", "15");
                            break;
                        case 62:
                            aVar = new yj.c(aVar2, "310", "17");
                            break;
                        case l.a /* 63 */:
                            aVar = new yj.c(aVar2, "320", "17");
                            break;
                        default:
                            throw new IllegalStateException("unknown decoder: ".concat(String.valueOf(aVar2)));
                    }
                } else {
                    aVar = new yj.b(aVar2, 1);
                }
            } else {
                aVar = new yj.a(aVar2, 1);
            }
        } else {
            aVar = new f(aVar2);
        }
        String k5 = aVar.k();
        jj.l[] lVarArr = ((a) list.get(0)).f20491c.f19846c;
        jj.l[] lVarArr2 = ((a) d.g(1, list)).f20491c.f19846c;
        return new Result(k5, null, new jj.l[]{lVarArr[0], lVarArr[1], lVarArr2[0], lVarArr2[1]}, jj.a.K);
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        ArrayList arrayList = this.f20498g;
        arrayList.clear();
        this.j = false;
        try {
            return m(o(aVar, i5));
        } catch (g unused) {
            arrayList.clear();
            this.j = true;
            return m(o(aVar, i5));
        }
    }

    public final boolean j() {
        ArrayList arrayList = this.f20498g;
        a aVar = (a) arrayList.get(0);
        wj.b bVar = aVar.a;
        wj.b bVar2 = aVar.f20490b;
        if (bVar2 != null) {
            int i5 = bVar2.f19844b;
            int i6 = 2;
            for (int i10 = 1; i10 < arrayList.size(); i10++) {
                a aVar2 = (a) arrayList.get(i10);
                i5 += aVar2.a.f19844b;
                int i11 = i6 + 1;
                wj.b bVar3 = aVar2.f20490b;
                if (bVar3 != null) {
                    i5 += bVar3.f19844b;
                    i6 += 2;
                } else {
                    i6 = i11;
                }
            }
            if (((i6 - 4) * 211) + (i5 % 211) == bVar.a) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x005c, code lost:
    
        if (j() == false) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x005f, code lost:
    
        r1 = new java.util.ArrayList(r10);
        r1.add(r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x006d, code lost:
    
        return k(r9 + 1, r1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x0071, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x005e, code lost:
    
        return r1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final List k(int i5, ArrayList arrayList) {
        while (true) {
            ArrayList arrayList2 = this.f20499h;
            if (i5 >= arrayList2.size()) {
                throw g.f12795i;
            }
            b bVar = (b) arrayList2.get(i5);
            ArrayList arrayList3 = this.f20498g;
            arrayList3.clear();
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                arrayList3.addAll(((b) it.next()).a);
            }
            arrayList3.addAll(bVar.a);
            int i6 = 0;
            while (true) {
                if (i6 < 10) {
                    int[] iArr = f20497p[i6];
                    if (arrayList3.size() <= iArr.length) {
                        for (int i10 = 0; i10 < arrayList3.size(); i10++) {
                            if (((a) arrayList3.get(i10)).f20491c.a != iArr[i10]) {
                                break;
                            }
                        }
                        break;
                    }
                    i6++;
                }
            }
            i5++;
        }
    }

    public final List l(boolean z5) {
        ArrayList arrayList = this.f20499h;
        List list = null;
        if (arrayList.size() > 25) {
            arrayList.clear();
            return null;
        }
        this.f20498g.clear();
        if (z5) {
            Collections.reverse(arrayList);
        }
        try {
            list = k(0, new ArrayList());
        } catch (g unused) {
        }
        if (z5) {
            Collections.reverse(arrayList);
        }
        return list;
    }

    public final wj.b n(nj.a aVar, wj.c cVar, boolean z5, boolean z6) {
        int[] iArr;
        boolean z7;
        boolean z8;
        boolean z10;
        boolean z11;
        boolean z12;
        boolean z13;
        boolean z14;
        boolean z15;
        boolean z16;
        int[][] iArr2;
        int i5 = 0;
        while (true) {
            iArr = this.f19839b;
            if (i5 >= iArr.length) {
                break;
            }
            iArr[i5] = 0;
            i5++;
        }
        if (z6) {
            h.f(cVar.f19845b[0], aVar, iArr);
        } else {
            h.e(cVar.f19845b[1], aVar, iArr);
            int i6 = 0;
            for (int length = iArr.length - 1; i6 < length; length--) {
                int i10 = iArr[i6];
                iArr[i6] = iArr[length];
                iArr[length] = i10;
                i6++;
            }
        }
        float L = jb.a.L(iArr) / 17.0f;
        int[] iArr3 = cVar.f19845b;
        int i11 = cVar.a;
        float f2 = (iArr3[1] - iArr3[0]) / 15.0f;
        if (Math.abs(L - f2) / f2 > 0.3f) {
            throw g.f12795i;
        }
        int i12 = 0;
        while (true) {
            int length2 = iArr.length;
            float[] fArr = this.f19841d;
            float[] fArr2 = this.f19840c;
            int[] iArr4 = this.f19843f;
            int[] iArr5 = this.f19842e;
            if (i12 >= length2) {
                int L2 = jb.a.L(iArr5);
                int L3 = jb.a.L(iArr4);
                if (L2 > 13) {
                    z7 = false;
                    z8 = true;
                } else if (L2 < 4) {
                    z8 = false;
                    z7 = true;
                } else {
                    z7 = false;
                    z8 = false;
                }
                if (L3 > 13) {
                    z10 = false;
                    z11 = true;
                } else if (L3 < 4) {
                    z11 = false;
                    z10 = true;
                } else {
                    z10 = false;
                    z11 = false;
                }
                int i13 = (L2 + L3) - 17;
                boolean z17 = (L2 & 1) == 1;
                boolean z18 = (L3 & 1) == 0;
                if (i13 != 1) {
                    z12 = true;
                    z15 = z7;
                    z13 = z8;
                    z14 = z10;
                    z16 = z11;
                    if (i13 != -1) {
                        if (i13 != 0) {
                            throw g.f12795i;
                        }
                        if (z17) {
                            if (!z18) {
                                throw g.f12795i;
                            }
                            if (L2 < L3) {
                                z15 = true;
                                z16 = true;
                                z13 = z8;
                                z14 = z10;
                            } else {
                                z13 = true;
                                z14 = true;
                                z15 = z7;
                                z16 = z11;
                            }
                        } else if (z18) {
                            throw g.f12795i;
                        }
                    } else if (z17) {
                        if (z18) {
                            throw g.f12795i;
                        }
                        z15 = true;
                        z13 = z8;
                        z14 = z10;
                        z16 = z11;
                    } else {
                        if (!z18) {
                            throw g.f12795i;
                        }
                        z14 = true;
                        z15 = z7;
                        z13 = z8;
                        z16 = z11;
                    }
                } else if (z17) {
                    if (z18) {
                        throw g.f12795i;
                    }
                    z13 = true;
                    z12 = true;
                    z15 = z7;
                    z14 = z10;
                    z16 = z11;
                } else {
                    if (!z18) {
                        throw g.f12795i;
                    }
                    z16 = true;
                    z12 = true;
                    z15 = z7;
                    z13 = z8;
                    z14 = z10;
                }
                if (z15) {
                    if (z13) {
                        throw g.f12795i;
                    }
                    wj.a.h(fArr2, iArr5);
                }
                if (z13) {
                    wj.a.g(fArr2, iArr5);
                }
                if (z14) {
                    if (z16) {
                        throw g.f12795i;
                    }
                    wj.a.h(fArr2, iArr4);
                }
                if (z16) {
                    wj.a.g(fArr, iArr4);
                }
                int i14 = (((i11 * 4) + (z5 ? 0 : 2)) + (!z6 ? 1 : 0)) - 1;
                int length3 = iArr5.length - 1;
                int i15 = 0;
                int i16 = 0;
                while (true) {
                    iArr2 = f20496o;
                    if (length3 < 0) {
                        break;
                    }
                    if (i11 != 0 || !z5 || !z6) {
                        i15 += iArr5[length3] * iArr2[i14][length3 * 2];
                    }
                    i16 += iArr5[length3];
                    length3--;
                }
                int i17 = 0;
                for (int length4 = iArr4.length - 1; length4 >= 0; length4--) {
                    if (i11 != 0 || !z5 || !z6) {
                        i17 += iArr4[length4] * iArr2[i14][(length4 * 2) + 1];
                    }
                }
                int i18 = i15 + i17;
                if ((i16 & 1) != 0 || i16 > 13 || i16 < 4) {
                    throw g.f12795i;
                }
                int i19 = (13 - i16) / 2;
                int i20 = k[i19];
                return new wj.b((jb.a.u(iArr5, i20, z12) * f20493l[i19]) + jb.a.u(iArr4, 9 - i20, false) + f20494m[i19], i18);
            }
            float f10 = (iArr[i12] * 1.0f) / L;
            int i21 = (int) (0.5f + f10);
            if (i21 <= 0) {
                if (f10 < 0.3f) {
                    throw g.f12795i;
                }
                i21 = 1;
            } else if (i21 > 8) {
                if (f10 > 8.7f) {
                    throw g.f12795i;
                }
                i21 = 8;
            }
            int i22 = i12 / 2;
            if ((i12 & 1) == 0) {
                iArr5[i22] = i21;
                fArr2[i22] = f10 - i21;
            } else {
                iArr4[i22] = i21;
                fArr[i22] = f10 - i21;
            }
            i12++;
        }
    }

    public final List o(nj.a aVar, int i5) {
        boolean z5;
        boolean z6;
        boolean z7 = false;
        while (true) {
            ArrayList arrayList = this.f20498g;
            if (z7) {
                if (j()) {
                    return arrayList;
                }
                ArrayList arrayList2 = this.f20499h;
                boolean isEmpty = arrayList2.isEmpty();
                int i6 = 0;
                boolean z8 = false;
                while (true) {
                    if (i6 >= arrayList2.size()) {
                        z5 = false;
                        break;
                    }
                    b bVar = (b) arrayList2.get(i6);
                    int i10 = bVar.f20492b;
                    ArrayList arrayList3 = bVar.a;
                    if (i10 > i5) {
                        z5 = arrayList3.equals(arrayList);
                        break;
                    }
                    z8 = arrayList3.equals(arrayList);
                    i6++;
                }
                if (!z5 && !z8) {
                    Iterator it = arrayList2.iterator();
                    loop2: while (true) {
                        if (!it.hasNext()) {
                            z6 = false;
                            break;
                        }
                        b bVar2 = (b) it.next();
                        Iterator it2 = arrayList.iterator();
                        while (it2.hasNext()) {
                            a aVar2 = (a) it2.next();
                            Iterator it3 = bVar2.a.iterator();
                            while (it3.hasNext()) {
                                if (aVar2.equals((a) it3.next())) {
                                    break;
                                }
                            }
                        }
                        z6 = true;
                        break loop2;
                    }
                    if (!z6) {
                        arrayList2.add(i6, new b(i5, arrayList));
                        Iterator it4 = arrayList2.iterator();
                        while (it4.hasNext()) {
                            b bVar3 = (b) it4.next();
                            if (bVar3.a.size() != arrayList.size()) {
                                Iterator it5 = bVar3.a.iterator();
                                while (true) {
                                    if (!it5.hasNext()) {
                                        it4.remove();
                                        break;
                                    }
                                    a aVar3 = (a) it5.next();
                                    Iterator it6 = arrayList.iterator();
                                    while (it6.hasNext()) {
                                        if (aVar3.equals((a) it6.next())) {
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (!isEmpty) {
                    List l6 = l(false);
                    if (l6 != null) {
                        return l6;
                    }
                    List l7 = l(true);
                    if (l7 != null) {
                        return l7;
                    }
                }
                throw g.f12795i;
            }
            try {
                arrayList.add(p(aVar, arrayList, i5));
            } catch (g e9) {
                if (arrayList.isEmpty()) {
                    throw e9;
                }
                z7 = true;
            }
        }
    }

    public final a p(nj.a aVar, ArrayList arrayList, int i5) {
        int i6;
        int i10;
        int i11;
        int c6;
        int i12;
        wj.c cVar;
        int[][] iArr;
        int i13;
        int i14 = 2;
        int i15 = 0;
        int i16 = 1;
        boolean z5 = arrayList.size() % 2 == 0;
        if (this.j) {
            z5 = !z5;
        }
        int i17 = -1;
        boolean z6 = true;
        while (true) {
            int[] iArr2 = this.a;
            iArr2[i15] = i15;
            iArr2[i16] = i15;
            iArr2[i14] = i15;
            int i18 = 3;
            iArr2[3] = i15;
            int i19 = aVar.f15509e;
            int i20 = i17 >= 0 ? i17 : arrayList.isEmpty() ? i15 : ((a) d.f(i16, arrayList)).f20491c.f19845b[i16];
            int i21 = arrayList.size() % i14 != 0 ? i16 : i15;
            if (this.j) {
                i21 ^= 1;
            }
            boolean z7 = i15;
            while (true) {
                if (i20 >= i19) {
                    break;
                }
                boolean a = aVar.a(i20);
                boolean z8 = !a;
                if (a) {
                    z7 = z8;
                    break;
                }
                i20++;
                z7 = z8;
            }
            int i22 = i14;
            int i23 = i15;
            boolean z10 = z7;
            int i24 = i20;
            while (i20 < i19) {
                int i25 = i15;
                if (aVar.a(i20) != z10) {
                    iArr2[i23] = iArr2[i23] + i16;
                    i6 = i16;
                    i10 = i18;
                } else {
                    if (i23 == i18) {
                        if (i21 != 0) {
                            int length = iArr2.length;
                            i10 = i18;
                            int i26 = i25;
                            while (true) {
                                i11 = i16;
                                if (i26 >= length / 2) {
                                    break;
                                }
                                int i27 = iArr2[i26];
                                int i28 = (length - i26) - 1;
                                iArr2[i26] = iArr2[i28];
                                iArr2[i28] = i27;
                                i26++;
                                i16 = i11;
                            }
                        } else {
                            i11 = i16;
                            i10 = i18;
                        }
                        if (wj.a.i(iArr2)) {
                            int[] iArr3 = this.f20500i;
                            iArr3[i25] = i24;
                            iArr3[i11] = i20;
                            if (z5) {
                                int i29 = i24 - 1;
                                while (i29 >= 0 && !aVar.a(i29)) {
                                    i29--;
                                }
                                i24 = i29 + 1;
                                i12 = iArr3[i25] - i24;
                                c6 = iArr3[i11];
                            } else {
                                c6 = aVar.c(i20 + 1);
                                i12 = c6 - iArr3[i11];
                            }
                            int i30 = c6;
                            int i31 = i24;
                            System.arraycopy(iArr2, i25, iArr2, i11, iArr2.length - 1);
                            iArr2[i25] = i12;
                            wj.b bVar = null;
                            try {
                                iArr = f20495n;
                            } catch (g unused) {
                                cVar = null;
                            }
                            for (i13 = 0; i13 < 6; i13++) {
                                if (h.d(iArr2, iArr[i13], 0.45f) < 0.2f) {
                                    cVar = new wj.c(i13, i31, i30, i5, new int[]{i31, i30});
                                    if (cVar == null) {
                                        int i32 = iArr3[0];
                                        i17 = aVar.a(i32) ? aVar.b(aVar.c(i32)) : aVar.c(aVar.b(i32));
                                    } else {
                                        z6 = false;
                                    }
                                    if (!z6) {
                                        wj.b n6 = n(aVar, cVar, z5, true);
                                        if (!arrayList.isEmpty() && ((a) d.f(1, arrayList)).f20490b == null) {
                                            throw g.f12795i;
                                        }
                                        try {
                                            bVar = n(aVar, cVar, z5, false);
                                        } catch (g unused2) {
                                        }
                                        return new a(n6, bVar, cVar);
                                    }
                                    i14 = i22;
                                    i15 = 0;
                                    i16 = 1;
                                }
                            }
                            throw g.f12795i;
                        } else {
                            if (i21 != 0) {
                                int length2 = iArr2.length;
                                for (int i33 = 0; i33 < length2 / 2; i33++) {
                                    int i34 = iArr2[i33];
                                    int i35 = (length2 - i33) - 1;
                                    iArr2[i33] = iArr2[i35];
                                    iArr2[i35] = i34;
                                }
                            }
                            i6 = 1;
                            i25 = 0;
                            i24 += iArr2[0] + iArr2[1];
                            iArr2[0] = iArr2[i22];
                            iArr2[1] = iArr2[i10];
                            iArr2[i22] = 0;
                            iArr2[i10] = 0;
                            i23--;
                        }
                    } else {
                        i6 = i16;
                        i10 = i18;
                        i23++;
                    }
                    iArr2[i23] = i6;
                    z10 = !z10;
                }
                i20++;
                i15 = i25;
                i18 = i10;
                i16 = i6;
            }
            throw g.f12795i;
        }
    }

    @Override // vj.h, jj.i
    public final void reset() {
        this.f20498g.clear();
        this.f20499h.clear();
    }
}
