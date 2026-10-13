package com.google.android.gms.internal.play_billing;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public final class i1 extends e2 {
    private static final i1 zzb;
    private i2 zzd = w2.f5870w;

    static {
        i1 i1Var = new i1();
        zzb = i1Var;
        e2.f(i1.class, i1Var);
    }

    public static h1 r() {
        return (h1) zzb.k();
    }

    public static void s(i1 i1Var, ArrayList arrayList) {
        i2 i2Var = i1Var.zzd;
        if (!((q1) i2Var).f5812d) {
            int size = i2Var.size();
            i1Var.zzd = i2Var.l(size + size);
        }
        List list = i1Var.zzd;
        int size2 = arrayList.size();
        if (list instanceof ArrayList) {
            ((ArrayList) list).ensureCapacity(list.size() + size2);
        } else if (list instanceof w2) {
            w2 w2Var = (w2) list;
            int i5 = w2Var.f5872i + size2;
            int length = w2Var.f5871e.length;
            if (i5 > length) {
                if (length != 0) {
                    while (length < i5) {
                        length = Math.max(((length * 3) / 2) + 1, 10);
                    }
                    w2Var.f5871e = Arrays.copyOf(w2Var.f5871e, length);
                } else {
                    w2Var.f5871e = new Object[Math.max(i5, 10)];
                }
            }
        }
        int size3 = list.size();
        int size4 = arrayList.size();
        for (int i6 = 0; i6 < size4; i6++) {
            Object obj = arrayList.get(i6);
            if (obj == null) {
                String e9 = s4.h.e(list.size() - size3, "Element at index ", " is null.");
                int size5 = list.size();
                while (true) {
                    size5--;
                    if (size5 < size3) {
                        throw new NullPointerException(e9);
                    }
                    list.remove(size5);
                }
            } else {
                list.add(obj);
            }
        }
    }

    @Override // com.google.android.gms.internal.play_billing.e2
    public final Object j(int i5) {
        int i6 = i5 - 1;
        if (i6 == 0) {
            return (byte) 1;
        }
        if (i6 == 2) {
            return new x2(zzb, "\u0004\u0001\u0000\u0000\u0001\u0001\u0001\u0000\u0001\u0000\u0001\u001b", new Object[]{"zzd", g1.class});
        }
        if (i6 == 3) {
            return new i1();
        }
        if (i6 == 4) {
            return new h1(zzb);
        }
        if (i6 == 5) {
            return zzb;
        }
        throw null;
    }
}
