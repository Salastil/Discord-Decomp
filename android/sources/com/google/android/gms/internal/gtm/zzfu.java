package com.google.android.gms.internal.gtm;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;

/* loaded from: classes3.dex */
public abstract class zzfu {
    public static final int zza;

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0025, code lost:
    
        if (r0.charAt(0) <= 'Z') goto L15;
     */
    static {
        int i5 = Build.VERSION.SDK_INT;
        int i6 = 33554432;
        if (i5 < 31) {
            if (i5 >= 30) {
                String str = Build.VERSION.CODENAME;
                if (str.length() == 1) {
                    if (str.charAt(0) >= 'S') {
                    }
                }
            }
            i6 = 0;
        }
        zza = i6;
    }

    public static PendingIntent zza(Context context, int i5, Intent intent, int i6) {
        return PendingIntent.getBroadcast(context, 0, intent, i6);
    }
}
