package io.sentry.android.core.internal.util;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Build;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.j0;
import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;

/* loaded from: classes3.dex */
public final class i {

    /* renamed from: g, reason: collision with root package name */
    public static final Charset f11232g = Charset.forName("UTF-8");
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final j0 f11233b;

    /* renamed from: c, reason: collision with root package name */
    public final ILogger f11234c;

    /* renamed from: d, reason: collision with root package name */
    public final String[] f11235d;

    /* renamed from: e, reason: collision with root package name */
    public final String[] f11236e;

    /* renamed from: f, reason: collision with root package name */
    public final Runtime f11237f;

    public i(Context context, ILogger iLogger, j0 j0Var) {
        Runtime runtime = Runtime.getRuntime();
        this.a = context;
        d9.a.L(j0Var, "The BuildInfoProvider is required.");
        this.f11233b = j0Var;
        d9.a.L(iLogger, "The Logger is required.");
        this.f11234c = iLogger;
        this.f11235d = new String[]{"/sbin/su", "/data/local/xbin/su", "/system/bin/su", "/system/xbin/su", "/data/local/bin/su", "/system/app/Superuser.apk", "/system/sd/xbin/su", "/system/bin/failsafe/su", "/data/local/su", "/su/bin/su", "/su/bin", "/system/xbin/daemonsu"};
        this.f11236e = new String[]{"com.devadvance.rootcloak", "com.devadvance.rootcloakplus", "com.koushikdutta.superuser", "com.thirdparty.superuser", "eu.chainfire.supersu", "com.noshufou.android.su"};
        d9.a.L(runtime, "The Runtime is required.");
        this.f11237f = runtime;
    }

    /* JADX WARN: Code restructure failed: missing block: B:66:0x008e, code lost:
    
        if (0 == 0) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x0091, code lost:
    
        r4 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x007f, code lost:
    
        r2.destroy();
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x007d, code lost:
    
        if (0 == 0) goto L41;
     */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:46:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a() {
        boolean z5;
        Process exec;
        BufferedReader bufferedReader;
        this.f11233b.getClass();
        String str = Build.TAGS;
        if (str != null && str.contains("test-keys")) {
            return true;
        }
        String[] strArr = this.f11235d;
        int length = strArr.length;
        int i5 = 0;
        while (true) {
            ILogger iLogger = this.f11234c;
            if (i5 < length) {
                String str2 = strArr[i5];
                try {
                } catch (RuntimeException e9) {
                    iLogger.i(SentryLevel.ERROR, e9, "Error when trying to check if root file %s exists.", str2);
                }
                if (new File(str2).exists()) {
                    return true;
                }
                i5++;
            } else {
                Process process = null;
                try {
                    try {
                        try {
                            exec = this.f11237f.exec(new String[]{"/system/xbin/which", "su"});
                            bufferedReader = new BufferedReader(new InputStreamReader(exec.getInputStream(), f11232g));
                        } catch (IOException unused) {
                            iLogger.u(SentryLevel.DEBUG, "SU isn't found on this Device.", new Object[0]);
                        }
                    } catch (Throwable th2) {
                        iLogger.k(SentryLevel.DEBUG, "Error when trying to check if SU exists.", th2);
                    }
                    try {
                        boolean z6 = bufferedReader.readLine() != null;
                        bufferedReader.close();
                        exec.destroy();
                        if (z6) {
                            return true;
                        }
                        d9.a.L(iLogger, "The ILogger object is required.");
                        PackageManager packageManager = this.a.getPackageManager();
                        if (packageManager != null) {
                            for (String str3 : this.f11236e) {
                                try {
                                    if (Build.VERSION.SDK_INT >= 33) {
                                        packageManager.getPackageInfo(str3, PackageManager.PackageInfoFlags.of(0L));
                                    } else {
                                        packageManager.getPackageInfo(str3, 0);
                                    }
                                    z5 = true;
                                    return !z5;
                                } catch (PackageManager.NameNotFoundException unused2) {
                                }
                            }
                        }
                        z5 = false;
                        if (!z5) {
                        }
                    } catch (Throwable th3) {
                        try {
                            bufferedReader.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                        throw th3;
                    }
                } catch (Throwable th5) {
                    if (0 != 0) {
                        process.destroy();
                    }
                    throw th5;
                }
            }
        }
    }
}
