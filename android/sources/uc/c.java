package uc;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import ke.w;

/* loaded from: classes3.dex */
public final class c extends bq.b {

    /* renamed from: i, reason: collision with root package name */
    public long f18846i;

    /* renamed from: v, reason: collision with root package name */
    public long[] f18847v;

    /* renamed from: w, reason: collision with root package name */
    public long[] f18848w;

    public static HashMap A0(w wVar) {
        int x5 = wVar.x();
        HashMap hashMap = new HashMap(x5);
        for (int i5 = 0; i5 < x5; i5++) {
            String B0 = B0(wVar);
            Serializable z02 = z0(wVar.u(), wVar);
            if (z02 != null) {
                hashMap.put(B0, z02);
            }
        }
        return hashMap;
    }

    public static String B0(w wVar) {
        int z5 = wVar.z();
        int i5 = wVar.f13363b;
        wVar.G(z5);
        return new String(wVar.a, i5, z5);
    }

    public static Serializable z0(int i5, w wVar) {
        if (i5 == 0) {
            return Double.valueOf(Double.longBitsToDouble(wVar.o()));
        }
        if (i5 == 1) {
            return Boolean.valueOf(wVar.u() == 1);
        }
        if (i5 == 2) {
            return B0(wVar);
        }
        if (i5 != 3) {
            if (i5 == 8) {
                return A0(wVar);
            }
            if (i5 != 10) {
                if (i5 != 11) {
                    return null;
                }
                Date date = new Date((long) Double.longBitsToDouble(wVar.o()));
                wVar.G(2);
                return date;
            }
            int x5 = wVar.x();
            ArrayList arrayList = new ArrayList(x5);
            for (int i6 = 0; i6 < x5; i6++) {
                Serializable z02 = z0(wVar.u(), wVar);
                if (z02 != null) {
                    arrayList.add(z02);
                }
            }
            return arrayList;
        }
        HashMap hashMap = new HashMap();
        while (true) {
            String B0 = B0(wVar);
            int u5 = wVar.u();
            if (u5 == 9) {
                return hashMap;
            }
            Serializable z03 = z0(u5, wVar);
            if (z03 != null) {
                hashMap.put(B0, z03);
            }
        }
    }
}
