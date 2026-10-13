package oo;

import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class a {

    @NotNull
    public static final a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static final Integer f16146b;

    static {
        Integer num;
        Object obj;
        Integer num2 = null;
        try {
            obj = Class.forName("android.os.Build$VERSION").getField("SDK_INT").get(null);
        } catch (Throwable unused) {
        }
        if (obj instanceof Integer) {
            num = (Integer) obj;
            if (num != null && num.intValue() > 0) {
                num2 = num;
            }
            f16146b = num2;
        }
        num = null;
        if (num != null) {
            num2 = num;
        }
        f16146b = num2;
    }
}
