package androidx.lifecycle;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public final class b {
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f2173b;

    public b(HashMap hashMap) {
        this.f2173b = hashMap;
        for (Map.Entry entry : hashMap.entrySet()) {
            n nVar = (n) entry.getValue();
            List list = (List) this.a.get(nVar);
            if (list == null) {
                list = new ArrayList();
                this.a.put(nVar, list);
            }
            list.add((c) entry.getKey());
        }
    }

    public static void a(List list, LifecycleOwner lifecycleOwner, n nVar, Object obj) {
        if (list != null) {
            for (int size = list.size() - 1; size >= 0; size--) {
                c cVar = (c) list.get(size);
                Method method = cVar.f2174b;
                try {
                    int i5 = cVar.a;
                    if (i5 == 0) {
                        method.invoke(obj, null);
                    } else if (i5 == 1) {
                        method.invoke(obj, lifecycleOwner);
                    } else if (i5 == 2) {
                        method.invoke(obj, lifecycleOwner, nVar);
                    }
                } catch (IllegalAccessException e9) {
                    throw new RuntimeException(e9);
                } catch (InvocationTargetException e10) {
                    throw new RuntimeException("Failed to call observer method", e10.getCause());
                }
            }
        }
    }
}
