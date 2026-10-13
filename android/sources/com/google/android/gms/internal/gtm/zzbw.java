package com.google.android.gms.internal.gtm;

import android.content.Context;
import bf.t;

/* loaded from: classes3.dex */
public final class zzbw {
    private final Context zza;
    private final Context zzb;

    public zzbw(Context context) {
        t.g(context);
        Context applicationContext = context.getApplicationContext();
        t.h(applicationContext, "Application context can't be null");
        this.zza = applicationContext;
        this.zzb = applicationContext;
    }

    public final Context zza() {
        return this.zza;
    }

    public final Context zzb() {
        return this.zzb;
    }
}
