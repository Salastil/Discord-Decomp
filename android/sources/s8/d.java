package s8;

import java.util.IdentityHashMap;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: d, reason: collision with root package name */
    public static final IdentityHashMap f17824d = new IdentityHashMap();
    public Object a;

    /* renamed from: b, reason: collision with root package name */
    public int f17825b;

    /* renamed from: c, reason: collision with root package name */
    public final c f17826c;

    public d(Object obj, c cVar, boolean z5) {
        obj.getClass();
        this.a = obj;
        this.f17826c = cVar;
        this.f17825b = 1;
        if (z5) {
            IdentityHashMap identityHashMap = f17824d;
            synchronized (identityHashMap) {
                try {
                    Integer num = (Integer) identityHashMap.get(obj);
                    if (num == null) {
                        identityHashMap.put(obj, 1);
                    } else {
                        identityHashMap.put(obj, Integer.valueOf(num.intValue() + 1));
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public final synchronized Object a() {
        return this.a;
    }
}
