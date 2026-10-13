package com.google.android.gms.internal.gtm;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class zzft extends zzbs {
    protected String zza;
    protected String zzb;
    protected boolean zzc;
    protected int zzd;
    protected boolean zze;
    protected boolean zzf;

    public zzft(zzbv zzbvVar) {
        super(zzbvVar);
    }

    public final boolean zzc() {
        zzW();
        return this.zzf;
    }

    @Override // com.google.android.gms.internal.gtm.zzbs
    public final void zzd() {
        ApplicationInfo applicationInfo;
        int i5;
        Context zzo = zzo();
        try {
            applicationInfo = zzo.getPackageManager().getApplicationInfo(zzo.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        } catch (PackageManager.NameNotFoundException e9) {
            zzS("PackageManager doesn't know about the app package", e9);
            applicationInfo = null;
        }
        if (applicationInfo == null) {
            zzR("Couldn't get ApplicationInfo to load global config");
            return;
        }
        Bundle bundle = applicationInfo.metaData;
        if (bundle == null || (i5 = bundle.getInt("com.google.android.gms.analytics.globalConfigResource")) <= 0) {
            return;
        }
        zzbv zzt = zzt();
        zzew zzewVar = (zzew) new zzcs(zzt, new zzev(zzt)).zza(i5);
        if (zzewVar != null) {
            zzO("Loading global XML config values");
            String str = zzewVar.zza;
            if (str != null) {
                this.zzb = str;
                zzG("XML config - app name", str);
            }
            String str2 = zzewVar.zzb;
            if (str2 != null) {
                this.zza = str2;
                zzG("XML config - app version", str2);
            }
            String str3 = zzewVar.zzc;
            if (str3 != null) {
                String lowerCase = str3.toLowerCase(Locale.US);
                int i6 = "verbose".equals(lowerCase) ? 0 : "info".equals(lowerCase) ? 1 : "warning".equals(lowerCase) ? 2 : "error".equals(lowerCase) ? 3 : -1;
                if (i6 >= 0) {
                    zzP("XML config - log level", Integer.valueOf(i6));
                }
            }
            int i10 = zzewVar.zzd;
            if (i10 >= 0) {
                this.zzd = i10;
                this.zzc = true;
                zzG("XML config - dispatch period (sec)", Integer.valueOf(i10));
            }
            int i11 = zzewVar.zze;
            if (i11 != -1) {
                boolean z5 = 1 == i11;
                this.zzf = z5;
                this.zze = true;
                zzG("XML config - dry run", Boolean.valueOf(z5));
            }
        }
    }

    public final boolean zze() {
        zzW();
        return this.zze;
    }

    public final boolean zzf() {
        zzW();
        return false;
    }
}
