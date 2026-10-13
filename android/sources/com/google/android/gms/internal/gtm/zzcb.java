package com.google.android.gms.internal.gtm;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import com.google.android.gms.common.util.VisibleForTesting;
import ff.a;
import qe.i;

@VisibleForTesting
/* loaded from: classes3.dex */
public final class zzcb implements ServiceConnection {
    final /* synthetic */ zzcc zza;
    private volatile boolean zzb;
    private volatile zzey zzc;

    public zzcb(zzcc zzccVar) {
        this.zza = zzccVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x006f A[Catch: all -> 0x001e, TRY_ENTER, TryCatch #4 {all -> 0x001e, blocks: (B:6:0x000f, B:13:0x0022, B:15:0x002e, B:17:0x0038, B:19:0x0040, B:29:0x005b, B:21:0x006f, B:23:0x0073, B:27:0x008e, B:34:0x0052, B:35:0x003b, B:36:0x0048), top: B:4:0x000d, outer: #3 }] */
    /* JADX WARN: Removed duplicated region for block: B:28:0x005b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // android.content.ServiceConnection
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        zzey zzeyVar;
        zzcb zzcbVar;
        if (Looper.getMainLooper() != Looper.myLooper()) {
            throw new IllegalStateException("AnalyticsServiceConnection.onServiceConnected");
        }
        synchronized (this) {
            try {
                if (iBinder == null) {
                    this.zza.zzJ("Service connected with null binder");
                    return;
                }
                try {
                    String interfaceDescriptor = iBinder.getInterfaceDescriptor();
                    if ("com.google.android.gms.analytics.internal.IAnalyticsService".equals(interfaceDescriptor)) {
                        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.analytics.internal.IAnalyticsService");
                        zzeyVar = queryLocalInterface instanceof zzey ? (zzey) queryLocalInterface : new zzey(iBinder);
                        try {
                            this.zza.zzO("Bound to IAnalyticsService interface");
                        } catch (RemoteException unused) {
                            this.zza.zzJ("Service connect failed to get IAnalyticsService");
                            if (zzeyVar != null) {
                            }
                        }
                    } else {
                        this.zza.zzK("Got binder with a wrong descriptor", interfaceDescriptor);
                        zzeyVar = null;
                    }
                } catch (RemoteException unused2) {
                    zzeyVar = null;
                }
                if (zzeyVar != null) {
                    try {
                        a a = a.a();
                        Context zzo = this.zza.zzo();
                        zzcbVar = this.zza.zza;
                        a.b(zzo, zzcbVar);
                    } catch (IllegalArgumentException unused3) {
                    }
                } else if (this.zzb) {
                    this.zzc = zzeyVar;
                } else {
                    this.zza.zzR("onServiceConnected received after the timeout limit");
                    i zzq = this.zza.zzq();
                    zzbz zzbzVar = new zzbz(this, zzeyVar, null);
                    zzq.getClass();
                    zzq.f16883b.submit(zzbzVar);
                }
            } finally {
                notifyAll();
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        if (Looper.getMainLooper() != Looper.myLooper()) {
            throw new IllegalStateException("AnalyticsServiceConnection.onServiceDisconnected");
        }
        i zzq = this.zza.zzq();
        zzca zzcaVar = new zzca(this, componentName);
        zzq.getClass();
        zzq.f16883b.submit(zzcaVar);
    }

    public final zzey zza() {
        zzcb zzcbVar;
        i.a();
        Intent intent = new Intent("com.google.android.gms.analytics.service.START");
        intent.setComponent(new ComponentName("com.google.android.gms", "com.google.android.gms.analytics.service.AnalyticsService"));
        Context zzo = this.zza.zzo();
        intent.putExtra("app_package_name", zzo.getPackageName());
        a a = a.a();
        synchronized (this) {
            this.zzc = null;
            this.zzb = true;
            zzcbVar = this.zza.zza;
            boolean c6 = a.c(zzo, zzo.getClass().getName(), intent, zzcbVar, 129, null);
            this.zza.zzP("Bind to service requested", Boolean.valueOf(c6));
            if (!c6) {
                this.zzb = false;
                return null;
            }
            try {
                this.zza.zzw();
                wait(zzeu.zzL.zzb().longValue());
            } catch (InterruptedException unused) {
                this.zza.zzR("Wait for service connect was interrupted");
            }
            this.zzb = false;
            zzey zzeyVar = this.zzc;
            this.zzc = null;
            if (zzeyVar == null) {
                this.zza.zzJ("Successfully bound to service but never got onServiceConnected callback");
            }
            return zzeyVar;
        }
    }
}
