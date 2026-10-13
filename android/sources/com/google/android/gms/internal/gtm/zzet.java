package com.google.android.gms.internal.gtm;

import com.google.android.gms.common.util.VisibleForTesting;

@VisibleForTesting
/* loaded from: classes3.dex */
public final class zzet<V> {
    private final zzes<V> zza;
    private final V zzb;
    private final V zzc;
    private final Object zzd = new Object();

    private zzet(V v5, V v6, zzes<V> zzesVar) {
        this.zzb = v5;
        this.zzc = v6;
        this.zza = zzesVar;
    }

    public static <T> zzet<T> zza(T t5, T t10, zzes<T> zzesVar) {
        return new zzet<>(t5, t10, zzesVar);
    }

    public final V zzb() {
        synchronized (this.zzd) {
        }
        return this.zzb;
    }
}
