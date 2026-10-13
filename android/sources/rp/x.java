package rp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class x {
    public static final hq.c a;

    /* renamed from: b, reason: collision with root package name */
    public static final hq.b f17494b;

    static {
        hq.c cVar = new hq.c("kotlin.jvm.JvmField");
        a = cVar;
        ta.a.K(cVar);
        ta.a.K(new hq.c("kotlin.reflect.jvm.internal.ReflectionFactoryImpl"));
        f17494b = ta.a.v("kotlin/jvm/internal/RepeatableContainer", false);
    }

    public static final String a(String propertyName) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        if (c(propertyName)) {
            return propertyName;
        }
        return "get" + com.facebook.imagepipeline.nativecode.c.i(propertyName);
    }

    public static final String b(String propertyName) {
        String i5;
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        StringBuilder sb2 = new StringBuilder("set");
        if (c(propertyName)) {
            i5 = propertyName.substring(2);
            Intrinsics.checkNotNullExpressionValue(i5, "substring(...)");
        } else {
            i5 = com.facebook.imagepipeline.nativecode.c.i(propertyName);
        }
        sb2.append(i5);
        return sb2.toString();
    }

    public static final boolean c(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        if (kotlin.text.x.o(name, "is", false) && name.length() != 2) {
            char charAt = name.charAt(2);
            if (Intrinsics.compare(97, (int) charAt) > 0 || Intrinsics.compare((int) charAt, 122) > 0) {
                return true;
            }
        }
        return false;
    }
}
