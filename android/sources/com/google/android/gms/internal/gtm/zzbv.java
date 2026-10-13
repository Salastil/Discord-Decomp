package com.google.android.gms.internal.gtm;

import android.annotation.SuppressLint;
import android.content.Context;
import android.os.SystemClock;
import bf.t;
import gf.a;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import qe.b;
import qe.i;

@SuppressLint({"StaticFieldLeak"})
/* loaded from: classes3.dex */
public final class zzbv {
    private static volatile zzbv zza;
    private final Context zzb;
    private final Context zzc;
    private final a zzd;
    private final zzct zze;
    private final zzfb zzf;
    private final i zzg;
    private final zzbq zzh;
    private final zzcy zzi;
    private final zzft zzj;
    private final zzfh zzk;
    private final b zzl;
    private final zzcn zzm;
    private final zzbi zzn;
    private final zzcf zzo;
    private final zzcx zzp;

    public zzbv(zzbw zzbwVar) {
        Context zza2 = zzbwVar.zza();
        t.h(zza2, "Application context can't be null");
        Context zzb = zzbwVar.zzb();
        t.g(zzb);
        this.zzb = zza2;
        this.zzc = zzb;
        this.zzd = gf.b.a;
        this.zze = new zzct(this);
        zzfb zzfbVar = new zzfb(this);
        zzfbVar.zzX();
        this.zzf = zzfbVar;
        zzfb zzm = zzm();
        String str = zzbt.zza;
        StringBuilder sb2 = new StringBuilder(String.valueOf(str).length() + 134);
        sb2.append("Google Analytics ");
        sb2.append(str);
        sb2.append(" is starting up. To enable debug logging on a device run:\n  adb shell setprop log.tag.GAv4 DEBUG\n  adb logcat -s GAv4");
        zzm.zzM(sb2.toString());
        zzfh zzfhVar = new zzfh(this);
        zzfhVar.zzX();
        this.zzk = zzfhVar;
        zzft zzftVar = new zzft(this);
        zzftVar.zzX();
        this.zzj = zzftVar;
        zzbq zzbqVar = new zzbq(this, zzbwVar);
        zzcn zzcnVar = new zzcn(this);
        zzbi zzbiVar = new zzbi(this);
        zzcf zzcfVar = new zzcf(this);
        zzcx zzcxVar = new zzcx(this);
        if (i.f16882e == null) {
            synchronized (i.class) {
                try {
                    if (i.f16882e == null) {
                        i.f16882e = new i(zza2);
                    }
                } finally {
                }
            }
        }
        i iVar = i.f16882e;
        iVar.f16885d = new zzbu(this);
        this.zzg = iVar;
        b bVar = new b(this);
        new HashSet();
        zzcnVar.zzX();
        this.zzm = zzcnVar;
        zzbiVar.zzX();
        this.zzn = zzbiVar;
        zzcfVar.zzX();
        this.zzo = zzcfVar;
        zzcxVar.zzX();
        this.zzp = zzcxVar;
        zzcy zzcyVar = new zzcy(this);
        zzcyVar.zzX();
        this.zzi = zzcyVar;
        zzbqVar.zzX();
        this.zzh = zzbqVar;
        zzft zzq = ((zzbv) bVar.f3143e).zzq();
        zzq.zzf();
        if (zzq.zze()) {
            zzq.zzc();
        }
        zzq.zzf();
        this.zzl = bVar;
        zzbqVar.zzm();
    }

    public static zzbv zzg(Context context) {
        t.g(context);
        if (zza == null) {
            synchronized (zzbv.class) {
                if (zza == null) {
                    long elapsedRealtime = SystemClock.elapsedRealtime();
                    zzbv zzbvVar = new zzbv(new zzbw(context));
                    zza = zzbvVar;
                    ArrayList arrayList = b.f16880i;
                    synchronized (b.class) {
                        try {
                            ArrayList arrayList2 = b.f16880i;
                            if (arrayList2 != null) {
                                Iterator it = arrayList2.iterator();
                                while (it.hasNext()) {
                                    ((Runnable) it.next()).run();
                                }
                                b.f16880i = null;
                            }
                        } finally {
                        }
                    }
                    long elapsedRealtime2 = SystemClock.elapsedRealtime() - elapsedRealtime;
                    Long zzb = zzeu.zzQ.zzb();
                    if (elapsedRealtime2 > zzb.longValue()) {
                        zzbvVar.zzm().zzT("Slow initialization (ms)", Long.valueOf(elapsedRealtime2), zzb);
                    }
                }
            }
        }
        return zza;
    }

    private static final void zzs(zzbs zzbsVar) {
        t.h(zzbsVar, "Analytics service not created/initialized");
        t.a("Analytics service not initialized", zzbsVar.zzY());
    }

    public final Context zza() {
        return this.zzb;
    }

    public final Context zzb() {
        return this.zzc;
    }

    public final i zzd() {
        t.g(this.zzg);
        return this.zzg;
    }

    public final zzbq zzf() {
        zzs(this.zzh);
        return this.zzh;
    }

    public final zzct zzj() {
        return this.zze;
    }

    public final zzcy zzl() {
        zzs(this.zzi);
        return this.zzi;
    }

    public final zzfb zzm() {
        zzs(this.zzf);
        return this.zzf;
    }

    public final zzfb zzn() {
        return this.zzf;
    }

    public final zzfh zzo() {
        zzs(this.zzk);
        return this.zzk;
    }

    public final zzfh zzp() {
        zzfh zzfhVar = this.zzk;
        if (zzfhVar == null || !zzfhVar.zzY()) {
            return null;
        }
        return this.zzk;
    }

    public final zzft zzq() {
        zzs(this.zzj);
        return this.zzj;
    }

    public final a zzr() {
        return this.zzd;
    }
}
