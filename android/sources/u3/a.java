package u3;

import android.os.Build;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a {
    public static final /* synthetic */ a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static final String f18793b;

    static {
        String simpleName = b.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
        f18793b = simpleName;
    }

    public static b a() {
        int i5 = Build.VERSION.SDK_INT;
        return i5 >= 30 ? d.f18802b : i5 >= 29 ? c.f18796e : i5 >= 28 ? c.f18795d : c.f18794c;
    }
}
