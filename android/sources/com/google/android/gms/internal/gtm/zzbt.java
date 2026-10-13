package com.google.android.gms.internal.gtm;

import ye.f;

/* loaded from: classes3.dex */
public abstract class zzbt {
    public static final String zza;
    public static final String zzb;

    static {
        String replaceAll = String.valueOf(f.a / 1000).replaceAll("(\\d+)(\\d)(\\d\\d)", "$1.$2.$3");
        zza = replaceAll;
        String valueOf = String.valueOf(replaceAll);
        zzb = valueOf.length() != 0 ? "ma".concat(valueOf) : new String("ma");
    }
}
