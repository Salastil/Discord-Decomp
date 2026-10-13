package p8;

import a3.e;
import android.util.Log;

/* loaded from: classes3.dex */
public final class b implements c {

    /* renamed from: b, reason: collision with root package name */
    public static final b f16317b;
    public int a;

    static {
        b bVar = new b();
        bVar.a = 5;
        f16317b = bVar;
    }

    public static void a(int i5, String str, String str2) {
        Log.println(i5, "unknown:" + str, str2);
    }

    public static void b(int i5, String str, String str2, Throwable th2) {
        String k = e.k("unknown:", str);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str2);
        sb2.append('\n');
        sb2.append(th2 == null ? "" : Log.getStackTraceString(th2));
        Log.println(i5, k, sb2.toString());
    }

    @Override // p8.c
    public final void d(String str, String str2) {
        a(3, str, str2);
    }

    @Override // p8.c
    public final void e(String str, String str2) {
        a(6, str, str2);
    }

    @Override // p8.c
    public final void i(String str, String str2) {
        a(4, str, str2);
    }

    @Override // p8.c
    public final boolean isLoggable(int i5) {
        return this.a <= i5;
    }

    @Override // p8.c
    public final void v(String str, String str2) {
        a(2, str, str2);
    }

    @Override // p8.c
    public final void w(String str, String str2) {
        a(5, str, str2);
    }

    @Override // p8.c
    public final void wtf(String str, String str2) {
        a(6, str, str2);
    }

    @Override // p8.c
    public final void d(String str, String str2, Throwable th2) {
        b(3, str, str2, th2);
    }

    @Override // p8.c
    public final void e(String str, String str2, Throwable th2) {
        b(6, str, str2, th2);
    }

    @Override // p8.c
    public final void w(String str, String str2, Throwable th2) {
        b(5, str, str2, th2);
    }

    @Override // p8.c
    public final void wtf(String str, String str2, Throwable th2) {
        b(6, str, "unhandled exception", th2);
    }
}
