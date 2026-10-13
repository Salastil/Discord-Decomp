package vj;

import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.EnumMap;
import jj.l;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f19438c = {1, 1, 2};
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f19439b;

    public j(int i5) {
        switch (i5) {
            case 1:
                this.a = new ArrayList();
                this.f19439b = new ArrayList();
                break;
            default:
                this.a = new i(1);
                this.f19439b = new i(0);
                break;
        }
    }

    public void a(int[] iArr, String str) {
        ((ArrayList) this.a).add(iArr);
        ((ArrayList) this.f19439b).add(str);
    }

    public Result b(int i5, int i6, nj.a aVar) {
        EnumMap enumMap;
        int[] l6 = k.l(aVar, i6, false, f19438c, new int[3]);
        try {
            return ((i) this.f19439b).a(i5, aVar, l6);
        } catch (jj.j unused) {
            i iVar = (i) this.a;
            StringBuilder sb2 = iVar.f19437b;
            sb2.setLength(0);
            int[] iArr = iVar.a;
            iArr[0] = 0;
            iArr[1] = 0;
            iArr[2] = 0;
            iArr[3] = 0;
            int i10 = aVar.f15509e;
            int i11 = l6[1];
            int i12 = 0;
            for (int i13 = 0; i13 < 2 && i11 < i10; i13++) {
                int h6 = k.h(aVar, iArr, i11, k.f19443g);
                sb2.append((char) ((h6 % 10) + 48));
                for (int i14 : iArr) {
                    i11 += i14;
                }
                if (h6 >= 10) {
                    i12 |= 1 << (1 - i13);
                }
                if (i13 != 1) {
                    i11 = aVar.c(aVar.b(i11));
                }
            }
            if (sb2.length() != 2) {
                throw jj.g.f12795i;
            }
            if (Integer.parseInt(sb2.toString()) % 4 != i12) {
                throw jj.g.f12795i;
            }
            String sb3 = sb2.toString();
            if (sb3.length() != 2) {
                enumMap = null;
            } else {
                enumMap = new EnumMap(jj.k.class);
                enumMap.put((EnumMap) jj.k.f12806v, (jj.k) Integer.valueOf(sb3));
            }
            float f2 = i5;
            Result result = new Result(sb3, null, new l[]{new l((l6[0] + l6[1]) / 2.0f, f2), new l(i11, f2)}, jj.a.N);
            if (enumMap != null) {
                result.a(enumMap);
            }
            return result;
        }
    }
}
