package com.google.android.gms.analytics;

import android.app.Service;
import android.app.job.JobParameters;
import android.content.Intent;
import android.os.IBinder;
import com.google.android.gms.internal.gtm.zzfm;
import com.google.android.gms.internal.gtm.zzfn;

/* loaded from: classes3.dex */
public final class AnalyticsService extends Service implements zzfm {

    /* renamed from: d, reason: collision with root package name */
    public zzfn f5616d;

    public final zzfn a() {
        if (this.f5616d == null) {
            this.f5616d = new zzfn(this);
        }
        return this.f5616d;
    }

    @Override // com.google.android.gms.internal.gtm.zzfm
    public final boolean callServiceStopSelfResult(int i5) {
        return stopSelfResult(i5);
    }

    @Override // android.app.Service
    public final IBinder onBind(Intent intent) {
        a();
        return null;
    }

    @Override // android.app.Service
    public final void onCreate() {
        super.onCreate();
        a().zze();
    }

    @Override // android.app.Service
    public final void onDestroy() {
        a().zzf();
        super.onDestroy();
    }

    @Override // android.app.Service
    public final int onStartCommand(Intent intent, int i5, int i6) {
        a().zza(intent, i5, i6);
        return 2;
    }

    @Override // com.google.android.gms.internal.gtm.zzfm
    public final void zza(JobParameters jobParameters, boolean z5) {
        throw new UnsupportedOperationException();
    }
}
