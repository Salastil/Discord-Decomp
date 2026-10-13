package fm;

import android.content.Context;
import kotlin.jvm.internal.Reflection;

/* loaded from: classes3.dex */
public final class g {
    public static final g a = new g();

    /* renamed from: b, reason: collision with root package name */
    public static volatile boolean f8779b;

    /* renamed from: c, reason: collision with root package name */
    public static volatile String f8780c;

    /* renamed from: d, reason: collision with root package name */
    public static Context f8781d;

    public static String a(Throwable th2) {
        String simpleName = Reflection.getOrCreateKotlinClass(th2.getClass()).getSimpleName();
        if (simpleName == null) {
            simpleName = "Unknown";
        }
        String message = th2.getMessage();
        if (message == null) {
            message = th2.toString();
        }
        return k0.d.l(simpleName, ": ", message);
    }
}
