package gc;

import android.util.SparseArray;
import java.util.HashMap;
import tb.d;

/* loaded from: classes3.dex */
public abstract class a {
    public static final SparseArray a = new SparseArray();

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f9146b;

    static {
        HashMap hashMap = new HashMap();
        f9146b = hashMap;
        hashMap.put(d.f18249d, 0);
        hashMap.put(d.f18250e, 1);
        hashMap.put(d.f18251i, 2);
        for (d dVar : hashMap.keySet()) {
            a.append(((Integer) f9146b.get(dVar)).intValue(), dVar);
        }
    }

    public static int a(d dVar) {
        Integer num = (Integer) f9146b.get(dVar);
        if (num != null) {
            return num.intValue();
        }
        throw new IllegalStateException("PriorityMapping is missing known Priority value " + dVar);
    }

    public static d b(int i5) {
        d dVar = (d) a.get(i5);
        if (dVar != null) {
            return dVar;
        }
        throw new IllegalArgumentException(k0.d.i(i5, "Unknown Priority for value "));
    }
}
