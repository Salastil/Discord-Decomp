package com.google.android.gms.internal.gtm;

import android.os.SystemClock;
import bf.t;
import gf.a;
import gf.b;

/* loaded from: classes3.dex */
final class zzfo {
    private final a zza;
    private long zzb;

    public zzfo(a aVar) {
        t.g(aVar);
        this.zza = aVar;
    }

    public final void zza() {
        this.zzb = 0L;
    }

    public final void zzb() {
        ((b) this.zza).getClass();
        this.zzb = SystemClock.elapsedRealtime();
    }

    public final boolean zzc(long j) {
        if (this.zzb == 0) {
            return true;
        }
        ((b) this.zza).getClass();
        return SystemClock.elapsedRealtime() - this.zzb > j;
    }
}
