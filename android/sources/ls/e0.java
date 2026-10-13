package ls;

import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public abstract class e0 {
    public static final c0 a = new c0();

    /* renamed from: b, reason: collision with root package name */
    public static final c0 f14228b = new c0();

    /* renamed from: c, reason: collision with root package name */
    public static final c0 f14229c = new c0();

    /* renamed from: d, reason: collision with root package name */
    public static final c0 f14230d = new c0();

    /* renamed from: e, reason: collision with root package name */
    public static final ConcurrentHashMap f14231e = new ConcurrentHashMap();

    /* renamed from: f, reason: collision with root package name */
    public static final ConcurrentHashMap f14232f = new ConcurrentHashMap();

    public static e0 a(Locale locale) {
        ConcurrentHashMap concurrentHashMap;
        int b10 = f0.e.b(1);
        if (b10 == 0) {
            concurrentHashMap = f14231e;
        } else {
            if (b10 != 1) {
                throw new UnsupportedOperationException("CARDINALS");
            }
            concurrentHashMap = f14232f;
        }
        e0 e0Var = null;
        if (!concurrentHashMap.isEmpty()) {
            if (!locale.getCountry().equals("")) {
                e0Var = (e0) concurrentHashMap.get(locale.getLanguage() + '_' + locale.getCountry());
            }
            if (e0Var == null) {
                e0Var = (e0) concurrentHashMap.get(locale.getLanguage());
            }
        }
        return e0Var == null ? d0.a.a(locale) : e0Var;
    }
}
