package th;

import android.content.Context;

/* loaded from: classes3.dex */
public abstract class m0 {
    public static e4.i a;

    /* renamed from: b, reason: collision with root package name */
    public static final io.sentry.hints.j f18509b;

    /* renamed from: c, reason: collision with root package name */
    public static final l8.a f18510c;

    static {
        int i5 = 18;
        f18509b = new io.sentry.hints.j(i5);
        f18510c = new l8.a(i5);
    }

    public static int a(byte[] bArr, int i5) {
        return ((bArr[i5 + 1] & 255) << 8) | (bArr[i5] & 255);
    }

    public static synchronized e4.i b(Context context) {
        e4.i iVar;
        synchronized (m0.class) {
            try {
                if (a == null) {
                    Context applicationContext = context.getApplicationContext();
                    if (applicationContext != null) {
                        context = applicationContext;
                    }
                    a = new e4.i(new di.p(context));
                }
                iVar = a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return iVar;
    }

    public static boolean c(int i5) {
        return i5 == 2 || i5 == 7 || i5 == 3;
    }

    public static boolean d(int i5, int i6) {
        if (i5 == 5) {
            if (i6 != 5) {
                return true;
            }
            i5 = 5;
        }
        if (i5 == 6) {
            if (i6 != 6 && i6 != 5) {
                return true;
            }
            i5 = 6;
        }
        if (i5 == 4 && i6 != 4) {
            return true;
        }
        if (i5 == 3 && (i6 == 2 || i6 == 7 || i6 == 1 || i6 == 8)) {
            return true;
        }
        if (i5 == 2) {
            return i6 == 1 || i6 == 8;
        }
        return false;
    }
}
