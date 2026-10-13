package io.sentry.android.core;

import android.app.ActivityManager;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.LocaleList;
import android.os.SystemClock;
import android.util.DisplayMetrics;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.v5;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Collections;
import java.util.Date;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class o0 {

    /* renamed from: i, reason: collision with root package name */
    public static volatile o0 f11271i;
    public static final io.sentry.util.a j = new io.sentry.util.a();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final SentryAndroidOptions f11272b;

    /* renamed from: c, reason: collision with root package name */
    public final j0 f11273c;

    /* renamed from: d, reason: collision with root package name */
    public final Boolean f11274d;

    /* renamed from: e, reason: collision with root package name */
    public final a3.n f11275e;

    /* renamed from: f, reason: collision with root package name */
    public final a5.h0 f11276f;

    /* renamed from: g, reason: collision with root package name */
    public final io.sentry.protocol.o f11277g;

    /* renamed from: h, reason: collision with root package name */
    public final Long f11278h;

    /* JADX WARN: Removed duplicated region for block: B:22:0x00d0  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00e7  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0108  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0111  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00d9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public o0(Context context, SentryAndroidOptions sentryAndroidOptions) {
        String str;
        a3.n nVar;
        PackageInfo g6;
        a5.h0 h0Var;
        ActivityManager.MemoryInfo e9;
        Bundle bundle;
        PackageInfo g10;
        PackageManager packageManager;
        this.a = context;
        this.f11272b = sentryAndroidOptions;
        this.f11273c = new j0(sentryAndroidOptions.getLogger());
        io.sentry.android.core.internal.util.f.f11223c.a();
        io.sentry.protocol.o oVar = new io.sentry.protocol.o();
        oVar.f11846d = "Android";
        oVar.f11847e = Build.VERSION.RELEASE;
        oVar.f11849v = Build.DISPLAY;
        ILogger logger = sentryAndroidOptions.getLogger();
        String property = System.getProperty("os.version");
        File file = new File("/proc/version");
        if (file.canRead()) {
            try {
                BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
                try {
                    String readLine = bufferedReader.readLine();
                    bufferedReader.close();
                    property = readLine;
                } finally {
                }
            } catch (IOException e10) {
                logger.k(SentryLevel.ERROR, "Exception while attempting to read kernel information", e10);
            }
        }
        if (property != null) {
            oVar.f11850w = property;
        }
        if (sentryAndroidOptions.isEnableRootCheck()) {
            oVar.f11851x = Boolean.valueOf(new io.sentry.android.core.internal.util.i(this.a, sentryAndroidOptions.getLogger(), this.f11273c).a());
        }
        this.f11277g = oVar;
        this.f11274d = this.f11273c.a();
        ILogger logger2 = sentryAndroidOptions.getLogger();
        boolean z5 = false;
        try {
            g10 = k0.g(context, this.f11273c);
            packageManager = context.getPackageManager();
        } catch (IllegalArgumentException unused) {
            str = null;
        }
        if (g10 != null && packageManager != null) {
            str = g10.packageName;
            try {
                String installerPackageName = packageManager.getInstallerPackageName(str);
                nVar = new a3.n(installerPackageName == null, installerPackageName);
            } catch (IllegalArgumentException unused2) {
                logger2.u(SentryLevel.DEBUG, "%s package isn't installed.", str);
                nVar = null;
                this.f11275e = nVar;
                j0 j0Var = this.f11273c;
                j0Var.getClass();
                if (Build.VERSION.SDK_INT >= 33) {
                }
                g6 = k0.g(context, j0Var);
                if (g6 != null) {
                }
                this.f11276f = h0Var;
                e9 = k0.e(context, sentryAndroidOptions.getLogger());
                if (e9 != null) {
                }
            }
            this.f11275e = nVar;
            j0 j0Var2 = this.f11273c;
            j0Var2.getClass();
            ApplicationInfo applicationInfo = Build.VERSION.SDK_INT >= 33 ? (ApplicationInfo) k0.f11261d.a(context) : (ApplicationInfo) k0.f11262e.a(context);
            g6 = k0.g(context, j0Var2);
            if (g6 != null) {
                String[] strArr = g6.splitNames;
                if (applicationInfo != null && (bundle = applicationInfo.metaData) != null) {
                    z5 = bundle.getBoolean("com.android.vending.splits.required");
                }
                h0Var = new a5.h0(strArr, z5);
            } else {
                h0Var = null;
            }
            this.f11276f = h0Var;
            e9 = k0.e(context, sentryAndroidOptions.getLogger());
            if (e9 != null) {
                this.f11278h = Long.valueOf(e9.totalMem);
                return;
            } else {
                this.f11278h = null;
                return;
            }
        }
        nVar = null;
        this.f11275e = nVar;
        j0 j0Var22 = this.f11273c;
        j0Var22.getClass();
        if (Build.VERSION.SDK_INT >= 33) {
        }
        g6 = k0.g(context, j0Var22);
        if (g6 != null) {
        }
        this.f11276f = h0Var;
        e9 = k0.e(context, sentryAndroidOptions.getLogger());
        if (e9 != null) {
        }
    }

    public static Float b(Intent intent, v5 v5Var) {
        try {
            int intExtra = intent.getIntExtra("level", -1);
            int intExtra2 = intent.getIntExtra("scale", -1);
            if (intExtra != -1 && intExtra2 != -1) {
                return Float.valueOf((intExtra / intExtra2) * 100.0f);
            }
            return null;
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error getting device battery level.", th2);
            return null;
        }
    }

    public static o0 c(Context context, SentryAndroidOptions sentryAndroidOptions) {
        if (f11271i == null) {
            io.sentry.r a = j.a();
            try {
                if (f11271i == null) {
                    Context applicationContext = context.getApplicationContext();
                    if (applicationContext != null) {
                        context = applicationContext;
                    }
                    f11271i = new o0(context, sentryAndroidOptions);
                }
                a.close();
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        return f11271i;
    }

    public static Boolean d(Intent intent, v5 v5Var) {
        try {
            int intExtra = intent.getIntExtra("plugged", -1);
            boolean z5 = true;
            if (intExtra != 1 && intExtra != 2) {
                z5 = false;
            }
            return Boolean.valueOf(z5);
        } catch (Throwable th2) {
            v5Var.getLogger().k(SentryLevel.ERROR, "Error getting device charging state.", th2);
            return null;
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(30:0|1|(1:3)|4|5|6|(1:8)|(1:(21:11|(3:77|78|79)|13|(1:15)|16|17|18|(1:20)|21|22|23|(1:25)(1:70)|26|(3:64|65|66)|28|(1:30)|31|(1:33)|34|(8:38|(6:40|41|42|(2:44|45)|47|45)|50|(1:(1:53))(1:61)|54|(1:57)|58|(1:60))|62)(1:83))(1:86)|84|(0)|13|(0)|16|17|18|(0)|21|22|23|(0)(0)|26|(0)|28|(0)|31|(0)|34|(9:36|38|(0)|50|(0)(0)|54|(1:57)|58|(0))|62|(1:(0))) */
    /* JADX WARN: Can't wrap try/catch for region: R(30:0|1|(1:3)|4|5|6|8|(1:(21:11|(3:77|78|79)|13|(1:15)|16|17|18|(1:20)|21|22|23|(1:25)(1:70)|26|(3:64|65|66)|28|(1:30)|31|(1:33)|34|(8:38|(6:40|41|42|(2:44|45)|47|45)|50|(1:(1:53))(1:61)|54|(1:57)|58|(1:60))|62)(1:83))(1:86)|84|(0)|13|(0)|16|17|18|(0)|21|22|23|(0)(0)|26|(0)|28|(0)|31|(0)|34|(9:36|38|(0)|50|(0)(0)|54|(1:57)|58|(0))|62|(1:(0))) */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x00dc, code lost:
    
        r8 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x00dd, code lost:
    
        r2.getLogger().i(io.sentry.SentryLevel.ERROR, r8, "Error getting the device's boot time.", new java.lang.Object[0]);
        r8 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x00a3, code lost:
    
        r9 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x00a4, code lost:
    
        r8.k(io.sentry.SentryLevel.ERROR, "Error getting DisplayMetrics.", r9);
        r8 = null;
     */
    /* JADX WARN: Removed duplicated region for block: B:15:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x00ae  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0143  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0155  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0175  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x018c  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01cb  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0201  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x01d1  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x011a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x010c  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x006d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final io.sentry.protocol.f a(boolean z5, boolean z6) {
        io.sentry.protocol.e eVar;
        Boolean bool;
        DisplayMetrics displayMetrics;
        String str;
        ArrayList a;
        Intent j5;
        int i5;
        ActivityManager.MemoryInfo e9;
        Float f2;
        int intExtra;
        int i6;
        String str2;
        String str3;
        Context context = this.a;
        io.sentry.protocol.f fVar = new io.sentry.protocol.f();
        fVar.f11781e = Build.MANUFACTURER;
        fVar.f11784i = Build.BRAND;
        SentryAndroidOptions sentryAndroidOptions = this.f11272b;
        fVar.f11785v = k0.d(sentryAndroidOptions.getLogger());
        fVar.f11786w = Build.MODEL;
        fVar.f11787x = Build.ID;
        fVar.f11788y = Build.SUPPORTED_ABIS;
        j0 j0Var = this.f11273c;
        j0Var.getClass();
        if (Build.VERSION.SDK_INT >= 31) {
            StringBuilder sb2 = new StringBuilder();
            str2 = Build.SOC_MANUFACTURER;
            sb2.append(str2);
            sb2.append(" ");
            str3 = Build.SOC_MODEL;
            sb2.append(str3);
            fVar.f11782e0 = sb2.toString();
        }
        Boolean bool2 = null;
        try {
            i6 = context.getResources().getConfiguration().orientation;
        } catch (Throwable th2) {
            th = th2;
        }
        try {
        } catch (Throwable th3) {
            th = th3;
            eVar = null;
            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting device orientation.", th);
            fVar.H = eVar;
            bool = this.f11274d;
            if (bool != null) {
            }
            ILogger logger = sentryAndroidOptions.getLogger();
            displayMetrics = context.getResources().getDisplayMetrics();
            if (displayMetrics != null) {
            }
            Date date = ki.b.s(System.currentTimeMillis() - SystemClock.elapsedRealtime());
            fVar.V = date;
            LocaleList locales = context.getResources().getConfiguration().getLocales();
            fVar.W = locales.isEmpty() ? Calendar.getInstance(locales.get(0)).getTimeZone() : Calendar.getInstance().getTimeZone();
            if (fVar.X == null) {
            }
            Locale locale = Locale.getDefault();
            if (fVar.Y == null) {
            }
            a = io.sentry.android.core.internal.util.f.f11223c.a();
            if (!a.isEmpty()) {
            }
            fVar.J = this.f11278h;
            if (z5) {
            }
            return fVar;
        }
        if (i6 == 1) {
            eVar = io.sentry.protocol.e.PORTRAIT;
        } else {
            if (i6 != 2) {
                eVar = null;
                if (eVar == null) {
                    try {
                        sentryAndroidOptions.getLogger().u(SentryLevel.INFO, "No device orientation available (ORIENTATION_SQUARE|ORIENTATION_UNDEFINED)", new Object[0]);
                        eVar = null;
                    } catch (Throwable th4) {
                        th = th4;
                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting device orientation.", th);
                        fVar.H = eVar;
                        bool = this.f11274d;
                        if (bool != null) {
                        }
                        ILogger logger2 = sentryAndroidOptions.getLogger();
                        displayMetrics = context.getResources().getDisplayMetrics();
                        if (displayMetrics != null) {
                        }
                        Date date2 = ki.b.s(System.currentTimeMillis() - SystemClock.elapsedRealtime());
                        fVar.V = date2;
                        LocaleList locales2 = context.getResources().getConfiguration().getLocales();
                        fVar.W = locales2.isEmpty() ? Calendar.getInstance(locales2.get(0)).getTimeZone() : Calendar.getInstance().getTimeZone();
                        if (fVar.X == null) {
                        }
                        Locale locale2 = Locale.getDefault();
                        if (fVar.Y == null) {
                        }
                        a = io.sentry.android.core.internal.util.f.f11223c.a();
                        if (!a.isEmpty()) {
                        }
                        fVar.J = this.f11278h;
                        if (z5) {
                        }
                        return fVar;
                    }
                }
                fVar.H = eVar;
                bool = this.f11274d;
                if (bool != null) {
                    fVar.I = bool;
                }
                ILogger logger22 = sentryAndroidOptions.getLogger();
                displayMetrics = context.getResources().getDisplayMetrics();
                if (displayMetrics != null) {
                    fVar.R = Integer.valueOf(displayMetrics.widthPixels);
                    fVar.S = Integer.valueOf(displayMetrics.heightPixels);
                    fVar.T = Float.valueOf(displayMetrics.density);
                    fVar.U = Integer.valueOf(displayMetrics.densityDpi);
                }
                Date date22 = ki.b.s(System.currentTimeMillis() - SystemClock.elapsedRealtime());
                fVar.V = date22;
                LocaleList locales22 = context.getResources().getConfiguration().getLocales();
                fVar.W = locales22.isEmpty() ? Calendar.getInstance(locales22.get(0)).getTimeZone() : Calendar.getInstance().getTimeZone();
                if (fVar.X == null) {
                    try {
                        str = (String) sentryAndroidOptions.getRuntimeManager().i(new hc.m(13, this));
                    } catch (Throwable th5) {
                        sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting installationId.", th5);
                        str = null;
                    }
                    fVar.X = str;
                }
                Locale locale22 = Locale.getDefault();
                if (fVar.Y == null) {
                    fVar.Y = locale22.toString();
                }
                a = io.sentry.android.core.internal.util.f.f11223c.a();
                if (!a.isEmpty()) {
                    fVar.f11778c0 = Double.valueOf(((Integer) Collections.max(a)).doubleValue());
                    fVar.f11777b0 = Integer.valueOf(a.size());
                }
                fVar.J = this.f11278h;
                if (z5 && sentryAndroidOptions.isCollectAdditionalContext()) {
                    boolean isCollectExternalStorageContext = sentryAndroidOptions.isCollectExternalStorageContext();
                    j5 = k0.j(context, j0Var, null, new IntentFilter("android.intent.action.BATTERY_CHANGED"), null);
                    if (j5 != null) {
                        fVar.E = b(j5, sentryAndroidOptions);
                        fVar.F = d(j5, sentryAndroidOptions);
                        try {
                            intExtra = j5.getIntExtra("temperature", -1);
                        } catch (Throwable th6) {
                            sentryAndroidOptions.getLogger().k(SentryLevel.ERROR, "Error getting battery temperature.", th6);
                        }
                        if (intExtra != -1) {
                            f2 = Float.valueOf(intExtra / 10.0f);
                            fVar.a0 = f2;
                        }
                        f2 = null;
                        fVar.a0 = f2;
                    }
                    i5 = n0.a[sentryAndroidOptions.getConnectionStatusProvider().I().ordinal()];
                    if (i5 != 1) {
                        bool2 = Boolean.FALSE;
                    } else if (i5 == 2) {
                        bool2 = Boolean.TRUE;
                    }
                    fVar.G = bool2;
                    e9 = k0.e(context, sentryAndroidOptions.getLogger());
                    if (e9 != null && z6) {
                        fVar.K = Long.valueOf(e9.availMem);
                        fVar.M = Boolean.valueOf(e9.lowMemory);
                    }
                    sentryAndroidOptions.getRuntimeManager().c(new com.discord.chat.presentation.message.view.z(this, fVar, isCollectExternalStorageContext));
                    if (fVar.Z == null) {
                        fVar.Z = sentryAndroidOptions.getConnectionStatusProvider().s();
                    }
                }
                return fVar;
            }
            eVar = io.sentry.protocol.e.LANDSCAPE;
        }
        if (eVar == null) {
        }
        fVar.H = eVar;
        bool = this.f11274d;
        if (bool != null) {
        }
        ILogger logger222 = sentryAndroidOptions.getLogger();
        displayMetrics = context.getResources().getDisplayMetrics();
        if (displayMetrics != null) {
        }
        Date date222 = ki.b.s(System.currentTimeMillis() - SystemClock.elapsedRealtime());
        fVar.V = date222;
        LocaleList locales222 = context.getResources().getConfiguration().getLocales();
        fVar.W = locales222.isEmpty() ? Calendar.getInstance(locales222.get(0)).getTimeZone() : Calendar.getInstance().getTimeZone();
        if (fVar.X == null) {
        }
        Locale locale222 = Locale.getDefault();
        if (fVar.Y == null) {
        }
        a = io.sentry.android.core.internal.util.f.f11223c.a();
        if (!a.isEmpty()) {
        }
        fVar.J = this.f11278h;
        if (z5) {
            boolean isCollectExternalStorageContext2 = sentryAndroidOptions.isCollectExternalStorageContext();
            j5 = k0.j(context, j0Var, null, new IntentFilter("android.intent.action.BATTERY_CHANGED"), null);
            if (j5 != null) {
            }
            i5 = n0.a[sentryAndroidOptions.getConnectionStatusProvider().I().ordinal()];
            if (i5 != 1) {
            }
            fVar.G = bool2;
            e9 = k0.e(context, sentryAndroidOptions.getLogger());
            if (e9 != null) {
                fVar.K = Long.valueOf(e9.availMem);
                fVar.M = Boolean.valueOf(e9.lowMemory);
            }
            sentryAndroidOptions.getRuntimeManager().c(new com.discord.chat.presentation.message.view.z(this, fVar, isCollectExternalStorageContext2));
            if (fVar.Z == null) {
            }
        }
        return fVar;
    }
}
