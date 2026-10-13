package c5;

import android.util.Log;
import java.util.Locale;

/* loaded from: classes.dex */
public abstract class v {
    public static final boolean a = Log.isLoggable("Volley", 2);

    /* renamed from: b, reason: collision with root package name */
    public static final String f3359b = v.class.getName();

    public static String a(String str, Object... objArr) {
        String str2;
        String format = String.format(Locale.US, str, objArr);
        StackTraceElement[] stackTrace = new Throwable().fillInStackTrace().getStackTrace();
        int i5 = 2;
        while (true) {
            if (i5 >= stackTrace.length) {
                str2 = "<unknown>";
                break;
            }
            if (!stackTrace[i5].getClassName().equals(f3359b)) {
                String className = stackTrace[i5].getClassName();
                String substring = className.substring(className.lastIndexOf(46) + 1);
                StringBuilder p3 = k0.d.p(substring.substring(substring.lastIndexOf(36) + 1), ".");
                p3.append(stackTrace[i5].getMethodName());
                str2 = p3.toString();
                break;
            }
            i5++;
        }
        Locale locale = Locale.US;
        long id2 = Thread.currentThread().getId();
        StringBuilder sb2 = new StringBuilder("[");
        sb2.append(id2);
        sb2.append("] ");
        sb2.append(str2);
        return com.discord.chat.bridge.botuikit.a.j(sb2, ": ", format);
    }

    public static void b(String str, Object... objArr) {
        Log.d("Volley", a(str, objArr));
    }

    public static void c(String str, Object... objArr) {
        Log.e("Volley", a(str, objArr));
    }

    public static void d(String str, Object... objArr) {
        if (a) {
            Log.v("Volley", a(str, objArr));
        }
    }
}
