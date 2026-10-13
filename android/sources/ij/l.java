package ij;

import java.util.Collections;
import java.util.Map;

/* loaded from: classes3.dex */
public final class l {
    public static volatile l a;

    /* renamed from: b, reason: collision with root package name */
    public static final l f10904b;

    static {
        l lVar = new l();
        Map map = Collections.EMPTY_MAP;
        f10904b = lVar;
    }

    public static l a() {
        l lVar;
        l lVar2 = a;
        if (lVar2 != null) {
            return lVar2;
        }
        synchronized (l.class) {
            try {
                lVar = a;
                if (lVar == null) {
                    Class cls = k.a;
                    l lVar3 = null;
                    if (cls != null) {
                        try {
                            lVar3 = (l) cls.getDeclaredMethod("getEmptyRegistry", null).invoke(null, null);
                        } catch (Exception unused) {
                        }
                    }
                    lVar = lVar3 != null ? lVar3 : f10904b;
                    a = lVar;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return lVar;
    }
}
