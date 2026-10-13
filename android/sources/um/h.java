package um;

import android.content.Context;
import java.util.LinkedHashMap;
import java.util.Locale;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class h {
    public static final h a = new h();

    /* renamed from: b, reason: collision with root package name */
    public static final LinkedHashMap f18961b = new LinkedHashMap();

    public final int a(Context context, String str, String str2) {
        if (str.length() == 0) {
            return -1;
        }
        Locale locale = Locale.ROOT;
        String l6 = x.l(a3.e.o(locale, "ROOT", str, locale, "toLowerCase(...)"), "-", "_", false);
        String l7 = k0.d.l(str2, "/", l6);
        synchronized (this) {
            LinkedHashMap linkedHashMap = f18961b;
            Integer num = (Integer) linkedHashMap.get(l7);
            if (num != null) {
                return num.intValue();
            }
            int identifier = context.getResources().getIdentifier(l6, str2, context.getPackageName());
            linkedHashMap.put(l7, Integer.valueOf(identifier));
            return identifier;
        }
    }
}
