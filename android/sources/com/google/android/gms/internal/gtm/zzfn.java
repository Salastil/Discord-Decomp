package com.google.android.gms.internal.gtm;

import android.annotation.TargetApi;
import android.app.job.JobParameters;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.os.Handler;
import bf.t;
import com.google.android.gms.internal.gtm.zzfm;
import ig.a;

/* loaded from: classes3.dex */
public final class zzfn<T extends Context & zzfm> {
    private static Boolean zza;
    private final Handler zzb;
    private final T zzc;

    public zzfn(T t5) {
        t.g(t5);
        this.zzc = t5;
        this.zzb = new zzga();
    }

    public static boolean zzh(Context context) {
        t.g(context);
        Boolean bool = zza;
        if (bool != null) {
            return bool.booleanValue();
        }
        boolean z5 = false;
        try {
            ServiceInfo serviceInfo = context.getPackageManager().getServiceInfo(new ComponentName(context, "com.google.android.gms.analytics.AnalyticsService"), 0);
            if (serviceInfo != null) {
                if (serviceInfo.enabled) {
                    z5 = true;
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        zza = Boolean.valueOf(z5);
        return z5;
    }

    public final int zza(Intent intent, int i5, final int i6) {
        try {
            synchronized (zzfi.zza) {
                try {
                    a aVar = zzfi.zzb;
                    if (aVar != null && aVar.b()) {
                        aVar.c();
                    }
                } finally {
                }
            }
        } catch (SecurityException unused) {
        }
        zzbv zzg = zzbv.zzg(this.zzc);
        final zzfb zzm = zzg.zzm();
        if (intent == null) {
            zzm.zzR("AnalyticsService started with null intent");
            return 2;
        }
        String action = intent.getAction();
        zzg.zzj();
        zzm.zzQ("Local AnalyticsService called. startId, action", Integer.valueOf(i6), action);
        if ("com.google.android.gms.analytics.ANALYTICS_DISPATCH".equals(action)) {
            zzg(new Runnable() { // from class: com.google.android.gms.internal.gtm.zzfj
                @Override // java.lang.Runnable
                public final void run() {
                    zzfn.this.zzc(i6, zzm);
                }
            });
        }
        return 2;
    }

    public final /* synthetic */ void zzc(int i5, zzfb zzfbVar) {
        if (this.zzc.callServiceStopSelfResult(i5)) {
            zzfbVar.zzO("Local AnalyticsService processed last dispatch request");
        }
    }

    public final /* synthetic */ void zzd(zzfb zzfbVar, JobParameters jobParameters) {
        zzfbVar.zzO("AnalyticsJobService processed last dispatch request");
        this.zzc.zza(jobParameters, false);
    }

    public final void zze() {
        zzbv zzg = zzbv.zzg(this.zzc);
        zzfb zzm = zzg.zzm();
        zzg.zzj();
        zzm.zzO("Local AnalyticsService is starting up");
    }

    public final void zzf() {
        zzbv zzg = zzbv.zzg(this.zzc);
        zzfb zzm = zzg.zzm();
        zzg.zzj();
        zzm.zzO("Local AnalyticsService is shutting down");
    }

    public final void zzg(Runnable runnable) {
        zzbv.zzg(this.zzc).zzf().zze(new zzfl(this, runnable));
    }

    @TargetApi(24)
    public final boolean zzi(final JobParameters jobParameters) {
        zzbv zzg = zzbv.zzg(this.zzc);
        final zzfb zzm = zzg.zzm();
        String string = jobParameters.getExtras().getString("action");
        zzg.zzj();
        zzm.zzP("Local AnalyticsJobService called. action", string);
        if (!"com.google.android.gms.analytics.ANALYTICS_DISPATCH".equals(string)) {
            return true;
        }
        zzg(new Runnable() { // from class: com.google.android.gms.internal.gtm.zzfk
            @Override // java.lang.Runnable
            public final void run() {
                zzfn.this.zzd(zzm, jobParameters);
            }
        });
        return true;
    }
}
