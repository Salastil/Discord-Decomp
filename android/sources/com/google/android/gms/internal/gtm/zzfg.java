package com.google.android.gms.internal.gtm;

import android.content.SharedPreferences;
import bf.t;
import com.google.android.gms.common.util.VisibleForTesting;
import gf.b;
import java.util.UUID;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class zzfg {
    final /* synthetic */ zzfh zza;
    private final String zzb;
    private final long zzc;

    public /* synthetic */ zzfg(zzfh zzfhVar, String str, long j, zzff zzffVar) {
        this.zza = zzfhVar;
        t.d("monitoring");
        t.b(j > 0);
        this.zzb = "monitoring";
        this.zzc = j;
    }

    private final long zzd() {
        SharedPreferences sharedPreferences;
        sharedPreferences = this.zza.zza;
        return sharedPreferences.getLong(zzf(), 0L);
    }

    private final String zze() {
        return this.zzb.concat(":count");
    }

    private final String zzf() {
        return this.zzb.concat(":start");
    }

    private final void zzg() {
        SharedPreferences sharedPreferences;
        ((b) this.zza.zzC()).getClass();
        long currentTimeMillis = System.currentTimeMillis();
        sharedPreferences = this.zza.zza;
        SharedPreferences.Editor edit = sharedPreferences.edit();
        edit.remove(zze());
        edit.remove(zzb());
        edit.putLong(zzf(), currentTimeMillis);
        edit.commit();
    }

    @VisibleForTesting
    public final String zzb() {
        return this.zzb.concat(":value");
    }

    public final void zzc(String str) {
        SharedPreferences sharedPreferences;
        SharedPreferences sharedPreferences2;
        SharedPreferences sharedPreferences3;
        if (zzd() == 0) {
            zzg();
        }
        if (str == null) {
            str = "";
        }
        synchronized (this) {
            try {
                sharedPreferences = this.zza.zza;
                long j = sharedPreferences.getLong(zze(), 0L);
                if (j <= 0) {
                    sharedPreferences3 = this.zza.zza;
                    SharedPreferences.Editor edit = sharedPreferences3.edit();
                    edit.putString(zzb(), str);
                    edit.putLong(zze(), 1L);
                    edit.apply();
                    return;
                }
                long leastSignificantBits = UUID.randomUUID().getLeastSignificantBits() & LongCompanionObject.MAX_VALUE;
                long j5 = j + 1;
                long j7 = LongCompanionObject.MAX_VALUE / j5;
                sharedPreferences2 = this.zza.zza;
                SharedPreferences.Editor edit2 = sharedPreferences2.edit();
                if (leastSignificantBits < j7) {
                    edit2.putString(zzb(), str);
                }
                edit2.putLong(zze(), j5);
                edit2.apply();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
