package ye;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import bf.t;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.common.GooglePlayServicesIncorrectManifestValueException;
import com.google.android.gms.common.GooglePlayServicesMissingManifestValueException;

/* loaded from: classes3.dex */
public class f {
    public static final int a;

    /* renamed from: b, reason: collision with root package name */
    public static final f f20919b;

    static {
        int i5 = i.f20923e;
        a = 12451000;
        f20919b = new f();
    }

    public static void c(Context context) {
        int i5 = i.f20923e;
        f fVar = f20919b;
        int b10 = fVar.b(context, 11925000);
        if (b10 != 0) {
            Intent a10 = fVar.a(context, "e", b10);
            StringBuilder sb2 = new StringBuilder(String.valueOf(b10).length() + 46);
            sb2.append("GooglePlayServices not available due to error ");
            sb2.append(b10);
            Log.e("GooglePlayServicesUtil", sb2.toString());
            if (a10 != null) {
                throw new h("Google Play Services not available");
            }
            throw new g();
        }
    }

    public Intent a(Context context, String str, int i5) {
        if (i5 != 1 && i5 != 2) {
            if (i5 != 3) {
                return null;
            }
            Uri fromParts = Uri.fromParts("package", "com.google.android.gms", null);
            Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
            intent.setData(fromParts);
            return intent;
        }
        if (context != null && gf.c.d(context)) {
            Intent intent2 = new Intent("com.google.android.clockwork.home.UPDATE_ANDROID_WEAR_ACTION");
            intent2.setPackage("com.google.android.wearable.app");
            return intent2;
        }
        StringBuilder sb2 = new StringBuilder("gcore_");
        sb2.append(a);
        sb2.append("-");
        if (!TextUtils.isEmpty(str)) {
            sb2.append(str);
        }
        sb2.append("-");
        if (context != null) {
            sb2.append(context.getPackageName());
        }
        sb2.append("-");
        if (context != null) {
            try {
                jf.b a10 = jf.c.a(context);
                sb2.append(a10.a.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode);
            } catch (PackageManager.NameNotFoundException unused) {
            }
        }
        String sb3 = sb2.toString();
        Intent intent3 = new Intent("android.intent.action.VIEW");
        Uri.Builder appendQueryParameter = Uri.parse("market://details").buildUpon().appendQueryParameter(StackTraceHelper.ID_KEY, "com.google.android.gms");
        if (!TextUtils.isEmpty(sb3)) {
            appendQueryParameter.appendQueryParameter("pcampaignid", sb3);
        }
        intent3.setData(appendQueryParameter.build());
        intent3.setPackage("com.android.vending");
        intent3.addFlags(KeyCommandDescriptor.ModifierFlags.ALTERNATE);
        return intent3;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(22:0|1|2|3|4|(4:8|2d|15|(2:17|(2:19|20))(2:22|23))|38|(4:40|(3:42|(1:44)(1:46)|45)|47|(13:49|(1:51)(1:111)|52|(4:103|104|(1:106)(1:109)|107)(1:54)|55|56|(1:58)(1:101)|59|60|(1:62)(2:(2:72|(1:74))|(4:80|(1:82)(1:99)|(1:84)|(1:86)(4:87|(2:93|94)|89|(1:91)(1:92)))(1:79))|63|(1:(1:66)(1:67))|(1:69)(1:70)))|112|(0)(0)|52|(0)(0)|55|56|(0)(0)|59|60|(0)(0)|63|(0)|(0)(0)|(1:(0))) */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x020b, code lost:
    
        android.util.Log.w("GooglePlayServicesUtil", java.lang.String.valueOf(r3).concat(" requires Google Play services, but they are missing."));
     */
    /* JADX WARN: Removed duplicated region for block: B:101:0x012f  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0104 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:111:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00f0  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0126  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x012b  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0220  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x022a A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:70:0x022b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0151  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int b(Context context, int i5) {
        boolean z5;
        int i6;
        PackageInfo packageInfo;
        PackageInfo packageInfo2;
        Bundle bundle;
        int i10 = i.f20923e;
        try {
            context.getResources().getString(R.string.common_google_play_services_unknown_issue);
        } catch (Throwable unused) {
            Log.e("GooglePlayServicesUtil", "The Google Play services resources were not found. Check your project configuration to ensure that the resources are included.");
        }
        if (!"com.google.android.gms".equals(context.getPackageName()) && !i.f20922d.get()) {
            synchronized (t.a) {
                try {
                    if (!t.f2919b) {
                        t.f2919b = true;
                        try {
                            bundle = jf.c.a(context).a.getPackageManager().getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData;
                        } catch (PackageManager.NameNotFoundException e9) {
                            Log.wtf("MetadataValueReader", "This should never happen.", e9);
                        }
                        if (bundle != null) {
                            bundle.getString("com.google.app.id");
                            t.f2920c = bundle.getInt("com.google.android.gms.version");
                        }
                    }
                } finally {
                }
            }
            int i11 = t.f2920c;
            if (i11 == 0) {
                throw new GooglePlayServicesMissingManifestValueException();
            }
            if (i11 != 12451000) {
                int i12 = a;
                StringBuilder sb2 = new StringBuilder(String.valueOf(i12).length() + 104 + String.valueOf(i11).length() + 194);
                sb2.append("The meta-data tag in your app's AndroidManifest.xml does not have the right value.  Expected ");
                sb2.append(i12);
                sb2.append(" but found ");
                sb2.append(i11);
                sb2.append(".  You must have the following declaration within the <application> element:     <meta-data android:name=\"com.google.android.gms.version\" android:value=\"@integer/google_play_services_version\" />");
                throw new GooglePlayServicesIncorrectManifestValueException(sb2.toString());
            }
        }
        if (!gf.c.d(context)) {
            if (gf.c.f9236d == null) {
                gf.c.f9236d = Boolean.valueOf(gf.c.c() ? context.getPackageManager().hasSystemFeature("android.hardware.type.embedded") : context.getPackageManager().hasSystemFeature("android.hardware.type.iot"));
            }
            if (!gf.c.f9236d.booleanValue()) {
                z5 = true;
                t.b(i5 < 0);
                String packageName = context.getPackageName();
                PackageManager packageManager = context.getPackageManager();
                i6 = 9;
                if (z5) {
                    packageInfo = null;
                } else {
                    try {
                        packageInfo = packageManager.getPackageInfo("com.android.vending", Build.VERSION.SDK_INT >= 28 ? 134225984 : 8256);
                    } catch (PackageManager.NameNotFoundException unused2) {
                        Log.w("GooglePlayServicesUtil", String.valueOf(packageName).concat(" requires the Google Play Store, but it is missing."));
                    }
                }
                packageInfo2 = packageManager.getPackageInfo("com.google.android.gms", Build.VERSION.SDK_INT < 28 ? 134217792 : 64);
                j.a(context);
                if (j.b(packageInfo2, true)) {
                    Log.w("GooglePlayServicesUtil", String.valueOf(packageName).concat(" requires Google Play services, but their signature is invalid."));
                } else {
                    if (z5) {
                        t.g(packageInfo);
                        if (!j.b(packageInfo, true)) {
                            Log.w("GooglePlayServicesUtil", String.valueOf(packageName).concat(" requires Google Play Store, but its signature is invalid."));
                        }
                    }
                    if (!z5 || packageInfo == null || packageInfo.signatures[0].equals(packageInfo2.signatures[0])) {
                        int i13 = packageInfo2.versionCode;
                        if ((i13 == -1 ? -1 : i13 / 1000) < (i5 != -1 ? i5 / 1000 : -1)) {
                            StringBuilder sb3 = new StringBuilder(String.valueOf(packageName).length() + 49 + String.valueOf(i5).length() + 11 + String.valueOf(i13).length());
                            sb3.append("Google Play services out of date for ");
                            sb3.append(packageName);
                            sb3.append(".  Requires ");
                            sb3.append(i5);
                            sb3.append(" but found ");
                            sb3.append(i13);
                            Log.w("GooglePlayServicesUtil", sb3.toString());
                            i6 = 2;
                        } else {
                            ApplicationInfo applicationInfo = packageInfo2.applicationInfo;
                            if (applicationInfo == null) {
                                try {
                                    applicationInfo = packageManager.getApplicationInfo("com.google.android.gms", 0);
                                } catch (PackageManager.NameNotFoundException e10) {
                                    Log.wtf("GooglePlayServicesUtil", String.valueOf(packageName).concat(" requires Google Play services, but they're missing when getting application info."), e10);
                                    i6 = 1;
                                    if (i6 != 18 ? i6 == 1 ? i.a(context) : false : true) {
                                    }
                                }
                            }
                            i6 = !applicationInfo.enabled ? 3 : 0;
                        }
                    } else {
                        Log.w("GooglePlayServicesUtil", String.valueOf(packageName).concat(" requires Google Play Store, but its signature doesn't match that of Google Play services."));
                    }
                }
                if (i6 != 18 ? i6 == 1 ? i.a(context) : false : true) {
                    return 18;
                }
                return i6;
            }
        }
        z5 = false;
        t.b(i5 < 0);
        String packageName2 = context.getPackageName();
        PackageManager packageManager2 = context.getPackageManager();
        i6 = 9;
        if (z5) {
        }
        packageInfo2 = packageManager2.getPackageInfo("com.google.android.gms", Build.VERSION.SDK_INT < 28 ? 134217792 : 64);
        j.a(context);
        if (j.b(packageInfo2, true)) {
        }
        if (i6 != 18 ? i6 == 1 ? i.a(context) : false : true) {
        }
    }
}
