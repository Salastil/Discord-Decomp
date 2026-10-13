package ah;

import a5.k0;
import android.app.NotificationManager;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.res.ColorStateList;
import android.graphics.BlendMode;
import android.graphics.Insets;
import android.graphics.Matrix;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.ColorStateListDrawable;
import android.graphics.drawable.Drawable;
import android.media.MediaFormat;
import android.os.Binder;
import android.os.Build;
import android.os.Bundle;
import android.os.Trace;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.q;
import fo.r;
import java.util.Objects;
import jg.g;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class d {
    public static void a(Window window) {
        Objects.requireNonNull(window);
        window.getDecorView();
        k(window, false);
        window.setStatusBarColor(0);
        window.setNavigationBarColor(0);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 28) {
            int i6 = i5 >= 30 ? 3 : 1;
            WindowManager.LayoutParams attributes = window.getAttributes();
            if (attributes.layoutInDisplayCutoutMode != i6) {
                attributes.layoutInDisplayCutoutMode = i6;
                window.setAttributes(attributes);
            }
        }
        if (i5 >= 29) {
            window.setStatusBarContrastEnforced(false);
            window.setNavigationBarContrastEnforced(false);
        }
    }

    public static ColorStateList b(Drawable drawable) {
        if (drawable instanceof ColorDrawable) {
            return ColorStateList.valueOf(((ColorDrawable) drawable).getColor());
        }
        if (Build.VERSION.SDK_INT < 29 || !(drawable instanceof ColorStateListDrawable)) {
            return null;
        }
        return ((ColorStateListDrawable) drawable).getColorStateList();
    }

    public static Number c(MediaFormat format, String key) {
        Object i5;
        Object i6;
        Intrinsics.checkNotNullParameter(format, "format");
        Intrinsics.checkNotNullParameter(key, "key");
        if (!format.containsKey(key)) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return format.getNumber(key);
        }
        try {
            q qVar = Result.f13476e;
            i5 = Integer.valueOf(format.getInteger(key));
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (Result.a(i5) != null) {
            try {
                i6 = Float.valueOf(format.getFloat(key));
            } catch (Throwable th3) {
                q qVar3 = Result.f13476e;
                i6 = ki.b.i(th3);
            }
            i5 = i6;
        }
        return (Number) (i5 instanceof r ? null : i5);
    }

    public static float d(View view) {
        return view.getTransitionAlpha();
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x009f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void e(Context context) {
        boolean z5;
        Context applicationContext;
        PackageManager packageManager;
        ApplicationInfo applicationInfo;
        Bundle bundle;
        if (com.facebook.imagepipeline.nativecode.c.D(context).getBoolean("proxy_notification_initialized", false)) {
            return;
        }
        try {
            applicationContext = context.getApplicationContext();
            packageManager = applicationContext.getPackageManager();
        } catch (PackageManager.NameNotFoundException unused) {
        }
        if (packageManager != null && (applicationInfo = packageManager.getApplicationInfo(applicationContext.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)) != null && (bundle = applicationInfo.metaData) != null && bundle.containsKey("firebase_messaging_notification_delegation_enabled")) {
            z5 = applicationInfo.metaData.getBoolean("firebase_messaging_notification_delegation_enabled");
            if (Build.VERSION.SDK_INT >= 29) {
                k0.s(null);
                return;
            }
            g gVar = new g();
            try {
                if (Binder.getCallingUid() == context.getApplicationInfo().uid) {
                    SharedPreferences.Editor edit = com.facebook.imagepipeline.nativecode.c.D(context).edit();
                    edit.putBoolean("proxy_notification_initialized", true);
                    edit.apply();
                    NotificationManager notificationManager = (NotificationManager) context.getSystemService(NotificationManager.class);
                    if (z5) {
                        notificationManager.setNotificationDelegate("com.google.android.gms");
                    } else if ("com.google.android.gms".equals(notificationManager.getNotificationDelegate())) {
                        notificationManager.setNotificationDelegate(null);
                    }
                } else {
                    Log.e("FirebaseMessaging", "error configuring notification delegate for package " + context.getPackageName());
                }
                gVar.d(null);
                return;
            } catch (Throwable th2) {
                gVar.d(null);
                throw th2;
            }
        }
        z5 = true;
        if (Build.VERSION.SDK_INT >= 29) {
        }
    }

    public static boolean f() {
        return Trace.isEnabled();
    }

    public static boolean g(Context context) {
        if (Build.VERSION.SDK_INT >= 29) {
            if (Binder.getCallingUid() != context.getApplicationInfo().uid) {
                Log.e("FirebaseMessaging", "error retrieving notification delegate for package " + context.getPackageName());
                return false;
            }
            if ("com.google.android.gms".equals(((NotificationManager) context.getSystemService(NotificationManager.class)).getNotificationDelegate())) {
                if (!Log.isLoggable("FirebaseMessaging", 3)) {
                    return true;
                }
                Log.d("FirebaseMessaging", "GMS core is set for proxying");
                return true;
            }
        } else if (Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Platform doesn't support proxying.");
        }
        return false;
    }

    public static Object h(b1.a aVar) {
        switch (b1.b.a[aVar.ordinal()]) {
            case 1:
                return BlendMode.CLEAR;
            case 2:
                return BlendMode.SRC;
            case 3:
                return BlendMode.DST;
            case 4:
                return BlendMode.SRC_OVER;
            case 5:
                return BlendMode.DST_OVER;
            case 6:
                return BlendMode.SRC_IN;
            case 7:
                return BlendMode.DST_IN;
            case 8:
                return BlendMode.SRC_OUT;
            case 9:
                return BlendMode.DST_OUT;
            case 10:
                return BlendMode.SRC_ATOP;
            case 11:
                return BlendMode.DST_ATOP;
            case 12:
                return BlendMode.XOR;
            case 13:
                return BlendMode.PLUS;
            case 14:
                return BlendMode.MODULATE;
            case 15:
                return BlendMode.SCREEN;
            case 16:
                return BlendMode.OVERLAY;
            case 17:
                return BlendMode.DARKEN;
            case 18:
                return BlendMode.LIGHTEN;
            case 19:
                return BlendMode.COLOR_DODGE;
            case 20:
                return BlendMode.COLOR_BURN;
            case 21:
                return BlendMode.HARD_LIGHT;
            case 22:
                return BlendMode.SOFT_LIGHT;
            case 23:
                return BlendMode.DIFFERENCE;
            case 24:
                return BlendMode.EXCLUSION;
            case 25:
                return BlendMode.MULTIPLY;
            case 26:
                return BlendMode.HUE;
            case 27:
                return BlendMode.SATURATION;
            case 28:
                return BlendMode.COLOR;
            case 29:
                return BlendMode.LUMINOSITY;
            default:
                return null;
        }
    }

    public static Insets i(int i5, int i6, int i10, int i11) {
        return Insets.of(i5, i6, i10, i11);
    }

    public static void j(m4.a aVar, Object obj) {
        aVar.setBlendMode((BlendMode) obj);
    }

    public static void k(Window window, boolean z5) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 35) {
            z0.d.o(window, z5);
        } else {
            if (i5 >= 30) {
                z0.d.n(window, z5);
                return;
            }
            View decorView = window.getDecorView();
            int systemUiVisibility = decorView.getSystemUiVisibility();
            decorView.setSystemUiVisibility(z5 ? systemUiVisibility & (-1793) : systemUiVisibility | 1792);
        }
    }

    public static void l(View view, int i5, int i6, int i10, int i11) {
        view.setLeftTopRightBottom(i5, i6, i10, i11);
    }

    public static void m(View view, float f2) {
        view.setTransitionAlpha(f2);
    }

    public static void n(int i5, View view) {
        view.setTransitionVisibility(i5);
    }

    public static void o(ViewGroup viewGroup, boolean z5) {
        viewGroup.suppressLayout(z5);
    }

    public static void p(View view, Matrix matrix) {
        view.transformMatrixToGlobal(matrix);
    }

    public static void q(View view, Matrix matrix) {
        view.transformMatrixToLocal(matrix);
    }
}
