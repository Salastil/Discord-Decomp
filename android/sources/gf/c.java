package gf;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Build;
import android.util.Base64;

/* loaded from: classes3.dex */
public abstract class c {
    public static final char[] a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    /* renamed from: b, reason: collision with root package name */
    public static Boolean f9234b;

    /* renamed from: c, reason: collision with root package name */
    public static Boolean f9235c;

    /* renamed from: d, reason: collision with root package name */
    public static Boolean f9236d;

    /* renamed from: e, reason: collision with root package name */
    public static Boolean f9237e;

    public static byte[] a(String str) {
        if (str == null) {
            return null;
        }
        return Base64.decode(str, 11);
    }

    public static String b(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        return Base64.encodeToString(bArr, 11);
    }

    public static boolean c() {
        return Build.VERSION.SDK_INT >= 26;
    }

    public static boolean d(Context context) {
        PackageManager packageManager = context.getPackageManager();
        if (f9234b == null) {
            f9234b = Boolean.valueOf(packageManager.hasSystemFeature("android.hardware.type.watch"));
        }
        f9234b.booleanValue();
        if (f9235c == null) {
            f9235c = Boolean.valueOf(context.getPackageManager().hasSystemFeature("cn.google"));
        }
        if (f9235c.booleanValue()) {
            return !c() || Build.VERSION.SDK_INT >= 30;
        }
        return false;
    }
}
