package androidx.datastore.preferences.protobuf;

import java.util.Collections;
import java.util.Map;

/* loaded from: classes.dex */
public final class l {
    public static volatile l a;

    /* renamed from: b, reason: collision with root package name */
    public static final l f1774b;

    static {
        try {
            Class.forName("androidx.datastore.preferences.protobuf.Extension");
        } catch (ClassNotFoundException unused) {
        }
        l lVar = new l();
        Map map = Collections.EMPTY_MAP;
        f1774b = lVar;
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
                    if (cls != null) {
                        try {
                            lVar = (l) cls.getDeclaredMethod("getEmptyRegistry", null).invoke(null, null);
                        } catch (Exception unused) {
                        }
                        a = lVar;
                    }
                    lVar = f1774b;
                    a = lVar;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return lVar;
    }
}
