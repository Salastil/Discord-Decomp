package v3;

import android.util.Log;

/* loaded from: classes.dex */
public final class p {

    /* renamed from: b, reason: collision with root package name */
    public static final Object f19210b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static volatile p f19211c;
    public final int a;

    public p(int i5) {
        this.a = i5;
    }

    public static p d() {
        p pVar;
        synchronized (f19210b) {
            try {
                if (f19211c == null) {
                    f19211c = new p(3);
                }
                pVar = f19211c;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return pVar;
    }

    public static String f(String str) {
        int length = str.length();
        StringBuilder sb2 = new StringBuilder(23);
        sb2.append("WM-");
        if (length >= 20) {
            sb2.append(str.substring(0, 20));
        } else {
            sb2.append(str);
        }
        return sb2.toString();
    }

    public final void a(String str, String str2) {
        if (this.a <= 3) {
            Log.d(str, str2);
        }
    }

    public final void b(String str, String str2) {
        if (this.a <= 6) {
            Log.e(str, str2);
        }
    }

    public final void c(String str, String str2, Throwable th2) {
        if (this.a <= 6) {
            Log.e(str, str2, th2);
        }
    }

    public final void e(String str, String str2) {
        if (this.a <= 4) {
            Log.i(str, str2);
        }
    }

    public final void g(String str, String str2) {
        if (this.a <= 5) {
            Log.w(str, str2);
        }
    }
}
