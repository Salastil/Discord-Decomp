package y0;

import a1.i;
import a1.j;
import a1.n;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.LocusId;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.os.Build;
import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import android.util.SparseArray;
import android.util.TypedValue;
import androidx.core.app.NotificationManagerCompat;
import java.util.WeakHashMap;
import s4.h;

/* loaded from: classes.dex */
public abstract class b {
    public static final Object a = null;

    public static int a(Context context, String str) {
        if (str != null) {
            return (Build.VERSION.SDK_INT >= 33 || !TextUtils.equals("android.permission.POST_NOTIFICATIONS", str)) ? context.checkPermission(str, Process.myPid(), Process.myUid()) : new NotificationManagerCompat(context).f1480b.areNotificationsEnabled() ? 0 : -1;
        }
        throw new NullPointerException("permission must be non-null");
    }

    public static LocusId b(String str) {
        return new LocusId(str);
    }

    /* JADX WARN: Code restructure failed: missing block: B:55:0x0047, code lost:
    
        if (r5.f26c == r8.hashCode()) goto L21;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ColorStateList c(Context context, int i5) {
        ColorStateList colorStateList;
        ColorStateList colorStateList2;
        i iVar;
        Resources resources = context.getResources();
        Resources.Theme theme = context.getTheme();
        j jVar = new j(resources, theme);
        synchronized (n.f35c) {
            try {
                SparseArray sparseArray = (SparseArray) n.f34b.get(jVar);
                colorStateList = null;
                if (sparseArray != null && sparseArray.size() > 0 && (iVar = (i) sparseArray.get(i5)) != null) {
                    if (iVar.f25b.equals(resources.getConfiguration())) {
                        if (theme == null) {
                            if (iVar.f26c != 0) {
                            }
                            colorStateList2 = iVar.a;
                        }
                        if (theme != null) {
                        }
                    }
                    sparseArray.remove(i5);
                }
                colorStateList2 = null;
            } finally {
            }
        }
        if (colorStateList2 != null) {
            return colorStateList2;
        }
        ThreadLocal threadLocal = n.a;
        TypedValue typedValue = (TypedValue) threadLocal.get();
        if (typedValue == null) {
            typedValue = new TypedValue();
            threadLocal.set(typedValue);
        }
        resources.getValue(i5, typedValue, true);
        int i6 = typedValue.type;
        if (i6 < 28 || i6 > 31) {
            try {
                colorStateList = a1.c.a(resources, resources.getXml(i5), theme);
            } catch (Exception e9) {
                Log.w("ResourcesCompat", "Failed to inflate ColorStateList, leaving it to the framework", e9);
            }
        }
        if (colorStateList == null) {
            return resources.getColorStateList(i5, theme);
        }
        synchronized (n.f35c) {
            try {
                WeakHashMap weakHashMap = n.f34b;
                SparseArray sparseArray2 = (SparseArray) weakHashMap.get(jVar);
                if (sparseArray2 == null) {
                    sparseArray2 = new SparseArray();
                    weakHashMap.put(jVar, sparseArray2);
                }
                sparseArray2.append(i5, new i(colorStateList, jVar.a.getConfiguration(), theme));
            } finally {
            }
        }
        return colorStateList;
    }

    public static String d(LocusId locusId) {
        return locusId.getId();
    }

    public static String e(Context context) {
        String str = context.getApplicationContext().getPackageName() + ".DYNAMIC_RECEIVER_NOT_EXPORTED_PERMISSION";
        if (d.a(context, str) == 0) {
            return str;
        }
        if (Build.VERSION.SDK_INT >= 29) {
            str = context.getOpPackageName() + ".DYNAMIC_RECEIVER_NOT_EXPORTED_PERMISSION";
            if (d.a(context, str) == 0) {
                return str;
            }
        }
        throw new RuntimeException(h.f("Permission ", str, " is required by your application to receive broadcasts, please add it to your manifest"));
    }

    public static Intent f(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter, String str, int i5) {
        int i6 = i5 & 2;
        if (i6 == 0 && (i5 & 4) == 0) {
            throw new IllegalArgumentException("One of either RECEIVER_EXPORTED or RECEIVER_NOT_EXPORTED is required");
        }
        if (i6 != 0 && (i5 & 4) != 0) {
            throw new IllegalArgumentException("Cannot specify both RECEIVER_EXPORTED and RECEIVER_NOT_EXPORTED");
        }
        int i10 = Build.VERSION.SDK_INT;
        return i10 >= 33 ? a.b(context, broadcastReceiver, intentFilter, str, i5) : i10 >= 26 ? a.a(context, broadcastReceiver, intentFilter, str, i5) : ((i5 & 4) == 0 || str != null) ? context.registerReceiver(broadcastReceiver, intentFilter, str, null) : context.registerReceiver(broadcastReceiver, intentFilter, e(context), null);
    }
}
