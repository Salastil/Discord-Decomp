package u2;

import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import qa.s;
import s4.h;

/* loaded from: classes.dex */
public final class a {
    public final s a = new s();

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f18790b = new LinkedHashMap();

    /* renamed from: c, reason: collision with root package name */
    public final LinkedHashSet f18791c = new LinkedHashSet();

    /* renamed from: d, reason: collision with root package name */
    public volatile boolean f18792d;

    public static void a(AutoCloseable autoCloseable) {
        if (autoCloseable != null) {
            try {
                h.l(autoCloseable);
            } catch (Exception e9) {
                throw new RuntimeException(e9);
            }
        }
    }
}
