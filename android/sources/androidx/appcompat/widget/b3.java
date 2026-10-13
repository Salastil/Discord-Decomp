package androidx.appcompat.widget;

import android.os.Build;
import java.lang.reflect.Method;

/* loaded from: classes.dex */
public final class b3 {
    public Method a;

    /* renamed from: b, reason: collision with root package name */
    public Method f925b;

    /* renamed from: c, reason: collision with root package name */
    public Method f926c;

    public /* synthetic */ b3(Method method, Method method2, Method method3) {
        this.a = method;
        this.f925b = method2;
        this.f926c = method3;
    }

    public static void a() {
        if (Build.VERSION.SDK_INT >= 29) {
            throw new UnsupportedClassVersionError("This function can only be used for API Level < 29.");
        }
    }
}
