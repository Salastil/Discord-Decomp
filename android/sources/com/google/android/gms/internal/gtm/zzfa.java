package com.google.android.gms.internal.gtm;

import a3.e;
import android.annotation.SuppressLint;
import android.util.Log;
import com.google.android.gms.common.util.VisibleForTesting;
import qe.c;

@VisibleForTesting
@Deprecated
/* loaded from: classes3.dex */
public abstract class zzfa {
    private static volatile c zza = new zzcu();

    @SuppressLint({"LogTagMismatch"})
    public static void zzb(String str, Object obj) {
        String str2;
        zzfb zza2 = zzfb.zza();
        if (zza2 != null) {
            zza2.zzK(str, obj);
        } else if (zzf(3)) {
            if (obj != null) {
                String str3 = (String) obj;
                str2 = e.n(new StringBuilder(str.length() + 1 + str3.length()), str, ":", str3);
            } else {
                str2 = str;
            }
            Log.e(zzeu.zzc.zzb(), str2);
        }
        c cVar = zza;
        if (cVar != null) {
            cVar.error(str);
        }
    }

    public static boolean zzf(int i5) {
        return zza != null && zza.getLogLevel() <= i5;
    }
}
