package ak;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class b {
    public final HashMap a = new HashMap();

    public final int[] a() {
        ArrayList arrayList = new ArrayList();
        int i5 = -1;
        for (Map.Entry entry : this.a.entrySet()) {
            if (((Integer) entry.getValue()).intValue() > i5) {
                i5 = ((Integer) entry.getValue()).intValue();
                arrayList.clear();
                arrayList.add(entry.getKey());
            } else if (((Integer) entry.getValue()).intValue() == i5) {
                arrayList.add(entry.getKey());
            }
        }
        return zj.a.a(arrayList);
    }

    public final void b(int i5) {
        Integer valueOf = Integer.valueOf(i5);
        HashMap hashMap = this.a;
        Integer num = (Integer) hashMap.get(valueOf);
        if (num == null) {
            num = 0;
        }
        hashMap.put(Integer.valueOf(i5), Integer.valueOf(num.intValue() + 1));
    }
}
