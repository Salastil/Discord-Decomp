package com.google.android.gms.internal.gtm;

import android.os.Looper;
import qe.i;

/* loaded from: classes3.dex */
final class zzcv implements Runnable {
    final /* synthetic */ zzcw zza;

    public zzcv(zzcw zzcwVar) {
        this.zza = zzcwVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        zzbv zzbvVar;
        if (Looper.myLooper() == Looper.getMainLooper()) {
            zzbvVar = this.zza.zzb;
            i zzd = zzbvVar.zzd();
            zzd.getClass();
            zzd.f16883b.submit(this);
            return;
        }
        boolean zzh = this.zza.zzh();
        this.zza.zzd = 0L;
        if (zzh) {
            this.zza.zza();
        }
    }
}
