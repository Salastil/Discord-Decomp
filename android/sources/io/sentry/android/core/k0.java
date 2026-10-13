package io.sentry.android.core;

import android.app.ActivityManager;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Handler;
import androidx.recyclerview.widget.RecyclerView;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes3.dex */
public abstract class k0 {
    public static final io.sentry.android.core.util.a a = new io.sentry.android.core.util.a(new i7.a(17));

    /* renamed from: b, reason: collision with root package name */
    public static final io.sentry.android.core.util.a f11259b = new io.sentry.android.core.util.a(new i7.a(18));

    /* renamed from: c, reason: collision with root package name */
    public static final io.sentry.android.core.util.a f11260c = new io.sentry.android.core.util.a(new i7.a(19));

    /* renamed from: d, reason: collision with root package name */
    public static final io.sentry.android.core.util.a f11261d = new io.sentry.android.core.util.a(new i7.a(20));

    /* renamed from: e, reason: collision with root package name */
    public static final io.sentry.android.core.util.a f11262e = new io.sentry.android.core.util.a(new i7.a(21));

    public static /* synthetic */ ApplicationInfo a(Context context) {
        try {
            return context.getPackageManager().getApplicationInfo(context.getPackageName(), PackageManager.ApplicationInfoFlags.of(128L));
        } catch (Throwable unused) {
            return null;
        }
    }

    public static /* synthetic */ PackageInfo b(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), PackageManager.PackageInfoFlags.of(0L));
        } catch (Throwable unused) {
            return null;
        }
    }

    public static boolean c(Context context) {
        if (!context.getPackageName().endsWith(".test")) {
            return false;
        }
        try {
            Iterator<ActivityManager.AppTask> it = ((ActivityManager) context.getSystemService("activity")).getAppTasks().iterator();
            while (it.hasNext()) {
                ComponentName component = it.next().getTaskInfo().baseIntent.getComponent();
                if (component != null && component.getClassName().equals("androidx.compose.ui.tooling.PreviewActivity")) {
                    return true;
                }
            }
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static String d(ILogger iLogger) {
        try {
            return Build.MODEL.split(" ", -1)[0];
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "Error getting device family.", th2);
            return null;
        }
    }

    public static ActivityManager.MemoryInfo e(Context context, ILogger iLogger) {
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            if (activityManager != null) {
                activityManager.getMemoryInfo(memoryInfo);
                return memoryInfo;
            }
            iLogger.u(SentryLevel.INFO, "Error getting MemoryInfo.", new Object[0]);
            return null;
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "Error getting MemoryInfo.", th2);
            return null;
        }
    }

    public static PackageInfo f(Context context, ILogger iLogger, j0 j0Var) {
        try {
            j0Var.getClass();
            return Build.VERSION.SDK_INT >= 33 ? context.getPackageManager().getPackageInfo(context.getPackageName(), PackageManager.PackageInfoFlags.of(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT)) : context.getPackageManager().getPackageInfo(context.getPackageName(), RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
        } catch (Throwable th2) {
            iLogger.k(SentryLevel.ERROR, "Error getting package info.", th2);
            return null;
        }
    }

    public static PackageInfo g(Context context, j0 j0Var) {
        j0Var.getClass();
        return Build.VERSION.SDK_INT >= 33 ? (PackageInfo) a.a(context) : (PackageInfo) f11259b.a(context);
    }

    public static String h(PackageInfo packageInfo, j0 j0Var) {
        j0Var.getClass();
        return Build.VERSION.SDK_INT >= 28 ? Long.toString(packageInfo.getLongVersionCode()) : Integer.toString(packageInfo.versionCode);
    }

    public static boolean i() {
        try {
            ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
            ActivityManager.getMyMemoryState(runningAppProcessInfo);
            return runningAppProcessInfo.importance == 100;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static Intent j(Context context, j0 j0Var, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter, Handler handler) {
        j0Var.getClass();
        return Build.VERSION.SDK_INT >= 33 ? context.registerReceiver(broadcastReceiver, intentFilter, null, handler, 4) : context.registerReceiver(broadcastReceiver, intentFilter, null, handler);
    }

    public static void k(PackageInfo packageInfo, j0 j0Var, o0 o0Var, io.sentry.protocol.a aVar) {
        aVar.f11748d = packageInfo.packageName;
        aVar.f11753x = packageInfo.versionName;
        aVar.f11754y = h(packageInfo, j0Var);
        HashMap hashMap = new HashMap();
        String[] strArr = packageInfo.requestedPermissions;
        int[] iArr = packageInfo.requestedPermissionsFlags;
        if (strArr != null && strArr.length > 0 && iArr != null && iArr.length > 0) {
            for (int i5 = 0; i5 < strArr.length; i5++) {
                String str = strArr[i5];
                hashMap.put(str.substring(str.lastIndexOf(46) + 1), (iArr[i5] & 2) == 2 ? "granted" : "not_granted");
            }
        }
        aVar.E = hashMap;
        if (o0Var != null) {
            try {
                a5.h0 h0Var = o0Var.f11276f;
                if (h0Var != null) {
                    aVar.I = Boolean.valueOf(h0Var.f175e);
                    String[] strArr2 = (String[]) h0Var.f176i;
                    if (strArr2 != null) {
                        aVar.J = Arrays.asList(strArr2);
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }
}
