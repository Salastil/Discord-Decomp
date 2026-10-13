package com.google.android.gms.internal.gtm;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import android.util.Log;
import com.google.android.gms.common.util.VisibleForTesting;
import qe.i;

@VisibleForTesting
/* loaded from: classes3.dex */
public final class zzcf extends zzbs {
    private final zzav zza;

    public zzcf(zzbv zzbvVar) {
        super(zzbvVar);
        this.zza = new zzav();
    }

    @Override // com.google.android.gms.internal.gtm.zzbs
    public final void zzd() {
        String packageName;
        i zzq = zzq();
        if (zzq.f16884c == null) {
            synchronized (zzq) {
                try {
                } catch (PackageManager.NameNotFoundException unused) {
                    String valueOf = String.valueOf(packageName);
                    Log.e("GAv4", valueOf.length() != 0 ? "Error retrieving package info: appName set to ".concat(valueOf) : new String("Error retrieving package info: appName set to "));
                } finally {
                }
                if (zzq.f16884c == null) {
                    zzav zzavVar = new zzav();
                    PackageManager packageManager = zzq.a.getPackageManager();
                    packageName = zzq.a.getPackageName();
                    zzavVar.zzi(packageName);
                    zzavVar.zzj(packageManager.getInstallerPackageName(packageName));
                    String str = null;
                    PackageInfo packageInfo = packageManager.getPackageInfo(zzq.a.getPackageName(), 0);
                    if (packageInfo != null) {
                        CharSequence applicationLabel = packageManager.getApplicationLabel(packageInfo.applicationInfo);
                        if (!TextUtils.isEmpty(applicationLabel)) {
                            packageName = applicationLabel.toString();
                        }
                        str = packageInfo.versionName;
                    }
                    zzavVar.zzk(packageName);
                    zzavVar.zzl(str);
                    zzq.f16884c = zzavVar;
                }
            }
        }
        zzq.f16884c.zzh(this.zza);
        zzft zzB = zzB();
        zzB.zzW();
        String str2 = zzB.zzb;
        if (str2 != null) {
            this.zza.zzk(str2);
        }
        zzB.zzW();
        String str3 = zzB.zza;
        if (str3 != null) {
            this.zza.zzl(str3);
        }
    }
}
