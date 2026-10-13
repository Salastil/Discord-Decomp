package com.google.android.gms.internal.play_billing;

import android.os.SystemClock;

/* loaded from: classes3.dex */
public abstract class l {
    public static final a2 a;

    static {
        k kVar;
        try {
            SystemClock.elapsedRealtimeNanos();
            kVar = new k(0);
        } catch (Throwable unused) {
            SystemClock.elapsedRealtime();
            kVar = new k(1);
        }
        a = kVar;
    }
}
