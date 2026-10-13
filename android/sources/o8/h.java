package o8;

import java.io.InputStream;
import k2.r;

/* loaded from: classes3.dex */
public abstract class h {
    public static final g a = new g(0);

    /* renamed from: b, reason: collision with root package name */
    public static final g f15794b = new g(1);

    public static void a(Boolean bool) {
        if (!bool.booleanValue()) {
            throw new IllegalArgumentException();
        }
    }

    public static void b(String str, boolean z5) {
        if (!z5) {
            throw new IllegalArgumentException(str);
        }
    }

    public static void c(boolean z5, String str, Object... objArr) {
        if (!z5) {
            throw new IllegalArgumentException(g(str, objArr));
        }
    }

    public static void d(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(String.valueOf(str));
        }
    }

    public static void e(boolean z5) {
        if (!z5) {
            throw new IllegalStateException();
        }
    }

    public static boolean f(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static String g(String str, Object... objArr) {
        int indexOf;
        StringBuilder sb2 = new StringBuilder((objArr.length * 16) + str.length());
        int i5 = 0;
        int i6 = 0;
        while (i5 < objArr.length && (indexOf = str.indexOf("%s", i6)) != -1) {
            sb2.append(str.substring(i6, indexOf));
            sb2.append(objArr[i5]);
            i6 = indexOf + 2;
            i5++;
        }
        sb2.append(str.substring(i6));
        if (i5 < objArr.length) {
            sb2.append(" [");
            sb2.append(objArr[i5]);
            for (int i10 = i5 + 1; i10 < objArr.length; i10++) {
                sb2.append(", ");
                sb2.append(objArr[i10]);
            }
            sb2.append(']');
        }
        return sb2.toString();
    }

    public static void h(Throwable th2) {
        if (Error.class.isInstance(th2)) {
            throw ((Throwable) Error.class.cast(th2));
        }
        if (!RuntimeException.class.isInstance(th2)) {
            throw new RuntimeException(th2);
        }
        throw ((Throwable) RuntimeException.class.cast(th2));
    }

    public static int i(InputStream inputStream, byte[] bArr, int i5) {
        inputStream.getClass();
        if (i5 < 0) {
            throw new IndexOutOfBoundsException("len is negative");
        }
        int i6 = 0;
        while (i6 < i5) {
            int read = inputStream.read(bArr, i6, i5 - i6);
            if (read == -1) {
                break;
            }
            i6 += read;
        }
        return i6;
    }

    public static r j(Object obj) {
        return new r(obj.getClass().getSimpleName());
    }
}
