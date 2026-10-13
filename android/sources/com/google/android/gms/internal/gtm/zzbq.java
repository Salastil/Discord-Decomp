package com.google.android.gms.internal.gtm;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import bf.t;
import qe.i;

/* loaded from: classes3.dex */
public final class zzbq extends zzbs {
    private final zzck zza;

    public zzbq(zzbv zzbvVar, zzbw zzbwVar) {
        super(zzbvVar);
        t.g(zzbwVar);
        this.zza = new zzck(zzbvVar, zzbwVar);
    }

    public final void zzc() {
        zzW();
        Context zzo = zzo();
        if (!zzfi.zza(zzo) || !zzfn.zzh(zzo)) {
            zze(null);
            return;
        }
        Intent intent = new Intent("com.google.android.gms.analytics.ANALYTICS_DISPATCH");
        intent.setComponent(new ComponentName(zzo, "com.google.android.gms.analytics.AnalyticsService"));
        zzo.startService(intent);
    }

    @Override // com.google.android.gms.internal.gtm.zzbs
    public final void zzd() {
        this.zza.zzX();
    }

    public final void zze(zzcz zzczVar) {
        zzW();
        i zzq = zzq();
        zzbo zzboVar = new zzbo(this, zzczVar);
        zzq.getClass();
        zzq.f16883b.submit(zzboVar);
    }

    public final void zzi() {
        i.a();
        this.zza.zzl();
    }

    public final void zzj() {
        i.a();
        this.zza.zzm();
    }

    public final void zzk() {
        zzW();
        i.a();
        zzck zzckVar = this.zza;
        i.a();
        zzckVar.zzW();
        zzckVar.zzO("Service disconnected");
    }

    public final void zzm() {
        this.zza.zzaa();
    }
}
